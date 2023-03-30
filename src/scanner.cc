#include <cassert>
#include <cstdio>  // TODO: Remove
#include <cwctype>
#include <deque>
#include <string_view>
#include <vector>

#include "tree_sitter/parser.h"

namespace {
enum TokenType {
  TOKEN_EOF,
  SPACE,
  PARBREAK,
  INDENT,
  DEDENT,
  RAW,
  LINK_END,
  TEXT,
  DELIM_STRONG,
  DELIM_EMPH,
  HEADING_START,
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
  bool not_empty;

 public:
  Lexer(TSLexer *lexer) {
    this->lexer = lexer;
    this->not_empty = false;
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
    this->not_empty = true;
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
  /// called. Proceed with caution.
  bool bite_if(std::u32string_view str) {
    for (char32_t ch : str) {
      if (!this->bite_if(ch)) {
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
  bool eat_if(std::u32string_view str) {
    this->bite_if(str);
    this->swallow();
    return true;
  }

  /// Skip whitespace.
  void skip() {
    this->lexer->advance(lexer, false);
    this->swallow();
  }

  /// Specifies the recognized symbol, returns true for convenience.
  ScanResult recognized(TSSymbol symbol) {
    this->lexer->result_symbol = symbol;
    return this->not_empty ? MATCH : BREAK;
  }

  bool at_line_start() { return this->lexer->get_column(lexer) == 0; }

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
    buffer[cursor++] = this->newline ? 1 : 0;

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
    this->newline = true;
    if (length == 0) {
      return;
    }

    size_t cursor = 0;
    this->ends_with_word = buffer[cursor++] != 0;
    this->newline = buffer[cursor++] != 0;
    for (; cursor < length; cursor += 2) {
      uint16_t indent_length = static_cast<uint16_t>(buffer[cursor]) |
                               (static_cast<uint16_t>(buffer[cursor + 1]) << 8);
      this->indent_length_stack.push_back(indent_length);
    }
  }

  bool scan(Lexer &lexer, const bool *valid_symbols) {
    bool ends_with_word = this->ends_with_word;
    this->ends_with_word = false;

    if (lexer.eof()) {
      if (valid_symbols[TOKEN_EOF]) {
        lexer.recognized(TOKEN_EOF);
        return true;
      } else {
        return false;
      }
    }

    HANDLE_SCAN_RESULT(this->scan_space(lexer, valid_symbols));
    bool newline = this->newline;
    this->newline = false;

    if (valid_symbols[HEADING_START] && newline && lexer.eat_if('=')) {
      while (lexer.eat_if('='))
        ;
      HANDLE_SCAN_RESULT(lexer.recognized(HEADING_START));
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

    if (valid_symbols[RAW] && lexer.eat_if('`')) {
      HANDLE_SCAN_RESULT(this->scan_raw(lexer));
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
  bool newline;

  ScanResult scan_space(Lexer &lexer, const bool *valid_symbols) {
    bool started_at_line_start = lexer.at_line_start();
    bool is_at_first_char = true;
    uint32_t indent_length = 0;
    uint32_t newline_count = 0;
    bool is_space = false;
    for (;;) {
      switch (lexer.peek()) {
        case ' ': {
          lexer.eat();
          is_space = true;
          indent_length++;
          break;
        }
        case '\t': {
          lexer.eat();
          is_space = true;
          indent_length += 8;
          break;
        }
        case '\r': {
          // CRLF should be considered as one newline, not two.
          lexer.eat();
          lexer.eat_if('\n');
          is_space = true;
          newline_count++;
          indent_length = 0;
          break;
        }
        case '\n':
        case '\x0B':
        case '\x0C':
        case 0x85:
        case 0x2028:
        case 0x2029: {
          // Newline
          lexer.eat();
          is_space = true;
          newline_count++;
          indent_length = 0;
          break;
        }
        default: {
          // Anything other than whitespace.
          this->newline = started_at_line_start || newline_count > 0 || (is_at_first_char && this->newline);
          if (valid_symbols[PARBREAK] && newline_count >= 2) {
            return lexer.recognized(PARBREAK);
          } else if (valid_symbols[SPACE] && is_space && newline_count < 2) {
            return lexer.recognized(SPACE);
          } else if (is_space) {
            return BREAK;
          } else {
            return CONTINUE;
          }
        }
      }
      is_at_first_char = false;
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
        case '#': {
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
          if (ch1 == '_' || std::iswspace(static_cast<wint_t>(ch1))) {
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

  ScanResult scan_raw(Lexer &lexer) {
    uint32_t backticks_opened = 1;
    while (lexer.eat_if('`')) {
      backticks_opened++;
    }
    if (backticks_opened == 2) {
      return lexer.recognized(RAW);
    }

    uint32_t backticks_closed = 0;
    while (backticks_closed < backticks_opened) {
      if (lexer.eof()) {
        return BREAK;
      }
      if (lexer.eat() == '`') {
        backticks_closed++;
      } else {
        backticks_closed = 0;
      }
    }

    return lexer.recognized(RAW);
  }

  ScanResult scan_link(Lexer &lexer) {
    while (!lexer.eof()) {
      char32_t ch = lexer.peek();
      if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') ||
          ('0' <= ch && ch <= '9')) {
        lexer.eat();
        continue;
      }
      switch (ch) {
        case '~':
        case '/':
        case '%':
        case '?':
        case '#':
        case '&':
        case '+':
        case '=':
        case '\'':
        case ',':
        case ';': {
          lexer.eat();
          break;
        }
        case '.': {
          lexer.swallow();
          lexer.bite();
          break;
        }
        default: {
          return lexer.recognized(LINK_END);
        }
      }
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