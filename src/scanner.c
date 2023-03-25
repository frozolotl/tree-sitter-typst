#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  EOF,
  RAW,
  TEXT,
};

void *tree_sitter_typst_external_scanner_create() { return NULL; }
void tree_sitter_typst_external_scanner_destroy(void *p) {}
void tree_sitter_typst_external_scanner_reset(void *p) {}
unsigned tree_sitter_typst_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_typst_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }
static bool eof(TSLexer *lexer) { return lexer->eof(lexer); }

static bool parse_text(TSLexer *lexer);

bool tree_sitter_typst_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (eof(lexer)) {
    if (valid_symbols[EOF]) {
      lexer->result_symbol = EOF;
      return true;
    }
    return false;
  }

  if (valid_symbols[RAW] && lexer->lookahead == '`') {
    size_t backticks = 0;
    do {
      ++backticks;
      advance(lexer);
    } while (lexer->lookahead == '`');
    if (backticks == 2) {
      lexer->result_symbol = RAW;
      return true;
    }
    size_t found = 0;
    while (found < backticks) {
      if (eof(lexer)) {
        return false;
      }
      if (lexer->lookahead == '`') {
        ++found;
      } else {
        found = 0;
      }
      advance(lexer);
    }
    lexer->result_symbol = RAW;
    return true;
  }

  if (valid_symbols[TEXT]) {
    return parse_text(lexer);
  }

  return false;
}

static bool parse_text(TSLexer *lexer) {
  // At the moment, this is a faithful C reimplementation of
  // https://github.com/typst/typst/blob/e70ec5f3c06312b7ff2388630e05e3c2d745896f/src/syntax/lexer.rs#L318-L357
  // That may not be desirable for two reasons:
  // - Text tokens may be split up in places they should not have to be.
  // - We may get away with doing this using pure tree-sitter grammars.
  lexer->result_symbol = TEXT;

  bool non_empty = false;
  for (;;) {
    mark_end(lexer);
    if (eof(lexer)) {
      return non_empty;
    }

    switch (lexer->lookahead) {
      case ' ': {
        advance(lexer);
        // FIXME: Will not work correctly on non-UTF-8 locales.
        if (iswalnum(lexer->lookahead)) {
          // Continue sentences.
          goto cont;
        } else {
          return non_empty;
        }
      }
      case '/': {
        advance(lexer);
        if (lexer->lookahead == '/' || lexer->lookahead == '*') {
          // Cancel when we find a comment.
          return non_empty;
        } else {
          goto cont;
        }
      }
      case '-': {
        advance(lexer);
        if (lexer->lookahead == '-' || lexer->lookahead == '?') {
          // Cancel when we find shorthand `--` or `-?`.
          return non_empty;
        } else {
          goto cont;
        }
      }
      case '.': {
        advance(lexer);
        if (lexer->lookahead != '.') {
          goto cont;
        }
        advance(lexer);
        if (lexer->lookahead != '.') {
          goto cont;
        }
        // Cancel at shorthand `...`
        return non_empty;
      }
      case 'h': {
        advance(lexer);
        if (lexer->lookahead != 't') {
          goto cont;
        }
        advance(lexer);
        if (lexer->lookahead != 't') {
          goto cont;
        }
        advance(lexer);
        if (lexer->lookahead != 'p') {
          goto cont;
        }
        advance(lexer);
        if (lexer->lookahead != 's') {
          if (lexer->lookahead != ':') {
            goto cont;
          }
          // Don't advance. Lookahead is still `:`.
        } else {
          // Advance. A `:` should be next.
          advance(lexer);
        }
        if (lexer->lookahead != ':') {
          goto cont;
        }
        advance(lexer);
        if (lexer->lookahead != '/') {
          goto cont;
        }
        advance(lexer);
        if (lexer->lookahead != '/') {
          goto cont;
        }
        // Cancel at URL `http://`, `https://`
        return non_empty;
      }
      case '@': {
        advance(lexer);
        // FIXME: This here should be a check for XID_Start. Not one for alphabetic characters.
        if (iswalpha(lexer->lookahead) || lexer->lookahead == '_') {
          return non_empty;
        } else {
          goto cont;
        }
      }
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
        return non_empty;
      }
      default: {
        // FIXME: Will not work correctly on non-UTF-8 locales.
        if (iswspace(lexer->lookahead)) {
          return non_empty;
        }
        goto next;
      }
    }

    // Continue and advance
  next:
    advance(lexer);

    // Continue without advancing
  cont:
    mark_end(lexer);
    non_empty = true;
    continue;
  }
  return false;
}
