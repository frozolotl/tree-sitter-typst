#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 330
#define LARGE_STATE_COUNT 52
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 20

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
  aux_sym_math_delimited_left_token1 = 50,
  anon_sym_PIPE_RBRACK = 51,
  aux_sym_math_delimited_right_token1 = 52,
  anon_sym_PIPE_PIPE = 53,
  aux_sym_math_fence_token1 = 54,
  sym_math_align_point = 55,
  anon_sym_DOT = 56,
  anon_sym_LPAREN = 57,
  anon_sym_RPAREN = 58,
  anon_sym_COMMA = 59,
  anon_sym_SEMI = 60,
  anon_sym_COLON = 61,
  anon_sym_ = 62,
  anon_sym_2 = 63,
  anon_sym_3 = 64,
  anon_sym__ = 65,
  anon_sym_CARET = 66,
  anon_sym_SLASH = 67,
  sym_math_text = 68,
  sym_math_ident = 69,
  anon_sym_LBRACK = 70,
  anon_sym_RBRACK = 71,
  sym_string = 72,
  sym_line_comment = 73,
  anon_sym_SLASH_STAR = 74,
  aux_sym_block_comment_token1 = 75,
  aux_sym_block_comment_token2 = 76,
  anon_sym_STAR_SLASH = 77,
  aux_sym__space_same_line_token1 = 78,
  sym__token_eof = 79,
  sym__space = 80,
  sym_parbreak = 81,
  sym__newline = 82,
  sym__indent = 83,
  sym__dedent = 84,
  sym_raw = 85,
  sym__link_end = 86,
  sym_text = 87,
  sym__delim_strong = 88,
  sym__delim_emph = 89,
  sym_source_file = 90,
  sym_markup = 91,
  sym__markup_expr_base = 92,
  sym__markup_expr_line_start_sof = 93,
  sym__markup_expr_line_start = 94,
  aux_sym__markup_expr_line_start_content = 95,
  sym__markup_expr_text = 96,
  sym_link = 97,
  sym_label = 98,
  sym_reference = 99,
  sym_strong = 100,
  sym__markup_strong = 101,
  sym_emph = 102,
  sym__markup_emph = 103,
  sym_heading = 104,
  sym__markup_same_line = 105,
  sym_equation = 106,
  sym_math = 107,
  sym__math_expr = 108,
  sym_math_shorthand = 109,
  sym_math_delimited = 110,
  sym_math_delimited_left = 111,
  sym_math_delimited_right = 112,
  sym_math_delimited_fence = 113,
  sym_math_fence = 114,
  sym_math_field_access = 115,
  sym_math_function_call = 116,
  sym_math_args = 117,
  sym__math_arg = 118,
  sym_math_arg_named = 119,
  sym_math_root = 120,
  sym_math_attach_below = 121,
  sym_math_attach_above = 122,
  sym_math_frac = 123,
  sym__math_text_ident = 124,
  sym_content_block = 125,
  sym__trivia = 126,
  sym_block_comment = 127,
  sym_space = 128,
  sym__whitespace_line = 129,
  sym__space_same_line = 130,
  aux_sym_markup_repeat1 = 131,
  aux_sym__markup_expr_line_start_sof_repeat1 = 132,
  aux_sym__markup_strong_repeat1 = 133,
  aux_sym__markup_emph_repeat1 = 134,
  aux_sym__markup_same_line_repeat1 = 135,
  aux_sym_math_repeat1 = 136,
  aux_sym_math_field_access_repeat1 = 137,
  aux_sym_math_args_repeat1 = 138,
  aux_sym_block_comment_repeat1 = 139,
  aux_sym__whitespace_line_repeat1 = 140,
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
  [aux_sym_math_delimited_left_token1] = "math_delimited_left_token1",
  [anon_sym_PIPE_RBRACK] = "math_shorthand",
  [aux_sym_math_delimited_right_token1] = "math_delimited_right_token1",
  [anon_sym_PIPE_PIPE] = "math_shorthand",
  [aux_sym_math_fence_token1] = "math_fence_token1",
  [sym_math_align_point] = "math_align_point",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_] = "√",
  [anon_sym_2] = "∛",
  [anon_sym_3] = "∜",
  [anon_sym__] = "_",
  [anon_sym_CARET] = "^",
  [anon_sym_SLASH] = "/",
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
  [sym_math_delimited_left] = "math_delimited_left",
  [sym_math_delimited_right] = "math_delimited_right",
  [sym_math_delimited_fence] = "math_delimited_fence",
  [sym_math_fence] = "math_fence",
  [sym_math_field_access] = "math_field_access",
  [sym_math_function_call] = "math_function_call",
  [sym_math_args] = "math_args",
  [sym__math_arg] = "_math_arg",
  [sym_math_arg_named] = "math_arg_named",
  [sym_math_root] = "math_root",
  [sym_math_attach_below] = "math_attach_below",
  [sym_math_attach_above] = "math_attach_above",
  [sym_math_frac] = "math_frac",
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
  [aux_sym_math_delimited_left_token1] = aux_sym_math_delimited_left_token1,
  [anon_sym_PIPE_RBRACK] = sym_math_shorthand,
  [aux_sym_math_delimited_right_token1] = aux_sym_math_delimited_right_token1,
  [anon_sym_PIPE_PIPE] = sym_math_shorthand,
  [aux_sym_math_fence_token1] = aux_sym_math_fence_token1,
  [sym_math_align_point] = sym_math_align_point,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_] = anon_sym_,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym__] = anon_sym__,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [sym_math_delimited_left] = sym_math_delimited_left,
  [sym_math_delimited_right] = sym_math_delimited_right,
  [sym_math_delimited_fence] = sym_math_delimited_fence,
  [sym_math_fence] = sym_math_fence,
  [sym_math_field_access] = sym_math_field_access,
  [sym_math_function_call] = sym_math_function_call,
  [sym_math_args] = sym_math_args,
  [sym__math_arg] = sym__math_arg,
  [sym_math_arg_named] = sym_math_arg_named,
  [sym_math_root] = sym_math_root,
  [sym_math_attach_below] = sym_math_attach_below,
  [sym_math_attach_above] = sym_math_attach_above,
  [sym_math_frac] = sym_math_frac,
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
  [aux_sym_math_delimited_left_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_RBRACK] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_math_delimited_right_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_math_fence_token1] = {
    .visible = false,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
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
  [sym_math_delimited_left] = {
    .visible = true,
    .named = true,
  },
  [sym_math_delimited_right] = {
    .visible = true,
    .named = true,
  },
  [sym_math_delimited_fence] = {
    .visible = true,
    .named = true,
  },
  [sym_math_fence] = {
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
  [sym__math_arg] = {
    .visible = false,
    .named = true,
  },
  [sym_math_arg_named] = {
    .visible = true,
    .named = true,
  },
  [sym_math_root] = {
    .visible = true,
    .named = true,
  },
  [sym_math_attach_below] = {
    .visible = true,
    .named = true,
  },
  [sym_math_attach_above] = {
    .visible = true,
    .named = true,
  },
  [sym_math_frac] = {
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
  field_above = 1,
  field_arg = 2,
  field_args = 3,
  field_below = 4,
  field_content = 5,
  field_denominator = 6,
  field_expr = 7,
  field_inner = 8,
  field_left = 9,
  field_name = 10,
  field_numerator = 11,
  field_right = 12,
  field_text = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_above] = "above",
  [field_arg] = "arg",
  [field_args] = "args",
  [field_below] = "below",
  [field_content] = "content",
  [field_denominator] = "denominator",
  [field_expr] = "expr",
  [field_inner] = "inner",
  [field_left] = "left",
  [field_name] = "name",
  [field_numerator] = "numerator",
  [field_right] = "right",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 1},
  [8] = {.index = 6, .length = 1},
  [9] = {.index = 7, .length = 2},
  [10] = {.index = 9, .length = 2},
  [12] = {.index = 11, .length = 2},
  [13] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 2},
  [15] = {.index = 17, .length = 3},
  [16] = {.index = 20, .length = 1},
  [17] = {.index = 21, .length = 1},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_text, 1},
  [1] =
    {field_left, 0},
  [2] =
    {field_inner, 1},
  [3] =
    {field_content, 2},
    {field_text, 1},
  [5] =
    {field_inner, 2},
  [6] =
    {field_expr, 1},
  [7] =
    {field_inner, 1},
    {field_left, 0},
  [9] =
    {field_left, 0},
    {field_right, 1},
  [11] =
    {field_below, 2},
    {field_expr, 0},
  [13] =
    {field_above, 2},
    {field_expr, 0},
  [15] =
    {field_denominator, 2},
    {field_numerator, 0},
  [17] =
    {field_inner, 1},
    {field_left, 0},
    {field_right, 2},
  [20] =
    {field_args, 2},
  [21] =
    {field_name, 0},
  [22] =
    {field_arg, 2},
    {field_name, 0},
  [24] =
    {field_arg, 3},
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_markup,
  },
  [4] = {
    [1] = sym_space,
  },
  [11] = {
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
  [5] = 4,
  [6] = 6,
  [7] = 4,
  [8] = 8,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 2,
  [14] = 14,
  [15] = 2,
  [16] = 6,
  [17] = 6,
  [18] = 18,
  [19] = 10,
  [20] = 10,
  [21] = 14,
  [22] = 12,
  [23] = 23,
  [24] = 14,
  [25] = 12,
  [26] = 6,
  [27] = 10,
  [28] = 28,
  [29] = 14,
  [30] = 12,
  [31] = 12,
  [32] = 14,
  [33] = 33,
  [34] = 33,
  [35] = 33,
  [36] = 14,
  [37] = 12,
  [38] = 38,
  [39] = 39,
  [40] = 38,
  [41] = 41,
  [42] = 38,
  [43] = 41,
  [44] = 44,
  [45] = 44,
  [46] = 41,
  [47] = 41,
  [48] = 44,
  [49] = 39,
  [50] = 38,
  [51] = 44,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 54,
  [61] = 61,
  [62] = 53,
  [63] = 52,
  [64] = 58,
  [65] = 53,
  [66] = 52,
  [67] = 54,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 55,
  [73] = 56,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 56,
  [79] = 55,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 58,
  [89] = 59,
  [90] = 53,
  [91] = 91,
  [92] = 54,
  [93] = 52,
  [94] = 58,
  [95] = 61,
  [96] = 61,
  [97] = 59,
  [98] = 71,
  [99] = 80,
  [100] = 69,
  [101] = 85,
  [102] = 84,
  [103] = 86,
  [104] = 68,
  [105] = 83,
  [106] = 85,
  [107] = 76,
  [108] = 87,
  [109] = 84,
  [110] = 82,
  [111] = 77,
  [112] = 77,
  [113] = 76,
  [114] = 82,
  [115] = 74,
  [116] = 70,
  [117] = 87,
  [118] = 83,
  [119] = 75,
  [120] = 68,
  [121] = 121,
  [122] = 86,
  [123] = 80,
  [124] = 81,
  [125] = 56,
  [126] = 74,
  [127] = 75,
  [128] = 70,
  [129] = 55,
  [130] = 71,
  [131] = 81,
  [132] = 59,
  [133] = 61,
  [134] = 71,
  [135] = 83,
  [136] = 121,
  [137] = 81,
  [138] = 70,
  [139] = 80,
  [140] = 86,
  [141] = 84,
  [142] = 85,
  [143] = 75,
  [144] = 82,
  [145] = 74,
  [146] = 77,
  [147] = 87,
  [148] = 76,
  [149] = 68,
  [150] = 150,
  [151] = 150,
  [152] = 150,
  [153] = 153,
  [154] = 153,
  [155] = 155,
  [156] = 156,
  [157] = 155,
  [158] = 158,
  [159] = 156,
  [160] = 158,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 164,
  [166] = 166,
  [167] = 162,
  [168] = 162,
  [169] = 164,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 175,
  [177] = 174,
  [178] = 178,
  [179] = 179,
  [180] = 179,
  [181] = 181,
  [182] = 182,
  [183] = 182,
  [184] = 178,
  [185] = 181,
  [186] = 186,
  [187] = 186,
  [188] = 186,
  [189] = 74,
  [190] = 70,
  [191] = 74,
  [192] = 71,
  [193] = 193,
  [194] = 193,
  [195] = 195,
  [196] = 196,
  [197] = 70,
  [198] = 196,
  [199] = 195,
  [200] = 71,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 203,
  [208] = 206,
  [209] = 209,
  [210] = 205,
  [211] = 204,
  [212] = 201,
  [213] = 202,
  [214] = 70,
  [215] = 71,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 217,
  [220] = 216,
  [221] = 201,
  [222] = 71,
  [223] = 74,
  [224] = 70,
  [225] = 202,
  [226] = 74,
  [227] = 217,
  [228] = 209,
  [229] = 74,
  [230] = 70,
  [231] = 204,
  [232] = 216,
  [233] = 209,
  [234] = 205,
  [235] = 206,
  [236] = 203,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 239,
  [241] = 241,
  [242] = 242,
  [243] = 242,
  [244] = 244,
  [245] = 242,
  [246] = 242,
  [247] = 244,
  [248] = 244,
  [249] = 242,
  [250] = 250,
  [251] = 242,
  [252] = 244,
  [253] = 242,
  [254] = 244,
  [255] = 244,
  [256] = 244,
  [257] = 242,
  [258] = 244,
  [259] = 244,
  [260] = 244,
  [261] = 244,
  [262] = 242,
  [263] = 244,
  [264] = 242,
  [265] = 242,
  [266] = 242,
  [267] = 74,
  [268] = 71,
  [269] = 70,
  [270] = 270,
  [271] = 271,
  [272] = 70,
  [273] = 74,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 74,
  [283] = 283,
  [284] = 284,
  [285] = 281,
  [286] = 286,
  [287] = 281,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 291,
  [294] = 286,
  [295] = 70,
  [296] = 296,
  [297] = 281,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 301,
  [307] = 302,
  [308] = 305,
  [309] = 299,
  [310] = 300,
  [311] = 311,
  [312] = 312,
  [313] = 300,
  [314] = 311,
  [315] = 312,
  [316] = 299,
  [317] = 317,
  [318] = 311,
  [319] = 317,
  [320] = 302,
  [321] = 301,
  [322] = 305,
  [323] = 323,
  [324] = 312,
  [325] = 317,
  [326] = 323,
  [327] = 327,
  [328] = 302,
  [329] = 323,
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

static inline bool aux_sym_math_delimited_left_token1_character_set_1(int32_t c) {
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

static inline bool aux_sym_math_delimited_left_token1_character_set_2(int32_t c) {
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

static inline bool aux_sym_math_delimited_right_token1_character_set_1(int32_t c) {
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

static inline bool aux_sym_math_delimited_right_token1_character_set_2(int32_t c) {
  return (c < 10099
    ? (c < 8969
      ? (c < '}'
        ? c == ']'
        : c <= '}')
      : (c <= 8971 || (c >= 8989 && c <= 8991)))
    : (c <= 10099 || (c < 10713
      ? (c < 10628
        ? (c >= 10215 && c <= 10223)
        : c <= 10648)
      : (c <= 10715 || c == 10749))));
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
      if (eof) ADVANCE(56);
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(179);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(178);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '@') ADVANCE(73);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 8730) ADVANCE(142);
      if (lookahead == 8731) ADVANCE(144);
      if (lookahead == 8732) ADVANCE(146);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(178);
      if (lookahead == '|' ||
          lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(124);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(117);
      if (lookahead == '}' ||
          (8969 <= lookahead && lookahead <= 8971) ||
          (8989 <= lookahead && lookahead <= 8991) ||
          lookahead == 10099 ||
          (10215 <= lookahead && lookahead <= 10223) ||
          (10628 <= lookahead && lookahead <= 10648) ||
          (10713 <= lookahead && lookahead <= 10715) ||
          lookahead == 10749) ADVANCE(121);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(182);
      if (lookahead == '\r') ADVANCE(179);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(178);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_1(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_1(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_1(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '$') ADVANCE(77);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_2(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_2(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '(') ADVANCE(133);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(131);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_2(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(153);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == '_') ADVANCE(149);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == ')') ADVANCE(135);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == ',') ADVANCE(137);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == ';') ADVANCE(139);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(113);
      if (lookahead == '*') ADVANCE(111);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '<') ADVANCE(157);
      if (lookahead == '=') ADVANCE(163);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(166);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '~') ADVANCE(165);
      if (lookahead == 8730) ADVANCE(143);
      if (lookahead == 8731) ADVANCE(145);
      if (lookahead == 8732) ADVANCE(147);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == 6277 ||
          lookahead == 6278) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(84);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(140);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(82);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(99);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(107);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(108);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '}') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == '}') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == '}') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(68);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '@') ADVANCE(73);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == '~') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(68);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '@') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 46:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(68);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '@') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == '~') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(47);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 48:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(61);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(63);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 51:
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 52:
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 53:
      if (eof) ADVANCE(56);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(68);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == ',') ADVANCE(136);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ';') ADVANCE(138);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '@') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(68);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '@') ADVANCE(73);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(68);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '@') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(176);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '?') ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_linebreak);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_linebreak);
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape);
      if (lookahead == '{') ADVANCE(50);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_escape);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_text_shorthand);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_text_shorthand);
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_smart_quote);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(47);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_heading_start);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH_GT_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH_GT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      if (lookahead == '>') ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_DASH_LT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT_DASH_GT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT_LT_DASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_EQ_EQ);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT_TILDE_TILDE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '=') ADVANCE(93);
      if (lookahead == '>') ADVANCE(92);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '<') ADVANCE(91);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '<') ADVANCE(88);
      if (lookahead == '>') ADVANCE(89);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_TILDE);
      if (lookahead == '~') ADVANCE(94);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT_DASH_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ_COLON);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PIPE_DASH_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE_GT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TILDE_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '>') ADVANCE(79);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACK_PIPE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_math_delimited_left_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_math_delimited_left_token1);
      if (lookahead == '|') ADVANCE(116);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_math_delimited_left_token1);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_math_delimited_right_token1);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_math_delimited_right_token1);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_math_fence_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_math_fence_token1);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == '|') ADVANCE(123);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_math_fence_token1);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '|') ADVANCE(123);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_math_fence_token1);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_math_align_point);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_math_align_point);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(23);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '=') ADVANCE(81);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_2);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_3);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym__);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(176);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(176);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_math_text);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(21);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(176);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '~') ADVANCE(98);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '>') ADVANCE(105);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '.') ADVANCE(23);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '=') ADVANCE(81);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(102);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '=') ADVANCE(83);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == '~') ADVANCE(36);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_math_text);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(61);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(64);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(63);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_math_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == 1160 ||
          lookahead == 1161 ||
          lookahead == 6846 ||
          (8413 <= lookahead && lookahead <= 8416) ||
          (8418 <= lookahead && lookahead <= 8420) ||
          (42608 <= lookahead && lookahead <= 42610)) ADVANCE(169);
      if (sym_math_text_character_set_4(lookahead)) ADVANCE(168);
      if (sym_math_ident_character_set_1(lookahead)) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_math_text);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_math_text);
      if (sym_math_ident_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_math_ident);
      if (sym_math_ident_character_set_2(lookahead)) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(176);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_block_comment_token2);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__space_same_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(184);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 53, .external_lex_state = 2},
  [2] = {.lex_state = 14, .external_lex_state = 3},
  [3] = {.lex_state = 14, .external_lex_state = 3},
  [4] = {.lex_state = 17, .external_lex_state = 3},
  [5] = {.lex_state = 17, .external_lex_state = 3},
  [6] = {.lex_state = 14, .external_lex_state = 3},
  [7] = {.lex_state = 17, .external_lex_state = 3},
  [8] = {.lex_state = 15, .external_lex_state = 3},
  [9] = {.lex_state = 17, .external_lex_state = 3},
  [10] = {.lex_state = 14, .external_lex_state = 3},
  [11] = {.lex_state = 15, .external_lex_state = 3},
  [12] = {.lex_state = 14, .external_lex_state = 3},
  [13] = {.lex_state = 6, .external_lex_state = 3},
  [14] = {.lex_state = 14, .external_lex_state = 3},
  [15] = {.lex_state = 6, .external_lex_state = 3},
  [16] = {.lex_state = 6, .external_lex_state = 3},
  [17] = {.lex_state = 15, .external_lex_state = 3},
  [18] = {.lex_state = 15, .external_lex_state = 3},
  [19] = {.lex_state = 15, .external_lex_state = 3},
  [20] = {.lex_state = 6, .external_lex_state = 3},
  [21] = {.lex_state = 15, .external_lex_state = 3},
  [22] = {.lex_state = 6, .external_lex_state = 3},
  [23] = {.lex_state = 17, .external_lex_state = 3},
  [24] = {.lex_state = 6, .external_lex_state = 3},
  [25] = {.lex_state = 15, .external_lex_state = 3},
  [26] = {.lex_state = 7, .external_lex_state = 3},
  [27] = {.lex_state = 7, .external_lex_state = 3},
  [28] = {.lex_state = 17, .external_lex_state = 3},
  [29] = {.lex_state = 7, .external_lex_state = 3},
  [30] = {.lex_state = 7, .external_lex_state = 3},
  [31] = {.lex_state = 17, .external_lex_state = 3},
  [32] = {.lex_state = 17, .external_lex_state = 3},
  [33] = {.lex_state = 8, .external_lex_state = 3},
  [34] = {.lex_state = 8, .external_lex_state = 3},
  [35] = {.lex_state = 8, .external_lex_state = 3},
  [36] = {.lex_state = 8, .external_lex_state = 3},
  [37] = {.lex_state = 8, .external_lex_state = 3},
  [38] = {.lex_state = 18, .external_lex_state = 3},
  [39] = {.lex_state = 18, .external_lex_state = 3},
  [40] = {.lex_state = 18, .external_lex_state = 3},
  [41] = {.lex_state = 18, .external_lex_state = 3},
  [42] = {.lex_state = 18, .external_lex_state = 3},
  [43] = {.lex_state = 18, .external_lex_state = 3},
  [44] = {.lex_state = 18, .external_lex_state = 3},
  [45] = {.lex_state = 18, .external_lex_state = 3},
  [46] = {.lex_state = 18, .external_lex_state = 3},
  [47] = {.lex_state = 18, .external_lex_state = 3},
  [48] = {.lex_state = 18, .external_lex_state = 3},
  [49] = {.lex_state = 18, .external_lex_state = 3},
  [50] = {.lex_state = 18, .external_lex_state = 3},
  [51] = {.lex_state = 18, .external_lex_state = 3},
  [52] = {.lex_state = 11, .external_lex_state = 3},
  [53] = {.lex_state = 11, .external_lex_state = 3},
  [54] = {.lex_state = 11, .external_lex_state = 3},
  [55] = {.lex_state = 11, .external_lex_state = 3},
  [56] = {.lex_state = 11, .external_lex_state = 3},
  [57] = {.lex_state = 13, .external_lex_state = 3},
  [58] = {.lex_state = 14, .external_lex_state = 3},
  [59] = {.lex_state = 9, .external_lex_state = 3},
  [60] = {.lex_state = 12, .external_lex_state = 3},
  [61] = {.lex_state = 14, .external_lex_state = 3},
  [62] = {.lex_state = 12, .external_lex_state = 3},
  [63] = {.lex_state = 12, .external_lex_state = 3},
  [64] = {.lex_state = 14, .external_lex_state = 3},
  [65] = {.lex_state = 4, .external_lex_state = 3},
  [66] = {.lex_state = 4, .external_lex_state = 3},
  [67] = {.lex_state = 4, .external_lex_state = 3},
  [68] = {.lex_state = 14, .external_lex_state = 3},
  [69] = {.lex_state = 14, .external_lex_state = 3},
  [70] = {.lex_state = 14, .external_lex_state = 3},
  [71] = {.lex_state = 14, .external_lex_state = 3},
  [72] = {.lex_state = 4, .external_lex_state = 3},
  [73] = {.lex_state = 4, .external_lex_state = 3},
  [74] = {.lex_state = 14, .external_lex_state = 3},
  [75] = {.lex_state = 14, .external_lex_state = 3},
  [76] = {.lex_state = 14, .external_lex_state = 3},
  [77] = {.lex_state = 14, .external_lex_state = 3},
  [78] = {.lex_state = 12, .external_lex_state = 3},
  [79] = {.lex_state = 12, .external_lex_state = 3},
  [80] = {.lex_state = 14, .external_lex_state = 3},
  [81] = {.lex_state = 14, .external_lex_state = 3},
  [82] = {.lex_state = 14, .external_lex_state = 3},
  [83] = {.lex_state = 14, .external_lex_state = 3},
  [84] = {.lex_state = 14, .external_lex_state = 3},
  [85] = {.lex_state = 14, .external_lex_state = 3},
  [86] = {.lex_state = 14, .external_lex_state = 3},
  [87] = {.lex_state = 14, .external_lex_state = 3},
  [88] = {.lex_state = 6, .external_lex_state = 3},
  [89] = {.lex_state = 2, .external_lex_state = 3},
  [90] = {.lex_state = 5, .external_lex_state = 3},
  [91] = {.lex_state = 16, .external_lex_state = 3},
  [92] = {.lex_state = 5, .external_lex_state = 3},
  [93] = {.lex_state = 5, .external_lex_state = 3},
  [94] = {.lex_state = 6, .external_lex_state = 3},
  [95] = {.lex_state = 15, .external_lex_state = 3},
  [96] = {.lex_state = 6, .external_lex_state = 3},
  [97] = {.lex_state = 10, .external_lex_state = 3},
  [98] = {.lex_state = 6, .external_lex_state = 3},
  [99] = {.lex_state = 6, .external_lex_state = 3},
  [100] = {.lex_state = 6, .external_lex_state = 3},
  [101] = {.lex_state = 6, .external_lex_state = 3},
  [102] = {.lex_state = 6, .external_lex_state = 3},
  [103] = {.lex_state = 6, .external_lex_state = 3},
  [104] = {.lex_state = 6, .external_lex_state = 3},
  [105] = {.lex_state = 6, .external_lex_state = 3},
  [106] = {.lex_state = 15, .external_lex_state = 3},
  [107] = {.lex_state = 15, .external_lex_state = 3},
  [108] = {.lex_state = 6, .external_lex_state = 3},
  [109] = {.lex_state = 15, .external_lex_state = 3},
  [110] = {.lex_state = 6, .external_lex_state = 3},
  [111] = {.lex_state = 6, .external_lex_state = 3},
  [112] = {.lex_state = 15, .external_lex_state = 3},
  [113] = {.lex_state = 6, .external_lex_state = 3},
  [114] = {.lex_state = 15, .external_lex_state = 3},
  [115] = {.lex_state = 15, .external_lex_state = 3},
  [116] = {.lex_state = 15, .external_lex_state = 3},
  [117] = {.lex_state = 15, .external_lex_state = 3},
  [118] = {.lex_state = 15, .external_lex_state = 3},
  [119] = {.lex_state = 6, .external_lex_state = 3},
  [120] = {.lex_state = 15, .external_lex_state = 3},
  [121] = {.lex_state = 15, .external_lex_state = 3},
  [122] = {.lex_state = 15, .external_lex_state = 3},
  [123] = {.lex_state = 15, .external_lex_state = 3},
  [124] = {.lex_state = 15, .external_lex_state = 3},
  [125] = {.lex_state = 5, .external_lex_state = 3},
  [126] = {.lex_state = 6, .external_lex_state = 3},
  [127] = {.lex_state = 15, .external_lex_state = 3},
  [128] = {.lex_state = 6, .external_lex_state = 3},
  [129] = {.lex_state = 5, .external_lex_state = 3},
  [130] = {.lex_state = 15, .external_lex_state = 3},
  [131] = {.lex_state = 6, .external_lex_state = 3},
  [132] = {.lex_state = 3, .external_lex_state = 3},
  [133] = {.lex_state = 7, .external_lex_state = 3},
  [134] = {.lex_state = 7, .external_lex_state = 3},
  [135] = {.lex_state = 7, .external_lex_state = 3},
  [136] = {.lex_state = 7, .external_lex_state = 3},
  [137] = {.lex_state = 7, .external_lex_state = 3},
  [138] = {.lex_state = 7, .external_lex_state = 3},
  [139] = {.lex_state = 7, .external_lex_state = 3},
  [140] = {.lex_state = 7, .external_lex_state = 3},
  [141] = {.lex_state = 7, .external_lex_state = 3},
  [142] = {.lex_state = 7, .external_lex_state = 3},
  [143] = {.lex_state = 7, .external_lex_state = 3},
  [144] = {.lex_state = 7, .external_lex_state = 3},
  [145] = {.lex_state = 7, .external_lex_state = 3},
  [146] = {.lex_state = 7, .external_lex_state = 3},
  [147] = {.lex_state = 7, .external_lex_state = 3},
  [148] = {.lex_state = 7, .external_lex_state = 3},
  [149] = {.lex_state = 7, .external_lex_state = 3},
  [150] = {.lex_state = 45, .external_lex_state = 2},
  [151] = {.lex_state = 45, .external_lex_state = 2},
  [152] = {.lex_state = 45, .external_lex_state = 2},
  [153] = {.lex_state = 53, .external_lex_state = 2},
  [154] = {.lex_state = 45, .external_lex_state = 2},
  [155] = {.lex_state = 55, .external_lex_state = 2},
  [156] = {.lex_state = 46, .external_lex_state = 2},
  [157] = {.lex_state = 46, .external_lex_state = 2},
  [158] = {.lex_state = 46, .external_lex_state = 2},
  [159] = {.lex_state = 55, .external_lex_state = 2},
  [160] = {.lex_state = 55, .external_lex_state = 2},
  [161] = {.lex_state = 55, .external_lex_state = 2},
  [162] = {.lex_state = 55, .external_lex_state = 4},
  [163] = {.lex_state = 55, .external_lex_state = 5},
  [164] = {.lex_state = 55, .external_lex_state = 6},
  [165] = {.lex_state = 55, .external_lex_state = 6},
  [166] = {.lex_state = 55, .external_lex_state = 2},
  [167] = {.lex_state = 55, .external_lex_state = 4},
  [168] = {.lex_state = 55, .external_lex_state = 4},
  [169] = {.lex_state = 55, .external_lex_state = 6},
  [170] = {.lex_state = 55, .external_lex_state = 2},
  [171] = {.lex_state = 55, .external_lex_state = 2},
  [172] = {.lex_state = 55, .external_lex_state = 5},
  [173] = {.lex_state = 55, .external_lex_state = 7},
  [174] = {.lex_state = 53, .external_lex_state = 2},
  [175] = {.lex_state = 53, .external_lex_state = 2},
  [176] = {.lex_state = 45, .external_lex_state = 2},
  [177] = {.lex_state = 45, .external_lex_state = 2},
  [178] = {.lex_state = 53, .external_lex_state = 2},
  [179] = {.lex_state = 53, .external_lex_state = 2},
  [180] = {.lex_state = 45, .external_lex_state = 2},
  [181] = {.lex_state = 53, .external_lex_state = 2},
  [182] = {.lex_state = 53, .external_lex_state = 2},
  [183] = {.lex_state = 45, .external_lex_state = 2},
  [184] = {.lex_state = 45, .external_lex_state = 2},
  [185] = {.lex_state = 45, .external_lex_state = 2},
  [186] = {.lex_state = 44, .external_lex_state = 2},
  [187] = {.lex_state = 54, .external_lex_state = 2},
  [188] = {.lex_state = 54, .external_lex_state = 5},
  [189] = {.lex_state = 53, .external_lex_state = 2},
  [190] = {.lex_state = 45, .external_lex_state = 2},
  [191] = {.lex_state = 45, .external_lex_state = 2},
  [192] = {.lex_state = 45, .external_lex_state = 2},
  [193] = {.lex_state = 53, .external_lex_state = 2},
  [194] = {.lex_state = 45, .external_lex_state = 2},
  [195] = {.lex_state = 45, .external_lex_state = 2},
  [196] = {.lex_state = 45, .external_lex_state = 2},
  [197] = {.lex_state = 53, .external_lex_state = 2},
  [198] = {.lex_state = 53, .external_lex_state = 2},
  [199] = {.lex_state = 53, .external_lex_state = 2},
  [200] = {.lex_state = 53, .external_lex_state = 2},
  [201] = {.lex_state = 46, .external_lex_state = 2},
  [202] = {.lex_state = 55, .external_lex_state = 2},
  [203] = {.lex_state = 55, .external_lex_state = 2},
  [204] = {.lex_state = 46, .external_lex_state = 2},
  [205] = {.lex_state = 46, .external_lex_state = 2},
  [206] = {.lex_state = 46, .external_lex_state = 2},
  [207] = {.lex_state = 46, .external_lex_state = 2},
  [208] = {.lex_state = 55, .external_lex_state = 2},
  [209] = {.lex_state = 46, .external_lex_state = 2},
  [210] = {.lex_state = 55, .external_lex_state = 2},
  [211] = {.lex_state = 55, .external_lex_state = 2},
  [212] = {.lex_state = 55, .external_lex_state = 2},
  [213] = {.lex_state = 46, .external_lex_state = 2},
  [214] = {.lex_state = 46, .external_lex_state = 2},
  [215] = {.lex_state = 55, .external_lex_state = 2},
  [216] = {.lex_state = 55, .external_lex_state = 5},
  [217] = {.lex_state = 55, .external_lex_state = 5},
  [218] = {.lex_state = 55, .external_lex_state = 5},
  [219] = {.lex_state = 46, .external_lex_state = 2},
  [220] = {.lex_state = 46, .external_lex_state = 2},
  [221] = {.lex_state = 55, .external_lex_state = 5},
  [222] = {.lex_state = 46, .external_lex_state = 2},
  [223] = {.lex_state = 55, .external_lex_state = 5},
  [224] = {.lex_state = 55, .external_lex_state = 5},
  [225] = {.lex_state = 55, .external_lex_state = 5},
  [226] = {.lex_state = 55, .external_lex_state = 2},
  [227] = {.lex_state = 55, .external_lex_state = 2},
  [228] = {.lex_state = 55, .external_lex_state = 2},
  [229] = {.lex_state = 46, .external_lex_state = 2},
  [230] = {.lex_state = 55, .external_lex_state = 2},
  [231] = {.lex_state = 55, .external_lex_state = 5},
  [232] = {.lex_state = 55, .external_lex_state = 2},
  [233] = {.lex_state = 55, .external_lex_state = 5},
  [234] = {.lex_state = 55, .external_lex_state = 5},
  [235] = {.lex_state = 55, .external_lex_state = 5},
  [236] = {.lex_state = 55, .external_lex_state = 5},
  [237] = {.lex_state = 55, .external_lex_state = 2},
  [238] = {.lex_state = 55, .external_lex_state = 2},
  [239] = {.lex_state = 53, .external_lex_state = 3},
  [240] = {.lex_state = 53, .external_lex_state = 3},
  [241] = {.lex_state = 53, .external_lex_state = 3},
  [242] = {.lex_state = 1, .external_lex_state = 8},
  [243] = {.lex_state = 1, .external_lex_state = 8},
  [244] = {.lex_state = 1, .external_lex_state = 8},
  [245] = {.lex_state = 1, .external_lex_state = 8},
  [246] = {.lex_state = 1, .external_lex_state = 8},
  [247] = {.lex_state = 1, .external_lex_state = 8},
  [248] = {.lex_state = 1, .external_lex_state = 8},
  [249] = {.lex_state = 1, .external_lex_state = 8},
  [250] = {.lex_state = 1, .external_lex_state = 8},
  [251] = {.lex_state = 1, .external_lex_state = 8},
  [252] = {.lex_state = 1, .external_lex_state = 8},
  [253] = {.lex_state = 1, .external_lex_state = 8},
  [254] = {.lex_state = 1, .external_lex_state = 8},
  [255] = {.lex_state = 1, .external_lex_state = 8},
  [256] = {.lex_state = 1, .external_lex_state = 8},
  [257] = {.lex_state = 1, .external_lex_state = 8},
  [258] = {.lex_state = 1, .external_lex_state = 8},
  [259] = {.lex_state = 1, .external_lex_state = 8},
  [260] = {.lex_state = 1, .external_lex_state = 8},
  [261] = {.lex_state = 1, .external_lex_state = 8},
  [262] = {.lex_state = 1, .external_lex_state = 8},
  [263] = {.lex_state = 1, .external_lex_state = 8},
  [264] = {.lex_state = 1, .external_lex_state = 8},
  [265] = {.lex_state = 1, .external_lex_state = 8},
  [266] = {.lex_state = 1, .external_lex_state = 8},
  [267] = {.lex_state = 1, .external_lex_state = 8},
  [268] = {.lex_state = 53, .external_lex_state = 3},
  [269] = {.lex_state = 1, .external_lex_state = 8},
  [270] = {.lex_state = 53},
  [271] = {.lex_state = 53},
  [272] = {.lex_state = 53, .external_lex_state = 3},
  [273] = {.lex_state = 53, .external_lex_state = 3},
  [274] = {.lex_state = 53},
  [275] = {.lex_state = 53},
  [276] = {.lex_state = 53},
  [277] = {.lex_state = 53},
  [278] = {.lex_state = 53},
  [279] = {.lex_state = 53},
  [280] = {.lex_state = 53},
  [281] = {.lex_state = 19},
  [282] = {.lex_state = 53},
  [283] = {.lex_state = 53, .external_lex_state = 8},
  [284] = {.lex_state = 53},
  [285] = {.lex_state = 19},
  [286] = {.lex_state = 0, .external_lex_state = 9},
  [287] = {.lex_state = 19},
  [288] = {.lex_state = 0, .external_lex_state = 9},
  [289] = {.lex_state = 0, .external_lex_state = 9},
  [290] = {.lex_state = 53},
  [291] = {.lex_state = 53},
  [292] = {.lex_state = 0, .external_lex_state = 9},
  [293] = {.lex_state = 53},
  [294] = {.lex_state = 0, .external_lex_state = 9},
  [295] = {.lex_state = 53},
  [296] = {.lex_state = 53},
  [297] = {.lex_state = 19},
  [298] = {.lex_state = 53},
  [299] = {.lex_state = 0, .external_lex_state = 10},
  [300] = {.lex_state = 0, .external_lex_state = 11},
  [301] = {.lex_state = 45},
  [302] = {.lex_state = 53},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 53},
  [306] = {.lex_state = 45},
  [307] = {.lex_state = 53},
  [308] = {.lex_state = 53},
  [309] = {.lex_state = 0, .external_lex_state = 10},
  [310] = {.lex_state = 0, .external_lex_state = 11},
  [311] = {.lex_state = 53},
  [312] = {.lex_state = 47},
  [313] = {.lex_state = 0, .external_lex_state = 11},
  [314] = {.lex_state = 53},
  [315] = {.lex_state = 47},
  [316] = {.lex_state = 0, .external_lex_state = 10},
  [317] = {.lex_state = 0, .external_lex_state = 12},
  [318] = {.lex_state = 53},
  [319] = {.lex_state = 0, .external_lex_state = 12},
  [320] = {.lex_state = 53},
  [321] = {.lex_state = 45},
  [322] = {.lex_state = 53},
  [323] = {.lex_state = 52},
  [324] = {.lex_state = 47},
  [325] = {.lex_state = 0, .external_lex_state = 12},
  [326] = {.lex_state = 52},
  [327] = {.lex_state = 27},
  [328] = {.lex_state = 53},
  [329] = {.lex_state = 52},
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
    [ts_external_token__delim_emph] = true,
  },
  [5] = {
    [ts_external_token__token_eof] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
  },
  [6] = {
    [ts_external_token__space] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
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
    [ts_external_token__delim_emph] = true,
  },
  [11] = {
    [ts_external_token__delim_strong] = true,
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
    [aux_sym_math_delimited_left_token1] = ACTIONS(1),
    [aux_sym_math_delimited_right_token1] = ACTIONS(1),
    [aux_sym_math_fence_token1] = ACTIONS(1),
    [sym_math_align_point] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(303),
    [sym_markup] = STATE(304),
    [sym__markup_expr_base] = STATE(160),
    [sym__markup_expr_line_start_sof] = STATE(160),
    [aux_sym__markup_expr_line_start_content] = STATE(181),
    [sym__markup_expr_text] = STATE(160),
    [sym_link] = STATE(160),
    [sym_label] = STATE(160),
    [sym_reference] = STATE(160),
    [sym_strong] = STATE(160),
    [sym_emph] = STATE(160),
    [sym_heading] = STATE(294),
    [sym_equation] = STATE(160),
    [sym_block_comment] = STATE(193),
    [sym_space] = STATE(153),
    [aux_sym__markup_expr_line_start_sof_repeat1] = STATE(239),
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
    [sym_math] = STATE(58),
    [sym__math_expr] = STATE(14),
    [sym_math_shorthand] = STATE(14),
    [sym_math_delimited] = STATE(14),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_right] = STATE(106),
    [sym_math_delimited_fence] = STATE(14),
    [sym_math_fence] = STATE(6),
    [sym_math_field_access] = STATE(59),
    [sym_math_function_call] = STATE(14),
    [sym_math_root] = STATE(14),
    [sym_math_attach_below] = STATE(14),
    [sym_math_attach_above] = STATE(14),
    [sym_math_frac] = STATE(14),
    [sym__trivia] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_space] = STATE(14),
    [aux_sym_math_repeat1] = STATE(14),
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
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_RBRACK] = ACTIONS(43),
    [aux_sym_math_delimited_right_token1] = ACTIONS(45),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [aux_sym_math_fence_token1] = ACTIONS(49),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym__] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [sym_math_text] = ACTIONS(33),
    [sym_math_ident] = ACTIONS(55),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(31),
    [sym__newline] = ACTIONS(59),
  },
  [3] = {
    [sym_math] = STATE(64),
    [sym__math_expr] = STATE(14),
    [sym_math_shorthand] = STATE(14),
    [sym_math_delimited] = STATE(14),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_right] = STATE(85),
    [sym_math_delimited_fence] = STATE(14),
    [sym_math_fence] = STATE(6),
    [sym_math_field_access] = STATE(59),
    [sym_math_function_call] = STATE(14),
    [sym_math_root] = STATE(14),
    [sym_math_attach_below] = STATE(14),
    [sym_math_attach_above] = STATE(14),
    [sym_math_frac] = STATE(14),
    [sym__trivia] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_space] = STATE(14),
    [aux_sym_math_repeat1] = STATE(14),
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
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_RBRACK] = ACTIONS(61),
    [aux_sym_math_delimited_right_token1] = ACTIONS(63),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [aux_sym_math_fence_token1] = ACTIONS(49),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_COMMA] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym__] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [sym_math_text] = ACTIONS(33),
    [sym_math_ident] = ACTIONS(55),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(31),
    [sym__newline] = ACTIONS(59),
  },
  [4] = {
    [sym_math] = STATE(277),
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_args] = STATE(307),
    [sym__math_arg] = STATE(276),
    [sym_math_arg_named] = STATE(277),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__math_text_ident] = STATE(327),
    [sym__trivia] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym_space] = STATE(11),
    [aux_sym_math_repeat1] = STATE(32),
    [aux_sym_math_args_repeat1] = STATE(276),
    [sym_linebreak] = ACTIONS(65),
    [sym_escape] = ACTIONS(67),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(83),
    [sym_math_ident] = ACTIONS(85),
    [sym_string] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(87),
    [sym__newline] = ACTIONS(91),
  },
  [5] = {
    [sym_math] = STATE(277),
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_args] = STATE(302),
    [sym__math_arg] = STATE(276),
    [sym_math_arg_named] = STATE(277),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__math_text_ident] = STATE(327),
    [sym__trivia] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym_space] = STATE(11),
    [aux_sym_math_repeat1] = STATE(32),
    [aux_sym_math_args_repeat1] = STATE(276),
    [sym_linebreak] = ACTIONS(65),
    [sym_escape] = ACTIONS(67),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(83),
    [sym_math_ident] = ACTIONS(85),
    [sym_string] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(87),
    [sym__newline] = ACTIONS(91),
  },
  [6] = {
    [sym_math] = STATE(61),
    [sym__math_expr] = STATE(14),
    [sym_math_shorthand] = STATE(14),
    [sym_math_delimited] = STATE(14),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(14),
    [sym_math_fence] = STATE(10),
    [sym_math_field_access] = STATE(59),
    [sym_math_function_call] = STATE(14),
    [sym_math_root] = STATE(14),
    [sym_math_attach_below] = STATE(14),
    [sym_math_attach_above] = STATE(14),
    [sym_math_frac] = STATE(14),
    [sym__trivia] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_space] = STATE(14),
    [aux_sym_math_repeat1] = STATE(14),
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
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_RBRACK] = ACTIONS(95),
    [aux_sym_math_delimited_right_token1] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [aux_sym_math_fence_token1] = ACTIONS(49),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [sym_math_text] = ACTIONS(33),
    [sym_math_ident] = ACTIONS(55),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(31),
    [sym__newline] = ACTIONS(59),
  },
  [7] = {
    [sym_math] = STATE(277),
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_args] = STATE(320),
    [sym__math_arg] = STATE(276),
    [sym_math_arg_named] = STATE(277),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__math_text_ident] = STATE(327),
    [sym__trivia] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym_space] = STATE(11),
    [aux_sym_math_repeat1] = STATE(32),
    [aux_sym_math_args_repeat1] = STATE(276),
    [sym_linebreak] = ACTIONS(65),
    [sym_escape] = ACTIONS(67),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(83),
    [sym_math_ident] = ACTIONS(85),
    [sym_string] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(87),
    [sym__newline] = ACTIONS(91),
  },
  [8] = {
    [sym_math] = STATE(284),
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_arg_named] = STATE(284),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__math_text_ident] = STATE(327),
    [sym__trivia] = STATE(121),
    [sym_block_comment] = STATE(121),
    [sym_space] = STATE(121),
    [aux_sym_math_repeat1] = STATE(32),
    [sym_linebreak] = ACTIONS(65),
    [sym_escape] = ACTIONS(67),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [sym_math_text] = ACTIONS(83),
    [sym_math_ident] = ACTIONS(85),
    [sym_string] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(65),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(65),
    [sym__newline] = ACTIONS(91),
  },
  [9] = {
    [sym_math] = STATE(277),
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_args] = STATE(328),
    [sym__math_arg] = STATE(276),
    [sym_math_arg_named] = STATE(277),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__math_text_ident] = STATE(327),
    [sym__trivia] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym_space] = STATE(11),
    [aux_sym_math_repeat1] = STATE(32),
    [aux_sym_math_args_repeat1] = STATE(276),
    [sym_linebreak] = ACTIONS(65),
    [sym_escape] = ACTIONS(67),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(83),
    [sym_math_ident] = ACTIONS(85),
    [sym_string] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(87),
    [sym__newline] = ACTIONS(91),
  },
  [10] = {
    [sym_math] = STATE(61),
    [sym__math_expr] = STATE(14),
    [sym_math_shorthand] = STATE(14),
    [sym_math_delimited] = STATE(14),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(14),
    [sym_math_fence] = STATE(10),
    [sym_math_field_access] = STATE(59),
    [sym_math_function_call] = STATE(14),
    [sym_math_root] = STATE(14),
    [sym_math_attach_below] = STATE(14),
    [sym_math_attach_above] = STATE(14),
    [sym_math_frac] = STATE(14),
    [sym__trivia] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_space] = STATE(14),
    [aux_sym_math_repeat1] = STATE(14),
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
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_RBRACK] = ACTIONS(107),
    [aux_sym_math_delimited_right_token1] = ACTIONS(110),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [aux_sym_math_fence_token1] = ACTIONS(49),
    [sym_math_align_point] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [sym_math_text] = ACTIONS(33),
    [sym_math_ident] = ACTIONS(55),
    [sym_string] = ACTIONS(31),
    [sym_line_comment] = ACTIONS(31),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(31),
    [sym__newline] = ACTIONS(59),
  },
  [11] = {
    [sym_math] = STATE(280),
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_arg_named] = STATE(280),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__math_text_ident] = STATE(327),
    [sym__trivia] = STATE(121),
    [sym_block_comment] = STATE(121),
    [sym_space] = STATE(121),
    [aux_sym_math_repeat1] = STATE(32),
    [sym_linebreak] = ACTIONS(65),
    [sym_escape] = ACTIONS(67),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_SEMI] = ACTIONS(103),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [sym_math_text] = ACTIONS(83),
    [sym_math_ident] = ACTIONS(85),
    [sym_string] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(65),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(65),
    [sym__newline] = ACTIONS(91),
  },
  [12] = {
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(12),
    [sym_math_fence] = STATE(6),
    [sym_math_field_access] = STATE(59),
    [sym_math_function_call] = STATE(12),
    [sym_math_root] = STATE(12),
    [sym_math_attach_below] = STATE(12),
    [sym_math_attach_above] = STATE(12),
    [sym_math_frac] = STATE(12),
    [sym__trivia] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_space] = STATE(12),
    [aux_sym_math_repeat1] = STATE(12),
    [sym_linebreak] = ACTIONS(113),
    [sym_escape] = ACTIONS(116),
    [anon_sym_DASH_GT_GT] = ACTIONS(119),
    [anon_sym_DASH_GT] = ACTIONS(122),
    [anon_sym_DASH_DASH_GT] = ACTIONS(119),
    [anon_sym_COLON_EQ] = ACTIONS(119),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(119),
    [anon_sym_BANG_EQ] = ACTIONS(119),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(119),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(119),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(119),
    [anon_sym_LT_DASH_DASH] = ACTIONS(122),
    [anon_sym_LT_DASH_LT] = ACTIONS(119),
    [anon_sym_LT_DASH_GT] = ACTIONS(119),
    [anon_sym_LT_LT_DASH] = ACTIONS(119),
    [anon_sym_LT_LT_LT] = ACTIONS(119),
    [anon_sym_LT_EQ_GT] = ACTIONS(119),
    [anon_sym_LT_EQ_EQ] = ACTIONS(122),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(119),
    [anon_sym_LT_EQ] = ACTIONS(122),
    [anon_sym_LT_LT] = ACTIONS(122),
    [anon_sym_LT_DASH] = ACTIONS(122),
    [anon_sym_LT_TILDE] = ACTIONS(122),
    [anon_sym_GT_DASH_GT] = ACTIONS(119),
    [anon_sym_GT_GT_GT] = ACTIONS(119),
    [anon_sym_EQ_EQ_GT] = ACTIONS(119),
    [anon_sym_EQ_GT] = ACTIONS(119),
    [anon_sym_EQ_COLON] = ACTIONS(119),
    [anon_sym_GT_EQ] = ACTIONS(119),
    [anon_sym_GT_GT] = ACTIONS(122),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(119),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(119),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(119),
    [anon_sym_TILDE_GT] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_LBRACK_PIPE] = ACTIONS(125),
    [aux_sym_math_delimited_left_token1] = ACTIONS(128),
    [anon_sym_PIPE_RBRACK] = ACTIONS(131),
    [aux_sym_math_delimited_right_token1] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(135),
    [aux_sym_math_fence_token1] = ACTIONS(138),
    [sym_math_align_point] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_] = ACTIONS(141),
    [anon_sym_2] = ACTIONS(141),
    [anon_sym_3] = ACTIONS(141),
    [anon_sym__] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [sym_math_text] = ACTIONS(116),
    [sym_math_ident] = ACTIONS(144),
    [sym_string] = ACTIONS(113),
    [sym_line_comment] = ACTIONS(113),
    [anon_sym_SLASH_STAR] = ACTIONS(147),
    [sym__space] = ACTIONS(150),
    [sym_parbreak] = ACTIONS(113),
    [sym__newline] = ACTIONS(150),
  },
  [13] = {
    [sym_math] = STATE(94),
    [sym__math_expr] = STATE(24),
    [sym_math_shorthand] = STATE(24),
    [sym_math_delimited] = STATE(24),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_right] = STATE(101),
    [sym_math_delimited_fence] = STATE(24),
    [sym_math_fence] = STATE(16),
    [sym_math_field_access] = STATE(89),
    [sym_math_function_call] = STATE(24),
    [sym_math_root] = STATE(24),
    [sym_math_attach_below] = STATE(24),
    [sym_math_attach_above] = STATE(24),
    [sym_math_frac] = STATE(24),
    [sym__trivia] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_space] = STATE(24),
    [aux_sym_math_repeat1] = STATE(24),
    [sym_linebreak] = ACTIONS(153),
    [sym_escape] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_DASH_GT_GT] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_COLON_EQ] = ACTIONS(157),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH] = ACTIONS(159),
    [anon_sym_LT_DASH_LT] = ACTIONS(157),
    [anon_sym_LT_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_LT_DASH] = ACTIONS(157),
    [anon_sym_LT_LT_LT] = ACTIONS(157),
    [anon_sym_LT_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ] = ACTIONS(159),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_LT_DASH] = ACTIONS(159),
    [anon_sym_LT_TILDE] = ACTIONS(159),
    [anon_sym_GT_DASH_GT] = ACTIONS(157),
    [anon_sym_GT_GT_GT] = ACTIONS(157),
    [anon_sym_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_COLON] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(157),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(157),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(157),
    [anon_sym_TILDE_GT] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_RBRACK] = ACTIONS(165),
    [aux_sym_math_delimited_right_token1] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [aux_sym_math_fence_token1] = ACTIONS(171),
    [sym_math_align_point] = ACTIONS(155),
    [anon_sym_] = ACTIONS(173),
    [anon_sym_2] = ACTIONS(173),
    [anon_sym_3] = ACTIONS(173),
    [anon_sym__] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [sym_math_text] = ACTIONS(155),
    [sym_math_ident] = ACTIONS(175),
    [sym_string] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(153),
    [anon_sym_SLASH_STAR] = ACTIONS(177),
    [sym__space] = ACTIONS(179),
    [sym_parbreak] = ACTIONS(153),
    [sym__newline] = ACTIONS(179),
  },
  [14] = {
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(12),
    [sym_math_fence] = STATE(6),
    [sym_math_field_access] = STATE(59),
    [sym_math_function_call] = STATE(12),
    [sym_math_root] = STATE(12),
    [sym_math_attach_below] = STATE(12),
    [sym_math_attach_above] = STATE(12),
    [sym_math_frac] = STATE(12),
    [sym__trivia] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_space] = STATE(12),
    [aux_sym_math_repeat1] = STATE(12),
    [sym_linebreak] = ACTIONS(181),
    [sym_escape] = ACTIONS(183),
    [anon_sym_DASH_GT_GT] = ACTIONS(181),
    [anon_sym_DASH_GT] = ACTIONS(183),
    [anon_sym_DASH_DASH_GT] = ACTIONS(181),
    [anon_sym_COLON_EQ] = ACTIONS(181),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(181),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(181),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(181),
    [anon_sym_LT_DASH_DASH] = ACTIONS(183),
    [anon_sym_LT_DASH_LT] = ACTIONS(181),
    [anon_sym_LT_DASH_GT] = ACTIONS(181),
    [anon_sym_LT_LT_DASH] = ACTIONS(181),
    [anon_sym_LT_LT_LT] = ACTIONS(181),
    [anon_sym_LT_EQ_GT] = ACTIONS(181),
    [anon_sym_LT_EQ_EQ] = ACTIONS(183),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_LT_LT] = ACTIONS(183),
    [anon_sym_LT_DASH] = ACTIONS(183),
    [anon_sym_LT_TILDE] = ACTIONS(183),
    [anon_sym_GT_DASH_GT] = ACTIONS(181),
    [anon_sym_GT_GT_GT] = ACTIONS(181),
    [anon_sym_EQ_EQ_GT] = ACTIONS(181),
    [anon_sym_EQ_GT] = ACTIONS(181),
    [anon_sym_EQ_COLON] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(181),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(181),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(181),
    [anon_sym_TILDE_GT] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_LBRACK_PIPE] = ACTIONS(181),
    [aux_sym_math_delimited_left_token1] = ACTIONS(183),
    [anon_sym_PIPE_RBRACK] = ACTIONS(181),
    [aux_sym_math_delimited_right_token1] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [aux_sym_math_fence_token1] = ACTIONS(183),
    [sym_math_align_point] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_] = ACTIONS(183),
    [anon_sym_2] = ACTIONS(183),
    [anon_sym_3] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [sym_math_text] = ACTIONS(183),
    [sym_math_ident] = ACTIONS(183),
    [sym_string] = ACTIONS(181),
    [sym_line_comment] = ACTIONS(181),
    [anon_sym_SLASH_STAR] = ACTIONS(181),
    [sym__space] = ACTIONS(181),
    [sym_parbreak] = ACTIONS(181),
    [sym__newline] = ACTIONS(181),
  },
  [15] = {
    [sym_math] = STATE(88),
    [sym__math_expr] = STATE(24),
    [sym_math_shorthand] = STATE(24),
    [sym_math_delimited] = STATE(24),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_right] = STATE(142),
    [sym_math_delimited_fence] = STATE(24),
    [sym_math_fence] = STATE(16),
    [sym_math_field_access] = STATE(89),
    [sym_math_function_call] = STATE(24),
    [sym_math_root] = STATE(24),
    [sym_math_attach_below] = STATE(24),
    [sym_math_attach_above] = STATE(24),
    [sym_math_frac] = STATE(24),
    [sym__trivia] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_space] = STATE(24),
    [aux_sym_math_repeat1] = STATE(24),
    [sym_linebreak] = ACTIONS(153),
    [sym_escape] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(51),
    [anon_sym_DASH_GT_GT] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_COLON_EQ] = ACTIONS(157),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH] = ACTIONS(159),
    [anon_sym_LT_DASH_LT] = ACTIONS(157),
    [anon_sym_LT_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_LT_DASH] = ACTIONS(157),
    [anon_sym_LT_LT_LT] = ACTIONS(157),
    [anon_sym_LT_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ] = ACTIONS(159),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_LT_DASH] = ACTIONS(159),
    [anon_sym_LT_TILDE] = ACTIONS(159),
    [anon_sym_GT_DASH_GT] = ACTIONS(157),
    [anon_sym_GT_GT_GT] = ACTIONS(157),
    [anon_sym_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_COLON] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(157),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(157),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(157),
    [anon_sym_TILDE_GT] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_RBRACK] = ACTIONS(185),
    [aux_sym_math_delimited_right_token1] = ACTIONS(187),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [aux_sym_math_fence_token1] = ACTIONS(171),
    [sym_math_align_point] = ACTIONS(155),
    [anon_sym_] = ACTIONS(173),
    [anon_sym_2] = ACTIONS(173),
    [anon_sym_3] = ACTIONS(173),
    [anon_sym__] = ACTIONS(51),
    [anon_sym_CARET] = ACTIONS(51),
    [anon_sym_SLASH] = ACTIONS(51),
    [sym_math_text] = ACTIONS(155),
    [sym_math_ident] = ACTIONS(175),
    [sym_string] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(153),
    [anon_sym_SLASH_STAR] = ACTIONS(177),
    [sym__space] = ACTIONS(179),
    [sym_parbreak] = ACTIONS(153),
    [sym__newline] = ACTIONS(179),
  },
  [16] = {
    [sym_math] = STATE(96),
    [sym__math_expr] = STATE(24),
    [sym_math_shorthand] = STATE(24),
    [sym_math_delimited] = STATE(24),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(24),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(89),
    [sym_math_function_call] = STATE(24),
    [sym_math_root] = STATE(24),
    [sym_math_attach_below] = STATE(24),
    [sym_math_attach_above] = STATE(24),
    [sym_math_frac] = STATE(24),
    [sym__trivia] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_space] = STATE(24),
    [aux_sym_math_repeat1] = STATE(24),
    [sym_linebreak] = ACTIONS(153),
    [sym_escape] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DASH_GT_GT] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_COLON_EQ] = ACTIONS(157),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH] = ACTIONS(159),
    [anon_sym_LT_DASH_LT] = ACTIONS(157),
    [anon_sym_LT_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_LT_DASH] = ACTIONS(157),
    [anon_sym_LT_LT_LT] = ACTIONS(157),
    [anon_sym_LT_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ] = ACTIONS(159),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_LT_DASH] = ACTIONS(159),
    [anon_sym_LT_TILDE] = ACTIONS(159),
    [anon_sym_GT_DASH_GT] = ACTIONS(157),
    [anon_sym_GT_GT_GT] = ACTIONS(157),
    [anon_sym_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_COLON] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(157),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(157),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(157),
    [anon_sym_TILDE_GT] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_RBRACK] = ACTIONS(95),
    [aux_sym_math_delimited_right_token1] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [aux_sym_math_fence_token1] = ACTIONS(171),
    [sym_math_align_point] = ACTIONS(155),
    [anon_sym_] = ACTIONS(173),
    [anon_sym_2] = ACTIONS(173),
    [anon_sym_3] = ACTIONS(173),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [sym_math_text] = ACTIONS(155),
    [sym_math_ident] = ACTIONS(175),
    [sym_string] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(153),
    [anon_sym_SLASH_STAR] = ACTIONS(177),
    [sym__space] = ACTIONS(179),
    [sym_parbreak] = ACTIONS(153),
    [sym__newline] = ACTIONS(179),
  },
  [17] = {
    [sym_math] = STATE(95),
    [sym__math_expr] = STATE(21),
    [sym_math_shorthand] = STATE(21),
    [sym_math_delimited] = STATE(21),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(21),
    [sym_math_fence] = STATE(19),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(21),
    [sym_math_root] = STATE(21),
    [sym_math_attach_below] = STATE(21),
    [sym_math_attach_above] = STATE(21),
    [sym_math_frac] = STATE(21),
    [sym__trivia] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_space] = STATE(21),
    [aux_sym_math_repeat1] = STATE(21),
    [sym_linebreak] = ACTIONS(189),
    [sym_escape] = ACTIONS(191),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [sym_math_text] = ACTIONS(191),
    [sym_math_ident] = ACTIONS(193),
    [sym_string] = ACTIONS(189),
    [sym_line_comment] = ACTIONS(189),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(189),
    [sym__newline] = ACTIONS(91),
  },
  [18] = {
    [sym_math] = STATE(290),
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__trivia] = STATE(121),
    [sym_block_comment] = STATE(121),
    [sym_space] = STATE(121),
    [aux_sym_math_repeat1] = STATE(32),
    [sym_linebreak] = ACTIONS(65),
    [sym_escape] = ACTIONS(67),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(195),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [anon_sym__] = ACTIONS(103),
    [anon_sym_CARET] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [sym_math_text] = ACTIONS(67),
    [sym_math_ident] = ACTIONS(193),
    [sym_string] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(65),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(65),
    [sym__newline] = ACTIONS(91),
  },
  [19] = {
    [sym_math] = STATE(95),
    [sym__math_expr] = STATE(21),
    [sym_math_shorthand] = STATE(21),
    [sym_math_delimited] = STATE(21),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(21),
    [sym_math_fence] = STATE(19),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(21),
    [sym_math_root] = STATE(21),
    [sym_math_attach_below] = STATE(21),
    [sym_math_attach_above] = STATE(21),
    [sym_math_frac] = STATE(21),
    [sym__trivia] = STATE(21),
    [sym_block_comment] = STATE(21),
    [sym_space] = STATE(21),
    [aux_sym_math_repeat1] = STATE(21),
    [sym_linebreak] = ACTIONS(189),
    [sym_escape] = ACTIONS(191),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [sym_math_text] = ACTIONS(191),
    [sym_math_ident] = ACTIONS(193),
    [sym_string] = ACTIONS(189),
    [sym_line_comment] = ACTIONS(189),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(189),
    [sym__newline] = ACTIONS(91),
  },
  [20] = {
    [sym_math] = STATE(96),
    [sym__math_expr] = STATE(24),
    [sym_math_shorthand] = STATE(24),
    [sym_math_delimited] = STATE(24),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(24),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(89),
    [sym_math_function_call] = STATE(24),
    [sym_math_root] = STATE(24),
    [sym_math_attach_below] = STATE(24),
    [sym_math_attach_above] = STATE(24),
    [sym_math_frac] = STATE(24),
    [sym__trivia] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_space] = STATE(24),
    [aux_sym_math_repeat1] = STATE(24),
    [sym_linebreak] = ACTIONS(153),
    [sym_escape] = ACTIONS(155),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_DASH_GT_GT] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_COLON_EQ] = ACTIONS(157),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH] = ACTIONS(159),
    [anon_sym_LT_DASH_LT] = ACTIONS(157),
    [anon_sym_LT_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_LT_DASH] = ACTIONS(157),
    [anon_sym_LT_LT_LT] = ACTIONS(157),
    [anon_sym_LT_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ] = ACTIONS(159),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_LT_DASH] = ACTIONS(159),
    [anon_sym_LT_TILDE] = ACTIONS(159),
    [anon_sym_GT_DASH_GT] = ACTIONS(157),
    [anon_sym_GT_GT_GT] = ACTIONS(157),
    [anon_sym_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_COLON] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(157),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(157),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(157),
    [anon_sym_TILDE_GT] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_RBRACK] = ACTIONS(107),
    [aux_sym_math_delimited_right_token1] = ACTIONS(110),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [aux_sym_math_fence_token1] = ACTIONS(171),
    [sym_math_align_point] = ACTIONS(155),
    [anon_sym_] = ACTIONS(173),
    [anon_sym_2] = ACTIONS(173),
    [anon_sym_3] = ACTIONS(173),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [sym_math_text] = ACTIONS(155),
    [sym_math_ident] = ACTIONS(175),
    [sym_string] = ACTIONS(153),
    [sym_line_comment] = ACTIONS(153),
    [anon_sym_SLASH_STAR] = ACTIONS(177),
    [sym__space] = ACTIONS(179),
    [sym_parbreak] = ACTIONS(153),
    [sym__newline] = ACTIONS(179),
  },
  [21] = {
    [sym__math_expr] = STATE(25),
    [sym_math_shorthand] = STATE(25),
    [sym_math_delimited] = STATE(25),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(25),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(25),
    [sym_math_root] = STATE(25),
    [sym_math_attach_below] = STATE(25),
    [sym_math_attach_above] = STATE(25),
    [sym_math_frac] = STATE(25),
    [sym__trivia] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym_space] = STATE(25),
    [aux_sym_math_repeat1] = STATE(25),
    [sym_linebreak] = ACTIONS(181),
    [sym_escape] = ACTIONS(183),
    [anon_sym_DASH_GT_GT] = ACTIONS(181),
    [anon_sym_DASH_GT] = ACTIONS(183),
    [anon_sym_DASH_DASH_GT] = ACTIONS(181),
    [anon_sym_COLON_EQ] = ACTIONS(181),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(181),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(181),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(181),
    [anon_sym_LT_DASH_DASH] = ACTIONS(183),
    [anon_sym_LT_DASH_LT] = ACTIONS(181),
    [anon_sym_LT_DASH_GT] = ACTIONS(181),
    [anon_sym_LT_LT_DASH] = ACTIONS(181),
    [anon_sym_LT_LT_LT] = ACTIONS(181),
    [anon_sym_LT_EQ_GT] = ACTIONS(181),
    [anon_sym_LT_EQ_EQ] = ACTIONS(183),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_LT_LT] = ACTIONS(183),
    [anon_sym_LT_DASH] = ACTIONS(183),
    [anon_sym_LT_TILDE] = ACTIONS(183),
    [anon_sym_GT_DASH_GT] = ACTIONS(181),
    [anon_sym_GT_GT_GT] = ACTIONS(181),
    [anon_sym_EQ_EQ_GT] = ACTIONS(181),
    [anon_sym_EQ_GT] = ACTIONS(181),
    [anon_sym_EQ_COLON] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(181),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(181),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(181),
    [anon_sym_TILDE_GT] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_LBRACK_PIPE] = ACTIONS(181),
    [aux_sym_math_delimited_left_token1] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [aux_sym_math_fence_token1] = ACTIONS(183),
    [sym_math_align_point] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_] = ACTIONS(183),
    [anon_sym_2] = ACTIONS(183),
    [anon_sym_3] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [sym_math_text] = ACTIONS(183),
    [sym_math_ident] = ACTIONS(183),
    [sym_string] = ACTIONS(181),
    [sym_line_comment] = ACTIONS(181),
    [anon_sym_SLASH_STAR] = ACTIONS(181),
    [sym__space] = ACTIONS(181),
    [sym_parbreak] = ACTIONS(181),
    [sym__newline] = ACTIONS(181),
  },
  [22] = {
    [sym__math_expr] = STATE(22),
    [sym_math_shorthand] = STATE(22),
    [sym_math_delimited] = STATE(22),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(22),
    [sym_math_fence] = STATE(16),
    [sym_math_field_access] = STATE(89),
    [sym_math_function_call] = STATE(22),
    [sym_math_root] = STATE(22),
    [sym_math_attach_below] = STATE(22),
    [sym_math_attach_above] = STATE(22),
    [sym_math_frac] = STATE(22),
    [sym__trivia] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_space] = STATE(22),
    [aux_sym_math_repeat1] = STATE(22),
    [sym_linebreak] = ACTIONS(197),
    [sym_escape] = ACTIONS(200),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_DASH_GT_GT] = ACTIONS(203),
    [anon_sym_DASH_GT] = ACTIONS(206),
    [anon_sym_DASH_DASH_GT] = ACTIONS(203),
    [anon_sym_COLON_EQ] = ACTIONS(203),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(203),
    [anon_sym_BANG_EQ] = ACTIONS(203),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(203),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(203),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(203),
    [anon_sym_LT_DASH_DASH] = ACTIONS(206),
    [anon_sym_LT_DASH_LT] = ACTIONS(203),
    [anon_sym_LT_DASH_GT] = ACTIONS(203),
    [anon_sym_LT_LT_DASH] = ACTIONS(203),
    [anon_sym_LT_LT_LT] = ACTIONS(203),
    [anon_sym_LT_EQ_GT] = ACTIONS(203),
    [anon_sym_LT_EQ_EQ] = ACTIONS(206),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(203),
    [anon_sym_LT_EQ] = ACTIONS(206),
    [anon_sym_LT_LT] = ACTIONS(206),
    [anon_sym_LT_DASH] = ACTIONS(206),
    [anon_sym_LT_TILDE] = ACTIONS(206),
    [anon_sym_GT_DASH_GT] = ACTIONS(203),
    [anon_sym_GT_GT_GT] = ACTIONS(203),
    [anon_sym_EQ_EQ_GT] = ACTIONS(203),
    [anon_sym_EQ_GT] = ACTIONS(203),
    [anon_sym_EQ_COLON] = ACTIONS(203),
    [anon_sym_GT_EQ] = ACTIONS(203),
    [anon_sym_GT_GT] = ACTIONS(206),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(203),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(203),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(203),
    [anon_sym_TILDE_GT] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(206),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_LBRACK_PIPE] = ACTIONS(209),
    [aux_sym_math_delimited_left_token1] = ACTIONS(212),
    [anon_sym_PIPE_RBRACK] = ACTIONS(131),
    [aux_sym_math_delimited_right_token1] = ACTIONS(133),
    [anon_sym_PIPE_PIPE] = ACTIONS(215),
    [aux_sym_math_fence_token1] = ACTIONS(218),
    [sym_math_align_point] = ACTIONS(200),
    [anon_sym_] = ACTIONS(221),
    [anon_sym_2] = ACTIONS(221),
    [anon_sym_3] = ACTIONS(221),
    [anon_sym__] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [sym_math_text] = ACTIONS(200),
    [sym_math_ident] = ACTIONS(224),
    [sym_string] = ACTIONS(197),
    [sym_line_comment] = ACTIONS(197),
    [anon_sym_SLASH_STAR] = ACTIONS(227),
    [sym__space] = ACTIONS(230),
    [sym_parbreak] = ACTIONS(197),
    [sym__newline] = ACTIONS(230),
  },
  [23] = {
    [sym_math] = STATE(296),
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_arg_named] = STATE(296),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__math_text_ident] = STATE(327),
    [sym__trivia] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_space] = STATE(8),
    [aux_sym_math_repeat1] = STATE(32),
    [sym_linebreak] = ACTIONS(65),
    [sym_escape] = ACTIONS(67),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(83),
    [sym_math_ident] = ACTIONS(85),
    [sym_string] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(235),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(235),
    [sym__newline] = ACTIONS(91),
  },
  [24] = {
    [sym__math_expr] = STATE(22),
    [sym_math_shorthand] = STATE(22),
    [sym_math_delimited] = STATE(22),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(22),
    [sym_math_fence] = STATE(16),
    [sym_math_field_access] = STATE(89),
    [sym_math_function_call] = STATE(22),
    [sym_math_root] = STATE(22),
    [sym_math_attach_below] = STATE(22),
    [sym_math_attach_above] = STATE(22),
    [sym_math_frac] = STATE(22),
    [sym__trivia] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_space] = STATE(22),
    [aux_sym_math_repeat1] = STATE(22),
    [sym_linebreak] = ACTIONS(181),
    [sym_escape] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_DASH_GT_GT] = ACTIONS(181),
    [anon_sym_DASH_GT] = ACTIONS(183),
    [anon_sym_DASH_DASH_GT] = ACTIONS(181),
    [anon_sym_COLON_EQ] = ACTIONS(181),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(181),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(181),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(181),
    [anon_sym_LT_DASH_DASH] = ACTIONS(183),
    [anon_sym_LT_DASH_LT] = ACTIONS(181),
    [anon_sym_LT_DASH_GT] = ACTIONS(181),
    [anon_sym_LT_LT_DASH] = ACTIONS(181),
    [anon_sym_LT_LT_LT] = ACTIONS(181),
    [anon_sym_LT_EQ_GT] = ACTIONS(181),
    [anon_sym_LT_EQ_EQ] = ACTIONS(183),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_LT_LT] = ACTIONS(183),
    [anon_sym_LT_DASH] = ACTIONS(183),
    [anon_sym_LT_TILDE] = ACTIONS(183),
    [anon_sym_GT_DASH_GT] = ACTIONS(181),
    [anon_sym_GT_GT_GT] = ACTIONS(181),
    [anon_sym_EQ_EQ_GT] = ACTIONS(181),
    [anon_sym_EQ_GT] = ACTIONS(181),
    [anon_sym_EQ_COLON] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(181),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(181),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(181),
    [anon_sym_TILDE_GT] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_LBRACK_PIPE] = ACTIONS(181),
    [aux_sym_math_delimited_left_token1] = ACTIONS(183),
    [anon_sym_PIPE_RBRACK] = ACTIONS(181),
    [aux_sym_math_delimited_right_token1] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [aux_sym_math_fence_token1] = ACTIONS(183),
    [sym_math_align_point] = ACTIONS(183),
    [anon_sym_] = ACTIONS(183),
    [anon_sym_2] = ACTIONS(183),
    [anon_sym_3] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [sym_math_text] = ACTIONS(183),
    [sym_math_ident] = ACTIONS(183),
    [sym_string] = ACTIONS(181),
    [sym_line_comment] = ACTIONS(181),
    [anon_sym_SLASH_STAR] = ACTIONS(181),
    [sym__space] = ACTIONS(181),
    [sym_parbreak] = ACTIONS(181),
    [sym__newline] = ACTIONS(181),
  },
  [25] = {
    [sym__math_expr] = STATE(25),
    [sym_math_shorthand] = STATE(25),
    [sym_math_delimited] = STATE(25),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(25),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(25),
    [sym_math_root] = STATE(25),
    [sym_math_attach_below] = STATE(25),
    [sym_math_attach_above] = STATE(25),
    [sym_math_frac] = STATE(25),
    [sym__trivia] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym_space] = STATE(25),
    [aux_sym_math_repeat1] = STATE(25),
    [sym_linebreak] = ACTIONS(237),
    [sym_escape] = ACTIONS(240),
    [anon_sym_DASH_GT_GT] = ACTIONS(243),
    [anon_sym_DASH_GT] = ACTIONS(246),
    [anon_sym_DASH_DASH_GT] = ACTIONS(243),
    [anon_sym_COLON_EQ] = ACTIONS(243),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(243),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(243),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(243),
    [anon_sym_LT_DASH_DASH] = ACTIONS(246),
    [anon_sym_LT_DASH_LT] = ACTIONS(243),
    [anon_sym_LT_DASH_GT] = ACTIONS(243),
    [anon_sym_LT_LT_DASH] = ACTIONS(243),
    [anon_sym_LT_LT_LT] = ACTIONS(243),
    [anon_sym_LT_EQ_GT] = ACTIONS(243),
    [anon_sym_LT_EQ_EQ] = ACTIONS(246),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(246),
    [anon_sym_LT_LT] = ACTIONS(246),
    [anon_sym_LT_DASH] = ACTIONS(246),
    [anon_sym_LT_TILDE] = ACTIONS(246),
    [anon_sym_GT_DASH_GT] = ACTIONS(243),
    [anon_sym_GT_GT_GT] = ACTIONS(243),
    [anon_sym_EQ_EQ_GT] = ACTIONS(243),
    [anon_sym_EQ_GT] = ACTIONS(243),
    [anon_sym_EQ_COLON] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(246),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(243),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(243),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(243),
    [anon_sym_TILDE_GT] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_LBRACK_PIPE] = ACTIONS(125),
    [aux_sym_math_delimited_left_token1] = ACTIONS(128),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [aux_sym_math_fence_token1] = ACTIONS(252),
    [sym_math_align_point] = ACTIONS(240),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_] = ACTIONS(255),
    [anon_sym_2] = ACTIONS(255),
    [anon_sym_3] = ACTIONS(255),
    [anon_sym__] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [sym_math_text] = ACTIONS(240),
    [sym_math_ident] = ACTIONS(258),
    [sym_string] = ACTIONS(237),
    [sym_line_comment] = ACTIONS(237),
    [anon_sym_SLASH_STAR] = ACTIONS(261),
    [sym__space] = ACTIONS(264),
    [sym_parbreak] = ACTIONS(237),
    [sym__newline] = ACTIONS(264),
  },
  [26] = {
    [sym_math] = STATE(133),
    [sym__math_expr] = STATE(29),
    [sym_math_shorthand] = STATE(29),
    [sym_math_delimited] = STATE(29),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(29),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(29),
    [sym_math_root] = STATE(29),
    [sym_math_attach_below] = STATE(29),
    [sym_math_attach_above] = STATE(29),
    [sym_math_frac] = STATE(29),
    [sym__trivia] = STATE(29),
    [sym_block_comment] = STATE(29),
    [sym_space] = STATE(29),
    [aux_sym_math_repeat1] = STATE(29),
    [sym_linebreak] = ACTIONS(267),
    [sym_escape] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(97),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH] = ACTIONS(273),
    [anon_sym_LT_DASH_LT] = ACTIONS(271),
    [anon_sym_LT_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [anon_sym_LT_LT_LT] = ACTIONS(271),
    [anon_sym_LT_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ] = ACTIONS(273),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_LT_TILDE] = ACTIONS(273),
    [anon_sym_GT_DASH_GT] = ACTIONS(271),
    [anon_sym_GT_GT_GT] = ACTIONS(271),
    [anon_sym_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_COLON] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(271),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(271),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(271),
    [anon_sym_TILDE_GT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_math_fence_token1] = ACTIONS(277),
    [sym_math_align_point] = ACTIONS(269),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [anon_sym__] = ACTIONS(97),
    [anon_sym_CARET] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [sym_math_text] = ACTIONS(269),
    [sym_math_ident] = ACTIONS(281),
    [sym_string] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(267),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [sym__space] = ACTIONS(285),
    [sym_parbreak] = ACTIONS(267),
    [sym__newline] = ACTIONS(285),
  },
  [27] = {
    [sym_math] = STATE(133),
    [sym__math_expr] = STATE(29),
    [sym_math_shorthand] = STATE(29),
    [sym_math_delimited] = STATE(29),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(29),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(29),
    [sym_math_root] = STATE(29),
    [sym_math_attach_below] = STATE(29),
    [sym_math_attach_above] = STATE(29),
    [sym_math_frac] = STATE(29),
    [sym__trivia] = STATE(29),
    [sym_block_comment] = STATE(29),
    [sym_space] = STATE(29),
    [aux_sym_math_repeat1] = STATE(29),
    [sym_linebreak] = ACTIONS(267),
    [sym_escape] = ACTIONS(269),
    [anon_sym_DOLLAR] = ACTIONS(110),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH] = ACTIONS(273),
    [anon_sym_LT_DASH_LT] = ACTIONS(271),
    [anon_sym_LT_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [anon_sym_LT_LT_LT] = ACTIONS(271),
    [anon_sym_LT_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ] = ACTIONS(273),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_LT_TILDE] = ACTIONS(273),
    [anon_sym_GT_DASH_GT] = ACTIONS(271),
    [anon_sym_GT_GT_GT] = ACTIONS(271),
    [anon_sym_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_COLON] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(271),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(271),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(271),
    [anon_sym_TILDE_GT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_math_fence_token1] = ACTIONS(277),
    [sym_math_align_point] = ACTIONS(269),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [anon_sym__] = ACTIONS(110),
    [anon_sym_CARET] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [sym_math_text] = ACTIONS(269),
    [sym_math_ident] = ACTIONS(281),
    [sym_string] = ACTIONS(267),
    [sym_line_comment] = ACTIONS(267),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [sym__space] = ACTIONS(285),
    [sym_parbreak] = ACTIONS(267),
    [sym__newline] = ACTIONS(285),
  },
  [28] = {
    [sym_math] = STATE(298),
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__trivia] = STATE(18),
    [sym_block_comment] = STATE(18),
    [sym_space] = STATE(18),
    [aux_sym_math_repeat1] = STATE(32),
    [sym_linebreak] = ACTIONS(65),
    [sym_escape] = ACTIONS(67),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_SEMI] = ACTIONS(287),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(67),
    [sym_math_ident] = ACTIONS(193),
    [sym_string] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(289),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(289),
    [sym__newline] = ACTIONS(91),
  },
  [29] = {
    [sym__math_expr] = STATE(30),
    [sym_math_shorthand] = STATE(30),
    [sym_math_delimited] = STATE(30),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(30),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(30),
    [sym_math_root] = STATE(30),
    [sym_math_attach_below] = STATE(30),
    [sym_math_attach_above] = STATE(30),
    [sym_math_frac] = STATE(30),
    [sym__trivia] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym_space] = STATE(30),
    [aux_sym_math_repeat1] = STATE(30),
    [sym_linebreak] = ACTIONS(181),
    [sym_escape] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_DASH_GT_GT] = ACTIONS(181),
    [anon_sym_DASH_GT] = ACTIONS(183),
    [anon_sym_DASH_DASH_GT] = ACTIONS(181),
    [anon_sym_COLON_EQ] = ACTIONS(181),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(181),
    [anon_sym_BANG_EQ] = ACTIONS(181),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(181),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(181),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(181),
    [anon_sym_LT_DASH_DASH] = ACTIONS(183),
    [anon_sym_LT_DASH_LT] = ACTIONS(181),
    [anon_sym_LT_DASH_GT] = ACTIONS(181),
    [anon_sym_LT_LT_DASH] = ACTIONS(181),
    [anon_sym_LT_LT_LT] = ACTIONS(181),
    [anon_sym_LT_EQ_GT] = ACTIONS(181),
    [anon_sym_LT_EQ_EQ] = ACTIONS(183),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(181),
    [anon_sym_LT_EQ] = ACTIONS(183),
    [anon_sym_LT_LT] = ACTIONS(183),
    [anon_sym_LT_DASH] = ACTIONS(183),
    [anon_sym_LT_TILDE] = ACTIONS(183),
    [anon_sym_GT_DASH_GT] = ACTIONS(181),
    [anon_sym_GT_GT_GT] = ACTIONS(181),
    [anon_sym_EQ_EQ_GT] = ACTIONS(181),
    [anon_sym_EQ_GT] = ACTIONS(181),
    [anon_sym_EQ_COLON] = ACTIONS(181),
    [anon_sym_GT_EQ] = ACTIONS(181),
    [anon_sym_GT_GT] = ACTIONS(183),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(181),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(181),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(181),
    [anon_sym_TILDE_GT] = ACTIONS(181),
    [anon_sym_STAR] = ACTIONS(183),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_LBRACK_PIPE] = ACTIONS(181),
    [aux_sym_math_delimited_left_token1] = ACTIONS(183),
    [anon_sym_PIPE_PIPE] = ACTIONS(181),
    [aux_sym_math_fence_token1] = ACTIONS(183),
    [sym_math_align_point] = ACTIONS(183),
    [anon_sym_] = ACTIONS(183),
    [anon_sym_2] = ACTIONS(183),
    [anon_sym_3] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [sym_math_text] = ACTIONS(183),
    [sym_math_ident] = ACTIONS(183),
    [sym_string] = ACTIONS(181),
    [sym_line_comment] = ACTIONS(181),
    [anon_sym_SLASH_STAR] = ACTIONS(181),
    [sym__space] = ACTIONS(181),
    [sym_parbreak] = ACTIONS(181),
    [sym__newline] = ACTIONS(181),
  },
  [30] = {
    [sym__math_expr] = STATE(30),
    [sym_math_shorthand] = STATE(30),
    [sym_math_delimited] = STATE(30),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(30),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(30),
    [sym_math_root] = STATE(30),
    [sym_math_attach_below] = STATE(30),
    [sym_math_attach_above] = STATE(30),
    [sym_math_frac] = STATE(30),
    [sym__trivia] = STATE(30),
    [sym_block_comment] = STATE(30),
    [sym_space] = STATE(30),
    [aux_sym_math_repeat1] = STATE(30),
    [sym_linebreak] = ACTIONS(291),
    [sym_escape] = ACTIONS(294),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_DASH_GT_GT] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(297),
    [anon_sym_COLON_EQ] = ACTIONS(297),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(297),
    [anon_sym_BANG_EQ] = ACTIONS(297),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(297),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(297),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(297),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(297),
    [anon_sym_LT_DASH_GT] = ACTIONS(297),
    [anon_sym_LT_LT_DASH] = ACTIONS(297),
    [anon_sym_LT_LT_LT] = ACTIONS(297),
    [anon_sym_LT_EQ_GT] = ACTIONS(297),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(297),
    [anon_sym_GT_GT_GT] = ACTIONS(297),
    [anon_sym_EQ_EQ_GT] = ACTIONS(297),
    [anon_sym_EQ_GT] = ACTIONS(297),
    [anon_sym_EQ_COLON] = ACTIONS(297),
    [anon_sym_GT_EQ] = ACTIONS(297),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(297),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(297),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(297),
    [anon_sym_TILDE_GT] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(209),
    [aux_sym_math_delimited_left_token1] = ACTIONS(212),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [aux_sym_math_fence_token1] = ACTIONS(306),
    [sym_math_align_point] = ACTIONS(294),
    [anon_sym_] = ACTIONS(309),
    [anon_sym_2] = ACTIONS(309),
    [anon_sym_3] = ACTIONS(309),
    [anon_sym__] = ACTIONS(133),
    [anon_sym_CARET] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [sym_math_text] = ACTIONS(294),
    [sym_math_ident] = ACTIONS(312),
    [sym_string] = ACTIONS(291),
    [sym_line_comment] = ACTIONS(291),
    [anon_sym_SLASH_STAR] = ACTIONS(315),
    [sym__space] = ACTIONS(318),
    [sym_parbreak] = ACTIONS(291),
    [sym__newline] = ACTIONS(318),
  },
  [31] = {
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__trivia] = STATE(121),
    [sym_block_comment] = STATE(121),
    [sym_space] = STATE(121),
    [aux_sym_math_repeat1] = STATE(31),
    [sym_linebreak] = ACTIONS(321),
    [sym_escape] = ACTIONS(324),
    [anon_sym_DASH_GT_GT] = ACTIONS(243),
    [anon_sym_DASH_GT] = ACTIONS(246),
    [anon_sym_DASH_DASH_GT] = ACTIONS(243),
    [anon_sym_COLON_EQ] = ACTIONS(243),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(243),
    [anon_sym_BANG_EQ] = ACTIONS(243),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(243),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(243),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(243),
    [anon_sym_LT_DASH_DASH] = ACTIONS(246),
    [anon_sym_LT_DASH_LT] = ACTIONS(243),
    [anon_sym_LT_DASH_GT] = ACTIONS(243),
    [anon_sym_LT_LT_DASH] = ACTIONS(243),
    [anon_sym_LT_LT_LT] = ACTIONS(243),
    [anon_sym_LT_EQ_GT] = ACTIONS(243),
    [anon_sym_LT_EQ_EQ] = ACTIONS(246),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(243),
    [anon_sym_LT_EQ] = ACTIONS(246),
    [anon_sym_LT_LT] = ACTIONS(246),
    [anon_sym_LT_DASH] = ACTIONS(246),
    [anon_sym_LT_TILDE] = ACTIONS(246),
    [anon_sym_GT_DASH_GT] = ACTIONS(243),
    [anon_sym_GT_GT_GT] = ACTIONS(243),
    [anon_sym_EQ_EQ_GT] = ACTIONS(243),
    [anon_sym_EQ_GT] = ACTIONS(243),
    [anon_sym_EQ_COLON] = ACTIONS(243),
    [anon_sym_GT_EQ] = ACTIONS(243),
    [anon_sym_GT_GT] = ACTIONS(246),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(243),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(243),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(243),
    [anon_sym_TILDE_GT] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_LBRACK_PIPE] = ACTIONS(125),
    [aux_sym_math_delimited_left_token1] = ACTIONS(128),
    [anon_sym_PIPE_PIPE] = ACTIONS(249),
    [aux_sym_math_fence_token1] = ACTIONS(252),
    [sym_math_align_point] = ACTIONS(324),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_] = ACTIONS(255),
    [anon_sym_2] = ACTIONS(255),
    [anon_sym_3] = ACTIONS(255),
    [sym_math_text] = ACTIONS(324),
    [sym_math_ident] = ACTIONS(258),
    [sym_string] = ACTIONS(321),
    [sym_line_comment] = ACTIONS(321),
    [anon_sym_SLASH_STAR] = ACTIONS(261),
    [sym__space] = ACTIONS(264),
    [sym_parbreak] = ACTIONS(321),
    [sym__newline] = ACTIONS(264),
  },
  [32] = {
    [sym__math_expr] = STATE(121),
    [sym_math_shorthand] = STATE(121),
    [sym_math_delimited] = STATE(121),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(121),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(121),
    [sym_math_root] = STATE(121),
    [sym_math_attach_below] = STATE(121),
    [sym_math_attach_above] = STATE(121),
    [sym_math_frac] = STATE(121),
    [sym__trivia] = STATE(121),
    [sym_block_comment] = STATE(121),
    [sym_space] = STATE(121),
    [aux_sym_math_repeat1] = STATE(31),
    [sym_linebreak] = ACTIONS(65),
    [sym_escape] = ACTIONS(67),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(67),
    [sym_math_ident] = ACTIONS(193),
    [sym_string] = ACTIONS(65),
    [sym_line_comment] = ACTIONS(65),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(65),
    [sym__newline] = ACTIONS(91),
  },
  [33] = {
    [sym_math] = STATE(308),
    [sym__math_expr] = STATE(136),
    [sym_math_shorthand] = STATE(136),
    [sym_math_delimited] = STATE(136),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(136),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(136),
    [sym_math_root] = STATE(136),
    [sym_math_attach_below] = STATE(136),
    [sym_math_attach_above] = STATE(136),
    [sym_math_frac] = STATE(136),
    [sym__trivia] = STATE(136),
    [sym_block_comment] = STATE(136),
    [sym_space] = STATE(136),
    [aux_sym_math_repeat1] = STATE(36),
    [sym_linebreak] = ACTIONS(327),
    [sym_escape] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(331),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH] = ACTIONS(273),
    [anon_sym_LT_DASH_LT] = ACTIONS(271),
    [anon_sym_LT_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [anon_sym_LT_LT_LT] = ACTIONS(271),
    [anon_sym_LT_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ] = ACTIONS(273),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_LT_TILDE] = ACTIONS(273),
    [anon_sym_GT_DASH_GT] = ACTIONS(271),
    [anon_sym_GT_GT_GT] = ACTIONS(271),
    [anon_sym_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_COLON] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(271),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(271),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(271),
    [anon_sym_TILDE_GT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_math_fence_token1] = ACTIONS(277),
    [sym_math_align_point] = ACTIONS(329),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [sym_math_text] = ACTIONS(329),
    [sym_math_ident] = ACTIONS(281),
    [sym_string] = ACTIONS(327),
    [sym_line_comment] = ACTIONS(327),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [sym__space] = ACTIONS(285),
    [sym_parbreak] = ACTIONS(327),
    [sym__newline] = ACTIONS(285),
  },
  [34] = {
    [sym_math] = STATE(322),
    [sym__math_expr] = STATE(136),
    [sym_math_shorthand] = STATE(136),
    [sym_math_delimited] = STATE(136),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(136),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(136),
    [sym_math_root] = STATE(136),
    [sym_math_attach_below] = STATE(136),
    [sym_math_attach_above] = STATE(136),
    [sym_math_frac] = STATE(136),
    [sym__trivia] = STATE(136),
    [sym_block_comment] = STATE(136),
    [sym_space] = STATE(136),
    [aux_sym_math_repeat1] = STATE(36),
    [sym_linebreak] = ACTIONS(327),
    [sym_escape] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH] = ACTIONS(273),
    [anon_sym_LT_DASH_LT] = ACTIONS(271),
    [anon_sym_LT_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [anon_sym_LT_LT_LT] = ACTIONS(271),
    [anon_sym_LT_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ] = ACTIONS(273),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_LT_TILDE] = ACTIONS(273),
    [anon_sym_GT_DASH_GT] = ACTIONS(271),
    [anon_sym_GT_GT_GT] = ACTIONS(271),
    [anon_sym_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_COLON] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(271),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(271),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(271),
    [anon_sym_TILDE_GT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_math_fence_token1] = ACTIONS(277),
    [sym_math_align_point] = ACTIONS(329),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [sym_math_text] = ACTIONS(329),
    [sym_math_ident] = ACTIONS(281),
    [sym_string] = ACTIONS(327),
    [sym_line_comment] = ACTIONS(327),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [sym__space] = ACTIONS(285),
    [sym_parbreak] = ACTIONS(327),
    [sym__newline] = ACTIONS(285),
  },
  [35] = {
    [sym_math] = STATE(305),
    [sym__math_expr] = STATE(136),
    [sym_math_shorthand] = STATE(136),
    [sym_math_delimited] = STATE(136),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(136),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(136),
    [sym_math_root] = STATE(136),
    [sym_math_attach_below] = STATE(136),
    [sym_math_attach_above] = STATE(136),
    [sym_math_frac] = STATE(136),
    [sym__trivia] = STATE(136),
    [sym_block_comment] = STATE(136),
    [sym_space] = STATE(136),
    [aux_sym_math_repeat1] = STATE(36),
    [sym_linebreak] = ACTIONS(327),
    [sym_escape] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(335),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH] = ACTIONS(273),
    [anon_sym_LT_DASH_LT] = ACTIONS(271),
    [anon_sym_LT_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [anon_sym_LT_LT_LT] = ACTIONS(271),
    [anon_sym_LT_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ] = ACTIONS(273),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_LT_TILDE] = ACTIONS(273),
    [anon_sym_GT_DASH_GT] = ACTIONS(271),
    [anon_sym_GT_GT_GT] = ACTIONS(271),
    [anon_sym_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_COLON] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(271),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(271),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(271),
    [anon_sym_TILDE_GT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_math_fence_token1] = ACTIONS(277),
    [sym_math_align_point] = ACTIONS(329),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [sym_math_text] = ACTIONS(329),
    [sym_math_ident] = ACTIONS(281),
    [sym_string] = ACTIONS(327),
    [sym_line_comment] = ACTIONS(327),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [sym__space] = ACTIONS(285),
    [sym_parbreak] = ACTIONS(327),
    [sym__newline] = ACTIONS(285),
  },
  [36] = {
    [sym__math_expr] = STATE(136),
    [sym_math_shorthand] = STATE(136),
    [sym_math_delimited] = STATE(136),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(136),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(136),
    [sym_math_root] = STATE(136),
    [sym_math_attach_below] = STATE(136),
    [sym_math_attach_above] = STATE(136),
    [sym_math_frac] = STATE(136),
    [sym__trivia] = STATE(136),
    [sym_block_comment] = STATE(136),
    [sym_space] = STATE(136),
    [aux_sym_math_repeat1] = STATE(37),
    [sym_linebreak] = ACTIONS(327),
    [sym_escape] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH] = ACTIONS(273),
    [anon_sym_LT_DASH_LT] = ACTIONS(271),
    [anon_sym_LT_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [anon_sym_LT_LT_LT] = ACTIONS(271),
    [anon_sym_LT_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ] = ACTIONS(273),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_LT_TILDE] = ACTIONS(273),
    [anon_sym_GT_DASH_GT] = ACTIONS(271),
    [anon_sym_GT_GT_GT] = ACTIONS(271),
    [anon_sym_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_COLON] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(271),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(271),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(271),
    [anon_sym_TILDE_GT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_math_fence_token1] = ACTIONS(277),
    [sym_math_align_point] = ACTIONS(329),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [sym_math_text] = ACTIONS(329),
    [sym_math_ident] = ACTIONS(281),
    [sym_string] = ACTIONS(327),
    [sym_line_comment] = ACTIONS(327),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [sym__space] = ACTIONS(285),
    [sym_parbreak] = ACTIONS(327),
    [sym__newline] = ACTIONS(285),
  },
  [37] = {
    [sym__math_expr] = STATE(136),
    [sym_math_shorthand] = STATE(136),
    [sym_math_delimited] = STATE(136),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(136),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(136),
    [sym_math_root] = STATE(136),
    [sym_math_attach_below] = STATE(136),
    [sym_math_attach_above] = STATE(136),
    [sym_math_frac] = STATE(136),
    [sym__trivia] = STATE(136),
    [sym_block_comment] = STATE(136),
    [sym_space] = STATE(136),
    [aux_sym_math_repeat1] = STATE(37),
    [sym_linebreak] = ACTIONS(337),
    [sym_escape] = ACTIONS(340),
    [anon_sym_DOLLAR] = ACTIONS(133),
    [anon_sym_DASH_GT_GT] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(297),
    [anon_sym_COLON_EQ] = ACTIONS(297),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(297),
    [anon_sym_BANG_EQ] = ACTIONS(297),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(297),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(297),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(297),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(297),
    [anon_sym_LT_DASH_GT] = ACTIONS(297),
    [anon_sym_LT_LT_DASH] = ACTIONS(297),
    [anon_sym_LT_LT_LT] = ACTIONS(297),
    [anon_sym_LT_EQ_GT] = ACTIONS(297),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(297),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(297),
    [anon_sym_GT_GT_GT] = ACTIONS(297),
    [anon_sym_EQ_EQ_GT] = ACTIONS(297),
    [anon_sym_EQ_GT] = ACTIONS(297),
    [anon_sym_EQ_COLON] = ACTIONS(297),
    [anon_sym_GT_EQ] = ACTIONS(297),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(297),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(297),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(297),
    [anon_sym_TILDE_GT] = ACTIONS(297),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(209),
    [aux_sym_math_delimited_left_token1] = ACTIONS(212),
    [anon_sym_PIPE_PIPE] = ACTIONS(303),
    [aux_sym_math_fence_token1] = ACTIONS(306),
    [sym_math_align_point] = ACTIONS(340),
    [anon_sym_] = ACTIONS(309),
    [anon_sym_2] = ACTIONS(309),
    [anon_sym_3] = ACTIONS(309),
    [sym_math_text] = ACTIONS(340),
    [sym_math_ident] = ACTIONS(312),
    [sym_string] = ACTIONS(337),
    [sym_line_comment] = ACTIONS(337),
    [anon_sym_SLASH_STAR] = ACTIONS(315),
    [sym__space] = ACTIONS(318),
    [sym_parbreak] = ACTIONS(337),
    [sym__newline] = ACTIONS(318),
  },
  [38] = {
    [sym__math_expr] = STATE(86),
    [sym_math_shorthand] = STATE(86),
    [sym_math_delimited] = STATE(86),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(86),
    [sym_math_fence] = STATE(6),
    [sym_math_field_access] = STATE(59),
    [sym_math_function_call] = STATE(86),
    [sym_math_root] = STATE(86),
    [sym_math_attach_below] = STATE(86),
    [sym_math_attach_above] = STATE(86),
    [sym_math_frac] = STATE(86),
    [sym__trivia] = STATE(86),
    [sym_block_comment] = STATE(86),
    [sym_space] = STATE(86),
    [sym_linebreak] = ACTIONS(343),
    [sym_escape] = ACTIONS(345),
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
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [aux_sym_math_fence_token1] = ACTIONS(49),
    [sym_math_align_point] = ACTIONS(345),
    [anon_sym_] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [sym_math_text] = ACTIONS(345),
    [sym_math_ident] = ACTIONS(55),
    [sym_string] = ACTIONS(343),
    [sym_line_comment] = ACTIONS(343),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(343),
    [sym__newline] = ACTIONS(59),
  },
  [39] = {
    [sym__math_expr] = STATE(117),
    [sym_math_shorthand] = STATE(117),
    [sym_math_delimited] = STATE(117),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(117),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(117),
    [sym_math_root] = STATE(117),
    [sym_math_attach_below] = STATE(117),
    [sym_math_attach_above] = STATE(117),
    [sym_math_frac] = STATE(117),
    [sym__trivia] = STATE(117),
    [sym_block_comment] = STATE(117),
    [sym_space] = STATE(117),
    [sym_linebreak] = ACTIONS(347),
    [sym_escape] = ACTIONS(349),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(349),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(349),
    [sym_math_ident] = ACTIONS(193),
    [sym_string] = ACTIONS(347),
    [sym_line_comment] = ACTIONS(347),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(347),
    [sym__newline] = ACTIONS(91),
  },
  [40] = {
    [sym__math_expr] = STATE(103),
    [sym_math_shorthand] = STATE(103),
    [sym_math_delimited] = STATE(103),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(103),
    [sym_math_fence] = STATE(16),
    [sym_math_field_access] = STATE(89),
    [sym_math_function_call] = STATE(103),
    [sym_math_root] = STATE(103),
    [sym_math_attach_below] = STATE(103),
    [sym_math_attach_above] = STATE(103),
    [sym_math_frac] = STATE(103),
    [sym__trivia] = STATE(103),
    [sym_block_comment] = STATE(103),
    [sym_space] = STATE(103),
    [sym_linebreak] = ACTIONS(351),
    [sym_escape] = ACTIONS(353),
    [anon_sym_DASH_GT_GT] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_COLON_EQ] = ACTIONS(157),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH] = ACTIONS(159),
    [anon_sym_LT_DASH_LT] = ACTIONS(157),
    [anon_sym_LT_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_LT_DASH] = ACTIONS(157),
    [anon_sym_LT_LT_LT] = ACTIONS(157),
    [anon_sym_LT_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ] = ACTIONS(159),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_LT_DASH] = ACTIONS(159),
    [anon_sym_LT_TILDE] = ACTIONS(159),
    [anon_sym_GT_DASH_GT] = ACTIONS(157),
    [anon_sym_GT_GT_GT] = ACTIONS(157),
    [anon_sym_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_COLON] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(157),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(157),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(157),
    [anon_sym_TILDE_GT] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [aux_sym_math_fence_token1] = ACTIONS(171),
    [sym_math_align_point] = ACTIONS(353),
    [anon_sym_] = ACTIONS(173),
    [anon_sym_2] = ACTIONS(173),
    [anon_sym_3] = ACTIONS(173),
    [sym_math_text] = ACTIONS(353),
    [sym_math_ident] = ACTIONS(175),
    [sym_string] = ACTIONS(351),
    [sym_line_comment] = ACTIONS(351),
    [anon_sym_SLASH_STAR] = ACTIONS(177),
    [sym__space] = ACTIONS(179),
    [sym_parbreak] = ACTIONS(351),
    [sym__newline] = ACTIONS(179),
  },
  [41] = {
    [sym__math_expr] = STATE(135),
    [sym_math_shorthand] = STATE(135),
    [sym_math_delimited] = STATE(135),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(135),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(135),
    [sym_math_root] = STATE(135),
    [sym_math_attach_below] = STATE(135),
    [sym_math_attach_above] = STATE(135),
    [sym_math_frac] = STATE(135),
    [sym__trivia] = STATE(135),
    [sym_block_comment] = STATE(135),
    [sym_space] = STATE(135),
    [sym_linebreak] = ACTIONS(355),
    [sym_escape] = ACTIONS(357),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH] = ACTIONS(273),
    [anon_sym_LT_DASH_LT] = ACTIONS(271),
    [anon_sym_LT_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [anon_sym_LT_LT_LT] = ACTIONS(271),
    [anon_sym_LT_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ] = ACTIONS(273),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_LT_TILDE] = ACTIONS(273),
    [anon_sym_GT_DASH_GT] = ACTIONS(271),
    [anon_sym_GT_GT_GT] = ACTIONS(271),
    [anon_sym_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_COLON] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(271),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(271),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(271),
    [anon_sym_TILDE_GT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_math_fence_token1] = ACTIONS(277),
    [sym_math_align_point] = ACTIONS(357),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [sym_math_text] = ACTIONS(357),
    [sym_math_ident] = ACTIONS(281),
    [sym_string] = ACTIONS(355),
    [sym_line_comment] = ACTIONS(355),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [sym__space] = ACTIONS(285),
    [sym_parbreak] = ACTIONS(355),
    [sym__newline] = ACTIONS(285),
  },
  [42] = {
    [sym__math_expr] = STATE(140),
    [sym_math_shorthand] = STATE(140),
    [sym_math_delimited] = STATE(140),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(140),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(140),
    [sym_math_root] = STATE(140),
    [sym_math_attach_below] = STATE(140),
    [sym_math_attach_above] = STATE(140),
    [sym_math_frac] = STATE(140),
    [sym__trivia] = STATE(140),
    [sym_block_comment] = STATE(140),
    [sym_space] = STATE(140),
    [sym_linebreak] = ACTIONS(359),
    [sym_escape] = ACTIONS(361),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH] = ACTIONS(273),
    [anon_sym_LT_DASH_LT] = ACTIONS(271),
    [anon_sym_LT_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [anon_sym_LT_LT_LT] = ACTIONS(271),
    [anon_sym_LT_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ] = ACTIONS(273),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_LT_TILDE] = ACTIONS(273),
    [anon_sym_GT_DASH_GT] = ACTIONS(271),
    [anon_sym_GT_GT_GT] = ACTIONS(271),
    [anon_sym_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_COLON] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(271),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(271),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(271),
    [anon_sym_TILDE_GT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_math_fence_token1] = ACTIONS(277),
    [sym_math_align_point] = ACTIONS(361),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [sym_math_text] = ACTIONS(361),
    [sym_math_ident] = ACTIONS(281),
    [sym_string] = ACTIONS(359),
    [sym_line_comment] = ACTIONS(359),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [sym__space] = ACTIONS(285),
    [sym_parbreak] = ACTIONS(359),
    [sym__newline] = ACTIONS(285),
  },
  [43] = {
    [sym__math_expr] = STATE(105),
    [sym_math_shorthand] = STATE(105),
    [sym_math_delimited] = STATE(105),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(105),
    [sym_math_fence] = STATE(16),
    [sym_math_field_access] = STATE(89),
    [sym_math_function_call] = STATE(105),
    [sym_math_root] = STATE(105),
    [sym_math_attach_below] = STATE(105),
    [sym_math_attach_above] = STATE(105),
    [sym_math_frac] = STATE(105),
    [sym__trivia] = STATE(105),
    [sym_block_comment] = STATE(105),
    [sym_space] = STATE(105),
    [sym_linebreak] = ACTIONS(363),
    [sym_escape] = ACTIONS(365),
    [anon_sym_DASH_GT_GT] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_COLON_EQ] = ACTIONS(157),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH] = ACTIONS(159),
    [anon_sym_LT_DASH_LT] = ACTIONS(157),
    [anon_sym_LT_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_LT_DASH] = ACTIONS(157),
    [anon_sym_LT_LT_LT] = ACTIONS(157),
    [anon_sym_LT_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ] = ACTIONS(159),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_LT_DASH] = ACTIONS(159),
    [anon_sym_LT_TILDE] = ACTIONS(159),
    [anon_sym_GT_DASH_GT] = ACTIONS(157),
    [anon_sym_GT_GT_GT] = ACTIONS(157),
    [anon_sym_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_COLON] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(157),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(157),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(157),
    [anon_sym_TILDE_GT] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [aux_sym_math_fence_token1] = ACTIONS(171),
    [sym_math_align_point] = ACTIONS(365),
    [anon_sym_] = ACTIONS(173),
    [anon_sym_2] = ACTIONS(173),
    [anon_sym_3] = ACTIONS(173),
    [sym_math_text] = ACTIONS(365),
    [sym_math_ident] = ACTIONS(175),
    [sym_string] = ACTIONS(363),
    [sym_line_comment] = ACTIONS(363),
    [anon_sym_SLASH_STAR] = ACTIONS(177),
    [sym__space] = ACTIONS(179),
    [sym_parbreak] = ACTIONS(363),
    [sym__newline] = ACTIONS(179),
  },
  [44] = {
    [sym__math_expr] = STATE(149),
    [sym_math_shorthand] = STATE(149),
    [sym_math_delimited] = STATE(149),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(149),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(149),
    [sym_math_root] = STATE(149),
    [sym_math_attach_below] = STATE(149),
    [sym_math_attach_above] = STATE(149),
    [sym_math_frac] = STATE(149),
    [sym__trivia] = STATE(149),
    [sym_block_comment] = STATE(149),
    [sym_space] = STATE(149),
    [sym_linebreak] = ACTIONS(367),
    [sym_escape] = ACTIONS(369),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH] = ACTIONS(273),
    [anon_sym_LT_DASH_LT] = ACTIONS(271),
    [anon_sym_LT_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [anon_sym_LT_LT_LT] = ACTIONS(271),
    [anon_sym_LT_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ] = ACTIONS(273),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_LT_TILDE] = ACTIONS(273),
    [anon_sym_GT_DASH_GT] = ACTIONS(271),
    [anon_sym_GT_GT_GT] = ACTIONS(271),
    [anon_sym_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_COLON] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(271),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(271),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(271),
    [anon_sym_TILDE_GT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_math_fence_token1] = ACTIONS(277),
    [sym_math_align_point] = ACTIONS(369),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [sym_math_text] = ACTIONS(369),
    [sym_math_ident] = ACTIONS(281),
    [sym_string] = ACTIONS(367),
    [sym_line_comment] = ACTIONS(367),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [sym__space] = ACTIONS(285),
    [sym_parbreak] = ACTIONS(367),
    [sym__newline] = ACTIONS(285),
  },
  [45] = {
    [sym__math_expr] = STATE(68),
    [sym_math_shorthand] = STATE(68),
    [sym_math_delimited] = STATE(68),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(68),
    [sym_math_fence] = STATE(6),
    [sym_math_field_access] = STATE(59),
    [sym_math_function_call] = STATE(68),
    [sym_math_root] = STATE(68),
    [sym_math_attach_below] = STATE(68),
    [sym_math_attach_above] = STATE(68),
    [sym_math_frac] = STATE(68),
    [sym__trivia] = STATE(68),
    [sym_block_comment] = STATE(68),
    [sym_space] = STATE(68),
    [sym_linebreak] = ACTIONS(371),
    [sym_escape] = ACTIONS(373),
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
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [aux_sym_math_fence_token1] = ACTIONS(49),
    [sym_math_align_point] = ACTIONS(373),
    [anon_sym_] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [sym_math_text] = ACTIONS(373),
    [sym_math_ident] = ACTIONS(55),
    [sym_string] = ACTIONS(371),
    [sym_line_comment] = ACTIONS(371),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(371),
    [sym__newline] = ACTIONS(59),
  },
  [46] = {
    [sym__math_expr] = STATE(83),
    [sym_math_shorthand] = STATE(83),
    [sym_math_delimited] = STATE(83),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(83),
    [sym_math_fence] = STATE(6),
    [sym_math_field_access] = STATE(59),
    [sym_math_function_call] = STATE(83),
    [sym_math_root] = STATE(83),
    [sym_math_attach_below] = STATE(83),
    [sym_math_attach_above] = STATE(83),
    [sym_math_frac] = STATE(83),
    [sym__trivia] = STATE(83),
    [sym_block_comment] = STATE(83),
    [sym_space] = STATE(83),
    [sym_linebreak] = ACTIONS(375),
    [sym_escape] = ACTIONS(377),
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
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(47),
    [aux_sym_math_fence_token1] = ACTIONS(49),
    [sym_math_align_point] = ACTIONS(377),
    [anon_sym_] = ACTIONS(53),
    [anon_sym_2] = ACTIONS(53),
    [anon_sym_3] = ACTIONS(53),
    [sym_math_text] = ACTIONS(377),
    [sym_math_ident] = ACTIONS(55),
    [sym_string] = ACTIONS(375),
    [sym_line_comment] = ACTIONS(375),
    [anon_sym_SLASH_STAR] = ACTIONS(57),
    [sym__space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(375),
    [sym__newline] = ACTIONS(59),
  },
  [47] = {
    [sym__math_expr] = STATE(118),
    [sym_math_shorthand] = STATE(118),
    [sym_math_delimited] = STATE(118),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(118),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(118),
    [sym_math_root] = STATE(118),
    [sym_math_attach_below] = STATE(118),
    [sym_math_attach_above] = STATE(118),
    [sym_math_frac] = STATE(118),
    [sym__trivia] = STATE(118),
    [sym_block_comment] = STATE(118),
    [sym_space] = STATE(118),
    [sym_linebreak] = ACTIONS(379),
    [sym_escape] = ACTIONS(381),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(381),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(381),
    [sym_math_ident] = ACTIONS(193),
    [sym_string] = ACTIONS(379),
    [sym_line_comment] = ACTIONS(379),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(379),
    [sym__newline] = ACTIONS(91),
  },
  [48] = {
    [sym__math_expr] = STATE(104),
    [sym_math_shorthand] = STATE(104),
    [sym_math_delimited] = STATE(104),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(104),
    [sym_math_fence] = STATE(16),
    [sym_math_field_access] = STATE(89),
    [sym_math_function_call] = STATE(104),
    [sym_math_root] = STATE(104),
    [sym_math_attach_below] = STATE(104),
    [sym_math_attach_above] = STATE(104),
    [sym_math_frac] = STATE(104),
    [sym__trivia] = STATE(104),
    [sym_block_comment] = STATE(104),
    [sym_space] = STATE(104),
    [sym_linebreak] = ACTIONS(383),
    [sym_escape] = ACTIONS(385),
    [anon_sym_DASH_GT_GT] = ACTIONS(157),
    [anon_sym_DASH_GT] = ACTIONS(159),
    [anon_sym_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_COLON_EQ] = ACTIONS(157),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_DASH_DASH] = ACTIONS(159),
    [anon_sym_LT_DASH_LT] = ACTIONS(157),
    [anon_sym_LT_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_LT_DASH] = ACTIONS(157),
    [anon_sym_LT_LT_LT] = ACTIONS(157),
    [anon_sym_LT_EQ_GT] = ACTIONS(157),
    [anon_sym_LT_EQ_EQ] = ACTIONS(159),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(159),
    [anon_sym_LT_DASH] = ACTIONS(159),
    [anon_sym_LT_TILDE] = ACTIONS(159),
    [anon_sym_GT_DASH_GT] = ACTIONS(157),
    [anon_sym_GT_GT_GT] = ACTIONS(157),
    [anon_sym_EQ_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_GT] = ACTIONS(157),
    [anon_sym_EQ_COLON] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_GT_GT] = ACTIONS(159),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(157),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(157),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(157),
    [anon_sym_TILDE_GT] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DASH] = ACTIONS(159),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [aux_sym_math_fence_token1] = ACTIONS(171),
    [sym_math_align_point] = ACTIONS(385),
    [anon_sym_] = ACTIONS(173),
    [anon_sym_2] = ACTIONS(173),
    [anon_sym_3] = ACTIONS(173),
    [sym_math_text] = ACTIONS(385),
    [sym_math_ident] = ACTIONS(175),
    [sym_string] = ACTIONS(383),
    [sym_line_comment] = ACTIONS(383),
    [anon_sym_SLASH_STAR] = ACTIONS(177),
    [sym__space] = ACTIONS(179),
    [sym_parbreak] = ACTIONS(383),
    [sym__newline] = ACTIONS(179),
  },
  [49] = {
    [sym__math_expr] = STATE(147),
    [sym_math_shorthand] = STATE(147),
    [sym_math_delimited] = STATE(147),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(147),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(132),
    [sym_math_function_call] = STATE(147),
    [sym_math_root] = STATE(147),
    [sym_math_attach_below] = STATE(147),
    [sym_math_attach_above] = STATE(147),
    [sym_math_frac] = STATE(147),
    [sym__trivia] = STATE(147),
    [sym_block_comment] = STATE(147),
    [sym_space] = STATE(147),
    [sym_linebreak] = ACTIONS(387),
    [sym_escape] = ACTIONS(389),
    [anon_sym_DASH_GT_GT] = ACTIONS(271),
    [anon_sym_DASH_GT] = ACTIONS(273),
    [anon_sym_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_COLON_EQ] = ACTIONS(271),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(271),
    [anon_sym_BANG_EQ] = ACTIONS(271),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_DASH_DASH] = ACTIONS(273),
    [anon_sym_LT_DASH_LT] = ACTIONS(271),
    [anon_sym_LT_DASH_GT] = ACTIONS(271),
    [anon_sym_LT_LT_DASH] = ACTIONS(271),
    [anon_sym_LT_LT_LT] = ACTIONS(271),
    [anon_sym_LT_EQ_GT] = ACTIONS(271),
    [anon_sym_LT_EQ_EQ] = ACTIONS(273),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(271),
    [anon_sym_LT_EQ] = ACTIONS(273),
    [anon_sym_LT_LT] = ACTIONS(273),
    [anon_sym_LT_DASH] = ACTIONS(273),
    [anon_sym_LT_TILDE] = ACTIONS(273),
    [anon_sym_GT_DASH_GT] = ACTIONS(271),
    [anon_sym_GT_GT_GT] = ACTIONS(271),
    [anon_sym_EQ_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_GT] = ACTIONS(271),
    [anon_sym_EQ_COLON] = ACTIONS(271),
    [anon_sym_GT_EQ] = ACTIONS(271),
    [anon_sym_GT_GT] = ACTIONS(273),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(271),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(271),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(271),
    [anon_sym_TILDE_GT] = ACTIONS(271),
    [anon_sym_STAR] = ACTIONS(273),
    [anon_sym_SQUOTE] = ACTIONS(273),
    [anon_sym_DASH] = ACTIONS(273),
    [anon_sym_LBRACK_PIPE] = ACTIONS(161),
    [aux_sym_math_delimited_left_token1] = ACTIONS(163),
    [anon_sym_PIPE_PIPE] = ACTIONS(275),
    [aux_sym_math_fence_token1] = ACTIONS(277),
    [sym_math_align_point] = ACTIONS(389),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [sym_math_text] = ACTIONS(389),
    [sym_math_ident] = ACTIONS(281),
    [sym_string] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(387),
    [anon_sym_SLASH_STAR] = ACTIONS(283),
    [sym__space] = ACTIONS(285),
    [sym_parbreak] = ACTIONS(387),
    [sym__newline] = ACTIONS(285),
  },
  [50] = {
    [sym__math_expr] = STATE(122),
    [sym_math_shorthand] = STATE(122),
    [sym_math_delimited] = STATE(122),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(122),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(122),
    [sym_math_root] = STATE(122),
    [sym_math_attach_below] = STATE(122),
    [sym_math_attach_above] = STATE(122),
    [sym_math_frac] = STATE(122),
    [sym__trivia] = STATE(122),
    [sym_block_comment] = STATE(122),
    [sym_space] = STATE(122),
    [sym_linebreak] = ACTIONS(391),
    [sym_escape] = ACTIONS(393),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(393),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(393),
    [sym_math_ident] = ACTIONS(193),
    [sym_string] = ACTIONS(391),
    [sym_line_comment] = ACTIONS(391),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(391),
    [sym__newline] = ACTIONS(91),
  },
  [51] = {
    [sym__math_expr] = STATE(120),
    [sym_math_shorthand] = STATE(120),
    [sym_math_delimited] = STATE(120),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(120),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(97),
    [sym_math_function_call] = STATE(120),
    [sym_math_root] = STATE(120),
    [sym_math_attach_below] = STATE(120),
    [sym_math_attach_above] = STATE(120),
    [sym_math_frac] = STATE(120),
    [sym__trivia] = STATE(120),
    [sym_block_comment] = STATE(120),
    [sym_space] = STATE(120),
    [sym_linebreak] = ACTIONS(395),
    [sym_escape] = ACTIONS(397),
    [anon_sym_DASH_GT_GT] = ACTIONS(69),
    [anon_sym_DASH_GT] = ACTIONS(71),
    [anon_sym_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_COLON_EQ] = ACTIONS(69),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(69),
    [anon_sym_BANG_EQ] = ACTIONS(69),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_DASH_DASH] = ACTIONS(71),
    [anon_sym_LT_DASH_LT] = ACTIONS(69),
    [anon_sym_LT_DASH_GT] = ACTIONS(69),
    [anon_sym_LT_LT_DASH] = ACTIONS(69),
    [anon_sym_LT_LT_LT] = ACTIONS(69),
    [anon_sym_LT_EQ_GT] = ACTIONS(69),
    [anon_sym_LT_EQ_EQ] = ACTIONS(71),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_LT_LT] = ACTIONS(71),
    [anon_sym_LT_DASH] = ACTIONS(71),
    [anon_sym_LT_TILDE] = ACTIONS(71),
    [anon_sym_GT_DASH_GT] = ACTIONS(69),
    [anon_sym_GT_GT_GT] = ACTIONS(69),
    [anon_sym_EQ_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_GT] = ACTIONS(69),
    [anon_sym_EQ_COLON] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(69),
    [anon_sym_GT_GT] = ACTIONS(71),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(69),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(69),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(69),
    [anon_sym_TILDE_GT] = ACTIONS(69),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_LBRACK_PIPE] = ACTIONS(39),
    [aux_sym_math_delimited_left_token1] = ACTIONS(41),
    [anon_sym_PIPE_PIPE] = ACTIONS(73),
    [aux_sym_math_fence_token1] = ACTIONS(75),
    [sym_math_align_point] = ACTIONS(397),
    [anon_sym_] = ACTIONS(81),
    [anon_sym_2] = ACTIONS(81),
    [anon_sym_3] = ACTIONS(81),
    [sym_math_text] = ACTIONS(397),
    [sym_math_ident] = ACTIONS(193),
    [sym_string] = ACTIONS(395),
    [sym_line_comment] = ACTIONS(395),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym__space] = ACTIONS(91),
    [sym_parbreak] = ACTIONS(395),
    [sym__newline] = ACTIONS(91),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(54), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(401), 28,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(399), 34,
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
  [73] = 4,
    ACTIONS(409), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(407), 28,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(405), 34,
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
  [146] = 4,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(53), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(414), 28,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(412), 34,
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
  [219] = 2,
    ACTIONS(407), 29,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(405), 34,
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
  [287] = 2,
    ACTIONS(418), 29,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(416), 34,
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
  [355] = 5,
    ACTIONS(420), 1,
      anon_sym_DOT,
    ACTIONS(422), 1,
      anon_sym_COLON,
    STATE(60), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(401), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(399), 33,
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
  [429] = 5,
    ACTIONS(43), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(45), 1,
      aux_sym_math_delimited_right_token1,
    STATE(114), 1,
      sym_math_delimited_right,
    ACTIONS(426), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(424), 33,
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
  [502] = 3,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(428), 34,
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
  [571] = 4,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(414), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(412), 33,
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
  [642] = 5,
    ACTIONS(47), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(49), 1,
      aux_sym_math_fence_token1,
    STATE(77), 1,
      sym_math_fence,
    ACTIONS(434), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(432), 33,
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
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [715] = 4,
    ACTIONS(436), 1,
      anon_sym_DOT,
    STATE(62), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(407), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(405), 33,
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
  [786] = 4,
    ACTIONS(420), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(401), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(399), 33,
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
  [857] = 5,
    ACTIONS(61), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(63), 1,
      aux_sym_math_delimited_right_token1,
    STATE(82), 1,
      sym_math_delimited_right,
    ACTIONS(426), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(424), 33,
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
  [930] = 4,
    ACTIONS(439), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(407), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(405), 34,
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
  [1001] = 4,
    ACTIONS(442), 1,
      anon_sym_DOT,
    STATE(67), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(401), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(399), 34,
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
  [1072] = 4,
    ACTIONS(442), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(414), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(412), 34,
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
  [1143] = 4,
    ACTIONS(448), 1,
      anon_sym__,
    ACTIONS(450), 1,
      anon_sym_CARET,
    ACTIONS(446), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(444), 34,
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
  [1213] = 2,
    ACTIONS(454), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(452), 34,
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
  [1279] = 2,
    ACTIONS(458), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(456), 34,
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
  [1345] = 2,
    ACTIONS(462), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(460), 34,
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
  [1411] = 2,
    ACTIONS(407), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(405), 34,
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
  [1477] = 2,
    ACTIONS(418), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(416), 34,
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
  [1543] = 2,
    ACTIONS(466), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(464), 34,
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
  [1609] = 2,
    ACTIONS(470), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(468), 34,
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
  [1675] = 2,
    ACTIONS(474), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(472), 34,
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
  [1741] = 2,
    ACTIONS(478), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(476), 34,
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
  [1807] = 2,
    ACTIONS(418), 28,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(416), 33,
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
  [1873] = 2,
    ACTIONS(407), 28,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(405), 33,
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
  [1939] = 2,
    ACTIONS(482), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(480), 34,
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
  [2005] = 2,
    ACTIONS(486), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(484), 34,
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
  [2071] = 2,
    ACTIONS(490), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(488), 34,
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
  [2137] = 2,
    ACTIONS(494), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(492), 34,
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
  [2203] = 2,
    ACTIONS(498), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(496), 34,
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
  [2269] = 2,
    ACTIONS(502), 27,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(500), 34,
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
  [2335] = 3,
    ACTIONS(448), 1,
      anon_sym__,
    ACTIONS(506), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(504), 34,
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
  [2403] = 4,
    ACTIONS(448), 1,
      anon_sym__,
    ACTIONS(450), 1,
      anon_sym_CARET,
    ACTIONS(510), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(508), 34,
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
  [2473] = 5,
    ACTIONS(185), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(187), 1,
      aux_sym_math_delimited_right_token1,
    STATE(144), 1,
      sym_math_delimited_right,
    ACTIONS(426), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(424), 33,
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
  [2544] = 3,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(428), 34,
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
  [2611] = 4,
    ACTIONS(514), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(407), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(405), 33,
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
  [2680] = 3,
    ACTIONS(418), 1,
      anon_sym_COLON,
    ACTIONS(103), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(428), 33,
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
  [2747] = 4,
    ACTIONS(517), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(414), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(412), 33,
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
  [2816] = 4,
    ACTIONS(517), 1,
      anon_sym_DOT,
    STATE(92), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(401), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_LPAREN,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(399), 33,
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
  [2885] = 5,
    ACTIONS(165), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(167), 1,
      aux_sym_math_delimited_right_token1,
    STATE(110), 1,
      sym_math_delimited_right,
    ACTIONS(426), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(424), 33,
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
  [2956] = 5,
    ACTIONS(73), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(75), 1,
      aux_sym_math_fence_token1,
    STATE(112), 1,
      sym_math_fence,
    ACTIONS(434), 25,
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
      aux_sym_math_delimited_left_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(432), 32,
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
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3027] = 5,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(171), 1,
      aux_sym_math_fence_token1,
    STATE(111), 1,
      sym_math_fence,
    ACTIONS(434), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(432), 33,
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
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3098] = 3,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(428), 33,
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
  [3165] = 2,
    ACTIONS(462), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(460), 34,
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
  [3229] = 2,
    ACTIONS(482), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(480), 34,
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
  [3293] = 2,
    ACTIONS(454), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(452), 34,
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
  [3357] = 2,
    ACTIONS(502), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(500), 34,
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
  [3421] = 2,
    ACTIONS(498), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(496), 34,
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
  [3485] = 3,
    ACTIONS(521), 1,
      anon_sym__,
    ACTIONS(506), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(504), 34,
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
  [3551] = 4,
    ACTIONS(521), 1,
      anon_sym__,
    ACTIONS(523), 1,
      anon_sym_CARET,
    ACTIONS(446), 23,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(444), 34,
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
  [3619] = 2,
    ACTIONS(494), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(492), 34,
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
  [3683] = 2,
    ACTIONS(502), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(500), 33,
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
    ACTIONS(474), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(472), 33,
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
  [3811] = 4,
    ACTIONS(521), 1,
      anon_sym__,
    ACTIONS(523), 1,
      anon_sym_CARET,
    ACTIONS(510), 23,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(508), 34,
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
  [3879] = 2,
    ACTIONS(498), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(496), 33,
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
  [3943] = 2,
    ACTIONS(490), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(488), 34,
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
  [4007] = 2,
    ACTIONS(478), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(476), 34,
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
  [4071] = 2,
    ACTIONS(478), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(476), 33,
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
  [4135] = 2,
    ACTIONS(474), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(472), 34,
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
  [4199] = 2,
    ACTIONS(490), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(488), 33,
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
  [4263] = 2,
    ACTIONS(466), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(464), 33,
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
  [4327] = 2,
    ACTIONS(458), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(456), 33,
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
  [4391] = 4,
    ACTIONS(525), 1,
      anon_sym__,
    ACTIONS(527), 1,
      anon_sym_CARET,
    ACTIONS(510), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(508), 33,
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
  [4459] = 2,
    ACTIONS(494), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(492), 33,
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
  [4523] = 2,
    ACTIONS(470), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(468), 34,
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
  [4587] = 4,
    ACTIONS(525), 1,
      anon_sym__,
    ACTIONS(527), 1,
      anon_sym_CARET,
    ACTIONS(446), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(444), 33,
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
  [4655] = 5,
    ACTIONS(525), 1,
      anon_sym__,
    ACTIONS(527), 1,
      anon_sym_CARET,
    ACTIONS(533), 1,
      anon_sym_SLASH,
    ACTIONS(531), 23,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      sym_math_text,
      sym_math_ident,
    ACTIONS(529), 33,
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
  [4725] = 3,
    ACTIONS(525), 1,
      anon_sym__,
    ACTIONS(506), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(504), 33,
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
  [4791] = 2,
    ACTIONS(482), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(480), 33,
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
  [4855] = 2,
    ACTIONS(486), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(484), 33,
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
  [4919] = 2,
    ACTIONS(418), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(416), 33,
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
  [4983] = 2,
    ACTIONS(466), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(464), 34,
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
  [5047] = 2,
    ACTIONS(470), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(468), 33,
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
  [5111] = 2,
    ACTIONS(458), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(456), 34,
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
  [5175] = 2,
    ACTIONS(407), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(405), 33,
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
  [5239] = 2,
    ACTIONS(462), 26,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(460), 33,
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
  [5303] = 2,
    ACTIONS(486), 25,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_delimited_right_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(484), 34,
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
  [5367] = 3,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(103), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(428), 33,
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
  [5432] = 5,
    ACTIONS(275), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(277), 1,
      aux_sym_math_fence_token1,
    STATE(146), 1,
      sym_math_fence,
    ACTIONS(434), 23,
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
      aux_sym_math_delimited_left_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(432), 32,
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
      sym_string,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [5501] = 2,
    ACTIONS(462), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(460), 33,
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
  [5563] = 2,
    ACTIONS(494), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(492), 33,
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
  [5625] = 5,
    ACTIONS(537), 1,
      anon_sym__,
    ACTIONS(539), 1,
      anon_sym_CARET,
    ACTIONS(541), 1,
      anon_sym_SLASH,
    ACTIONS(531), 21,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      sym_math_text,
      sym_math_ident,
    ACTIONS(529), 33,
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
  [5693] = 2,
    ACTIONS(486), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(484), 33,
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
  [5755] = 2,
    ACTIONS(458), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(456), 33,
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
  [5817] = 2,
    ACTIONS(482), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(480), 33,
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
  [5879] = 3,
    ACTIONS(537), 1,
      anon_sym__,
    ACTIONS(506), 23,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(504), 33,
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
  [5943] = 2,
    ACTIONS(498), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(496), 33,
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
  [6005] = 2,
    ACTIONS(502), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(500), 33,
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
  [6067] = 2,
    ACTIONS(470), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(468), 33,
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
  [6129] = 2,
    ACTIONS(490), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(488), 33,
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
  [6191] = 2,
    ACTIONS(466), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(464), 33,
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
  [6253] = 2,
    ACTIONS(478), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(476), 33,
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
  [6315] = 4,
    ACTIONS(537), 1,
      anon_sym__,
    ACTIONS(539), 1,
      anon_sym_CARET,
    ACTIONS(510), 22,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(508), 33,
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
  [6381] = 2,
    ACTIONS(474), 24,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym__,
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(472), 33,
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
  [6443] = 4,
    ACTIONS(537), 1,
      anon_sym__,
    ACTIONS(539), 1,
      anon_sym_CARET,
    ACTIONS(446), 22,
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
      aux_sym_math_delimited_left_token1,
      aux_sym_math_fence_token1,
      sym_math_align_point,
      anon_sym_,
      anon_sym_2,
      anon_sym_3,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
    ACTIONS(444), 33,
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
  [6509] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(543), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(547), 1,
      aux_sym_link_token1,
    ACTIONS(549), 1,
      anon_sym_LT,
    ACTIONS(551), 1,
      anon_sym_AT,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    ACTIONS(557), 1,
      sym_line_comment,
    ACTIONS(559), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      sym_parbreak,
    ACTIONS(565), 1,
      sym__delim_strong,
    ACTIONS(567), 1,
      sym__delim_emph,
    STATE(154), 1,
      sym_space,
    STATE(185), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(194), 1,
      sym_block_comment,
    STATE(240), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(286), 1,
      sym_heading,
    STATE(301), 1,
      sym_markup,
    ACTIONS(561), 2,
      sym__space,
      sym__newline,
    ACTIONS(545), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(158), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [6587] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(543), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(547), 1,
      aux_sym_link_token1,
    ACTIONS(549), 1,
      anon_sym_LT,
    ACTIONS(551), 1,
      anon_sym_AT,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(557), 1,
      sym_line_comment,
    ACTIONS(559), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      sym_parbreak,
    ACTIONS(565), 1,
      sym__delim_strong,
    ACTIONS(567), 1,
      sym__delim_emph,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_space,
    STATE(185), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(194), 1,
      sym_block_comment,
    STATE(240), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(286), 1,
      sym_heading,
    STATE(321), 1,
      sym_markup,
    ACTIONS(561), 2,
      sym__space,
      sym__newline,
    ACTIONS(545), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(158), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [6665] = 21,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(543), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(547), 1,
      aux_sym_link_token1,
    ACTIONS(549), 1,
      anon_sym_LT,
    ACTIONS(551), 1,
      anon_sym_AT,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(557), 1,
      sym_line_comment,
    ACTIONS(559), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(563), 1,
      sym_parbreak,
    ACTIONS(565), 1,
      sym__delim_strong,
    ACTIONS(567), 1,
      sym__delim_emph,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_space,
    STATE(185), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(194), 1,
      sym_block_comment,
    STATE(240), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(286), 1,
      sym_heading,
    STATE(306), 1,
      sym_markup,
    ACTIONS(561), 2,
      sym__space,
      sym__newline,
    ACTIONS(545), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(158), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
  [6743] = 12,
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
    ACTIONS(573), 1,
      ts_builtin_sym_end,
    ACTIONS(575), 1,
      aux_sym__markup_expr_text_token1,
    STATE(293), 1,
      sym__whitespace_line,
    ACTIONS(577), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    ACTIONS(579), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    STATE(159), 12,
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
  [6801] = 12,
    ACTIONS(547), 1,
      aux_sym_link_token1,
    ACTIONS(549), 1,
      anon_sym_LT,
    ACTIONS(551), 1,
      anon_sym_AT,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(565), 1,
      sym__delim_strong,
    ACTIONS(567), 1,
      sym__delim_emph,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    ACTIONS(581), 1,
      aux_sym__markup_expr_text_token1,
    STATE(291), 1,
      sym__whitespace_line,
    ACTIONS(579), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(156), 12,
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
  [6859] = 15,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
    ACTIONS(587), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(593), 1,
      aux_sym_link_token1,
    ACTIONS(596), 1,
      anon_sym_LT,
    ACTIONS(599), 1,
      anon_sym_AT,
    ACTIONS(602), 1,
      anon_sym_DOLLAR,
    ACTIONS(605), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(608), 1,
      sym__space,
    ACTIONS(611), 1,
      sym_parbreak,
    ACTIONS(614), 1,
      sym__newline,
    ACTIONS(617), 1,
      sym__delim_strong,
    ACTIONS(620), 1,
      sym__delim_emph,
    STATE(293), 1,
      sym__whitespace_line,
    ACTIONS(590), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(155), 12,
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
  [6922] = 15,
    ACTIONS(547), 1,
      aux_sym_link_token1,
    ACTIONS(549), 1,
      anon_sym_LT,
    ACTIONS(551), 1,
      anon_sym_AT,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(565), 1,
      sym__delim_strong,
    ACTIONS(567), 1,
      sym__delim_emph,
    ACTIONS(623), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    ACTIONS(629), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(631), 1,
      sym__space,
    ACTIONS(633), 1,
      sym_parbreak,
    ACTIONS(635), 1,
      sym__newline,
    STATE(291), 1,
      sym__whitespace_line,
    ACTIONS(625), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(157), 12,
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
  [6985] = 15,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
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
    ACTIONS(658), 1,
      sym__space,
    ACTIONS(661), 1,
      sym_parbreak,
    ACTIONS(664), 1,
      sym__newline,
    ACTIONS(667), 1,
      sym__delim_strong,
    ACTIONS(670), 1,
      sym__delim_emph,
    STATE(291), 1,
      sym__whitespace_line,
    ACTIONS(640), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(157), 12,
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
  [7048] = 15,
    ACTIONS(547), 1,
      aux_sym_link_token1,
    ACTIONS(549), 1,
      anon_sym_LT,
    ACTIONS(551), 1,
      anon_sym_AT,
    ACTIONS(553), 1,
      anon_sym_DOLLAR,
    ACTIONS(565), 1,
      sym__delim_strong,
    ACTIONS(567), 1,
      sym__delim_emph,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    ACTIONS(581), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(629), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(631), 1,
      sym__space,
    ACTIONS(633), 1,
      sym_parbreak,
    ACTIONS(635), 1,
      sym__newline,
    STATE(291), 1,
      sym__whitespace_line,
    ACTIONS(583), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(156), 12,
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
  [7111] = 15,
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
    ACTIONS(627), 1,
      ts_builtin_sym_end,
    ACTIONS(673), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(677), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym__space,
    ACTIONS(681), 1,
      sym_parbreak,
    ACTIONS(683), 1,
      sym__newline,
    STATE(293), 1,
      sym__whitespace_line,
    ACTIONS(675), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(155), 12,
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
  [7174] = 15,
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
    ACTIONS(573), 1,
      ts_builtin_sym_end,
    ACTIONS(575), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(677), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym__space,
    ACTIONS(681), 1,
      sym_parbreak,
    ACTIONS(683), 1,
      sym__newline,
    STATE(293), 1,
      sym__whitespace_line,
    ACTIONS(577), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(159), 12,
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
  [7237] = 15,
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
    ACTIONS(677), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym__space,
    ACTIONS(683), 1,
      sym__newline,
    ACTIONS(685), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(689), 1,
      sym_parbreak,
    ACTIONS(691), 1,
      sym__delim_strong,
    STATE(170), 1,
      aux_sym__markup_strong_repeat1,
    STATE(293), 1,
      sym__whitespace_line,
    ACTIONS(687), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(237), 10,
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
  [7298] = 15,
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
    ACTIONS(677), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym__space,
    ACTIONS(683), 1,
      sym__newline,
    ACTIONS(685), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(689), 1,
      sym_parbreak,
    STATE(161), 1,
      aux_sym__markup_strong_repeat1,
    STATE(293), 1,
      sym__whitespace_line,
    STATE(313), 1,
      sym__markup_strong,
    ACTIONS(687), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(237), 10,
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
  [7359] = 12,
    ACTIONS(693), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(697), 1,
      aux_sym_link_token1,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(701), 1,
      anon_sym_AT,
    ACTIONS(703), 1,
      anon_sym_DOLLAR,
    ACTIONS(705), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(709), 1,
      sym__delim_strong,
    ACTIONS(711), 1,
      sym__delim_emph,
    STATE(172), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(707), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(695), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(218), 10,
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
  [7414] = 15,
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
    ACTIONS(677), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym__space,
    ACTIONS(683), 1,
      sym__newline,
    ACTIONS(689), 1,
      sym_parbreak,
    ACTIONS(713), 1,
      aux_sym__markup_expr_text_token1,
    STATE(166), 1,
      aux_sym__markup_emph_repeat1,
    STATE(293), 1,
      sym__whitespace_line,
    STATE(299), 1,
      sym__markup_emph,
    ACTIONS(715), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(238), 10,
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
  [7475] = 15,
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
    ACTIONS(677), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym__space,
    ACTIONS(683), 1,
      sym__newline,
    ACTIONS(689), 1,
      sym_parbreak,
    ACTIONS(713), 1,
      aux_sym__markup_expr_text_token1,
    STATE(166), 1,
      aux_sym__markup_emph_repeat1,
    STATE(293), 1,
      sym__whitespace_line,
    STATE(309), 1,
      sym__markup_emph,
    ACTIONS(715), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(238), 10,
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
  [7536] = 15,
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
    ACTIONS(677), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym__space,
    ACTIONS(683), 1,
      sym__newline,
    ACTIONS(689), 1,
      sym_parbreak,
    ACTIONS(713), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(717), 1,
      sym__delim_emph,
    STATE(171), 1,
      aux_sym__markup_emph_repeat1,
    STATE(293), 1,
      sym__whitespace_line,
    ACTIONS(715), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(238), 10,
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
  [7597] = 15,
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
    ACTIONS(677), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym__space,
    ACTIONS(683), 1,
      sym__newline,
    ACTIONS(685), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(689), 1,
      sym_parbreak,
    STATE(161), 1,
      aux_sym__markup_strong_repeat1,
    STATE(293), 1,
      sym__whitespace_line,
    STATE(310), 1,
      sym__markup_strong,
    ACTIONS(687), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(237), 10,
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
  [7658] = 15,
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
    ACTIONS(677), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym__space,
    ACTIONS(683), 1,
      sym__newline,
    ACTIONS(685), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(689), 1,
      sym_parbreak,
    STATE(161), 1,
      aux_sym__markup_strong_repeat1,
    STATE(293), 1,
      sym__whitespace_line,
    STATE(300), 1,
      sym__markup_strong,
    ACTIONS(687), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(237), 10,
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
  [7719] = 15,
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
    ACTIONS(677), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      sym__space,
    ACTIONS(683), 1,
      sym__newline,
    ACTIONS(689), 1,
      sym_parbreak,
    ACTIONS(713), 1,
      aux_sym__markup_expr_text_token1,
    STATE(166), 1,
      aux_sym__markup_emph_repeat1,
    STATE(293), 1,
      sym__whitespace_line,
    STATE(316), 1,
      sym__markup_emph,
    ACTIONS(715), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(238), 10,
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
  [7780] = 15,
    ACTIONS(719), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(725), 1,
      aux_sym_link_token1,
    ACTIONS(728), 1,
      anon_sym_LT,
    ACTIONS(731), 1,
      anon_sym_AT,
    ACTIONS(734), 1,
      anon_sym_DOLLAR,
    ACTIONS(737), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(740), 1,
      sym__space,
    ACTIONS(743), 1,
      sym_parbreak,
    ACTIONS(746), 1,
      sym__newline,
    ACTIONS(749), 1,
      sym__delim_strong,
    ACTIONS(751), 1,
      sym__delim_emph,
    STATE(170), 1,
      aux_sym__markup_strong_repeat1,
    STATE(293), 1,
      sym__whitespace_line,
    ACTIONS(722), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(237), 10,
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
  [7841] = 15,
    ACTIONS(754), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(760), 1,
      aux_sym_link_token1,
    ACTIONS(763), 1,
      anon_sym_LT,
    ACTIONS(766), 1,
      anon_sym_AT,
    ACTIONS(769), 1,
      anon_sym_DOLLAR,
    ACTIONS(772), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(775), 1,
      sym__space,
    ACTIONS(778), 1,
      sym_parbreak,
    ACTIONS(781), 1,
      sym__newline,
    ACTIONS(784), 1,
      sym__delim_strong,
    ACTIONS(787), 1,
      sym__delim_emph,
    STATE(171), 1,
      aux_sym__markup_emph_repeat1,
    STATE(293), 1,
      sym__whitespace_line,
    ACTIONS(757), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(238), 10,
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
  [7902] = 12,
    ACTIONS(789), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(795), 1,
      aux_sym_link_token1,
    ACTIONS(798), 1,
      anon_sym_LT,
    ACTIONS(801), 1,
      anon_sym_AT,
    ACTIONS(804), 1,
      anon_sym_DOLLAR,
    ACTIONS(807), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(812), 1,
      sym__delim_strong,
    ACTIONS(815), 1,
      sym__delim_emph,
    STATE(172), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(810), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(792), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(218), 10,
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
  [7957] = 13,
    ACTIONS(693), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(697), 1,
      aux_sym_link_token1,
    ACTIONS(699), 1,
      anon_sym_LT,
    ACTIONS(701), 1,
      anon_sym_AT,
    ACTIONS(703), 1,
      anon_sym_DOLLAR,
    ACTIONS(705), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(709), 1,
      sym__delim_strong,
    ACTIONS(711), 1,
      sym__delim_emph,
    ACTIONS(818), 1,
      sym__token_eof,
    STATE(163), 1,
      aux_sym__markup_same_line_repeat1,
    STATE(292), 1,
      sym__markup_same_line,
    ACTIONS(695), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(218), 10,
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
  [8013] = 6,
    ACTIONS(462), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(820), 1,
      sym_heading_start,
    ACTIONS(822), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(824), 1,
      aux_sym__space_same_line_token1,
    STATE(274), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(460), 17,
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
  [8050] = 6,
    ACTIONS(820), 1,
      sym_heading_start,
    ACTIONS(822), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(824), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(828), 1,
      aux_sym__markup_expr_text_token1,
    STATE(274), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(826), 17,
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
  [8087] = 6,
    ACTIONS(820), 1,
      sym_heading_start,
    ACTIONS(822), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(824), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(828), 1,
      aux_sym__markup_expr_text_token1,
    STATE(274), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(826), 17,
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
  [8124] = 6,
    ACTIONS(462), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(820), 1,
      sym_heading_start,
    ACTIONS(822), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(824), 1,
      aux_sym__space_same_line_token1,
    STATE(274), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(460), 17,
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
  [8161] = 5,
    ACTIONS(832), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(834), 1,
      sym_heading_start,
    STATE(178), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(294), 1,
      sym_heading,
    ACTIONS(830), 18,
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
  [8194] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(839), 1,
      aux_sym__markup_expr_text_token1,
    STATE(178), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(294), 1,
      sym_heading,
    ACTIONS(837), 18,
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
  [8227] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(839), 1,
      aux_sym__markup_expr_text_token1,
    STATE(184), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(286), 1,
      sym_heading,
    ACTIONS(837), 18,
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
  [8260] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(843), 1,
      aux_sym__markup_expr_text_token1,
    STATE(178), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(294), 1,
      sym_heading,
    ACTIONS(841), 18,
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
  [8293] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(847), 1,
      aux_sym__markup_expr_text_token1,
    STATE(178), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(294), 1,
      sym_heading,
    ACTIONS(845), 18,
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
  [8326] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(847), 1,
      aux_sym__markup_expr_text_token1,
    STATE(184), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(286), 1,
      sym_heading,
    ACTIONS(845), 18,
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
  [8359] = 5,
    ACTIONS(832), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(834), 1,
      sym_heading_start,
    STATE(184), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(286), 1,
      sym_heading,
    ACTIONS(830), 18,
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
  [8392] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(843), 1,
      aux_sym__markup_expr_text_token1,
    STATE(184), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(286), 1,
      sym_heading,
    ACTIONS(841), 18,
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
  [8425] = 4,
    ACTIONS(849), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(853), 1,
      anon_sym_LBRACK,
    STATE(207), 1,
      sym_content_block,
    ACTIONS(851), 18,
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
  [8455] = 4,
    ACTIONS(849), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(855), 1,
      anon_sym_LBRACK,
    STATE(203), 1,
      sym_content_block,
    ACTIONS(851), 18,
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
  [8485] = 4,
    ACTIONS(849), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(857), 1,
      anon_sym_LBRACK,
    STATE(236), 1,
      sym_content_block,
    ACTIONS(851), 18,
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
  [8515] = 2,
    ACTIONS(466), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(464), 19,
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
  [8540] = 2,
    ACTIONS(458), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(456), 19,
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
  [8565] = 2,
    ACTIONS(466), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(464), 19,
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
  [8590] = 2,
    ACTIONS(462), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(460), 19,
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
  [8615] = 3,
    ACTIONS(861), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(579), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(859), 13,
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
  [8642] = 3,
    ACTIONS(861), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(579), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(859), 13,
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
  [8669] = 2,
    ACTIONS(832), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(830), 19,
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
  [8694] = 2,
    ACTIONS(863), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(865), 19,
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
  [8719] = 2,
    ACTIONS(458), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(456), 19,
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
  [8744] = 2,
    ACTIONS(863), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(865), 19,
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
  [8769] = 2,
    ACTIONS(832), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(830), 19,
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
  [8794] = 2,
    ACTIONS(462), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(460), 19,
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
  [8819] = 2,
    ACTIONS(867), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(869), 18,
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
  [8843] = 2,
    ACTIONS(873), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(871), 18,
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
  [8867] = 2,
    ACTIONS(877), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(875), 18,
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
  [8891] = 2,
    ACTIONS(879), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(881), 18,
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
  [8915] = 2,
    ACTIONS(883), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(885), 18,
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
  [8939] = 2,
    ACTIONS(887), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(889), 18,
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
  [8963] = 2,
    ACTIONS(877), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(875), 18,
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
  [8987] = 2,
    ACTIONS(887), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(889), 18,
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
  [9011] = 2,
    ACTIONS(891), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(893), 18,
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
  [9035] = 2,
    ACTIONS(883), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(885), 18,
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
  [9059] = 2,
    ACTIONS(879), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(881), 18,
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
  [9083] = 2,
    ACTIONS(867), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(869), 18,
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
  [9107] = 2,
    ACTIONS(873), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(871), 18,
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
  [9131] = 2,
    ACTIONS(458), 1,
      aux_sym__markup_expr_text_token1,
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
  [9155] = 2,
    ACTIONS(462), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(460), 18,
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
  [9179] = 2,
    ACTIONS(895), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(897), 18,
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
  [9203] = 2,
    ACTIONS(899), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(901), 18,
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
  [9227] = 2,
    ACTIONS(903), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(905), 18,
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
  [9251] = 2,
    ACTIONS(899), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(901), 18,
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
  [9275] = 2,
    ACTIONS(895), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(897), 18,
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
  [9299] = 2,
    ACTIONS(867), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(869), 18,
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
  [9323] = 2,
    ACTIONS(462), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(460), 18,
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
  [9347] = 2,
    ACTIONS(466), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(464), 18,
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
  [9371] = 2,
    ACTIONS(458), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(456), 18,
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
  [9395] = 2,
    ACTIONS(873), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(871), 18,
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
  [9419] = 2,
    ACTIONS(466), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(464), 18,
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
  [9443] = 2,
    ACTIONS(899), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(901), 18,
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
  [9467] = 2,
    ACTIONS(891), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(893), 18,
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
  [9491] = 2,
    ACTIONS(466), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(464), 18,
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
  [9515] = 2,
    ACTIONS(458), 1,
      aux_sym__markup_expr_text_token1,
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
  [9539] = 2,
    ACTIONS(879), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(881), 18,
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
  [9563] = 2,
    ACTIONS(895), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(897), 18,
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
  [9587] = 2,
    ACTIONS(891), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(893), 18,
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
  [9611] = 2,
    ACTIONS(883), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(885), 18,
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
  [9635] = 2,
    ACTIONS(887), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(889), 18,
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
  [9659] = 2,
    ACTIONS(877), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(875), 18,
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
  [9683] = 2,
    ACTIONS(907), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(909), 17,
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
  [9706] = 2,
    ACTIONS(911), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(913), 17,
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
  [9729] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(917), 1,
      anon_sym_SLASH_STAR,
    STATE(182), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(294), 1,
      sym_heading,
    ACTIONS(915), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(919), 2,
      sym__space,
      sym__newline,
    STATE(241), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [9755] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(917), 1,
      anon_sym_SLASH_STAR,
    STATE(183), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(286), 1,
      sym_heading,
    ACTIONS(915), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(919), 2,
      sym__space,
      sym__newline,
    STATE(241), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [9781] = 5,
    ACTIONS(921), 1,
      sym_heading_start,
    ACTIONS(926), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(923), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(929), 2,
      sym__space,
      sym__newline,
    STATE(241), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [9801] = 5,
    ACTIONS(932), 1,
      sym_line_comment,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(936), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(938), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(256), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9820] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(940), 1,
      sym_line_comment,
    ACTIONS(942), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(944), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(254), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9839] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(950), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9858] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(952), 1,
      sym_line_comment,
    ACTIONS(954), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(956), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(248), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9877] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(958), 1,
      sym_line_comment,
    ACTIONS(960), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(962), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(255), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9896] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(964), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9915] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(966), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9934] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(968), 1,
      sym_line_comment,
    ACTIONS(970), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(972), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(247), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9953] = 5,
    ACTIONS(974), 1,
      sym_line_comment,
    ACTIONS(977), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(980), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(983), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9972] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(985), 1,
      sym_line_comment,
    ACTIONS(987), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(989), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(244), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [9991] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(991), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10010] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(993), 1,
      sym_line_comment,
    ACTIONS(995), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(997), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(252), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10029] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(999), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10048] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1001), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10067] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1003), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10086] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1005), 1,
      sym_line_comment,
    ACTIONS(1007), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1009), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(258), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10105] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1011), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10124] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1013), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10143] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1015), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10162] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1017), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10181] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1019), 1,
      sym_line_comment,
    ACTIONS(1021), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1023), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(263), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10200] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(946), 1,
      sym_line_comment,
    ACTIONS(948), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1025), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(250), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10219] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1027), 1,
      sym_line_comment,
    ACTIONS(1029), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1031), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(259), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10238] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1033), 1,
      sym_line_comment,
    ACTIONS(1035), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1037), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(260), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10257] = 5,
    ACTIONS(934), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1039), 1,
      sym_line_comment,
    ACTIONS(1041), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1043), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(261), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [10276] = 2,
    ACTIONS(466), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(464), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [10287] = 1,
    ACTIONS(460), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10296] = 2,
    ACTIONS(458), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(456), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [10307] = 4,
    ACTIONS(1045), 1,
      sym_heading_start,
    ACTIONS(1047), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 1,
      aux_sym__space_same_line_token1,
    STATE(270), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [10322] = 4,
    ACTIONS(820), 1,
      sym_heading_start,
    ACTIONS(822), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(824), 1,
      aux_sym__space_same_line_token1,
    STATE(274), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [10337] = 1,
    ACTIONS(456), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10346] = 1,
    ACTIONS(464), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10355] = 4,
    ACTIONS(822), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1053), 1,
      sym_heading_start,
    ACTIONS(1055), 1,
      aux_sym__space_same_line_token1,
    STATE(270), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [10370] = 3,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    ACTIONS(1059), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(275), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [10382] = 3,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    ACTIONS(1064), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(275), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [10394] = 3,
    ACTIONS(1062), 1,
      anon_sym_RPAREN,
    ACTIONS(1064), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(279), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [10406] = 3,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    ACTIONS(1064), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(275), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [10418] = 3,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(1064), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(275), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [10430] = 3,
    ACTIONS(1068), 1,
      anon_sym_RPAREN,
    ACTIONS(1064), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(278), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [10442] = 3,
    ACTIONS(1070), 1,
      sym_math_text,
    ACTIONS(1072), 1,
      sym_math_ident,
    STATE(79), 1,
      sym__math_text_ident,
  [10452] = 1,
    ACTIONS(464), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [10458] = 3,
    ACTIONS(1074), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(1076), 1,
      sym__token_eof,
    STATE(173), 1,
      sym__space_same_line,
  [10468] = 1,
    ACTIONS(1078), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10474] = 3,
    ACTIONS(1080), 1,
      sym_math_text,
    ACTIONS(1082), 1,
      sym_math_ident,
    STATE(72), 1,
      sym__math_text_ident,
  [10484] = 2,
    ACTIONS(1086), 1,
      sym__newline,
    ACTIONS(1084), 2,
      sym__token_eof,
      sym_parbreak,
  [10492] = 3,
    ACTIONS(1088), 1,
      sym_math_text,
    ACTIONS(1090), 1,
      sym_math_ident,
    STATE(129), 1,
      sym__math_text_ident,
  [10502] = 1,
    ACTIONS(1092), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [10508] = 1,
    ACTIONS(1094), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [10514] = 1,
    ACTIONS(1096), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10520] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(180), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(286), 1,
      sym_heading,
  [10530] = 1,
    ACTIONS(1098), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [10536] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(179), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(294), 1,
      sym_heading,
  [10546] = 2,
    ACTIONS(1102), 1,
      sym__newline,
    ACTIONS(1100), 2,
      sym__token_eof,
      sym_parbreak,
  [10554] = 1,
    ACTIONS(456), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [10560] = 1,
    ACTIONS(1104), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10566] = 3,
    ACTIONS(1106), 1,
      sym_math_text,
    ACTIONS(1108), 1,
      sym_math_ident,
    STATE(55), 1,
      sym__math_text_ident,
  [10576] = 1,
    ACTIONS(1110), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [10582] = 1,
    ACTIONS(1112), 1,
      sym__delim_emph,
  [10586] = 1,
    ACTIONS(1114), 1,
      sym__delim_strong,
  [10590] = 1,
    ACTIONS(1116), 1,
      anon_sym_RBRACK,
  [10594] = 1,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
  [10598] = 1,
    ACTIONS(1120), 1,
      ts_builtin_sym_end,
  [10602] = 1,
    ACTIONS(1122), 1,
      ts_builtin_sym_end,
  [10606] = 1,
    ACTIONS(1124), 1,
      anon_sym_DOLLAR,
  [10610] = 1,
    ACTIONS(1126), 1,
      anon_sym_RBRACK,
  [10614] = 1,
    ACTIONS(1128), 1,
      anon_sym_RPAREN,
  [10618] = 1,
    ACTIONS(1130), 1,
      anon_sym_DOLLAR,
  [10622] = 1,
    ACTIONS(1132), 1,
      sym__delim_emph,
  [10626] = 1,
    ACTIONS(1134), 1,
      sym__delim_strong,
  [10630] = 1,
    ACTIONS(1136), 1,
      anon_sym_GT,
  [10634] = 1,
    ACTIONS(1138), 1,
      aux_sym_reference_token1,
  [10638] = 1,
    ACTIONS(1140), 1,
      sym__delim_strong,
  [10642] = 1,
    ACTIONS(1142), 1,
      anon_sym_GT,
  [10646] = 1,
    ACTIONS(1144), 1,
      aux_sym_reference_token1,
  [10650] = 1,
    ACTIONS(1146), 1,
      sym__delim_emph,
  [10654] = 1,
    ACTIONS(1148), 1,
      sym__link_end,
  [10658] = 1,
    ACTIONS(1150), 1,
      anon_sym_GT,
  [10662] = 1,
    ACTIONS(1152), 1,
      sym__link_end,
  [10666] = 1,
    ACTIONS(1154), 1,
      anon_sym_RPAREN,
  [10670] = 1,
    ACTIONS(1156), 1,
      anon_sym_RBRACK,
  [10674] = 1,
    ACTIONS(1158), 1,
      anon_sym_DOLLAR,
  [10678] = 1,
    ACTIONS(1160), 1,
      aux_sym_label_token1,
  [10682] = 1,
    ACTIONS(1162), 1,
      aux_sym_reference_token1,
  [10686] = 1,
    ACTIONS(1164), 1,
      sym__link_end,
  [10690] = 1,
    ACTIONS(1166), 1,
      aux_sym_label_token1,
  [10694] = 1,
    ACTIONS(1168), 1,
      anon_sym_COLON,
  [10698] = 1,
    ACTIONS(1170), 1,
      anon_sym_RPAREN,
  [10702] = 1,
    ACTIONS(1172), 1,
      aux_sym_label_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(52)] = 0,
  [SMALL_STATE(53)] = 73,
  [SMALL_STATE(54)] = 146,
  [SMALL_STATE(55)] = 219,
  [SMALL_STATE(56)] = 287,
  [SMALL_STATE(57)] = 355,
  [SMALL_STATE(58)] = 429,
  [SMALL_STATE(59)] = 502,
  [SMALL_STATE(60)] = 571,
  [SMALL_STATE(61)] = 642,
  [SMALL_STATE(62)] = 715,
  [SMALL_STATE(63)] = 786,
  [SMALL_STATE(64)] = 857,
  [SMALL_STATE(65)] = 930,
  [SMALL_STATE(66)] = 1001,
  [SMALL_STATE(67)] = 1072,
  [SMALL_STATE(68)] = 1143,
  [SMALL_STATE(69)] = 1213,
  [SMALL_STATE(70)] = 1279,
  [SMALL_STATE(71)] = 1345,
  [SMALL_STATE(72)] = 1411,
  [SMALL_STATE(73)] = 1477,
  [SMALL_STATE(74)] = 1543,
  [SMALL_STATE(75)] = 1609,
  [SMALL_STATE(76)] = 1675,
  [SMALL_STATE(77)] = 1741,
  [SMALL_STATE(78)] = 1807,
  [SMALL_STATE(79)] = 1873,
  [SMALL_STATE(80)] = 1939,
  [SMALL_STATE(81)] = 2005,
  [SMALL_STATE(82)] = 2071,
  [SMALL_STATE(83)] = 2137,
  [SMALL_STATE(84)] = 2203,
  [SMALL_STATE(85)] = 2269,
  [SMALL_STATE(86)] = 2335,
  [SMALL_STATE(87)] = 2403,
  [SMALL_STATE(88)] = 2473,
  [SMALL_STATE(89)] = 2544,
  [SMALL_STATE(90)] = 2611,
  [SMALL_STATE(91)] = 2680,
  [SMALL_STATE(92)] = 2747,
  [SMALL_STATE(93)] = 2816,
  [SMALL_STATE(94)] = 2885,
  [SMALL_STATE(95)] = 2956,
  [SMALL_STATE(96)] = 3027,
  [SMALL_STATE(97)] = 3098,
  [SMALL_STATE(98)] = 3165,
  [SMALL_STATE(99)] = 3229,
  [SMALL_STATE(100)] = 3293,
  [SMALL_STATE(101)] = 3357,
  [SMALL_STATE(102)] = 3421,
  [SMALL_STATE(103)] = 3485,
  [SMALL_STATE(104)] = 3551,
  [SMALL_STATE(105)] = 3619,
  [SMALL_STATE(106)] = 3683,
  [SMALL_STATE(107)] = 3747,
  [SMALL_STATE(108)] = 3811,
  [SMALL_STATE(109)] = 3879,
  [SMALL_STATE(110)] = 3943,
  [SMALL_STATE(111)] = 4007,
  [SMALL_STATE(112)] = 4071,
  [SMALL_STATE(113)] = 4135,
  [SMALL_STATE(114)] = 4199,
  [SMALL_STATE(115)] = 4263,
  [SMALL_STATE(116)] = 4327,
  [SMALL_STATE(117)] = 4391,
  [SMALL_STATE(118)] = 4459,
  [SMALL_STATE(119)] = 4523,
  [SMALL_STATE(120)] = 4587,
  [SMALL_STATE(121)] = 4655,
  [SMALL_STATE(122)] = 4725,
  [SMALL_STATE(123)] = 4791,
  [SMALL_STATE(124)] = 4855,
  [SMALL_STATE(125)] = 4919,
  [SMALL_STATE(126)] = 4983,
  [SMALL_STATE(127)] = 5047,
  [SMALL_STATE(128)] = 5111,
  [SMALL_STATE(129)] = 5175,
  [SMALL_STATE(130)] = 5239,
  [SMALL_STATE(131)] = 5303,
  [SMALL_STATE(132)] = 5367,
  [SMALL_STATE(133)] = 5432,
  [SMALL_STATE(134)] = 5501,
  [SMALL_STATE(135)] = 5563,
  [SMALL_STATE(136)] = 5625,
  [SMALL_STATE(137)] = 5693,
  [SMALL_STATE(138)] = 5755,
  [SMALL_STATE(139)] = 5817,
  [SMALL_STATE(140)] = 5879,
  [SMALL_STATE(141)] = 5943,
  [SMALL_STATE(142)] = 6005,
  [SMALL_STATE(143)] = 6067,
  [SMALL_STATE(144)] = 6129,
  [SMALL_STATE(145)] = 6191,
  [SMALL_STATE(146)] = 6253,
  [SMALL_STATE(147)] = 6315,
  [SMALL_STATE(148)] = 6381,
  [SMALL_STATE(149)] = 6443,
  [SMALL_STATE(150)] = 6509,
  [SMALL_STATE(151)] = 6587,
  [SMALL_STATE(152)] = 6665,
  [SMALL_STATE(153)] = 6743,
  [SMALL_STATE(154)] = 6801,
  [SMALL_STATE(155)] = 6859,
  [SMALL_STATE(156)] = 6922,
  [SMALL_STATE(157)] = 6985,
  [SMALL_STATE(158)] = 7048,
  [SMALL_STATE(159)] = 7111,
  [SMALL_STATE(160)] = 7174,
  [SMALL_STATE(161)] = 7237,
  [SMALL_STATE(162)] = 7298,
  [SMALL_STATE(163)] = 7359,
  [SMALL_STATE(164)] = 7414,
  [SMALL_STATE(165)] = 7475,
  [SMALL_STATE(166)] = 7536,
  [SMALL_STATE(167)] = 7597,
  [SMALL_STATE(168)] = 7658,
  [SMALL_STATE(169)] = 7719,
  [SMALL_STATE(170)] = 7780,
  [SMALL_STATE(171)] = 7841,
  [SMALL_STATE(172)] = 7902,
  [SMALL_STATE(173)] = 7957,
  [SMALL_STATE(174)] = 8013,
  [SMALL_STATE(175)] = 8050,
  [SMALL_STATE(176)] = 8087,
  [SMALL_STATE(177)] = 8124,
  [SMALL_STATE(178)] = 8161,
  [SMALL_STATE(179)] = 8194,
  [SMALL_STATE(180)] = 8227,
  [SMALL_STATE(181)] = 8260,
  [SMALL_STATE(182)] = 8293,
  [SMALL_STATE(183)] = 8326,
  [SMALL_STATE(184)] = 8359,
  [SMALL_STATE(185)] = 8392,
  [SMALL_STATE(186)] = 8425,
  [SMALL_STATE(187)] = 8455,
  [SMALL_STATE(188)] = 8485,
  [SMALL_STATE(189)] = 8515,
  [SMALL_STATE(190)] = 8540,
  [SMALL_STATE(191)] = 8565,
  [SMALL_STATE(192)] = 8590,
  [SMALL_STATE(193)] = 8615,
  [SMALL_STATE(194)] = 8642,
  [SMALL_STATE(195)] = 8669,
  [SMALL_STATE(196)] = 8694,
  [SMALL_STATE(197)] = 8719,
  [SMALL_STATE(198)] = 8744,
  [SMALL_STATE(199)] = 8769,
  [SMALL_STATE(200)] = 8794,
  [SMALL_STATE(201)] = 8819,
  [SMALL_STATE(202)] = 8843,
  [SMALL_STATE(203)] = 8867,
  [SMALL_STATE(204)] = 8891,
  [SMALL_STATE(205)] = 8915,
  [SMALL_STATE(206)] = 8939,
  [SMALL_STATE(207)] = 8963,
  [SMALL_STATE(208)] = 8987,
  [SMALL_STATE(209)] = 9011,
  [SMALL_STATE(210)] = 9035,
  [SMALL_STATE(211)] = 9059,
  [SMALL_STATE(212)] = 9083,
  [SMALL_STATE(213)] = 9107,
  [SMALL_STATE(214)] = 9131,
  [SMALL_STATE(215)] = 9155,
  [SMALL_STATE(216)] = 9179,
  [SMALL_STATE(217)] = 9203,
  [SMALL_STATE(218)] = 9227,
  [SMALL_STATE(219)] = 9251,
  [SMALL_STATE(220)] = 9275,
  [SMALL_STATE(221)] = 9299,
  [SMALL_STATE(222)] = 9323,
  [SMALL_STATE(223)] = 9347,
  [SMALL_STATE(224)] = 9371,
  [SMALL_STATE(225)] = 9395,
  [SMALL_STATE(226)] = 9419,
  [SMALL_STATE(227)] = 9443,
  [SMALL_STATE(228)] = 9467,
  [SMALL_STATE(229)] = 9491,
  [SMALL_STATE(230)] = 9515,
  [SMALL_STATE(231)] = 9539,
  [SMALL_STATE(232)] = 9563,
  [SMALL_STATE(233)] = 9587,
  [SMALL_STATE(234)] = 9611,
  [SMALL_STATE(235)] = 9635,
  [SMALL_STATE(236)] = 9659,
  [SMALL_STATE(237)] = 9683,
  [SMALL_STATE(238)] = 9706,
  [SMALL_STATE(239)] = 9729,
  [SMALL_STATE(240)] = 9755,
  [SMALL_STATE(241)] = 9781,
  [SMALL_STATE(242)] = 9801,
  [SMALL_STATE(243)] = 9820,
  [SMALL_STATE(244)] = 9839,
  [SMALL_STATE(245)] = 9858,
  [SMALL_STATE(246)] = 9877,
  [SMALL_STATE(247)] = 9896,
  [SMALL_STATE(248)] = 9915,
  [SMALL_STATE(249)] = 9934,
  [SMALL_STATE(250)] = 9953,
  [SMALL_STATE(251)] = 9972,
  [SMALL_STATE(252)] = 9991,
  [SMALL_STATE(253)] = 10010,
  [SMALL_STATE(254)] = 10029,
  [SMALL_STATE(255)] = 10048,
  [SMALL_STATE(256)] = 10067,
  [SMALL_STATE(257)] = 10086,
  [SMALL_STATE(258)] = 10105,
  [SMALL_STATE(259)] = 10124,
  [SMALL_STATE(260)] = 10143,
  [SMALL_STATE(261)] = 10162,
  [SMALL_STATE(262)] = 10181,
  [SMALL_STATE(263)] = 10200,
  [SMALL_STATE(264)] = 10219,
  [SMALL_STATE(265)] = 10238,
  [SMALL_STATE(266)] = 10257,
  [SMALL_STATE(267)] = 10276,
  [SMALL_STATE(268)] = 10287,
  [SMALL_STATE(269)] = 10296,
  [SMALL_STATE(270)] = 10307,
  [SMALL_STATE(271)] = 10322,
  [SMALL_STATE(272)] = 10337,
  [SMALL_STATE(273)] = 10346,
  [SMALL_STATE(274)] = 10355,
  [SMALL_STATE(275)] = 10370,
  [SMALL_STATE(276)] = 10382,
  [SMALL_STATE(277)] = 10394,
  [SMALL_STATE(278)] = 10406,
  [SMALL_STATE(279)] = 10418,
  [SMALL_STATE(280)] = 10430,
  [SMALL_STATE(281)] = 10442,
  [SMALL_STATE(282)] = 10452,
  [SMALL_STATE(283)] = 10458,
  [SMALL_STATE(284)] = 10468,
  [SMALL_STATE(285)] = 10474,
  [SMALL_STATE(286)] = 10484,
  [SMALL_STATE(287)] = 10492,
  [SMALL_STATE(288)] = 10502,
  [SMALL_STATE(289)] = 10508,
  [SMALL_STATE(290)] = 10514,
  [SMALL_STATE(291)] = 10520,
  [SMALL_STATE(292)] = 10530,
  [SMALL_STATE(293)] = 10536,
  [SMALL_STATE(294)] = 10546,
  [SMALL_STATE(295)] = 10554,
  [SMALL_STATE(296)] = 10560,
  [SMALL_STATE(297)] = 10566,
  [SMALL_STATE(298)] = 10576,
  [SMALL_STATE(299)] = 10582,
  [SMALL_STATE(300)] = 10586,
  [SMALL_STATE(301)] = 10590,
  [SMALL_STATE(302)] = 10594,
  [SMALL_STATE(303)] = 10598,
  [SMALL_STATE(304)] = 10602,
  [SMALL_STATE(305)] = 10606,
  [SMALL_STATE(306)] = 10610,
  [SMALL_STATE(307)] = 10614,
  [SMALL_STATE(308)] = 10618,
  [SMALL_STATE(309)] = 10622,
  [SMALL_STATE(310)] = 10626,
  [SMALL_STATE(311)] = 10630,
  [SMALL_STATE(312)] = 10634,
  [SMALL_STATE(313)] = 10638,
  [SMALL_STATE(314)] = 10642,
  [SMALL_STATE(315)] = 10646,
  [SMALL_STATE(316)] = 10650,
  [SMALL_STATE(317)] = 10654,
  [SMALL_STATE(318)] = 10658,
  [SMALL_STATE(319)] = 10662,
  [SMALL_STATE(320)] = 10666,
  [SMALL_STATE(321)] = 10670,
  [SMALL_STATE(322)] = 10674,
  [SMALL_STATE(323)] = 10678,
  [SMALL_STATE(324)] = 10682,
  [SMALL_STATE(325)] = 10686,
  [SMALL_STATE(326)] = 10690,
  [SMALL_STATE(327)] = 10694,
  [SMALL_STATE(328)] = 10698,
  [SMALL_STATE(329)] = 10702,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited, 1, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_fence, 1, .production_id = 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_fence, 1, .production_id = 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_arg, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_expr, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_math_delimited_fence, 1, .production_id = 3), REDUCE(sym_math_delimited_fence, 2, .production_id = 10),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_math_delimited_fence, 1, .production_id = 3), REDUCE(sym_math_delimited_fence, 2, .production_id = 10),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(12),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(12),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(80),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(80),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(69),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(69),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(81),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(81),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(46),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(52),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(262),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(71),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_arg_named, 3, .production_id = 17),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(22),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(22),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(99),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(99),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(100),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(100),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(131),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(131),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(43),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(66),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(251),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(98),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_arg, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(25),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(25),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(123),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(123),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(124),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(124),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(47),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(63),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(242),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(130),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_arg_named, 2, .production_id = 17),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(30),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(30),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(139),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(139),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(137),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(137),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(41),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(93),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(243),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(134),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(121),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(121),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(136),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(136),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_field_access, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_field_access, 1),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_field_access_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(297),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_field_access, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_field_access, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_text_ident, 1, .production_id = 11),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_text_ident, 1, .production_id = 11),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_text_ident, 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited, 2, .production_id = 9),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited, 2, .production_id = 9),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_expr, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_fence, 2, .production_id = 9),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_fence, 2, .production_id = 9),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(281),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(285),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_attach_above, 3, .production_id = 13),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_attach_above, 3, .production_id = 13),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_left, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_left, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_space, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_function_call, 4, .production_id = 16),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_function_call, 4, .production_id = 16),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_function_call, 3),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_function_call, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_fence, 3, .production_id = 15),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_fence, 3, .production_id = 15),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_shorthand, 1),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_shorthand, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_fence, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_fence, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited, 3, .production_id = 15),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited, 3, .production_id = 15),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_root, 2, .production_id = 8),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_root, 2, .production_id = 8),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_right, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_right, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited, 2, .production_id = 10),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited, 2, .production_id = 10),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_attach_below, 3, .production_id = 12),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_attach_below, 3, .production_id = 12),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_frac, 3, .production_id = 14),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_frac, 3, .production_id = 14),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [514] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(287),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 1),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 1),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(155),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(155),
  [593] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(319),
  [596] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(323),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(312),
  [602] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(34),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(264),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(215),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(175),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(174),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(168),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(169),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [637] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(157),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(157),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(317),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(329),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(315),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(33),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(257),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(222),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(176),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(177),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(162),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(164),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_strong, 1, .production_id = 1),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_same_line, 1, .production_id = 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_emph, 1, .production_id = 1),
  [719] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(237),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(237),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(319),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(323),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(312),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(34),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(264),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(215),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(271),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(174),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(169),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(238),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(238),
  [760] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(319),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(323),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(312),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(34),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(264),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(215),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(271),
  [781] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(174),
  [784] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(168),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(218),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(218),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(325),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(326),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(324),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(35),
  [807] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(266),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(167),
  [815] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(165),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 1),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 1),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2), SHIFT_REPEAT(283),
  [837] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start, 2),
  [839] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start, 2),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [843] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [847] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2, .production_id = 2),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, .production_id = 2),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_base, 1),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_base, 1),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 4),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 4),
  [867] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 2),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 2),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3, .production_id = 6),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3, .production_id = 6),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, .production_id = 5),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, .production_id = 5),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emph, 3, .production_id = 5),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emph, 3, .production_id = 5),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, .production_id = 2),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 2),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3, .production_id = 5),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3, .production_id = 5),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 2),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 2),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [907] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [911] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(241),
  [926] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(249),
  [929] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(268),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [948] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(250),
  [977] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(253),
  [980] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(250),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1029] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2),
  [1047] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(246),
  [1050] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(270),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 2),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_args_repeat1, 2),
  [1059] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_args_repeat1, 2), SHIFT_REPEAT(23),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 1),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 3),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 2),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_arg, 3),
  [1080] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 2),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_arg_named, 4, .production_id = 19),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 7),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_arg, 2),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_arg_named, 3, .production_id = 18),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
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
