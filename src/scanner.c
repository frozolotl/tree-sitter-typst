#include <tree_sitter/parser.h>
// #include <unicode/uchar.h>
#include <wctype.h>

enum TokenType {
  // TEXT,
  EOF,
};

void *tree_sitter_typst_external_scanner_create() { return NULL; }
void tree_sitter_typst_external_scanner_destroy(void *p) {}
void tree_sitter_typst_external_scanner_reset(void *p) {}
unsigned tree_sitter_typst_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_typst_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }

bool tree_sitter_typst_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  if (lexer->eof(lexer)) {
    if (valid_symbols[EOF]) {
      lexer->result_symbol = EOF;
      return true;
    }
    return false;
  }

  // if (valid_symbols[TEXT]) {
  //   bool at_least_one_char = false;
  //   for (;;) {
  //     if (iswblank(lexer->lookahead)) {
  //       advance(lexer);
  //       mark_end(lexer);
  //       return true;
  //     }
  //     switch (lexer->lookahead) {
  //       case ' ': {
  //         advance(lexer);
  //         if (iswalnum(lexer->lookahead)) {
  //           break;
  //         }
  //         mark_end(lexer);
  //         return true;
  //       }
  //       case '/': {
  //         mark_end(lexer);
  //         advance(lexer);
  //         if (lexer->lookahead == '/' || lexer->lookahead == '*') {
  //           return true;
  //         }
  //         break;
  //       }
  //       case '\t':
  //       case '\n':
  //       case '\x0b':
  //       case '\x0c':
  //       case '\r':
  //       case '\\':
  //       case '[':
  //       case ']':
  //       case '{':
  //       case '}':
  //       case '~':
  //       case '-':
  //       case '.':
  //       case '\'':
  //       case '"':
  //       case '*':
  //       case '_':
  //       case ':':
  //       case 'h':
  //       case '`':
  //       case '$':
  //       case '<':
  //       case '>':
  //       case '@':
  //       case '#': {
  //         mark_end(lexer);
  //         return at_least_one_char;
  //       }
  //       default: {
  //         advance(lexer);
  //         break;
  //       }
  //     }
  //     if (lexer->eof(lexer)) {
  //       mark_end(lexer);
  //       return at_least_one_char;
  //     }
  //     at_least_one_char = true;
  //     lexer->result_symbol = TEXT;
  //   }
  // }

  return false;
}
