#include <cassert>
#include <cwctype>
#include <deque>
#include <string_view>
#include <vector>

#include "tree_sitter/parser.h"

namespace {
enum TokenType {
  TOKEN_EOF,
  RAW,
  LINK_END,
  TEXT,
};

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

  /// Specifies the recognized symbol, returns true for convenience.
  bool recognized(TSSymbol symbol) {
    this->lexer->result_symbol = symbol;
    return this->not_empty;
  }

  /// Whether the end of the input was reached.
  bool eof() { return this->lexer->eof(this->lexer); }
};

class Scanner {
 public:
  Scanner() { this->deserialize(NULL, 0); }

  unsigned serialize(char *buffer) {
    unsigned cursor = 0;

    assert(cursor + this->indent_level_stack.size() <
           TREE_SITTER_SERIALIZATION_BUFFER_SIZE);
    for (uint8_t indent_level : this->indent_level_stack) {
      buffer[cursor++] = char(indent_level);
    }
    return cursor;
  }

  void deserialize(const char *buffer, unsigned length) {
    this->indent_level_stack.clear();
    if (length == 0) {
      return;
    }

    size_t cursor = 0;
    for (; cursor < length; cursor++) {
      this->indent_level_stack.push_back(static_cast<uint8_t>(buffer[cursor]));
    }
  }

  bool scan(Lexer &lexer, const bool *valid_symbols) {
    if (lexer.eof()) {
      if (valid_symbols[TOKEN_EOF]) {
        lexer.recognized(TOKEN_EOF);
        return true;
      } else {
        return false;
      }
    }

    if (valid_symbols[RAW] && lexer.eat_if('`')) {
      return this->scan_raw(lexer);
    }

    if (valid_symbols[LINK_END]) {
      return this->scan_link(lexer);
    }

    if (valid_symbols[TEXT]) {
      return this->scan_text(lexer);
    }

    return false;
  }

 private:
  std::vector<uint8_t> indent_level_stack;

  bool scan_text(Lexer &lexer) {
    for (;;) {
      char32_t ch0 = lexer.bite();
      char32_t ch1 = lexer.peek();
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
    return false;
  }

  bool scan_raw(Lexer &lexer) {
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
        return false;
      }
      if (lexer.eat() == '`') {
        backticks_closed++;
      } else {
        backticks_closed = 0;
      }
    }

    return lexer.recognized(RAW);
  }

  bool scan_link(Lexer &lexer) {
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