#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 11

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
  anon_sym_LBRACK_PIPE = 21,
  anon_sym_LT_EQ_EQ_GT = 22,
  anon_sym_LT_DASH_DASH_GT = 23,
  anon_sym_LT_DASH_DASH = 24,
  anon_sym_LT_DASH_LT = 25,
  anon_sym_LT_DASH_GT = 26,
  anon_sym_LT_LT_DASH = 27,
  anon_sym_LT_LT_LT = 28,
  anon_sym_LT_EQ_GT = 29,
  anon_sym_LT_EQ_EQ = 30,
  anon_sym_LT_TILDE_TILDE = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_LT_LT = 33,
  anon_sym_LT_DASH = 34,
  anon_sym_LT_TILDE = 35,
  anon_sym_GT_DASH_GT = 36,
  anon_sym_GT_GT_GT = 37,
  anon_sym_EQ_EQ_GT = 38,
  anon_sym_EQ_GT = 39,
  anon_sym_EQ_COLON = 40,
  anon_sym_GT_EQ = 41,
  anon_sym_GT_GT = 42,
  anon_sym_PIPE_DASH_GT = 43,
  anon_sym_PIPE_EQ_GT = 44,
  anon_sym_PIPE_RBRACK = 45,
  anon_sym_PIPE_PIPE = 46,
  anon_sym_TILDE_TILDE_GT = 47,
  anon_sym_TILDE_GT = 48,
  anon_sym_STAR = 49,
  anon_sym_SQUOTE = 50,
  anon_sym_DASH = 51,
  sym_math_align_point = 52,
  anon_sym_DOT = 53,
  anon_sym_LPAREN = 54,
  anon_sym_RPAREN = 55,
  anon_sym_COMMA = 56,
  anon_sym_SEMI = 57,
  anon_sym_COLON = 58,
  sym_math_text = 59,
  sym_math_ident = 60,
  anon_sym_LBRACK = 61,
  anon_sym_RBRACK = 62,
  sym_string = 63,
  sym_line_comment = 64,
  anon_sym_SLASH_STAR = 65,
  aux_sym_block_comment_token1 = 66,
  aux_sym_block_comment_token2 = 67,
  anon_sym_STAR_SLASH = 68,
  aux_sym__space_same_line_token1 = 69,
  sym__token_eof = 70,
  sym__space = 71,
  sym_parbreak = 72,
  sym__newline = 73,
  sym__indent = 74,
  sym__dedent = 75,
  sym_raw = 76,
  sym__link_end = 77,
  sym_text = 78,
  sym__delim_strong = 79,
  sym__delim_emph = 80,
  sym_source_file = 81,
  sym_markup = 82,
  sym__markup_expr_base = 83,
  sym__markup_expr_line_start_sof = 84,
  sym__markup_expr_line_start = 85,
  aux_sym__markup_expr_line_start_content = 86,
  sym__markup_expr_text = 87,
  sym_link = 88,
  sym_label = 89,
  sym_reference = 90,
  sym_strong = 91,
  sym__markup_strong = 92,
  sym_emph = 93,
  sym__markup_emph = 94,
  sym_heading = 95,
  sym__markup_same_line = 96,
  sym_equation = 97,
  sym_math = 98,
  sym__math_expr = 99,
  sym_math_shorthand = 100,
  sym_math_field_access = 101,
  sym_math_function_call = 102,
  sym_math_args = 103,
  sym_math_arg_named = 104,
  sym__math_text_ident = 105,
  sym_content_block = 106,
  sym_block_comment = 107,
  sym_space = 108,
  sym__whitespace_line = 109,
  sym__space_same_line = 110,
  aux_sym_markup_repeat1 = 111,
  aux_sym__markup_expr_line_start_sof_repeat1 = 112,
  aux_sym__markup_strong_repeat1 = 113,
  aux_sym__markup_emph_repeat1 = 114,
  aux_sym__markup_same_line_repeat1 = 115,
  aux_sym_math_repeat1 = 116,
  aux_sym_math_field_access_repeat1 = 117,
  aux_sym_math_args_repeat1 = 118,
  aux_sym_block_comment_repeat1 = 119,
  aux_sym__whitespace_line_repeat1 = 120,
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
  [anon_sym_LBRACK_PIPE] = "[|",
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
  [anon_sym_PIPE_RBRACK] = "|]",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_TILDE_TILDE_GT] = "~~>",
  [anon_sym_TILDE_GT] = "~>",
  [anon_sym_STAR] = "*",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DASH] = "-",
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
  [sym_math_field_access] = "math_field_access",
  [sym_math_function_call] = "math_function_call",
  [sym_math_args] = "math_args",
  [sym_math_arg_named] = "math_arg_named",
  [sym__math_text_ident] = "_math_text_ident",
  [sym_content_block] = "content_block",
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
  [anon_sym_LBRACK_PIPE] = anon_sym_LBRACK_PIPE,
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
  [anon_sym_PIPE_RBRACK] = anon_sym_PIPE_RBRACK,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_TILDE_TILDE_GT] = anon_sym_TILDE_TILDE_GT,
  [anon_sym_TILDE_GT] = anon_sym_TILDE_GT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [sym_math_field_access] = sym_math_field_access,
  [sym_math_function_call] = sym_math_function_call,
  [sym_math_args] = sym_math_args,
  [sym_math_arg_named] = sym_math_arg_named,
  [sym__math_text_ident] = sym__math_text_ident,
  [sym_content_block] = sym_content_block,
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
  [anon_sym_LBRACK_PIPE] = {
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
  [anon_sym_PIPE_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
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
  field_name = 5,
  field_text = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_args] = "args",
  [field_content] = "content",
  [field_inner] = "inner",
  [field_name] = "name",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 1},
  [8] = {.index = 5, .length = 1},
  [9] = {.index = 6, .length = 1},
  [10] = {.index = 7, .length = 2},
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
    {field_args, 2},
  [6] =
    {field_name, 0},
  [7] =
    {field_arg, 2},
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
  [7] = {
    [0] = sym_math_ident,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 8,
  [12] = 6,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 7,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 13,
  [22] = 15,
  [23] = 14,
  [24] = 24,
  [25] = 17,
  [26] = 26,
  [27] = 18,
  [28] = 28,
  [29] = 20,
  [30] = 28,
  [31] = 24,
  [32] = 26,
  [33] = 33,
  [34] = 33,
  [35] = 33,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 40,
  [42] = 42,
  [43] = 42,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 47,
  [51] = 46,
  [52] = 52,
  [53] = 46,
  [54] = 47,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 65,
  [66] = 61,
  [67] = 64,
  [68] = 65,
  [69] = 69,
  [70] = 69,
  [71] = 69,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 72,
  [77] = 73,
  [78] = 75,
  [79] = 79,
  [80] = 80,
  [81] = 79,
  [82] = 74,
  [83] = 80,
  [84] = 84,
  [85] = 85,
  [86] = 80,
  [87] = 75,
  [88] = 85,
  [89] = 80,
  [90] = 75,
  [91] = 91,
  [92] = 74,
  [93] = 93,
  [94] = 91,
  [95] = 85,
  [96] = 96,
  [97] = 93,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 74,
  [102] = 84,
  [103] = 103,
  [104] = 103,
  [105] = 84,
  [106] = 75,
  [107] = 103,
  [108] = 100,
  [109] = 96,
  [110] = 98,
  [111] = 99,
  [112] = 93,
  [113] = 100,
  [114] = 99,
  [115] = 98,
  [116] = 96,
  [117] = 91,
  [118] = 118,
  [119] = 80,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 125,
  [126] = 125,
  [127] = 127,
  [128] = 125,
  [129] = 125,
  [130] = 127,
  [131] = 127,
  [132] = 125,
  [133] = 127,
  [134] = 125,
  [135] = 127,
  [136] = 125,
  [137] = 127,
  [138] = 125,
  [139] = 127,
  [140] = 127,
  [141] = 141,
  [142] = 74,
  [143] = 80,
  [144] = 144,
  [145] = 75,
  [146] = 80,
  [147] = 147,
  [148] = 75,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 75,
  [155] = 80,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 158,
  [161] = 161,
  [162] = 161,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 163,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 170,
  [174] = 174,
  [175] = 172,
  [176] = 168,
  [177] = 169,
  [178] = 178,
  [179] = 179,
  [180] = 178,
  [181] = 181,
  [182] = 174,
  [183] = 183,
  [184] = 184,
  [185] = 183,
  [186] = 168,
  [187] = 178,
  [188] = 172,
  [189] = 174,
  [190] = 169,
  [191] = 171,
  [192] = 171,
  [193] = 193,
  [194] = 193,
  [195] = 170,
  [196] = 193,
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
      if (eof) ADVANCE(47);
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '&') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '_') ADVANCE(149);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(149);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead == '*') ADVANCE(152);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(149);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '&') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(135);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(124);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '&') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(135);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(124);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '&') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(135);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(124);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '&') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(135);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(124);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '&') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(135);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(124);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '&') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == ':') ADVANCE(123);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(135);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(124);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '&') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(135);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(124);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(134);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '&') ADVANCE(111);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == ':') ADVANCE(123);
      if (lookahead == ';') ADVANCE(121);
      if (lookahead == '<') ADVANCE(126);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(127);
      if (lookahead == '[') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(135);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(124);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(124);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(139);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(57);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(122);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(71);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(98);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(102);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '}') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(59);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == '~') ADVANCE(57);
      END_STATE();
    case 36:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(59);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 37:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(59);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == '~') ADVANCE(57);
      END_STATE();
    case 38:
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(38);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(52);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(54);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 42:
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 43:
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 44:
      if (eof) ADVANCE(47);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(59);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == ',') ADVANCE(118);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 45:
      if (eof) ADVANCE(47);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(59);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(59);
      if (lookahead == '$') ADVANCE(67);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(48);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == 'h') ADVANCE(30);
      if (lookahead == '~') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '/') ADVANCE(147);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '?') ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_linebreak);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_linebreak);
      if (lookahead == '\n') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escape);
      if (lookahead == '{') ADVANCE(41);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_escape);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_text_shorthand);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_text_shorthand);
      if (lookahead == '-') ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_smart_quote);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(38);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_heading_start);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_DASH_LT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ);
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT_TILDE_TILDE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '<') ADVANCE(83);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '>') ADVANCE(81);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_TILDE);
      if (lookahead == '~') ADVANCE(86);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT_DASH_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PIPE_DASH_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_TILDE_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '>') ADVANCE(70);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_math_align_point);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_math_align_point);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(14);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '=') ADVANCE(72);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_math_text);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(12);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(125);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '~') ADVANCE(90);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(97);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == ']') ADVANCE(100);
      if (lookahead == '|') ADVANCE(101);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(14);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '=') ADVANCE(72);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(94);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '=') ADVANCE(74);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '~') ADVANCE(27);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '|') ADVANCE(76);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_math_text);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(52);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(55);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(54);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_math_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == 1160 ||
          lookahead == 1161 ||
          lookahead == 6846 ||
          (8413 <= lookahead && lookahead <= 8416) ||
          (8418 <= lookahead && lookahead <= 8420) ||
          (42608 <= lookahead && lookahead <= 42610)) ADVANCE(140);
      if (sym_math_text_character_set_4(lookahead)) ADVANCE(139);
      if (sym_math_ident_character_set_1(lookahead)) ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_math_text);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_math_text);
      if (sym_math_ident_character_set_2(lookahead)) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_math_ident);
      if (sym_math_ident_character_set_2(lookahead)) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(153);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(148);
      if (lookahead == '/') ADVANCE(147);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_block_comment_token2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__space_same_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 44, .external_lex_state = 2},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 36, .external_lex_state = 2},
  [34] = {.lex_state = 36, .external_lex_state = 2},
  [35] = {.lex_state = 36, .external_lex_state = 2},
  [36] = {.lex_state = 44, .external_lex_state = 2},
  [37] = {.lex_state = 36, .external_lex_state = 2},
  [38] = {.lex_state = 37, .external_lex_state = 2},
  [39] = {.lex_state = 46, .external_lex_state = 2},
  [40] = {.lex_state = 37, .external_lex_state = 2},
  [41] = {.lex_state = 46, .external_lex_state = 2},
  [42] = {.lex_state = 46, .external_lex_state = 2},
  [43] = {.lex_state = 37, .external_lex_state = 2},
  [44] = {.lex_state = 46, .external_lex_state = 2},
  [45] = {.lex_state = 46, .external_lex_state = 3},
  [46] = {.lex_state = 46, .external_lex_state = 4},
  [47] = {.lex_state = 46, .external_lex_state = 5},
  [48] = {.lex_state = 46, .external_lex_state = 3},
  [49] = {.lex_state = 46, .external_lex_state = 2},
  [50] = {.lex_state = 46, .external_lex_state = 5},
  [51] = {.lex_state = 46, .external_lex_state = 4},
  [52] = {.lex_state = 46, .external_lex_state = 2},
  [53] = {.lex_state = 46, .external_lex_state = 4},
  [54] = {.lex_state = 46, .external_lex_state = 5},
  [55] = {.lex_state = 46, .external_lex_state = 2},
  [56] = {.lex_state = 46, .external_lex_state = 6},
  [57] = {.lex_state = 36, .external_lex_state = 2},
  [58] = {.lex_state = 44, .external_lex_state = 2},
  [59] = {.lex_state = 36, .external_lex_state = 2},
  [60] = {.lex_state = 44, .external_lex_state = 2},
  [61] = {.lex_state = 44, .external_lex_state = 2},
  [62] = {.lex_state = 44, .external_lex_state = 2},
  [63] = {.lex_state = 36, .external_lex_state = 2},
  [64] = {.lex_state = 36, .external_lex_state = 2},
  [65] = {.lex_state = 36, .external_lex_state = 2},
  [66] = {.lex_state = 36, .external_lex_state = 2},
  [67] = {.lex_state = 44, .external_lex_state = 2},
  [68] = {.lex_state = 44, .external_lex_state = 2},
  [69] = {.lex_state = 35, .external_lex_state = 2},
  [70] = {.lex_state = 45, .external_lex_state = 2},
  [71] = {.lex_state = 45, .external_lex_state = 3},
  [72] = {.lex_state = 44, .external_lex_state = 2},
  [73] = {.lex_state = 44, .external_lex_state = 2},
  [74] = {.lex_state = 36, .external_lex_state = 2},
  [75] = {.lex_state = 44, .external_lex_state = 2},
  [76] = {.lex_state = 36, .external_lex_state = 2},
  [77] = {.lex_state = 36, .external_lex_state = 2},
  [78] = {.lex_state = 36, .external_lex_state = 2},
  [79] = {.lex_state = 36, .external_lex_state = 2},
  [80] = {.lex_state = 36, .external_lex_state = 2},
  [81] = {.lex_state = 44, .external_lex_state = 2},
  [82] = {.lex_state = 44, .external_lex_state = 2},
  [83] = {.lex_state = 44, .external_lex_state = 2},
  [84] = {.lex_state = 37, .external_lex_state = 2},
  [85] = {.lex_state = 46, .external_lex_state = 3},
  [86] = {.lex_state = 37, .external_lex_state = 2},
  [87] = {.lex_state = 37, .external_lex_state = 2},
  [88] = {.lex_state = 46, .external_lex_state = 2},
  [89] = {.lex_state = 46, .external_lex_state = 3},
  [90] = {.lex_state = 46, .external_lex_state = 3},
  [91] = {.lex_state = 46, .external_lex_state = 2},
  [92] = {.lex_state = 37, .external_lex_state = 2},
  [93] = {.lex_state = 37, .external_lex_state = 2},
  [94] = {.lex_state = 37, .external_lex_state = 2},
  [95] = {.lex_state = 37, .external_lex_state = 2},
  [96] = {.lex_state = 37, .external_lex_state = 2},
  [97] = {.lex_state = 46, .external_lex_state = 2},
  [98] = {.lex_state = 37, .external_lex_state = 2},
  [99] = {.lex_state = 37, .external_lex_state = 2},
  [100] = {.lex_state = 37, .external_lex_state = 2},
  [101] = {.lex_state = 46, .external_lex_state = 2},
  [102] = {.lex_state = 46, .external_lex_state = 3},
  [103] = {.lex_state = 46, .external_lex_state = 3},
  [104] = {.lex_state = 37, .external_lex_state = 2},
  [105] = {.lex_state = 46, .external_lex_state = 2},
  [106] = {.lex_state = 46, .external_lex_state = 2},
  [107] = {.lex_state = 46, .external_lex_state = 2},
  [108] = {.lex_state = 46, .external_lex_state = 2},
  [109] = {.lex_state = 46, .external_lex_state = 2},
  [110] = {.lex_state = 46, .external_lex_state = 2},
  [111] = {.lex_state = 46, .external_lex_state = 2},
  [112] = {.lex_state = 46, .external_lex_state = 3},
  [113] = {.lex_state = 46, .external_lex_state = 3},
  [114] = {.lex_state = 46, .external_lex_state = 3},
  [115] = {.lex_state = 46, .external_lex_state = 3},
  [116] = {.lex_state = 46, .external_lex_state = 3},
  [117] = {.lex_state = 46, .external_lex_state = 3},
  [118] = {.lex_state = 46, .external_lex_state = 3},
  [119] = {.lex_state = 46, .external_lex_state = 2},
  [120] = {.lex_state = 46, .external_lex_state = 2},
  [121] = {.lex_state = 46, .external_lex_state = 2},
  [122] = {.lex_state = 44, .external_lex_state = 7},
  [123] = {.lex_state = 44, .external_lex_state = 7},
  [124] = {.lex_state = 44, .external_lex_state = 7},
  [125] = {.lex_state = 1, .external_lex_state = 8},
  [126] = {.lex_state = 1, .external_lex_state = 8},
  [127] = {.lex_state = 1, .external_lex_state = 8},
  [128] = {.lex_state = 1, .external_lex_state = 8},
  [129] = {.lex_state = 1, .external_lex_state = 8},
  [130] = {.lex_state = 1, .external_lex_state = 8},
  [131] = {.lex_state = 1, .external_lex_state = 8},
  [132] = {.lex_state = 1, .external_lex_state = 8},
  [133] = {.lex_state = 1, .external_lex_state = 8},
  [134] = {.lex_state = 1, .external_lex_state = 8},
  [135] = {.lex_state = 1, .external_lex_state = 8},
  [136] = {.lex_state = 1, .external_lex_state = 8},
  [137] = {.lex_state = 1, .external_lex_state = 8},
  [138] = {.lex_state = 1, .external_lex_state = 8},
  [139] = {.lex_state = 1, .external_lex_state = 8},
  [140] = {.lex_state = 1, .external_lex_state = 8},
  [141] = {.lex_state = 1, .external_lex_state = 8},
  [142] = {.lex_state = 44, .external_lex_state = 7},
  [143] = {.lex_state = 1, .external_lex_state = 8},
  [144] = {.lex_state = 44},
  [145] = {.lex_state = 44, .external_lex_state = 7},
  [146] = {.lex_state = 44, .external_lex_state = 7},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 1, .external_lex_state = 8},
  [149] = {.lex_state = 44},
  [150] = {.lex_state = 44},
  [151] = {.lex_state = 44},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 44},
  [155] = {.lex_state = 44},
  [156] = {.lex_state = 44, .external_lex_state = 8},
  [157] = {.lex_state = 0, .external_lex_state = 9},
  [158] = {.lex_state = 0, .external_lex_state = 9},
  [159] = {.lex_state = 0, .external_lex_state = 9},
  [160] = {.lex_state = 0, .external_lex_state = 9},
  [161] = {.lex_state = 44},
  [162] = {.lex_state = 44},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 44},
  [165] = {.lex_state = 0, .external_lex_state = 9},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 44},
  [168] = {.lex_state = 44},
  [169] = {.lex_state = 44},
  [170] = {.lex_state = 0, .external_lex_state = 10},
  [171] = {.lex_state = 38},
  [172] = {.lex_state = 0, .external_lex_state = 11},
  [173] = {.lex_state = 0, .external_lex_state = 10},
  [174] = {.lex_state = 0, .external_lex_state = 12},
  [175] = {.lex_state = 0, .external_lex_state = 11},
  [176] = {.lex_state = 44},
  [177] = {.lex_state = 44},
  [178] = {.lex_state = 36},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 36},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0, .external_lex_state = 12},
  [183] = {.lex_state = 44},
  [184] = {.lex_state = 18},
  [185] = {.lex_state = 44},
  [186] = {.lex_state = 44},
  [187] = {.lex_state = 36},
  [188] = {.lex_state = 0, .external_lex_state = 11},
  [189] = {.lex_state = 0, .external_lex_state = 12},
  [190] = {.lex_state = 44},
  [191] = {.lex_state = 38},
  [192] = {.lex_state = 38},
  [193] = {.lex_state = 43},
  [194] = {.lex_state = 43},
  [195] = {.lex_state = 0, .external_lex_state = 10},
  [196] = {.lex_state = 43},
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
    [ts_external_token__token_eof] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
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
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
  },
  [7] = {
    [ts_external_token__space] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
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
    [sym_source_file] = STATE(179),
    [sym_markup] = STATE(181),
    [sym__markup_expr_base] = STATE(42),
    [sym__markup_expr_line_start_sof] = STATE(42),
    [aux_sym__markup_expr_line_start_content] = STATE(62),
    [sym__markup_expr_text] = STATE(42),
    [sym_link] = STATE(42),
    [sym_label] = STATE(42),
    [sym_reference] = STATE(42),
    [sym_strong] = STATE(42),
    [sym_emph] = STATE(42),
    [sym_heading] = STATE(158),
    [sym_equation] = STATE(42),
    [sym_block_comment] = STATE(81),
    [sym_space] = STATE(36),
    [aux_sym__markup_expr_line_start_sof_repeat1] = STATE(122),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(43), 1,
      sym_math_text,
    ACTIONS(45), 1,
      sym_math_ident,
    STATE(20), 1,
      sym_math_field_access,
    STATE(152), 1,
      aux_sym_math_args_repeat1,
    STATE(183), 1,
      sym_math_args,
    STATE(184), 1,
      sym__math_text_ident,
    ACTIONS(31), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(33), 2,
      sym_escape,
      sym_math_align_point,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(151), 2,
      sym_math,
      sym_math_arg_named,
    STATE(7), 4,
      sym__math_expr,
      sym_math_shorthand,
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
    ACTIONS(35), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [86] = 14,
    ACTIONS(43), 1,
      sym_math_text,
    ACTIONS(45), 1,
      sym_math_ident,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_math_field_access,
    STATE(152), 1,
      aux_sym_math_args_repeat1,
    STATE(184), 1,
      sym__math_text_ident,
    STATE(185), 1,
      sym_math_args,
    ACTIONS(31), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(33), 2,
      sym_escape,
      sym_math_align_point,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(151), 2,
      sym_math,
      sym_math_arg_named,
    STATE(7), 4,
      sym__math_expr,
      sym_math_shorthand,
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
    ACTIONS(35), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [172] = 11,
    ACTIONS(43), 1,
      sym_math_text,
    ACTIONS(45), 1,
      sym_math_ident,
    STATE(20), 1,
      sym_math_field_access,
    STATE(184), 1,
      sym__math_text_ident,
    ACTIONS(31), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(33), 2,
      sym_escape,
      sym_math_align_point,
    STATE(164), 2,
      sym_math,
      sym_math_arg_named,
    ACTIONS(49), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(7), 4,
      sym__math_expr,
      sym_math_shorthand,
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
    ACTIONS(35), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [250] = 9,
    ACTIONS(53), 1,
      sym_math_ident,
    STATE(20), 1,
      sym_math_field_access,
    STATE(167), 1,
      sym_math,
    ACTIONS(31), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(33), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(51), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(7), 4,
      sym__math_expr,
      sym_math_shorthand,
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
    ACTIONS(35), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [322] = 8,
    ACTIONS(69), 1,
      sym_math_ident,
    STATE(20), 1,
      sym_math_field_access,
    ACTIONS(55), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(58), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(67), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(6), 4,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_function_call,
      aux_sym_math_repeat1,
    ACTIONS(64), 11,
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
    ACTIONS(61), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [391] = 8,
    ACTIONS(53), 1,
      sym_math_ident,
    STATE(20), 1,
      sym_math_field_access,
    ACTIONS(72), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(74), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    ACTIONS(76), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(6), 4,
      sym__math_expr,
      sym_math_shorthand,
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
    ACTIONS(35), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [460] = 9,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(88), 1,
      sym_math_ident,
    STATE(29), 1,
      sym_math_field_access,
    STATE(169), 1,
      sym_math,
    ACTIONS(78), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(80), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    STATE(16), 4,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_function_call,
      aux_sym_math_repeat1,
    ACTIONS(86), 11,
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
    ACTIONS(84), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [530] = 5,
    ACTIONS(94), 1,
      anon_sym_DOT,
    ACTIONS(96), 1,
      anon_sym_COLON,
    STATE(15), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(92), 19,
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
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(90), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [592] = 9,
    ACTIONS(88), 1,
      sym_math_ident,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      sym_math_field_access,
    STATE(190), 1,
      sym_math,
    ACTIONS(78), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(80), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    STATE(16), 4,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_function_call,
      aux_sym_math_repeat1,
    ACTIONS(86), 11,
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
    ACTIONS(84), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [662] = 9,
    ACTIONS(88), 1,
      sym_math_ident,
    ACTIONS(100), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      sym_math_field_access,
    STATE(177), 1,
      sym_math,
    ACTIONS(78), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(80), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    STATE(16), 4,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_function_call,
      aux_sym_math_repeat1,
    ACTIONS(86), 11,
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
    ACTIONS(84), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [732] = 8,
    ACTIONS(67), 1,
      anon_sym_DOLLAR,
    ACTIONS(114), 1,
      sym_math_ident,
    STATE(29), 1,
      sym_math_field_access,
    ACTIONS(102), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(105), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    STATE(12), 4,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_function_call,
      aux_sym_math_repeat1,
    ACTIONS(111), 11,
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
    ACTIONS(108), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [799] = 4,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(15), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(92), 19,
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
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(90), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [858] = 4,
    ACTIONS(121), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(119), 19,
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
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(117), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [917] = 4,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(14), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(126), 19,
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
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(124), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [976] = 8,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(88), 1,
      sym_math_ident,
    STATE(29), 1,
      sym_math_field_access,
    ACTIONS(128), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(130), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    STATE(12), 4,
      sym__math_expr,
      sym_math_shorthand,
      sym_math_function_call,
      aux_sym_math_repeat1,
    ACTIONS(86), 11,
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
    ACTIONS(84), 27,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
  [1043] = 2,
    ACTIONS(119), 20,
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
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(117), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1097] = 2,
    ACTIONS(134), 20,
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
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(132), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1151] = 3,
    ACTIONS(134), 1,
      anon_sym_COLON,
    ACTIONS(138), 18,
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
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(136), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1206] = 3,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 18,
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
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(136), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1261] = 4,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(92), 17,
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
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(90), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1318] = 4,
    ACTIONS(142), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(126), 17,
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
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(124), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1375] = 4,
    ACTIONS(144), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(119), 17,
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
      sym_math_align_point,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(117), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1432] = 2,
    ACTIONS(149), 18,
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
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(147), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1484] = 2,
    ACTIONS(119), 18,
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
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(117), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1536] = 2,
    ACTIONS(153), 18,
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
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(151), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1588] = 2,
    ACTIONS(134), 18,
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
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_math_text,
      sym_math_ident,
    ACTIONS(132), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1640] = 2,
    ACTIONS(157), 18,
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
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_math_text,
      sym_math_ident,
    ACTIONS(155), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1692] = 3,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 16,
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
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(136), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1745] = 2,
    ACTIONS(157), 16,
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
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(155), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1795] = 2,
    ACTIONS(149), 16,
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
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(147), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1845] = 2,
    ACTIONS(153), 16,
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
      sym_math_align_point,
      sym_math_text,
      sym_math_ident,
    ACTIONS(151), 29,
      sym_linebreak,
      anon_sym_DASH_GT_GT,
      anon_sym_DASH_DASH_GT,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LBRACK_PIPE,
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
      anon_sym_PIPE_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_TILDE_TILDE_GT,
      anon_sym_TILDE_GT,
      sym_string,
  [1895] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(161), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(165), 1,
      aux_sym_link_token1,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_AT,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    ACTIONS(175), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      sym_parbreak,
    ACTIONS(183), 1,
      sym__delim_strong,
    ACTIONS(185), 1,
      sym__delim_emph,
    STATE(37), 1,
      sym_space,
    STATE(63), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(79), 1,
      sym_block_comment,
    STATE(123), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(160), 1,
      sym_heading,
    STATE(187), 1,
      sym_markup,
    ACTIONS(179), 2,
      sym__space,
      sym__newline,
    ACTIONS(163), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(43), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [1973] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(161), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(165), 1,
      aux_sym_link_token1,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_AT,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(175), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      sym_parbreak,
    ACTIONS(183), 1,
      sym__delim_strong,
    ACTIONS(185), 1,
      sym__delim_emph,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym_space,
    STATE(63), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(79), 1,
      sym_block_comment,
    STATE(123), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(160), 1,
      sym_heading,
    STATE(178), 1,
      sym_markup,
    ACTIONS(179), 2,
      sym__space,
      sym__newline,
    ACTIONS(163), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(43), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [2051] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(161), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(165), 1,
      aux_sym_link_token1,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_AT,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(175), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      sym_parbreak,
    ACTIONS(183), 1,
      sym__delim_strong,
    ACTIONS(185), 1,
      sym__delim_emph,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(37), 1,
      sym_space,
    STATE(63), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(79), 1,
      sym_block_comment,
    STATE(123), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(160), 1,
      sym_heading,
    STATE(180), 1,
      sym_markup,
    ACTIONS(179), 2,
      sym__space,
      sym__newline,
    ACTIONS(163), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(43), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [2129] = 12,
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
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      aux_sym__markup_expr_text_token1,
    STATE(161), 1,
      sym__whitespace_line,
    ACTIONS(195), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    ACTIONS(197), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    STATE(39), 12,
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
  [2187] = 12,
    ACTIONS(165), 1,
      aux_sym_link_token1,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_AT,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(183), 1,
      sym__delim_strong,
    ACTIONS(185), 1,
      sym__delim_emph,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(199), 1,
      aux_sym__markup_expr_text_token1,
    STATE(162), 1,
      sym__whitespace_line,
    ACTIONS(197), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(38), 12,
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
  [2245] = 15,
    ACTIONS(165), 1,
      aux_sym_link_token1,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_AT,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(183), 1,
      sym__delim_strong,
    ACTIONS(185), 1,
      sym__delim_emph,
    ACTIONS(203), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(209), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      sym__space,
    ACTIONS(213), 1,
      sym_parbreak,
    ACTIONS(215), 1,
      sym__newline,
    STATE(162), 1,
      sym__whitespace_line,
    ACTIONS(205), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(40), 12,
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
  [2308] = 15,
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
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(221), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__space,
    ACTIONS(225), 1,
      sym_parbreak,
    ACTIONS(227), 1,
      sym__newline,
    STATE(161), 1,
      sym__whitespace_line,
    ACTIONS(219), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(41), 12,
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
  [2371] = 15,
    ACTIONS(229), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(235), 1,
      aux_sym_link_token1,
    ACTIONS(238), 1,
      anon_sym_LT,
    ACTIONS(241), 1,
      anon_sym_AT,
    ACTIONS(244), 1,
      anon_sym_DOLLAR,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(252), 1,
      sym__space,
    ACTIONS(255), 1,
      sym_parbreak,
    ACTIONS(258), 1,
      sym__newline,
    ACTIONS(261), 1,
      sym__delim_strong,
    ACTIONS(264), 1,
      sym__delim_emph,
    STATE(162), 1,
      sym__whitespace_line,
    ACTIONS(232), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(40), 12,
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
  [2434] = 15,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(273), 1,
      aux_sym_link_token1,
    ACTIONS(276), 1,
      anon_sym_LT,
    ACTIONS(279), 1,
      anon_sym_AT,
    ACTIONS(282), 1,
      anon_sym_DOLLAR,
    ACTIONS(285), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(288), 1,
      sym__space,
    ACTIONS(291), 1,
      sym_parbreak,
    ACTIONS(294), 1,
      sym__newline,
    ACTIONS(297), 1,
      sym__delim_strong,
    ACTIONS(300), 1,
      sym__delim_emph,
    STATE(161), 1,
      sym__whitespace_line,
    ACTIONS(270), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(41), 12,
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
  [2497] = 15,
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
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(221), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__space,
    ACTIONS(225), 1,
      sym_parbreak,
    ACTIONS(227), 1,
      sym__newline,
    STATE(161), 1,
      sym__whitespace_line,
    ACTIONS(195), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(39), 12,
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
  [2560] = 15,
    ACTIONS(165), 1,
      aux_sym_link_token1,
    ACTIONS(167), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_AT,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(183), 1,
      sym__delim_strong,
    ACTIONS(185), 1,
      sym__delim_emph,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(199), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(209), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      sym__space,
    ACTIONS(213), 1,
      sym_parbreak,
    ACTIONS(215), 1,
      sym__newline,
    STATE(162), 1,
      sym__whitespace_line,
    ACTIONS(201), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(38), 12,
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
  [2623] = 15,
    ACTIONS(303), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(309), 1,
      aux_sym_link_token1,
    ACTIONS(312), 1,
      anon_sym_LT,
    ACTIONS(315), 1,
      anon_sym_AT,
    ACTIONS(318), 1,
      anon_sym_DOLLAR,
    ACTIONS(321), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(324), 1,
      sym__space,
    ACTIONS(327), 1,
      sym_parbreak,
    ACTIONS(330), 1,
      sym__newline,
    ACTIONS(333), 1,
      sym__delim_strong,
    ACTIONS(335), 1,
      sym__delim_emph,
    STATE(44), 1,
      aux_sym__markup_strong_repeat1,
    STATE(161), 1,
      sym__whitespace_line,
    ACTIONS(306), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(121), 10,
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
  [2684] = 12,
    ACTIONS(338), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(344), 1,
      aux_sym_link_token1,
    ACTIONS(347), 1,
      anon_sym_LT,
    ACTIONS(350), 1,
      anon_sym_AT,
    ACTIONS(353), 1,
      anon_sym_DOLLAR,
    ACTIONS(356), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(361), 1,
      sym__delim_strong,
    ACTIONS(364), 1,
      sym__delim_emph,
    STATE(45), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(359), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(341), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(118), 10,
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
  [2739] = 15,
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
    ACTIONS(221), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__space,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(367), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(371), 1,
      sym_parbreak,
    STATE(52), 1,
      aux_sym__markup_emph_repeat1,
    STATE(161), 1,
      sym__whitespace_line,
    STATE(188), 1,
      sym__markup_emph,
    ACTIONS(369), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(120), 10,
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
  [2800] = 15,
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
    ACTIONS(221), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__space,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(371), 1,
      sym_parbreak,
    ACTIONS(373), 1,
      aux_sym__markup_expr_text_token1,
    STATE(55), 1,
      aux_sym__markup_strong_repeat1,
    STATE(161), 1,
      sym__whitespace_line,
    STATE(189), 1,
      sym__markup_strong,
    ACTIONS(375), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(121), 10,
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
  [2861] = 12,
    ACTIONS(377), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(381), 1,
      aux_sym_link_token1,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_AT,
    ACTIONS(387), 1,
      anon_sym_DOLLAR,
    ACTIONS(389), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      sym__delim_strong,
    ACTIONS(395), 1,
      sym__delim_emph,
    STATE(45), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(391), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(379), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(118), 10,
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
  [2916] = 15,
    ACTIONS(397), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(403), 1,
      aux_sym_link_token1,
    ACTIONS(406), 1,
      anon_sym_LT,
    ACTIONS(409), 1,
      anon_sym_AT,
    ACTIONS(412), 1,
      anon_sym_DOLLAR,
    ACTIONS(415), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      sym__space,
    ACTIONS(421), 1,
      sym_parbreak,
    ACTIONS(424), 1,
      sym__newline,
    ACTIONS(427), 1,
      sym__delim_strong,
    ACTIONS(430), 1,
      sym__delim_emph,
    STATE(49), 1,
      aux_sym__markup_emph_repeat1,
    STATE(161), 1,
      sym__whitespace_line,
    ACTIONS(400), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(120), 10,
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
  [2977] = 15,
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
    ACTIONS(221), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__space,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(371), 1,
      sym_parbreak,
    ACTIONS(373), 1,
      aux_sym__markup_expr_text_token1,
    STATE(55), 1,
      aux_sym__markup_strong_repeat1,
    STATE(161), 1,
      sym__whitespace_line,
    STATE(174), 1,
      sym__markup_strong,
    ACTIONS(375), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(121), 10,
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
  [3038] = 15,
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
    ACTIONS(221), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__space,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(367), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(371), 1,
      sym_parbreak,
    STATE(52), 1,
      aux_sym__markup_emph_repeat1,
    STATE(161), 1,
      sym__whitespace_line,
    STATE(175), 1,
      sym__markup_emph,
    ACTIONS(369), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(120), 10,
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
  [3099] = 15,
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
    ACTIONS(221), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__space,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(367), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(371), 1,
      sym_parbreak,
    ACTIONS(432), 1,
      sym__delim_emph,
    STATE(49), 1,
      aux_sym__markup_emph_repeat1,
    STATE(161), 1,
      sym__whitespace_line,
    ACTIONS(369), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(120), 10,
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
  [3160] = 15,
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
    ACTIONS(221), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__space,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(367), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(371), 1,
      sym_parbreak,
    STATE(52), 1,
      aux_sym__markup_emph_repeat1,
    STATE(161), 1,
      sym__whitespace_line,
    STATE(172), 1,
      sym__markup_emph,
    ACTIONS(369), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(120), 10,
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
  [3221] = 15,
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
    ACTIONS(221), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__space,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(371), 1,
      sym_parbreak,
    ACTIONS(373), 1,
      aux_sym__markup_expr_text_token1,
    STATE(55), 1,
      aux_sym__markup_strong_repeat1,
    STATE(161), 1,
      sym__whitespace_line,
    STATE(182), 1,
      sym__markup_strong,
    ACTIONS(375), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(121), 10,
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
  [3282] = 15,
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
    ACTIONS(221), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      sym__space,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(371), 1,
      sym_parbreak,
    ACTIONS(373), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(434), 1,
      sym__delim_strong,
    STATE(44), 1,
      aux_sym__markup_strong_repeat1,
    STATE(161), 1,
      sym__whitespace_line,
    ACTIONS(375), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(121), 10,
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
  [3343] = 13,
    ACTIONS(377), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(381), 1,
      aux_sym_link_token1,
    ACTIONS(383), 1,
      anon_sym_LT,
    ACTIONS(385), 1,
      anon_sym_AT,
    ACTIONS(387), 1,
      anon_sym_DOLLAR,
    ACTIONS(389), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(393), 1,
      sym__delim_strong,
    ACTIONS(395), 1,
      sym__delim_emph,
    ACTIONS(436), 1,
      sym__token_eof,
    STATE(48), 1,
      aux_sym__markup_same_line_repeat1,
    STATE(159), 1,
      sym__markup_same_line,
    ACTIONS(379), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(118), 10,
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
  [3399] = 6,
    ACTIONS(438), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(442), 1,
      sym_heading_start,
    ACTIONS(444), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      aux_sym__space_same_line_token1,
    STATE(149), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(440), 17,
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
  [3436] = 6,
    ACTIONS(442), 1,
      sym_heading_start,
    ACTIONS(444), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(450), 1,
      aux_sym__markup_expr_text_token1,
    STATE(149), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(448), 17,
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
  [3473] = 6,
    ACTIONS(442), 1,
      sym_heading_start,
    ACTIONS(444), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(450), 1,
      aux_sym__markup_expr_text_token1,
    STATE(149), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(448), 17,
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
  [3510] = 6,
    ACTIONS(438), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(442), 1,
      sym_heading_start,
    ACTIONS(444), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      aux_sym__space_same_line_token1,
    STATE(149), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(440), 17,
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
  [3547] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(454), 1,
      aux_sym__markup_expr_text_token1,
    STATE(67), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(158), 1,
      sym_heading,
    ACTIONS(452), 18,
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
  [3580] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(458), 1,
      aux_sym__markup_expr_text_token1,
    STATE(67), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(158), 1,
      sym_heading,
    ACTIONS(456), 18,
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
  [3613] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(458), 1,
      aux_sym__markup_expr_text_token1,
    STATE(64), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(160), 1,
      sym_heading,
    ACTIONS(456), 18,
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
  [3646] = 5,
    ACTIONS(460), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(464), 1,
      sym_heading_start,
    STATE(64), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(160), 1,
      sym_heading,
    ACTIONS(462), 18,
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
  [3679] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(467), 1,
      aux_sym__markup_expr_text_token1,
    STATE(64), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(160), 1,
      sym_heading,
    ACTIONS(469), 18,
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
  [3712] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(454), 1,
      aux_sym__markup_expr_text_token1,
    STATE(64), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(160), 1,
      sym_heading,
    ACTIONS(452), 18,
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
  [3745] = 5,
    ACTIONS(460), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(464), 1,
      sym_heading_start,
    STATE(67), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(158), 1,
      sym_heading,
    ACTIONS(462), 18,
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
  [3778] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(467), 1,
      aux_sym__markup_expr_text_token1,
    STATE(67), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(158), 1,
      sym_heading,
    ACTIONS(469), 18,
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
  [3811] = 4,
    ACTIONS(471), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(475), 1,
      anon_sym_LBRACK,
    STATE(96), 1,
      sym_content_block,
    ACTIONS(473), 18,
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
  [3841] = 4,
    ACTIONS(471), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(477), 1,
      anon_sym_LBRACK,
    STATE(109), 1,
      sym_content_block,
    ACTIONS(473), 18,
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
  [3871] = 4,
    ACTIONS(471), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(479), 1,
      anon_sym_LBRACK,
    STATE(116), 1,
      sym_content_block,
    ACTIONS(473), 18,
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
  [3901] = 2,
    ACTIONS(483), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(481), 19,
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
  [3926] = 2,
    ACTIONS(460), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(462), 19,
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
  [3951] = 2,
    ACTIONS(450), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(448), 19,
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
  [3976] = 2,
    ACTIONS(487), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(485), 19,
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
  [4001] = 2,
    ACTIONS(483), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(481), 19,
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
  [4026] = 2,
    ACTIONS(460), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(462), 19,
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
  [4051] = 2,
    ACTIONS(487), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(485), 19,
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
  [4076] = 3,
    ACTIONS(489), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(197), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(491), 13,
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
  [4103] = 2,
    ACTIONS(493), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(495), 19,
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
  [4128] = 3,
    ACTIONS(489), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(197), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(491), 13,
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
  [4155] = 2,
    ACTIONS(450), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(448), 19,
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
  [4180] = 2,
    ACTIONS(493), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(495), 19,
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
  [4205] = 2,
    ACTIONS(497), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(499), 18,
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
  [4229] = 2,
    ACTIONS(501), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(503), 18,
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
  [4253] = 2,
    ACTIONS(493), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(495), 18,
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
  [4277] = 2,
    ACTIONS(487), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(485), 18,
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
  [4301] = 2,
    ACTIONS(501), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(503), 18,
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
  [4325] = 2,
    ACTIONS(493), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(495), 18,
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
  [4349] = 2,
    ACTIONS(487), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(485), 18,
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
  [4373] = 2,
    ACTIONS(507), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(505), 18,
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
  [4397] = 2,
    ACTIONS(450), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(448), 18,
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
  [4421] = 2,
    ACTIONS(509), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(511), 18,
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
  [4445] = 2,
    ACTIONS(507), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(505), 18,
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
  [4469] = 2,
    ACTIONS(501), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(503), 18,
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
  [4493] = 2,
    ACTIONS(513), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(515), 18,
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
  [4517] = 2,
    ACTIONS(509), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(511), 18,
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
  [4541] = 2,
    ACTIONS(517), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(519), 18,
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
  [4565] = 2,
    ACTIONS(521), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(523), 18,
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
  [4589] = 2,
    ACTIONS(525), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(527), 18,
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
  [4613] = 2,
    ACTIONS(450), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(448), 18,
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
  [4637] = 2,
    ACTIONS(497), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(499), 18,
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
  [4661] = 2,
    ACTIONS(529), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(531), 18,
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
  [4685] = 2,
    ACTIONS(529), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(531), 18,
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
  [4709] = 2,
    ACTIONS(497), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(499), 18,
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
  [4733] = 2,
    ACTIONS(487), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(485), 18,
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
  [4757] = 2,
    ACTIONS(529), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(531), 18,
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
  [4781] = 2,
    ACTIONS(525), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(527), 18,
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
  [4805] = 2,
    ACTIONS(513), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(515), 18,
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
  [4829] = 2,
    ACTIONS(517), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(519), 18,
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
  [4853] = 2,
    ACTIONS(521), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(523), 18,
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
  [4877] = 2,
    ACTIONS(509), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(511), 18,
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
  [4901] = 2,
    ACTIONS(525), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(527), 18,
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
  [4925] = 2,
    ACTIONS(521), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(523), 18,
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
  [4949] = 2,
    ACTIONS(517), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(519), 18,
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
  [4973] = 2,
    ACTIONS(513), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(515), 18,
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
  [4997] = 2,
    ACTIONS(507), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(505), 18,
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
  [5021] = 2,
    ACTIONS(533), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(535), 18,
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
  [5045] = 2,
    ACTIONS(493), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(495), 18,
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
  [5069] = 2,
    ACTIONS(537), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(539), 17,
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
  [5092] = 2,
    ACTIONS(541), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(543), 17,
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
  [5115] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(158), 1,
      sym_heading,
    ACTIONS(545), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(549), 2,
      sym__space,
      sym__newline,
    STATE(124), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [5141] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(547), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(160), 1,
      sym_heading,
    ACTIONS(545), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(549), 2,
      sym__space,
      sym__newline,
    STATE(124), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [5167] = 5,
    ACTIONS(551), 1,
      sym_heading_start,
    ACTIONS(556), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(553), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(559), 2,
      sym__space,
      sym__newline,
    STATE(124), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [5187] = 5,
    ACTIONS(562), 1,
      sym_line_comment,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(566), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(568), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(130), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5206] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(570), 1,
      sym_line_comment,
    ACTIONS(572), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(574), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(127), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5225] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(576), 1,
      sym_line_comment,
    ACTIONS(578), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(580), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5244] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(582), 1,
      sym_line_comment,
    ACTIONS(584), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(586), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(131), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5263] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(588), 1,
      sym_line_comment,
    ACTIONS(590), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(592), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(139), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5282] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(576), 1,
      sym_line_comment,
    ACTIONS(578), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(594), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5301] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(576), 1,
      sym_line_comment,
    ACTIONS(578), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(596), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5320] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(598), 1,
      sym_line_comment,
    ACTIONS(600), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(602), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(133), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5339] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(576), 1,
      sym_line_comment,
    ACTIONS(578), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(604), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5358] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(606), 1,
      sym_line_comment,
    ACTIONS(608), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(610), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(135), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5377] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(576), 1,
      sym_line_comment,
    ACTIONS(578), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(612), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5396] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(614), 1,
      sym_line_comment,
    ACTIONS(616), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(618), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(137), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5415] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(576), 1,
      sym_line_comment,
    ACTIONS(578), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(620), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5434] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(622), 1,
      sym_line_comment,
    ACTIONS(624), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(626), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(140), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5453] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(576), 1,
      sym_line_comment,
    ACTIONS(578), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(628), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5472] = 5,
    ACTIONS(564), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(576), 1,
      sym_line_comment,
    ACTIONS(578), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(630), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5491] = 5,
    ACTIONS(632), 1,
      sym_line_comment,
    ACTIONS(635), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(638), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(641), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(141), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [5510] = 1,
    ACTIONS(448), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [5519] = 2,
    ACTIONS(493), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(495), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [5530] = 4,
    ACTIONS(643), 1,
      sym_heading_start,
    ACTIONS(645), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(648), 1,
      aux_sym__space_same_line_token1,
    STATE(144), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [5545] = 1,
    ACTIONS(485), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [5554] = 1,
    ACTIONS(495), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [5563] = 4,
    ACTIONS(442), 1,
      sym_heading_start,
    ACTIONS(444), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      aux_sym__space_same_line_token1,
    STATE(149), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [5578] = 2,
    ACTIONS(487), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(485), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [5589] = 4,
    ACTIONS(444), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(651), 1,
      sym_heading_start,
    ACTIONS(653), 1,
      aux_sym__space_same_line_token1,
    STATE(144), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [5604] = 3,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_math_args_repeat1,
    ACTIONS(657), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5615] = 3,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_math_args_repeat1,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5626] = 3,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_math_args_repeat1,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5637] = 3,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_math_args_repeat1,
    ACTIONS(662), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5648] = 1,
    ACTIONS(485), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [5654] = 1,
    ACTIONS(495), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [5660] = 3,
    ACTIONS(666), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(668), 1,
      sym__token_eof,
    STATE(56), 1,
      sym__space_same_line,
  [5670] = 1,
    ACTIONS(670), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [5676] = 2,
    ACTIONS(674), 1,
      sym__newline,
    ACTIONS(672), 2,
      sym__token_eof,
      sym_parbreak,
  [5684] = 1,
    ACTIONS(676), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [5690] = 2,
    ACTIONS(680), 1,
      sym__newline,
    ACTIONS(678), 2,
      sym__token_eof,
      sym_parbreak,
  [5698] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(61), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(158), 1,
      sym_heading,
  [5708] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(66), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(160), 1,
      sym_heading,
  [5718] = 3,
    ACTIONS(682), 1,
      sym_math_text,
    ACTIONS(684), 1,
      sym_math_ident,
    STATE(25), 1,
      sym__math_text_ident,
  [5728] = 1,
    ACTIONS(655), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5734] = 1,
    ACTIONS(686), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [5740] = 3,
    ACTIONS(688), 1,
      sym_math_text,
    ACTIONS(690), 1,
      sym_math_ident,
    STATE(17), 1,
      sym__math_text_ident,
  [5750] = 1,
    ACTIONS(692), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5756] = 1,
    ACTIONS(694), 1,
      anon_sym_GT,
  [5760] = 1,
    ACTIONS(696), 1,
      anon_sym_DOLLAR,
  [5764] = 1,
    ACTIONS(698), 1,
      sym__link_end,
  [5768] = 1,
    ACTIONS(700), 1,
      aux_sym_reference_token1,
  [5772] = 1,
    ACTIONS(702), 1,
      sym__delim_emph,
  [5776] = 1,
    ACTIONS(704), 1,
      sym__link_end,
  [5780] = 1,
    ACTIONS(706), 1,
      sym__delim_strong,
  [5784] = 1,
    ACTIONS(708), 1,
      sym__delim_emph,
  [5788] = 1,
    ACTIONS(710), 1,
      anon_sym_GT,
  [5792] = 1,
    ACTIONS(712), 1,
      anon_sym_DOLLAR,
  [5796] = 1,
    ACTIONS(714), 1,
      anon_sym_RBRACK,
  [5800] = 1,
    ACTIONS(716), 1,
      ts_builtin_sym_end,
  [5804] = 1,
    ACTIONS(718), 1,
      anon_sym_RBRACK,
  [5808] = 1,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
  [5812] = 1,
    ACTIONS(722), 1,
      sym__delim_strong,
  [5816] = 1,
    ACTIONS(724), 1,
      anon_sym_RPAREN,
  [5820] = 1,
    ACTIONS(726), 1,
      anon_sym_COLON,
  [5824] = 1,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
  [5828] = 1,
    ACTIONS(730), 1,
      anon_sym_GT,
  [5832] = 1,
    ACTIONS(732), 1,
      anon_sym_RBRACK,
  [5836] = 1,
    ACTIONS(734), 1,
      sym__delim_emph,
  [5840] = 1,
    ACTIONS(736), 1,
      sym__delim_strong,
  [5844] = 1,
    ACTIONS(738), 1,
      anon_sym_DOLLAR,
  [5848] = 1,
    ACTIONS(740), 1,
      aux_sym_reference_token1,
  [5852] = 1,
    ACTIONS(742), 1,
      aux_sym_reference_token1,
  [5856] = 1,
    ACTIONS(744), 1,
      aux_sym_label_token1,
  [5860] = 1,
    ACTIONS(746), 1,
      aux_sym_label_token1,
  [5864] = 1,
    ACTIONS(748), 1,
      sym__link_end,
  [5868] = 1,
    ACTIONS(750), 1,
      aux_sym_label_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 250,
  [SMALL_STATE(6)] = 322,
  [SMALL_STATE(7)] = 391,
  [SMALL_STATE(8)] = 460,
  [SMALL_STATE(9)] = 530,
  [SMALL_STATE(10)] = 592,
  [SMALL_STATE(11)] = 662,
  [SMALL_STATE(12)] = 732,
  [SMALL_STATE(13)] = 799,
  [SMALL_STATE(14)] = 858,
  [SMALL_STATE(15)] = 917,
  [SMALL_STATE(16)] = 976,
  [SMALL_STATE(17)] = 1043,
  [SMALL_STATE(18)] = 1097,
  [SMALL_STATE(19)] = 1151,
  [SMALL_STATE(20)] = 1206,
  [SMALL_STATE(21)] = 1261,
  [SMALL_STATE(22)] = 1318,
  [SMALL_STATE(23)] = 1375,
  [SMALL_STATE(24)] = 1432,
  [SMALL_STATE(25)] = 1484,
  [SMALL_STATE(26)] = 1536,
  [SMALL_STATE(27)] = 1588,
  [SMALL_STATE(28)] = 1640,
  [SMALL_STATE(29)] = 1692,
  [SMALL_STATE(30)] = 1745,
  [SMALL_STATE(31)] = 1795,
  [SMALL_STATE(32)] = 1845,
  [SMALL_STATE(33)] = 1895,
  [SMALL_STATE(34)] = 1973,
  [SMALL_STATE(35)] = 2051,
  [SMALL_STATE(36)] = 2129,
  [SMALL_STATE(37)] = 2187,
  [SMALL_STATE(38)] = 2245,
  [SMALL_STATE(39)] = 2308,
  [SMALL_STATE(40)] = 2371,
  [SMALL_STATE(41)] = 2434,
  [SMALL_STATE(42)] = 2497,
  [SMALL_STATE(43)] = 2560,
  [SMALL_STATE(44)] = 2623,
  [SMALL_STATE(45)] = 2684,
  [SMALL_STATE(46)] = 2739,
  [SMALL_STATE(47)] = 2800,
  [SMALL_STATE(48)] = 2861,
  [SMALL_STATE(49)] = 2916,
  [SMALL_STATE(50)] = 2977,
  [SMALL_STATE(51)] = 3038,
  [SMALL_STATE(52)] = 3099,
  [SMALL_STATE(53)] = 3160,
  [SMALL_STATE(54)] = 3221,
  [SMALL_STATE(55)] = 3282,
  [SMALL_STATE(56)] = 3343,
  [SMALL_STATE(57)] = 3399,
  [SMALL_STATE(58)] = 3436,
  [SMALL_STATE(59)] = 3473,
  [SMALL_STATE(60)] = 3510,
  [SMALL_STATE(61)] = 3547,
  [SMALL_STATE(62)] = 3580,
  [SMALL_STATE(63)] = 3613,
  [SMALL_STATE(64)] = 3646,
  [SMALL_STATE(65)] = 3679,
  [SMALL_STATE(66)] = 3712,
  [SMALL_STATE(67)] = 3745,
  [SMALL_STATE(68)] = 3778,
  [SMALL_STATE(69)] = 3811,
  [SMALL_STATE(70)] = 3841,
  [SMALL_STATE(71)] = 3871,
  [SMALL_STATE(72)] = 3901,
  [SMALL_STATE(73)] = 3926,
  [SMALL_STATE(74)] = 3951,
  [SMALL_STATE(75)] = 3976,
  [SMALL_STATE(76)] = 4001,
  [SMALL_STATE(77)] = 4026,
  [SMALL_STATE(78)] = 4051,
  [SMALL_STATE(79)] = 4076,
  [SMALL_STATE(80)] = 4103,
  [SMALL_STATE(81)] = 4128,
  [SMALL_STATE(82)] = 4155,
  [SMALL_STATE(83)] = 4180,
  [SMALL_STATE(84)] = 4205,
  [SMALL_STATE(85)] = 4229,
  [SMALL_STATE(86)] = 4253,
  [SMALL_STATE(87)] = 4277,
  [SMALL_STATE(88)] = 4301,
  [SMALL_STATE(89)] = 4325,
  [SMALL_STATE(90)] = 4349,
  [SMALL_STATE(91)] = 4373,
  [SMALL_STATE(92)] = 4397,
  [SMALL_STATE(93)] = 4421,
  [SMALL_STATE(94)] = 4445,
  [SMALL_STATE(95)] = 4469,
  [SMALL_STATE(96)] = 4493,
  [SMALL_STATE(97)] = 4517,
  [SMALL_STATE(98)] = 4541,
  [SMALL_STATE(99)] = 4565,
  [SMALL_STATE(100)] = 4589,
  [SMALL_STATE(101)] = 4613,
  [SMALL_STATE(102)] = 4637,
  [SMALL_STATE(103)] = 4661,
  [SMALL_STATE(104)] = 4685,
  [SMALL_STATE(105)] = 4709,
  [SMALL_STATE(106)] = 4733,
  [SMALL_STATE(107)] = 4757,
  [SMALL_STATE(108)] = 4781,
  [SMALL_STATE(109)] = 4805,
  [SMALL_STATE(110)] = 4829,
  [SMALL_STATE(111)] = 4853,
  [SMALL_STATE(112)] = 4877,
  [SMALL_STATE(113)] = 4901,
  [SMALL_STATE(114)] = 4925,
  [SMALL_STATE(115)] = 4949,
  [SMALL_STATE(116)] = 4973,
  [SMALL_STATE(117)] = 4997,
  [SMALL_STATE(118)] = 5021,
  [SMALL_STATE(119)] = 5045,
  [SMALL_STATE(120)] = 5069,
  [SMALL_STATE(121)] = 5092,
  [SMALL_STATE(122)] = 5115,
  [SMALL_STATE(123)] = 5141,
  [SMALL_STATE(124)] = 5167,
  [SMALL_STATE(125)] = 5187,
  [SMALL_STATE(126)] = 5206,
  [SMALL_STATE(127)] = 5225,
  [SMALL_STATE(128)] = 5244,
  [SMALL_STATE(129)] = 5263,
  [SMALL_STATE(130)] = 5282,
  [SMALL_STATE(131)] = 5301,
  [SMALL_STATE(132)] = 5320,
  [SMALL_STATE(133)] = 5339,
  [SMALL_STATE(134)] = 5358,
  [SMALL_STATE(135)] = 5377,
  [SMALL_STATE(136)] = 5396,
  [SMALL_STATE(137)] = 5415,
  [SMALL_STATE(138)] = 5434,
  [SMALL_STATE(139)] = 5453,
  [SMALL_STATE(140)] = 5472,
  [SMALL_STATE(141)] = 5491,
  [SMALL_STATE(142)] = 5510,
  [SMALL_STATE(143)] = 5519,
  [SMALL_STATE(144)] = 5530,
  [SMALL_STATE(145)] = 5545,
  [SMALL_STATE(146)] = 5554,
  [SMALL_STATE(147)] = 5563,
  [SMALL_STATE(148)] = 5578,
  [SMALL_STATE(149)] = 5589,
  [SMALL_STATE(150)] = 5604,
  [SMALL_STATE(151)] = 5615,
  [SMALL_STATE(152)] = 5626,
  [SMALL_STATE(153)] = 5637,
  [SMALL_STATE(154)] = 5648,
  [SMALL_STATE(155)] = 5654,
  [SMALL_STATE(156)] = 5660,
  [SMALL_STATE(157)] = 5670,
  [SMALL_STATE(158)] = 5676,
  [SMALL_STATE(159)] = 5684,
  [SMALL_STATE(160)] = 5690,
  [SMALL_STATE(161)] = 5698,
  [SMALL_STATE(162)] = 5708,
  [SMALL_STATE(163)] = 5718,
  [SMALL_STATE(164)] = 5728,
  [SMALL_STATE(165)] = 5734,
  [SMALL_STATE(166)] = 5740,
  [SMALL_STATE(167)] = 5750,
  [SMALL_STATE(168)] = 5756,
  [SMALL_STATE(169)] = 5760,
  [SMALL_STATE(170)] = 5764,
  [SMALL_STATE(171)] = 5768,
  [SMALL_STATE(172)] = 5772,
  [SMALL_STATE(173)] = 5776,
  [SMALL_STATE(174)] = 5780,
  [SMALL_STATE(175)] = 5784,
  [SMALL_STATE(176)] = 5788,
  [SMALL_STATE(177)] = 5792,
  [SMALL_STATE(178)] = 5796,
  [SMALL_STATE(179)] = 5800,
  [SMALL_STATE(180)] = 5804,
  [SMALL_STATE(181)] = 5808,
  [SMALL_STATE(182)] = 5812,
  [SMALL_STATE(183)] = 5816,
  [SMALL_STATE(184)] = 5820,
  [SMALL_STATE(185)] = 5824,
  [SMALL_STATE(186)] = 5828,
  [SMALL_STATE(187)] = 5832,
  [SMALL_STATE(188)] = 5836,
  [SMALL_STATE(189)] = 5840,
  [SMALL_STATE(190)] = 5844,
  [SMALL_STATE(191)] = 5848,
  [SMALL_STATE(192)] = 5852,
  [SMALL_STATE(193)] = 5856,
  [SMALL_STATE(194)] = 5860,
  [SMALL_STATE(195)] = 5864,
  [SMALL_STATE(196)] = 5868,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_args_repeat1, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_arg_named, 2, .production_id = 9),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(6),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(6),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(26),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(26),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(13),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_field_access, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_field_access, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_text_ident, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(12),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(12),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(32),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(32),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_field_access_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(166),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_field_access, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_field_access, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_text_ident, 1, .production_id = 7),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_text_ident, 1, .production_id = 7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_expr, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_expr, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(163),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_function_call, 4, .production_id = 8),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_function_call, 4, .production_id = 8),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_shorthand, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_shorthand, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_function_call, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_function_call, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(40),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(40),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(170),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(196),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(171),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(11),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(128),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(92),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(57),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(59),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(50),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(51),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(41),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(41),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(195),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(194),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(192),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(10),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(126),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(101),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(60),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(58),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(54),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(53),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(121),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(121),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(195),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(194),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(192),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(10),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(126),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(101),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(147),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(58),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(53),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(118),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(118),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(173),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(193),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(191),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(8),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(138),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(47),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(46),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_same_line, 1, .production_id = 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(120),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(120),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(195),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(194),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(192),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(10),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(126),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(101),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(147),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(58),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(54),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_emph, 1, .production_id = 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_strong, 1, .production_id = 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_space, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start, 2),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2), SHIFT_REPEAT(156),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2, .production_id = 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, .production_id = 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_base, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_base, 1),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3, .production_id = 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3, .production_id = 4),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3, .production_id = 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3, .production_id = 5),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, .production_id = 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emph, 3, .production_id = 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emph, 3, .production_id = 4),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, .production_id = 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, .production_id = 4),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 2),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(124),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(134),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(142),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [584] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(141),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(132),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(141),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(136),
  [648] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(144),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 2),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_args_repeat1, 2),
  [657] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_args_repeat1, 2), SHIFT_REPEAT(4),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 6),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_arg_named, 3, .production_id = 10),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [716] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
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
