#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 7

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
  sym_math_text = 53,
  anon_sym_LBRACK = 54,
  anon_sym_RBRACK = 55,
  sym_string = 56,
  sym_line_comment = 57,
  anon_sym_SLASH_STAR = 58,
  aux_sym_block_comment_token1 = 59,
  aux_sym_block_comment_token2 = 60,
  anon_sym_STAR_SLASH = 61,
  aux_sym__space_same_line_token1 = 62,
  sym__token_eof = 63,
  sym__space = 64,
  sym_parbreak = 65,
  sym__newline = 66,
  sym__indent = 67,
  sym__dedent = 68,
  sym_raw = 69,
  sym__link_end = 70,
  sym_text = 71,
  sym__delim_strong = 72,
  sym__delim_emph = 73,
  sym_source_file = 74,
  sym_markup = 75,
  sym__markup_expr_base = 76,
  sym__markup_expr_line_start_sof = 77,
  sym__markup_expr_line_start = 78,
  aux_sym__markup_expr_line_start_content = 79,
  sym__markup_expr_text = 80,
  sym_link = 81,
  sym_label = 82,
  sym_reference = 83,
  sym_strong = 84,
  sym__markup_strong = 85,
  sym_emph = 86,
  sym__markup_emph = 87,
  sym_heading = 88,
  sym__markup_same_line = 89,
  sym_equation = 90,
  sym_math = 91,
  sym__math_expr = 92,
  sym_math_shorthand = 93,
  sym_content_block = 94,
  sym_block_comment = 95,
  sym_space = 96,
  sym__whitespace_line = 97,
  sym__space_same_line = 98,
  aux_sym_markup_repeat1 = 99,
  aux_sym__markup_expr_line_start_sof_repeat1 = 100,
  aux_sym__markup_strong_repeat1 = 101,
  aux_sym__markup_emph_repeat1 = 102,
  aux_sym__markup_same_line_repeat1 = 103,
  aux_sym_math_repeat1 = 104,
  aux_sym_block_comment_repeat1 = 105,
  aux_sym__whitespace_line_repeat1 = 106,
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
  [sym_math_text] = "math_text",
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
  [sym_math_text] = sym_math_text,
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
  [sym_math_text] = {
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
  field_content = 1,
  field_inner = 2,
  field_text = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_inner] = "inner",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 1},
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_markup,
  },
  [3] = {
    [1] = sym_space,
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 8,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 13,
  [18] = 16,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 20,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 20,
  [29] = 26,
  [30] = 26,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 32,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 38,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 40,
  [44] = 44,
  [45] = 44,
  [46] = 44,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 48,
  [52] = 52,
  [53] = 47,
  [54] = 49,
  [55] = 50,
  [56] = 56,
  [57] = 56,
  [58] = 52,
  [59] = 59,
  [60] = 60,
  [61] = 49,
  [62] = 59,
  [63] = 52,
  [64] = 49,
  [65] = 52,
  [66] = 48,
  [67] = 67,
  [68] = 68,
  [69] = 60,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 74,
  [76] = 70,
  [77] = 73,
  [78] = 68,
  [79] = 71,
  [80] = 48,
  [81] = 81,
  [82] = 52,
  [83] = 67,
  [84] = 81,
  [85] = 59,
  [86] = 81,
  [87] = 67,
  [88] = 68,
  [89] = 60,
  [90] = 70,
  [91] = 74,
  [92] = 49,
  [93] = 73,
  [94] = 71,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 100,
  [103] = 100,
  [104] = 104,
  [105] = 101,
  [106] = 101,
  [107] = 100,
  [108] = 101,
  [109] = 101,
  [110] = 100,
  [111] = 100,
  [112] = 100,
  [113] = 101,
  [114] = 100,
  [115] = 101,
  [116] = 101,
  [117] = 52,
  [118] = 118,
  [119] = 49,
  [120] = 120,
  [121] = 121,
  [122] = 48,
  [123] = 52,
  [124] = 49,
  [125] = 125,
  [126] = 49,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 130,
  [133] = 129,
  [134] = 52,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 136,
  [140] = 140,
  [141] = 141,
  [142] = 138,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 135,
  [147] = 141,
  [148] = 148,
  [149] = 138,
  [150] = 144,
  [151] = 140,
  [152] = 136,
  [153] = 135,
  [154] = 140,
  [155] = 141,
  [156] = 148,
  [157] = 157,
  [158] = 148,
  [159] = 157,
  [160] = 157,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(125);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '&') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(97);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(124);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(124);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '\r') ADVANCE(125);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(124);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '!') ADVANCE(113);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '&') ADVANCE(102);
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead == '|') ADVANCE(107);
      if (lookahead == '~') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(103);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(50);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == '~') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(50);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == '~') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 28:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(50);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == '~') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(29);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(56);
      END_STATE();
    case 30:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(43);
      if (lookahead == '\r') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(45);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 33:
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 34:
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 35:
      if (eof) ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(50);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == '~') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 36:
      if (eof) ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(50);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == '~') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(50);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(39);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '@') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == '~') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(122);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '?') ADVANCE(48);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_linebreak);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_linebreak);
      if (lookahead == '\n') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_escape);
      if (lookahead == '{') ADVANCE(32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_escape);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_text_shorthand);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_text_shorthand);
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_smart_quote);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(29);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_heading_start);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>') ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ_GT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      if (lookahead == '>') ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LT_DASH_LT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ);
      if (lookahead == '>') ADVANCE(68);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_TILDE_TILDE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(75);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '<') ADVANCE(74);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_TILDE);
      if (lookahead == '~') ADVANCE(77);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_DASH_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_PIPE_DASH_GT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_TILDE_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '>') ADVANCE(61);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_math_align_point);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_math_align_point);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_math_text);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(4);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(104);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(78);
      if (lookahead == '~') ADVANCE(81);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(88);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '|') ADVANCE(92);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(6);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '=') ADVANCE(63);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(85);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '=') ADVANCE(65);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '>') ADVANCE(94);
      if (lookahead == '~') ADVANCE(18);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '|') ADVANCE(67);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_math_text);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(43);
      if (lookahead == '\r') ADVANCE(44);
      if (lookahead == 'u') ADVANCE(46);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(45);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_math_text);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(122);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_block_comment_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__space_same_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 36, .external_lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 27, .external_lex_state = 2},
  [9] = {.lex_state = 27, .external_lex_state = 2},
  [10] = {.lex_state = 27, .external_lex_state = 2},
  [11] = {.lex_state = 36, .external_lex_state = 2},
  [12] = {.lex_state = 27, .external_lex_state = 2},
  [13] = {.lex_state = 28, .external_lex_state = 2},
  [14] = {.lex_state = 37, .external_lex_state = 2},
  [15] = {.lex_state = 28, .external_lex_state = 2},
  [16] = {.lex_state = 37, .external_lex_state = 2},
  [17] = {.lex_state = 37, .external_lex_state = 2},
  [18] = {.lex_state = 28, .external_lex_state = 2},
  [19] = {.lex_state = 37, .external_lex_state = 2},
  [20] = {.lex_state = 37, .external_lex_state = 3},
  [21] = {.lex_state = 37, .external_lex_state = 2},
  [22] = {.lex_state = 37, .external_lex_state = 4},
  [23] = {.lex_state = 37, .external_lex_state = 3},
  [24] = {.lex_state = 37, .external_lex_state = 2},
  [25] = {.lex_state = 37, .external_lex_state = 4},
  [26] = {.lex_state = 37, .external_lex_state = 5},
  [27] = {.lex_state = 37, .external_lex_state = 2},
  [28] = {.lex_state = 37, .external_lex_state = 3},
  [29] = {.lex_state = 37, .external_lex_state = 5},
  [30] = {.lex_state = 37, .external_lex_state = 5},
  [31] = {.lex_state = 37, .external_lex_state = 6},
  [32] = {.lex_state = 36, .external_lex_state = 2},
  [33] = {.lex_state = 36, .external_lex_state = 2},
  [34] = {.lex_state = 27, .external_lex_state = 2},
  [35] = {.lex_state = 27, .external_lex_state = 2},
  [36] = {.lex_state = 27, .external_lex_state = 2},
  [37] = {.lex_state = 36, .external_lex_state = 2},
  [38] = {.lex_state = 27, .external_lex_state = 2},
  [39] = {.lex_state = 36, .external_lex_state = 2},
  [40] = {.lex_state = 36, .external_lex_state = 2},
  [41] = {.lex_state = 27, .external_lex_state = 2},
  [42] = {.lex_state = 36, .external_lex_state = 2},
  [43] = {.lex_state = 27, .external_lex_state = 2},
  [44] = {.lex_state = 26, .external_lex_state = 2},
  [45] = {.lex_state = 35, .external_lex_state = 2},
  [46] = {.lex_state = 35, .external_lex_state = 4},
  [47] = {.lex_state = 36, .external_lex_state = 2},
  [48] = {.lex_state = 36, .external_lex_state = 2},
  [49] = {.lex_state = 36, .external_lex_state = 2},
  [50] = {.lex_state = 36, .external_lex_state = 2},
  [51] = {.lex_state = 27, .external_lex_state = 2},
  [52] = {.lex_state = 27, .external_lex_state = 2},
  [53] = {.lex_state = 27, .external_lex_state = 2},
  [54] = {.lex_state = 27, .external_lex_state = 2},
  [55] = {.lex_state = 27, .external_lex_state = 2},
  [56] = {.lex_state = 27, .external_lex_state = 2},
  [57] = {.lex_state = 36, .external_lex_state = 2},
  [58] = {.lex_state = 36, .external_lex_state = 2},
  [59] = {.lex_state = 37, .external_lex_state = 4},
  [60] = {.lex_state = 28, .external_lex_state = 2},
  [61] = {.lex_state = 28, .external_lex_state = 2},
  [62] = {.lex_state = 37, .external_lex_state = 2},
  [63] = {.lex_state = 28, .external_lex_state = 2},
  [64] = {.lex_state = 37, .external_lex_state = 4},
  [65] = {.lex_state = 37, .external_lex_state = 4},
  [66] = {.lex_state = 28, .external_lex_state = 2},
  [67] = {.lex_state = 37, .external_lex_state = 2},
  [68] = {.lex_state = 37, .external_lex_state = 2},
  [69] = {.lex_state = 37, .external_lex_state = 2},
  [70] = {.lex_state = 37, .external_lex_state = 2},
  [71] = {.lex_state = 28, .external_lex_state = 2},
  [72] = {.lex_state = 37, .external_lex_state = 4},
  [73] = {.lex_state = 28, .external_lex_state = 2},
  [74] = {.lex_state = 37, .external_lex_state = 2},
  [75] = {.lex_state = 28, .external_lex_state = 2},
  [76] = {.lex_state = 28, .external_lex_state = 2},
  [77] = {.lex_state = 37, .external_lex_state = 2},
  [78] = {.lex_state = 28, .external_lex_state = 2},
  [79] = {.lex_state = 37, .external_lex_state = 2},
  [80] = {.lex_state = 37, .external_lex_state = 2},
  [81] = {.lex_state = 37, .external_lex_state = 4},
  [82] = {.lex_state = 37, .external_lex_state = 2},
  [83] = {.lex_state = 28, .external_lex_state = 2},
  [84] = {.lex_state = 37, .external_lex_state = 2},
  [85] = {.lex_state = 28, .external_lex_state = 2},
  [86] = {.lex_state = 28, .external_lex_state = 2},
  [87] = {.lex_state = 37, .external_lex_state = 4},
  [88] = {.lex_state = 37, .external_lex_state = 4},
  [89] = {.lex_state = 37, .external_lex_state = 4},
  [90] = {.lex_state = 37, .external_lex_state = 4},
  [91] = {.lex_state = 37, .external_lex_state = 4},
  [92] = {.lex_state = 37, .external_lex_state = 2},
  [93] = {.lex_state = 37, .external_lex_state = 4},
  [94] = {.lex_state = 37, .external_lex_state = 4},
  [95] = {.lex_state = 37, .external_lex_state = 2},
  [96] = {.lex_state = 37, .external_lex_state = 2},
  [97] = {.lex_state = 36, .external_lex_state = 7},
  [98] = {.lex_state = 36, .external_lex_state = 7},
  [99] = {.lex_state = 36, .external_lex_state = 7},
  [100] = {.lex_state = 1, .external_lex_state = 8},
  [101] = {.lex_state = 1, .external_lex_state = 8},
  [102] = {.lex_state = 1, .external_lex_state = 8},
  [103] = {.lex_state = 1, .external_lex_state = 8},
  [104] = {.lex_state = 1, .external_lex_state = 8},
  [105] = {.lex_state = 1, .external_lex_state = 8},
  [106] = {.lex_state = 1, .external_lex_state = 8},
  [107] = {.lex_state = 1, .external_lex_state = 8},
  [108] = {.lex_state = 1, .external_lex_state = 8},
  [109] = {.lex_state = 1, .external_lex_state = 8},
  [110] = {.lex_state = 1, .external_lex_state = 8},
  [111] = {.lex_state = 1, .external_lex_state = 8},
  [112] = {.lex_state = 1, .external_lex_state = 8},
  [113] = {.lex_state = 1, .external_lex_state = 8},
  [114] = {.lex_state = 1, .external_lex_state = 8},
  [115] = {.lex_state = 1, .external_lex_state = 8},
  [116] = {.lex_state = 1, .external_lex_state = 8},
  [117] = {.lex_state = 36, .external_lex_state = 7},
  [118] = {.lex_state = 36},
  [119] = {.lex_state = 36, .external_lex_state = 7},
  [120] = {.lex_state = 36},
  [121] = {.lex_state = 36},
  [122] = {.lex_state = 36, .external_lex_state = 7},
  [123] = {.lex_state = 1, .external_lex_state = 8},
  [124] = {.lex_state = 1, .external_lex_state = 8},
  [125] = {.lex_state = 0, .external_lex_state = 9},
  [126] = {.lex_state = 36},
  [127] = {.lex_state = 36, .external_lex_state = 8},
  [128] = {.lex_state = 0, .external_lex_state = 9},
  [129] = {.lex_state = 0, .external_lex_state = 9},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 0, .external_lex_state = 9},
  [132] = {.lex_state = 36},
  [133] = {.lex_state = 0, .external_lex_state = 9},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 0, .external_lex_state = 10},
  [136] = {.lex_state = 0, .external_lex_state = 11},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0, .external_lex_state = 12},
  [139] = {.lex_state = 0, .external_lex_state = 11},
  [140] = {.lex_state = 36},
  [141] = {.lex_state = 36},
  [142] = {.lex_state = 0, .external_lex_state = 12},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 27},
  [145] = {.lex_state = 27},
  [146] = {.lex_state = 0, .external_lex_state = 10},
  [147] = {.lex_state = 36},
  [148] = {.lex_state = 29},
  [149] = {.lex_state = 0, .external_lex_state = 12},
  [150] = {.lex_state = 27},
  [151] = {.lex_state = 36},
  [152] = {.lex_state = 0, .external_lex_state = 11},
  [153] = {.lex_state = 0, .external_lex_state = 10},
  [154] = {.lex_state = 36},
  [155] = {.lex_state = 36},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 34},
  [158] = {.lex_state = 29},
  [159] = {.lex_state = 34},
  [160] = {.lex_state = 34},
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
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_emph] = true,
  },
  [4] = {
    [ts_external_token__token_eof] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
  },
  [5] = {
    [ts_external_token__space] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
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
    [ts_external_token__delim_strong] = true,
  },
  [11] = {
    [ts_external_token__delim_emph] = true,
  },
  [12] = {
    [ts_external_token__link_end] = true,
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
    [sym_source_file] = STATE(143),
    [sym_markup] = STATE(137),
    [sym__markup_expr_base] = STATE(17),
    [sym__markup_expr_line_start_sof] = STATE(17),
    [aux_sym__markup_expr_line_start_content] = STATE(39),
    [sym__markup_expr_text] = STATE(17),
    [sym_link] = STATE(17),
    [sym_label] = STATE(17),
    [sym_reference] = STATE(17),
    [sym_strong] = STATE(17),
    [sym_emph] = STATE(17),
    [sym_heading] = STATE(133),
    [sym_equation] = STATE(17),
    [sym_block_comment] = STATE(57),
    [sym_space] = STATE(11),
    [aux_sym__markup_expr_line_start_sof_repeat1] = STATE(98),
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
  [0] = 7,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(155), 1,
      sym_math,
    ACTIONS(31), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(33), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    STATE(5), 3,
      sym__math_expr,
      sym_math_shorthand,
      aux_sym_math_repeat1,
    ACTIONS(39), 11,
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
    ACTIONS(37), 27,
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
  [63] = 7,
    ACTIONS(41), 1,
      anon_sym_DOLLAR,
    STATE(141), 1,
      sym_math,
    ACTIONS(31), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(33), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    STATE(5), 3,
      sym__math_expr,
      sym_math_shorthand,
      aux_sym_math_repeat1,
    ACTIONS(39), 11,
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
    ACTIONS(37), 27,
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
  [126] = 7,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(147), 1,
      sym_math,
    ACTIONS(31), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(33), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    STATE(5), 3,
      sym__math_expr,
      sym_math_shorthand,
      aux_sym_math_repeat1,
    ACTIONS(39), 11,
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
    ACTIONS(37), 27,
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
  [189] = 6,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(47), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    STATE(6), 3,
      sym__math_expr,
      sym_math_shorthand,
      aux_sym_math_repeat1,
    ACTIONS(39), 11,
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
    ACTIONS(37), 27,
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
  [249] = 6,
    ACTIONS(57), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 2,
      sym_linebreak,
      sym_string,
    ACTIONS(54), 3,
      sym_escape,
      sym_math_align_point,
      sym_math_text,
    STATE(6), 3,
      sym__math_expr,
      sym_math_shorthand,
      aux_sym_math_repeat1,
    ACTIONS(62), 11,
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
    ACTIONS(59), 27,
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
  [309] = 2,
    ACTIONS(67), 15,
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
    ACTIONS(65), 29,
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
  [358] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(69), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(73), 1,
      aux_sym_link_token1,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(83), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_parbreak,
    ACTIONS(91), 1,
      sym__delim_strong,
    ACTIONS(93), 1,
      sym__delim_emph,
    STATE(12), 1,
      sym_space,
    STATE(38), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(56), 1,
      sym_block_comment,
    STATE(97), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(129), 1,
      sym_heading,
    STATE(144), 1,
      sym_markup,
    ACTIONS(87), 2,
      sym__space,
      sym__newline,
    ACTIONS(71), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(13), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [436] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(69), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(73), 1,
      aux_sym_link_token1,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(83), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_parbreak,
    ACTIONS(91), 1,
      sym__delim_strong,
    ACTIONS(93), 1,
      sym__delim_emph,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_space,
    STATE(38), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(56), 1,
      sym_block_comment,
    STATE(97), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(129), 1,
      sym_heading,
    STATE(145), 1,
      sym_markup,
    ACTIONS(87), 2,
      sym__space,
      sym__newline,
    ACTIONS(71), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(13), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [514] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(69), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(73), 1,
      aux_sym_link_token1,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(83), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym_parbreak,
    ACTIONS(91), 1,
      sym__delim_strong,
    ACTIONS(93), 1,
      sym__delim_emph,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_space,
    STATE(38), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(56), 1,
      sym_block_comment,
    STATE(97), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(129), 1,
      sym_heading,
    STATE(150), 1,
      sym_markup,
    ACTIONS(87), 2,
      sym__space,
      sym__newline,
    ACTIONS(71), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(13), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [592] = 12,
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
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      aux_sym__markup_expr_text_token1,
    STATE(132), 1,
      sym__whitespace_line,
    ACTIONS(103), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    ACTIONS(105), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    STATE(16), 12,
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
  [650] = 12,
    ACTIONS(73), 1,
      aux_sym_link_token1,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      sym__delim_strong,
    ACTIONS(93), 1,
      sym__delim_emph,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(107), 1,
      aux_sym__markup_expr_text_token1,
    STATE(130), 1,
      sym__whitespace_line,
    ACTIONS(105), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(18), 12,
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
  [708] = 15,
    ACTIONS(73), 1,
      aux_sym_link_token1,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      sym__delim_strong,
    ACTIONS(93), 1,
      sym__delim_emph,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(107), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(111), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      sym__space,
    ACTIONS(115), 1,
      sym_parbreak,
    ACTIONS(117), 1,
      sym__newline,
    STATE(130), 1,
      sym__whitespace_line,
    ACTIONS(109), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(18), 12,
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
  [771] = 15,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(127), 1,
      aux_sym_link_token1,
    ACTIONS(130), 1,
      anon_sym_LT,
    ACTIONS(133), 1,
      anon_sym_AT,
    ACTIONS(136), 1,
      anon_sym_DOLLAR,
    ACTIONS(139), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      sym__space,
    ACTIONS(145), 1,
      sym_parbreak,
    ACTIONS(148), 1,
      sym__newline,
    ACTIONS(151), 1,
      sym__delim_strong,
    ACTIONS(154), 1,
      sym__delim_emph,
    STATE(132), 1,
      sym__whitespace_line,
    ACTIONS(124), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(14), 12,
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
  [834] = 15,
    ACTIONS(119), 1,
      anon_sym_RBRACK,
    ACTIONS(157), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(163), 1,
      aux_sym_link_token1,
    ACTIONS(166), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_AT,
    ACTIONS(172), 1,
      anon_sym_DOLLAR,
    ACTIONS(175), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      sym__space,
    ACTIONS(181), 1,
      sym_parbreak,
    ACTIONS(184), 1,
      sym__newline,
    ACTIONS(187), 1,
      sym__delim_strong,
    ACTIONS(190), 1,
      sym__delim_emph,
    STATE(130), 1,
      sym__whitespace_line,
    ACTIONS(160), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(15), 12,
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
  [897] = 15,
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
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(203), 1,
      sym_parbreak,
    ACTIONS(205), 1,
      sym__newline,
    STATE(132), 1,
      sym__whitespace_line,
    ACTIONS(197), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(14), 12,
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
  [960] = 15,
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
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(203), 1,
      sym_parbreak,
    ACTIONS(205), 1,
      sym__newline,
    STATE(132), 1,
      sym__whitespace_line,
    ACTIONS(103), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(16), 12,
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
  [1023] = 15,
    ACTIONS(73), 1,
      aux_sym_link_token1,
    ACTIONS(75), 1,
      anon_sym_LT,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      sym__delim_strong,
    ACTIONS(93), 1,
      sym__delim_emph,
    ACTIONS(111), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      sym__space,
    ACTIONS(115), 1,
      sym_parbreak,
    ACTIONS(117), 1,
      sym__newline,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    ACTIONS(207), 1,
      aux_sym__markup_expr_text_token1,
    STATE(130), 1,
      sym__whitespace_line,
    ACTIONS(209), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(15), 12,
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
  [1086] = 15,
    ACTIONS(211), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(217), 1,
      aux_sym_link_token1,
    ACTIONS(220), 1,
      anon_sym_LT,
    ACTIONS(223), 1,
      anon_sym_AT,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    ACTIONS(229), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(232), 1,
      sym__space,
    ACTIONS(235), 1,
      sym_parbreak,
    ACTIONS(238), 1,
      sym__newline,
    ACTIONS(241), 1,
      sym__delim_strong,
    ACTIONS(244), 1,
      sym__delim_emph,
    STATE(19), 1,
      aux_sym__markup_emph_repeat1,
    STATE(132), 1,
      sym__whitespace_line,
    ACTIONS(214), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(96), 10,
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
  [1147] = 15,
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
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(246), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(250), 1,
      sym_parbreak,
    STATE(24), 1,
      aux_sym__markup_strong_repeat1,
    STATE(132), 1,
      sym__whitespace_line,
    STATE(146), 1,
      sym__markup_strong,
    ACTIONS(248), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(95), 10,
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
  [1208] = 15,
    ACTIONS(252), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(258), 1,
      aux_sym_link_token1,
    ACTIONS(261), 1,
      anon_sym_LT,
    ACTIONS(264), 1,
      anon_sym_AT,
    ACTIONS(267), 1,
      anon_sym_DOLLAR,
    ACTIONS(270), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      sym__space,
    ACTIONS(276), 1,
      sym_parbreak,
    ACTIONS(279), 1,
      sym__newline,
    ACTIONS(282), 1,
      sym__delim_strong,
    ACTIONS(284), 1,
      sym__delim_emph,
    STATE(21), 1,
      aux_sym__markup_strong_repeat1,
    STATE(132), 1,
      sym__whitespace_line,
    ACTIONS(255), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(95), 10,
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
  [1269] = 12,
    ACTIONS(287), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(293), 1,
      aux_sym_link_token1,
    ACTIONS(296), 1,
      anon_sym_LT,
    ACTIONS(299), 1,
      anon_sym_AT,
    ACTIONS(302), 1,
      anon_sym_DOLLAR,
    ACTIONS(305), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(310), 1,
      sym__delim_strong,
    ACTIONS(313), 1,
      sym__delim_emph,
    STATE(22), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(308), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(290), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(72), 10,
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
  [1324] = 15,
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
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(246), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(250), 1,
      sym_parbreak,
    STATE(24), 1,
      aux_sym__markup_strong_repeat1,
    STATE(132), 1,
      sym__whitespace_line,
    STATE(153), 1,
      sym__markup_strong,
    ACTIONS(248), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(95), 10,
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
  [1385] = 15,
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
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(246), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(250), 1,
      sym_parbreak,
    ACTIONS(316), 1,
      sym__delim_strong,
    STATE(21), 1,
      aux_sym__markup_strong_repeat1,
    STATE(132), 1,
      sym__whitespace_line,
    ACTIONS(248), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(95), 10,
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
  [1446] = 12,
    ACTIONS(318), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(322), 1,
      aux_sym_link_token1,
    ACTIONS(324), 1,
      anon_sym_LT,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    ACTIONS(330), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      sym__delim_strong,
    ACTIONS(336), 1,
      sym__delim_emph,
    STATE(22), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(332), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(320), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(72), 10,
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
  [1501] = 15,
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
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(250), 1,
      sym_parbreak,
    ACTIONS(338), 1,
      aux_sym__markup_expr_text_token1,
    STATE(27), 1,
      aux_sym__markup_emph_repeat1,
    STATE(132), 1,
      sym__whitespace_line,
    STATE(152), 1,
      sym__markup_emph,
    ACTIONS(340), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(96), 10,
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
  [1562] = 15,
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
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(250), 1,
      sym_parbreak,
    ACTIONS(338), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(342), 1,
      sym__delim_emph,
    STATE(19), 1,
      aux_sym__markup_emph_repeat1,
    STATE(132), 1,
      sym__whitespace_line,
    ACTIONS(340), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(96), 10,
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
  [1623] = 15,
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
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(246), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(250), 1,
      sym_parbreak,
    STATE(24), 1,
      aux_sym__markup_strong_repeat1,
    STATE(132), 1,
      sym__whitespace_line,
    STATE(135), 1,
      sym__markup_strong,
    ACTIONS(248), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(95), 10,
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
  [1684] = 15,
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
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(250), 1,
      sym_parbreak,
    ACTIONS(338), 1,
      aux_sym__markup_expr_text_token1,
    STATE(27), 1,
      aux_sym__markup_emph_repeat1,
    STATE(132), 1,
      sym__whitespace_line,
    STATE(139), 1,
      sym__markup_emph,
    ACTIONS(340), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(96), 10,
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
  [1745] = 15,
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
    ACTIONS(199), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      sym__space,
    ACTIONS(205), 1,
      sym__newline,
    ACTIONS(250), 1,
      sym_parbreak,
    ACTIONS(338), 1,
      aux_sym__markup_expr_text_token1,
    STATE(27), 1,
      aux_sym__markup_emph_repeat1,
    STATE(132), 1,
      sym__whitespace_line,
    STATE(136), 1,
      sym__markup_emph,
    ACTIONS(340), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(96), 10,
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
  [1806] = 13,
    ACTIONS(318), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(322), 1,
      aux_sym_link_token1,
    ACTIONS(324), 1,
      anon_sym_LT,
    ACTIONS(326), 1,
      anon_sym_AT,
    ACTIONS(328), 1,
      anon_sym_DOLLAR,
    ACTIONS(330), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 1,
      sym__delim_strong,
    ACTIONS(336), 1,
      sym__delim_emph,
    ACTIONS(344), 1,
      sym__token_eof,
    STATE(25), 1,
      aux_sym__markup_same_line_repeat1,
    STATE(131), 1,
      sym__markup_same_line,
    ACTIONS(320), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(72), 10,
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
  [1862] = 6,
    ACTIONS(348), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(350), 1,
      sym_heading_start,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      aux_sym__space_same_line_token1,
    STATE(118), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(346), 17,
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
  [1899] = 6,
    ACTIONS(350), 1,
      sym_heading_start,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(358), 1,
      aux_sym__markup_expr_text_token1,
    STATE(118), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(356), 17,
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
  [1936] = 6,
    ACTIONS(350), 1,
      sym_heading_start,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(358), 1,
      aux_sym__markup_expr_text_token1,
    STATE(118), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(356), 17,
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
  [1973] = 6,
    ACTIONS(348), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(350), 1,
      sym_heading_start,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      aux_sym__space_same_line_token1,
    STATE(118), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(346), 17,
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
  [2010] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(360), 1,
      aux_sym__markup_expr_text_token1,
    STATE(43), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(129), 1,
      sym_heading,
    ACTIONS(362), 18,
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
  [2043] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(360), 1,
      aux_sym__markup_expr_text_token1,
    STATE(40), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(133), 1,
      sym_heading,
    ACTIONS(362), 18,
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
  [2076] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(364), 1,
      aux_sym__markup_expr_text_token1,
    STATE(43), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(129), 1,
      sym_heading,
    ACTIONS(366), 18,
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
  [2109] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(364), 1,
      aux_sym__markup_expr_text_token1,
    STATE(40), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(133), 1,
      sym_heading,
    ACTIONS(366), 18,
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
  [2142] = 5,
    ACTIONS(370), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(372), 1,
      sym_heading_start,
    STATE(40), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(133), 1,
      sym_heading,
    ACTIONS(368), 18,
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
  [2175] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(375), 1,
      aux_sym__markup_expr_text_token1,
    STATE(43), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(129), 1,
      sym_heading,
    ACTIONS(377), 18,
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
  [2208] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(375), 1,
      aux_sym__markup_expr_text_token1,
    STATE(40), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(133), 1,
      sym_heading,
    ACTIONS(377), 18,
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
  [2241] = 5,
    ACTIONS(370), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(372), 1,
      sym_heading_start,
    STATE(43), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(129), 1,
      sym_heading,
    ACTIONS(368), 18,
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
  [2274] = 4,
    ACTIONS(379), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_content_block,
    ACTIONS(381), 18,
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
  [2304] = 4,
    ACTIONS(379), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    STATE(70), 1,
      sym_content_block,
    ACTIONS(381), 18,
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
  [2334] = 4,
    ACTIONS(379), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_content_block,
    ACTIONS(381), 18,
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
  [2364] = 2,
    ACTIONS(370), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(368), 19,
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
  [2389] = 2,
    ACTIONS(348), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(346), 19,
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
  [2414] = 2,
    ACTIONS(391), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(389), 19,
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
  [2439] = 2,
    ACTIONS(395), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(393), 19,
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
  [2464] = 2,
    ACTIONS(348), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(346), 19,
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
  [2489] = 2,
    ACTIONS(397), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(399), 19,
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
  [2514] = 2,
    ACTIONS(370), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(368), 19,
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
  [2539] = 2,
    ACTIONS(391), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(389), 19,
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
  [2564] = 2,
    ACTIONS(395), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(393), 19,
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
  [2589] = 3,
    ACTIONS(401), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(105), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 13,
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
  [2616] = 3,
    ACTIONS(401), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(105), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(403), 13,
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
  [2643] = 2,
    ACTIONS(397), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(399), 19,
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
  [2668] = 2,
    ACTIONS(405), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(407), 18,
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
  [2692] = 2,
    ACTIONS(409), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(411), 18,
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
  [2716] = 2,
    ACTIONS(391), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(389), 18,
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
  [2740] = 2,
    ACTIONS(405), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(407), 18,
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
  [2764] = 2,
    ACTIONS(397), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(399), 18,
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
  [2788] = 2,
    ACTIONS(391), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(389), 18,
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
  [2812] = 2,
    ACTIONS(397), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(399), 18,
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
  [2836] = 2,
    ACTIONS(348), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(346), 18,
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
  [2860] = 2,
    ACTIONS(415), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(413), 18,
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
  [2884] = 2,
    ACTIONS(419), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(417), 18,
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
  [2908] = 2,
    ACTIONS(409), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(411), 18,
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
  [2932] = 2,
    ACTIONS(423), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(421), 18,
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
  [2956] = 2,
    ACTIONS(425), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(427), 18,
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
  [2980] = 2,
    ACTIONS(429), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(431), 18,
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
  [3004] = 2,
    ACTIONS(433), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(435), 18,
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
  [3028] = 2,
    ACTIONS(439), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(437), 18,
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
  [3052] = 2,
    ACTIONS(439), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(437), 18,
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
  [3076] = 2,
    ACTIONS(423), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(421), 18,
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
  [3100] = 2,
    ACTIONS(433), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(435), 18,
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
  [3124] = 2,
    ACTIONS(419), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(417), 18,
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
  [3148] = 2,
    ACTIONS(425), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(427), 18,
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
  [3172] = 2,
    ACTIONS(348), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(346), 18,
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
  [3196] = 2,
    ACTIONS(441), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(443), 18,
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
  [3220] = 2,
    ACTIONS(397), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(399), 18,
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
  [3244] = 2,
    ACTIONS(415), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(413), 18,
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
  [3268] = 2,
    ACTIONS(441), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(443), 18,
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
  [3292] = 2,
    ACTIONS(405), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(407), 18,
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
  [3316] = 2,
    ACTIONS(441), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(443), 18,
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
  [3340] = 2,
    ACTIONS(415), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(413), 18,
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
  [3364] = 2,
    ACTIONS(419), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(417), 18,
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
  [3388] = 2,
    ACTIONS(409), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(411), 18,
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
  [3412] = 2,
    ACTIONS(423), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(421), 18,
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
  [3436] = 2,
    ACTIONS(439), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(437), 18,
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
  [3460] = 2,
    ACTIONS(391), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(389), 18,
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
  [3484] = 2,
    ACTIONS(433), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(435), 18,
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
  [3508] = 2,
    ACTIONS(425), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(427), 18,
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
  [3532] = 2,
    ACTIONS(445), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(447), 17,
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
  [3555] = 2,
    ACTIONS(449), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(451), 17,
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
  [3578] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(455), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(129), 1,
      sym_heading,
    ACTIONS(453), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(457), 2,
      sym__space,
      sym__newline,
    STATE(99), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [3604] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(455), 1,
      anon_sym_SLASH_STAR,
    STATE(42), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(133), 1,
      sym_heading,
    ACTIONS(453), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(457), 2,
      sym__space,
      sym__newline,
    STATE(99), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [3630] = 5,
    ACTIONS(459), 1,
      sym_heading_start,
    ACTIONS(464), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(461), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(467), 2,
      sym__space,
      sym__newline,
    STATE(99), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [3650] = 5,
    ACTIONS(470), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(476), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(104), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3669] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(478), 1,
      sym_line_comment,
    ACTIONS(480), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(482), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(103), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3688] = 5,
    ACTIONS(470), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(484), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(104), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3707] = 5,
    ACTIONS(470), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(486), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(104), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3726] = 5,
    ACTIONS(488), 1,
      sym_line_comment,
    ACTIONS(491), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(494), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(497), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(104), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3745] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(499), 1,
      sym_line_comment,
    ACTIONS(501), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(503), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(114), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3764] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(505), 1,
      sym_line_comment,
    ACTIONS(507), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(509), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(107), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3783] = 5,
    ACTIONS(470), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(511), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(104), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3802] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(513), 1,
      sym_line_comment,
    ACTIONS(515), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(517), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(110), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3821] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(519), 1,
      sym_line_comment,
    ACTIONS(521), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(523), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(112), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3840] = 5,
    ACTIONS(470), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(525), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(104), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3859] = 5,
    ACTIONS(470), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(527), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(104), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3878] = 5,
    ACTIONS(470), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(529), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(104), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3897] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      sym_line_comment,
    ACTIONS(533), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(535), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(111), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3916] = 5,
    ACTIONS(470), 1,
      sym_line_comment,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(537), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(104), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3935] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(539), 1,
      sym_line_comment,
    ACTIONS(541), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(543), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(102), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3954] = 5,
    ACTIONS(472), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(545), 1,
      sym_line_comment,
    ACTIONS(547), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(549), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(100), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [3973] = 1,
    ACTIONS(399), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3982] = 4,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(551), 1,
      sym_heading_start,
    ACTIONS(553), 1,
      aux_sym__space_same_line_token1,
    STATE(121), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [3997] = 1,
    ACTIONS(389), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4006] = 4,
    ACTIONS(350), 1,
      sym_heading_start,
    ACTIONS(352), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(354), 1,
      aux_sym__space_same_line_token1,
    STATE(118), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [4021] = 4,
    ACTIONS(555), 1,
      sym_heading_start,
    ACTIONS(557), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(560), 1,
      aux_sym__space_same_line_token1,
    STATE(121), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [4036] = 1,
    ACTIONS(346), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [4045] = 2,
    ACTIONS(397), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(399), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [4056] = 2,
    ACTIONS(391), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(389), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [4067] = 1,
    ACTIONS(563), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [4073] = 1,
    ACTIONS(389), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [4079] = 3,
    ACTIONS(565), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(567), 1,
      sym__token_eof,
    STATE(31), 1,
      sym__space_same_line,
  [4089] = 1,
    ACTIONS(569), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [4095] = 2,
    ACTIONS(573), 1,
      sym__newline,
    ACTIONS(571), 2,
      sym__token_eof,
      sym_parbreak,
  [4103] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(36), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(129), 1,
      sym_heading,
  [4113] = 1,
    ACTIONS(575), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [4119] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(37), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(133), 1,
      sym_heading,
  [4129] = 2,
    ACTIONS(579), 1,
      sym__newline,
    ACTIONS(577), 2,
      sym__token_eof,
      sym_parbreak,
  [4137] = 1,
    ACTIONS(399), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [4143] = 1,
    ACTIONS(581), 1,
      sym__delim_strong,
  [4147] = 1,
    ACTIONS(583), 1,
      sym__delim_emph,
  [4151] = 1,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
  [4155] = 1,
    ACTIONS(587), 1,
      sym__link_end,
  [4159] = 1,
    ACTIONS(589), 1,
      sym__delim_emph,
  [4163] = 1,
    ACTIONS(591), 1,
      anon_sym_GT,
  [4167] = 1,
    ACTIONS(593), 1,
      anon_sym_DOLLAR,
  [4171] = 1,
    ACTIONS(595), 1,
      sym__link_end,
  [4175] = 1,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
  [4179] = 1,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
  [4183] = 1,
    ACTIONS(601), 1,
      anon_sym_RBRACK,
  [4187] = 1,
    ACTIONS(603), 1,
      sym__delim_strong,
  [4191] = 1,
    ACTIONS(605), 1,
      anon_sym_DOLLAR,
  [4195] = 1,
    ACTIONS(607), 1,
      aux_sym_reference_token1,
  [4199] = 1,
    ACTIONS(609), 1,
      sym__link_end,
  [4203] = 1,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
  [4207] = 1,
    ACTIONS(613), 1,
      anon_sym_GT,
  [4211] = 1,
    ACTIONS(615), 1,
      sym__delim_emph,
  [4215] = 1,
    ACTIONS(617), 1,
      sym__delim_strong,
  [4219] = 1,
    ACTIONS(619), 1,
      anon_sym_GT,
  [4223] = 1,
    ACTIONS(621), 1,
      anon_sym_DOLLAR,
  [4227] = 1,
    ACTIONS(623), 1,
      aux_sym_reference_token1,
  [4231] = 1,
    ACTIONS(625), 1,
      aux_sym_label_token1,
  [4235] = 1,
    ACTIONS(627), 1,
      aux_sym_reference_token1,
  [4239] = 1,
    ACTIONS(629), 1,
      aux_sym_label_token1,
  [4243] = 1,
    ACTIONS(631), 1,
      aux_sym_label_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 249,
  [SMALL_STATE(7)] = 309,
  [SMALL_STATE(8)] = 358,
  [SMALL_STATE(9)] = 436,
  [SMALL_STATE(10)] = 514,
  [SMALL_STATE(11)] = 592,
  [SMALL_STATE(12)] = 650,
  [SMALL_STATE(13)] = 708,
  [SMALL_STATE(14)] = 771,
  [SMALL_STATE(15)] = 834,
  [SMALL_STATE(16)] = 897,
  [SMALL_STATE(17)] = 960,
  [SMALL_STATE(18)] = 1023,
  [SMALL_STATE(19)] = 1086,
  [SMALL_STATE(20)] = 1147,
  [SMALL_STATE(21)] = 1208,
  [SMALL_STATE(22)] = 1269,
  [SMALL_STATE(23)] = 1324,
  [SMALL_STATE(24)] = 1385,
  [SMALL_STATE(25)] = 1446,
  [SMALL_STATE(26)] = 1501,
  [SMALL_STATE(27)] = 1562,
  [SMALL_STATE(28)] = 1623,
  [SMALL_STATE(29)] = 1684,
  [SMALL_STATE(30)] = 1745,
  [SMALL_STATE(31)] = 1806,
  [SMALL_STATE(32)] = 1862,
  [SMALL_STATE(33)] = 1899,
  [SMALL_STATE(34)] = 1936,
  [SMALL_STATE(35)] = 1973,
  [SMALL_STATE(36)] = 2010,
  [SMALL_STATE(37)] = 2043,
  [SMALL_STATE(38)] = 2076,
  [SMALL_STATE(39)] = 2109,
  [SMALL_STATE(40)] = 2142,
  [SMALL_STATE(41)] = 2175,
  [SMALL_STATE(42)] = 2208,
  [SMALL_STATE(43)] = 2241,
  [SMALL_STATE(44)] = 2274,
  [SMALL_STATE(45)] = 2304,
  [SMALL_STATE(46)] = 2334,
  [SMALL_STATE(47)] = 2364,
  [SMALL_STATE(48)] = 2389,
  [SMALL_STATE(49)] = 2414,
  [SMALL_STATE(50)] = 2439,
  [SMALL_STATE(51)] = 2464,
  [SMALL_STATE(52)] = 2489,
  [SMALL_STATE(53)] = 2514,
  [SMALL_STATE(54)] = 2539,
  [SMALL_STATE(55)] = 2564,
  [SMALL_STATE(56)] = 2589,
  [SMALL_STATE(57)] = 2616,
  [SMALL_STATE(58)] = 2643,
  [SMALL_STATE(59)] = 2668,
  [SMALL_STATE(60)] = 2692,
  [SMALL_STATE(61)] = 2716,
  [SMALL_STATE(62)] = 2740,
  [SMALL_STATE(63)] = 2764,
  [SMALL_STATE(64)] = 2788,
  [SMALL_STATE(65)] = 2812,
  [SMALL_STATE(66)] = 2836,
  [SMALL_STATE(67)] = 2860,
  [SMALL_STATE(68)] = 2884,
  [SMALL_STATE(69)] = 2908,
  [SMALL_STATE(70)] = 2932,
  [SMALL_STATE(71)] = 2956,
  [SMALL_STATE(72)] = 2980,
  [SMALL_STATE(73)] = 3004,
  [SMALL_STATE(74)] = 3028,
  [SMALL_STATE(75)] = 3052,
  [SMALL_STATE(76)] = 3076,
  [SMALL_STATE(77)] = 3100,
  [SMALL_STATE(78)] = 3124,
  [SMALL_STATE(79)] = 3148,
  [SMALL_STATE(80)] = 3172,
  [SMALL_STATE(81)] = 3196,
  [SMALL_STATE(82)] = 3220,
  [SMALL_STATE(83)] = 3244,
  [SMALL_STATE(84)] = 3268,
  [SMALL_STATE(85)] = 3292,
  [SMALL_STATE(86)] = 3316,
  [SMALL_STATE(87)] = 3340,
  [SMALL_STATE(88)] = 3364,
  [SMALL_STATE(89)] = 3388,
  [SMALL_STATE(90)] = 3412,
  [SMALL_STATE(91)] = 3436,
  [SMALL_STATE(92)] = 3460,
  [SMALL_STATE(93)] = 3484,
  [SMALL_STATE(94)] = 3508,
  [SMALL_STATE(95)] = 3532,
  [SMALL_STATE(96)] = 3555,
  [SMALL_STATE(97)] = 3578,
  [SMALL_STATE(98)] = 3604,
  [SMALL_STATE(99)] = 3630,
  [SMALL_STATE(100)] = 3650,
  [SMALL_STATE(101)] = 3669,
  [SMALL_STATE(102)] = 3688,
  [SMALL_STATE(103)] = 3707,
  [SMALL_STATE(104)] = 3726,
  [SMALL_STATE(105)] = 3745,
  [SMALL_STATE(106)] = 3764,
  [SMALL_STATE(107)] = 3783,
  [SMALL_STATE(108)] = 3802,
  [SMALL_STATE(109)] = 3821,
  [SMALL_STATE(110)] = 3840,
  [SMALL_STATE(111)] = 3859,
  [SMALL_STATE(112)] = 3878,
  [SMALL_STATE(113)] = 3897,
  [SMALL_STATE(114)] = 3916,
  [SMALL_STATE(115)] = 3935,
  [SMALL_STATE(116)] = 3954,
  [SMALL_STATE(117)] = 3973,
  [SMALL_STATE(118)] = 3982,
  [SMALL_STATE(119)] = 3997,
  [SMALL_STATE(120)] = 4006,
  [SMALL_STATE(121)] = 4021,
  [SMALL_STATE(122)] = 4036,
  [SMALL_STATE(123)] = 4045,
  [SMALL_STATE(124)] = 4056,
  [SMALL_STATE(125)] = 4067,
  [SMALL_STATE(126)] = 4073,
  [SMALL_STATE(127)] = 4079,
  [SMALL_STATE(128)] = 4089,
  [SMALL_STATE(129)] = 4095,
  [SMALL_STATE(130)] = 4103,
  [SMALL_STATE(131)] = 4113,
  [SMALL_STATE(132)] = 4119,
  [SMALL_STATE(133)] = 4129,
  [SMALL_STATE(134)] = 4137,
  [SMALL_STATE(135)] = 4143,
  [SMALL_STATE(136)] = 4147,
  [SMALL_STATE(137)] = 4151,
  [SMALL_STATE(138)] = 4155,
  [SMALL_STATE(139)] = 4159,
  [SMALL_STATE(140)] = 4163,
  [SMALL_STATE(141)] = 4167,
  [SMALL_STATE(142)] = 4171,
  [SMALL_STATE(143)] = 4175,
  [SMALL_STATE(144)] = 4179,
  [SMALL_STATE(145)] = 4183,
  [SMALL_STATE(146)] = 4187,
  [SMALL_STATE(147)] = 4191,
  [SMALL_STATE(148)] = 4195,
  [SMALL_STATE(149)] = 4199,
  [SMALL_STATE(150)] = 4203,
  [SMALL_STATE(151)] = 4207,
  [SMALL_STATE(152)] = 4211,
  [SMALL_STATE(153)] = 4215,
  [SMALL_STATE(154)] = 4219,
  [SMALL_STATE(155)] = 4223,
  [SMALL_STATE(156)] = 4227,
  [SMALL_STATE(157)] = 4231,
  [SMALL_STATE(158)] = 4235,
  [SMALL_STATE(159)] = 4239,
  [SMALL_STATE(160)] = 4243,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math, 1),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(6),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_shorthand, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_shorthand, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(14),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(14),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(149),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(159),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(158),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(115),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(80),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(33),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(32),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(20),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(30),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(15),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(15),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(142),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(160),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(148),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(3),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(109),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(66),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(34),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(35),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(28),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(29),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(96),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(96),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(149),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(159),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(158),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(115),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(80),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(120),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(32),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(20),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(95),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(95),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(149),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(159),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(158),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(115),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(80),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(120),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(32),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(30),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(72),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(72),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(138),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(157),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(156),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(4),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(101),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(23),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(26),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_strong, 1, .production_id = 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_same_line, 1, .production_id = 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_emph, 1, .production_id = 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_space, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 1),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2), SHIFT_REPEAT(127),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2, .production_id = 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, .production_id = 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 3),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_base, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_base, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, .production_id = 4),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, .production_id = 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emph, 3, .production_id = 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emph, 3, .production_id = 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3, .production_id = 5),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3, .production_id = 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3, .production_id = 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3, .production_id = 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(99),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(108),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(122),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(104),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(105),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(104),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(116),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(121),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 6),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [597] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
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
