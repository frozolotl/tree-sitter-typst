#include <cassert>
#include <cwctype>
#include <deque>
#include <vector>
#include <cstdio>

#include "tree_sitter/parser.h"

namespace {
enum TokenType {
  ERROR_SENTINEL,
  TOKEN_EOF,

  SPACE,
  PARBREAK,
  ONE_NEWLINE,
  ANY_NEWLINE,
  HEADING_START,
  INDENT,
  DEDENT,
  /// Commands the next use of `Scanner::is_new_line` to be true.
  CONTENT_BLOCK_OPEN,
  CONTENT_BLOCK_CLOSE,
  BLOCK_COMMENT_START,

  EMBEDDED_CODE_EXPR_END,
  EMBEDDED_CODE_STMT_END,

  RAW_OPEN_INLINE,
  RAW_OPEN_BLOCK,
  RAW_CLOSE,

  LINK_END,
  TEXT,
  DELIM_STRONG,
  DELIM_EMPH,
};

enum ScanResult {
  MATCH,
  CONTINUE,
  BREAK,
};

#define HANDLE_SCAN_RESULT(R) \
  switch (R) {                \
    case MATCH:               \
      return true;            \
    case CONTINUE:            \
      break;                  \
    case BREAK:               \
      return false;           \
  }

class Lexer {
 private:
  TSLexer *lexer;
  bool empty;

 public:
  Lexer(TSLexer *lexer) {
    this->lexer = lexer;
    this->empty = true;
  }

  /// Returns the current lookahead.
  char32_t peek() { return static_cast<char32_t>(this->lexer->lookahead); }

  /// Return the lookahead and advance without marking a new end.
  char32_t bite() {
    char32_t ch = static_cast<char32_t>(this->lexer->lookahead);
    this->lexer->advance(lexer, false);
    return ch;
  }

  /// Marks the current end of the token.
  ///
  /// I'm sorry for taking the `eat' analogy so far.
  void swallow() {
    this->lexer->mark_end(lexer);
    this->empty = false;
  }

  /// Return the lookahead and advance.
  char32_t eat() {
    char32_t ch = this->bite();
    this->swallow();
    return ch;
  }

  /// Advance and return true if the next character is `ch` without marking a
  /// new end.
  bool bite_if(char32_t ch) {
    if (this->peek() == ch) {
      this->bite();
      return true;
    } else {
      return false;
    }
  }

  /// Advance and return true if the provided string is next without marking a
  /// new end.
  ///
  /// Warning: The lexer will be in an invalid state after this function was
  /// called and returned false. Proceed with caution.
  bool bite_if(const char32_t *s) {
    for (; *s; ++s) {
      if (!this->bite_if(*s)) {
        return false;
      }
    }
    return true;
  }

  /// Advance and return true if the next character is `ch`.
  bool eat_if(char32_t ch) {
    if (this->peek() == ch) {
      this->eat();
      return true;
    } else {
      return false;
    }
  }

  /// Advance and return true if the provided string is next.
  ///
  /// Warning: The lexer will be in an invalid state after this function was
  /// called and returned false. Proceed with caution.
  bool eat_if(const char32_t *s) {
    this->bite_if(s);
    this->swallow();
    return true;
  }

  /// Skip whitespace.
  void skip() {
    this->lexer->advance(lexer, true);
    this->swallow();
  }

  /// Skip whitespace.
  bool skip_if(char32_t ch) {
    if (this->peek() == ch) {
      this->skip();
      return true;
    } else {
      return false;
    }
  }

  /// Specifies the recognized symbol.
  /// For convenience, returns a scan result depending on whether anything was
  /// swallowed.
  ScanResult recognized(TSSymbol symbol) {
    this->lexer->result_symbol = symbol;
    return this->empty ? BREAK : MATCH;
  }

  bool at_line_start() { return this->lexer->get_column(lexer) == 0; }

  /// Whether anything was swallowed yet.
  bool is_empty() { return this->empty; }

  /// Whether the end of the input was reached.
  bool eof() {
    return this->lexer->lookahead == 0 && this->lexer->eof(this->lexer);
  }
};

class Scanner {
 public:
  Scanner() { this->deserialize(NULL, 0); }

  unsigned serialize(char *buffer) {
    unsigned cursor = 0;

    buffer[cursor++] = this->ends_with_word ? 1 : 0;
    buffer[cursor++] = this->is_new_line ? 1 : 0;
    buffer[cursor++] = this->start_line ? 1 : 0;
    buffer[cursor++] = static_cast<char>(this->backticks_opened);
    buffer[cursor++] = static_cast<char>(this->backticks_opened << 8);

    assert(cursor + this->indent_length_stack.size() * 2 <
           TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
    for (uint8_t indent_length : this->indent_length_stack) {
      buffer[cursor++] = static_cast<char>(indent_length);
      buffer[cursor++] = static_cast<char>(indent_length << 8);
    }
    return cursor;
  }

  void deserialize(const char *buffer, unsigned length) {
    // Default values.
    this->indent_length_stack.clear();
    this->ends_with_word = false;
    this->is_new_line = true;
    this->start_line = false;
    this->backticks_opened = 0;
    if (length == 0) {
      return;
    }

    size_t cursor = 0;
    this->ends_with_word = buffer[cursor++] != 0;
    this->is_new_line = buffer[cursor++] != 0;
    this->start_line = buffer[cursor++] != 0;
    this->backticks_opened = static_cast<uint16_t>(buffer[cursor]) |
                             (static_cast<uint16_t>(buffer[cursor + 1]) << 8);
    cursor += 2;
    for (; cursor < length; cursor += 2) {
      uint16_t indent_length = static_cast<uint16_t>(buffer[cursor]) |
                               (static_cast<uint16_t>(buffer[cursor + 1]) << 8);
      this->indent_length_stack.push_back(indent_length);
    }
  }

  bool scan(Lexer &lexer, const bool *valid_symbols) {
    bool ends_with_word = this->ends_with_word;
    this->ends_with_word = false;

    if (valid_symbols[EMBEDDED_CODE_STMT_END]) {
      HANDLE_SCAN_RESULT(this->scan_embedded_code_stmt_end(lexer));
    }

    if (lexer.eof()) {
      if (valid_symbols[TOKEN_EOF]) {
        lexer.recognized(TOKEN_EOF);
        return true;
      } else {
        return false;
      }
    }

    ScanResult scan_space_result = this->scan_space(lexer, valid_symbols);

    if (valid_symbols[HEADING_START] && this->is_new_line &&
        lexer.eat_if('=')) {
      while (lexer.eat_if('='))
        ;
      this->is_new_line = false;
      HANDLE_SCAN_RESULT(lexer.recognized(HEADING_START));
    }

    if (valid_symbols[BLOCK_COMMENT_START] && lexer.eat_if('/')) {
      if (lexer.eat_if('*')) {
        lexer.swallow();
        this->start_line = this->is_new_line;
        HANDLE_SCAN_RESULT(lexer.recognized(BLOCK_COMMENT_START));
      } else {
        HANDLE_SCAN_RESULT(scan_space_result);
        return false;
      }
    }

    HANDLE_SCAN_RESULT(scan_space_result);

    if (valid_symbols[EMBEDDED_CODE_EXPR_END] && lexer.eat_if(';')) {
      HANDLE_SCAN_RESULT(lexer.recognized(EMBEDDED_CODE_EXPR_END));
    }

    if (valid_symbols[CONTENT_BLOCK_OPEN] && lexer.eat_if('[')) {
      this->start_line = true;
      HANDLE_SCAN_RESULT(lexer.recognized(CONTENT_BLOCK_OPEN));
    }
    if (valid_symbols[CONTENT_BLOCK_CLOSE] && lexer.eat_if(']')) {
      this->start_line = false;
      HANDLE_SCAN_RESULT(lexer.recognized(CONTENT_BLOCK_CLOSE));
    }

    if (valid_symbols[DELIM_STRONG] && lexer.eat_if('*')) {
      bool word_before = ends_with_word;
      bool word_after = std::iswalnum(static_cast<wint_t>(lexer.peek()));
      if (!word_before || !word_after) {
        HANDLE_SCAN_RESULT(lexer.recognized(DELIM_STRONG));
      } else {
        return false;
      }
    }
    if (valid_symbols[DELIM_EMPH] && lexer.eat_if('_')) {
      bool word_before = ends_with_word;
      bool word_after = std::iswalnum(static_cast<wint_t>(lexer.peek()));
      if (!word_before || !word_after) {
        HANDLE_SCAN_RESULT(lexer.recognized(DELIM_EMPH));
      } else {
        return false;
      }
    }

    if (valid_symbols[RAW_OPEN_INLINE] || valid_symbols[RAW_OPEN_BLOCK] ||
        valid_symbols[RAW_CLOSE]) {
      HANDLE_SCAN_RESULT(this->scan_raw(lexer, valid_symbols));
    }

    if (valid_symbols[LINK_END]) {
      HANDLE_SCAN_RESULT(this->scan_link(lexer));
    }

    if (valid_symbols[TEXT]) {
      HANDLE_SCAN_RESULT(this->scan_text(lexer));
    }

    return false;
  }

 private:
  std::vector<uint16_t> indent_length_stack;
  bool ends_with_word;
  bool is_new_line;
  bool start_line;
  uint16_t backticks_opened;

  ScanResult scan_embedded_code_stmt_end(Lexer &lexer) {
    if (lexer.eof()) {
      lexer.recognized(EMBEDDED_CODE_STMT_END);
      return MATCH;
    }
    if (lexer.eat_if(';')) {
      return lexer.recognized(EMBEDDED_CODE_STMT_END);
    }
    // End if a newline is detected, but don't consume it.
    // That way, parbreaks are still parsed correctly.
    switch (lexer.peek()) {
      case '\r':
      case '\n':
      case '\x0B':
      case '\x0C':
      case 0x85:
      case 0x2028:
      case 0x2029: {
        lexer.recognized(EMBEDDED_CODE_STMT_END);
        return MATCH;
      }
    }
    return CONTINUE;
  }

  ScanResult scan_space(Lexer &lexer, const bool *valid_symbols) {
    bool newline_allowed = valid_symbols[PARBREAK] ||
                           valid_symbols[ONE_NEWLINE] ||
                           valid_symbols[ANY_NEWLINE];
    if (!valid_symbols[SPACE] && !newline_allowed) {
      return CONTINUE;
    }

    bool started_at_line_start = lexer.at_line_start();
    uint32_t indent_length = 0;
    uint32_t newline_count = 0;
    bool is_space = false;
    for (;;) {
      switch (lexer.peek()) {
        case ' ': {
          lexer.skip();
          is_space = true;
          indent_length++;
          break;
        }
        case '\t': {
          lexer.skip();
          is_space = true;
          indent_length += 8;
          break;
        }
        case '\r': {
          if (newline_allowed) {
            // CRLF should be considered as one newline, not two.
            lexer.skip();
            lexer.skip_if('\n');
            is_space = true;
            newline_count++;
            indent_length = 0;
            break;
          }
        }
        case '\n':
        case '\x0B':
        case '\x0C':
        case 0x85:
        case 0x2028:
        case 0x2029: {
          if (newline_allowed) {
            // Newline
            lexer.skip();
            is_space = true;
            newline_count++;
            indent_length = 0;
            break;
          }
        }
        default: {
          this->is_new_line =
              this->start_line || newline_count > 0 || started_at_line_start;
          this->start_line = false;
          if (valid_symbols[PARBREAK] && newline_count >= 2) {
            return lexer.recognized(PARBREAK);
          } else if (valid_symbols[ONE_NEWLINE] && newline_count == 1) {
            return lexer.recognized(ONE_NEWLINE);
          } else if (valid_symbols[ANY_NEWLINE] && newline_count >= 1) {
            return lexer.recognized(ANY_NEWLINE);
          } else if (valid_symbols[SPACE] && is_space && newline_count == 0) {
            return lexer.recognized(SPACE);
          } else if (is_space) {
            return BREAK;
          } else {
            return CONTINUE;
          }
        }
      }
    }
  }

  ScanResult scan_text(Lexer &lexer) {
    for (;;) {
      char32_t ch0 = lexer.bite();
      char32_t ch1 = lexer.peek();
      this->ends_with_word = std::iswalnum(static_cast<wint_t>(ch1));
      switch (ch0) {
        case '\t':
        case '\n':
        case '\x0B':
        case '\x0C':
        case '\r':
        case '\\':
        case '[':
        case ']':
        case '{':
        case '}':
        case '~':
        case '\'':
        case '"':
        case '*':
        case '_':
        case ':':
        case '`':
        case '$':
        case '<':
        case '>':
        case '#':
        case '=': {
          return lexer.recognized(TEXT);
        }
        case ' ': {
          // Cancel if the next character might be the start of another token.
          if (!std::iswalnum(static_cast<wint_t>(ch1))) {
            return lexer.recognized(TEXT);
          }
          break;
        }
        case '/': {
          // Cancel for comments.
          if (ch1 == '/' || ch1 == '*') {
            return lexer.recognized(TEXT);
          }
          break;
        }
        case '-': {
          // Cancel for shorthands `--` and `-?`.
          if (ch1 == '-' || ch1 == '?') {
            return lexer.recognized(TEXT);
          }
          break;
        }
        case '.': {
          // Cancel for shorthand '...'.
          if (lexer.bite_if(U"..")) {
            return lexer.recognized(TEXT);
          }
          break;
        }
        case 'h': {
          // Cancel for URL schemes 'http://' and 'https://'.
          if (lexer.bite_if(U"ttp")) {
            lexer.bite_if('s');
            if (lexer.bite_if(U"://")) {
              return lexer.recognized(TEXT);
            }
          }
          break;
        }
        case '@': {
          if (lexer.eof() && lexer.is_empty()) {
            return BREAK;
          }
          if (ch1 == '_' || std::iswalpha(static_cast<wint_t>(ch1))) {
            return lexer.recognized(TEXT);
          }
          break;
        }
        default: {
          if (std::iswspace(static_cast<wint_t>(ch0))) {
            return lexer.recognized(TEXT);
          }
          if (lexer.eof()) {
            lexer.swallow();
            return lexer.recognized(TEXT);
          }
          break;
        }
      }
      lexer.swallow();
    }
  }

  ScanResult scan_raw(Lexer &lexer, const bool *valid_symbols) {
    if ((valid_symbols[RAW_OPEN_INLINE] || valid_symbols[RAW_OPEN_BLOCK]) &&
        lexer.eat_if('`')) {
      this->backticks_opened = 1;
      while (lexer.bite_if('`')) {
        this->backticks_opened++;
      }
      // Don't include the second backtick if only two backticks were found.
      // Two backticks are a single raw element.
      if (this->backticks_opened == 2) {
        this->backticks_opened = 1;
      } else {
        lexer.swallow();
      }
      if (this->backticks_opened >= 3) {
        return lexer.recognized(RAW_OPEN_BLOCK);
      } else {
        return lexer.recognized(RAW_OPEN_INLINE);
      }
    }

    if (valid_symbols[RAW_CLOSE]) {
      uint32_t backticks_closed = 0;
      while (backticks_closed < this->backticks_opened) {
        if (lexer.eat_if('`')) {
          backticks_closed++;
        } else {
          return BREAK;
        }
      }
      this->backticks_opened = 0;
      return lexer.recognized(RAW_CLOSE);
    }

    return CONTINUE;
  }

  ScanResult scan_link(Lexer &lexer) {
    std::vector<char32_t> bracket_stack;
    while (!lexer.eof()) {
      char32_t ch = lexer.peek();
      if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') ||
          ('0' <= ch && ch <= '9')) {
        lexer.eat();
        continue;
      }
      switch (ch) {
        case '#':
        case '$':
        case '%':
        case '&':
        case '*':
        case '+':
        case '-':
        case '/':
        case '=':
        case '@':
        case '_':
        case '~': {
          lexer.eat();
          break;
        }
        case '!':
        case ',':
        case '.':
        case ':':
        case ';':
        case '?':
        case '\'': {
          lexer.bite();
          break;
        }
        case '[':
        case '(': {
          bracket_stack.push_back(ch);
          lexer.eat();
          break;
        }
        case ']': {
          if (bracket_stack.empty() || bracket_stack.back() != '[') {
            return BREAK;
          }
          bracket_stack.pop_back();
          lexer.eat();
          break;
        }
        case ')': {
          if (bracket_stack.empty() || bracket_stack.back() != '(') {
            return BREAK;
          }
          bracket_stack.pop_back();
          lexer.eat();
          break;
        }
        default: {
          if (!bracket_stack.empty()) {
            return BREAK;
          }
          return lexer.recognized(LINK_END);
        }
      }
    }
    if (!bracket_stack.empty()) {
      return BREAK;
    }
    return lexer.recognized(LINK_END);
  }
};
}  // namespace

extern "C" {
void *tree_sitter_typst_external_scanner_create() { return new Scanner(); }
void tree_sitter_typst_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}
unsigned tree_sitter_typst_external_scanner_serialize(void *payload,
                                                      char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}
void tree_sitter_typst_external_scanner_deserialize(void *payload,
                                                    const char *buffer,
                                                    unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}
bool tree_sitter_typst_external_scanner_scan(void *payload, TSLexer *lexer,
                                             const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  Lexer lexer_wrapped(lexer);
  return scanner->scan(lexer_wrapped, valid_symbols);
}
}