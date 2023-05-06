#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 276
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 14

enum {
  aux_sym__markup_expr_text_token1 = 1,
  sym_linebreak = 2,
  sym_escape = 3,
  sym_text_shorthand = 4,
  sym_smart_quote = 5,
  aux_sym_link_token1 = 6,
  anon_sym_LT = 7,
  aux_sym_label_token1 = 8,
  anon_sym_GT = 9,
  anon_sym_AT = 10,
  aux_sym_reference_token1 = 11,
  sym_heading_start = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_DASH_GT_GT = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_DASH_DASH_GT = 16,
  anon_sym_COLON_EQ = 17,
  anon_sym_COLON_COLON_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_DOT_DOT_DOT = 20,
  anon_sym_LT_EQ_EQ_GT = 21,
  anon_sym_LT_DASH_DASH_GT = 22,
  anon_sym_LT_DASH_DASH = 23,
  anon_sym_LT_DASH_LT = 24,
  anon_sym_LT_DASH_GT = 25,
  anon_sym_LT_LT_DASH = 26,
  anon_sym_LT_LT_LT = 27,
  anon_sym_LT_EQ_GT = 28,
  anon_sym_LT_EQ_EQ = 29,
  anon_sym_LT_TILDE_TILDE = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_LT_LT = 32,
  anon_sym_LT_DASH = 33,
  anon_sym_LT_TILDE = 34,
  anon_sym_GT_DASH_GT = 35,
  anon_sym_GT_GT_GT = 36,
  anon_sym_EQ_EQ_GT = 37,
  anon_sym_EQ_GT = 38,
  anon_sym_EQ_COLON = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_GT_GT = 41,
  anon_sym_PIPE_DASH_GT = 42,
  anon_sym_PIPE_EQ_GT = 43,
  anon_sym_TILDE_TILDE_GT = 44,
  anon_sym_TILDE_GT = 45,
  anon_sym_STAR = 46,
  anon_sym_SQUOTE = 47,
  anon_sym_DASH = 48,
  anon_sym_LBRACK_PIPE = 49,
  aux_sym_math_delimited_token1 = 50,
  anon_sym_PIPE_RBRACK = 51,
  aux_sym_math_delimited_token2 = 52,
  anon_sym_PIPE_PIPE = 53,
  sym__math_fence = 54,
  sym_math_align_point = 55,
  anon_sym_DOT = 56,
  anon_sym_LPAREN = 57,
  anon_sym_RPAREN = 58,
  anon_sym_COMMA = 59,
  anon_sym_SEMI = 60,
  anon_sym_COLON = 61,
  sym_math_text = 62,
  sym_math_ident = 63,
  anon_sym_LBRACK = 64,
  anon_sym_RBRACK = 65,
  sym_string = 66,
  sym_line_comment = 67,
  anon_sym_SLASH_STAR = 68,
  aux_sym_block_comment_token1 = 69,
  aux_sym_block_comment_token2 = 70,
  anon_sym_STAR_SLASH = 71,
  aux_sym__space_same_line_token1 = 72,
  sym__token_eof = 73,
  sym__space = 74,
  sym_parbreak = 75,
  sym__newline = 76,
  sym__indent = 77,
  sym__dedent = 78,
  sym_raw = 79,
  sym__link_end = 80,
  sym_text = 81,
  sym__delim_strong = 82,
  sym__delim_emph = 83,
  sym_source_file = 84,
  sym_markup = 85,
  sym__markup_expr_base = 86,
  sym__markup_expr_line_start_sof = 87,
  sym__markup_expr_line_start = 88,
  aux_sym__markup_expr_line_start_content = 89,
  sym__markup_expr_text = 90,
  sym_link = 91,
  sym_label = 92,
  sym_reference = 93,
  sym_strong = 94,
  sym__markup_strong = 95,
  sym_emph = 96,
  sym__markup_emph = 97,
  sym_heading = 98,
  sym__markup_same_line = 99,
  sym_equation = 100,
  sym_math = 101,
  sym__math_expr = 102,
  sym_math_shorthand = 103,
  sym_math_delimited = 104,
  sym__math_delimited_fence = 105,
  sym_math_field_access = 106,
  sym_math_function_call = 107,
  sym_math_args = 108,
  sym__math_arg = 109,
  sym_math_arg_named = 110,
  sym__math_text_ident = 111,
  sym_content_block = 112,
  sym__trivia = 113,
  sym_block_comment = 114,
  sym_space = 115,
  sym__whitespace_line = 116,
  sym__space_same_line = 117,
  aux_sym_markup_repeat1 = 118,
  aux_sym__markup_expr_line_start_sof_repeat1 = 119,
  aux_sym__markup_strong_repeat1 = 120,
  aux_sym__markup_emph_repeat1 = 121,
  aux_sym__markup_same_line_repeat1 = 122,
  aux_sym_math_repeat1 = 123,
  aux_sym_math_field_access_repeat1 = 124,
  aux_sym_math_args_repeat1 = 125,
  aux_sym_block_comment_repeat1 = 126,
  aux_sym__whitespace_line_repeat1 = 127,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__markup_expr_text_token1] = "text",
  [sym_linebreak] = "linebreak",
  [sym_escape] = "escape",
  [sym_text_shorthand] = "text_shorthand",
  [sym_smart_quote] = "smart_quote",
  [aux_sym_link_token1] = "link_token1",
  [anon_sym_LT] = "<",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
  [aux_sym_reference_token1] = "reference_token1",
  [sym_heading_start] = "heading_start",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DASH_GT_GT] = "->>",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_LT_EQ_EQ_GT] = "<==>",
  [anon_sym_LT_DASH_DASH_GT] = "<-->",
  [anon_sym_LT_DASH_DASH] = "<--",
  [anon_sym_LT_DASH_LT] = "<-<",
  [anon_sym_LT_DASH_GT] = "<->",
  [anon_sym_LT_LT_DASH] = "<<-",
  [anon_sym_LT_LT_LT] = "<<<",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_LT_EQ_EQ] = "<==",
  [anon_sym_LT_TILDE_TILDE] = "<~~",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_LT_TILDE] = "<~",
  [anon_sym_GT_DASH_GT] = ">->",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_EQ_EQ_GT] = "==>",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_EQ_COLON] = "=:",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PIPE_DASH_GT] = "|->",
  [anon_sym_PIPE_EQ_GT] = "|=>",
  [anon_sym_TILDE_TILDE_GT] = "~~>",
  [anon_sym_TILDE_GT] = "~>",
  [anon_sym_STAR] = "*",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK_PIPE] = "math_shorthand",
  [aux_sym_math_delimited_token1] = "math_delimited_token1",
  [anon_sym_PIPE_RBRACK] = "math_shorthand",
  [aux_sym_math_delimited_token2] = "math_delimited_token2",
  [anon_sym_PIPE_PIPE] = "math_shorthand",
  [sym__math_fence] = "math_delimited",
  [sym_math_align_point] = "math_align_point",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [sym_math_text] = "math_text",
  [sym_math_ident] = "math_ident",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_string] = "string",
  [sym_line_comment] = "line_comment",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [aux_sym_block_comment_token2] = "block_comment_token2",
  [anon_sym_STAR_SLASH] = "*/",
  [aux_sym__space_same_line_token1] = "space",
  [sym__token_eof] = "_token_eof",
  [sym__space] = "_space",
  [sym_parbreak] = "parbreak",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_raw] = "raw",
  [sym__link_end] = "_link_end",
  [sym_text] = "text",
  [sym__delim_strong] = "_delim_strong",
  [sym__delim_emph] = "_delim_emph",
  [sym_source_file] = "source_file",
  [sym_markup] = "markup",
  [sym__markup_expr_base] = "_markup_expr_base",
  [sym__markup_expr_line_start_sof] = "_markup_expr_line_start_sof",
  [sym__markup_expr_line_start] = "_markup_expr_line_start",
  [aux_sym__markup_expr_line_start_content] = "_markup_expr_line_start_content",
  [sym__markup_expr_text] = "_markup_expr_text",
  [sym_link] = "link",
  [sym_label] = "label",
  [sym_reference] = "reference",
  [sym_strong] = "strong",
  [sym__markup_strong] = "_markup_strong",
  [sym_emph] = "emph",
  [sym__markup_emph] = "_markup_emph",
  [sym_heading] = "heading",
  [sym__markup_same_line] = "_markup_same_line",
  [sym_equation] = "equation",
  [sym_math] = "math",
  [sym__math_expr] = "_math_expr",
  [sym_math_shorthand] = "math_shorthand",
  [sym_math_delimited] = "math_delimited",
  [sym__math_delimited_fence] = "_math_delimited_fence",
  [sym_math_field_access] = "math_field_access",
  [sym_math_function_call] = "math_function_call",
  [sym_math_args] = "math_args",
  [sym__math_arg] = "_math_arg",
  [sym_math_arg_named] = "math_arg_named",
  [sym__math_text_ident] = "_math_text_ident",
  [sym_content_block] = "content_block",
  [sym__trivia] = "_trivia",
  [sym_block_comment] = "block_comment",
  [sym_space] = "space",
  [sym__whitespace_line] = "_whitespace_line",
  [sym__space_same_line] = "_space_same_line",
  [aux_sym_markup_repeat1] = "markup_repeat1",
  [aux_sym__markup_expr_line_start_sof_repeat1] = "_markup_expr_line_start_sof_repeat1",
  [aux_sym__markup_strong_repeat1] = "_markup_strong_repeat1",
  [aux_sym__markup_emph_repeat1] = "_markup_emph_repeat1",
  [aux_sym__markup_same_line_repeat1] = "_markup_same_line_repeat1",
  [aux_sym_math_repeat1] = "math_repeat1",
  [aux_sym_math_field_access_repeat1] = "math_field_access_repeat1",
  [aux_sym_math_args_repeat1] = "math_args_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym__whitespace_line_repeat1] = "_whitespace_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__markup_expr_text_token1] = sym_text,
  [sym_linebreak] = sym_linebreak,
  [sym_escape] = sym_escape,
  [sym_text_shorthand] = sym_text_shorthand,
  [sym_smart_quote] = sym_smart_quote,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
  [sym_heading_start] = sym_heading_start,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DASH_GT_GT] = anon_sym_DASH_GT_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_LT_EQ_EQ_GT] = anon_sym_LT_EQ_EQ_GT,
  [anon_sym_LT_DASH_DASH_GT] = anon_sym_LT_DASH_DASH_GT,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [anon_sym_LT_DASH_LT] = anon_sym_LT_DASH_LT,
  [anon_sym_LT_DASH_GT] = anon_sym_LT_DASH_GT,
  [anon_sym_LT_LT_DASH] = anon_sym_LT_LT_DASH,
  [anon_sym_LT_LT_LT] = anon_sym_LT_LT_LT,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_LT_EQ_EQ] = anon_sym_LT_EQ_EQ,
  [anon_sym_LT_TILDE_TILDE] = anon_sym_LT_TILDE_TILDE,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_LT_TILDE] = anon_sym_LT_TILDE,
  [anon_sym_GT_DASH_GT] = anon_sym_GT_DASH_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_EQ_EQ_GT] = anon_sym_EQ_EQ_GT,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_EQ_COLON] = anon_sym_EQ_COLON,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PIPE_DASH_GT] = anon_sym_PIPE_DASH_GT,
  [anon_sym_PIPE_EQ_GT] = anon_sym_PIPE_EQ_GT,
  [anon_sym_TILDE_TILDE_GT] = anon_sym_TILDE_TILDE_GT,
  [anon_sym_TILDE_GT] = anon_sym_TILDE_GT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK_PIPE] = sym_math_shorthand,
  [aux_sym_math_delimited_token1] = aux_sym_math_delimited_token1,
  [anon_sym_PIPE_RBRACK] = sym_math_shorthand,
  [aux_sym_math_delimited_token2] = aux_sym_math_delimited_token2,
  [anon_sym_PIPE_PIPE] = sym_math_shorthand,
  [sym__math_fence] = sym_math_delimited,
  [sym_math_align_point] = sym_math_align_point,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_math_text] = sym_math_text,
  [sym_math_ident] = sym_math_ident,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_string] = sym_string,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [aux_sym_block_comment_token2] = aux_sym_block_comment_token2,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [aux_sym__space_same_line_token1] = sym_space,
  [sym__token_eof] = sym__token_eof,
  [sym__space] = sym__space,
  [sym_parbreak] = sym_parbreak,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_raw] = sym_raw,
  [sym__link_end] = sym__link_end,
  [sym_text] = sym_text,
  [sym__delim_strong] = sym__delim_strong,
  [sym__delim_emph] = sym__delim_emph,
  [sym_source_file] = sym_source_file,
  [sym_markup] = sym_markup,
  [sym__markup_expr_base] = sym__markup_expr_base,
  [sym__markup_expr_line_start_sof] = sym__markup_expr_line_start_sof,
  [sym__markup_expr_line_start] = sym__markup_expr_line_start,
  [aux_sym__markup_expr_line_start_content] = aux_sym__markup_expr_line_start_content,
  [sym__markup_expr_text] = sym__markup_expr_text,
  [sym_link] = sym_link,
  [sym_label] = sym_label,
  [sym_reference] = sym_reference,
  [sym_strong] = sym_strong,
  [sym__markup_strong] = sym__markup_strong,
  [sym_emph] = sym_emph,
  [sym__markup_emph] = sym__markup_emph,
  [sym_heading] = sym_heading,
  [sym__markup_same_line] = sym__markup_same_line,
  [sym_equation] = sym_equation,
  [sym_math] = sym_math,
  [sym__math_expr] = sym__math_expr,
  [sym_math_shorthand] = sym_math_shorthand,
  [sym_math_delimited] = sym_math_delimited,
  [sym__math_delimited_fence] = sym__math_delimited_fence,
  [sym_math_field_access] = sym_math_field_access,
  [sym_math_function_call] = sym_math_function_call,
  [sym_math_args] = sym_math_args,
  [sym__math_arg] = sym__math_arg,
  [sym_math_arg_named] = sym_math_arg_named,
  [sym__math_text_ident] = sym__math_text_ident,
  [sym_content_block] = sym_content_block,
  [sym__trivia] = sym__trivia,
  [sym_block_comment] = sym_block_comment,
  [sym_space] = sym_space,
  [sym__whitespace_line] = sym__whitespace_line,
  [sym__space_same_line] = sym__space_same_line,
  [aux_sym_markup_repeat1] = aux_sym_markup_repeat1,
  [aux_sym__markup_expr_line_start_sof_repeat1] = aux_sym__markup_expr_line_start_sof_repeat1,
  [aux_sym__markup_strong_repeat1] = aux_sym__markup_strong_repeat1,
  [aux_sym__markup_emph_repeat1] = aux_sym__markup_emph_repeat1,
  [aux_sym__markup_same_line_repeat1] = aux_sym__markup_same_line_repeat1,
  [aux_sym_math_repeat1] = aux_sym_math_repeat1,
  [aux_sym_math_field_access_repeat1] = aux_sym_math_field_access_repeat1,
  [aux_sym_math_args_repeat1] = aux_sym_math_args_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym__whitespace_line_repeat1] = aux_sym__whitespace_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__markup_expr_text_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_linebreak] = {
    .visible = true,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_text_shorthand] = {
    .visible = true,
    .named = true,
  },
  [sym_smart_quote] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_link_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_label_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_heading_start] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_TILDE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_PIPE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_math_delimited_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_math_delimited_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = true,
  },
  [sym__math_fence] = {
    .visible = true,
    .named = true,
  },
  [sym_math_align_point] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_math_text] = {
    .visible = true,
    .named = true,
  },
  [sym_math_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__space_same_line_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__token_eof] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_parbreak] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_raw] = {
    .visible = true,
    .named = true,
  },
  [sym__link_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__delim_strong] = {
    .visible = false,
    .named = true,
  },
  [sym__delim_emph] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_markup] = {
    .visible = true,
    .named = true,
  },
  [sym__markup_expr_base] = {
    .visible = false,
    .named = true,
  },
  [sym__markup_expr_line_start_sof] = {
    .visible = false,
    .named = true,
  },
  [sym__markup_expr_line_start] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__markup_expr_line_start_content] = {
    .visible = false,
    .named = false,
  },
  [sym__markup_expr_text] = {
    .visible = false,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_strong] = {
    .visible = true,
    .named = true,
  },
  [sym__markup_strong] = {
    .visible = false,
    .named = true,
  },
  [sym_emph] = {
    .visible = true,
    .named = true,
  },
  [sym__markup_emph] = {
    .visible = false,
    .named = true,
  },
  [sym_heading] = {
    .visible = true,
    .named = true,
  },
  [sym__markup_same_line] = {
    .visible = false,
    .named = true,
  },
  [sym_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_math] = {
    .visible = true,
    .named = true,
  },
  [sym__math_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_math_shorthand] = {
    .visible = true,
    .named = true,
  },
  [sym_math_delimited] = {
    .visible = true,
    .named = true,
  },
  [sym__math_delimited_fence] = {
    .visible = false,
    .named = true,
  },
  [sym_math_field_access] = {
    .visible = true,
    .named = true,
  },
  [sym_math_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_math_args] = {
    .visible = true,
    .named = true,
  },
  [sym__math_arg] = {
    .visible = false,
    .named = true,
  },
  [sym_math_arg_named] = {
    .visible = true,
    .named = true,
  },
  [sym__math_text_ident] = {
    .visible = false,
    .named = true,
  },
  [sym_content_block] = {
    .visible = true,
    .named = true,
  },
  [sym__trivia] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace_line] = {
    .visible = false,
    .named = true,
  },
  [sym__space_same_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_markup_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__markup_expr_line_start_sof_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__markup_strong_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__markup_emph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__markup_same_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_field_access_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__whitespace_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_arg = 1,
  field_args = 2,
  field_content = 3,
  field_inner = 4,
  field_left = 5,
  field_name = 6,
  field_right = 7,
  field_text = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_args] = "args",
  [field_content] = "content",
  [field_inner] = "inner",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 1},
  [7] = {.index = 5, .length = 2},
  [10] = {.index = 7, .length = 1},
  [11] = {.index = 8, .length = 1},
  [12] = {.index = 9, .length = 2},
  [13] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_text, 1},
  [1] =
    {field_inner, 1},
  [2] =
    {field_content, 2},
    {field_text, 1},
  [4] =
    {field_inner, 2},
  [5] =
    {field_left, 0},
    {field_right, 2},
  [7] =
    {field_args, 2},
  [8] =
    {field_name, 0},
  [9] =
    {field_arg, 2},
    {field_name, 0},
  [11] =
    {field_arg, 3},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_markup,
  },
  [3] = {
    [1] = sym_space,
  },
  [8] = {
    [1] = sym_math_delimited,
  },
  [9] = {
    [0] = sym_math_ident,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_math, 2,
    sym_math,
    sym_math_delimited,
  aux_sym__markup_strong_repeat1, 2,
    aux_sym__markup_strong_repeat1,
    sym_markup,
  aux_sym__markup_emph_repeat1, 2,
    aux_sym__markup_emph_repeat1,
    sym_markup,
  aux_sym__markup_same_line_repeat1, 2,
    aux_sym__markup_same_line_repeat1,
    sym_markup,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 12,
  [16] = 11,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 18,
  [22] = 19,
  [23] = 11,
  [24] = 19,
  [25] = 12,
  [26] = 19,
  [27] = 18,
  [28] = 11,
  [29] = 12,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 33,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 38,
  [40] = 33,
  [41] = 36,
  [42] = 42,
  [43] = 31,
  [44] = 32,
  [45] = 45,
  [46] = 46,
  [47] = 31,
  [48] = 32,
  [49] = 38,
  [50] = 45,
  [51] = 36,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 33,
  [59] = 59,
  [60] = 36,
  [61] = 53,
  [62] = 54,
  [63] = 38,
  [64] = 55,
  [65] = 59,
  [66] = 46,
  [67] = 56,
  [68] = 57,
  [69] = 52,
  [70] = 45,
  [71] = 55,
  [72] = 52,
  [73] = 46,
  [74] = 45,
  [75] = 53,
  [76] = 59,
  [77] = 57,
  [78] = 54,
  [79] = 56,
  [80] = 55,
  [81] = 54,
  [82] = 59,
  [83] = 52,
  [84] = 56,
  [85] = 57,
  [86] = 53,
  [87] = 46,
  [88] = 88,
  [89] = 88,
  [90] = 88,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 94,
  [95] = 94,
  [96] = 93,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 102,
  [104] = 104,
  [105] = 105,
  [106] = 104,
  [107] = 107,
  [108] = 102,
  [109] = 104,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 114,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 117,
  [122] = 118,
  [123] = 116,
  [124] = 124,
  [125] = 124,
  [126] = 124,
  [127] = 127,
  [128] = 128,
  [129] = 128,
  [130] = 46,
  [131] = 131,
  [132] = 55,
  [133] = 131,
  [134] = 127,
  [135] = 53,
  [136] = 55,
  [137] = 46,
  [138] = 53,
  [139] = 139,
  [140] = 140,
  [141] = 55,
  [142] = 142,
  [143] = 143,
  [144] = 142,
  [145] = 46,
  [146] = 143,
  [147] = 140,
  [148] = 53,
  [149] = 143,
  [150] = 139,
  [151] = 46,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 156,
  [158] = 139,
  [159] = 140,
  [160] = 53,
  [161] = 161,
  [162] = 155,
  [163] = 154,
  [164] = 153,
  [165] = 152,
  [166] = 53,
  [167] = 142,
  [168] = 46,
  [169] = 55,
  [170] = 156,
  [171] = 155,
  [172] = 154,
  [173] = 152,
  [174] = 153,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 177,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 180,
  [183] = 180,
  [184] = 181,
  [185] = 180,
  [186] = 181,
  [187] = 180,
  [188] = 181,
  [189] = 180,
  [190] = 181,
  [191] = 180,
  [192] = 181,
  [193] = 180,
  [194] = 181,
  [195] = 180,
  [196] = 180,
  [197] = 181,
  [198] = 180,
  [199] = 181,
  [200] = 180,
  [201] = 181,
  [202] = 181,
  [203] = 203,
  [204] = 181,
  [205] = 53,
  [206] = 53,
  [207] = 207,
  [208] = 208,
  [209] = 46,
  [210] = 55,
  [211] = 211,
  [212] = 46,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 53,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 221,
  [224] = 46,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 222,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 221,
  [233] = 233,
  [234] = 231,
  [235] = 235,
  [236] = 221,
  [237] = 237,
  [238] = 238,
  [239] = 238,
  [240] = 237,
  [241] = 237,
  [242] = 238,
  [243] = 237,
  [244] = 238,
  [245] = 245,
  [246] = 246,
  [247] = 246,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 253,
  [256] = 256,
  [257] = 248,
  [258] = 252,
  [259] = 246,
  [260] = 249,
  [261] = 249,
  [262] = 246,
  [263] = 250,
  [264] = 251,
  [265] = 252,
  [266] = 266,
  [267] = 256,
  [268] = 266,
  [269] = 253,
  [270] = 270,
  [271] = 266,
  [272] = 248,
  [273] = 250,
  [274] = 256,
  [275] = 251,
};

static inline bool aux_sym_label_token1_character_set_1(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2741
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? (c >= '-' && c <= '.')
                    : c <= ':')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool aux_sym_reference_token1_character_set_1(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2741
        ? (c < 2042
          ? (c < 931
            ? (c < 248
              ? (c < 170
                ? (c < 'A'
                  ? (c < '0'
                    ? c == '-'
                    : c <= '9')
                  : (c <= 'Z' || (c < 'a'
                    ? c == '_'
                    : c <= 'z')))
                : (c <= 170 || (c < 186
                  ? (c < 183
                    ? c == 181
                    : c <= 183)
                  : (c <= 186 || (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)))))
              : (c <= 705 || (c < 886
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || (c < 768
                    ? c == 750
                    : c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))))))
            : (c <= 1013 || (c < 1488
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1473
                  ? (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)
                  : (c <= 1474 || (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)))))))))
          : (c <= 2042 || (c < 2556
            ? (c < 2447
              ? (c < 2185
                ? (c < 2112
                  ? (c < 2048
                    ? c == 2045
                    : c <= 2093)
                  : (c <= 2139 || (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)))
                : (c <= 2190 || (c < 2406
                  ? (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)
                  : (c <= 2415 || (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)))))
              : (c <= 2448 || (c < 2503
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)))
                : (c <= 2504 || (c < 2524
                  ? (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)
                  : (c <= 2525 || (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)))))))
            : (c <= 2556 || (c < 2631
              ? (c < 2602
                ? (c < 2565
                  ? (c < 2561
                    ? c == 2558
                    : c <= 2563)
                  : (c <= 2570 || (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c < 2622
                    ? c == 2620
                    : c <= 2626)))))
              : (c <= 2632 || (c < 2689
                ? (c < 2649
                  ? (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)
                  : (c <= 2652 || (c < 2662
                    ? c == 2654
                    : c <= 2677)))
                : (c <= 2691 || (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)))))))))))
        : (c <= 2745 || (c < 3165
          ? (c < 2949
            ? (c < 2858
              ? (c < 2790
                ? (c < 2763
                  ? (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)
                  : (c <= 2765 || (c < 2784
                    ? c == 2768
                    : c <= 2787)))
                : (c <= 2799 || (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))))
              : (c <= 2864 || (c < 2901
                ? (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)))
                : (c <= 2903 || (c < 2918
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)
                  : (c <= 2927 || (c < 2946
                    ? c == 2929
                    : c <= 2947)))))))
            : (c <= 2954 || (c < 3024
              ? (c < 2979
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || (c < 2974
                    ? c == 2972
                    : c <= 2975)))
                : (c <= 2980 || (c < 3006
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3010 || (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)))))
              : (c <= 3024 || (c < 3114
                ? (c < 3072
                  ? (c < 3046
                    ? c == 3031
                    : c <= 3055)
                  : (c <= 3084 || (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)))
                : (c <= 3129 || (c < 3146
                  ? (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)
                  : (c <= 3149 || (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)))))))))
          : (c <= 3165 || (c < 3430
            ? (c < 3285
              ? (c < 3218
                ? (c < 3200
                  ? (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)
                  : (c <= 3203 || (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)))
                : (c <= 3240 || (c < 3260
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3268 || (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)))))
              : (c <= 3286 || (c < 3342
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)
                  : (c <= 3311 || (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)))
                : (c <= 3344 || (c < 3402
                  ? (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)
                  : (c <= 3406 || (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)))))))
            : (c <= 3439 || (c < 3558
              ? (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || (c < 3544
                    ? c == 3542
                    : c <= 3551)))))
              : (c <= 3567 || (c < 3716
                ? (c < 3648
                  ? (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)
                  : (c <= 3662 || (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool aux_sym_math_delimited_token1_character_set_1(int32_t c) {
  return (c < 10629
    ? (c < 10214
      ? (c < 8988
        ? (c < 8968
          ? c == '{'
          : (c <= 8968 || c == 8970))
        : (c <= 8988 || (c < 10098
          ? c == 8990
          : c <= 10098)))
      : (c <= 10214 || (c < 10220
        ? (c < 10218
          ? c == 10216
          : c <= 10218)
        : (c <= 10220 || (c < 10627
          ? c == 10222
          : c <= 10627)))))
    : (c <= 10629 || (c < 10643
      ? (c < 10637
        ? (c < 10633
          ? c == 10631
          : (c <= 10633 || c == 10635))
        : (c <= 10637 || (c < 10641
          ? c == 10639
          : c <= 10641)))
      : (c <= 10643 || (c < 10712
        ? (c < 10647
          ? c == 10645
          : c <= 10647)
        : (c <= 10712 || (c < 10748
          ? c == 10714
          : c <= 10748)))))));
}

static inline bool aux_sym_math_delimited_token1_character_set_2(int32_t c) {
  return (c < 10629
    ? (c < 10098
      ? (c < 8970
        ? (c < '{'
          ? c == '('
          : (c <= '{' || c == 8968))
        : (c <= 8970 || (c < 8990
          ? c == 8988
          : c <= 8990)))
      : (c <= 10098 || (c < 10220
        ? (c < 10216
          ? c == 10214
          : (c <= 10216 || c == 10218))
        : (c <= 10220 || (c < 10627
          ? c == 10222
          : c <= 10627)))))
    : (c <= 10629 || (c < 10643
      ? (c < 10637
        ? (c < 10633
          ? c == 10631
          : (c <= 10633 || c == 10635))
        : (c <= 10637 || (c < 10641
          ? c == 10639
          : c <= 10641)))
      : (c <= 10643 || (c < 10712
        ? (c < 10647
          ? c == 10645
          : c <= 10647)
        : (c <= 10712 || (c < 10748
          ? c == 10714
          : c <= 10748)))))));
}

static inline bool aux_sym_math_delimited_token2_character_set_1(int32_t c) {
  return (c < 10099
    ? (c < '}'
      ? (c < ']'
        ? c == ')'
        : c <= ']')
      : (c <= '}' || (c < 8989
        ? (c >= 8969 && c <= 8971)
        : c <= 8991)))
    : (c <= 10099 || (c < 10713
      ? (c < 10628
        ? (c >= 10215 && c <= 10223)
        : c <= 10648)
      : (c <= 10715 || c == 10749))));
}

static inline bool aux_sym_math_delimited_token2_character_set_2(int32_t c) {
  return (c < 10628
    ? (c < 8991
      ? (c < 8969
        ? (c < ']'
          ? c == ')'
          : (c <= ']' || c == '}'))
        : (c <= 8969 || (c < 8989
          ? c == 8971
          : c <= 8989)))
      : (c <= 8991 || (c < 10219
        ? (c < 10215
          ? c == 10099
          : (c <= 10215 || c == 10217))
        : (c <= 10219 || (c < 10223
          ? c == 10221
          : c <= 10223)))))
    : (c <= 10628 || (c < 10642
      ? (c < 10636
        ? (c < 10632
          ? c == 10630
          : (c <= 10632 || c == 10634))
        : (c <= 10636 || (c < 10640
          ? c == 10638
          : c <= 10640)))
      : (c <= 10642 || (c < 10713
        ? (c < 10646
          ? c == 10644
          : (c <= 10646 || c == 10648))
        : (c <= 10713 || (c < 10749
          ? c == 10715
          : c <= 10749)))))));
}

static inline bool sym_math_text_character_set_1(int32_t c) {
  return (c < 3655
    ? (c < 2689
      ? (c < 2137
        ? (c < 1759
          ? (c < 1476
            ? (c < 1425
              ? (c < 1155
                ? (c >= 768 && c <= 879)
                : c <= 1161)
              : (c <= 1469 || (c < 1473
                ? c == 1471
                : c <= 1474)))
            : (c <= 1477 || (c < 1611
              ? (c < 1552
                ? c == 1479
                : c <= 1562)
              : (c <= 1631 || (c < 1750
                ? c == 1648
                : c <= 1756)))))
          : (c <= 1764 || (c < 2027
            ? (c < 1809
              ? (c < 1770
                ? (c >= 1767 && c <= 1768)
                : c <= 1773)
              : (c <= 1809 || (c < 1958
                ? (c >= 1840 && c <= 1866)
                : c <= 1968)))
            : (c <= 2035 || (c < 2075
              ? (c < 2070
                ? c == 2045
                : c <= 2073)
              : (c <= 2083 || (c < 2089
                ? (c >= 2085 && c <= 2087)
                : c <= 2093)))))))
        : (c <= 2139 || (c < 2507
          ? (c < 2385
            ? (c < 2275
              ? (c < 2250
                ? (c >= 2200 && c <= 2207)
                : c <= 2273)
              : (c <= 2307 || (c < 2366
                ? (c >= 2362 && c <= 2364)
                : c <= 2383)))
            : (c <= 2391 || (c < 2492
              ? (c < 2433
                ? (c >= 2402 && c <= 2403)
                : c <= 2435)
              : (c <= 2492 || (c < 2503
                ? (c >= 2494 && c <= 2500)
                : c <= 2504)))))
          : (c <= 2509 || (c < 2622
            ? (c < 2558
              ? (c < 2530
                ? c == 2519
                : c <= 2531)
              : (c <= 2558 || (c < 2620
                ? (c >= 2561 && c <= 2563)
                : c <= 2620)))
            : (c <= 2626 || (c < 2641
              ? (c < 2635
                ? (c >= 2631 && c <= 2632)
                : c <= 2637)
              : (c <= 2641 || (c < 2677
                ? (c >= 2672 && c <= 2673)
                : c <= 2677)))))))))
      : (c <= 2691 || (c < 3157
        ? (c < 2901
          ? (c < 2810
            ? (c < 2759
              ? (c < 2750
                ? c == 2748
                : c <= 2757)
              : (c <= 2761 || (c < 2786
                ? (c >= 2763 && c <= 2765)
                : c <= 2787)))
            : (c <= 2815 || (c < 2878
              ? (c < 2876
                ? (c >= 2817 && c <= 2819)
                : c <= 2876)
              : (c <= 2884 || (c < 2891
                ? (c >= 2887 && c <= 2888)
                : c <= 2893)))))
          : (c <= 2903 || (c < 3031
            ? (c < 3006
              ? (c < 2946
                ? (c >= 2914 && c <= 2915)
                : c <= 2946)
              : (c <= 3010 || (c < 3018
                ? (c >= 3014 && c <= 3016)
                : c <= 3021)))
            : (c <= 3031 || (c < 3134
              ? (c < 3132
                ? (c >= 3072 && c <= 3076)
                : c <= 3132)
              : (c <= 3140 || (c < 3146
                ? (c >= 3142 && c <= 3144)
                : c <= 3149)))))))
        : (c <= 3158 || (c < 3398
          ? (c < 3274
            ? (c < 3260
              ? (c < 3201
                ? (c >= 3170 && c <= 3171)
                : c <= 3203)
              : (c <= 3260 || (c < 3270
                ? (c >= 3262 && c <= 3268)
                : c <= 3272)))
            : (c <= 3277 || (c < 3328
              ? (c < 3298
                ? (c >= 3285 && c <= 3286)
                : c <= 3299)
              : (c <= 3331 || (c < 3390
                ? (c >= 3387 && c <= 3388)
                : c <= 3396)))))
          : (c <= 3400 || (c < 3535
            ? (c < 3426
              ? (c < 3415
                ? (c >= 3402 && c <= 3405)
                : c <= 3415)
              : (c <= 3427 || (c < 3530
                ? (c >= 3457 && c <= 3459)
                : c <= 3530)))
            : (c <= 3540 || (c < 3570
              ? (c < 3544
                ? c == 3542
                : c <= 3551)
              : (c <= 3571 || (c < 3636
                ? c == 3633
                : c <= 3642)))))))))))
    : (c <= 3662 || (c < 7380
      ? (c < 5906
        ? (c < 3993
          ? (c < 3895
            ? (c < 3784
              ? (c < 3764
                ? c == 3761
                : c <= 3772)
              : (c <= 3789 || (c < 3893
                ? (c >= 3864 && c <= 3865)
                : c <= 3893)))
            : (c <= 3895 || (c < 3953
              ? (c < 3902
                ? c == 3897
                : c <= 3903)
              : (c <= 3972 || (c < 3981
                ? (c >= 3974 && c <= 3975)
                : c <= 3991)))))
          : (c <= 4028 || (c < 4199
            ? (c < 4182
              ? (c < 4139
                ? c == 4038
                : c <= 4158)
              : (c <= 4185 || (c < 4194
                ? (c >= 4190 && c <= 4192)
                : c <= 4196)))
            : (c <= 4205 || (c < 4239
              ? (c < 4226
                ? (c >= 4209 && c <= 4212)
                : c <= 4237)
              : (c <= 4239 || (c < 4957
                ? (c >= 4250 && c <= 4253)
                : c <= 4959)))))))
        : (c <= 5909 || (c < 6741
          ? (c < 6155
            ? (c < 6002
              ? (c < 5970
                ? (c >= 5938 && c <= 5940)
                : c <= 5971)
              : (c <= 6003 || (c < 6109
                ? (c >= 6068 && c <= 6099)
                : c <= 6109)))
            : (c <= 6157 || (c < 6432
              ? (c < 6313
                ? c == 6159
                : c <= 6313)
              : (c <= 6443 || (c < 6679
                ? (c >= 6448 && c <= 6459)
                : c <= 6683)))))
          : (c <= 6750 || (c < 7019
            ? (c < 6832
              ? (c < 6783
                ? (c >= 6752 && c <= 6780)
                : c <= 6783)
              : (c <= 6862 || (c < 6964
                ? (c >= 6912 && c <= 6916)
                : c <= 6980)))
            : (c <= 7027 || (c < 7142
              ? (c < 7073
                ? (c >= 7040 && c <= 7042)
                : c <= 7085)
              : (c <= 7155 || (c < 7376
                ? (c >= 7204 && c <= 7223)
                : c <= 7378)))))))))
      : (c <= 7400 || (c < 43302
        ? (c < 42612
          ? (c < 11503
            ? (c < 7415
              ? (c < 7412
                ? c == 7405
                : c <= 7412)
              : (c <= 7417 || (c < 8400
                ? (c >= 7616 && c <= 7679)
                : c <= 8432)))
            : (c <= 11505 || (c < 12330
              ? (c < 11744
                ? c == 11647
                : c <= 11775)
              : (c <= 12335 || (c < 42607
                ? (c >= 12441 && c <= 12442)
                : c <= 42610)))))
          : (c <= 42621 || (c < 43043
            ? (c < 43010
              ? (c < 42736
                ? (c >= 42654 && c <= 42655)
                : c <= 42737)
              : (c <= 43010 || (c < 43019
                ? c == 43014
                : c <= 43019)))
            : (c <= 43047 || (c < 43188
              ? (c < 43136
                ? c == 43052
                : c <= 43137)
              : (c <= 43205 || (c < 43263
                ? (c >= 43232 && c <= 43249)
                : c <= 43263)))))))
        : (c <= 43309 || (c < 43710
          ? (c < 43587
            ? (c < 43443
              ? (c < 43392
                ? (c >= 43335 && c <= 43347)
                : c <= 43395)
              : (c <= 43456 || (c < 43561
                ? c == 43493
                : c <= 43574)))
            : (c <= 43587 || (c < 43696
              ? (c < 43643
                ? (c >= 43596 && c <= 43597)
                : c <= 43645)
              : (c <= 43696 || (c < 43703
                ? (c >= 43698 && c <= 43700)
                : c <= 43704)))))
          : (c <= 43711 || (c < 64286
            ? (c < 43765
              ? (c < 43755
                ? c == 43713
                : c <= 43759)
              : (c <= 43766 || (c < 44012
                ? (c >= 44003 && c <= 44010)
                : c <= 44013)))
            : (c <= 64286 || (c < 66045
              ? (c < 65056
                ? (c >= 65024 && c <= 65039)
                : c <= 65071)
              : (c <= 66045 || (c < 66422
                ? c == 66272
                : c <= 66426)))))))))))));
}

static inline bool sym_math_text_character_set_2(int32_t c) {
  return (c < 43824
    ? (c < 4682
      ? (c < 2768
        ? (c < 2042
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1646
              ? (c < 1369
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c >= 1808 && c <= 1839)
                  : (c <= 1969 || (c >= 1994 && c <= 2037)))))))))
          : (c <= 2042 || (c < 2544
            ? (c < 2447
              ? (c < 2185
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2088)
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2417
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2493
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))))))
            : (c <= 2545 || (c < 2654
              ? (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2730
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))))))))))
        : (c <= 2768 || (c < 3293
          ? (c < 2979
            ? (c < 2908
              ? (c < 2835
                ? (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))))
              : (c <= 2909 || (c < 2958
                ? (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))))))
            : (c <= 2980 || (c < 3165
              ? (c < 3086
                ? (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3218
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))))))))
          : (c <= 3294 || (c < 3718
            ? (c < 3461
              ? (c < 3346
                ? (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3389 || (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))))
              : (c <= 3478 || (c < 3585
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3634 || (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))))))
            : (c <= 3722 || (c < 3913
              ? (c < 3776
                ? (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3762 || c == 3773))
                : (c <= 3780 || (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))))
              : (c <= 3948 || (c < 4295
                ? (c < 4176
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4159)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))))))))))
      : (c <= 4685 || (c < 8469
        ? (c < 6656
          ? (c < 5761
            ? (c < 4802
              ? (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))))
            : (c <= 5786 || (c < 6108
              ? (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))
              : (c <= 6108 || (c < 6480
                ? (c < 6320
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)
                  : (c <= 6389 || (c >= 6400 && c <= 6430)))
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))))))
          : (c <= 6678 || (c < 8027
            ? (c < 7312
              ? (c < 7098
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6988 || (c >= 7043 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))
              : (c <= 7354 || (c < 7968
                ? (c < 7424
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7418)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))))))
            : (c <= 8027 || (c < 8160
              ? (c < 8126
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))))
              : (c <= 8172 || (c < 8336
                ? (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))))))))))
        : (c <= 8469 || (c < 19968
          ? (c < 11696
            ? (c < 11264
              ? (c < 8490
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))
              : (c <= 11492 || (c < 11568
                ? (c < 11559
                  ? (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))))))
            : (c <= 11702 || (c < 12353
              ? (c < 11736
                ? (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12593
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))))))
          : (c <= 42124 || (c < 43274
            ? (c < 42960
              ? (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42786
                  ? (c < 42775
                    ? (c >= 42623 && c <= 42735)
                    : c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))))
              : (c <= 42961 || (c < 43138
                ? (c < 42994
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42969)
                  : (c <= 43042 || (c >= 43072 && c <= 43123)))
                : (c <= 43187 || (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))))))
            : (c <= 43301 || (c < 43642
              ? (c < 43488
                ? (c < 43396
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43334)
                    : c <= 43388)
                  : (c <= 43442 || c == 43471))
                : (c <= 43503 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43595 || (c >= 43616 && c <= 43638)))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))))))))))))
    : (c <= 43866 || (c < 71424
      ? (c < 67644
        ? (c < 65576
          ? (c < 64914
            ? (c < 64285
              ? (c < 55243
                ? (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44002)
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))
            : (c <= 64967 || (c < 65345
              ? (c < 65145
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || c == 65143))
                : (c <= 65145 || (c < 65151
                  ? (c < 65149
                    ? c == 65147
                    : c <= 65149)
                  : (c <= 65276 || (c >= 65313 && c <= 65338)))))
              : (c <= 65370 || (c < 65490
                ? (c < 65474
                  ? (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))))
          : (c <= 65594 || (c < 66864
            ? (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : (c <= 66811 || (c >= 66816 && c <= 66855)))))))
            : (c <= 66915 || (c < 67392
              ? (c < 66967
                ? (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 66977 || (c < 67003
                  ? (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)
                  : (c <= 67004 || (c >= 67072 && c <= 67382)))))
              : (c <= 67413 || (c < 67584
                ? (c < 67463
                  ? (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)
                  : (c <= 67504 || (c >= 67506 && c <= 67514)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))))))))))
        : (c <= 67644 || (c < 69891
          ? (c < 68448
            ? (c < 68096
              ? (c < 67828
                ? (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))))
              : (c <= 68096 || (c < 68224
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68864
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))
                : (c <= 68899 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || c == 69415))))
              : (c <= 69445 || (c < 69745
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))
                : (c <= 69746 || (c < 69763
                  ? c == 69749
                  : (c <= 69807 || (c >= 69840 && c <= 69864)))))))))
          : (c <= 69926 || (c < 70419
            ? (c < 70163
              ? (c < 70019
                ? (c < 69968
                  ? (c < 69959
                    ? c == 69956
                    : c <= 69959)
                  : (c <= 70002 || c == 70006))
                : (c <= 70066 || (c < 70108
                  ? (c < 70106
                    ? (c >= 70081 && c <= 70084)
                    : c <= 70106)
                  : (c <= 70108 || (c >= 70144 && c <= 70161)))))
              : (c <= 70187 || (c < 70303
                ? (c < 70282
                  ? (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)
                  : (c <= 70285 || (c >= 70287 && c <= 70301)))
                : (c <= 70312 || (c < 70405
                  ? (c >= 70320 && c <= 70366)
                  : (c <= 70412 || (c >= 70415 && c <= 70416)))))))
            : (c <= 70440 || (c < 70784
              ? (c < 70480
                ? (c < 70453
                  ? (c < 70450
                    ? (c >= 70442 && c <= 70448)
                    : c <= 70451)
                  : (c <= 70457 || c == 70461))
                : (c <= 70480 || (c < 70727
                  ? (c < 70656
                    ? (c >= 70493 && c <= 70497)
                    : c <= 70708)
                  : (c <= 70730 || (c >= 70751 && c <= 70753)))))
              : (c <= 70831 || (c < 71168
                ? (c < 71040
                  ? (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)
                  : (c <= 71086 || (c >= 71128 && c <= 71131)))
                : (c <= 71215 || (c < 71296
                  ? c == 71236
                  : (c <= 71338 || c == 71352))))))))))))
      : (c <= 71450 || (c < 119995
        ? (c < 77712
          ? (c < 72349
            ? (c < 72001
              ? (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))
              : (c <= 72001 || (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))))
            : (c <= 72349 || (c < 73056
              ? (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))
              : (c <= 73061 || (c < 73648
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c >= 73440 && c <= 73458)))
                : (c <= 73648 || (c < 74752
                  ? (c >= 73728 && c <= 74649)
                  : (c <= 74862 || (c >= 74880 && c <= 75075)))))))))
          : (c <= 77808 || (c < 101632
            ? (c < 93053
              ? (c < 92784
                ? (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c >= 92736 && c <= 92766)))
                : (c <= 92862 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92975)
                  : (c <= 92995 || (c >= 93027 && c <= 93047)))))
              : (c <= 93071 || (c < 94176
                ? (c < 94032
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94032 || (c >= 94099 && c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? c == 94179
                  : (c <= 100343 || (c >= 100352 && c <= 101589)))))))
            : (c <= 101640 || (c < 113792
              ? (c < 110928
                ? (c < 110589
                  ? (c < 110581
                    ? (c >= 110576 && c <= 110579)
                    : c <= 110587)
                  : (c <= 110590 || (c >= 110592 && c <= 110882)))
                : (c <= 110930 || (c < 113664
                  ? (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)
                  : (c <= 113770 || (c >= 113776 && c <= 113788)))))
              : (c <= 113800 || (c < 119970
                ? (c < 119894
                  ? (c < 119808
                    ? (c >= 113808 && c <= 113817)
                    : c <= 119892)
                  : (c <= 119964 || (c >= 119966 && c <= 119967)))
                : (c <= 119970 || (c < 119977
                  ? (c >= 119973 && c <= 119974)
                  : (c <= 119980 || (c >= 119982 && c <= 119993)))))))))))
        : (c <= 119995 || (c < 126497
          ? (c < 120688
            ? (c < 120138
              ? (c < 120086
                ? (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))
                : (c <= 120092 || (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))))
              : (c <= 120144 || (c < 120572
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))
                : (c <= 120596 || (c < 120630
                  ? (c >= 120598 && c <= 120628)
                  : (c <= 120654 || (c >= 120656 && c <= 120686)))))))
            : (c <= 120712 || (c < 124896
              ? (c < 123136
                ? (c < 120772
                  ? (c < 120746
                    ? (c >= 120714 && c <= 120744)
                    : c <= 120770)
                  : (c <= 120779 || (c >= 122624 && c <= 122654)))
                : (c <= 123180 || (c < 123536
                  ? (c < 123214
                    ? (c >= 123191 && c <= 123197)
                    : c <= 123214)
                  : (c <= 123565 || (c >= 123584 && c <= 123627)))))
              : (c <= 124902 || (c < 125184
                ? (c < 124912
                  ? (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)
                  : (c <= 124926 || (c >= 124928 && c <= 125124)))
                : (c <= 125251 || (c < 126464
                  ? c == 125259
                  : (c <= 126467 || (c >= 126469 && c <= 126495)))))))))
          : (c <= 126498 || (c < 126561
            ? (c < 126539
              ? (c < 126521
                ? (c < 126505
                  ? (c < 126503
                    ? c == 126500
                    : c <= 126503)
                  : (c <= 126514 || (c >= 126516 && c <= 126519)))
                : (c <= 126521 || (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || c == 126537))))
              : (c <= 126539 || (c < 126553
                ? (c < 126548
                  ? (c < 126545
                    ? (c >= 126541 && c <= 126543)
                    : c <= 126546)
                  : (c <= 126548 || c == 126551))
                : (c <= 126553 || (c < 126557
                  ? c == 126555
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177976 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_math_text_character_set_3(int32_t c) {
  return (c < 3761
    ? (c < 2748
      ? (c < 2200
        ? (c < 1767
          ? (c < 1479
            ? (c < 1471
              ? (c < 1155
                ? (c >= 768 && c <= 879)
                : (c <= 1161 || (c >= 1425 && c <= 1469)))
              : (c <= 1471 || (c < 1476
                ? (c >= 1473 && c <= 1474)
                : c <= 1477)))
            : (c <= 1479 || (c < 1648
              ? (c < 1611
                ? (c >= 1552 && c <= 1562)
                : c <= 1631)
              : (c <= 1648 || (c < 1759
                ? (c >= 1750 && c <= 1756)
                : c <= 1764)))))
          : (c <= 1768 || (c < 2045
            ? (c < 1840
              ? (c < 1809
                ? (c >= 1770 && c <= 1773)
                : c <= 1809)
              : (c <= 1866 || (c < 2027
                ? (c >= 1958 && c <= 1968)
                : c <= 2035)))
            : (c <= 2045 || (c < 2085
              ? (c < 2075
                ? (c >= 2070 && c <= 2073)
                : c <= 2083)
              : (c <= 2087 || (c < 2137
                ? (c >= 2089 && c <= 2093)
                : c <= 2139)))))))
        : (c <= 2207 || (c < 2519
          ? (c < 2402
            ? (c < 2362
              ? (c < 2275
                ? (c >= 2250 && c <= 2273)
                : c <= 2307)
              : (c <= 2364 || (c < 2385
                ? (c >= 2366 && c <= 2383)
                : c <= 2391)))
            : (c <= 2403 || (c < 2494
              ? (c < 2492
                ? (c >= 2433 && c <= 2435)
                : c <= 2492)
              : (c <= 2500 || (c < 2507
                ? (c >= 2503 && c <= 2504)
                : c <= 2509)))))
          : (c <= 2519 || (c < 2631
            ? (c < 2561
              ? (c < 2558
                ? (c >= 2530 && c <= 2531)
                : c <= 2558)
              : (c <= 2563 || (c < 2622
                ? c == 2620
                : c <= 2626)))
            : (c <= 2632 || (c < 2672
              ? (c < 2641
                ? (c >= 2635 && c <= 2637)
                : c <= 2641)
              : (c <= 2673 || (c < 2689
                ? c == 2677
                : c <= 2691)))))))))
      : (c <= 2748 || (c < 3170
        ? (c < 2914
          ? (c < 2817
            ? (c < 2763
              ? (c < 2759
                ? (c >= 2750 && c <= 2757)
                : c <= 2761)
              : (c <= 2765 || (c < 2810
                ? (c >= 2786 && c <= 2787)
                : c <= 2815)))
            : (c <= 2819 || (c < 2887
              ? (c < 2878
                ? c == 2876
                : c <= 2884)
              : (c <= 2888 || (c < 2901
                ? (c >= 2891 && c <= 2893)
                : c <= 2903)))))
          : (c <= 2915 || (c < 3072
            ? (c < 3014
              ? (c < 3006
                ? c == 2946
                : c <= 3010)
              : (c <= 3016 || (c < 3031
                ? (c >= 3018 && c <= 3021)
                : c <= 3031)))
            : (c <= 3076 || (c < 3142
              ? (c < 3134
                ? c == 3132
                : c <= 3140)
              : (c <= 3144 || (c < 3157
                ? (c >= 3146 && c <= 3149)
                : c <= 3158)))))))
        : (c <= 3171 || (c < 3402
          ? (c < 3285
            ? (c < 3262
              ? (c < 3260
                ? (c >= 3201 && c <= 3203)
                : c <= 3260)
              : (c <= 3268 || (c < 3274
                ? (c >= 3270 && c <= 3272)
                : c <= 3277)))
            : (c <= 3286 || (c < 3387
              ? (c < 3328
                ? (c >= 3298 && c <= 3299)
                : c <= 3331)
              : (c <= 3388 || (c < 3398
                ? (c >= 3390 && c <= 3396)
                : c <= 3400)))))
          : (c <= 3405 || (c < 3542
            ? (c < 3457
              ? (c < 3426
                ? c == 3415
                : c <= 3427)
              : (c <= 3459 || (c < 3535
                ? c == 3530
                : c <= 3540)))
            : (c <= 3542 || (c < 3633
              ? (c < 3570
                ? (c >= 3544 && c <= 3551)
                : c <= 3571)
              : (c <= 3633 || (c < 3655
                ? (c >= 3636 && c <= 3642)
                : c <= 3662)))))))))))
    : (c <= 3761 || (c < 7380
      ? (c < 5938
        ? (c < 4038
          ? (c < 3897
            ? (c < 3864
              ? (c < 3784
                ? (c >= 3764 && c <= 3772)
                : c <= 3789)
              : (c <= 3865 || (c < 3895
                ? c == 3893
                : c <= 3895)))
            : (c <= 3897 || (c < 3974
              ? (c < 3953
                ? (c >= 3902 && c <= 3903)
                : c <= 3972)
              : (c <= 3975 || (c < 3993
                ? (c >= 3981 && c <= 3991)
                : c <= 4028)))))
          : (c <= 4038 || (c < 4209
            ? (c < 4190
              ? (c < 4182
                ? (c >= 4139 && c <= 4158)
                : c <= 4185)
              : (c <= 4192 || (c < 4199
                ? (c >= 4194 && c <= 4196)
                : c <= 4205)))
            : (c <= 4212 || (c < 4250
              ? (c < 4239
                ? (c >= 4226 && c <= 4237)
                : c <= 4239)
              : (c <= 4253 || (c < 5906
                ? (c >= 4957 && c <= 4959)
                : c <= 5909)))))))
        : (c <= 5940 || (c < 6741
          ? (c < 6159
            ? (c < 6068
              ? (c < 6002
                ? (c >= 5970 && c <= 5971)
                : c <= 6003)
              : (c <= 6099 || (c < 6155
                ? c == 6109
                : c <= 6157)))
            : (c <= 6159 || (c < 6432
              ? (c < 6313
                ? (c >= 6277 && c <= 6278)
                : c <= 6313)
              : (c <= 6443 || (c < 6679
                ? (c >= 6448 && c <= 6459)
                : c <= 6683)))))
          : (c <= 6750 || (c < 7019
            ? (c < 6832
              ? (c < 6783
                ? (c >= 6752 && c <= 6780)
                : c <= 6783)
              : (c <= 6862 || (c < 6964
                ? (c >= 6912 && c <= 6916)
                : c <= 6980)))
            : (c <= 7027 || (c < 7142
              ? (c < 7073
                ? (c >= 7040 && c <= 7042)
                : c <= 7085)
              : (c <= 7155 || (c < 7376
                ? (c >= 7204 && c <= 7223)
                : c <= 7378)))))))))
      : (c <= 7400 || (c < 43302
        ? (c < 42612
          ? (c < 11503
            ? (c < 7415
              ? (c < 7412
                ? c == 7405
                : c <= 7412)
              : (c <= 7417 || (c < 8400
                ? (c >= 7616 && c <= 7679)
                : c <= 8432)))
            : (c <= 11505 || (c < 12330
              ? (c < 11744
                ? c == 11647
                : c <= 11775)
              : (c <= 12335 || (c < 42607
                ? (c >= 12441 && c <= 12442)
                : c <= 42610)))))
          : (c <= 42621 || (c < 43043
            ? (c < 43010
              ? (c < 42736
                ? (c >= 42654 && c <= 42655)
                : c <= 42737)
              : (c <= 43010 || (c < 43019
                ? c == 43014
                : c <= 43019)))
            : (c <= 43047 || (c < 43188
              ? (c < 43136
                ? c == 43052
                : c <= 43137)
              : (c <= 43205 || (c < 43263
                ? (c >= 43232 && c <= 43249)
                : c <= 43263)))))))
        : (c <= 43309 || (c < 43710
          ? (c < 43587
            ? (c < 43443
              ? (c < 43392
                ? (c >= 43335 && c <= 43347)
                : c <= 43395)
              : (c <= 43456 || (c < 43561
                ? c == 43493
                : c <= 43574)))
            : (c <= 43587 || (c < 43696
              ? (c < 43643
                ? (c >= 43596 && c <= 43597)
                : c <= 43645)
              : (c <= 43696 || (c < 43703
                ? (c >= 43698 && c <= 43700)
                : c <= 43704)))))
          : (c <= 43711 || (c < 64286
            ? (c < 43765
              ? (c < 43755
                ? c == 43713
                : c <= 43759)
              : (c <= 43766 || (c < 44012
                ? (c >= 44003 && c <= 44010)
                : c <= 44013)))
            : (c <= 64286 || (c < 66045
              ? (c < 65056
                ? (c >= 65024 && c <= 65039)
                : c <= 65071)
              : (c <= 66045 || (c < 66422
                ? c == 66272
                : c <= 66426)))))))))))));
}

static inline bool sym_math_text_character_set_4(int32_t c) {
  return (c < 3761
    ? (c < 2748
      ? (c < 2200
        ? (c < 1767
          ? (c < 1479
            ? (c < 1471
              ? (c < 1155
                ? (c >= 768 && c <= 879)
                : (c <= 1159 || (c >= 1425 && c <= 1469)))
              : (c <= 1471 || (c < 1476
                ? (c >= 1473 && c <= 1474)
                : c <= 1477)))
            : (c <= 1479 || (c < 1648
              ? (c < 1611
                ? (c >= 1552 && c <= 1562)
                : c <= 1631)
              : (c <= 1648 || (c < 1759
                ? (c >= 1750 && c <= 1756)
                : c <= 1764)))))
          : (c <= 1768 || (c < 2045
            ? (c < 1840
              ? (c < 1809
                ? (c >= 1770 && c <= 1773)
                : c <= 1809)
              : (c <= 1866 || (c < 2027
                ? (c >= 1958 && c <= 1968)
                : c <= 2035)))
            : (c <= 2045 || (c < 2085
              ? (c < 2075
                ? (c >= 2070 && c <= 2073)
                : c <= 2083)
              : (c <= 2087 || (c < 2137
                ? (c >= 2089 && c <= 2093)
                : c <= 2139)))))))
        : (c <= 2207 || (c < 2519
          ? (c < 2402
            ? (c < 2362
              ? (c < 2275
                ? (c >= 2250 && c <= 2273)
                : c <= 2307)
              : (c <= 2364 || (c < 2385
                ? (c >= 2366 && c <= 2383)
                : c <= 2391)))
            : (c <= 2403 || (c < 2494
              ? (c < 2492
                ? (c >= 2433 && c <= 2435)
                : c <= 2492)
              : (c <= 2500 || (c < 2507
                ? (c >= 2503 && c <= 2504)
                : c <= 2509)))))
          : (c <= 2519 || (c < 2631
            ? (c < 2561
              ? (c < 2558
                ? (c >= 2530 && c <= 2531)
                : c <= 2558)
              : (c <= 2563 || (c < 2622
                ? c == 2620
                : c <= 2626)))
            : (c <= 2632 || (c < 2672
              ? (c < 2641
                ? (c >= 2635 && c <= 2637)
                : c <= 2641)
              : (c <= 2673 || (c < 2689
                ? c == 2677
                : c <= 2691)))))))))
      : (c <= 2748 || (c < 3170
        ? (c < 2914
          ? (c < 2817
            ? (c < 2763
              ? (c < 2759
                ? (c >= 2750 && c <= 2757)
                : c <= 2761)
              : (c <= 2765 || (c < 2810
                ? (c >= 2786 && c <= 2787)
                : c <= 2815)))
            : (c <= 2819 || (c < 2887
              ? (c < 2878
                ? c == 2876
                : c <= 2884)
              : (c <= 2888 || (c < 2901
                ? (c >= 2891 && c <= 2893)
                : c <= 2903)))))
          : (c <= 2915 || (c < 3072
            ? (c < 3014
              ? (c < 3006
                ? c == 2946
                : c <= 3010)
              : (c <= 3016 || (c < 3031
                ? (c >= 3018 && c <= 3021)
                : c <= 3031)))
            : (c <= 3076 || (c < 3142
              ? (c < 3134
                ? c == 3132
                : c <= 3140)
              : (c <= 3144 || (c < 3157
                ? (c >= 3146 && c <= 3149)
                : c <= 3158)))))))
        : (c <= 3171 || (c < 3402
          ? (c < 3285
            ? (c < 3262
              ? (c < 3260
                ? (c >= 3201 && c <= 3203)
                : c <= 3260)
              : (c <= 3268 || (c < 3274
                ? (c >= 3270 && c <= 3272)
                : c <= 3277)))
            : (c <= 3286 || (c < 3387
              ? (c < 3328
                ? (c >= 3298 && c <= 3299)
                : c <= 3331)
              : (c <= 3388 || (c < 3398
                ? (c >= 3390 && c <= 3396)
                : c <= 3400)))))
          : (c <= 3405 || (c < 3542
            ? (c < 3457
              ? (c < 3426
                ? c == 3415
                : c <= 3427)
              : (c <= 3459 || (c < 3535
                ? c == 3530
                : c <= 3540)))
            : (c <= 3542 || (c < 3633
              ? (c < 3570
                ? (c >= 3544 && c <= 3551)
                : c <= 3571)
              : (c <= 3633 || (c < 3655
                ? (c >= 3636 && c <= 3642)
                : c <= 3662)))))))))))
    : (c <= 3761 || (c < 7380
      ? (c < 5938
        ? (c < 4038
          ? (c < 3897
            ? (c < 3864
              ? (c < 3784
                ? (c >= 3764 && c <= 3772)
                : c <= 3789)
              : (c <= 3865 || (c < 3895
                ? c == 3893
                : c <= 3895)))
            : (c <= 3897 || (c < 3974
              ? (c < 3953
                ? (c >= 3902 && c <= 3903)
                : c <= 3972)
              : (c <= 3975 || (c < 3993
                ? (c >= 3981 && c <= 3991)
                : c <= 4028)))))
          : (c <= 4038 || (c < 4209
            ? (c < 4190
              ? (c < 4182
                ? (c >= 4139 && c <= 4158)
                : c <= 4185)
              : (c <= 4192 || (c < 4199
                ? (c >= 4194 && c <= 4196)
                : c <= 4205)))
            : (c <= 4212 || (c < 4250
              ? (c < 4239
                ? (c >= 4226 && c <= 4237)
                : c <= 4239)
              : (c <= 4253 || (c < 5906
                ? (c >= 4957 && c <= 4959)
                : c <= 5909)))))))
        : (c <= 5940 || (c < 6741
          ? (c < 6159
            ? (c < 6068
              ? (c < 6002
                ? (c >= 5970 && c <= 5971)
                : c <= 6003)
              : (c <= 6099 || (c < 6155
                ? c == 6109
                : c <= 6157)))
            : (c <= 6159 || (c < 6432
              ? (c < 6313
                ? (c >= 6277 && c <= 6278)
                : c <= 6313)
              : (c <= 6443 || (c < 6679
                ? (c >= 6448 && c <= 6459)
                : c <= 6683)))))
          : (c <= 6750 || (c < 7019
            ? (c < 6832
              ? (c < 6783
                ? (c >= 6752 && c <= 6780)
                : c <= 6783)
              : (c <= 6862 || (c < 6964
                ? (c >= 6912 && c <= 6916)
                : c <= 6980)))
            : (c <= 7027 || (c < 7142
              ? (c < 7073
                ? (c >= 7040 && c <= 7042)
                : c <= 7085)
              : (c <= 7155 || (c < 7376
                ? (c >= 7204 && c <= 7223)
                : c <= 7378)))))))))
      : (c <= 7400 || (c < 43302
        ? (c < 42612
          ? (c < 11503
            ? (c < 7415
              ? (c < 7412
                ? c == 7405
                : c <= 7412)
              : (c <= 7417 || (c < 8400
                ? (c >= 7616 && c <= 7679)
                : c <= 8432)))
            : (c <= 11505 || (c < 12330
              ? (c < 11744
                ? c == 11647
                : c <= 11775)
              : (c <= 12335 || (c < 42607
                ? (c >= 12441 && c <= 12442)
                : c <= 42607)))))
          : (c <= 42621 || (c < 43043
            ? (c < 43010
              ? (c < 42736
                ? (c >= 42654 && c <= 42655)
                : c <= 42737)
              : (c <= 43010 || (c < 43019
                ? c == 43014
                : c <= 43019)))
            : (c <= 43047 || (c < 43188
              ? (c < 43136
                ? c == 43052
                : c <= 43137)
              : (c <= 43205 || (c < 43263
                ? (c >= 43232 && c <= 43249)
                : c <= 43263)))))))
        : (c <= 43309 || (c < 43710
          ? (c < 43587
            ? (c < 43443
              ? (c < 43392
                ? (c >= 43335 && c <= 43347)
                : c <= 43395)
              : (c <= 43456 || (c < 43561
                ? c == 43493
                : c <= 43574)))
            : (c <= 43587 || (c < 43696
              ? (c < 43643
                ? (c >= 43596 && c <= 43597)
                : c <= 43645)
              : (c <= 43696 || (c < 43703
                ? (c >= 43698 && c <= 43700)
                : c <= 43704)))))
          : (c <= 43711 || (c < 64286
            ? (c < 43765
              ? (c < 43755
                ? c == 43713
                : c <= 43759)
              : (c <= 43766 || (c < 44012
                ? (c >= 44003 && c <= 44010)
                : c <= 44013)))
            : (c <= 64286 || (c < 66045
              ? (c < 65056
                ? (c >= 65024 && c <= 65039)
                : c <= 65071)
              : (c <= 66045 || (c < 66422
                ? c == 66272
                : c <= 66426)))))))))))));
}

static inline bool sym_math_ident_character_set_1(int32_t c) {
  return (c < 43762
    ? (c < 4295
      ? (c < 2790
        ? (c < 2048
          ? (c < 908
            ? (c < 248
              ? (c < 181
                ? (c < 'a'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c >= 216 && c <= 246)))))
              : (c <= 705 || (c < 880
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 895
                  ? (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || (c >= 902 && c <= 906)))))))
            : (c <= 908 || (c < 1568
              ? (c < 1329
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1641 || (c < 1791
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))
                : (c <= 1791 || (c < 1984
                  ? (c < 1869
                    ? (c >= 1808 && c <= 1839)
                    : c <= 1969)
                  : (c <= 2037 || c == 2042))))))))
          : (c <= 2088 || (c < 2556
            ? (c < 2447
              ? (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2308 && c <= 2401)
                    : c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))))
              : (c <= 2448 || (c < 2493
                ? (c < 2482
                  ? (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2527
                  ? (c < 2524
                    ? c == 2510
                    : c <= 2525)
                  : (c <= 2529 || (c >= 2534 && c <= 2545)))))))
            : (c <= 2556 || (c < 2662
              ? (c < 2610
                ? (c < 2579
                  ? (c < 2575
                    ? (c >= 2565 && c <= 2570)
                    : c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2649
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2652 || c == 2654))))
              : (c <= 2676 || (c < 2738
                ? (c < 2707
                  ? (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))))))))
        : (c <= 2799 || (c < 3261
          ? (c < 2979
            ? (c < 2911
              ? (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))
              : (c <= 2913 || (c < 2958
                ? (c < 2947
                  ? (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))
                : (c <= 2960 || (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))))))
            : (c <= 2980 || (c < 3160
              ? (c < 3077
                ? (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3046 && c <= 3055)))
                : (c <= 3084 || (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || c == 3133))))
              : (c <= 3162 || (c < 3205
                ? (c < 3174
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3169)
                  : (c <= 3183 || c == 3200))
                : (c <= 3212 || (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))))))))
          : (c <= 3261 || (c < 3648
            ? (c < 3423
              ? (c < 3332
                ? (c < 3302
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3406
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))))
              : (c <= 3425 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3430 && c <= 3439)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3558
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3635)))))))
            : (c <= 3654 || (c < 3792
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3776
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))))
              : (c <= 3801 || (c < 3913
                ? (c < 3872
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3881 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4176
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4169)
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))))))))))))
      : (c <= 4295 || (c < 8182
        ? (c < 6320
          ? (c < 4992
            ? (c < 4752
              ? (c < 4688
                ? (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))))
              : (c <= 4784 || (c < 4808
                ? (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))
                : (c <= 4822 || (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4969 && c <= 4977)))))))
            : (c <= 5007 || (c < 5952
              ? (c < 5761
                ? (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6108
                ? (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6176
                  ? (c < 6160
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6314)))))))))
          : (c <= 6389 || (c < 7357
            ? (c < 6800
              ? (c < 6576
                ? (c < 6512
                  ? (c < 6470
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6688
                  ? (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6678)
                  : (c <= 6740 || (c >= 6784 && c <= 6793)))))
              : (c <= 6809 || (c < 7168
                ? (c < 6992
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6988)
                  : (c <= 7001 || (c >= 7043 && c <= 7141)))
                : (c <= 7203 || (c < 7296
                  ? (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))))))
            : (c <= 7359 || (c < 8031
              ? (c < 8008
                ? (c < 7960
                  ? (c < 7424
                    ? (c >= 7401 && c <= 7418)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))))
              : (c <= 8061 || (c < 8134
                ? (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))))))))
        : (c <= 8188 || (c < 12445
          ? (c < 11499
            ? (c < 8472
              ? (c < 8336
                ? (c < 8305
                  ? (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)
                  : (c <= 8305 || c == 8319))
                : (c <= 8348 || (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))))
              : (c <= 8477 || (c < 8508
                ? (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))
                : (c <= 8511 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))))))
            : (c <= 11507 || (c < 11704
              ? (c < 11631
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))
              : (c <= 11710 || (c < 12293
                ? (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 12295 || (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))))))
          : (c <= 12447 || (c < 42994
            ? (c < 42240
              ? (c < 12704
                ? (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))
              : (c <= 42508 || (c < 42786
                ? (c < 42623
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42606)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))))))
            : (c <= 43042 || (c < 43471
              ? (c < 43259
                ? (c < 43216
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43225 || (c >= 43250 && c <= 43255)))
                : (c <= 43259 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43616
                ? (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43595 || (c >= 43600 && c <= 43609)))
                : (c <= 43638 || (c < 43739
                  ? (c >= 43642 && c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))))))))))))))
    : (c <= 43764 || (c < 71040
      ? (c < 67424
        ? (c < 65343
          ? (c < 64318
            ? (c < 44032
              ? (c < 43816
                ? (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))
                : (c <= 43822 || (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44002 || (c >= 44016 && c <= 44025)))))
              : (c <= 55203 || (c < 64256
                ? (c < 63744
                  ? (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64298
                  ? (c < 64285
                    ? (c >= 64275 && c <= 64279)
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))))))
            : (c <= 64318 || (c < 65101
              ? (c < 64612
                ? (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c >= 65075 && c <= 65076)))))
              : (c <= 65103 || (c < 65147
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || c == 65145))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c >= 65313 && c <= 65338)))))))))
          : (c <= 65343 || (c < 66432
            ? (c < 65596
              ? (c < 65490
                ? (c < 65474
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))
              : (c <= 65597 || (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c >= 65856 && c <= 65908)))
                : (c <= 66204 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66335)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))))
            : (c <= 66461 || (c < 66928
              ? (c < 66720
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))
              : (c <= 66938 || (c < 66979
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))
                : (c <= 66993 || (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))))))))))
        : (c <= 67431 || (c < 69552
          ? (c < 68117
            ? (c < 67680
              ? (c < 67592
                ? (c < 67506
                  ? (c < 67463
                    ? (c >= 67456 && c <= 67461)
                    : c <= 67504)
                  : (c <= 67514 || (c >= 67584 && c <= 67589)))
                : (c <= 67592 || (c < 67644
                  ? (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))))
              : (c <= 67702 || (c < 67872
                ? (c < 67828
                  ? (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)
                  : (c <= 67829 || (c >= 67840 && c <= 67861)))
                : (c <= 67897 || (c < 68096
                  ? (c < 68030
                    ? (c >= 67968 && c <= 68023)
                    : c <= 68031)
                  : (c <= 68096 || (c >= 68112 && c <= 68115)))))))
            : (c <= 68119 || (c < 68608
              ? (c < 68297
                ? (c < 68224
                  ? (c < 68192
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68220)
                  : (c <= 68252 || (c >= 68288 && c <= 68295)))
                : (c <= 68324 || (c < 68448
                  ? (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)
                  : (c <= 68466 || (c >= 68480 && c <= 68497)))))
              : (c <= 68680 || (c < 69296
                ? (c < 68864
                  ? (c < 68800
                    ? (c >= 68736 && c <= 68786)
                    : c <= 68850)
                  : (c <= 68899 || (c >= 69248 && c <= 69289)))
                : (c <= 69297 || (c < 69424
                  ? (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)
                  : (c <= 69445 || (c >= 69488 && c <= 69505)))))))))
          : (c <= 69572 || (c < 70282
            ? (c < 69968
              ? (c < 69763
                ? (c < 69745
                  ? (c < 69635
                    ? (c >= 69600 && c <= 69622)
                    : c <= 69687)
                  : (c <= 69746 || c == 69749))
                : (c <= 69807 || (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))))
              : (c <= 70002 || (c < 70108
                ? (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || c == 70106))
                : (c <= 70108 || (c < 70272
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70187)
                  : (c <= 70278 || c == 70280))))))
            : (c <= 70285 || (c < 70461
              ? (c < 70415
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70366 || (c >= 70405 && c <= 70412)))
                : (c <= 70416 || (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c >= 70453 && c <= 70457)))))
              : (c <= 70461 || (c < 70751
                ? (c < 70656
                  ? (c < 70493
                    ? c == 70480
                    : c <= 70497)
                  : (c <= 70708 || (c >= 70727 && c <= 70730)))
                : (c <= 70753 || (c < 70852
                  ? (c >= 70784 && c <= 70831)
                  : (c <= 70853 || c == 70855))))))))))))
      : (c <= 71086 || (c < 119973
        ? (c < 73440
          ? (c < 72163
            ? (c < 71935
              ? (c < 71352
                ? (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))
                : (c <= 71352 || (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))))
              : (c <= 71942 || (c < 71999
                ? (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))
                : (c <= 71999 || (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || c == 72161))))))
            : (c <= 72163 || (c < 72768
              ? (c < 72284
                ? (c < 72250
                  ? (c < 72203
                    ? c == 72192
                    : c <= 72242)
                  : (c <= 72250 || c == 72272))
                : (c <= 72329 || (c < 72704
                  ? (c < 72368
                    ? c == 72349
                    : c <= 72440)
                  : (c <= 72712 || (c >= 72714 && c <= 72750)))))
              : (c <= 72768 || (c < 73030
                ? (c < 72968
                  ? (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)
                  : (c <= 72969 || (c >= 72971 && c <= 73008)))
                : (c <= 73030 || (c < 73066
                  ? (c < 73063
                    ? (c >= 73056 && c <= 73061)
                    : c <= 73064)
                  : (c <= 73097 || c == 73112))))))))
          : (c <= 73458 || (c < 94176
            ? (c < 92784
              ? (c < 77712
                ? (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c >= 74880 && c <= 75075)))
                : (c <= 77808 || (c < 92160
                  ? (c < 82944
                    ? (c >= 77824 && c <= 78894)
                    : c <= 83526)
                  : (c <= 92728 || (c >= 92736 && c <= 92766)))))
              : (c <= 92862 || (c < 93053
                ? (c < 92992
                  ? (c < 92928
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92975)
                  : (c <= 92995 || (c >= 93027 && c <= 93047)))
                : (c <= 93071 || (c < 94032
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94032 || (c >= 94099 && c <= 94111)))))))
            : (c <= 94177 || (c < 110948
              ? (c < 110576
                ? (c < 100352
                  ? (c < 94208
                    ? c == 94179
                    : c <= 100343)
                  : (c <= 101589 || (c >= 101632 && c <= 101640)))
                : (c <= 110579 || (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c >= 110928 && c <= 110930)))))
              : (c <= 110951 || (c < 113808
                ? (c < 113776
                  ? (c < 113664
                    ? (c >= 110960 && c <= 111355)
                    : c <= 113770)
                  : (c <= 113788 || (c >= 113792 && c <= 113800)))
                : (c <= 113817 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 126469
          ? (c < 120630
            ? (c < 120123
              ? (c < 120005
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c >= 119997 && c <= 120003)))
                : (c <= 120069 || (c < 120086
                  ? (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)
                  : (c <= 120092 || (c >= 120094 && c <= 120121)))))
              : (c <= 120126 || (c < 120488
                ? (c < 120138
                  ? (c < 120134
                    ? (c >= 120128 && c <= 120132)
                    : c <= 120134)
                  : (c <= 120144 || (c >= 120146 && c <= 120485)))
                : (c <= 120512 || (c < 120572
                  ? (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)
                  : (c <= 120596 || (c >= 120598 && c <= 120628)))))))
            : (c <= 120654 || (c < 123536
              ? (c < 120772
                ? (c < 120714
                  ? (c < 120688
                    ? (c >= 120656 && c <= 120686)
                    : c <= 120712)
                  : (c <= 120744 || (c >= 120746 && c <= 120770)))
                : (c <= 120779 || (c < 123191
                  ? (c < 123136
                    ? (c >= 122624 && c <= 122654)
                    : c <= 123180)
                  : (c <= 123197 || c == 123214))))
              : (c <= 123565 || (c < 124912
                ? (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))
                : (c <= 124926 || (c < 125259
                  ? (c < 125184
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125251)
                  : (c <= 125259 || (c >= 126464 && c <= 126467)))))))))
          : (c <= 126495 || (c < 126561
            ? (c < 126537
              ? (c < 126516
                ? (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c >= 126505 && c <= 126514)))
                : (c <= 126519 || (c < 126530
                  ? (c < 126523
                    ? c == 126521
                    : c <= 126523)
                  : (c <= 126530 || c == 126535))))
              : (c <= 126537 || (c < 126551
                ? (c < 126545
                  ? (c < 126541
                    ? c == 126539
                    : c <= 126543)
                  : (c <= 126546 || c == 126548))
                : (c <= 126551 || (c < 126557
                  ? (c < 126555
                    ? c == 126553
                    : c <= 126555)
                  : (c <= 126557 || c == 126559))))))
            : (c <= 126562 || (c < 126629
              ? (c < 126585
                ? (c < 126572
                  ? (c < 126567
                    ? c == 126564
                    : c <= 126570)
                  : (c <= 126578 || (c >= 126580 && c <= 126583)))
                : (c <= 126588 || (c < 126603
                  ? (c < 126592
                    ? c == 126590
                    : c <= 126601)
                  : (c <= 126619 || (c >= 126625 && c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 173824
                  ? (c < 131072
                    ? (c >= 126635 && c <= 126651)
                    : c <= 173791)
                  : (c <= 177976 || (c >= 177984 && c <= 178205)))
                : (c <= 183969 || (c < 194560
                  ? (c >= 183984 && c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_math_ident_character_set_2(int32_t c) {
  return (c < 42240
    ? (c < 3544
      ? (c < 2693
        ? (c < 1984
          ? (c < 1015
            ? (c < 736
              ? (c < 183
                ? (c < 'a'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 183 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c < 710
                    ? (c >= 248 && c <= 705)
                    : c <= 721)))))
              : (c <= 740 || (c < 895
                ? (c < 768
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)))
                : (c <= 895 || (c < 910
                  ? (c < 908
                    ? (c >= 902 && c <= 906)
                    : c <= 908)
                  : (c <= 929 || (c >= 931 && c <= 1013)))))))
            : (c <= 1153 || (c < 1488
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || c == 1479))))
              : (c <= 1514 || (c < 1759
                ? (c < 1568
                  ? (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)
                  : (c <= 1641 || (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)))
                : (c <= 1768 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1866 || (c >= 1869 && c <= 1969)))))))))
          : (c <= 2037 || (c < 2524
            ? (c < 2417
              ? (c < 2160
                ? (c < 2048
                  ? (c < 2045
                    ? c == 2042
                    : c <= 2045)
                  : (c <= 2093 || (c < 2144
                    ? (c >= 2112 && c <= 2139)
                    : c <= 2154)))
                : (c <= 2183 || (c < 2275
                  ? (c < 2200
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2273)
                  : (c <= 2403 || (c >= 2406 && c <= 2415)))))
              : (c <= 2435 || (c < 2486
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)))
                : (c <= 2489 || (c < 2507
                  ? (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)
                  : (c <= 2510 || c == 2519))))))
            : (c <= 2525 || (c < 2613
              ? (c < 2565
                ? (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))
                : (c <= 2570 || (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))))
              : (c <= 2614 || (c < 2641
                ? (c < 2622
                  ? (c < 2620
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2620)
                  : (c <= 2626 || (c < 2635
                    ? (c >= 2631 && c <= 2632)
                    : c <= 2637)))
                : (c <= 2641 || (c < 2662
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2677 || (c >= 2689 && c <= 2691)))))))))))
        : (c <= 2701 || (c < 3072
          ? (c < 2891
            ? (c < 2790
              ? (c < 2748
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2757 || (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c >= 2784 && c <= 2787)))))
              : (c <= 2799 || (c < 2858
                ? (c < 2821
                  ? (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)
                  : (c <= 2828 || (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)))
                : (c <= 2864 || (c < 2876
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2884 || (c >= 2887 && c <= 2888)))))))
            : (c <= 2893 || (c < 2972
              ? (c < 2946
                ? (c < 2911
                  ? (c < 2908
                    ? (c >= 2901 && c <= 2903)
                    : c <= 2909)
                  : (c <= 2915 || (c < 2929
                    ? (c >= 2918 && c <= 2927)
                    : c <= 2929)))
                : (c <= 2947 || (c < 2962
                  ? (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 3014
                ? (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)))
                : (c <= 3016 || (c < 3031
                  ? (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)
                  : (c <= 3031 || (c >= 3046 && c <= 3055)))))))))
          : (c <= 3084 || (c < 3293
            ? (c < 3174
              ? (c < 3146
                ? (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)))
                : (c <= 3149 || (c < 3165
                  ? (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3171)))))
              : (c <= 3183 || (c < 3253
                ? (c < 3214
                  ? (c < 3205
                    ? (c >= 3200 && c <= 3203)
                    : c <= 3212)
                  : (c <= 3216 || (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)))
                : (c <= 3257 || (c < 3274
                  ? (c < 3270
                    ? (c >= 3260 && c <= 3268)
                    : c <= 3272)
                  : (c <= 3277 || (c >= 3285 && c <= 3286)))))))
            : (c <= 3294 || (c < 3430
              ? (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c >= 3423 && c <= 3427)))))
              : (c <= 3439 || (c < 3517
                ? (c < 3461
                  ? (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)
                  : (c <= 3478 || (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)))
                : (c <= 3517 || (c < 3535
                  ? (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)
                  : (c <= 3540 || c == 3542))))))))))))
      : (c <= 3551 || (c < 6823
        ? (c < 4800
          ? (c < 3902
            ? (c < 3776
              ? (c < 3713
                ? (c < 3585
                  ? (c < 3570
                    ? (c >= 3558 && c <= 3567)
                    : c <= 3571)
                  : (c <= 3642 || (c < 3664
                    ? (c >= 3648 && c <= 3662)
                    : c <= 3673)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || (c < 3751
                    ? c == 3749
                    : c <= 3773)))))
              : (c <= 3780 || (c < 3864
                ? (c < 3792
                  ? (c < 3784
                    ? c == 3782
                    : c <= 3789)
                  : (c <= 3801 || (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)))
                : (c <= 3865 || (c < 3895
                  ? (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)
                  : (c <= 3895 || c == 3897))))))
            : (c <= 3911 || (c < 4304
              ? (c < 4096
                ? (c < 3974
                  ? (c < 3953
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3972)
                  : (c <= 3991 || (c < 4038
                    ? (c >= 3993 && c <= 4028)
                    : c <= 4038)))
                : (c <= 4169 || (c < 4295
                  ? (c < 4256
                    ? (c >= 4176 && c <= 4253)
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))))
              : (c <= 4346 || (c < 4704
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || (c < 4698
                    ? c == 4696
                    : c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))))))
          : (c <= 4800 || (c < 6016
            ? (c < 5121
              ? (c < 4957
                ? (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)))
                : (c <= 4959 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5919
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5909)))
                : (c <= 5940 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5971)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6002 && c <= 6003)))))))
            : (c <= 6099 || (c < 6448
              ? (c < 6176
                ? (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))
                : (c <= 6264 || (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c >= 6432 && c <= 6443)))))
              : (c <= 6459 || (c < 6656
                ? (c < 6528
                  ? (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)))
                : (c <= 6683 || (c < 6783
                  ? (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))))))))))
        : (c <= 6823 || (c < 8458
          ? (c < 8029
            ? (c < 7312
              ? (c < 7040
                ? (c < 6912
                  ? (c < 6847
                    ? (c >= 6832 && c <= 6845)
                    : c <= 6862)
                  : (c <= 6988 || (c < 7019
                    ? (c >= 6992 && c <= 7001)
                    : c <= 7027)))
                : (c <= 7155 || (c < 7245
                  ? (c < 7232
                    ? (c >= 7168 && c <= 7223)
                    : c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))
              : (c <= 7354 || (c < 7968
                ? (c < 7380
                  ? (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)
                  : (c <= 7418 || (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)))
                : (c <= 8005 || (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))))))
            : (c <= 8029 || (c < 8182
              ? (c < 8134
                ? (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || (c < 8130
                    ? c == 8126
                    : c <= 8132)))
                : (c <= 8140 || (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8400
                ? (c < 8305
                  ? (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)
                  : (c <= 8305 || (c < 8336
                    ? c == 8319
                    : c <= 8348)))
                : (c <= 8412 || (c < 8450
                  ? (c < 8421
                    ? c == 8417
                    : c <= 8432)
                  : (c <= 8450 || c == 8455))))))))
          : (c <= 8467 || (c < 11704
            ? (c < 11264
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c >= 8544 && c <= 8584)))))
              : (c <= 11492 || (c < 11631
                ? (c < 11559
                  ? (c < 11520
                    ? (c >= 11499 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || (c < 11568
                    ? c == 11565
                    : c <= 11623)))
                : (c <= 11631 || (c < 11688
                  ? (c < 11680
                    ? (c >= 11647 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))))))
            : (c <= 11710 || (c < 12441
              ? (c < 12293
                ? (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c < 11744
                    ? (c >= 11736 && c <= 11742)
                    : c <= 11775)))
                : (c <= 12295 || (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12335)
                    : c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12442 || (c < 12704
                ? (c < 12540
                  ? (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)
                  : (c <= 12543 || (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)))
                : (c <= 12735 || (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))))))))))))))
    : (c <= 42508 || (c < 70287
      ? (c < 66045
        ? (c < 63744
          ? (c < 43488
            ? (c < 43052
              ? (c < 42786
                ? (c < 42612
                  ? (c < 42560
                    ? (c >= 42512 && c <= 42539)
                    : c <= 42607)
                  : (c <= 42621 || (c < 42775
                    ? (c >= 42623 && c <= 42737)
                    : c <= 42783)))
                : (c <= 42888 || (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43047)))))
              : (c <= 43052 || (c < 43261
                ? (c < 43216
                  ? (c < 43136
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43205)
                  : (c <= 43225 || (c < 43259
                    ? (c >= 43232 && c <= 43255)
                    : c <= 43259)))
                : (c <= 43309 || (c < 43392
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43347)
                    : c <= 43388)
                  : (c <= 43456 || (c >= 43471 && c <= 43481)))))))
            : (c <= 43518 || (c < 43793
              ? (c < 43739
                ? (c < 43600
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43574)
                    : c <= 43597)
                  : (c <= 43609 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43714)))
                : (c <= 43741 || (c < 43777
                  ? (c < 43762
                    ? (c >= 43744 && c <= 43759)
                    : c <= 43766)
                  : (c <= 43782 || (c >= 43785 && c <= 43790)))))
              : (c <= 43798 || (c < 44012
                ? (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)))
                : (c <= 44013 || (c < 55216
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))))))))
          : (c <= 64109 || (c < 65143
            ? (c < 64467
              ? (c < 64312
                ? (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))
                : (c <= 64316 || (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c >= 64326 && c <= 64433)))))
              : (c <= 64605 || (c < 65056
                ? (c < 64914
                  ? (c < 64848
                    ? (c >= 64612 && c <= 64829)
                    : c <= 64911)
                  : (c <= 64967 || (c < 65024
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65039)))
                : (c <= 65071 || (c < 65137
                  ? (c < 65101
                    ? (c >= 65075 && c <= 65076)
                    : c <= 65103)
                  : (c <= 65137 || c == 65139))))))
            : (c <= 65143 || (c < 65482
              ? (c < 65313
                ? (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c < 65296
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65305)))
                : (c <= 65338 || (c < 65382
                  ? (c < 65345
                    ? c == 65343
                    : c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))))
              : (c <= 65487 || (c < 65596
                ? (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)))
                : (c <= 65597 || (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c >= 65856 && c <= 65908)))))))))))
        : (c <= 66045 || (c < 68030
          ? (c < 66979
            ? (c < 66560
              ? (c < 66384
                ? (c < 66272
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66272 || (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)))
                : (c <= 66426 || (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))))
              : (c <= 66717 || (c < 66928
                ? (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c >= 66967 && c <= 66977)))))))
            : (c <= 66993 || (c < 67594
              ? (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))))
              : (c <= 67637 || (c < 67808
                ? (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c < 67712
                    ? (c >= 67680 && c <= 67702)
                    : c <= 67742)))
                : (c <= 67826 || (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))))))))
          : (c <= 68031 || (c < 69488
            ? (c < 68448
              ? (c < 68224
                ? (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c < 68192
                    ? (c >= 68121 && c <= 68149)
                    : c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))))
              : (c <= 68466 || (c < 69248
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68899)))
                : (c <= 69289 || (c < 69415
                  ? (c < 69376
                    ? (c >= 69296 && c <= 69297)
                    : c <= 69404)
                  : (c <= 69415 || (c >= 69424 && c <= 69445)))))))
            : (c <= 69505 || (c < 69968
              ? (c < 69763
                ? (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c < 69749
                    ? (c >= 69745 && c <= 69746)
                    : c <= 69749)))
                : (c <= 69807 || (c < 69956
                  ? (c < 69891
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69926)
                  : (c <= 69956 || c == 69959))))
              : (c <= 70002 || (c < 70144
                ? (c < 70081
                  ? (c < 70019
                    ? c == 70006
                    : c <= 70066)
                  : (c <= 70084 || (c < 70108
                    ? c == 70106
                    : c <= 70108)))
                : (c <= 70161 || (c < 70280
                  ? (c < 70272
                    ? (c >= 70163 && c <= 70187)
                    : c <= 70278)
                  : (c <= 70280 || (c >= 70282 && c <= 70285)))))))))))))
      : (c <= 70301 || (c < 110960
        ? (c < 72368
          ? (c < 71352
            ? (c < 70656
              ? (c < 70442
                ? (c < 70405
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70366)
                  : (c <= 70412 || (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)))
                : (c <= 70448 || (c < 70461
                  ? (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)
                  : (c <= 70461 || (c < 70493
                    ? c == 70480
                    : c <= 70497)))))
              : (c <= 70708 || (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))))
            : (c <= 71352 || (c < 72001
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c < 71935
                    ? (c >= 71840 && c <= 71903)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))
              : (c <= 72001 || (c < 72203
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || (c < 72192
                    ? c == 72163
                    : c <= 72192)))
                : (c <= 72242 || (c < 72284
                  ? (c < 72272
                    ? c == 72250
                    : c <= 72272)
                  : (c <= 72329 || c == 72349))))))))
          : (c <= 72440 || (c < 92736
            ? (c < 73066
              ? (c < 72968
                ? (c < 72768
                  ? (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72750)
                  : (c <= 72768 || (c < 72960
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73056
                  ? (c < 73030
                    ? (c >= 72971 && c <= 73008)
                    : c <= 73030)
                  : (c <= 73061 || (c >= 73063 && c <= 73064)))))
              : (c <= 73097 || (c < 74880
                ? (c < 73648
                  ? (c < 73440
                    ? c == 73112
                    : c <= 73458)
                  : (c <= 73648 || (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)))
                : (c <= 75075 || (c < 82944
                  ? (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)
                  : (c <= 83526 || (c >= 92160 && c <= 92728)))))))
            : (c <= 92766 || (c < 94176
              ? (c < 93053
                ? (c < 92928
                  ? (c < 92880
                    ? (c >= 92784 && c <= 92862)
                    : c <= 92909)
                  : (c <= 92975 || (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)))
                : (c <= 93071 || (c < 94032
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94032 || (c >= 94099 && c <= 94111)))))
              : (c <= 94177 || (c < 110581
                ? (c < 100352
                  ? (c < 94208
                    ? c == 94179
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))
                : (c <= 110587 || (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c >= 110948 && c <= 110951)))))))))))
        : (c <= 111355 || (c < 124912
          ? (c < 120138
            ? (c < 119982
              ? (c < 119894
                ? (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 119808
                    ? (c >= 113808 && c <= 113817)
                    : c <= 119892)))
                : (c <= 119964 || (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c >= 119977 && c <= 119980)))))
              : (c <= 119993 || (c < 120086
                ? (c < 120005
                  ? (c < 119997
                    ? c == 119995
                    : c <= 120003)
                  : (c <= 120069 || (c < 120077
                    ? (c >= 120071 && c <= 120074)
                    : c <= 120084)))
                : (c <= 120092 || (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))))))
            : (c <= 120144 || (c < 120746
              ? (c < 120598
                ? (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c < 120572
                    ? (c >= 120540 && c <= 120570)
                    : c <= 120596)))
                : (c <= 120628 || (c < 120688
                  ? (c < 120656
                    ? (c >= 120630 && c <= 120654)
                    : c <= 120686)
                  : (c <= 120712 || (c >= 120714 && c <= 120744)))))
              : (c <= 120770 || (c < 123536
                ? (c < 123136
                  ? (c < 122624
                    ? (c >= 120772 && c <= 120779)
                    : c <= 122654)
                  : (c <= 123180 || (c < 123214
                    ? (c >= 123191 && c <= 123197)
                    : c <= 123214)))
                : (c <= 123565 || (c < 124904
                  ? (c < 124896
                    ? (c >= 123584 && c <= 123627)
                    : c <= 124902)
                  : (c <= 124907 || (c >= 124909 && c <= 124910)))))))))
          : (c <= 124926 || (c < 126555
            ? (c < 126521
              ? (c < 126497
                ? (c < 125259
                  ? (c < 125184
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125251)
                  : (c <= 125259 || (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)))
                : (c <= 126498 || (c < 126505
                  ? (c < 126503
                    ? c == 126500
                    : c <= 126503)
                  : (c <= 126514 || (c >= 126516 && c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || c == 126553))))))
            : (c <= 126555 || (c < 126603
              ? (c < 126572
                ? (c < 126561
                  ? (c < 126559
                    ? c == 126557
                    : c <= 126559)
                  : (c <= 126562 || (c < 126567
                    ? c == 126564
                    : c <= 126570)))
                : (c <= 126578 || (c < 126590
                  ? (c < 126585
                    ? (c >= 126580 && c <= 126583)
                    : c <= 126588)
                  : (c <= 126590 || (c >= 126592 && c <= 126601)))))
              : (c <= 126619 || (c < 177984
                ? (c < 126635
                  ? (c < 126629
                    ? (c >= 126625 && c <= 126627)
                    : c <= 126633)
                  : (c <= 126651 || (c < 173824
                    ? (c >= 131072 && c <= 173791)
                    : c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '"') ADVANCE(66);
      if (lookahead == '$') ADVANCE(74);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == '\'') ADVANCE(110);
      if (lookahead == '(') ADVANCE(131);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '_') ADVANCE(165);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == ';') ADVANCE(137);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(165);
      if (lookahead == '|' ||
          lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(122);
      if (aux_sym_math_delimited_token1_character_set_1(lookahead)) ADVANCE(115);
      if (lookahead == '}' ||
          (8969 <= lookahead && lookahead <= 8971) ||
          (8989 <= lookahead && lookahead <= 8991) ||
          lookahead == 10099 ||
          (10215 <= lookahead && lookahead <= 10223) ||
          (10628 <= lookahead && lookahead <= 10648) ||
          (10713 <= lookahead && lookahead <= 10715) ||
          lookahead == 10749) ADVANCE(119);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(166);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(165);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_1(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_1(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '$') ADVANCE(75);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_2(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_1(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_1(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_1(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_1(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_1(lookahead)) ADVANCE(117);
      if (aux_sym_math_delimited_token2_character_set_1(lookahead)) ADVANCE(120);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_1(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_1(lookahead)) ADVANCE(117);
      if (aux_sym_math_delimited_token2_character_set_1(lookahead)) ADVANCE(120);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_2(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_2(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(124);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_2(lookahead)) ADVANCE(117);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '!') ADVANCE(151);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(111);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead == ':') ADVANCE(149);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(150);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '|') ADVANCE(123);
      if (lookahead == '~') ADVANCE(152);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (aux_sym_math_delimited_token1_character_set_2(lookahead)) ADVANCE(117);
      if (aux_sym_math_delimited_token2_character_set_1(lookahead)) ADVANCE(120);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(141);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(64);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '|') ADVANCE(34);
      if (aux_sym_math_delimited_token2_character_set_2(lookahead)) ADVANCE(119);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 34:
      if (lookahead == ']') ADVANCE(118);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '}') ADVANCE(61);
      END_STATE();
    case 39:
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(66);
      if (lookahead == '$') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == '~') ADVANCE(64);
      END_STATE();
    case 43:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(66);
      if (lookahead == '$') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 44:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(66);
      if (lookahead == '$') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == ']') ADVANCE(160);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == '~') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(45);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 46:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(59);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(61);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 49:
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 50:
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 51:
      if (eof) ADVANCE(54);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(66);
      if (lookahead == '$') ADVANCE(74);
      if (lookahead == ')') ADVANCE(133);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead == ',') ADVANCE(135);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ';') ADVANCE(137);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(73);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(171);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(122);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(66);
      if (lookahead == '$') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(66);
      if (lookahead == '$') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '<') ADVANCE(68);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '@') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == '~') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '/') ADVANCE(163);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '?') ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_linebreak);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_linebreak);
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_escape);
      if (lookahead == '{') ADVANCE(48);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_text_shorthand);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_text_shorthand);
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_smart_quote);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(45);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_heading_start);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>') ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT_DASH_LT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_TILDE_TILDE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '<') ADVANCE(89);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '<') ADVANCE(86);
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT_TILDE);
      if (lookahead == '~') ADVANCE(92);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT_DASH_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ_COLON);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE_DASH_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_GT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TILDE_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '>') ADVANCE(77);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_math_delimited_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_math_delimited_token1);
      if (lookahead == '|') ADVANCE(114);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_math_delimited_token1);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_math_delimited_token2);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_math_delimited_token2);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__math_fence);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__math_fence);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == ']') ADVANCE(118);
      if (lookahead == '|') ADVANCE(121);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__math_fence);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '|') ADVANCE(121);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__math_fence);
      if (lookahead == '|') ADVANCE(121);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__math_fence);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_math_align_point);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_math_align_point);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(20);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(79);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_math_text);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(18);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(142);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '/') ADVANCE(163);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '~') ADVANCE(96);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '=') ADVANCE(102);
      if (lookahead == '>') ADVANCE(103);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(20);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(79);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(100);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '=') ADVANCE(81);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '~') ADVANCE(33);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_math_text);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(59);
      if (lookahead == '\r') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(62);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(61);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_math_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == 1160 ||
          lookahead == 1161 ||
          lookahead == 6846 ||
          (8413 <= lookahead && lookahead <= 8416) ||
          (8418 <= lookahead && lookahead <= 8420) ||
          (42608 <= lookahead && lookahead <= 42610)) ADVANCE(156);
      if (sym_math_text_character_set_4(lookahead)) ADVANCE(155);
      if (sym_math_ident_character_set_1(lookahead)) ADVANCE(158);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_math_text);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_math_text);
      if (sym_math_ident_character_set_2(lookahead)) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_math_ident);
      if (sym_math_ident_character_set_2(lookahead)) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(169);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '/') ADVANCE(163);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_block_comment_token2);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__space_same_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(171);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 51, .external_lex_state = 2},
  [2] = {.lex_state = 12, .external_lex_state = 3},
  [3] = {.lex_state = 12, .external_lex_state = 3},
  [4] = {.lex_state = 12, .external_lex_state = 3},
  [5] = {.lex_state = 12, .external_lex_state = 3},
  [6] = {.lex_state = 12, .external_lex_state = 3},
  [7] = {.lex_state = 12, .external_lex_state = 3},
  [8] = {.lex_state = 12, .external_lex_state = 3},
  [9] = {.lex_state = 12, .external_lex_state = 3},
  [10] = {.lex_state = 12, .external_lex_state = 3},
  [11] = {.lex_state = 12, .external_lex_state = 3},
  [12] = {.lex_state = 12, .external_lex_state = 3},
  [13] = {.lex_state = 4, .external_lex_state = 3},
  [14] = {.lex_state = 4, .external_lex_state = 3},
  [15] = {.lex_state = 15, .external_lex_state = 3},
  [16] = {.lex_state = 15, .external_lex_state = 3},
  [17] = {.lex_state = 4, .external_lex_state = 3},
  [18] = {.lex_state = 14, .external_lex_state = 3},
  [19] = {.lex_state = 14, .external_lex_state = 3},
  [20] = {.lex_state = 14, .external_lex_state = 3},
  [21] = {.lex_state = 14, .external_lex_state = 3},
  [22] = {.lex_state = 14, .external_lex_state = 3},
  [23] = {.lex_state = 4, .external_lex_state = 3},
  [24] = {.lex_state = 14, .external_lex_state = 3},
  [25] = {.lex_state = 4, .external_lex_state = 3},
  [26] = {.lex_state = 14, .external_lex_state = 3},
  [27] = {.lex_state = 14, .external_lex_state = 3},
  [28] = {.lex_state = 14, .external_lex_state = 3},
  [29] = {.lex_state = 14, .external_lex_state = 3},
  [30] = {.lex_state = 7, .external_lex_state = 3},
  [31] = {.lex_state = 6, .external_lex_state = 3},
  [32] = {.lex_state = 6, .external_lex_state = 3},
  [33] = {.lex_state = 6, .external_lex_state = 3},
  [34] = {.lex_state = 11, .external_lex_state = 3},
  [35] = {.lex_state = 11, .external_lex_state = 3},
  [36] = {.lex_state = 6, .external_lex_state = 3},
  [37] = {.lex_state = 11, .external_lex_state = 3},
  [38] = {.lex_state = 6, .external_lex_state = 3},
  [39] = {.lex_state = 11, .external_lex_state = 3},
  [40] = {.lex_state = 3, .external_lex_state = 3},
  [41] = {.lex_state = 11, .external_lex_state = 3},
  [42] = {.lex_state = 13, .external_lex_state = 3},
  [43] = {.lex_state = 3, .external_lex_state = 3},
  [44] = {.lex_state = 3, .external_lex_state = 3},
  [45] = {.lex_state = 5, .external_lex_state = 3},
  [46] = {.lex_state = 12, .external_lex_state = 3},
  [47] = {.lex_state = 10, .external_lex_state = 3},
  [48] = {.lex_state = 10, .external_lex_state = 3},
  [49] = {.lex_state = 3, .external_lex_state = 3},
  [50] = {.lex_state = 9, .external_lex_state = 3},
  [51] = {.lex_state = 3, .external_lex_state = 3},
  [52] = {.lex_state = 12, .external_lex_state = 3},
  [53] = {.lex_state = 12, .external_lex_state = 3},
  [54] = {.lex_state = 12, .external_lex_state = 3},
  [55] = {.lex_state = 12, .external_lex_state = 3},
  [56] = {.lex_state = 12, .external_lex_state = 3},
  [57] = {.lex_state = 12, .external_lex_state = 3},
  [58] = {.lex_state = 10, .external_lex_state = 3},
  [59] = {.lex_state = 12, .external_lex_state = 3},
  [60] = {.lex_state = 10, .external_lex_state = 3},
  [61] = {.lex_state = 15, .external_lex_state = 3},
  [62] = {.lex_state = 15, .external_lex_state = 3},
  [63] = {.lex_state = 10, .external_lex_state = 3},
  [64] = {.lex_state = 15, .external_lex_state = 3},
  [65] = {.lex_state = 15, .external_lex_state = 3},
  [66] = {.lex_state = 15, .external_lex_state = 3},
  [67] = {.lex_state = 15, .external_lex_state = 3},
  [68] = {.lex_state = 15, .external_lex_state = 3},
  [69] = {.lex_state = 15, .external_lex_state = 3},
  [70] = {.lex_state = 2, .external_lex_state = 3},
  [71] = {.lex_state = 4, .external_lex_state = 3},
  [72] = {.lex_state = 4, .external_lex_state = 3},
  [73] = {.lex_state = 4, .external_lex_state = 3},
  [74] = {.lex_state = 8, .external_lex_state = 3},
  [75] = {.lex_state = 4, .external_lex_state = 3},
  [76] = {.lex_state = 4, .external_lex_state = 3},
  [77] = {.lex_state = 4, .external_lex_state = 3},
  [78] = {.lex_state = 4, .external_lex_state = 3},
  [79] = {.lex_state = 4, .external_lex_state = 3},
  [80] = {.lex_state = 14, .external_lex_state = 3},
  [81] = {.lex_state = 14, .external_lex_state = 3},
  [82] = {.lex_state = 14, .external_lex_state = 3},
  [83] = {.lex_state = 14, .external_lex_state = 3},
  [84] = {.lex_state = 14, .external_lex_state = 3},
  [85] = {.lex_state = 14, .external_lex_state = 3},
  [86] = {.lex_state = 14, .external_lex_state = 3},
  [87] = {.lex_state = 14, .external_lex_state = 3},
  [88] = {.lex_state = 43, .external_lex_state = 2},
  [89] = {.lex_state = 43, .external_lex_state = 2},
  [90] = {.lex_state = 43, .external_lex_state = 2},
  [91] = {.lex_state = 51, .external_lex_state = 2},
  [92] = {.lex_state = 43, .external_lex_state = 2},
  [93] = {.lex_state = 53, .external_lex_state = 2},
  [94] = {.lex_state = 53, .external_lex_state = 2},
  [95] = {.lex_state = 44, .external_lex_state = 2},
  [96] = {.lex_state = 44, .external_lex_state = 2},
  [97] = {.lex_state = 53, .external_lex_state = 2},
  [98] = {.lex_state = 44, .external_lex_state = 2},
  [99] = {.lex_state = 53, .external_lex_state = 2},
  [100] = {.lex_state = 53, .external_lex_state = 2},
  [101] = {.lex_state = 53, .external_lex_state = 2},
  [102] = {.lex_state = 53, .external_lex_state = 4},
  [103] = {.lex_state = 53, .external_lex_state = 4},
  [104] = {.lex_state = 53, .external_lex_state = 5},
  [105] = {.lex_state = 53, .external_lex_state = 2},
  [106] = {.lex_state = 53, .external_lex_state = 5},
  [107] = {.lex_state = 53, .external_lex_state = 6},
  [108] = {.lex_state = 53, .external_lex_state = 4},
  [109] = {.lex_state = 53, .external_lex_state = 5},
  [110] = {.lex_state = 53, .external_lex_state = 6},
  [111] = {.lex_state = 53, .external_lex_state = 7},
  [112] = {.lex_state = 43, .external_lex_state = 2},
  [113] = {.lex_state = 51, .external_lex_state = 2},
  [114] = {.lex_state = 43, .external_lex_state = 2},
  [115] = {.lex_state = 51, .external_lex_state = 2},
  [116] = {.lex_state = 51, .external_lex_state = 2},
  [117] = {.lex_state = 43, .external_lex_state = 2},
  [118] = {.lex_state = 43, .external_lex_state = 2},
  [119] = {.lex_state = 51, .external_lex_state = 2},
  [120] = {.lex_state = 43, .external_lex_state = 2},
  [121] = {.lex_state = 51, .external_lex_state = 2},
  [122] = {.lex_state = 51, .external_lex_state = 2},
  [123] = {.lex_state = 43, .external_lex_state = 2},
  [124] = {.lex_state = 52, .external_lex_state = 2},
  [125] = {.lex_state = 42, .external_lex_state = 2},
  [126] = {.lex_state = 52, .external_lex_state = 6},
  [127] = {.lex_state = 43, .external_lex_state = 2},
  [128] = {.lex_state = 51, .external_lex_state = 2},
  [129] = {.lex_state = 43, .external_lex_state = 2},
  [130] = {.lex_state = 51, .external_lex_state = 2},
  [131] = {.lex_state = 51, .external_lex_state = 2},
  [132] = {.lex_state = 43, .external_lex_state = 2},
  [133] = {.lex_state = 43, .external_lex_state = 2},
  [134] = {.lex_state = 51, .external_lex_state = 2},
  [135] = {.lex_state = 51, .external_lex_state = 2},
  [136] = {.lex_state = 51, .external_lex_state = 2},
  [137] = {.lex_state = 43, .external_lex_state = 2},
  [138] = {.lex_state = 43, .external_lex_state = 2},
  [139] = {.lex_state = 44, .external_lex_state = 2},
  [140] = {.lex_state = 44, .external_lex_state = 2},
  [141] = {.lex_state = 44, .external_lex_state = 2},
  [142] = {.lex_state = 53, .external_lex_state = 2},
  [143] = {.lex_state = 53, .external_lex_state = 6},
  [144] = {.lex_state = 53, .external_lex_state = 6},
  [145] = {.lex_state = 44, .external_lex_state = 2},
  [146] = {.lex_state = 44, .external_lex_state = 2},
  [147] = {.lex_state = 53, .external_lex_state = 2},
  [148] = {.lex_state = 44, .external_lex_state = 2},
  [149] = {.lex_state = 53, .external_lex_state = 2},
  [150] = {.lex_state = 53, .external_lex_state = 6},
  [151] = {.lex_state = 53, .external_lex_state = 6},
  [152] = {.lex_state = 44, .external_lex_state = 2},
  [153] = {.lex_state = 44, .external_lex_state = 2},
  [154] = {.lex_state = 44, .external_lex_state = 2},
  [155] = {.lex_state = 44, .external_lex_state = 2},
  [156] = {.lex_state = 53, .external_lex_state = 2},
  [157] = {.lex_state = 44, .external_lex_state = 2},
  [158] = {.lex_state = 53, .external_lex_state = 2},
  [159] = {.lex_state = 53, .external_lex_state = 6},
  [160] = {.lex_state = 53, .external_lex_state = 6},
  [161] = {.lex_state = 53, .external_lex_state = 6},
  [162] = {.lex_state = 53, .external_lex_state = 2},
  [163] = {.lex_state = 53, .external_lex_state = 2},
  [164] = {.lex_state = 53, .external_lex_state = 2},
  [165] = {.lex_state = 53, .external_lex_state = 2},
  [166] = {.lex_state = 53, .external_lex_state = 2},
  [167] = {.lex_state = 44, .external_lex_state = 2},
  [168] = {.lex_state = 53, .external_lex_state = 2},
  [169] = {.lex_state = 53, .external_lex_state = 2},
  [170] = {.lex_state = 53, .external_lex_state = 6},
  [171] = {.lex_state = 53, .external_lex_state = 6},
  [172] = {.lex_state = 53, .external_lex_state = 6},
  [173] = {.lex_state = 53, .external_lex_state = 6},
  [174] = {.lex_state = 53, .external_lex_state = 6},
  [175] = {.lex_state = 53, .external_lex_state = 2},
  [176] = {.lex_state = 53, .external_lex_state = 2},
  [177] = {.lex_state = 51, .external_lex_state = 3},
  [178] = {.lex_state = 51, .external_lex_state = 3},
  [179] = {.lex_state = 51, .external_lex_state = 3},
  [180] = {.lex_state = 1, .external_lex_state = 8},
  [181] = {.lex_state = 1, .external_lex_state = 8},
  [182] = {.lex_state = 1, .external_lex_state = 8},
  [183] = {.lex_state = 1, .external_lex_state = 8},
  [184] = {.lex_state = 1, .external_lex_state = 8},
  [185] = {.lex_state = 1, .external_lex_state = 8},
  [186] = {.lex_state = 1, .external_lex_state = 8},
  [187] = {.lex_state = 1, .external_lex_state = 8},
  [188] = {.lex_state = 1, .external_lex_state = 8},
  [189] = {.lex_state = 1, .external_lex_state = 8},
  [190] = {.lex_state = 1, .external_lex_state = 8},
  [191] = {.lex_state = 1, .external_lex_state = 8},
  [192] = {.lex_state = 1, .external_lex_state = 8},
  [193] = {.lex_state = 1, .external_lex_state = 8},
  [194] = {.lex_state = 1, .external_lex_state = 8},
  [195] = {.lex_state = 1, .external_lex_state = 8},
  [196] = {.lex_state = 1, .external_lex_state = 8},
  [197] = {.lex_state = 1, .external_lex_state = 8},
  [198] = {.lex_state = 1, .external_lex_state = 8},
  [199] = {.lex_state = 1, .external_lex_state = 8},
  [200] = {.lex_state = 1, .external_lex_state = 8},
  [201] = {.lex_state = 1, .external_lex_state = 8},
  [202] = {.lex_state = 1, .external_lex_state = 8},
  [203] = {.lex_state = 1, .external_lex_state = 8},
  [204] = {.lex_state = 1, .external_lex_state = 8},
  [205] = {.lex_state = 51, .external_lex_state = 3},
  [206] = {.lex_state = 1, .external_lex_state = 8},
  [207] = {.lex_state = 51},
  [208] = {.lex_state = 51},
  [209] = {.lex_state = 1, .external_lex_state = 8},
  [210] = {.lex_state = 51, .external_lex_state = 3},
  [211] = {.lex_state = 51},
  [212] = {.lex_state = 51, .external_lex_state = 3},
  [213] = {.lex_state = 51},
  [214] = {.lex_state = 51},
  [215] = {.lex_state = 51},
  [216] = {.lex_state = 51},
  [217] = {.lex_state = 51},
  [218] = {.lex_state = 51},
  [219] = {.lex_state = 51},
  [220] = {.lex_state = 51},
  [221] = {.lex_state = 16},
  [222] = {.lex_state = 0, .external_lex_state = 9},
  [223] = {.lex_state = 16},
  [224] = {.lex_state = 51},
  [225] = {.lex_state = 51, .external_lex_state = 8},
  [226] = {.lex_state = 0, .external_lex_state = 9},
  [227] = {.lex_state = 51},
  [228] = {.lex_state = 0, .external_lex_state = 9},
  [229] = {.lex_state = 0, .external_lex_state = 9},
  [230] = {.lex_state = 51},
  [231] = {.lex_state = 51},
  [232] = {.lex_state = 16},
  [233] = {.lex_state = 51},
  [234] = {.lex_state = 51},
  [235] = {.lex_state = 0, .external_lex_state = 9},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 51},
  [238] = {.lex_state = 24},
  [239] = {.lex_state = 24},
  [240] = {.lex_state = 51},
  [241] = {.lex_state = 51},
  [242] = {.lex_state = 24},
  [243] = {.lex_state = 51},
  [244] = {.lex_state = 24},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 51},
  [247] = {.lex_state = 51},
  [248] = {.lex_state = 0, .external_lex_state = 10},
  [249] = {.lex_state = 43},
  [250] = {.lex_state = 51},
  [251] = {.lex_state = 51},
  [252] = {.lex_state = 0, .external_lex_state = 11},
  [253] = {.lex_state = 0, .external_lex_state = 12},
  [254] = {.lex_state = 24},
  [255] = {.lex_state = 0, .external_lex_state = 12},
  [256] = {.lex_state = 45},
  [257] = {.lex_state = 0, .external_lex_state = 10},
  [258] = {.lex_state = 0, .external_lex_state = 11},
  [259] = {.lex_state = 51},
  [260] = {.lex_state = 43},
  [261] = {.lex_state = 43},
  [262] = {.lex_state = 51},
  [263] = {.lex_state = 51},
  [264] = {.lex_state = 51},
  [265] = {.lex_state = 0, .external_lex_state = 11},
  [266] = {.lex_state = 50},
  [267] = {.lex_state = 45},
  [268] = {.lex_state = 50},
  [269] = {.lex_state = 0, .external_lex_state = 12},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 50},
  [272] = {.lex_state = 0, .external_lex_state = 10},
  [273] = {.lex_state = 51},
  [274] = {.lex_state = 45},
  [275] = {.lex_state = 51},
};

enum {
  ts_external_token__token_eof = 0,
  ts_external_token__space = 1,
  ts_external_token_parbreak = 2,
  ts_external_token__newline = 3,
  ts_external_token__indent = 4,
  ts_external_token__dedent = 5,
  ts_external_token_raw = 6,
  ts_external_token__link_end = 7,
  ts_external_token_text = 8,
  ts_external_token__delim_strong = 9,
  ts_external_token__delim_emph = 10,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__token_eof] = sym__token_eof,
  [ts_external_token__space] = sym__space,
  [ts_external_token_parbreak] = sym_parbreak,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_raw] = sym_raw,
  [ts_external_token__link_end] = sym__link_end,
  [ts_external_token_text] = sym_text,
  [ts_external_token__delim_strong] = sym__delim_strong,
  [ts_external_token__delim_emph] = sym__delim_emph,
};

static const bool ts_external_scanner_states[13][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__token_eof] = true,
    [ts_external_token__space] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_raw] = true,
    [ts_external_token__link_end] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
  },
  [2] = {
    [ts_external_token__space] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
  },
  [3] = {
    [ts_external_token__space] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__space] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
  },
  [5] = {
    [ts_external_token__space] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_emph] = true,
  },
  [6] = {
    [ts_external_token__token_eof] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
  },
  [7] = {
    [ts_external_token__token_eof] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
  },
  [8] = {
    [ts_external_token__token_eof] = true,
  },
  [9] = {
    [ts_external_token__token_eof] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
  },
  [10] = {
    [ts_external_token__link_end] = true,
  },
  [11] = {
    [ts_external_token__delim_emph] = true,
  },
  [12] = {
    [ts_external_token__delim_strong] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__markup_expr_text_token1] = ACTIONS(1),
    [sym_smart_quote] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_heading_start] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_math_delimited_token1] = ACTIONS(1),
    [aux_sym_math_delimited_token2] = ACTIONS(1),
    [sym__math_fence] = ACTIONS(1),
    [sym_math_align_point] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [aux_sym_block_comment_token2] = ACTIONS(1),
    [sym__token_eof] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym_parbreak] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_raw] = ACTIONS(1),
    [sym__link_end] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym__delim_strong] = ACTIONS(1),
    [sym__delim_emph] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(245),
    [sym_markup] = STATE(270),
    [sym__markup_expr_base] = STATE(94),
    [sym__markup_expr_line_start_sof] = STATE(94),
    [aux_sym__markup_expr_line_start_content] = STATE(122),
    [sym__markup_expr_text] = STATE(94),
    [sym_link] = STATE(94),
    [sym_label] = STATE(94),
    [sym_reference] = STATE(94),
    [sym_strong] = STATE(94),
    [sym_emph] = STATE(94),
    [sym_heading] = STATE(228),
    [sym_equation] = STATE(94),
    [sym_block_comment] = STATE(134),
    [sym_space] = STATE(91),
    [aux_sym__markup_expr_line_start_sof_repeat1] = STATE(177),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__markup_expr_text_token1] = ACTIONS(5),
    [sym_linebreak] = ACTIONS(7),
    [sym_escape] = ACTIONS(7),
    [sym_text_shorthand] = ACTIONS(7),
    [sym_smart_quote] = ACTIONS(7),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_heading_start] = ACTIONS(15),
    [anon_sym_DOLLAR] = ACTIONS(17),
    [sym_line_comment] = ACTIONS(19),
    [anon_sym_SLASH_STAR] = ACTIONS(21),
    [sym__space] = ACTIONS(23),
    [sym_parbreak] = ACTIONS(25),
    [sym__newline] = ACTIONS(23),
    [sym_raw] = ACTIONS(7),
    [sym_text] = ACTIONS(7),
    [sym__delim_strong] = ACTIONS(27),
    [sym__delim_emph] = ACTIONS(29),
  },
  [2] = {
    [sym_math] = STATE(214),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym__math_delimited_fence] = STATE(12),
    [sym_math_field_access] = STATE(45),
    [sym_math_function_call] = STATE(12),
    [sym_math_args] = STATE(246),
    [sym__math_arg] = STATE(218),
    [sym_math_arg_named] = STATE(214),
    [sym__math_text_ident] = STATE(254),
    [sym__trivia] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_space] = STATE(8),
    [aux_sym_math_repeat1] = STATE(12),
    [aux_sym_math_args_repeat1] = STATE(218),
    [sym_linebreak] = ACTIONS(31),
    [sym_escape] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(37),
    [anon_sym_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_COLON_EQ] = ACTIONS(35),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH] = ACTIONS(37),
    [anon_sym_LT_DASH_LT] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_LT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ] = ACTIONS(37),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_TILDE] = ACTIONS(37),
    [anon_sym_GT_DASH_GT] = ACTIONS(35),
    [anon_sym_GT_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_COLON] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(37),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(35),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(35),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(35),
    [anon_sym_TILDE_GT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(43),
    [sym__math_fence] = ACTIONS(45),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_math_text] = ACTIONS(51),
    [sym_math_ident] = ACTIONS(53),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(55),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(55),
    [sym__newline] = ACTIONS(59),
  },
  [3] = {
    [sym_math] = STATE(214),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym__math_delimited_fence] = STATE(12),
    [sym_math_field_access] = STATE(45),
    [sym_math_function_call] = STATE(12),
    [sym_math_args] = STATE(262),
    [sym__math_arg] = STATE(218),
    [sym_math_arg_named] = STATE(214),
    [sym__math_text_ident] = STATE(254),
    [sym__trivia] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_space] = STATE(8),
    [aux_sym_math_repeat1] = STATE(12),
    [aux_sym_math_args_repeat1] = STATE(218),
    [sym_linebreak] = ACTIONS(31),
    [sym_escape] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(37),
    [anon_sym_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_COLON_EQ] = ACTIONS(35),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH] = ACTIONS(37),
    [anon_sym_LT_DASH_LT] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_LT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ] = ACTIONS(37),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_TILDE] = ACTIONS(37),
    [anon_sym_GT_DASH_GT] = ACTIONS(35),
    [anon_sym_GT_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_COLON] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(37),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(35),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(35),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(35),
    [anon_sym_TILDE_GT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(43),
    [sym__math_fence] = ACTIONS(45),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_math_text] = ACTIONS(51),
    [sym_math_ident] = ACTIONS(53),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(55),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(55),
    [sym__newline] = ACTIONS(59),
  },
  [4] = {
    [sym_math] = STATE(214),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym__math_delimited_fence] = STATE(12),
    [sym_math_field_access] = STATE(45),
    [sym_math_function_call] = STATE(12),
    [sym_math_args] = STATE(259),
    [sym__math_arg] = STATE(218),
    [sym_math_arg_named] = STATE(214),
    [sym__math_text_ident] = STATE(254),
    [sym__trivia] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_space] = STATE(8),
    [aux_sym_math_repeat1] = STATE(12),
    [aux_sym_math_args_repeat1] = STATE(218),
    [sym_linebreak] = ACTIONS(31),
    [sym_escape] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(37),
    [anon_sym_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_COLON_EQ] = ACTIONS(35),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH] = ACTIONS(37),
    [anon_sym_LT_DASH_LT] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_LT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ] = ACTIONS(37),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_TILDE] = ACTIONS(37),
    [anon_sym_GT_DASH_GT] = ACTIONS(35),
    [anon_sym_GT_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_COLON] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(37),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(35),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(35),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(35),
    [anon_sym_TILDE_GT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(43),
    [sym__math_fence] = ACTIONS(45),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_math_text] = ACTIONS(51),
    [sym_math_ident] = ACTIONS(53),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(55),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(55),
    [sym__newline] = ACTIONS(59),
  },
  [5] = {
    [sym_math] = STATE(214),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym__math_delimited_fence] = STATE(12),
    [sym_math_field_access] = STATE(45),
    [sym_math_function_call] = STATE(12),
    [sym_math_args] = STATE(247),
    [sym__math_arg] = STATE(218),
    [sym_math_arg_named] = STATE(214),
    [sym__math_text_ident] = STATE(254),
    [sym__trivia] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_space] = STATE(8),
    [aux_sym_math_repeat1] = STATE(12),
    [aux_sym_math_args_repeat1] = STATE(218),
    [sym_linebreak] = ACTIONS(31),
    [sym_escape] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(37),
    [anon_sym_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_COLON_EQ] = ACTIONS(35),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH] = ACTIONS(37),
    [anon_sym_LT_DASH_LT] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_LT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ] = ACTIONS(37),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_TILDE] = ACTIONS(37),
    [anon_sym_GT_DASH_GT] = ACTIONS(35),
    [anon_sym_GT_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_COLON] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(37),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(35),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(35),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(35),
    [anon_sym_TILDE_GT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(43),
    [sym__math_fence] = ACTIONS(45),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_math_text] = ACTIONS(51),
    [sym_math_ident] = ACTIONS(53),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(55),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(55),
    [sym__newline] = ACTIONS(59),
  },
  [6] = {
    [sym_math] = STATE(220),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym__math_delimited_fence] = STATE(12),
    [sym_math_field_access] = STATE(45),
    [sym_math_function_call] = STATE(12),
    [sym_math_arg_named] = STATE(220),
    [sym__math_text_ident] = STATE(254),
    [sym__trivia] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_space] = STATE(12),
    [aux_sym_math_repeat1] = STATE(12),
    [sym_linebreak] = ACTIONS(31),
    [sym_escape] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(37),
    [anon_sym_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_COLON_EQ] = ACTIONS(35),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH] = ACTIONS(37),
    [anon_sym_LT_DASH_LT] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_LT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ] = ACTIONS(37),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_TILDE] = ACTIONS(37),
    [anon_sym_GT_DASH_GT] = ACTIONS(35),
    [anon_sym_GT_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_COLON] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(37),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(35),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(35),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(35),
    [anon_sym_TILDE_GT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(43),
    [sym__math_fence] = ACTIONS(45),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_SEMI] = ACTIONS(67),
    [sym_math_text] = ACTIONS(51),
    [sym_math_ident] = ACTIONS(53),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(31),
    [sym__newline] = ACTIONS(59),
  },
  [7] = {
    [sym_math] = STATE(233),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym__math_delimited_fence] = STATE(12),
    [sym_math_field_access] = STATE(45),
    [sym_math_function_call] = STATE(12),
    [sym_math_arg_named] = STATE(233),
    [sym__math_text_ident] = STATE(254),
    [sym__trivia] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym_space] = STATE(6),
    [aux_sym_math_repeat1] = STATE(12),
    [sym_linebreak] = ACTIONS(31),
    [sym_escape] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(37),
    [anon_sym_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_COLON_EQ] = ACTIONS(35),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH] = ACTIONS(37),
    [anon_sym_LT_DASH_LT] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_LT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ] = ACTIONS(37),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_TILDE] = ACTIONS(37),
    [anon_sym_GT_DASH_GT] = ACTIONS(35),
    [anon_sym_GT_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_COLON] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(37),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(35),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(35),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(35),
    [anon_sym_TILDE_GT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(43),
    [sym__math_fence] = ACTIONS(45),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(69),
    [sym_math_text] = ACTIONS(51),
    [sym_math_ident] = ACTIONS(53),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(71),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(71),
    [sym__newline] = ACTIONS(59),
  },
  [8] = {
    [sym_math] = STATE(213),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym__math_delimited_fence] = STATE(12),
    [sym_math_field_access] = STATE(45),
    [sym_math_function_call] = STATE(12),
    [sym_math_arg_named] = STATE(213),
    [sym__math_text_ident] = STATE(254),
    [sym__trivia] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_space] = STATE(12),
    [aux_sym_math_repeat1] = STATE(12),
    [sym_linebreak] = ACTIONS(31),
    [sym_escape] = ACTIONS(33),
    [anon_sym_DASH_GT_GT] = ACTIONS(35),
    [anon_sym_DASH_GT] = ACTIONS(37),
    [anon_sym_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_COLON_EQ] = ACTIONS(35),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(35),
    [anon_sym_BANG_EQ] = ACTIONS(35),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_DASH_DASH] = ACTIONS(37),
    [anon_sym_LT_DASH_LT] = ACTIONS(35),
    [anon_sym_LT_DASH_GT] = ACTIONS(35),
    [anon_sym_LT_LT_DASH] = ACTIONS(35),
    [anon_sym_LT_LT_LT] = ACTIONS(35),
    [anon_sym_LT_EQ_GT] = ACTIONS(35),
    [anon_sym_LT_EQ_EQ] = ACTIONS(37),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(35),
    [anon_sym_LT_EQ] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_TILDE] = ACTIONS(37),
    [anon_sym_GT_DASH_GT] = ACTIONS(35),
    [anon_sym_GT_GT_GT] = ACTIONS(35),
    [anon_sym_EQ_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_GT] = ACTIONS(35),
    [anon_sym_EQ_COLON] = ACTIONS(35),
    [anon_sym_GT_EQ] = ACTIONS(35),
    [anon_sym_GT_GT] = ACTIONS(37),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(35),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(35),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(35),
    [anon_sym_TILDE_GT] = ACTIONS(35),
    [anon_sym_STAR] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(43),
    [sym__math_fence] = ACTIONS(45),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(73),
    [sym_math_text] = ACTIONS(51),
    [sym_math_ident] = ACTIONS(53),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(31),
    [sym__newline] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(39), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(41), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(43), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(45), 1,
      sym__math_fence,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      sym_math_ident,
    STATE(45), 1,
      sym_math_field_access,
    STATE(230), 1,
      sym_math,
    ACTIONS(31), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(59), 2,
      sym__space,
      sym__newline,
    ACTIONS(79), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(33), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(75), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(10), 3,
      sym__trivia,
      sym_block_comment,
      sym_space,
    STATE(12), 6,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      aux_sym_math_repeat1,
    ACTIONS(37), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(35), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [99] = 15,
    ACTIONS(39), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(41), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(43), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(45), 1,
      sym__math_fence,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      sym_math_ident,
    STATE(45), 1,
      sym_math_field_access,
    STATE(227), 1,
      sym_math,
    ACTIONS(59), 2,
      sym__space,
      sym__newline,
    ACTIONS(33), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(81), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(31), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(12), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(37), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(35), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [194] = 14,
    ACTIONS(95), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(98), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(101), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(104), 1,
      sym__math_fence,
    ACTIONS(109), 1,
      sym_math_ident,
    ACTIONS(112), 1,
      anon_sym_SLASH_STAR,
    STATE(45), 1,
      sym_math_field_access,
    ACTIONS(115), 2,
      sym__space,
      sym__newline,
    ACTIONS(86), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(107), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(83), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(11), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(92), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(89), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [286] = 14,
    ACTIONS(39), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(41), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(43), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(45), 1,
      sym__math_fence,
    ACTIONS(57), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      sym_math_ident,
    STATE(45), 1,
      sym_math_field_access,
    ACTIONS(59), 2,
      sym__space,
      sym__newline,
    ACTIONS(120), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(122), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(118), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(11), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(37), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(35), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [378] = 15,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(136), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(138), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(140), 1,
      sym__math_fence,
    ACTIONS(142), 1,
      sym_math_ident,
    ACTIONS(144), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_math_field_access,
    STATE(263), 1,
      sym_math,
    ACTIONS(146), 2,
      sym__space,
      sym__newline,
    ACTIONS(126), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(124), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(25), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(132), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(130), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [471] = 15,
    ACTIONS(134), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(136), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(138), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(140), 1,
      sym__math_fence,
    ACTIONS(142), 1,
      sym_math_ident,
    ACTIONS(144), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      anon_sym_DOLLAR,
    STATE(70), 1,
      sym_math_field_access,
    STATE(250), 1,
      sym_math,
    ACTIONS(146), 2,
      sym__space,
      sym__newline,
    ACTIONS(126), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(124), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(25), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(132), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(130), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [564] = 15,
    ACTIONS(122), 1,
      aux_sym_math_delimited_token2,
    ACTIONS(158), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(160), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(162), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(164), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(166), 1,
      sym__math_fence,
    ACTIONS(168), 1,
      sym_math_ident,
    ACTIONS(170), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_math_field_access,
    ACTIONS(172), 2,
      sym__space,
      sym__newline,
    ACTIONS(152), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(150), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(16), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(156), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(154), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [657] = 15,
    ACTIONS(107), 1,
      aux_sym_math_delimited_token2,
    ACTIONS(186), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(189), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(192), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(194), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(197), 1,
      sym__math_fence,
    ACTIONS(200), 1,
      sym_math_ident,
    ACTIONS(203), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_math_field_access,
    ACTIONS(206), 2,
      sym__space,
      sym__newline,
    ACTIONS(177), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(174), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(16), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(183), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(180), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [750] = 15,
    ACTIONS(134), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(136), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(138), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(140), 1,
      sym__math_fence,
    ACTIONS(142), 1,
      sym_math_ident,
    ACTIONS(144), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    STATE(70), 1,
      sym_math_field_access,
    STATE(273), 1,
      sym_math,
    ACTIONS(146), 2,
      sym__space,
      sym__newline,
    ACTIONS(126), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(124), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(25), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(132), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(130), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [843] = 14,
    ACTIONS(219), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(221), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(223), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(225), 1,
      sym__math_fence,
    ACTIONS(227), 1,
      sym_math_ident,
    ACTIONS(229), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_math_field_access,
    STATE(240), 1,
      sym_math,
    ACTIONS(231), 2,
      sym__space,
      sym__newline,
    ACTIONS(213), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(211), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(29), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(217), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(215), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [933] = 14,
    ACTIONS(158), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(160), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(164), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(166), 1,
      sym__math_fence,
    ACTIONS(168), 1,
      sym_math_ident,
    ACTIONS(170), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_math_field_access,
    STATE(238), 1,
      sym_math,
    ACTIONS(172), 2,
      sym__space,
      sym__newline,
    ACTIONS(235), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(233), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(15), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(156), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(154), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1023] = 14,
    ACTIONS(219), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(221), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(223), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(225), 1,
      sym__math_fence,
    ACTIONS(227), 1,
      sym_math_ident,
    ACTIONS(229), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_math_field_access,
    STATE(237), 1,
      sym_math,
    ACTIONS(231), 2,
      sym__space,
      sym__newline,
    ACTIONS(213), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(211), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(29), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(217), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(215), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1113] = 14,
    ACTIONS(219), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(221), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(223), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(225), 1,
      sym__math_fence,
    ACTIONS(227), 1,
      sym_math_ident,
    ACTIONS(229), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_math_field_access,
    STATE(243), 1,
      sym_math,
    ACTIONS(231), 2,
      sym__space,
      sym__newline,
    ACTIONS(213), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(211), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(29), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(217), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(215), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1203] = 14,
    ACTIONS(158), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(160), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(164), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(166), 1,
      sym__math_fence,
    ACTIONS(168), 1,
      sym_math_ident,
    ACTIONS(170), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_math_field_access,
    STATE(242), 1,
      sym_math,
    ACTIONS(172), 2,
      sym__space,
      sym__newline,
    ACTIONS(235), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(233), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(15), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(156), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(154), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1293] = 14,
    ACTIONS(107), 1,
      anon_sym_DOLLAR,
    ACTIONS(249), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(252), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(255), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(258), 1,
      sym__math_fence,
    ACTIONS(261), 1,
      sym_math_ident,
    ACTIONS(264), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_math_field_access,
    ACTIONS(267), 2,
      sym__space,
      sym__newline,
    ACTIONS(240), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(237), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(23), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(246), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(243), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1383] = 14,
    ACTIONS(158), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(160), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(164), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(166), 1,
      sym__math_fence,
    ACTIONS(168), 1,
      sym_math_ident,
    ACTIONS(170), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_math_field_access,
    STATE(239), 1,
      sym_math,
    ACTIONS(172), 2,
      sym__space,
      sym__newline,
    ACTIONS(235), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(233), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(15), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(156), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(154), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1473] = 14,
    ACTIONS(122), 1,
      anon_sym_DOLLAR,
    ACTIONS(134), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(136), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(138), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(140), 1,
      sym__math_fence,
    ACTIONS(142), 1,
      sym_math_ident,
    ACTIONS(144), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_math_field_access,
    ACTIONS(146), 2,
      sym__space,
      sym__newline,
    ACTIONS(272), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(270), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(23), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(132), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(130), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1563] = 14,
    ACTIONS(158), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(160), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(164), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(166), 1,
      sym__math_fence,
    ACTIONS(168), 1,
      sym_math_ident,
    ACTIONS(170), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_math_field_access,
    STATE(244), 1,
      sym_math,
    ACTIONS(172), 2,
      sym__space,
      sym__newline,
    ACTIONS(235), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(233), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(15), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(156), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(154), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1653] = 14,
    ACTIONS(219), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(221), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(223), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(225), 1,
      sym__math_fence,
    ACTIONS(227), 1,
      sym_math_ident,
    ACTIONS(229), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_math_field_access,
    STATE(241), 1,
      sym_math,
    ACTIONS(231), 2,
      sym__space,
      sym__newline,
    ACTIONS(213), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(211), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(29), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(217), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(215), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1743] = 13,
    ACTIONS(286), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(289), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(292), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      sym__math_fence,
    ACTIONS(298), 1,
      sym_math_ident,
    ACTIONS(301), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_math_field_access,
    ACTIONS(304), 2,
      sym__space,
      sym__newline,
    ACTIONS(277), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(274), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(28), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(283), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(280), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1830] = 13,
    ACTIONS(122), 1,
      sym__math_fence,
    ACTIONS(162), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(219), 1,
      anon_sym_LBRACK_PIPE,
    ACTIONS(221), 1,
      aux_sym_math_delimited_token1,
    ACTIONS(227), 1,
      sym_math_ident,
    ACTIONS(229), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_math_field_access,
    ACTIONS(231), 2,
      sym__space,
      sym__newline,
    ACTIONS(309), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(307), 4,
      sym_parbreak,
      sym_linebreak,
      sym_string,
      sym_line_comment,
    STATE(28), 9,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_delimited,
      sym__math_delimited_fence,
      sym_math_function_call,
      sym__trivia,
      sym_block_comment,
      sym_space,
      aux_sym_math_repeat1,
    ACTIONS(217), 11,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
    ACTIONS(215), 24,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1917] = 5,
    ACTIONS(315), 1,
      anon_sym_DOT,
    ACTIONS(317), 1,
      anon_sym_COLON,
    STATE(32), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(313), 21,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(311), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1985] = 4,
    ACTIONS(323), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(321), 21,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(319), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2050] = 4,
    ACTIONS(315), 1,
      anon_sym_DOT,
    STATE(31), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(328), 21,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(326), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2115] = 4,
    ACTIONS(315), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(313), 21,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(311), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2180] = 4,
    ACTIONS(330), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(321), 19,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(319), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2244] = 4,
    ACTIONS(333), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(313), 19,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(311), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2308] = 2,
    ACTIONS(321), 22,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(319), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2368] = 4,
    ACTIONS(333), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(328), 19,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(326), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2432] = 2,
    ACTIONS(337), 22,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(335), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2492] = 2,
    ACTIONS(337), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(335), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2551] = 4,
    ACTIONS(339), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(313), 19,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(311), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2614] = 2,
    ACTIONS(321), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(319), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2673] = 3,
    ACTIONS(337), 1,
      anon_sym_COLON,
    ACTIONS(73), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(341), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2734] = 4,
    ACTIONS(343), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(321), 19,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(319), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2797] = 4,
    ACTIONS(339), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(328), 19,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(326), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2860] = 3,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(341), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2921] = 2,
    ACTIONS(350), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(348), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2979] = 4,
    ACTIONS(352), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(321), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(319), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3041] = 4,
    ACTIONS(355), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(328), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(326), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3103] = 2,
    ACTIONS(337), 20,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(335), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3161] = 3,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(341), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3221] = 2,
    ACTIONS(321), 20,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(319), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3279] = 2,
    ACTIONS(361), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(359), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3337] = 2,
    ACTIONS(365), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(363), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3395] = 2,
    ACTIONS(369), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(367), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3453] = 2,
    ACTIONS(373), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(371), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3511] = 2,
    ACTIONS(377), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(375), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3569] = 2,
    ACTIONS(381), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(379), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3627] = 4,
    ACTIONS(355), 1,
      anon_sym_DOT,
    STATE(48), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(313), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(311), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3689] = 2,
    ACTIONS(385), 20,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(383), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3747] = 2,
    ACTIONS(321), 19,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(319), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3804] = 2,
    ACTIONS(365), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(363), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3861] = 2,
    ACTIONS(369), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(367), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3918] = 2,
    ACTIONS(337), 19,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(335), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3975] = 2,
    ACTIONS(373), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(371), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4032] = 2,
    ACTIONS(385), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(383), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4089] = 2,
    ACTIONS(350), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(348), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4146] = 2,
    ACTIONS(377), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(375), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4203] = 2,
    ACTIONS(381), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(379), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4260] = 2,
    ACTIONS(361), 18,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      aux_sym_math_delimited_token2,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(359), 34,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4317] = 3,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 18,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(341), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4376] = 2,
    ACTIONS(373), 18,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(371), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4432] = 2,
    ACTIONS(361), 18,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(359), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4488] = 2,
    ACTIONS(350), 18,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(348), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4544] = 3,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 17,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(341), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4602] = 2,
    ACTIONS(365), 18,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(363), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4658] = 2,
    ACTIONS(385), 18,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(383), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4714] = 2,
    ACTIONS(381), 18,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(379), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4770] = 2,
    ACTIONS(369), 18,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(367), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4826] = 2,
    ACTIONS(377), 18,
      sym_escape,
      anon_sym_DOLLAR,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(375), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4882] = 2,
    ACTIONS(373), 17,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(371), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4937] = 2,
    ACTIONS(369), 17,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(367), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4992] = 2,
    ACTIONS(385), 17,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(383), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [5047] = 2,
    ACTIONS(361), 17,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(359), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [5102] = 2,
    ACTIONS(377), 17,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(375), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [5157] = 2,
    ACTIONS(381), 17,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(379), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [5212] = 2,
    ACTIONS(365), 17,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(363), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [5267] = 2,
    ACTIONS(350), 17,
      sym_escape,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH_DASH,
      anon_sym_LT_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_LT_DASH,
      anon_sym_LT_TILDE,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SQUOTE,
      anon_sym_DASH,
      aux_sym_math_delimited_token1,
      sym__math_fence,
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(348), 33,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LT_EQ_EQ_GT,
      anon_sym_LT_DASH_DASH_GT,
      anon_sym_LT_DASH_LT,
      anon_sym_LT_DASH_GT,
      anon_sym_LT_LT_DASH,
      anon_sym_LT_LT_LT,
      anon_sym_LT_EQ_GT,
      anon_sym_LT_TILDE_TILDE,
      anon_sym_GT_DASH_GT,
      anon_sym_GT_GT_GT,
      anon_sym_EQ_EQ_GT,
      anon_sym_EQ_GT,
      anon_sym_EQ_COLON,
      anon_sym_GT_EQ,
      anon_sym_PIPE_DASH_GT,
      anon_sym_PIPE_EQ_GT,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      anon_sym_LBRACK_PIPE,
      anon_sym_PIPE_PIPE,
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [5322] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(391), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(395), 1,
      aux_sym_link_token1,
    ACTIONS(397), 1,
      anon_sym_LT,
    ACTIONS(399), 1,
      anon_sym_AT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(403), 1,
      anon_sym_RBRACK,
    ACTIONS(405), 1,
      sym_line_comment,
    ACTIONS(407), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 1,
      sym_parbreak,
    ACTIONS(413), 1,
      sym__delim_strong,
    ACTIONS(415), 1,
      sym__delim_emph,
    STATE(92), 1,
      sym_space,
    STATE(118), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(127), 1,
      sym_block_comment,
    STATE(178), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(222), 1,
      sym_heading,
    STATE(260), 1,
      sym_markup,
    ACTIONS(409), 2,
      sym__space,
      sym__newline,
    ACTIONS(393), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(95), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [5400] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(391), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(395), 1,
      aux_sym_link_token1,
    ACTIONS(397), 1,
      anon_sym_LT,
    ACTIONS(399), 1,
      anon_sym_AT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(405), 1,
      sym_line_comment,
    ACTIONS(407), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 1,
      sym_parbreak,
    ACTIONS(413), 1,
      sym__delim_strong,
    ACTIONS(415), 1,
      sym__delim_emph,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_space,
    STATE(118), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(127), 1,
      sym_block_comment,
    STATE(178), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(222), 1,
      sym_heading,
    STATE(249), 1,
      sym_markup,
    ACTIONS(409), 2,
      sym__space,
      sym__newline,
    ACTIONS(393), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(95), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [5478] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(391), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(395), 1,
      aux_sym_link_token1,
    ACTIONS(397), 1,
      anon_sym_LT,
    ACTIONS(399), 1,
      anon_sym_AT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(405), 1,
      sym_line_comment,
    ACTIONS(407), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(411), 1,
      sym_parbreak,
    ACTIONS(413), 1,
      sym__delim_strong,
    ACTIONS(415), 1,
      sym__delim_emph,
    ACTIONS(419), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_space,
    STATE(118), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(127), 1,
      sym_block_comment,
    STATE(178), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(222), 1,
      sym_heading,
    STATE(261), 1,
      sym_markup,
    ACTIONS(409), 2,
      sym__space,
      sym__newline,
    ACTIONS(393), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(95), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [5556] = 12,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      sym__delim_strong,
    ACTIONS(29), 1,
      sym__delim_emph,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 1,
      aux_sym__markup_expr_text_token1,
    STATE(231), 1,
      sym__whitespace_line,
    ACTIONS(425), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    ACTIONS(427), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    STATE(97), 12,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [5614] = 12,
    ACTIONS(395), 1,
      aux_sym_link_token1,
    ACTIONS(397), 1,
      anon_sym_LT,
    ACTIONS(399), 1,
      anon_sym_AT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      sym__delim_strong,
    ACTIONS(415), 1,
      sym__delim_emph,
    ACTIONS(421), 1,
      anon_sym_RBRACK,
    ACTIONS(429), 1,
      aux_sym__markup_expr_text_token1,
    STATE(234), 1,
      sym__whitespace_line,
    ACTIONS(427), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(431), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(98), 12,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [5672] = 15,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(435), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(441), 1,
      aux_sym_link_token1,
    ACTIONS(444), 1,
      anon_sym_LT,
    ACTIONS(447), 1,
      anon_sym_AT,
    ACTIONS(450), 1,
      anon_sym_DOLLAR,
    ACTIONS(453), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(456), 1,
      sym__space,
    ACTIONS(459), 1,
      sym_parbreak,
    ACTIONS(462), 1,
      sym__newline,
    ACTIONS(465), 1,
      sym__delim_strong,
    ACTIONS(468), 1,
      sym__delim_emph,
    STATE(231), 1,
      sym__whitespace_line,
    ACTIONS(438), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(93), 12,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [5735] = 15,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      sym__delim_strong,
    ACTIONS(29), 1,
      sym__delim_emph,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(471), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(475), 1,
      sym_parbreak,
    ACTIONS(477), 1,
      sym__newline,
    STATE(231), 1,
      sym__whitespace_line,
    ACTIONS(425), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(97), 12,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [5798] = 15,
    ACTIONS(395), 1,
      aux_sym_link_token1,
    ACTIONS(397), 1,
      anon_sym_LT,
    ACTIONS(399), 1,
      anon_sym_AT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      sym__delim_strong,
    ACTIONS(415), 1,
      sym__delim_emph,
    ACTIONS(421), 1,
      anon_sym_RBRACK,
    ACTIONS(429), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(479), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      sym__space,
    ACTIONS(483), 1,
      sym_parbreak,
    ACTIONS(485), 1,
      sym__newline,
    STATE(234), 1,
      sym__whitespace_line,
    ACTIONS(431), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(98), 12,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [5861] = 15,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    ACTIONS(487), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(493), 1,
      aux_sym_link_token1,
    ACTIONS(496), 1,
      anon_sym_LT,
    ACTIONS(499), 1,
      anon_sym_AT,
    ACTIONS(502), 1,
      anon_sym_DOLLAR,
    ACTIONS(505), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(508), 1,
      sym__space,
    ACTIONS(511), 1,
      sym_parbreak,
    ACTIONS(514), 1,
      sym__newline,
    ACTIONS(517), 1,
      sym__delim_strong,
    ACTIONS(520), 1,
      sym__delim_emph,
    STATE(234), 1,
      sym__whitespace_line,
    ACTIONS(490), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(96), 12,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [5924] = 15,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      sym__delim_strong,
    ACTIONS(29), 1,
      sym__delim_emph,
    ACTIONS(471), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(475), 1,
      sym_parbreak,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 1,
      aux_sym__markup_expr_text_token1,
    STATE(231), 1,
      sym__whitespace_line,
    ACTIONS(527), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(93), 12,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [5987] = 15,
    ACTIONS(395), 1,
      aux_sym_link_token1,
    ACTIONS(397), 1,
      anon_sym_LT,
    ACTIONS(399), 1,
      anon_sym_AT,
    ACTIONS(401), 1,
      anon_sym_DOLLAR,
    ACTIONS(413), 1,
      sym__delim_strong,
    ACTIONS(415), 1,
      sym__delim_emph,
    ACTIONS(479), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      sym__space,
    ACTIONS(483), 1,
      sym_parbreak,
    ACTIONS(485), 1,
      sym__newline,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
    ACTIONS(529), 1,
      aux_sym__markup_expr_text_token1,
    STATE(234), 1,
      sym__whitespace_line,
    ACTIONS(531), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(96), 12,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [6050] = 15,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      sym__delim_strong,
    ACTIONS(471), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(533), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(537), 1,
      sym_parbreak,
    ACTIONS(539), 1,
      sym__delim_emph,
    STATE(101), 1,
      aux_sym__markup_emph_repeat1,
    STATE(231), 1,
      sym__whitespace_line,
    ACTIONS(535), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(175), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_equation,
      sym_block_comment,
      sym_space,
  [6111] = 15,
    ACTIONS(541), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(547), 1,
      aux_sym_link_token1,
    ACTIONS(550), 1,
      anon_sym_LT,
    ACTIONS(553), 1,
      anon_sym_AT,
    ACTIONS(556), 1,
      anon_sym_DOLLAR,
    ACTIONS(559), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(562), 1,
      sym__space,
    ACTIONS(565), 1,
      sym_parbreak,
    ACTIONS(568), 1,
      sym__newline,
    ACTIONS(571), 1,
      sym__delim_strong,
    ACTIONS(573), 1,
      sym__delim_emph,
    STATE(100), 1,
      aux_sym__markup_strong_repeat1,
    STATE(231), 1,
      sym__whitespace_line,
    ACTIONS(544), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(176), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
  [6172] = 15,
    ACTIONS(576), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(582), 1,
      aux_sym_link_token1,
    ACTIONS(585), 1,
      anon_sym_LT,
    ACTIONS(588), 1,
      anon_sym_AT,
    ACTIONS(591), 1,
      anon_sym_DOLLAR,
    ACTIONS(594), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      sym__space,
    ACTIONS(600), 1,
      sym_parbreak,
    ACTIONS(603), 1,
      sym__newline,
    ACTIONS(606), 1,
      sym__delim_strong,
    ACTIONS(609), 1,
      sym__delim_emph,
    STATE(101), 1,
      aux_sym__markup_emph_repeat1,
    STATE(231), 1,
      sym__whitespace_line,
    ACTIONS(579), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(175), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_equation,
      sym_block_comment,
      sym_space,
  [6233] = 15,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      sym__delim_strong,
    ACTIONS(471), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(533), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(537), 1,
      sym_parbreak,
    STATE(99), 1,
      aux_sym__markup_emph_repeat1,
    STATE(231), 1,
      sym__whitespace_line,
    STATE(265), 1,
      sym__markup_emph,
    ACTIONS(535), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(175), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_equation,
      sym_block_comment,
      sym_space,
  [6294] = 15,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      sym__delim_strong,
    ACTIONS(471), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(533), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(537), 1,
      sym_parbreak,
    STATE(99), 1,
      aux_sym__markup_emph_repeat1,
    STATE(231), 1,
      sym__whitespace_line,
    STATE(258), 1,
      sym__markup_emph,
    ACTIONS(535), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(175), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_equation,
      sym_block_comment,
      sym_space,
  [6355] = 15,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym__delim_emph,
    ACTIONS(471), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(537), 1,
      sym_parbreak,
    ACTIONS(611), 1,
      aux_sym__markup_expr_text_token1,
    STATE(105), 1,
      aux_sym__markup_strong_repeat1,
    STATE(231), 1,
      sym__whitespace_line,
    STATE(253), 1,
      sym__markup_strong,
    ACTIONS(613), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(176), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
  [6416] = 15,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym__delim_emph,
    ACTIONS(471), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(537), 1,
      sym_parbreak,
    ACTIONS(611), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(615), 1,
      sym__delim_strong,
    STATE(100), 1,
      aux_sym__markup_strong_repeat1,
    STATE(231), 1,
      sym__whitespace_line,
    ACTIONS(613), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(176), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
  [6477] = 15,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym__delim_emph,
    ACTIONS(471), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(537), 1,
      sym_parbreak,
    ACTIONS(611), 1,
      aux_sym__markup_expr_text_token1,
    STATE(105), 1,
      aux_sym__markup_strong_repeat1,
    STATE(231), 1,
      sym__whitespace_line,
    STATE(269), 1,
      sym__markup_strong,
    ACTIONS(613), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(176), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
  [6538] = 12,
    ACTIONS(617), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(621), 1,
      aux_sym_link_token1,
    ACTIONS(623), 1,
      anon_sym_LT,
    ACTIONS(625), 1,
      anon_sym_AT,
    ACTIONS(627), 1,
      anon_sym_DOLLAR,
    ACTIONS(629), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(633), 1,
      sym__delim_strong,
    ACTIONS(635), 1,
      sym__delim_emph,
    STATE(110), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(631), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(619), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(161), 10,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym__space_same_line,
  [6593] = 15,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      sym__delim_strong,
    ACTIONS(471), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(533), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(537), 1,
      sym_parbreak,
    STATE(99), 1,
      aux_sym__markup_emph_repeat1,
    STATE(231), 1,
      sym__whitespace_line,
    STATE(252), 1,
      sym__markup_emph,
    ACTIONS(535), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(175), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_equation,
      sym_block_comment,
      sym_space,
  [6654] = 15,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      sym__delim_emph,
    ACTIONS(471), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      sym__space,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(537), 1,
      sym_parbreak,
    ACTIONS(611), 1,
      aux_sym__markup_expr_text_token1,
    STATE(105), 1,
      aux_sym__markup_strong_repeat1,
    STATE(231), 1,
      sym__whitespace_line,
    STATE(255), 1,
      sym__markup_strong,
    ACTIONS(613), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(176), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym_space,
  [6715] = 12,
    ACTIONS(637), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(643), 1,
      aux_sym_link_token1,
    ACTIONS(646), 1,
      anon_sym_LT,
    ACTIONS(649), 1,
      anon_sym_AT,
    ACTIONS(652), 1,
      anon_sym_DOLLAR,
    ACTIONS(655), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(660), 1,
      sym__delim_strong,
    ACTIONS(663), 1,
      sym__delim_emph,
    STATE(110), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(658), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(640), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(161), 10,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym__space_same_line,
  [6770] = 13,
    ACTIONS(617), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(621), 1,
      aux_sym_link_token1,
    ACTIONS(623), 1,
      anon_sym_LT,
    ACTIONS(625), 1,
      anon_sym_AT,
    ACTIONS(627), 1,
      anon_sym_DOLLAR,
    ACTIONS(629), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(633), 1,
      sym__delim_strong,
    ACTIONS(635), 1,
      sym__delim_emph,
    ACTIONS(666), 1,
      sym__token_eof,
    STATE(107), 1,
      aux_sym__markup_same_line_repeat1,
    STATE(229), 1,
      sym__markup_same_line,
    ACTIONS(619), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(161), 10,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_block_comment,
      sym__space_same_line,
  [6826] = 6,
    ACTIONS(668), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(672), 1,
      sym_heading_start,
    ACTIONS(674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(676), 1,
      aux_sym__space_same_line_token1,
    STATE(207), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(670), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
  [6863] = 6,
    ACTIONS(668), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(672), 1,
      sym_heading_start,
    ACTIONS(674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(676), 1,
      aux_sym__space_same_line_token1,
    STATE(207), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(670), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
  [6900] = 6,
    ACTIONS(373), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(672), 1,
      sym_heading_start,
    ACTIONS(674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(676), 1,
      aux_sym__space_same_line_token1,
    STATE(207), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(371), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
  [6937] = 6,
    ACTIONS(373), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(672), 1,
      sym_heading_start,
    ACTIONS(674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(676), 1,
      aux_sym__space_same_line_token1,
    STATE(207), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(371), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
  [6974] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(680), 1,
      aux_sym__markup_expr_text_token1,
    STATE(119), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(228), 1,
      sym_heading,
    ACTIONS(678), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7007] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(682), 1,
      aux_sym__markup_expr_text_token1,
    STATE(120), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(222), 1,
      sym_heading,
    ACTIONS(684), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7040] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(686), 1,
      aux_sym__markup_expr_text_token1,
    STATE(120), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(222), 1,
      sym_heading,
    ACTIONS(688), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7073] = 5,
    ACTIONS(692), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(694), 1,
      sym_heading_start,
    STATE(119), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(228), 1,
      sym_heading,
    ACTIONS(690), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7106] = 5,
    ACTIONS(692), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(694), 1,
      sym_heading_start,
    STATE(120), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(222), 1,
      sym_heading,
    ACTIONS(690), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7139] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(682), 1,
      aux_sym__markup_expr_text_token1,
    STATE(119), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(228), 1,
      sym_heading,
    ACTIONS(684), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7172] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(686), 1,
      aux_sym__markup_expr_text_token1,
    STATE(119), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(228), 1,
      sym_heading,
    ACTIONS(688), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7205] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(680), 1,
      aux_sym__markup_expr_text_token1,
    STATE(120), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(222), 1,
      sym_heading,
    ACTIONS(678), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7238] = 4,
    ACTIONS(699), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(701), 1,
      anon_sym_LBRACK,
    STATE(162), 1,
      sym_content_block,
    ACTIONS(697), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7268] = 4,
    ACTIONS(699), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(703), 1,
      anon_sym_LBRACK,
    STATE(155), 1,
      sym_content_block,
    ACTIONS(697), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7298] = 4,
    ACTIONS(699), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(705), 1,
      anon_sym_LBRACK,
    STATE(171), 1,
      sym_content_block,
    ACTIONS(697), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [7328] = 3,
    ACTIONS(707), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(427), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(709), 13,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
  [7355] = 2,
    ACTIONS(692), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(690), 19,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7380] = 2,
    ACTIONS(692), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(690), 19,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7405] = 2,
    ACTIONS(350), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(348), 19,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7430] = 2,
    ACTIONS(713), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(711), 19,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7455] = 2,
    ACTIONS(373), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(371), 19,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7480] = 2,
    ACTIONS(713), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(711), 19,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7505] = 3,
    ACTIONS(707), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(427), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(709), 13,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
  [7532] = 2,
    ACTIONS(365), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(363), 19,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7557] = 2,
    ACTIONS(373), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(371), 19,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7582] = 2,
    ACTIONS(350), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(348), 19,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7607] = 2,
    ACTIONS(365), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(363), 19,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7632] = 2,
    ACTIONS(715), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(717), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7656] = 2,
    ACTIONS(719), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(721), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7680] = 2,
    ACTIONS(373), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(371), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7704] = 2,
    ACTIONS(725), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(723), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7728] = 2,
    ACTIONS(727), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(729), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [7752] = 2,
    ACTIONS(725), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(723), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [7776] = 2,
    ACTIONS(350), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(348), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7800] = 2,
    ACTIONS(727), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(729), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7824] = 2,
    ACTIONS(719), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(721), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7848] = 2,
    ACTIONS(365), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(363), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7872] = 2,
    ACTIONS(727), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(729), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7896] = 2,
    ACTIONS(715), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(717), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [7920] = 2,
    ACTIONS(350), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(348), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [7944] = 2,
    ACTIONS(731), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(733), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7968] = 2,
    ACTIONS(735), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(737), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [7992] = 2,
    ACTIONS(739), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(741), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8016] = 2,
    ACTIONS(743), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(745), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8040] = 2,
    ACTIONS(749), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(747), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8064] = 2,
    ACTIONS(749), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(747), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8088] = 2,
    ACTIONS(715), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(717), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8112] = 2,
    ACTIONS(719), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(721), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [8136] = 2,
    ACTIONS(365), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(363), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [8160] = 2,
    ACTIONS(751), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(753), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [8184] = 2,
    ACTIONS(743), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(745), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8208] = 2,
    ACTIONS(739), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(741), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8232] = 2,
    ACTIONS(735), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(737), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8256] = 2,
    ACTIONS(731), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(733), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8280] = 2,
    ACTIONS(365), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(363), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8304] = 2,
    ACTIONS(725), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(723), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8328] = 2,
    ACTIONS(350), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(348), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8352] = 2,
    ACTIONS(373), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(371), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8376] = 2,
    ACTIONS(749), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(747), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [8400] = 2,
    ACTIONS(743), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(745), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [8424] = 2,
    ACTIONS(739), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(741), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [8448] = 2,
    ACTIONS(731), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(733), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [8472] = 2,
    ACTIONS(735), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(737), 18,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [8496] = 2,
    ACTIONS(755), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(757), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8519] = 2,
    ACTIONS(759), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(761), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_DOLLAR,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [8542] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(765), 1,
      anon_sym_SLASH_STAR,
    STATE(116), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(228), 1,
      sym_heading,
    ACTIONS(763), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(767), 2,
      sym__space,
      sym__newline,
    STATE(179), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [8568] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(765), 1,
      anon_sym_SLASH_STAR,
    STATE(123), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(222), 1,
      sym_heading,
    ACTIONS(763), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(767), 2,
      sym__space,
      sym__newline,
    STATE(179), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [8594] = 5,
    ACTIONS(769), 1,
      sym_heading_start,
    ACTIONS(774), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(771), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(777), 2,
      sym__space,
      sym__newline,
    STATE(179), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [8614] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(786), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8633] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(788), 1,
      sym_line_comment,
    ACTIONS(790), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(792), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(195), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8652] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(794), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8671] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(796), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8690] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(798), 1,
      sym_line_comment,
    ACTIONS(800), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(802), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(183), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8709] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(804), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8728] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(806), 1,
      sym_line_comment,
    ACTIONS(808), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(810), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(185), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8747] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(812), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8766] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(814), 1,
      sym_line_comment,
    ACTIONS(816), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(818), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(187), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8785] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(820), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8804] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(822), 1,
      sym_line_comment,
    ACTIONS(824), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(826), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(189), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8823] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(828), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8842] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(830), 1,
      sym_line_comment,
    ACTIONS(832), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(834), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(191), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8861] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(836), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8880] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(838), 1,
      sym_line_comment,
    ACTIONS(840), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(842), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(193), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8899] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(844), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8918] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(846), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8937] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(848), 1,
      sym_line_comment,
    ACTIONS(850), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(852), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(196), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8956] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(854), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8975] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(856), 1,
      sym_line_comment,
    ACTIONS(858), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(860), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(198), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [8994] = 5,
    ACTIONS(780), 1,
      sym_line_comment,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(784), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(862), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9013] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(864), 1,
      sym_line_comment,
    ACTIONS(866), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(868), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(200), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9032] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(870), 1,
      sym_line_comment,
    ACTIONS(872), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(874), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(182), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9051] = 5,
    ACTIONS(876), 1,
      sym_line_comment,
    ACTIONS(879), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(882), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(885), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(203), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9070] = 5,
    ACTIONS(782), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(887), 1,
      sym_line_comment,
    ACTIONS(889), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(891), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(180), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9089] = 1,
    ACTIONS(363), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [9098] = 2,
    ACTIONS(365), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(363), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [9109] = 4,
    ACTIONS(674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(893), 1,
      sym_heading_start,
    ACTIONS(895), 1,
      aux_sym__space_same_line_token1,
    STATE(208), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [9124] = 4,
    ACTIONS(897), 1,
      sym_heading_start,
    ACTIONS(899), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(902), 1,
      aux_sym__space_same_line_token1,
    STATE(208), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [9139] = 2,
    ACTIONS(350), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(348), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [9150] = 1,
    ACTIONS(371), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [9159] = 4,
    ACTIONS(672), 1,
      sym_heading_start,
    ACTIONS(674), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(676), 1,
      aux_sym__space_same_line_token1,
    STATE(207), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [9174] = 1,
    ACTIONS(348), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [9183] = 3,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(217), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [9195] = 3,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(215), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [9207] = 3,
    ACTIONS(905), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(216), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [9219] = 3,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    ACTIONS(913), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(216), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [9231] = 3,
    ACTIONS(916), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(216), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [9243] = 3,
    ACTIONS(909), 1,
      anon_sym_RPAREN,
    ACTIONS(907), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(216), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [9255] = 1,
    ACTIONS(363), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [9261] = 1,
    ACTIONS(918), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9267] = 3,
    ACTIONS(920), 1,
      sym_math_text,
    ACTIONS(922), 1,
      sym_math_ident,
    STATE(36), 1,
      sym__math_text_ident,
  [9277] = 2,
    ACTIONS(926), 1,
      sym__newline,
    ACTIONS(924), 2,
      sym__token_eof,
      sym_parbreak,
  [9285] = 3,
    ACTIONS(928), 1,
      sym_math_text,
    ACTIONS(930), 1,
      sym_math_ident,
    STATE(41), 1,
      sym__math_text_ident,
  [9295] = 1,
    ACTIONS(348), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [9301] = 3,
    ACTIONS(932), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(934), 1,
      sym__token_eof,
    STATE(111), 1,
      sym__space_same_line,
  [9311] = 1,
    ACTIONS(936), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [9317] = 1,
    ACTIONS(938), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9323] = 2,
    ACTIONS(942), 1,
      sym__newline,
    ACTIONS(940), 2,
      sym__token_eof,
      sym_parbreak,
  [9331] = 1,
    ACTIONS(944), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [9337] = 1,
    ACTIONS(946), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9343] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(121), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(228), 1,
      sym_heading,
  [9353] = 3,
    ACTIONS(948), 1,
      sym_math_text,
    ACTIONS(950), 1,
      sym_math_ident,
    STATE(51), 1,
      sym__math_text_ident,
  [9363] = 1,
    ACTIONS(952), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9369] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(117), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(222), 1,
      sym_heading,
  [9379] = 1,
    ACTIONS(954), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [9385] = 3,
    ACTIONS(956), 1,
      sym_math_text,
    ACTIONS(958), 1,
      sym_math_ident,
    STATE(60), 1,
      sym__math_text_ident,
  [9395] = 2,
    ACTIONS(960), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(962), 1,
      sym__math_fence,
  [9402] = 1,
    ACTIONS(964), 2,
      anon_sym_PIPE_RBRACK,
      aux_sym_math_delimited_token2,
  [9407] = 1,
    ACTIONS(966), 2,
      anon_sym_PIPE_RBRACK,
      aux_sym_math_delimited_token2,
  [9412] = 2,
    ACTIONS(968), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(970), 1,
      sym__math_fence,
  [9419] = 2,
    ACTIONS(972), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(974), 1,
      sym__math_fence,
  [9426] = 1,
    ACTIONS(976), 2,
      anon_sym_PIPE_RBRACK,
      aux_sym_math_delimited_token2,
  [9431] = 2,
    ACTIONS(978), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(980), 1,
      sym__math_fence,
  [9438] = 1,
    ACTIONS(982), 2,
      anon_sym_PIPE_RBRACK,
      aux_sym_math_delimited_token2,
  [9443] = 1,
    ACTIONS(984), 1,
      ts_builtin_sym_end,
  [9447] = 1,
    ACTIONS(986), 1,
      anon_sym_RPAREN,
  [9451] = 1,
    ACTIONS(988), 1,
      anon_sym_RPAREN,
  [9455] = 1,
    ACTIONS(990), 1,
      sym__link_end,
  [9459] = 1,
    ACTIONS(992), 1,
      anon_sym_RBRACK,
  [9463] = 1,
    ACTIONS(994), 1,
      anon_sym_DOLLAR,
  [9467] = 1,
    ACTIONS(996), 1,
      anon_sym_GT,
  [9471] = 1,
    ACTIONS(998), 1,
      sym__delim_emph,
  [9475] = 1,
    ACTIONS(1000), 1,
      sym__delim_strong,
  [9479] = 1,
    ACTIONS(1002), 1,
      anon_sym_COLON,
  [9483] = 1,
    ACTIONS(1004), 1,
      sym__delim_strong,
  [9487] = 1,
    ACTIONS(1006), 1,
      aux_sym_reference_token1,
  [9491] = 1,
    ACTIONS(1008), 1,
      sym__link_end,
  [9495] = 1,
    ACTIONS(1010), 1,
      sym__delim_emph,
  [9499] = 1,
    ACTIONS(1012), 1,
      anon_sym_RPAREN,
  [9503] = 1,
    ACTIONS(1014), 1,
      anon_sym_RBRACK,
  [9507] = 1,
    ACTIONS(1016), 1,
      anon_sym_RBRACK,
  [9511] = 1,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
  [9515] = 1,
    ACTIONS(1020), 1,
      anon_sym_DOLLAR,
  [9519] = 1,
    ACTIONS(1022), 1,
      anon_sym_GT,
  [9523] = 1,
    ACTIONS(1024), 1,
      sym__delim_emph,
  [9527] = 1,
    ACTIONS(1026), 1,
      aux_sym_label_token1,
  [9531] = 1,
    ACTIONS(1028), 1,
      aux_sym_reference_token1,
  [9535] = 1,
    ACTIONS(1030), 1,
      aux_sym_label_token1,
  [9539] = 1,
    ACTIONS(1032), 1,
      sym__delim_strong,
  [9543] = 1,
    ACTIONS(1034), 1,
      ts_builtin_sym_end,
  [9547] = 1,
    ACTIONS(1036), 1,
      aux_sym_label_token1,
  [9551] = 1,
    ACTIONS(1038), 1,
      sym__link_end,
  [9555] = 1,
    ACTIONS(1040), 1,
      anon_sym_DOLLAR,
  [9559] = 1,
    ACTIONS(1042), 1,
      aux_sym_reference_token1,
  [9563] = 1,
    ACTIONS(1044), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 194,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 471,
  [SMALL_STATE(15)] = 564,
  [SMALL_STATE(16)] = 657,
  [SMALL_STATE(17)] = 750,
  [SMALL_STATE(18)] = 843,
  [SMALL_STATE(19)] = 933,
  [SMALL_STATE(20)] = 1023,
  [SMALL_STATE(21)] = 1113,
  [SMALL_STATE(22)] = 1203,
  [SMALL_STATE(23)] = 1293,
  [SMALL_STATE(24)] = 1383,
  [SMALL_STATE(25)] = 1473,
  [SMALL_STATE(26)] = 1563,
  [SMALL_STATE(27)] = 1653,
  [SMALL_STATE(28)] = 1743,
  [SMALL_STATE(29)] = 1830,
  [SMALL_STATE(30)] = 1917,
  [SMALL_STATE(31)] = 1985,
  [SMALL_STATE(32)] = 2050,
  [SMALL_STATE(33)] = 2115,
  [SMALL_STATE(34)] = 2180,
  [SMALL_STATE(35)] = 2244,
  [SMALL_STATE(36)] = 2308,
  [SMALL_STATE(37)] = 2368,
  [SMALL_STATE(38)] = 2432,
  [SMALL_STATE(39)] = 2492,
  [SMALL_STATE(40)] = 2551,
  [SMALL_STATE(41)] = 2614,
  [SMALL_STATE(42)] = 2673,
  [SMALL_STATE(43)] = 2734,
  [SMALL_STATE(44)] = 2797,
  [SMALL_STATE(45)] = 2860,
  [SMALL_STATE(46)] = 2921,
  [SMALL_STATE(47)] = 2979,
  [SMALL_STATE(48)] = 3041,
  [SMALL_STATE(49)] = 3103,
  [SMALL_STATE(50)] = 3161,
  [SMALL_STATE(51)] = 3221,
  [SMALL_STATE(52)] = 3279,
  [SMALL_STATE(53)] = 3337,
  [SMALL_STATE(54)] = 3395,
  [SMALL_STATE(55)] = 3453,
  [SMALL_STATE(56)] = 3511,
  [SMALL_STATE(57)] = 3569,
  [SMALL_STATE(58)] = 3627,
  [SMALL_STATE(59)] = 3689,
  [SMALL_STATE(60)] = 3747,
  [SMALL_STATE(61)] = 3804,
  [SMALL_STATE(62)] = 3861,
  [SMALL_STATE(63)] = 3918,
  [SMALL_STATE(64)] = 3975,
  [SMALL_STATE(65)] = 4032,
  [SMALL_STATE(66)] = 4089,
  [SMALL_STATE(67)] = 4146,
  [SMALL_STATE(68)] = 4203,
  [SMALL_STATE(69)] = 4260,
  [SMALL_STATE(70)] = 4317,
  [SMALL_STATE(71)] = 4376,
  [SMALL_STATE(72)] = 4432,
  [SMALL_STATE(73)] = 4488,
  [SMALL_STATE(74)] = 4544,
  [SMALL_STATE(75)] = 4602,
  [SMALL_STATE(76)] = 4658,
  [SMALL_STATE(77)] = 4714,
  [SMALL_STATE(78)] = 4770,
  [SMALL_STATE(79)] = 4826,
  [SMALL_STATE(80)] = 4882,
  [SMALL_STATE(81)] = 4937,
  [SMALL_STATE(82)] = 4992,
  [SMALL_STATE(83)] = 5047,
  [SMALL_STATE(84)] = 5102,
  [SMALL_STATE(85)] = 5157,
  [SMALL_STATE(86)] = 5212,
  [SMALL_STATE(87)] = 5267,
  [SMALL_STATE(88)] = 5322,
  [SMALL_STATE(89)] = 5400,
  [SMALL_STATE(90)] = 5478,
  [SMALL_STATE(91)] = 5556,
  [SMALL_STATE(92)] = 5614,
  [SMALL_STATE(93)] = 5672,
  [SMALL_STATE(94)] = 5735,
  [SMALL_STATE(95)] = 5798,
  [SMALL_STATE(96)] = 5861,
  [SMALL_STATE(97)] = 5924,
  [SMALL_STATE(98)] = 5987,
  [SMALL_STATE(99)] = 6050,
  [SMALL_STATE(100)] = 6111,
  [SMALL_STATE(101)] = 6172,
  [SMALL_STATE(102)] = 6233,
  [SMALL_STATE(103)] = 6294,
  [SMALL_STATE(104)] = 6355,
  [SMALL_STATE(105)] = 6416,
  [SMALL_STATE(106)] = 6477,
  [SMALL_STATE(107)] = 6538,
  [SMALL_STATE(108)] = 6593,
  [SMALL_STATE(109)] = 6654,
  [SMALL_STATE(110)] = 6715,
  [SMALL_STATE(111)] = 6770,
  [SMALL_STATE(112)] = 6826,
  [SMALL_STATE(113)] = 6863,
  [SMALL_STATE(114)] = 6900,
  [SMALL_STATE(115)] = 6937,
  [SMALL_STATE(116)] = 6974,
  [SMALL_STATE(117)] = 7007,
  [SMALL_STATE(118)] = 7040,
  [SMALL_STATE(119)] = 7073,
  [SMALL_STATE(120)] = 7106,
  [SMALL_STATE(121)] = 7139,
  [SMALL_STATE(122)] = 7172,
  [SMALL_STATE(123)] = 7205,
  [SMALL_STATE(124)] = 7238,
  [SMALL_STATE(125)] = 7268,
  [SMALL_STATE(126)] = 7298,
  [SMALL_STATE(127)] = 7328,
  [SMALL_STATE(128)] = 7355,
  [SMALL_STATE(129)] = 7380,
  [SMALL_STATE(130)] = 7405,
  [SMALL_STATE(131)] = 7430,
  [SMALL_STATE(132)] = 7455,
  [SMALL_STATE(133)] = 7480,
  [SMALL_STATE(134)] = 7505,
  [SMALL_STATE(135)] = 7532,
  [SMALL_STATE(136)] = 7557,
  [SMALL_STATE(137)] = 7582,
  [SMALL_STATE(138)] = 7607,
  [SMALL_STATE(139)] = 7632,
  [SMALL_STATE(140)] = 7656,
  [SMALL_STATE(141)] = 7680,
  [SMALL_STATE(142)] = 7704,
  [SMALL_STATE(143)] = 7728,
  [SMALL_STATE(144)] = 7752,
  [SMALL_STATE(145)] = 7776,
  [SMALL_STATE(146)] = 7800,
  [SMALL_STATE(147)] = 7824,
  [SMALL_STATE(148)] = 7848,
  [SMALL_STATE(149)] = 7872,
  [SMALL_STATE(150)] = 7896,
  [SMALL_STATE(151)] = 7920,
  [SMALL_STATE(152)] = 7944,
  [SMALL_STATE(153)] = 7968,
  [SMALL_STATE(154)] = 7992,
  [SMALL_STATE(155)] = 8016,
  [SMALL_STATE(156)] = 8040,
  [SMALL_STATE(157)] = 8064,
  [SMALL_STATE(158)] = 8088,
  [SMALL_STATE(159)] = 8112,
  [SMALL_STATE(160)] = 8136,
  [SMALL_STATE(161)] = 8160,
  [SMALL_STATE(162)] = 8184,
  [SMALL_STATE(163)] = 8208,
  [SMALL_STATE(164)] = 8232,
  [SMALL_STATE(165)] = 8256,
  [SMALL_STATE(166)] = 8280,
  [SMALL_STATE(167)] = 8304,
  [SMALL_STATE(168)] = 8328,
  [SMALL_STATE(169)] = 8352,
  [SMALL_STATE(170)] = 8376,
  [SMALL_STATE(171)] = 8400,
  [SMALL_STATE(172)] = 8424,
  [SMALL_STATE(173)] = 8448,
  [SMALL_STATE(174)] = 8472,
  [SMALL_STATE(175)] = 8496,
  [SMALL_STATE(176)] = 8519,
  [SMALL_STATE(177)] = 8542,
  [SMALL_STATE(178)] = 8568,
  [SMALL_STATE(179)] = 8594,
  [SMALL_STATE(180)] = 8614,
  [SMALL_STATE(181)] = 8633,
  [SMALL_STATE(182)] = 8652,
  [SMALL_STATE(183)] = 8671,
  [SMALL_STATE(184)] = 8690,
  [SMALL_STATE(185)] = 8709,
  [SMALL_STATE(186)] = 8728,
  [SMALL_STATE(187)] = 8747,
  [SMALL_STATE(188)] = 8766,
  [SMALL_STATE(189)] = 8785,
  [SMALL_STATE(190)] = 8804,
  [SMALL_STATE(191)] = 8823,
  [SMALL_STATE(192)] = 8842,
  [SMALL_STATE(193)] = 8861,
  [SMALL_STATE(194)] = 8880,
  [SMALL_STATE(195)] = 8899,
  [SMALL_STATE(196)] = 8918,
  [SMALL_STATE(197)] = 8937,
  [SMALL_STATE(198)] = 8956,
  [SMALL_STATE(199)] = 8975,
  [SMALL_STATE(200)] = 8994,
  [SMALL_STATE(201)] = 9013,
  [SMALL_STATE(202)] = 9032,
  [SMALL_STATE(203)] = 9051,
  [SMALL_STATE(204)] = 9070,
  [SMALL_STATE(205)] = 9089,
  [SMALL_STATE(206)] = 9098,
  [SMALL_STATE(207)] = 9109,
  [SMALL_STATE(208)] = 9124,
  [SMALL_STATE(209)] = 9139,
  [SMALL_STATE(210)] = 9150,
  [SMALL_STATE(211)] = 9159,
  [SMALL_STATE(212)] = 9174,
  [SMALL_STATE(213)] = 9183,
  [SMALL_STATE(214)] = 9195,
  [SMALL_STATE(215)] = 9207,
  [SMALL_STATE(216)] = 9219,
  [SMALL_STATE(217)] = 9231,
  [SMALL_STATE(218)] = 9243,
  [SMALL_STATE(219)] = 9255,
  [SMALL_STATE(220)] = 9261,
  [SMALL_STATE(221)] = 9267,
  [SMALL_STATE(222)] = 9277,
  [SMALL_STATE(223)] = 9285,
  [SMALL_STATE(224)] = 9295,
  [SMALL_STATE(225)] = 9301,
  [SMALL_STATE(226)] = 9311,
  [SMALL_STATE(227)] = 9317,
  [SMALL_STATE(228)] = 9323,
  [SMALL_STATE(229)] = 9331,
  [SMALL_STATE(230)] = 9337,
  [SMALL_STATE(231)] = 9343,
  [SMALL_STATE(232)] = 9353,
  [SMALL_STATE(233)] = 9363,
  [SMALL_STATE(234)] = 9369,
  [SMALL_STATE(235)] = 9379,
  [SMALL_STATE(236)] = 9385,
  [SMALL_STATE(237)] = 9395,
  [SMALL_STATE(238)] = 9402,
  [SMALL_STATE(239)] = 9407,
  [SMALL_STATE(240)] = 9412,
  [SMALL_STATE(241)] = 9419,
  [SMALL_STATE(242)] = 9426,
  [SMALL_STATE(243)] = 9431,
  [SMALL_STATE(244)] = 9438,
  [SMALL_STATE(245)] = 9443,
  [SMALL_STATE(246)] = 9447,
  [SMALL_STATE(247)] = 9451,
  [SMALL_STATE(248)] = 9455,
  [SMALL_STATE(249)] = 9459,
  [SMALL_STATE(250)] = 9463,
  [SMALL_STATE(251)] = 9467,
  [SMALL_STATE(252)] = 9471,
  [SMALL_STATE(253)] = 9475,
  [SMALL_STATE(254)] = 9479,
  [SMALL_STATE(255)] = 9483,
  [SMALL_STATE(256)] = 9487,
  [SMALL_STATE(257)] = 9491,
  [SMALL_STATE(258)] = 9495,
  [SMALL_STATE(259)] = 9499,
  [SMALL_STATE(260)] = 9503,
  [SMALL_STATE(261)] = 9507,
  [SMALL_STATE(262)] = 9511,
  [SMALL_STATE(263)] = 9515,
  [SMALL_STATE(264)] = 9519,
  [SMALL_STATE(265)] = 9523,
  [SMALL_STATE(266)] = 9527,
  [SMALL_STATE(267)] = 9531,
  [SMALL_STATE(268)] = 9535,
  [SMALL_STATE(269)] = 9539,
  [SMALL_STATE(270)] = 9543,
  [SMALL_STATE(271)] = 9547,
  [SMALL_STATE(272)] = 9551,
  [SMALL_STATE(273)] = 9555,
  [SMALL_STATE(274)] = 9559,
  [SMALL_STATE(275)] = 9563,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_arg, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_arg, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_expr, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_arg_named, 2, .production_id = 11),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_arg_named, 3, .production_id = 11),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(11),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(11),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(57),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(57),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(22),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(22),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(21),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(21),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(33),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(186),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(55),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(16),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(16),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(68),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(68),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(26),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(26),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(27),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(27),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(35),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(192),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(64),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(23),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(23),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(77),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(77),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(19),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(19),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(18),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(18),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(40),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(201),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(71),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(28),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(28),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(85),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(85),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(24),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(24),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(20),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(20),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(58),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(190),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(80),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_field_access, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_field_access, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_text_ident, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_field_access_repeat1, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(221),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_field_access, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_field_access, 2),
  [330] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(223),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_text_ident, 1, .production_id = 9),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_text_ident, 1, .production_id = 9),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_expr, 1),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(232),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(236),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_function_call, 4, .production_id = 10),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_function_call, 4, .production_id = 10),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_delimited_fence, 3, .production_id = 8),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_delimited_fence, 3, .production_id = 8),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_space, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited, 3, .production_id = 7),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited, 3, .production_id = 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_shorthand, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_shorthand, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_function_call, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_function_call, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 1),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(93),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(93),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(272),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(268),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(267),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(17),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(204),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(169),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(113),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(115),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(109),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(103),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(96),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(96),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(257),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(271),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(256),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(14),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(184),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(141),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(112),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(114),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(104),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(108),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_emph, 1, .production_id = 1),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(176),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(176),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(272),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(268),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(267),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(17),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(204),
  [562] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(169),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(211),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(115),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2),
  [573] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(103),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(175),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(175),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(272),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(268),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(267),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(17),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(204),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(169),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(211),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(115),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(109),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_strong, 1, .production_id = 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_same_line, 1, .production_id = 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(161),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(161),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(248),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(266),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(274),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(13),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(194),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(106),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(102),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start, 2),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [694] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2), SHIFT_REPEAT(225),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, .production_id = 2),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2, .production_id = 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_base, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_base, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 3),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 3),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 2),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, .production_id = 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, .production_id = 4),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emph, 3, .production_id = 4),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emph, 3, .production_id = 4),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, .production_id = 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3, .production_id = 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3, .production_id = 5),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3, .production_id = 4),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3, .production_id = 4),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(179),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(197),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(210),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [800] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [808] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [850] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [876] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(203),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(199),
  [882] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(203),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [889] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 2),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(181),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(208),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 2),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_args_repeat1, 2),
  [913] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_args_repeat1, 2), SHIFT_REPEAT(7),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 3),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_arg, 3),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_arg_named, 4, .production_id = 13),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 6),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_arg_named, 3, .production_id = 12),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [950] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_arg, 2),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [956] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [958] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [962] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [974] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [984] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_typst_external_scanner_create(void);
void tree_sitter_typst_external_scanner_destroy(void *);
bool tree_sitter_typst_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_typst_external_scanner_serialize(void *, char *);
void tree_sitter_typst_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_typst(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_typst_external_scanner_create,
      tree_sitter_typst_external_scanner_destroy,
      tree_sitter_typst_external_scanner_scan,
      tree_sitter_typst_external_scanner_serialize,
      tree_sitter_typst_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
