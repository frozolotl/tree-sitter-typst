#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 398
#define LARGE_STATE_COUNT 55
#define SYMBOL_COUNT 153
#define ALIAS_COUNT 0
#define TOKEN_COUNT 94
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
  anon_sym_POUND = 70,
  anon_sym_LBRACE = 71,
  anon_sym_RBRACE = 72,
  anon_sym_LBRACK = 73,
  anon_sym_RBRACK = 74,
  sym_code_ident = 75,
  sym_string = 76,
  sym_line_comment = 77,
  anon_sym_SLASH_STAR = 78,
  aux_sym_block_comment_token1 = 79,
  aux_sym_block_comment_token2 = 80,
  anon_sym_STAR_SLASH = 81,
  aux_sym__space_same_line_token1 = 82,
  sym__token_eof = 83,
  sym__space = 84,
  sym_parbreak = 85,
  sym__newline = 86,
  sym__indent = 87,
  sym__dedent = 88,
  sym_raw = 89,
  sym__link_end = 90,
  sym_text = 91,
  sym__delim_strong = 92,
  sym__delim_emph = 93,
  sym_source_file = 94,
  sym_markup = 95,
  sym__markup_expr_base = 96,
  sym__markup_expr_line_start_sof = 97,
  sym__markup_expr_line_start = 98,
  aux_sym__markup_expr_line_start_content = 99,
  sym__markup_expr_text = 100,
  sym_link = 101,
  sym_label = 102,
  sym_reference = 103,
  sym_strong = 104,
  sym__markup_strong = 105,
  sym_emph = 106,
  sym__markup_emph = 107,
  sym_heading = 108,
  sym__markup_same_line = 109,
  sym_equation = 110,
  sym_math = 111,
  sym__math_expr = 112,
  sym_math_shorthand = 113,
  sym_math_delimited = 114,
  sym_math_delimited_unclosed = 115,
  sym_math_delimited_left = 116,
  sym_math_delimited_right = 117,
  sym_math_delimited_fence = 118,
  sym_math_delimited_fence_unclosed = 119,
  sym_math_fence = 120,
  sym_math_field_access = 121,
  sym_math_function_call = 122,
  sym_math_args = 123,
  sym__math_arg = 124,
  sym_math_arg_named = 125,
  sym_math_root = 126,
  sym_math_attach_below = 127,
  sym_math_attach_above = 128,
  sym_math_frac = 129,
  sym__math_text_ident = 130,
  sym_embedded_code_expr = 131,
  sym_code = 132,
  sym__code_expr = 133,
  sym__code_primary = 134,
  sym_code_block = 135,
  sym_content_block = 136,
  sym__trivia = 137,
  sym_block_comment = 138,
  sym_space = 139,
  sym__whitespace_line = 140,
  sym__space_same_line = 141,
  aux_sym_markup_repeat1 = 142,
  aux_sym__markup_expr_line_start_sof_repeat1 = 143,
  aux_sym__markup_strong_repeat1 = 144,
  aux_sym__markup_emph_repeat1 = 145,
  aux_sym__markup_same_line_repeat1 = 146,
  aux_sym_math_repeat1 = 147,
  aux_sym_math_field_access_repeat1 = 148,
  aux_sym_math_args_repeat1 = 149,
  aux_sym_code_repeat1 = 150,
  aux_sym_block_comment_repeat1 = 151,
  aux_sym__whitespace_line_repeat1 = 152,
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
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_code_ident] = "code_ident",
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
  [sym_math_delimited_unclosed] = "math_delimited_unclosed",
  [sym_math_delimited_left] = "math_delimited_left",
  [sym_math_delimited_right] = "math_delimited_right",
  [sym_math_delimited_fence] = "math_delimited_fence",
  [sym_math_delimited_fence_unclosed] = "math_delimited_fence_unclosed",
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
  [sym_embedded_code_expr] = "embedded_code_expr",
  [sym_code] = "code",
  [sym__code_expr] = "_code_expr",
  [sym__code_primary] = "_code_primary",
  [sym_code_block] = "code_block",
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
  [aux_sym_code_repeat1] = "code_repeat1",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_code_ident] = sym_code_ident,
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
  [sym_math_delimited_unclosed] = sym_math_delimited_unclosed,
  [sym_math_delimited_left] = sym_math_delimited_left,
  [sym_math_delimited_right] = sym_math_delimited_right,
  [sym_math_delimited_fence] = sym_math_delimited_fence,
  [sym_math_delimited_fence_unclosed] = sym_math_delimited_fence_unclosed,
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
  [sym_embedded_code_expr] = sym_embedded_code_expr,
  [sym_code] = sym_code,
  [sym__code_expr] = sym__code_expr,
  [sym__code_primary] = sym__code_primary,
  [sym_code_block] = sym_code_block,
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
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_code_ident] = {
    .visible = true,
    .named = true,
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
  [sym_math_delimited_unclosed] = {
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
  [sym_math_delimited_fence_unclosed] = {
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
  [sym_embedded_code_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym__code_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__code_primary] = {
    .visible = false,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
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
  [aux_sym_code_repeat1] = {
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
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 5,
  [9] = 9,
  [10] = 5,
  [11] = 11,
  [12] = 12,
  [13] = 2,
  [14] = 14,
  [15] = 2,
  [16] = 16,
  [17] = 4,
  [18] = 4,
  [19] = 11,
  [20] = 11,
  [21] = 21,
  [22] = 12,
  [23] = 14,
  [24] = 12,
  [25] = 14,
  [26] = 4,
  [27] = 11,
  [28] = 12,
  [29] = 14,
  [30] = 30,
  [31] = 12,
  [32] = 14,
  [33] = 33,
  [34] = 33,
  [35] = 33,
  [36] = 12,
  [37] = 14,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 38,
  [42] = 40,
  [43] = 43,
  [44] = 39,
  [45] = 38,
  [46] = 43,
  [47] = 43,
  [48] = 43,
  [49] = 40,
  [50] = 40,
  [51] = 38,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 52,
  [60] = 52,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 53,
  [65] = 54,
  [66] = 53,
  [67] = 54,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 56,
  [81] = 81,
  [82] = 57,
  [83] = 83,
  [84] = 56,
  [85] = 57,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 58,
  [94] = 54,
  [95] = 63,
  [96] = 52,
  [97] = 63,
  [98] = 61,
  [99] = 58,
  [100] = 100,
  [101] = 61,
  [102] = 53,
  [103] = 90,
  [104] = 75,
  [105] = 69,
  [106] = 89,
  [107] = 79,
  [108] = 76,
  [109] = 75,
  [110] = 70,
  [111] = 81,
  [112] = 83,
  [113] = 90,
  [114] = 114,
  [115] = 78,
  [116] = 91,
  [117] = 71,
  [118] = 77,
  [119] = 72,
  [120] = 57,
  [121] = 81,
  [122] = 89,
  [123] = 88,
  [124] = 79,
  [125] = 76,
  [126] = 70,
  [127] = 73,
  [128] = 74,
  [129] = 68,
  [130] = 72,
  [131] = 86,
  [132] = 71,
  [133] = 87,
  [134] = 78,
  [135] = 88,
  [136] = 74,
  [137] = 56,
  [138] = 68,
  [139] = 83,
  [140] = 86,
  [141] = 87,
  [142] = 91,
  [143] = 69,
  [144] = 73,
  [145] = 92,
  [146] = 92,
  [147] = 63,
  [148] = 58,
  [149] = 76,
  [150] = 68,
  [151] = 73,
  [152] = 75,
  [153] = 79,
  [154] = 89,
  [155] = 81,
  [156] = 114,
  [157] = 71,
  [158] = 92,
  [159] = 72,
  [160] = 91,
  [161] = 83,
  [162] = 70,
  [163] = 90,
  [164] = 88,
  [165] = 87,
  [166] = 78,
  [167] = 86,
  [168] = 69,
  [169] = 74,
  [170] = 170,
  [171] = 170,
  [172] = 170,
  [173] = 170,
  [174] = 170,
  [175] = 170,
  [176] = 170,
  [177] = 170,
  [178] = 178,
  [179] = 178,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 182,
  [184] = 181,
  [185] = 180,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 188,
  [190] = 190,
  [191] = 191,
  [192] = 188,
  [193] = 191,
  [194] = 194,
  [195] = 195,
  [196] = 191,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 199,
  [202] = 200,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 205,
  [208] = 206,
  [209] = 204,
  [210] = 203,
  [211] = 211,
  [212] = 211,
  [213] = 211,
  [214] = 88,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 217,
  [219] = 70,
  [220] = 91,
  [221] = 70,
  [222] = 216,
  [223] = 215,
  [224] = 88,
  [225] = 91,
  [226] = 91,
  [227] = 227,
  [228] = 228,
  [229] = 86,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 228,
  [234] = 231,
  [235] = 235,
  [236] = 86,
  [237] = 237,
  [238] = 232,
  [239] = 91,
  [240] = 68,
  [241] = 68,
  [242] = 70,
  [243] = 74,
  [244] = 74,
  [245] = 78,
  [246] = 237,
  [247] = 231,
  [248] = 88,
  [249] = 227,
  [250] = 250,
  [251] = 227,
  [252] = 228,
  [253] = 232,
  [254] = 88,
  [255] = 230,
  [256] = 87,
  [257] = 235,
  [258] = 235,
  [259] = 74,
  [260] = 68,
  [261] = 91,
  [262] = 230,
  [263] = 78,
  [264] = 87,
  [265] = 70,
  [266] = 86,
  [267] = 87,
  [268] = 237,
  [269] = 78,
  [270] = 70,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 273,
  [275] = 275,
  [276] = 275,
  [277] = 275,
  [278] = 275,
  [279] = 275,
  [280] = 275,
  [281] = 275,
  [282] = 275,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 286,
  [288] = 288,
  [289] = 288,
  [290] = 286,
  [291] = 286,
  [292] = 286,
  [293] = 288,
  [294] = 288,
  [295] = 286,
  [296] = 288,
  [297] = 288,
  [298] = 286,
  [299] = 288,
  [300] = 286,
  [301] = 288,
  [302] = 288,
  [303] = 286,
  [304] = 288,
  [305] = 286,
  [306] = 286,
  [307] = 288,
  [308] = 288,
  [309] = 309,
  [310] = 286,
  [311] = 311,
  [312] = 311,
  [313] = 311,
  [314] = 311,
  [315] = 311,
  [316] = 311,
  [317] = 311,
  [318] = 70,
  [319] = 319,
  [320] = 70,
  [321] = 91,
  [322] = 322,
  [323] = 323,
  [324] = 88,
  [325] = 91,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 68,
  [333] = 86,
  [334] = 87,
  [335] = 74,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 91,
  [342] = 337,
  [343] = 343,
  [344] = 70,
  [345] = 345,
  [346] = 336,
  [347] = 347,
  [348] = 348,
  [349] = 337,
  [350] = 350,
  [351] = 345,
  [352] = 337,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 358,
  [361] = 357,
  [362] = 356,
  [363] = 363,
  [364] = 356,
  [365] = 357,
  [366] = 356,
  [367] = 367,
  [368] = 355,
  [369] = 356,
  [370] = 357,
  [371] = 367,
  [372] = 372,
  [373] = 357,
  [374] = 374,
  [375] = 359,
  [376] = 356,
  [377] = 357,
  [378] = 354,
  [379] = 359,
  [380] = 354,
  [381] = 381,
  [382] = 356,
  [383] = 357,
  [384] = 384,
  [385] = 374,
  [386] = 372,
  [387] = 358,
  [388] = 374,
  [389] = 357,
  [390] = 356,
  [391] = 372,
  [392] = 367,
  [393] = 355,
  [394] = 363,
  [395] = 358,
  [396] = 396,
  [397] = 363,
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
  return (c < 10631
    ? (c < 10216
      ? (c < 8990
        ? (c < 8970
          ? c == 8968
          : (c <= 8970 || c == 8988))
        : (c <= 8990 || (c < 10214
          ? c == 10098
          : c <= 10214)))
      : (c <= 10216 || (c < 10222
        ? (c < 10220
          ? c == 10218
          : c <= 10220)
        : (c <= 10222 || (c < 10629
          ? c == 10627
          : c <= 10629)))))
    : (c <= 10631 || (c < 10643
      ? (c < 10637
        ? (c < 10635
          ? c == 10633
          : c <= 10635)
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

static inline bool aux_sym_math_delimited_left_token1_character_set_3(int32_t c) {
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

static inline bool sym_code_ident_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
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
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
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
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
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
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '$') ADVANCE(76);
      if (lookahead == '&') ADVANCE(128);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '(') ADVANCE(132);
      if (lookahead == ')') ADVANCE(134);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(183);
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
      if (lookahead == '[') ADVANCE(176);
      if (lookahead == ']') ADVANCE(177);
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == 8730) ADVANCE(142);
      if (lookahead == 8731) ADVANCE(144);
      if (lookahead == 8732) ADVANCE(146);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(183);
      if (lookahead == '|' ||
          lookahead == 8214 ||
          lookahead == 10624 ||
          lookahead == 10626 ||
          lookahead == 10649 ||
          lookahead == 10650) ADVANCE(124);
      if (aux_sym_math_delimited_left_token1_character_set_1(lookahead)) ADVANCE(117);
      if ((8969 <= lookahead && lookahead <= 8971) ||
          (8989 <= lookahead && lookahead <= 8991) ||
          lookahead == 10099 ||
          (10215 <= lookahead && lookahead <= 10223) ||
          (10628 <= lookahead && lookahead <= 10648) ||
          (10713 <= lookahead && lookahead <= 10715) ||
          lookahead == 10749) ADVANCE(121);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(187);
      if (lookahead == '\r') ADVANCE(184);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead == '/') ADVANCE(185);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(183);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_1(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_1(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_3(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_1(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_3(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_3(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_2(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_2(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_2(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_3(lookahead)) ADVANCE(119);
      if (aux_sym_math_delimited_right_token1_character_set_2(lookahead)) ADVANCE(122);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_3(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_3(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_3(lookahead)) ADVANCE(119);
      if (sym_math_text_character_set_1(lookahead)) ADVANCE(154);
      if (sym_math_text_character_set_2(lookahead)) ADVANCE(168);
      if (lookahead != 0) ADVANCE(169);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '!') ADVANCE(164);
      if (lookahead == '"') ADVANCE(155);
      if (lookahead == '#') ADVANCE(173);
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
      if (aux_sym_math_delimited_left_token1_character_set_3(lookahead)) ADVANCE(119);
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
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(180);
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
      if (lookahead == '[') ADVANCE(176);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(175);
      if (sym_code_ident_character_set_1(lookahead)) ADVANCE(178);
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
      if (lookahead == '#') ADVANCE(172);
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
      if (lookahead == '[') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == ']') ADVANCE(177);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == '~') ADVANCE(66);
      END_STATE();
    case 45:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(68);
      if (lookahead == '#') ADVANCE(172);
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
      if (lookahead == ']') ADVANCE(177);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 46:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(68);
      if (lookahead == '#') ADVANCE(172);
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
      if (lookahead == ']') ADVANCE(177);
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
      if (lookahead == '#') ADVANCE(172);
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
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 54:
      if (eof) ADVANCE(56);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(68);
      if (lookahead == '#') ADVANCE(172);
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
      if (lookahead == '[') ADVANCE(176);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(39);
      if (lookahead == '~') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(68);
      if (lookahead == '#') ADVANCE(172);
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
          lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(181);
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
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(181);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(181);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_math_text);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(21);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(155);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(181);
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
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (sym_math_text_character_set_3(lookahead)) ADVANCE(169);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_code_ident);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(179);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '/') ADVANCE(181);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_block_comment_token2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__space_same_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(189);
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
  [4] = {.lex_state = 14, .external_lex_state = 3},
  [5] = {.lex_state = 17, .external_lex_state = 3},
  [6] = {.lex_state = 17, .external_lex_state = 3},
  [7] = {.lex_state = 15, .external_lex_state = 3},
  [8] = {.lex_state = 17, .external_lex_state = 3},
  [9] = {.lex_state = 15, .external_lex_state = 3},
  [10] = {.lex_state = 17, .external_lex_state = 3},
  [11] = {.lex_state = 14, .external_lex_state = 3},
  [12] = {.lex_state = 14, .external_lex_state = 3},
  [13] = {.lex_state = 6, .external_lex_state = 3},
  [14] = {.lex_state = 14, .external_lex_state = 3},
  [15] = {.lex_state = 6, .external_lex_state = 3},
  [16] = {.lex_state = 15, .external_lex_state = 3},
  [17] = {.lex_state = 6, .external_lex_state = 3},
  [18] = {.lex_state = 15, .external_lex_state = 3},
  [19] = {.lex_state = 6, .external_lex_state = 3},
  [20] = {.lex_state = 15, .external_lex_state = 3},
  [21] = {.lex_state = 17, .external_lex_state = 3},
  [22] = {.lex_state = 6, .external_lex_state = 3},
  [23] = {.lex_state = 15, .external_lex_state = 3},
  [24] = {.lex_state = 15, .external_lex_state = 3},
  [25] = {.lex_state = 6, .external_lex_state = 3},
  [26] = {.lex_state = 7, .external_lex_state = 3},
  [27] = {.lex_state = 7, .external_lex_state = 3},
  [28] = {.lex_state = 7, .external_lex_state = 3},
  [29] = {.lex_state = 7, .external_lex_state = 3},
  [30] = {.lex_state = 17, .external_lex_state = 3},
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
  [55] = {.lex_state = 13, .external_lex_state = 3},
  [56] = {.lex_state = 11, .external_lex_state = 3},
  [57] = {.lex_state = 11, .external_lex_state = 3},
  [58] = {.lex_state = 9, .external_lex_state = 3},
  [59] = {.lex_state = 12, .external_lex_state = 3},
  [60] = {.lex_state = 4, .external_lex_state = 3},
  [61] = {.lex_state = 14, .external_lex_state = 3},
  [62] = {.lex_state = 14, .external_lex_state = 3},
  [63] = {.lex_state = 14, .external_lex_state = 3},
  [64] = {.lex_state = 4, .external_lex_state = 3},
  [65] = {.lex_state = 12, .external_lex_state = 3},
  [66] = {.lex_state = 12, .external_lex_state = 3},
  [67] = {.lex_state = 4, .external_lex_state = 3},
  [68] = {.lex_state = 14, .external_lex_state = 3},
  [69] = {.lex_state = 14, .external_lex_state = 3},
  [70] = {.lex_state = 14, .external_lex_state = 3},
  [71] = {.lex_state = 14, .external_lex_state = 3},
  [72] = {.lex_state = 14, .external_lex_state = 3},
  [73] = {.lex_state = 14, .external_lex_state = 3},
  [74] = {.lex_state = 14, .external_lex_state = 3},
  [75] = {.lex_state = 14, .external_lex_state = 3},
  [76] = {.lex_state = 14, .external_lex_state = 3},
  [77] = {.lex_state = 14, .external_lex_state = 3},
  [78] = {.lex_state = 14, .external_lex_state = 3},
  [79] = {.lex_state = 14, .external_lex_state = 3},
  [80] = {.lex_state = 4, .external_lex_state = 3},
  [81] = {.lex_state = 14, .external_lex_state = 3},
  [82] = {.lex_state = 4, .external_lex_state = 3},
  [83] = {.lex_state = 14, .external_lex_state = 3},
  [84] = {.lex_state = 12, .external_lex_state = 3},
  [85] = {.lex_state = 12, .external_lex_state = 3},
  [86] = {.lex_state = 14, .external_lex_state = 3},
  [87] = {.lex_state = 14, .external_lex_state = 3},
  [88] = {.lex_state = 14, .external_lex_state = 3},
  [89] = {.lex_state = 14, .external_lex_state = 3},
  [90] = {.lex_state = 14, .external_lex_state = 3},
  [91] = {.lex_state = 14, .external_lex_state = 3},
  [92] = {.lex_state = 14, .external_lex_state = 3},
  [93] = {.lex_state = 10, .external_lex_state = 3},
  [94] = {.lex_state = 5, .external_lex_state = 3},
  [95] = {.lex_state = 6, .external_lex_state = 3},
  [96] = {.lex_state = 5, .external_lex_state = 3},
  [97] = {.lex_state = 15, .external_lex_state = 3},
  [98] = {.lex_state = 6, .external_lex_state = 3},
  [99] = {.lex_state = 2, .external_lex_state = 3},
  [100] = {.lex_state = 16, .external_lex_state = 3},
  [101] = {.lex_state = 6, .external_lex_state = 3},
  [102] = {.lex_state = 5, .external_lex_state = 3},
  [103] = {.lex_state = 6, .external_lex_state = 3},
  [104] = {.lex_state = 6, .external_lex_state = 3},
  [105] = {.lex_state = 15, .external_lex_state = 3},
  [106] = {.lex_state = 15, .external_lex_state = 3},
  [107] = {.lex_state = 15, .external_lex_state = 3},
  [108] = {.lex_state = 15, .external_lex_state = 3},
  [109] = {.lex_state = 15, .external_lex_state = 3},
  [110] = {.lex_state = 15, .external_lex_state = 3},
  [111] = {.lex_state = 15, .external_lex_state = 3},
  [112] = {.lex_state = 15, .external_lex_state = 3},
  [113] = {.lex_state = 15, .external_lex_state = 3},
  [114] = {.lex_state = 15, .external_lex_state = 3},
  [115] = {.lex_state = 6, .external_lex_state = 3},
  [116] = {.lex_state = 15, .external_lex_state = 3},
  [117] = {.lex_state = 15, .external_lex_state = 3},
  [118] = {.lex_state = 6, .external_lex_state = 3},
  [119] = {.lex_state = 15, .external_lex_state = 3},
  [120] = {.lex_state = 5, .external_lex_state = 3},
  [121] = {.lex_state = 6, .external_lex_state = 3},
  [122] = {.lex_state = 6, .external_lex_state = 3},
  [123] = {.lex_state = 6, .external_lex_state = 3},
  [124] = {.lex_state = 6, .external_lex_state = 3},
  [125] = {.lex_state = 6, .external_lex_state = 3},
  [126] = {.lex_state = 6, .external_lex_state = 3},
  [127] = {.lex_state = 6, .external_lex_state = 3},
  [128] = {.lex_state = 6, .external_lex_state = 3},
  [129] = {.lex_state = 6, .external_lex_state = 3},
  [130] = {.lex_state = 6, .external_lex_state = 3},
  [131] = {.lex_state = 6, .external_lex_state = 3},
  [132] = {.lex_state = 6, .external_lex_state = 3},
  [133] = {.lex_state = 6, .external_lex_state = 3},
  [134] = {.lex_state = 15, .external_lex_state = 3},
  [135] = {.lex_state = 15, .external_lex_state = 3},
  [136] = {.lex_state = 15, .external_lex_state = 3},
  [137] = {.lex_state = 5, .external_lex_state = 3},
  [138] = {.lex_state = 15, .external_lex_state = 3},
  [139] = {.lex_state = 6, .external_lex_state = 3},
  [140] = {.lex_state = 15, .external_lex_state = 3},
  [141] = {.lex_state = 15, .external_lex_state = 3},
  [142] = {.lex_state = 6, .external_lex_state = 3},
  [143] = {.lex_state = 6, .external_lex_state = 3},
  [144] = {.lex_state = 15, .external_lex_state = 3},
  [145] = {.lex_state = 6, .external_lex_state = 3},
  [146] = {.lex_state = 15, .external_lex_state = 3},
  [147] = {.lex_state = 7, .external_lex_state = 3},
  [148] = {.lex_state = 3, .external_lex_state = 3},
  [149] = {.lex_state = 7, .external_lex_state = 3},
  [150] = {.lex_state = 7, .external_lex_state = 3},
  [151] = {.lex_state = 7, .external_lex_state = 3},
  [152] = {.lex_state = 7, .external_lex_state = 3},
  [153] = {.lex_state = 7, .external_lex_state = 3},
  [154] = {.lex_state = 7, .external_lex_state = 3},
  [155] = {.lex_state = 7, .external_lex_state = 3},
  [156] = {.lex_state = 7, .external_lex_state = 3},
  [157] = {.lex_state = 7, .external_lex_state = 3},
  [158] = {.lex_state = 7, .external_lex_state = 3},
  [159] = {.lex_state = 7, .external_lex_state = 3},
  [160] = {.lex_state = 7, .external_lex_state = 3},
  [161] = {.lex_state = 7, .external_lex_state = 3},
  [162] = {.lex_state = 7, .external_lex_state = 3},
  [163] = {.lex_state = 7, .external_lex_state = 3},
  [164] = {.lex_state = 7, .external_lex_state = 3},
  [165] = {.lex_state = 7, .external_lex_state = 3},
  [166] = {.lex_state = 7, .external_lex_state = 3},
  [167] = {.lex_state = 7, .external_lex_state = 3},
  [168] = {.lex_state = 7, .external_lex_state = 3},
  [169] = {.lex_state = 7, .external_lex_state = 3},
  [170] = {.lex_state = 45, .external_lex_state = 2},
  [171] = {.lex_state = 45, .external_lex_state = 2},
  [172] = {.lex_state = 45, .external_lex_state = 2},
  [173] = {.lex_state = 45, .external_lex_state = 2},
  [174] = {.lex_state = 45, .external_lex_state = 2},
  [175] = {.lex_state = 45, .external_lex_state = 2},
  [176] = {.lex_state = 45, .external_lex_state = 2},
  [177] = {.lex_state = 45, .external_lex_state = 2},
  [178] = {.lex_state = 53, .external_lex_state = 2},
  [179] = {.lex_state = 45, .external_lex_state = 2},
  [180] = {.lex_state = 55, .external_lex_state = 2},
  [181] = {.lex_state = 46, .external_lex_state = 2},
  [182] = {.lex_state = 55, .external_lex_state = 2},
  [183] = {.lex_state = 46, .external_lex_state = 2},
  [184] = {.lex_state = 55, .external_lex_state = 2},
  [185] = {.lex_state = 46, .external_lex_state = 2},
  [186] = {.lex_state = 55, .external_lex_state = 2},
  [187] = {.lex_state = 55, .external_lex_state = 2},
  [188] = {.lex_state = 55, .external_lex_state = 4},
  [189] = {.lex_state = 55, .external_lex_state = 4},
  [190] = {.lex_state = 55, .external_lex_state = 2},
  [191] = {.lex_state = 55, .external_lex_state = 5},
  [192] = {.lex_state = 55, .external_lex_state = 4},
  [193] = {.lex_state = 55, .external_lex_state = 5},
  [194] = {.lex_state = 55, .external_lex_state = 6},
  [195] = {.lex_state = 55, .external_lex_state = 2},
  [196] = {.lex_state = 55, .external_lex_state = 5},
  [197] = {.lex_state = 55, .external_lex_state = 6},
  [198] = {.lex_state = 55, .external_lex_state = 7},
  [199] = {.lex_state = 45, .external_lex_state = 2},
  [200] = {.lex_state = 45, .external_lex_state = 2},
  [201] = {.lex_state = 53, .external_lex_state = 2},
  [202] = {.lex_state = 53, .external_lex_state = 2},
  [203] = {.lex_state = 53, .external_lex_state = 2},
  [204] = {.lex_state = 53, .external_lex_state = 2},
  [205] = {.lex_state = 53, .external_lex_state = 2},
  [206] = {.lex_state = 53, .external_lex_state = 2},
  [207] = {.lex_state = 45, .external_lex_state = 2},
  [208] = {.lex_state = 45, .external_lex_state = 2},
  [209] = {.lex_state = 45, .external_lex_state = 2},
  [210] = {.lex_state = 45, .external_lex_state = 2},
  [211] = {.lex_state = 54, .external_lex_state = 6},
  [212] = {.lex_state = 44, .external_lex_state = 2},
  [213] = {.lex_state = 54, .external_lex_state = 2},
  [214] = {.lex_state = 45, .external_lex_state = 2},
  [215] = {.lex_state = 53, .external_lex_state = 2},
  [216] = {.lex_state = 45, .external_lex_state = 2},
  [217] = {.lex_state = 45, .external_lex_state = 2},
  [218] = {.lex_state = 53, .external_lex_state = 2},
  [219] = {.lex_state = 45, .external_lex_state = 2},
  [220] = {.lex_state = 45, .external_lex_state = 2},
  [221] = {.lex_state = 53, .external_lex_state = 2},
  [222] = {.lex_state = 53, .external_lex_state = 2},
  [223] = {.lex_state = 45, .external_lex_state = 2},
  [224] = {.lex_state = 53, .external_lex_state = 2},
  [225] = {.lex_state = 53, .external_lex_state = 2},
  [226] = {.lex_state = 46, .external_lex_state = 2},
  [227] = {.lex_state = 55, .external_lex_state = 2},
  [228] = {.lex_state = 46, .external_lex_state = 2},
  [229] = {.lex_state = 55, .external_lex_state = 2},
  [230] = {.lex_state = 55, .external_lex_state = 6},
  [231] = {.lex_state = 46, .external_lex_state = 2},
  [232] = {.lex_state = 55, .external_lex_state = 6},
  [233] = {.lex_state = 55, .external_lex_state = 6},
  [234] = {.lex_state = 55, .external_lex_state = 6},
  [235] = {.lex_state = 55, .external_lex_state = 6},
  [236] = {.lex_state = 46, .external_lex_state = 2},
  [237] = {.lex_state = 55, .external_lex_state = 6},
  [238] = {.lex_state = 46, .external_lex_state = 2},
  [239] = {.lex_state = 55, .external_lex_state = 2},
  [240] = {.lex_state = 55, .external_lex_state = 2},
  [241] = {.lex_state = 46, .external_lex_state = 2},
  [242] = {.lex_state = 55, .external_lex_state = 2},
  [243] = {.lex_state = 55, .external_lex_state = 2},
  [244] = {.lex_state = 46, .external_lex_state = 2},
  [245] = {.lex_state = 55, .external_lex_state = 6},
  [246] = {.lex_state = 46, .external_lex_state = 2},
  [247] = {.lex_state = 55, .external_lex_state = 2},
  [248] = {.lex_state = 55, .external_lex_state = 2},
  [249] = {.lex_state = 55, .external_lex_state = 6},
  [250] = {.lex_state = 55, .external_lex_state = 6},
  [251] = {.lex_state = 46, .external_lex_state = 2},
  [252] = {.lex_state = 55, .external_lex_state = 2},
  [253] = {.lex_state = 55, .external_lex_state = 2},
  [254] = {.lex_state = 46, .external_lex_state = 2},
  [255] = {.lex_state = 55, .external_lex_state = 2},
  [256] = {.lex_state = 46, .external_lex_state = 2},
  [257] = {.lex_state = 46, .external_lex_state = 2},
  [258] = {.lex_state = 55, .external_lex_state = 2},
  [259] = {.lex_state = 55, .external_lex_state = 6},
  [260] = {.lex_state = 55, .external_lex_state = 6},
  [261] = {.lex_state = 55, .external_lex_state = 6},
  [262] = {.lex_state = 46, .external_lex_state = 2},
  [263] = {.lex_state = 55, .external_lex_state = 2},
  [264] = {.lex_state = 55, .external_lex_state = 2},
  [265] = {.lex_state = 46, .external_lex_state = 2},
  [266] = {.lex_state = 55, .external_lex_state = 6},
  [267] = {.lex_state = 55, .external_lex_state = 6},
  [268] = {.lex_state = 55, .external_lex_state = 2},
  [269] = {.lex_state = 46, .external_lex_state = 2},
  [270] = {.lex_state = 55, .external_lex_state = 6},
  [271] = {.lex_state = 55, .external_lex_state = 2},
  [272] = {.lex_state = 55, .external_lex_state = 2},
  [273] = {.lex_state = 53, .external_lex_state = 3},
  [274] = {.lex_state = 53, .external_lex_state = 3},
  [275] = {.lex_state = 27},
  [276] = {.lex_state = 27},
  [277] = {.lex_state = 27},
  [278] = {.lex_state = 27},
  [279] = {.lex_state = 27},
  [280] = {.lex_state = 27},
  [281] = {.lex_state = 27},
  [282] = {.lex_state = 27},
  [283] = {.lex_state = 27},
  [284] = {.lex_state = 27},
  [285] = {.lex_state = 53, .external_lex_state = 3},
  [286] = {.lex_state = 1, .external_lex_state = 8},
  [287] = {.lex_state = 1, .external_lex_state = 8},
  [288] = {.lex_state = 1, .external_lex_state = 8},
  [289] = {.lex_state = 1, .external_lex_state = 8},
  [290] = {.lex_state = 1, .external_lex_state = 8},
  [291] = {.lex_state = 1, .external_lex_state = 8},
  [292] = {.lex_state = 1, .external_lex_state = 8},
  [293] = {.lex_state = 1, .external_lex_state = 8},
  [294] = {.lex_state = 1, .external_lex_state = 8},
  [295] = {.lex_state = 1, .external_lex_state = 8},
  [296] = {.lex_state = 1, .external_lex_state = 8},
  [297] = {.lex_state = 1, .external_lex_state = 8},
  [298] = {.lex_state = 1, .external_lex_state = 8},
  [299] = {.lex_state = 1, .external_lex_state = 8},
  [300] = {.lex_state = 1, .external_lex_state = 8},
  [301] = {.lex_state = 1, .external_lex_state = 8},
  [302] = {.lex_state = 1, .external_lex_state = 8},
  [303] = {.lex_state = 1, .external_lex_state = 8},
  [304] = {.lex_state = 1, .external_lex_state = 8},
  [305] = {.lex_state = 1, .external_lex_state = 8},
  [306] = {.lex_state = 1, .external_lex_state = 8},
  [307] = {.lex_state = 1, .external_lex_state = 8},
  [308] = {.lex_state = 1, .external_lex_state = 8},
  [309] = {.lex_state = 1, .external_lex_state = 8},
  [310] = {.lex_state = 1, .external_lex_state = 8},
  [311] = {.lex_state = 27},
  [312] = {.lex_state = 27},
  [313] = {.lex_state = 27},
  [314] = {.lex_state = 27},
  [315] = {.lex_state = 27},
  [316] = {.lex_state = 27},
  [317] = {.lex_state = 27},
  [318] = {.lex_state = 53, .external_lex_state = 3},
  [319] = {.lex_state = 53},
  [320] = {.lex_state = 1, .external_lex_state = 8},
  [321] = {.lex_state = 1, .external_lex_state = 8},
  [322] = {.lex_state = 53},
  [323] = {.lex_state = 53},
  [324] = {.lex_state = 53, .external_lex_state = 3},
  [325] = {.lex_state = 53, .external_lex_state = 3},
  [326] = {.lex_state = 53},
  [327] = {.lex_state = 53},
  [328] = {.lex_state = 53},
  [329] = {.lex_state = 53},
  [330] = {.lex_state = 53},
  [331] = {.lex_state = 53},
  [332] = {.lex_state = 27},
  [333] = {.lex_state = 27},
  [334] = {.lex_state = 27},
  [335] = {.lex_state = 27},
  [336] = {.lex_state = 0, .external_lex_state = 9},
  [337] = {.lex_state = 19},
  [338] = {.lex_state = 0, .external_lex_state = 9},
  [339] = {.lex_state = 0, .external_lex_state = 9},
  [340] = {.lex_state = 53},
  [341] = {.lex_state = 53},
  [342] = {.lex_state = 19},
  [343] = {.lex_state = 0, .external_lex_state = 9},
  [344] = {.lex_state = 53},
  [345] = {.lex_state = 53},
  [346] = {.lex_state = 0, .external_lex_state = 9},
  [347] = {.lex_state = 53},
  [348] = {.lex_state = 53},
  [349] = {.lex_state = 19},
  [350] = {.lex_state = 53, .external_lex_state = 8},
  [351] = {.lex_state = 53},
  [352] = {.lex_state = 19},
  [353] = {.lex_state = 53},
  [354] = {.lex_state = 47},
  [355] = {.lex_state = 53},
  [356] = {.lex_state = 53},
  [357] = {.lex_state = 45},
  [358] = {.lex_state = 53},
  [359] = {.lex_state = 0, .external_lex_state = 10},
  [360] = {.lex_state = 53},
  [361] = {.lex_state = 45},
  [362] = {.lex_state = 53},
  [363] = {.lex_state = 52},
  [364] = {.lex_state = 53},
  [365] = {.lex_state = 45},
  [366] = {.lex_state = 53},
  [367] = {.lex_state = 53},
  [368] = {.lex_state = 53},
  [369] = {.lex_state = 53},
  [370] = {.lex_state = 45},
  [371] = {.lex_state = 53},
  [372] = {.lex_state = 0, .external_lex_state = 11},
  [373] = {.lex_state = 45},
  [374] = {.lex_state = 0, .external_lex_state = 12},
  [375] = {.lex_state = 0, .external_lex_state = 10},
  [376] = {.lex_state = 53},
  [377] = {.lex_state = 45},
  [378] = {.lex_state = 47},
  [379] = {.lex_state = 0, .external_lex_state = 10},
  [380] = {.lex_state = 47},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 53},
  [383] = {.lex_state = 45},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0, .external_lex_state = 12},
  [386] = {.lex_state = 0, .external_lex_state = 11},
  [387] = {.lex_state = 53},
  [388] = {.lex_state = 0, .external_lex_state = 12},
  [389] = {.lex_state = 45},
  [390] = {.lex_state = 53},
  [391] = {.lex_state = 0, .external_lex_state = 11},
  [392] = {.lex_state = 53},
  [393] = {.lex_state = 53},
  [394] = {.lex_state = 52},
  [395] = {.lex_state = 53},
  [396] = {.lex_state = 27},
  [397] = {.lex_state = 52},
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
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
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
    [sym_source_file] = STATE(381),
    [sym_markup] = STATE(384),
    [sym__markup_expr_base] = STATE(184),
    [sym__markup_expr_line_start_sof] = STATE(184),
    [aux_sym__markup_expr_line_start_content] = STATE(204),
    [sym__markup_expr_text] = STATE(184),
    [sym_link] = STATE(184),
    [sym_label] = STATE(184),
    [sym_reference] = STATE(184),
    [sym_strong] = STATE(184),
    [sym_emph] = STATE(184),
    [sym_heading] = STATE(346),
    [sym_equation] = STATE(184),
    [sym_embedded_code_expr] = STATE(184),
    [sym_block_comment] = STATE(218),
    [sym_space] = STATE(178),
    [aux_sym__markup_expr_line_start_sof_repeat1] = STATE(274),
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
    [anon_sym_POUND] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(21),
    [anon_sym_SLASH_STAR] = ACTIONS(23),
    [sym__space] = ACTIONS(25),
    [sym_parbreak] = ACTIONS(27),
    [sym__newline] = ACTIONS(25),
    [sym_raw] = ACTIONS(7),
    [sym_text] = ACTIONS(7),
    [sym__delim_strong] = ACTIONS(29),
    [sym__delim_emph] = ACTIONS(31),
  },
  [2] = {
    [sym_math] = STATE(61),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym_math_delimited_unclosed] = STATE(12),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_right] = STATE(92),
    [sym_math_delimited_fence] = STATE(12),
    [sym_math_delimited_fence_unclosed] = STATE(12),
    [sym_math_fence] = STATE(11),
    [sym_math_field_access] = STATE(58),
    [sym_math_function_call] = STATE(12),
    [sym_math_root] = STATE(12),
    [sym_math_attach_below] = STATE(12),
    [sym_math_attach_above] = STATE(12),
    [sym_math_frac] = STATE(12),
    [sym_embedded_code_expr] = STATE(12),
    [sym__trivia] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_space] = STATE(12),
    [aux_sym_math_repeat1] = STATE(12),
    [sym_linebreak] = ACTIONS(33),
    [sym_escape] = ACTIONS(35),
    [anon_sym_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_COLON_EQ] = ACTIONS(37),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_DASH_LT] = ACTIONS(37),
    [anon_sym_LT_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_LT_LT] = ACTIONS(37),
    [anon_sym_LT_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_TILDE] = ACTIONS(39),
    [anon_sym_GT_DASH_GT] = ACTIONS(37),
    [anon_sym_GT_GT_GT] = ACTIONS(37),
    [anon_sym_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_COLON] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(37),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(37),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(37),
    [anon_sym_TILDE_GT] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_RBRACK] = ACTIONS(45),
    [aux_sym_math_delimited_right_token1] = ACTIONS(47),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [aux_sym_math_fence_token1] = ACTIONS(51),
    [sym_math_align_point] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym__] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [sym_math_text] = ACTIONS(35),
    [sym_math_ident] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [sym_string] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(33),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__space] = ACTIONS(63),
    [sym_parbreak] = ACTIONS(33),
    [sym__newline] = ACTIONS(63),
  },
  [3] = {
    [sym_math] = STATE(62),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym_math_delimited_unclosed] = STATE(12),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_right] = STATE(146),
    [sym_math_delimited_fence] = STATE(12),
    [sym_math_delimited_fence_unclosed] = STATE(12),
    [sym_math_fence] = STATE(11),
    [sym_math_field_access] = STATE(58),
    [sym_math_function_call] = STATE(12),
    [sym_math_root] = STATE(12),
    [sym_math_attach_below] = STATE(12),
    [sym_math_attach_above] = STATE(12),
    [sym_math_frac] = STATE(12),
    [sym_embedded_code_expr] = STATE(12),
    [sym__trivia] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_space] = STATE(12),
    [aux_sym_math_repeat1] = STATE(12),
    [sym_linebreak] = ACTIONS(33),
    [sym_escape] = ACTIONS(35),
    [anon_sym_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_COLON_EQ] = ACTIONS(37),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_DASH_LT] = ACTIONS(37),
    [anon_sym_LT_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_LT_LT] = ACTIONS(37),
    [anon_sym_LT_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_TILDE] = ACTIONS(39),
    [anon_sym_GT_DASH_GT] = ACTIONS(37),
    [anon_sym_GT_GT_GT] = ACTIONS(37),
    [anon_sym_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_COLON] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(37),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(37),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(37),
    [anon_sym_TILDE_GT] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_RBRACK] = ACTIONS(65),
    [aux_sym_math_delimited_right_token1] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [aux_sym_math_fence_token1] = ACTIONS(51),
    [sym_math_align_point] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym__] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [sym_math_text] = ACTIONS(35),
    [sym_math_ident] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [sym_string] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(33),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__space] = ACTIONS(63),
    [sym_parbreak] = ACTIONS(33),
    [sym__newline] = ACTIONS(63),
  },
  [4] = {
    [sym_math] = STATE(63),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym_math_delimited_unclosed] = STATE(12),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(12),
    [sym_math_delimited_fence_unclosed] = STATE(12),
    [sym_math_fence] = STATE(4),
    [sym_math_field_access] = STATE(58),
    [sym_math_function_call] = STATE(12),
    [sym_math_root] = STATE(12),
    [sym_math_attach_below] = STATE(12),
    [sym_math_attach_above] = STATE(12),
    [sym_math_frac] = STATE(12),
    [sym_embedded_code_expr] = STATE(12),
    [sym__trivia] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_space] = STATE(12),
    [aux_sym_math_repeat1] = STATE(12),
    [sym_linebreak] = ACTIONS(69),
    [sym_escape] = ACTIONS(71),
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
    [anon_sym_LBRACK_PIPE] = ACTIONS(69),
    [aux_sym_math_delimited_left_token1] = ACTIONS(71),
    [anon_sym_PIPE_RBRACK] = ACTIONS(69),
    [aux_sym_math_delimited_right_token1] = ACTIONS(71),
    [anon_sym_PIPE_PIPE] = ACTIONS(69),
    [aux_sym_math_fence_token1] = ACTIONS(71),
    [sym_math_align_point] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_] = ACTIONS(71),
    [anon_sym_2] = ACTIONS(71),
    [anon_sym_3] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [sym_math_text] = ACTIONS(71),
    [sym_math_ident] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_string] = ACTIONS(69),
    [sym_line_comment] = ACTIONS(69),
    [anon_sym_SLASH_STAR] = ACTIONS(69),
    [sym__space] = ACTIONS(69),
    [sym_parbreak] = ACTIONS(69),
    [sym__newline] = ACTIONS(69),
  },
  [5] = {
    [sym_math] = STATE(329),
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_args] = STATE(360),
    [sym__math_arg] = STATE(331),
    [sym_math_arg_named] = STATE(329),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym__math_text_ident] = STATE(396),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_space] = STATE(9),
    [aux_sym_math_repeat1] = STATE(31),
    [aux_sym_math_args_repeat1] = STATE(331),
    [sym_linebreak] = ACTIONS(73),
    [sym_escape] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(91),
    [sym_math_ident] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(97),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(97),
    [sym__newline] = ACTIONS(101),
  },
  [6] = {
    [sym_math] = STATE(329),
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_args] = STATE(358),
    [sym__math_arg] = STATE(331),
    [sym_math_arg_named] = STATE(329),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym__math_text_ident] = STATE(396),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_space] = STATE(9),
    [aux_sym_math_repeat1] = STATE(31),
    [aux_sym_math_args_repeat1] = STATE(331),
    [sym_linebreak] = ACTIONS(73),
    [sym_escape] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(91),
    [sym_math_ident] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(97),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(97),
    [sym__newline] = ACTIONS(101),
  },
  [7] = {
    [sym_math] = STATE(347),
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_arg_named] = STATE(347),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym__math_text_ident] = STATE(396),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(114),
    [sym_block_comment] = STATE(114),
    [sym_space] = STATE(114),
    [aux_sym_math_repeat1] = STATE(31),
    [sym_linebreak] = ACTIONS(73),
    [sym_escape] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [anon_sym__] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [sym_math_text] = ACTIONS(91),
    [sym_math_ident] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(73),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(73),
    [sym__newline] = ACTIONS(101),
  },
  [8] = {
    [sym_math] = STATE(329),
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_args] = STATE(395),
    [sym__math_arg] = STATE(331),
    [sym_math_arg_named] = STATE(329),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym__math_text_ident] = STATE(396),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_space] = STATE(9),
    [aux_sym_math_repeat1] = STATE(31),
    [aux_sym_math_args_repeat1] = STATE(331),
    [sym_linebreak] = ACTIONS(73),
    [sym_escape] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(91),
    [sym_math_ident] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(97),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(97),
    [sym__newline] = ACTIONS(101),
  },
  [9] = {
    [sym_math] = STATE(327),
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_arg_named] = STATE(327),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym__math_text_ident] = STATE(396),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(114),
    [sym_block_comment] = STATE(114),
    [sym_space] = STATE(114),
    [aux_sym_math_repeat1] = STATE(31),
    [sym_linebreak] = ACTIONS(73),
    [sym_escape] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [anon_sym__] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [sym_math_text] = ACTIONS(91),
    [sym_math_ident] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(73),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(73),
    [sym__newline] = ACTIONS(101),
  },
  [10] = {
    [sym_math] = STATE(329),
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_args] = STATE(387),
    [sym__math_arg] = STATE(331),
    [sym_math_arg_named] = STATE(329),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym__math_text_ident] = STATE(396),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_space] = STATE(9),
    [aux_sym_math_repeat1] = STATE(31),
    [aux_sym_math_args_repeat1] = STATE(331),
    [sym_linebreak] = ACTIONS(73),
    [sym_escape] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(91),
    [sym_math_ident] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(97),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(97),
    [sym__newline] = ACTIONS(101),
  },
  [11] = {
    [sym_math] = STATE(63),
    [sym__math_expr] = STATE(12),
    [sym_math_shorthand] = STATE(12),
    [sym_math_delimited] = STATE(12),
    [sym_math_delimited_unclosed] = STATE(12),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(12),
    [sym_math_delimited_fence_unclosed] = STATE(12),
    [sym_math_fence] = STATE(4),
    [sym_math_field_access] = STATE(58),
    [sym_math_function_call] = STATE(12),
    [sym_math_root] = STATE(12),
    [sym_math_attach_below] = STATE(12),
    [sym_math_attach_above] = STATE(12),
    [sym_math_frac] = STATE(12),
    [sym_embedded_code_expr] = STATE(12),
    [sym__trivia] = STATE(12),
    [sym_block_comment] = STATE(12),
    [sym_space] = STATE(12),
    [aux_sym_math_repeat1] = STATE(12),
    [sym_linebreak] = ACTIONS(33),
    [sym_escape] = ACTIONS(35),
    [anon_sym_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_COLON_EQ] = ACTIONS(37),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_DASH_LT] = ACTIONS(37),
    [anon_sym_LT_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_LT_LT] = ACTIONS(37),
    [anon_sym_LT_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_TILDE] = ACTIONS(39),
    [anon_sym_GT_DASH_GT] = ACTIONS(37),
    [anon_sym_GT_GT_GT] = ACTIONS(37),
    [anon_sym_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_COLON] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(37),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(37),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(37),
    [anon_sym_TILDE_GT] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_RBRACK] = ACTIONS(113),
    [aux_sym_math_delimited_right_token1] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [aux_sym_math_fence_token1] = ACTIONS(51),
    [sym_math_align_point] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [sym_math_text] = ACTIONS(35),
    [sym_math_ident] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [sym_string] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(33),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__space] = ACTIONS(63),
    [sym_parbreak] = ACTIONS(33),
    [sym__newline] = ACTIONS(63),
  },
  [12] = {
    [sym__math_expr] = STATE(14),
    [sym_math_shorthand] = STATE(14),
    [sym_math_delimited] = STATE(14),
    [sym_math_delimited_unclosed] = STATE(14),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(14),
    [sym_math_delimited_fence_unclosed] = STATE(14),
    [sym_math_fence] = STATE(11),
    [sym_math_field_access] = STATE(58),
    [sym_math_function_call] = STATE(14),
    [sym_math_root] = STATE(14),
    [sym_math_attach_below] = STATE(14),
    [sym_math_attach_above] = STATE(14),
    [sym_math_frac] = STATE(14),
    [sym_embedded_code_expr] = STATE(14),
    [sym__trivia] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_space] = STATE(14),
    [aux_sym_math_repeat1] = STATE(14),
    [sym_linebreak] = ACTIONS(117),
    [sym_escape] = ACTIONS(119),
    [anon_sym_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_COLON_EQ] = ACTIONS(37),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_DASH_LT] = ACTIONS(37),
    [anon_sym_LT_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_LT_LT] = ACTIONS(37),
    [anon_sym_LT_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_TILDE] = ACTIONS(39),
    [anon_sym_GT_DASH_GT] = ACTIONS(37),
    [anon_sym_GT_GT_GT] = ACTIONS(37),
    [anon_sym_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_COLON] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(37),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(37),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(37),
    [anon_sym_TILDE_GT] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_RBRACK] = ACTIONS(121),
    [aux_sym_math_delimited_right_token1] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [aux_sym_math_fence_token1] = ACTIONS(51),
    [sym_math_align_point] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [sym_math_text] = ACTIONS(119),
    [sym_math_ident] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [sym_string] = ACTIONS(117),
    [sym_line_comment] = ACTIONS(117),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__space] = ACTIONS(63),
    [sym_parbreak] = ACTIONS(117),
    [sym__newline] = ACTIONS(63),
  },
  [13] = {
    [sym_math] = STATE(98),
    [sym__math_expr] = STATE(22),
    [sym_math_shorthand] = STATE(22),
    [sym_math_delimited] = STATE(22),
    [sym_math_delimited_unclosed] = STATE(22),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_right] = STATE(145),
    [sym_math_delimited_fence] = STATE(22),
    [sym_math_delimited_fence_unclosed] = STATE(22),
    [sym_math_fence] = STATE(19),
    [sym_math_field_access] = STATE(99),
    [sym_math_function_call] = STATE(22),
    [sym_math_root] = STATE(22),
    [sym_math_attach_below] = STATE(22),
    [sym_math_attach_above] = STATE(22),
    [sym_math_frac] = STATE(22),
    [sym_embedded_code_expr] = STATE(22),
    [sym__trivia] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_space] = STATE(22),
    [aux_sym_math_repeat1] = STATE(22),
    [sym_linebreak] = ACTIONS(125),
    [sym_escape] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_DASH_GT_GT] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_COLON_EQ] = ACTIONS(129),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH] = ACTIONS(131),
    [anon_sym_LT_DASH_LT] = ACTIONS(129),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_LT_DASH] = ACTIONS(129),
    [anon_sym_LT_LT_LT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ] = ACTIONS(131),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_LT_DASH] = ACTIONS(131),
    [anon_sym_LT_TILDE] = ACTIONS(131),
    [anon_sym_GT_DASH_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(129),
    [anon_sym_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_COLON] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(129),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(129),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(129),
    [anon_sym_TILDE_GT] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_RBRACK] = ACTIONS(137),
    [aux_sym_math_delimited_right_token1] = ACTIONS(139),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [aux_sym_math_fence_token1] = ACTIONS(143),
    [sym_math_align_point] = ACTIONS(127),
    [anon_sym_] = ACTIONS(145),
    [anon_sym_2] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(145),
    [anon_sym__] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [sym_math_text] = ACTIONS(127),
    [sym_math_ident] = ACTIONS(147),
    [anon_sym_POUND] = ACTIONS(149),
    [sym_string] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(125),
    [anon_sym_SLASH_STAR] = ACTIONS(151),
    [sym__space] = ACTIONS(153),
    [sym_parbreak] = ACTIONS(125),
    [sym__newline] = ACTIONS(153),
  },
  [14] = {
    [sym__math_expr] = STATE(14),
    [sym_math_shorthand] = STATE(14),
    [sym_math_delimited] = STATE(14),
    [sym_math_delimited_unclosed] = STATE(14),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(14),
    [sym_math_delimited_fence_unclosed] = STATE(14),
    [sym_math_fence] = STATE(11),
    [sym_math_field_access] = STATE(58),
    [sym_math_function_call] = STATE(14),
    [sym_math_root] = STATE(14),
    [sym_math_attach_below] = STATE(14),
    [sym_math_attach_above] = STATE(14),
    [sym_math_frac] = STATE(14),
    [sym_embedded_code_expr] = STATE(14),
    [sym__trivia] = STATE(14),
    [sym_block_comment] = STATE(14),
    [sym_space] = STATE(14),
    [aux_sym_math_repeat1] = STATE(14),
    [sym_linebreak] = ACTIONS(155),
    [sym_escape] = ACTIONS(158),
    [anon_sym_DASH_GT_GT] = ACTIONS(161),
    [anon_sym_DASH_GT] = ACTIONS(164),
    [anon_sym_DASH_DASH_GT] = ACTIONS(161),
    [anon_sym_COLON_EQ] = ACTIONS(161),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(161),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(161),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(161),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(161),
    [anon_sym_LT_DASH_DASH] = ACTIONS(164),
    [anon_sym_LT_DASH_LT] = ACTIONS(161),
    [anon_sym_LT_DASH_GT] = ACTIONS(161),
    [anon_sym_LT_LT_DASH] = ACTIONS(161),
    [anon_sym_LT_LT_LT] = ACTIONS(161),
    [anon_sym_LT_EQ_GT] = ACTIONS(161),
    [anon_sym_LT_EQ_EQ] = ACTIONS(164),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(164),
    [anon_sym_LT_LT] = ACTIONS(164),
    [anon_sym_LT_DASH] = ACTIONS(164),
    [anon_sym_LT_TILDE] = ACTIONS(164),
    [anon_sym_GT_DASH_GT] = ACTIONS(161),
    [anon_sym_GT_GT_GT] = ACTIONS(161),
    [anon_sym_EQ_EQ_GT] = ACTIONS(161),
    [anon_sym_EQ_GT] = ACTIONS(161),
    [anon_sym_EQ_COLON] = ACTIONS(161),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_GT_GT] = ACTIONS(164),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(161),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(161),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(161),
    [anon_sym_TILDE_GT] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [anon_sym_LBRACK_PIPE] = ACTIONS(167),
    [aux_sym_math_delimited_left_token1] = ACTIONS(170),
    [anon_sym_PIPE_RBRACK] = ACTIONS(173),
    [aux_sym_math_delimited_right_token1] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(177),
    [aux_sym_math_fence_token1] = ACTIONS(180),
    [sym_math_align_point] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_] = ACTIONS(183),
    [anon_sym_2] = ACTIONS(183),
    [anon_sym_3] = ACTIONS(183),
    [anon_sym__] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [sym_math_text] = ACTIONS(158),
    [sym_math_ident] = ACTIONS(186),
    [anon_sym_POUND] = ACTIONS(189),
    [sym_string] = ACTIONS(155),
    [sym_line_comment] = ACTIONS(155),
    [anon_sym_SLASH_STAR] = ACTIONS(192),
    [sym__space] = ACTIONS(195),
    [sym_parbreak] = ACTIONS(155),
    [sym__newline] = ACTIONS(195),
  },
  [15] = {
    [sym_math] = STATE(101),
    [sym__math_expr] = STATE(22),
    [sym_math_shorthand] = STATE(22),
    [sym_math_delimited] = STATE(22),
    [sym_math_delimited_unclosed] = STATE(22),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_right] = STATE(158),
    [sym_math_delimited_fence] = STATE(22),
    [sym_math_delimited_fence_unclosed] = STATE(22),
    [sym_math_fence] = STATE(19),
    [sym_math_field_access] = STATE(99),
    [sym_math_function_call] = STATE(22),
    [sym_math_root] = STATE(22),
    [sym_math_attach_below] = STATE(22),
    [sym_math_attach_above] = STATE(22),
    [sym_math_frac] = STATE(22),
    [sym_embedded_code_expr] = STATE(22),
    [sym__trivia] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_space] = STATE(22),
    [aux_sym_math_repeat1] = STATE(22),
    [sym_linebreak] = ACTIONS(125),
    [sym_escape] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(53),
    [anon_sym_DASH_GT_GT] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_COLON_EQ] = ACTIONS(129),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH] = ACTIONS(131),
    [anon_sym_LT_DASH_LT] = ACTIONS(129),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_LT_DASH] = ACTIONS(129),
    [anon_sym_LT_LT_LT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ] = ACTIONS(131),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_LT_DASH] = ACTIONS(131),
    [anon_sym_LT_TILDE] = ACTIONS(131),
    [anon_sym_GT_DASH_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(129),
    [anon_sym_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_COLON] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(129),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(129),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(129),
    [anon_sym_TILDE_GT] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_RBRACK] = ACTIONS(198),
    [aux_sym_math_delimited_right_token1] = ACTIONS(200),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [aux_sym_math_fence_token1] = ACTIONS(143),
    [sym_math_align_point] = ACTIONS(127),
    [anon_sym_] = ACTIONS(145),
    [anon_sym_2] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(145),
    [anon_sym__] = ACTIONS(53),
    [anon_sym_CARET] = ACTIONS(53),
    [anon_sym_SLASH] = ACTIONS(53),
    [sym_math_text] = ACTIONS(127),
    [sym_math_ident] = ACTIONS(147),
    [anon_sym_POUND] = ACTIONS(149),
    [sym_string] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(125),
    [anon_sym_SLASH_STAR] = ACTIONS(151),
    [sym__space] = ACTIONS(153),
    [sym_parbreak] = ACTIONS(125),
    [sym__newline] = ACTIONS(153),
  },
  [16] = {
    [sym_math] = STATE(340),
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(114),
    [sym_block_comment] = STATE(114),
    [sym_space] = STATE(114),
    [aux_sym_math_repeat1] = STATE(31),
    [sym_linebreak] = ACTIONS(73),
    [sym_escape] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_SEMI] = ACTIONS(202),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [anon_sym__] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [sym_math_text] = ACTIONS(75),
    [sym_math_ident] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(73),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(73),
    [sym__newline] = ACTIONS(101),
  },
  [17] = {
    [sym_math] = STATE(95),
    [sym__math_expr] = STATE(22),
    [sym_math_shorthand] = STATE(22),
    [sym_math_delimited] = STATE(22),
    [sym_math_delimited_unclosed] = STATE(22),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(22),
    [sym_math_delimited_fence_unclosed] = STATE(22),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(99),
    [sym_math_function_call] = STATE(22),
    [sym_math_root] = STATE(22),
    [sym_math_attach_below] = STATE(22),
    [sym_math_attach_above] = STATE(22),
    [sym_math_frac] = STATE(22),
    [sym_embedded_code_expr] = STATE(22),
    [sym__trivia] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_space] = STATE(22),
    [aux_sym_math_repeat1] = STATE(22),
    [sym_linebreak] = ACTIONS(69),
    [sym_escape] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(71),
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
    [anon_sym_LBRACK_PIPE] = ACTIONS(69),
    [aux_sym_math_delimited_left_token1] = ACTIONS(71),
    [anon_sym_PIPE_RBRACK] = ACTIONS(69),
    [aux_sym_math_delimited_right_token1] = ACTIONS(71),
    [anon_sym_PIPE_PIPE] = ACTIONS(69),
    [aux_sym_math_fence_token1] = ACTIONS(71),
    [sym_math_align_point] = ACTIONS(71),
    [anon_sym_] = ACTIONS(71),
    [anon_sym_2] = ACTIONS(71),
    [anon_sym_3] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [sym_math_text] = ACTIONS(71),
    [sym_math_ident] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_string] = ACTIONS(69),
    [sym_line_comment] = ACTIONS(69),
    [anon_sym_SLASH_STAR] = ACTIONS(69),
    [sym__space] = ACTIONS(69),
    [sym_parbreak] = ACTIONS(69),
    [sym__newline] = ACTIONS(69),
  },
  [18] = {
    [sym_math] = STATE(97),
    [sym__math_expr] = STATE(24),
    [sym_math_shorthand] = STATE(24),
    [sym_math_delimited] = STATE(24),
    [sym_math_delimited_unclosed] = STATE(24),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(24),
    [sym_math_delimited_fence_unclosed] = STATE(24),
    [sym_math_fence] = STATE(18),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(24),
    [sym_math_root] = STATE(24),
    [sym_math_attach_below] = STATE(24),
    [sym_math_attach_above] = STATE(24),
    [sym_math_frac] = STATE(24),
    [sym_embedded_code_expr] = STATE(24),
    [sym__trivia] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_space] = STATE(24),
    [aux_sym_math_repeat1] = STATE(24),
    [sym_linebreak] = ACTIONS(69),
    [sym_escape] = ACTIONS(71),
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
    [anon_sym_LBRACK_PIPE] = ACTIONS(69),
    [aux_sym_math_delimited_left_token1] = ACTIONS(71),
    [anon_sym_PIPE_PIPE] = ACTIONS(69),
    [aux_sym_math_fence_token1] = ACTIONS(71),
    [sym_math_align_point] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_] = ACTIONS(71),
    [anon_sym_2] = ACTIONS(71),
    [anon_sym_3] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [sym_math_text] = ACTIONS(71),
    [sym_math_ident] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_string] = ACTIONS(69),
    [sym_line_comment] = ACTIONS(69),
    [anon_sym_SLASH_STAR] = ACTIONS(69),
    [sym__space] = ACTIONS(69),
    [sym_parbreak] = ACTIONS(69),
    [sym__newline] = ACTIONS(69),
  },
  [19] = {
    [sym_math] = STATE(95),
    [sym__math_expr] = STATE(22),
    [sym_math_shorthand] = STATE(22),
    [sym_math_delimited] = STATE(22),
    [sym_math_delimited_unclosed] = STATE(22),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(22),
    [sym_math_delimited_fence_unclosed] = STATE(22),
    [sym_math_fence] = STATE(17),
    [sym_math_field_access] = STATE(99),
    [sym_math_function_call] = STATE(22),
    [sym_math_root] = STATE(22),
    [sym_math_attach_below] = STATE(22),
    [sym_math_attach_above] = STATE(22),
    [sym_math_frac] = STATE(22),
    [sym_embedded_code_expr] = STATE(22),
    [sym__trivia] = STATE(22),
    [sym_block_comment] = STATE(22),
    [sym_space] = STATE(22),
    [aux_sym_math_repeat1] = STATE(22),
    [sym_linebreak] = ACTIONS(125),
    [sym_escape] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(115),
    [anon_sym_DASH_GT_GT] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_COLON_EQ] = ACTIONS(129),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH] = ACTIONS(131),
    [anon_sym_LT_DASH_LT] = ACTIONS(129),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_LT_DASH] = ACTIONS(129),
    [anon_sym_LT_LT_LT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ] = ACTIONS(131),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_LT_DASH] = ACTIONS(131),
    [anon_sym_LT_TILDE] = ACTIONS(131),
    [anon_sym_GT_DASH_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(129),
    [anon_sym_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_COLON] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(129),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(129),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(129),
    [anon_sym_TILDE_GT] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_RBRACK] = ACTIONS(113),
    [aux_sym_math_delimited_right_token1] = ACTIONS(115),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [aux_sym_math_fence_token1] = ACTIONS(143),
    [sym_math_align_point] = ACTIONS(127),
    [anon_sym_] = ACTIONS(145),
    [anon_sym_2] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(145),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [sym_math_text] = ACTIONS(127),
    [sym_math_ident] = ACTIONS(147),
    [anon_sym_POUND] = ACTIONS(149),
    [sym_string] = ACTIONS(125),
    [sym_line_comment] = ACTIONS(125),
    [anon_sym_SLASH_STAR] = ACTIONS(151),
    [sym__space] = ACTIONS(153),
    [sym_parbreak] = ACTIONS(125),
    [sym__newline] = ACTIONS(153),
  },
  [20] = {
    [sym_math] = STATE(97),
    [sym__math_expr] = STATE(24),
    [sym_math_shorthand] = STATE(24),
    [sym_math_delimited] = STATE(24),
    [sym_math_delimited_unclosed] = STATE(24),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(24),
    [sym_math_delimited_fence_unclosed] = STATE(24),
    [sym_math_fence] = STATE(18),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(24),
    [sym_math_root] = STATE(24),
    [sym_math_attach_below] = STATE(24),
    [sym_math_attach_above] = STATE(24),
    [sym_math_frac] = STATE(24),
    [sym_embedded_code_expr] = STATE(24),
    [sym__trivia] = STATE(24),
    [sym_block_comment] = STATE(24),
    [sym_space] = STATE(24),
    [aux_sym_math_repeat1] = STATE(24),
    [sym_linebreak] = ACTIONS(206),
    [sym_escape] = ACTIONS(208),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [sym_math_text] = ACTIONS(208),
    [sym_math_ident] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(206),
    [sym_line_comment] = ACTIONS(206),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(206),
    [sym__newline] = ACTIONS(101),
  },
  [21] = {
    [sym_math] = STATE(348),
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_arg_named] = STATE(348),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym__math_text_ident] = STATE(396),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym_space] = STATE(7),
    [aux_sym_math_repeat1] = STATE(31),
    [sym_linebreak] = ACTIONS(73),
    [sym_escape] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(210),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(91),
    [sym_math_ident] = ACTIONS(93),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(212),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(212),
    [sym__newline] = ACTIONS(101),
  },
  [22] = {
    [sym__math_expr] = STATE(25),
    [sym_math_shorthand] = STATE(25),
    [sym_math_delimited] = STATE(25),
    [sym_math_delimited_unclosed] = STATE(25),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(25),
    [sym_math_delimited_fence_unclosed] = STATE(25),
    [sym_math_fence] = STATE(19),
    [sym_math_field_access] = STATE(99),
    [sym_math_function_call] = STATE(25),
    [sym_math_root] = STATE(25),
    [sym_math_attach_below] = STATE(25),
    [sym_math_attach_above] = STATE(25),
    [sym_math_frac] = STATE(25),
    [sym_embedded_code_expr] = STATE(25),
    [sym__trivia] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym_space] = STATE(25),
    [aux_sym_math_repeat1] = STATE(25),
    [sym_linebreak] = ACTIONS(214),
    [sym_escape] = ACTIONS(216),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [anon_sym_DASH_GT_GT] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_COLON_EQ] = ACTIONS(129),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH] = ACTIONS(131),
    [anon_sym_LT_DASH_LT] = ACTIONS(129),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_LT_DASH] = ACTIONS(129),
    [anon_sym_LT_LT_LT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ] = ACTIONS(131),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_LT_DASH] = ACTIONS(131),
    [anon_sym_LT_TILDE] = ACTIONS(131),
    [anon_sym_GT_DASH_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(129),
    [anon_sym_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_COLON] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(129),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(129),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(129),
    [anon_sym_TILDE_GT] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_RBRACK] = ACTIONS(121),
    [aux_sym_math_delimited_right_token1] = ACTIONS(123),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [aux_sym_math_fence_token1] = ACTIONS(143),
    [sym_math_align_point] = ACTIONS(216),
    [anon_sym_] = ACTIONS(145),
    [anon_sym_2] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(145),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [sym_math_text] = ACTIONS(216),
    [sym_math_ident] = ACTIONS(147),
    [anon_sym_POUND] = ACTIONS(149),
    [sym_string] = ACTIONS(214),
    [sym_line_comment] = ACTIONS(214),
    [anon_sym_SLASH_STAR] = ACTIONS(151),
    [sym__space] = ACTIONS(153),
    [sym_parbreak] = ACTIONS(214),
    [sym__newline] = ACTIONS(153),
  },
  [23] = {
    [sym__math_expr] = STATE(23),
    [sym_math_shorthand] = STATE(23),
    [sym_math_delimited] = STATE(23),
    [sym_math_delimited_unclosed] = STATE(23),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(23),
    [sym_math_delimited_fence_unclosed] = STATE(23),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(23),
    [sym_math_root] = STATE(23),
    [sym_math_attach_below] = STATE(23),
    [sym_math_attach_above] = STATE(23),
    [sym_math_frac] = STATE(23),
    [sym_embedded_code_expr] = STATE(23),
    [sym__trivia] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym_space] = STATE(23),
    [aux_sym_math_repeat1] = STATE(23),
    [sym_linebreak] = ACTIONS(218),
    [sym_escape] = ACTIONS(221),
    [anon_sym_DASH_GT_GT] = ACTIONS(224),
    [anon_sym_DASH_GT] = ACTIONS(227),
    [anon_sym_DASH_DASH_GT] = ACTIONS(224),
    [anon_sym_COLON_EQ] = ACTIONS(224),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(224),
    [anon_sym_BANG_EQ] = ACTIONS(224),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(224),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(224),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(224),
    [anon_sym_LT_DASH_DASH] = ACTIONS(227),
    [anon_sym_LT_DASH_LT] = ACTIONS(224),
    [anon_sym_LT_DASH_GT] = ACTIONS(224),
    [anon_sym_LT_LT_DASH] = ACTIONS(224),
    [anon_sym_LT_LT_LT] = ACTIONS(224),
    [anon_sym_LT_EQ_GT] = ACTIONS(224),
    [anon_sym_LT_EQ_EQ] = ACTIONS(227),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(224),
    [anon_sym_LT_EQ] = ACTIONS(227),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_LT_DASH] = ACTIONS(227),
    [anon_sym_LT_TILDE] = ACTIONS(227),
    [anon_sym_GT_DASH_GT] = ACTIONS(224),
    [anon_sym_GT_GT_GT] = ACTIONS(224),
    [anon_sym_EQ_EQ_GT] = ACTIONS(224),
    [anon_sym_EQ_GT] = ACTIONS(224),
    [anon_sym_EQ_COLON] = ACTIONS(224),
    [anon_sym_GT_EQ] = ACTIONS(224),
    [anon_sym_GT_GT] = ACTIONS(227),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(224),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(224),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(224),
    [anon_sym_TILDE_GT] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_LBRACK_PIPE] = ACTIONS(167),
    [aux_sym_math_delimited_left_token1] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [aux_sym_math_fence_token1] = ACTIONS(233),
    [sym_math_align_point] = ACTIONS(221),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_] = ACTIONS(236),
    [anon_sym_2] = ACTIONS(236),
    [anon_sym_3] = ACTIONS(236),
    [anon_sym__] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [sym_math_text] = ACTIONS(221),
    [sym_math_ident] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(242),
    [sym_string] = ACTIONS(218),
    [sym_line_comment] = ACTIONS(218),
    [anon_sym_SLASH_STAR] = ACTIONS(245),
    [sym__space] = ACTIONS(248),
    [sym_parbreak] = ACTIONS(218),
    [sym__newline] = ACTIONS(248),
  },
  [24] = {
    [sym__math_expr] = STATE(23),
    [sym_math_shorthand] = STATE(23),
    [sym_math_delimited] = STATE(23),
    [sym_math_delimited_unclosed] = STATE(23),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(23),
    [sym_math_delimited_fence_unclosed] = STATE(23),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(23),
    [sym_math_root] = STATE(23),
    [sym_math_attach_below] = STATE(23),
    [sym_math_attach_above] = STATE(23),
    [sym_math_frac] = STATE(23),
    [sym_embedded_code_expr] = STATE(23),
    [sym__trivia] = STATE(23),
    [sym_block_comment] = STATE(23),
    [sym_space] = STATE(23),
    [aux_sym_math_repeat1] = STATE(23),
    [sym_linebreak] = ACTIONS(251),
    [sym_escape] = ACTIONS(253),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(253),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [sym_math_text] = ACTIONS(253),
    [sym_math_ident] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(251),
    [sym_line_comment] = ACTIONS(251),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(251),
    [sym__newline] = ACTIONS(101),
  },
  [25] = {
    [sym__math_expr] = STATE(25),
    [sym_math_shorthand] = STATE(25),
    [sym_math_delimited] = STATE(25),
    [sym_math_delimited_unclosed] = STATE(25),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(25),
    [sym_math_delimited_fence_unclosed] = STATE(25),
    [sym_math_fence] = STATE(19),
    [sym_math_field_access] = STATE(99),
    [sym_math_function_call] = STATE(25),
    [sym_math_root] = STATE(25),
    [sym_math_attach_below] = STATE(25),
    [sym_math_attach_above] = STATE(25),
    [sym_math_frac] = STATE(25),
    [sym_embedded_code_expr] = STATE(25),
    [sym__trivia] = STATE(25),
    [sym_block_comment] = STATE(25),
    [sym_space] = STATE(25),
    [aux_sym_math_repeat1] = STATE(25),
    [sym_linebreak] = ACTIONS(255),
    [sym_escape] = ACTIONS(258),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [anon_sym_DASH_GT_GT] = ACTIONS(261),
    [anon_sym_DASH_GT] = ACTIONS(264),
    [anon_sym_DASH_DASH_GT] = ACTIONS(261),
    [anon_sym_COLON_EQ] = ACTIONS(261),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(261),
    [anon_sym_BANG_EQ] = ACTIONS(261),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(261),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(261),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(261),
    [anon_sym_LT_DASH_DASH] = ACTIONS(264),
    [anon_sym_LT_DASH_LT] = ACTIONS(261),
    [anon_sym_LT_DASH_GT] = ACTIONS(261),
    [anon_sym_LT_LT_DASH] = ACTIONS(261),
    [anon_sym_LT_LT_LT] = ACTIONS(261),
    [anon_sym_LT_EQ_GT] = ACTIONS(261),
    [anon_sym_LT_EQ_EQ] = ACTIONS(264),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(261),
    [anon_sym_LT_EQ] = ACTIONS(264),
    [anon_sym_LT_LT] = ACTIONS(264),
    [anon_sym_LT_DASH] = ACTIONS(264),
    [anon_sym_LT_TILDE] = ACTIONS(264),
    [anon_sym_GT_DASH_GT] = ACTIONS(261),
    [anon_sym_GT_GT_GT] = ACTIONS(261),
    [anon_sym_EQ_EQ_GT] = ACTIONS(261),
    [anon_sym_EQ_GT] = ACTIONS(261),
    [anon_sym_EQ_COLON] = ACTIONS(261),
    [anon_sym_GT_EQ] = ACTIONS(261),
    [anon_sym_GT_GT] = ACTIONS(264),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(261),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(261),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(261),
    [anon_sym_TILDE_GT] = ACTIONS(261),
    [anon_sym_STAR] = ACTIONS(264),
    [anon_sym_SQUOTE] = ACTIONS(264),
    [anon_sym_DASH] = ACTIONS(264),
    [anon_sym_LBRACK_PIPE] = ACTIONS(267),
    [aux_sym_math_delimited_left_token1] = ACTIONS(270),
    [anon_sym_PIPE_RBRACK] = ACTIONS(173),
    [aux_sym_math_delimited_right_token1] = ACTIONS(175),
    [anon_sym_PIPE_PIPE] = ACTIONS(273),
    [aux_sym_math_fence_token1] = ACTIONS(276),
    [sym_math_align_point] = ACTIONS(258),
    [anon_sym_] = ACTIONS(279),
    [anon_sym_2] = ACTIONS(279),
    [anon_sym_3] = ACTIONS(279),
    [anon_sym__] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [sym_math_text] = ACTIONS(258),
    [sym_math_ident] = ACTIONS(282),
    [anon_sym_POUND] = ACTIONS(285),
    [sym_string] = ACTIONS(255),
    [sym_line_comment] = ACTIONS(255),
    [anon_sym_SLASH_STAR] = ACTIONS(288),
    [sym__space] = ACTIONS(291),
    [sym_parbreak] = ACTIONS(255),
    [sym__newline] = ACTIONS(291),
  },
  [26] = {
    [sym_math] = STATE(147),
    [sym__math_expr] = STATE(28),
    [sym_math_shorthand] = STATE(28),
    [sym_math_delimited] = STATE(28),
    [sym_math_delimited_unclosed] = STATE(28),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(28),
    [sym_math_delimited_fence_unclosed] = STATE(28),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(28),
    [sym_math_root] = STATE(28),
    [sym_math_attach_below] = STATE(28),
    [sym_math_attach_above] = STATE(28),
    [sym_math_frac] = STATE(28),
    [sym_embedded_code_expr] = STATE(28),
    [sym__trivia] = STATE(28),
    [sym_block_comment] = STATE(28),
    [sym_space] = STATE(28),
    [aux_sym_math_repeat1] = STATE(28),
    [sym_linebreak] = ACTIONS(69),
    [sym_escape] = ACTIONS(71),
    [anon_sym_DOLLAR] = ACTIONS(71),
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
    [anon_sym_LBRACK_PIPE] = ACTIONS(69),
    [aux_sym_math_delimited_left_token1] = ACTIONS(71),
    [anon_sym_PIPE_PIPE] = ACTIONS(69),
    [aux_sym_math_fence_token1] = ACTIONS(71),
    [sym_math_align_point] = ACTIONS(71),
    [anon_sym_] = ACTIONS(71),
    [anon_sym_2] = ACTIONS(71),
    [anon_sym_3] = ACTIONS(71),
    [anon_sym__] = ACTIONS(71),
    [anon_sym_CARET] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [sym_math_text] = ACTIONS(71),
    [sym_math_ident] = ACTIONS(71),
    [anon_sym_POUND] = ACTIONS(71),
    [sym_string] = ACTIONS(69),
    [sym_line_comment] = ACTIONS(69),
    [anon_sym_SLASH_STAR] = ACTIONS(69),
    [sym__space] = ACTIONS(69),
    [sym_parbreak] = ACTIONS(69),
    [sym__newline] = ACTIONS(69),
  },
  [27] = {
    [sym_math] = STATE(147),
    [sym__math_expr] = STATE(28),
    [sym_math_shorthand] = STATE(28),
    [sym_math_delimited] = STATE(28),
    [sym_math_delimited_unclosed] = STATE(28),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(28),
    [sym_math_delimited_fence_unclosed] = STATE(28),
    [sym_math_fence] = STATE(26),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(28),
    [sym_math_root] = STATE(28),
    [sym_math_attach_below] = STATE(28),
    [sym_math_attach_above] = STATE(28),
    [sym_math_frac] = STATE(28),
    [sym_embedded_code_expr] = STATE(28),
    [sym__trivia] = STATE(28),
    [sym_block_comment] = STATE(28),
    [sym_space] = STATE(28),
    [aux_sym_math_repeat1] = STATE(28),
    [sym_linebreak] = ACTIONS(294),
    [sym_escape] = ACTIONS(296),
    [anon_sym_DOLLAR] = ACTIONS(115),
    [anon_sym_DASH_GT_GT] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_COLON_EQ] = ACTIONS(298),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_LT_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_COLON] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(298),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(298),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(298),
    [anon_sym_TILDE_GT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [aux_sym_math_fence_token1] = ACTIONS(304),
    [sym_math_align_point] = ACTIONS(296),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_CARET] = ACTIONS(115),
    [anon_sym_SLASH] = ACTIONS(115),
    [sym_math_text] = ACTIONS(296),
    [sym_math_ident] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [sym_string] = ACTIONS(294),
    [sym_line_comment] = ACTIONS(294),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__space] = ACTIONS(314),
    [sym_parbreak] = ACTIONS(294),
    [sym__newline] = ACTIONS(314),
  },
  [28] = {
    [sym__math_expr] = STATE(29),
    [sym_math_shorthand] = STATE(29),
    [sym_math_delimited] = STATE(29),
    [sym_math_delimited_unclosed] = STATE(29),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(29),
    [sym_math_delimited_fence_unclosed] = STATE(29),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(29),
    [sym_math_root] = STATE(29),
    [sym_math_attach_below] = STATE(29),
    [sym_math_attach_above] = STATE(29),
    [sym_math_frac] = STATE(29),
    [sym_embedded_code_expr] = STATE(29),
    [sym__trivia] = STATE(29),
    [sym_block_comment] = STATE(29),
    [sym_space] = STATE(29),
    [aux_sym_math_repeat1] = STATE(29),
    [sym_linebreak] = ACTIONS(316),
    [sym_escape] = ACTIONS(318),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [anon_sym_DASH_GT_GT] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_COLON_EQ] = ACTIONS(298),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_LT_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_COLON] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(298),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(298),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(298),
    [anon_sym_TILDE_GT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [aux_sym_math_fence_token1] = ACTIONS(304),
    [sym_math_align_point] = ACTIONS(318),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [anon_sym__] = ACTIONS(123),
    [anon_sym_CARET] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(123),
    [sym_math_text] = ACTIONS(318),
    [sym_math_ident] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [sym_string] = ACTIONS(316),
    [sym_line_comment] = ACTIONS(316),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__space] = ACTIONS(314),
    [sym_parbreak] = ACTIONS(316),
    [sym__newline] = ACTIONS(314),
  },
  [29] = {
    [sym__math_expr] = STATE(29),
    [sym_math_shorthand] = STATE(29),
    [sym_math_delimited] = STATE(29),
    [sym_math_delimited_unclosed] = STATE(29),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(29),
    [sym_math_delimited_fence_unclosed] = STATE(29),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(29),
    [sym_math_root] = STATE(29),
    [sym_math_attach_below] = STATE(29),
    [sym_math_attach_above] = STATE(29),
    [sym_math_frac] = STATE(29),
    [sym_embedded_code_expr] = STATE(29),
    [sym__trivia] = STATE(29),
    [sym_block_comment] = STATE(29),
    [sym_space] = STATE(29),
    [aux_sym_math_repeat1] = STATE(29),
    [sym_linebreak] = ACTIONS(320),
    [sym_escape] = ACTIONS(323),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [anon_sym_DASH_GT_GT] = ACTIONS(326),
    [anon_sym_DASH_GT] = ACTIONS(329),
    [anon_sym_DASH_DASH_GT] = ACTIONS(326),
    [anon_sym_COLON_EQ] = ACTIONS(326),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(326),
    [anon_sym_BANG_EQ] = ACTIONS(326),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(326),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(326),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(326),
    [anon_sym_LT_DASH_DASH] = ACTIONS(329),
    [anon_sym_LT_DASH_LT] = ACTIONS(326),
    [anon_sym_LT_DASH_GT] = ACTIONS(326),
    [anon_sym_LT_LT_DASH] = ACTIONS(326),
    [anon_sym_LT_LT_LT] = ACTIONS(326),
    [anon_sym_LT_EQ_GT] = ACTIONS(326),
    [anon_sym_LT_EQ_EQ] = ACTIONS(329),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(326),
    [anon_sym_LT_EQ] = ACTIONS(329),
    [anon_sym_LT_LT] = ACTIONS(329),
    [anon_sym_LT_DASH] = ACTIONS(329),
    [anon_sym_LT_TILDE] = ACTIONS(329),
    [anon_sym_GT_DASH_GT] = ACTIONS(326),
    [anon_sym_GT_GT_GT] = ACTIONS(326),
    [anon_sym_EQ_EQ_GT] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(326),
    [anon_sym_EQ_COLON] = ACTIONS(326),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [anon_sym_GT_GT] = ACTIONS(329),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(326),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(326),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(326),
    [anon_sym_TILDE_GT] = ACTIONS(326),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_LBRACK_PIPE] = ACTIONS(267),
    [aux_sym_math_delimited_left_token1] = ACTIONS(270),
    [anon_sym_PIPE_PIPE] = ACTIONS(332),
    [aux_sym_math_fence_token1] = ACTIONS(335),
    [sym_math_align_point] = ACTIONS(323),
    [anon_sym_] = ACTIONS(338),
    [anon_sym_2] = ACTIONS(338),
    [anon_sym_3] = ACTIONS(338),
    [anon_sym__] = ACTIONS(175),
    [anon_sym_CARET] = ACTIONS(175),
    [anon_sym_SLASH] = ACTIONS(175),
    [sym_math_text] = ACTIONS(323),
    [sym_math_ident] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(344),
    [sym_string] = ACTIONS(320),
    [sym_line_comment] = ACTIONS(320),
    [anon_sym_SLASH_STAR] = ACTIONS(347),
    [sym__space] = ACTIONS(350),
    [sym_parbreak] = ACTIONS(320),
    [sym__newline] = ACTIONS(350),
  },
  [30] = {
    [sym_math] = STATE(353),
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(16),
    [sym_block_comment] = STATE(16),
    [sym_space] = STATE(16),
    [aux_sym_math_repeat1] = STATE(31),
    [sym_linebreak] = ACTIONS(73),
    [sym_escape] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(353),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(353),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(75),
    [sym_math_ident] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(355),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(355),
    [sym__newline] = ACTIONS(101),
  },
  [31] = {
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(114),
    [sym_block_comment] = STATE(114),
    [sym_space] = STATE(114),
    [aux_sym_math_repeat1] = STATE(32),
    [sym_linebreak] = ACTIONS(73),
    [sym_escape] = ACTIONS(75),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(75),
    [sym_math_ident] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(73),
    [sym_line_comment] = ACTIONS(73),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(73),
    [sym__newline] = ACTIONS(101),
  },
  [32] = {
    [sym__math_expr] = STATE(114),
    [sym_math_shorthand] = STATE(114),
    [sym_math_delimited] = STATE(114),
    [sym_math_delimited_unclosed] = STATE(114),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(114),
    [sym_math_delimited_fence_unclosed] = STATE(114),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(114),
    [sym_math_root] = STATE(114),
    [sym_math_attach_below] = STATE(114),
    [sym_math_attach_above] = STATE(114),
    [sym_math_frac] = STATE(114),
    [sym_embedded_code_expr] = STATE(114),
    [sym__trivia] = STATE(114),
    [sym_block_comment] = STATE(114),
    [sym_space] = STATE(114),
    [aux_sym_math_repeat1] = STATE(32),
    [sym_linebreak] = ACTIONS(357),
    [sym_escape] = ACTIONS(360),
    [anon_sym_DASH_GT_GT] = ACTIONS(224),
    [anon_sym_DASH_GT] = ACTIONS(227),
    [anon_sym_DASH_DASH_GT] = ACTIONS(224),
    [anon_sym_COLON_EQ] = ACTIONS(224),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(224),
    [anon_sym_BANG_EQ] = ACTIONS(224),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(224),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(224),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(224),
    [anon_sym_LT_DASH_DASH] = ACTIONS(227),
    [anon_sym_LT_DASH_LT] = ACTIONS(224),
    [anon_sym_LT_DASH_GT] = ACTIONS(224),
    [anon_sym_LT_LT_DASH] = ACTIONS(224),
    [anon_sym_LT_LT_LT] = ACTIONS(224),
    [anon_sym_LT_EQ_GT] = ACTIONS(224),
    [anon_sym_LT_EQ_EQ] = ACTIONS(227),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(224),
    [anon_sym_LT_EQ] = ACTIONS(227),
    [anon_sym_LT_LT] = ACTIONS(227),
    [anon_sym_LT_DASH] = ACTIONS(227),
    [anon_sym_LT_TILDE] = ACTIONS(227),
    [anon_sym_GT_DASH_GT] = ACTIONS(224),
    [anon_sym_GT_GT_GT] = ACTIONS(224),
    [anon_sym_EQ_EQ_GT] = ACTIONS(224),
    [anon_sym_EQ_GT] = ACTIONS(224),
    [anon_sym_EQ_COLON] = ACTIONS(224),
    [anon_sym_GT_EQ] = ACTIONS(224),
    [anon_sym_GT_GT] = ACTIONS(227),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(224),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(224),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(224),
    [anon_sym_TILDE_GT] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_SQUOTE] = ACTIONS(227),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_LBRACK_PIPE] = ACTIONS(167),
    [aux_sym_math_delimited_left_token1] = ACTIONS(170),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [aux_sym_math_fence_token1] = ACTIONS(233),
    [sym_math_align_point] = ACTIONS(360),
    [anon_sym_RPAREN] = ACTIONS(175),
    [anon_sym_COMMA] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_] = ACTIONS(236),
    [anon_sym_2] = ACTIONS(236),
    [anon_sym_3] = ACTIONS(236),
    [sym_math_text] = ACTIONS(360),
    [sym_math_ident] = ACTIONS(239),
    [anon_sym_POUND] = ACTIONS(242),
    [sym_string] = ACTIONS(357),
    [sym_line_comment] = ACTIONS(357),
    [anon_sym_SLASH_STAR] = ACTIONS(245),
    [sym__space] = ACTIONS(248),
    [sym_parbreak] = ACTIONS(357),
    [sym__newline] = ACTIONS(248),
  },
  [33] = {
    [sym_math] = STATE(355),
    [sym__math_expr] = STATE(156),
    [sym_math_shorthand] = STATE(156),
    [sym_math_delimited] = STATE(156),
    [sym_math_delimited_unclosed] = STATE(156),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(156),
    [sym_math_delimited_fence_unclosed] = STATE(156),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(156),
    [sym_math_root] = STATE(156),
    [sym_math_attach_below] = STATE(156),
    [sym_math_attach_above] = STATE(156),
    [sym_math_frac] = STATE(156),
    [sym_embedded_code_expr] = STATE(156),
    [sym__trivia] = STATE(156),
    [sym_block_comment] = STATE(156),
    [sym_space] = STATE(156),
    [aux_sym_math_repeat1] = STATE(36),
    [sym_linebreak] = ACTIONS(363),
    [sym_escape] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(367),
    [anon_sym_DASH_GT_GT] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_COLON_EQ] = ACTIONS(298),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_LT_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_COLON] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(298),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(298),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(298),
    [anon_sym_TILDE_GT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [aux_sym_math_fence_token1] = ACTIONS(304),
    [sym_math_align_point] = ACTIONS(365),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [sym_math_text] = ACTIONS(365),
    [sym_math_ident] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [sym_string] = ACTIONS(363),
    [sym_line_comment] = ACTIONS(363),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__space] = ACTIONS(314),
    [sym_parbreak] = ACTIONS(363),
    [sym__newline] = ACTIONS(314),
  },
  [34] = {
    [sym_math] = STATE(393),
    [sym__math_expr] = STATE(156),
    [sym_math_shorthand] = STATE(156),
    [sym_math_delimited] = STATE(156),
    [sym_math_delimited_unclosed] = STATE(156),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(156),
    [sym_math_delimited_fence_unclosed] = STATE(156),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(156),
    [sym_math_root] = STATE(156),
    [sym_math_attach_below] = STATE(156),
    [sym_math_attach_above] = STATE(156),
    [sym_math_frac] = STATE(156),
    [sym_embedded_code_expr] = STATE(156),
    [sym__trivia] = STATE(156),
    [sym_block_comment] = STATE(156),
    [sym_space] = STATE(156),
    [aux_sym_math_repeat1] = STATE(36),
    [sym_linebreak] = ACTIONS(363),
    [sym_escape] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(369),
    [anon_sym_DASH_GT_GT] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_COLON_EQ] = ACTIONS(298),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_LT_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_COLON] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(298),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(298),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(298),
    [anon_sym_TILDE_GT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [aux_sym_math_fence_token1] = ACTIONS(304),
    [sym_math_align_point] = ACTIONS(365),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [sym_math_text] = ACTIONS(365),
    [sym_math_ident] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [sym_string] = ACTIONS(363),
    [sym_line_comment] = ACTIONS(363),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__space] = ACTIONS(314),
    [sym_parbreak] = ACTIONS(363),
    [sym__newline] = ACTIONS(314),
  },
  [35] = {
    [sym_math] = STATE(368),
    [sym__math_expr] = STATE(156),
    [sym_math_shorthand] = STATE(156),
    [sym_math_delimited] = STATE(156),
    [sym_math_delimited_unclosed] = STATE(156),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(156),
    [sym_math_delimited_fence_unclosed] = STATE(156),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(156),
    [sym_math_root] = STATE(156),
    [sym_math_attach_below] = STATE(156),
    [sym_math_attach_above] = STATE(156),
    [sym_math_frac] = STATE(156),
    [sym_embedded_code_expr] = STATE(156),
    [sym__trivia] = STATE(156),
    [sym_block_comment] = STATE(156),
    [sym_space] = STATE(156),
    [aux_sym_math_repeat1] = STATE(36),
    [sym_linebreak] = ACTIONS(363),
    [sym_escape] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(371),
    [anon_sym_DASH_GT_GT] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_COLON_EQ] = ACTIONS(298),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_LT_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_COLON] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(298),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(298),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(298),
    [anon_sym_TILDE_GT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [aux_sym_math_fence_token1] = ACTIONS(304),
    [sym_math_align_point] = ACTIONS(365),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [sym_math_text] = ACTIONS(365),
    [sym_math_ident] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [sym_string] = ACTIONS(363),
    [sym_line_comment] = ACTIONS(363),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__space] = ACTIONS(314),
    [sym_parbreak] = ACTIONS(363),
    [sym__newline] = ACTIONS(314),
  },
  [36] = {
    [sym__math_expr] = STATE(156),
    [sym_math_shorthand] = STATE(156),
    [sym_math_delimited] = STATE(156),
    [sym_math_delimited_unclosed] = STATE(156),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(156),
    [sym_math_delimited_fence_unclosed] = STATE(156),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(156),
    [sym_math_root] = STATE(156),
    [sym_math_attach_below] = STATE(156),
    [sym_math_attach_above] = STATE(156),
    [sym_math_frac] = STATE(156),
    [sym_embedded_code_expr] = STATE(156),
    [sym__trivia] = STATE(156),
    [sym_block_comment] = STATE(156),
    [sym_space] = STATE(156),
    [aux_sym_math_repeat1] = STATE(37),
    [sym_linebreak] = ACTIONS(363),
    [sym_escape] = ACTIONS(365),
    [anon_sym_DOLLAR] = ACTIONS(123),
    [anon_sym_DASH_GT_GT] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_COLON_EQ] = ACTIONS(298),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_LT_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_COLON] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(298),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(298),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(298),
    [anon_sym_TILDE_GT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [aux_sym_math_fence_token1] = ACTIONS(304),
    [sym_math_align_point] = ACTIONS(365),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [sym_math_text] = ACTIONS(365),
    [sym_math_ident] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [sym_string] = ACTIONS(363),
    [sym_line_comment] = ACTIONS(363),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__space] = ACTIONS(314),
    [sym_parbreak] = ACTIONS(363),
    [sym__newline] = ACTIONS(314),
  },
  [37] = {
    [sym__math_expr] = STATE(156),
    [sym_math_shorthand] = STATE(156),
    [sym_math_delimited] = STATE(156),
    [sym_math_delimited_unclosed] = STATE(156),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(156),
    [sym_math_delimited_fence_unclosed] = STATE(156),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(156),
    [sym_math_root] = STATE(156),
    [sym_math_attach_below] = STATE(156),
    [sym_math_attach_above] = STATE(156),
    [sym_math_frac] = STATE(156),
    [sym_embedded_code_expr] = STATE(156),
    [sym__trivia] = STATE(156),
    [sym_block_comment] = STATE(156),
    [sym_space] = STATE(156),
    [aux_sym_math_repeat1] = STATE(37),
    [sym_linebreak] = ACTIONS(373),
    [sym_escape] = ACTIONS(376),
    [anon_sym_DOLLAR] = ACTIONS(175),
    [anon_sym_DASH_GT_GT] = ACTIONS(326),
    [anon_sym_DASH_GT] = ACTIONS(329),
    [anon_sym_DASH_DASH_GT] = ACTIONS(326),
    [anon_sym_COLON_EQ] = ACTIONS(326),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(326),
    [anon_sym_BANG_EQ] = ACTIONS(326),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(326),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(326),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(326),
    [anon_sym_LT_DASH_DASH] = ACTIONS(329),
    [anon_sym_LT_DASH_LT] = ACTIONS(326),
    [anon_sym_LT_DASH_GT] = ACTIONS(326),
    [anon_sym_LT_LT_DASH] = ACTIONS(326),
    [anon_sym_LT_LT_LT] = ACTIONS(326),
    [anon_sym_LT_EQ_GT] = ACTIONS(326),
    [anon_sym_LT_EQ_EQ] = ACTIONS(329),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(326),
    [anon_sym_LT_EQ] = ACTIONS(329),
    [anon_sym_LT_LT] = ACTIONS(329),
    [anon_sym_LT_DASH] = ACTIONS(329),
    [anon_sym_LT_TILDE] = ACTIONS(329),
    [anon_sym_GT_DASH_GT] = ACTIONS(326),
    [anon_sym_GT_GT_GT] = ACTIONS(326),
    [anon_sym_EQ_EQ_GT] = ACTIONS(326),
    [anon_sym_EQ_GT] = ACTIONS(326),
    [anon_sym_EQ_COLON] = ACTIONS(326),
    [anon_sym_GT_EQ] = ACTIONS(326),
    [anon_sym_GT_GT] = ACTIONS(329),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(326),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(326),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(326),
    [anon_sym_TILDE_GT] = ACTIONS(326),
    [anon_sym_STAR] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_LBRACK_PIPE] = ACTIONS(267),
    [aux_sym_math_delimited_left_token1] = ACTIONS(270),
    [anon_sym_PIPE_PIPE] = ACTIONS(332),
    [aux_sym_math_fence_token1] = ACTIONS(335),
    [sym_math_align_point] = ACTIONS(376),
    [anon_sym_] = ACTIONS(338),
    [anon_sym_2] = ACTIONS(338),
    [anon_sym_3] = ACTIONS(338),
    [sym_math_text] = ACTIONS(376),
    [sym_math_ident] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(344),
    [sym_string] = ACTIONS(373),
    [sym_line_comment] = ACTIONS(373),
    [anon_sym_SLASH_STAR] = ACTIONS(347),
    [sym__space] = ACTIONS(350),
    [sym_parbreak] = ACTIONS(373),
    [sym__newline] = ACTIONS(350),
  },
  [38] = {
    [sym__math_expr] = STATE(109),
    [sym_math_shorthand] = STATE(109),
    [sym_math_delimited] = STATE(109),
    [sym_math_delimited_unclosed] = STATE(109),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(109),
    [sym_math_delimited_fence_unclosed] = STATE(109),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(109),
    [sym_math_root] = STATE(109),
    [sym_math_attach_below] = STATE(109),
    [sym_math_attach_above] = STATE(109),
    [sym_math_frac] = STATE(109),
    [sym_embedded_code_expr] = STATE(109),
    [sym__trivia] = STATE(109),
    [sym_block_comment] = STATE(109),
    [sym_space] = STATE(109),
    [sym_linebreak] = ACTIONS(379),
    [sym_escape] = ACTIONS(381),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(381),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(381),
    [sym_math_ident] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(379),
    [sym_line_comment] = ACTIONS(379),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(379),
    [sym__newline] = ACTIONS(101),
  },
  [39] = {
    [sym__math_expr] = STATE(108),
    [sym_math_shorthand] = STATE(108),
    [sym_math_delimited] = STATE(108),
    [sym_math_delimited_unclosed] = STATE(108),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(108),
    [sym_math_delimited_fence_unclosed] = STATE(108),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(108),
    [sym_math_root] = STATE(108),
    [sym_math_attach_below] = STATE(108),
    [sym_math_attach_above] = STATE(108),
    [sym_math_frac] = STATE(108),
    [sym_embedded_code_expr] = STATE(108),
    [sym__trivia] = STATE(108),
    [sym_block_comment] = STATE(108),
    [sym_space] = STATE(108),
    [sym_linebreak] = ACTIONS(383),
    [sym_escape] = ACTIONS(385),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(385),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(385),
    [sym_math_ident] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(383),
    [sym_line_comment] = ACTIONS(383),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(383),
    [sym__newline] = ACTIONS(101),
  },
  [40] = {
    [sym__math_expr] = STATE(112),
    [sym_math_shorthand] = STATE(112),
    [sym_math_delimited] = STATE(112),
    [sym_math_delimited_unclosed] = STATE(112),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(112),
    [sym_math_delimited_fence_unclosed] = STATE(112),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(112),
    [sym_math_root] = STATE(112),
    [sym_math_attach_below] = STATE(112),
    [sym_math_attach_above] = STATE(112),
    [sym_math_frac] = STATE(112),
    [sym_embedded_code_expr] = STATE(112),
    [sym__trivia] = STATE(112),
    [sym_block_comment] = STATE(112),
    [sym_space] = STATE(112),
    [sym_linebreak] = ACTIONS(387),
    [sym_escape] = ACTIONS(389),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(389),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(389),
    [sym_math_ident] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(387),
    [sym_line_comment] = ACTIONS(387),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(387),
    [sym__newline] = ACTIONS(101),
  },
  [41] = {
    [sym__math_expr] = STATE(104),
    [sym_math_shorthand] = STATE(104),
    [sym_math_delimited] = STATE(104),
    [sym_math_delimited_unclosed] = STATE(104),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(104),
    [sym_math_delimited_fence_unclosed] = STATE(104),
    [sym_math_fence] = STATE(19),
    [sym_math_field_access] = STATE(99),
    [sym_math_function_call] = STATE(104),
    [sym_math_root] = STATE(104),
    [sym_math_attach_below] = STATE(104),
    [sym_math_attach_above] = STATE(104),
    [sym_math_frac] = STATE(104),
    [sym_embedded_code_expr] = STATE(104),
    [sym__trivia] = STATE(104),
    [sym_block_comment] = STATE(104),
    [sym_space] = STATE(104),
    [sym_linebreak] = ACTIONS(391),
    [sym_escape] = ACTIONS(393),
    [anon_sym_DASH_GT_GT] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_COLON_EQ] = ACTIONS(129),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH] = ACTIONS(131),
    [anon_sym_LT_DASH_LT] = ACTIONS(129),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_LT_DASH] = ACTIONS(129),
    [anon_sym_LT_LT_LT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ] = ACTIONS(131),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_LT_DASH] = ACTIONS(131),
    [anon_sym_LT_TILDE] = ACTIONS(131),
    [anon_sym_GT_DASH_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(129),
    [anon_sym_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_COLON] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(129),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(129),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(129),
    [anon_sym_TILDE_GT] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [aux_sym_math_fence_token1] = ACTIONS(143),
    [sym_math_align_point] = ACTIONS(393),
    [anon_sym_] = ACTIONS(145),
    [anon_sym_2] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(145),
    [sym_math_text] = ACTIONS(393),
    [sym_math_ident] = ACTIONS(147),
    [anon_sym_POUND] = ACTIONS(149),
    [sym_string] = ACTIONS(391),
    [sym_line_comment] = ACTIONS(391),
    [anon_sym_SLASH_STAR] = ACTIONS(151),
    [sym__space] = ACTIONS(153),
    [sym_parbreak] = ACTIONS(391),
    [sym__newline] = ACTIONS(153),
  },
  [42] = {
    [sym__math_expr] = STATE(161),
    [sym_math_shorthand] = STATE(161),
    [sym_math_delimited] = STATE(161),
    [sym_math_delimited_unclosed] = STATE(161),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(161),
    [sym_math_delimited_fence_unclosed] = STATE(161),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(161),
    [sym_math_root] = STATE(161),
    [sym_math_attach_below] = STATE(161),
    [sym_math_attach_above] = STATE(161),
    [sym_math_frac] = STATE(161),
    [sym_embedded_code_expr] = STATE(161),
    [sym__trivia] = STATE(161),
    [sym_block_comment] = STATE(161),
    [sym_space] = STATE(161),
    [sym_linebreak] = ACTIONS(395),
    [sym_escape] = ACTIONS(397),
    [anon_sym_DASH_GT_GT] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_COLON_EQ] = ACTIONS(298),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_LT_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_COLON] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(298),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(298),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(298),
    [anon_sym_TILDE_GT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [aux_sym_math_fence_token1] = ACTIONS(304),
    [sym_math_align_point] = ACTIONS(397),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [sym_math_text] = ACTIONS(397),
    [sym_math_ident] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [sym_string] = ACTIONS(395),
    [sym_line_comment] = ACTIONS(395),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__space] = ACTIONS(314),
    [sym_parbreak] = ACTIONS(395),
    [sym__newline] = ACTIONS(314),
  },
  [43] = {
    [sym__math_expr] = STATE(144),
    [sym_math_shorthand] = STATE(144),
    [sym_math_delimited] = STATE(144),
    [sym_math_delimited_unclosed] = STATE(144),
    [sym_math_delimited_left] = STATE(3),
    [sym_math_delimited_fence] = STATE(144),
    [sym_math_delimited_fence_unclosed] = STATE(144),
    [sym_math_fence] = STATE(20),
    [sym_math_field_access] = STATE(93),
    [sym_math_function_call] = STATE(144),
    [sym_math_root] = STATE(144),
    [sym_math_attach_below] = STATE(144),
    [sym_math_attach_above] = STATE(144),
    [sym_math_frac] = STATE(144),
    [sym_embedded_code_expr] = STATE(144),
    [sym__trivia] = STATE(144),
    [sym_block_comment] = STATE(144),
    [sym_space] = STATE(144),
    [sym_linebreak] = ACTIONS(399),
    [sym_escape] = ACTIONS(401),
    [anon_sym_DASH_GT_GT] = ACTIONS(77),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(77),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(77),
    [anon_sym_BANG_EQ] = ACTIONS(77),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_DASH_DASH] = ACTIONS(79),
    [anon_sym_LT_DASH_LT] = ACTIONS(77),
    [anon_sym_LT_DASH_GT] = ACTIONS(77),
    [anon_sym_LT_LT_DASH] = ACTIONS(77),
    [anon_sym_LT_LT_LT] = ACTIONS(77),
    [anon_sym_LT_EQ_GT] = ACTIONS(77),
    [anon_sym_LT_EQ_EQ] = ACTIONS(79),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_LT_LT] = ACTIONS(79),
    [anon_sym_LT_DASH] = ACTIONS(79),
    [anon_sym_LT_TILDE] = ACTIONS(79),
    [anon_sym_GT_DASH_GT] = ACTIONS(77),
    [anon_sym_GT_GT_GT] = ACTIONS(77),
    [anon_sym_EQ_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_GT] = ACTIONS(77),
    [anon_sym_EQ_COLON] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(77),
    [anon_sym_GT_GT] = ACTIONS(79),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(77),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(77),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(77),
    [anon_sym_TILDE_GT] = ACTIONS(77),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(81),
    [aux_sym_math_fence_token1] = ACTIONS(83),
    [sym_math_align_point] = ACTIONS(401),
    [anon_sym_] = ACTIONS(89),
    [anon_sym_2] = ACTIONS(89),
    [anon_sym_3] = ACTIONS(89),
    [sym_math_text] = ACTIONS(401),
    [sym_math_ident] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(95),
    [sym_string] = ACTIONS(399),
    [sym_line_comment] = ACTIONS(399),
    [anon_sym_SLASH_STAR] = ACTIONS(99),
    [sym__space] = ACTIONS(101),
    [sym_parbreak] = ACTIONS(399),
    [sym__newline] = ACTIONS(101),
  },
  [44] = {
    [sym__math_expr] = STATE(149),
    [sym_math_shorthand] = STATE(149),
    [sym_math_delimited] = STATE(149),
    [sym_math_delimited_unclosed] = STATE(149),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(149),
    [sym_math_delimited_fence_unclosed] = STATE(149),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(149),
    [sym_math_root] = STATE(149),
    [sym_math_attach_below] = STATE(149),
    [sym_math_attach_above] = STATE(149),
    [sym_math_frac] = STATE(149),
    [sym_embedded_code_expr] = STATE(149),
    [sym__trivia] = STATE(149),
    [sym_block_comment] = STATE(149),
    [sym_space] = STATE(149),
    [sym_linebreak] = ACTIONS(403),
    [sym_escape] = ACTIONS(405),
    [anon_sym_DASH_GT_GT] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_COLON_EQ] = ACTIONS(298),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_LT_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_COLON] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(298),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(298),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(298),
    [anon_sym_TILDE_GT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [aux_sym_math_fence_token1] = ACTIONS(304),
    [sym_math_align_point] = ACTIONS(405),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [sym_math_text] = ACTIONS(405),
    [sym_math_ident] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [sym_string] = ACTIONS(403),
    [sym_line_comment] = ACTIONS(403),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__space] = ACTIONS(314),
    [sym_parbreak] = ACTIONS(403),
    [sym__newline] = ACTIONS(314),
  },
  [45] = {
    [sym__math_expr] = STATE(152),
    [sym_math_shorthand] = STATE(152),
    [sym_math_delimited] = STATE(152),
    [sym_math_delimited_unclosed] = STATE(152),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(152),
    [sym_math_delimited_fence_unclosed] = STATE(152),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(152),
    [sym_math_root] = STATE(152),
    [sym_math_attach_below] = STATE(152),
    [sym_math_attach_above] = STATE(152),
    [sym_math_frac] = STATE(152),
    [sym_embedded_code_expr] = STATE(152),
    [sym__trivia] = STATE(152),
    [sym_block_comment] = STATE(152),
    [sym_space] = STATE(152),
    [sym_linebreak] = ACTIONS(407),
    [sym_escape] = ACTIONS(409),
    [anon_sym_DASH_GT_GT] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_COLON_EQ] = ACTIONS(298),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_LT_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_COLON] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(298),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(298),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(298),
    [anon_sym_TILDE_GT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [aux_sym_math_fence_token1] = ACTIONS(304),
    [sym_math_align_point] = ACTIONS(409),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [sym_math_text] = ACTIONS(409),
    [sym_math_ident] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [sym_string] = ACTIONS(407),
    [sym_line_comment] = ACTIONS(407),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__space] = ACTIONS(314),
    [sym_parbreak] = ACTIONS(407),
    [sym__newline] = ACTIONS(314),
  },
  [46] = {
    [sym__math_expr] = STATE(73),
    [sym_math_shorthand] = STATE(73),
    [sym_math_delimited] = STATE(73),
    [sym_math_delimited_unclosed] = STATE(73),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(73),
    [sym_math_delimited_fence_unclosed] = STATE(73),
    [sym_math_fence] = STATE(11),
    [sym_math_field_access] = STATE(58),
    [sym_math_function_call] = STATE(73),
    [sym_math_root] = STATE(73),
    [sym_math_attach_below] = STATE(73),
    [sym_math_attach_above] = STATE(73),
    [sym_math_frac] = STATE(73),
    [sym_embedded_code_expr] = STATE(73),
    [sym__trivia] = STATE(73),
    [sym_block_comment] = STATE(73),
    [sym_space] = STATE(73),
    [sym_linebreak] = ACTIONS(411),
    [sym_escape] = ACTIONS(413),
    [anon_sym_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_COLON_EQ] = ACTIONS(37),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_DASH_LT] = ACTIONS(37),
    [anon_sym_LT_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_LT_LT] = ACTIONS(37),
    [anon_sym_LT_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_TILDE] = ACTIONS(39),
    [anon_sym_GT_DASH_GT] = ACTIONS(37),
    [anon_sym_GT_GT_GT] = ACTIONS(37),
    [anon_sym_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_COLON] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(37),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(37),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(37),
    [anon_sym_TILDE_GT] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [aux_sym_math_fence_token1] = ACTIONS(51),
    [sym_math_align_point] = ACTIONS(413),
    [anon_sym_] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [sym_math_text] = ACTIONS(413),
    [sym_math_ident] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [sym_string] = ACTIONS(411),
    [sym_line_comment] = ACTIONS(411),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__space] = ACTIONS(63),
    [sym_parbreak] = ACTIONS(411),
    [sym__newline] = ACTIONS(63),
  },
  [47] = {
    [sym__math_expr] = STATE(151),
    [sym_math_shorthand] = STATE(151),
    [sym_math_delimited] = STATE(151),
    [sym_math_delimited_unclosed] = STATE(151),
    [sym_math_delimited_left] = STATE(15),
    [sym_math_delimited_fence] = STATE(151),
    [sym_math_delimited_fence_unclosed] = STATE(151),
    [sym_math_fence] = STATE(27),
    [sym_math_field_access] = STATE(148),
    [sym_math_function_call] = STATE(151),
    [sym_math_root] = STATE(151),
    [sym_math_attach_below] = STATE(151),
    [sym_math_attach_above] = STATE(151),
    [sym_math_frac] = STATE(151),
    [sym_embedded_code_expr] = STATE(151),
    [sym__trivia] = STATE(151),
    [sym_block_comment] = STATE(151),
    [sym_space] = STATE(151),
    [sym_linebreak] = ACTIONS(415),
    [sym_escape] = ACTIONS(417),
    [anon_sym_DASH_GT_GT] = ACTIONS(298),
    [anon_sym_DASH_GT] = ACTIONS(300),
    [anon_sym_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_COLON_EQ] = ACTIONS(298),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(298),
    [anon_sym_BANG_EQ] = ACTIONS(298),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_DASH_DASH] = ACTIONS(300),
    [anon_sym_LT_DASH_LT] = ACTIONS(298),
    [anon_sym_LT_DASH_GT] = ACTIONS(298),
    [anon_sym_LT_LT_DASH] = ACTIONS(298),
    [anon_sym_LT_LT_LT] = ACTIONS(298),
    [anon_sym_LT_EQ_GT] = ACTIONS(298),
    [anon_sym_LT_EQ_EQ] = ACTIONS(300),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(298),
    [anon_sym_LT_EQ] = ACTIONS(300),
    [anon_sym_LT_LT] = ACTIONS(300),
    [anon_sym_LT_DASH] = ACTIONS(300),
    [anon_sym_LT_TILDE] = ACTIONS(300),
    [anon_sym_GT_DASH_GT] = ACTIONS(298),
    [anon_sym_GT_GT_GT] = ACTIONS(298),
    [anon_sym_EQ_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_GT] = ACTIONS(298),
    [anon_sym_EQ_COLON] = ACTIONS(298),
    [anon_sym_GT_EQ] = ACTIONS(298),
    [anon_sym_GT_GT] = ACTIONS(300),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(298),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(298),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(298),
    [anon_sym_TILDE_GT] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_SQUOTE] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(302),
    [aux_sym_math_fence_token1] = ACTIONS(304),
    [sym_math_align_point] = ACTIONS(417),
    [anon_sym_] = ACTIONS(306),
    [anon_sym_2] = ACTIONS(306),
    [anon_sym_3] = ACTIONS(306),
    [sym_math_text] = ACTIONS(417),
    [sym_math_ident] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(310),
    [sym_string] = ACTIONS(415),
    [sym_line_comment] = ACTIONS(415),
    [anon_sym_SLASH_STAR] = ACTIONS(312),
    [sym__space] = ACTIONS(314),
    [sym_parbreak] = ACTIONS(415),
    [sym__newline] = ACTIONS(314),
  },
  [48] = {
    [sym__math_expr] = STATE(127),
    [sym_math_shorthand] = STATE(127),
    [sym_math_delimited] = STATE(127),
    [sym_math_delimited_unclosed] = STATE(127),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(127),
    [sym_math_delimited_fence_unclosed] = STATE(127),
    [sym_math_fence] = STATE(19),
    [sym_math_field_access] = STATE(99),
    [sym_math_function_call] = STATE(127),
    [sym_math_root] = STATE(127),
    [sym_math_attach_below] = STATE(127),
    [sym_math_attach_above] = STATE(127),
    [sym_math_frac] = STATE(127),
    [sym_embedded_code_expr] = STATE(127),
    [sym__trivia] = STATE(127),
    [sym_block_comment] = STATE(127),
    [sym_space] = STATE(127),
    [sym_linebreak] = ACTIONS(419),
    [sym_escape] = ACTIONS(421),
    [anon_sym_DASH_GT_GT] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_COLON_EQ] = ACTIONS(129),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH] = ACTIONS(131),
    [anon_sym_LT_DASH_LT] = ACTIONS(129),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_LT_DASH] = ACTIONS(129),
    [anon_sym_LT_LT_LT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ] = ACTIONS(131),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_LT_DASH] = ACTIONS(131),
    [anon_sym_LT_TILDE] = ACTIONS(131),
    [anon_sym_GT_DASH_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(129),
    [anon_sym_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_COLON] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(129),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(129),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(129),
    [anon_sym_TILDE_GT] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [aux_sym_math_fence_token1] = ACTIONS(143),
    [sym_math_align_point] = ACTIONS(421),
    [anon_sym_] = ACTIONS(145),
    [anon_sym_2] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(145),
    [sym_math_text] = ACTIONS(421),
    [sym_math_ident] = ACTIONS(147),
    [anon_sym_POUND] = ACTIONS(149),
    [sym_string] = ACTIONS(419),
    [sym_line_comment] = ACTIONS(419),
    [anon_sym_SLASH_STAR] = ACTIONS(151),
    [sym__space] = ACTIONS(153),
    [sym_parbreak] = ACTIONS(419),
    [sym__newline] = ACTIONS(153),
  },
  [49] = {
    [sym__math_expr] = STATE(83),
    [sym_math_shorthand] = STATE(83),
    [sym_math_delimited] = STATE(83),
    [sym_math_delimited_unclosed] = STATE(83),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(83),
    [sym_math_delimited_fence_unclosed] = STATE(83),
    [sym_math_fence] = STATE(11),
    [sym_math_field_access] = STATE(58),
    [sym_math_function_call] = STATE(83),
    [sym_math_root] = STATE(83),
    [sym_math_attach_below] = STATE(83),
    [sym_math_attach_above] = STATE(83),
    [sym_math_frac] = STATE(83),
    [sym_embedded_code_expr] = STATE(83),
    [sym__trivia] = STATE(83),
    [sym_block_comment] = STATE(83),
    [sym_space] = STATE(83),
    [sym_linebreak] = ACTIONS(423),
    [sym_escape] = ACTIONS(425),
    [anon_sym_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_COLON_EQ] = ACTIONS(37),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_DASH_LT] = ACTIONS(37),
    [anon_sym_LT_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_LT_LT] = ACTIONS(37),
    [anon_sym_LT_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_TILDE] = ACTIONS(39),
    [anon_sym_GT_DASH_GT] = ACTIONS(37),
    [anon_sym_GT_GT_GT] = ACTIONS(37),
    [anon_sym_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_COLON] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(37),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(37),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(37),
    [anon_sym_TILDE_GT] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [aux_sym_math_fence_token1] = ACTIONS(51),
    [sym_math_align_point] = ACTIONS(425),
    [anon_sym_] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [sym_math_text] = ACTIONS(425),
    [sym_math_ident] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [sym_string] = ACTIONS(423),
    [sym_line_comment] = ACTIONS(423),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__space] = ACTIONS(63),
    [sym_parbreak] = ACTIONS(423),
    [sym__newline] = ACTIONS(63),
  },
  [50] = {
    [sym__math_expr] = STATE(139),
    [sym_math_shorthand] = STATE(139),
    [sym_math_delimited] = STATE(139),
    [sym_math_delimited_unclosed] = STATE(139),
    [sym_math_delimited_left] = STATE(13),
    [sym_math_delimited_fence] = STATE(139),
    [sym_math_delimited_fence_unclosed] = STATE(139),
    [sym_math_fence] = STATE(19),
    [sym_math_field_access] = STATE(99),
    [sym_math_function_call] = STATE(139),
    [sym_math_root] = STATE(139),
    [sym_math_attach_below] = STATE(139),
    [sym_math_attach_above] = STATE(139),
    [sym_math_frac] = STATE(139),
    [sym_embedded_code_expr] = STATE(139),
    [sym__trivia] = STATE(139),
    [sym_block_comment] = STATE(139),
    [sym_space] = STATE(139),
    [sym_linebreak] = ACTIONS(427),
    [sym_escape] = ACTIONS(429),
    [anon_sym_DASH_GT_GT] = ACTIONS(129),
    [anon_sym_DASH_GT] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_COLON_EQ] = ACTIONS(129),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_DASH_DASH] = ACTIONS(131),
    [anon_sym_LT_DASH_LT] = ACTIONS(129),
    [anon_sym_LT_DASH_GT] = ACTIONS(129),
    [anon_sym_LT_LT_DASH] = ACTIONS(129),
    [anon_sym_LT_LT_LT] = ACTIONS(129),
    [anon_sym_LT_EQ_GT] = ACTIONS(129),
    [anon_sym_LT_EQ_EQ] = ACTIONS(131),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(131),
    [anon_sym_LT_LT] = ACTIONS(131),
    [anon_sym_LT_DASH] = ACTIONS(131),
    [anon_sym_LT_TILDE] = ACTIONS(131),
    [anon_sym_GT_DASH_GT] = ACTIONS(129),
    [anon_sym_GT_GT_GT] = ACTIONS(129),
    [anon_sym_EQ_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_GT] = ACTIONS(129),
    [anon_sym_EQ_COLON] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_GT_GT] = ACTIONS(131),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(129),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(129),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(129),
    [anon_sym_TILDE_GT] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(131),
    [anon_sym_SQUOTE] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_LBRACK_PIPE] = ACTIONS(133),
    [aux_sym_math_delimited_left_token1] = ACTIONS(135),
    [anon_sym_PIPE_PIPE] = ACTIONS(141),
    [aux_sym_math_fence_token1] = ACTIONS(143),
    [sym_math_align_point] = ACTIONS(429),
    [anon_sym_] = ACTIONS(145),
    [anon_sym_2] = ACTIONS(145),
    [anon_sym_3] = ACTIONS(145),
    [sym_math_text] = ACTIONS(429),
    [sym_math_ident] = ACTIONS(147),
    [anon_sym_POUND] = ACTIONS(149),
    [sym_string] = ACTIONS(427),
    [sym_line_comment] = ACTIONS(427),
    [anon_sym_SLASH_STAR] = ACTIONS(151),
    [sym__space] = ACTIONS(153),
    [sym_parbreak] = ACTIONS(427),
    [sym__newline] = ACTIONS(153),
  },
  [51] = {
    [sym__math_expr] = STATE(75),
    [sym_math_shorthand] = STATE(75),
    [sym_math_delimited] = STATE(75),
    [sym_math_delimited_unclosed] = STATE(75),
    [sym_math_delimited_left] = STATE(2),
    [sym_math_delimited_fence] = STATE(75),
    [sym_math_delimited_fence_unclosed] = STATE(75),
    [sym_math_fence] = STATE(11),
    [sym_math_field_access] = STATE(58),
    [sym_math_function_call] = STATE(75),
    [sym_math_root] = STATE(75),
    [sym_math_attach_below] = STATE(75),
    [sym_math_attach_above] = STATE(75),
    [sym_math_frac] = STATE(75),
    [sym_embedded_code_expr] = STATE(75),
    [sym__trivia] = STATE(75),
    [sym_block_comment] = STATE(75),
    [sym_space] = STATE(75),
    [sym_linebreak] = ACTIONS(431),
    [sym_escape] = ACTIONS(433),
    [anon_sym_DASH_GT_GT] = ACTIONS(37),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_COLON_EQ] = ACTIONS(37),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(37),
    [anon_sym_BANG_EQ] = ACTIONS(37),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_DASH_DASH] = ACTIONS(39),
    [anon_sym_LT_DASH_LT] = ACTIONS(37),
    [anon_sym_LT_DASH_GT] = ACTIONS(37),
    [anon_sym_LT_LT_DASH] = ACTIONS(37),
    [anon_sym_LT_LT_LT] = ACTIONS(37),
    [anon_sym_LT_EQ_GT] = ACTIONS(37),
    [anon_sym_LT_EQ_EQ] = ACTIONS(39),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(37),
    [anon_sym_LT_EQ] = ACTIONS(39),
    [anon_sym_LT_LT] = ACTIONS(39),
    [anon_sym_LT_DASH] = ACTIONS(39),
    [anon_sym_LT_TILDE] = ACTIONS(39),
    [anon_sym_GT_DASH_GT] = ACTIONS(37),
    [anon_sym_GT_GT_GT] = ACTIONS(37),
    [anon_sym_EQ_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_GT] = ACTIONS(37),
    [anon_sym_EQ_COLON] = ACTIONS(37),
    [anon_sym_GT_EQ] = ACTIONS(37),
    [anon_sym_GT_GT] = ACTIONS(39),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(37),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(37),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(37),
    [anon_sym_TILDE_GT] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [anon_sym_LBRACK_PIPE] = ACTIONS(41),
    [aux_sym_math_delimited_left_token1] = ACTIONS(43),
    [anon_sym_PIPE_PIPE] = ACTIONS(49),
    [aux_sym_math_fence_token1] = ACTIONS(51),
    [sym_math_align_point] = ACTIONS(433),
    [anon_sym_] = ACTIONS(55),
    [anon_sym_2] = ACTIONS(55),
    [anon_sym_3] = ACTIONS(55),
    [sym_math_text] = ACTIONS(433),
    [sym_math_ident] = ACTIONS(57),
    [anon_sym_POUND] = ACTIONS(59),
    [sym_string] = ACTIONS(431),
    [sym_line_comment] = ACTIONS(431),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__space] = ACTIONS(63),
    [sym_parbreak] = ACTIONS(431),
    [sym__newline] = ACTIONS(63),
  },
  [52] = {
    [aux_sym_math_field_access_repeat1] = STATE(52),
    [sym_linebreak] = ACTIONS(435),
    [sym_escape] = ACTIONS(437),
    [anon_sym_DASH_GT_GT] = ACTIONS(435),
    [anon_sym_DASH_GT] = ACTIONS(437),
    [anon_sym_DASH_DASH_GT] = ACTIONS(435),
    [anon_sym_COLON_EQ] = ACTIONS(435),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(435),
    [anon_sym_BANG_EQ] = ACTIONS(435),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(435),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(435),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(435),
    [anon_sym_LT_DASH_DASH] = ACTIONS(437),
    [anon_sym_LT_DASH_LT] = ACTIONS(435),
    [anon_sym_LT_DASH_GT] = ACTIONS(435),
    [anon_sym_LT_LT_DASH] = ACTIONS(435),
    [anon_sym_LT_LT_LT] = ACTIONS(435),
    [anon_sym_LT_EQ_GT] = ACTIONS(435),
    [anon_sym_LT_EQ_EQ] = ACTIONS(437),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(435),
    [anon_sym_LT_EQ] = ACTIONS(437),
    [anon_sym_LT_LT] = ACTIONS(437),
    [anon_sym_LT_DASH] = ACTIONS(437),
    [anon_sym_LT_TILDE] = ACTIONS(437),
    [anon_sym_GT_DASH_GT] = ACTIONS(435),
    [anon_sym_GT_GT_GT] = ACTIONS(435),
    [anon_sym_EQ_EQ_GT] = ACTIONS(435),
    [anon_sym_EQ_GT] = ACTIONS(435),
    [anon_sym_EQ_COLON] = ACTIONS(435),
    [anon_sym_GT_EQ] = ACTIONS(435),
    [anon_sym_GT_GT] = ACTIONS(437),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(435),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(435),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(435),
    [anon_sym_TILDE_GT] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(437),
    [anon_sym_SQUOTE] = ACTIONS(437),
    [anon_sym_DASH] = ACTIONS(437),
    [anon_sym_LBRACK_PIPE] = ACTIONS(435),
    [aux_sym_math_delimited_left_token1] = ACTIONS(437),
    [anon_sym_PIPE_RBRACK] = ACTIONS(435),
    [aux_sym_math_delimited_right_token1] = ACTIONS(437),
    [anon_sym_PIPE_PIPE] = ACTIONS(435),
    [aux_sym_math_fence_token1] = ACTIONS(437),
    [sym_math_align_point] = ACTIONS(437),
    [anon_sym_DOT] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(437),
    [anon_sym_RPAREN] = ACTIONS(437),
    [anon_sym_COMMA] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(437),
    [anon_sym_] = ACTIONS(437),
    [anon_sym_2] = ACTIONS(437),
    [anon_sym_3] = ACTIONS(437),
    [anon_sym__] = ACTIONS(437),
    [anon_sym_CARET] = ACTIONS(437),
    [anon_sym_SLASH] = ACTIONS(437),
    [sym_math_text] = ACTIONS(437),
    [sym_math_ident] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(437),
    [sym_string] = ACTIONS(435),
    [sym_line_comment] = ACTIONS(435),
    [anon_sym_SLASH_STAR] = ACTIONS(435),
    [sym__space] = ACTIONS(435),
    [sym_parbreak] = ACTIONS(435),
    [sym__newline] = ACTIONS(435),
  },
  [53] = {
    [aux_sym_math_field_access_repeat1] = STATE(54),
    [sym_linebreak] = ACTIONS(442),
    [sym_escape] = ACTIONS(444),
    [anon_sym_DASH_GT_GT] = ACTIONS(442),
    [anon_sym_DASH_GT] = ACTIONS(444),
    [anon_sym_DASH_DASH_GT] = ACTIONS(442),
    [anon_sym_COLON_EQ] = ACTIONS(442),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(442),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(442),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(442),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(442),
    [anon_sym_LT_DASH_DASH] = ACTIONS(444),
    [anon_sym_LT_DASH_LT] = ACTIONS(442),
    [anon_sym_LT_DASH_GT] = ACTIONS(442),
    [anon_sym_LT_LT_DASH] = ACTIONS(442),
    [anon_sym_LT_LT_LT] = ACTIONS(442),
    [anon_sym_LT_EQ_GT] = ACTIONS(442),
    [anon_sym_LT_EQ_EQ] = ACTIONS(444),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(444),
    [anon_sym_LT_LT] = ACTIONS(444),
    [anon_sym_LT_DASH] = ACTIONS(444),
    [anon_sym_LT_TILDE] = ACTIONS(444),
    [anon_sym_GT_DASH_GT] = ACTIONS(442),
    [anon_sym_GT_GT_GT] = ACTIONS(442),
    [anon_sym_EQ_EQ_GT] = ACTIONS(442),
    [anon_sym_EQ_GT] = ACTIONS(442),
    [anon_sym_EQ_COLON] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(442),
    [anon_sym_GT_GT] = ACTIONS(444),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(442),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(442),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(442),
    [anon_sym_TILDE_GT] = ACTIONS(442),
    [anon_sym_STAR] = ACTIONS(444),
    [anon_sym_SQUOTE] = ACTIONS(444),
    [anon_sym_DASH] = ACTIONS(444),
    [anon_sym_LBRACK_PIPE] = ACTIONS(442),
    [aux_sym_math_delimited_left_token1] = ACTIONS(444),
    [anon_sym_PIPE_RBRACK] = ACTIONS(442),
    [aux_sym_math_delimited_right_token1] = ACTIONS(444),
    [anon_sym_PIPE_PIPE] = ACTIONS(442),
    [aux_sym_math_fence_token1] = ACTIONS(444),
    [sym_math_align_point] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_LPAREN] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_SEMI] = ACTIONS(444),
    [anon_sym_] = ACTIONS(444),
    [anon_sym_2] = ACTIONS(444),
    [anon_sym_3] = ACTIONS(444),
    [anon_sym__] = ACTIONS(444),
    [anon_sym_CARET] = ACTIONS(444),
    [anon_sym_SLASH] = ACTIONS(444),
    [sym_math_text] = ACTIONS(444),
    [sym_math_ident] = ACTIONS(444),
    [anon_sym_POUND] = ACTIONS(444),
    [sym_string] = ACTIONS(442),
    [sym_line_comment] = ACTIONS(442),
    [anon_sym_SLASH_STAR] = ACTIONS(442),
    [sym__space] = ACTIONS(442),
    [sym_parbreak] = ACTIONS(442),
    [sym__newline] = ACTIONS(442),
  },
  [54] = {
    [aux_sym_math_field_access_repeat1] = STATE(52),
    [sym_linebreak] = ACTIONS(448),
    [sym_escape] = ACTIONS(450),
    [anon_sym_DASH_GT_GT] = ACTIONS(448),
    [anon_sym_DASH_GT] = ACTIONS(450),
    [anon_sym_DASH_DASH_GT] = ACTIONS(448),
    [anon_sym_COLON_EQ] = ACTIONS(448),
    [anon_sym_COLON_COLON_EQ] = ACTIONS(448),
    [anon_sym_BANG_EQ] = ACTIONS(448),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(448),
    [anon_sym_LT_EQ_EQ_GT] = ACTIONS(448),
    [anon_sym_LT_DASH_DASH_GT] = ACTIONS(448),
    [anon_sym_LT_DASH_DASH] = ACTIONS(450),
    [anon_sym_LT_DASH_LT] = ACTIONS(448),
    [anon_sym_LT_DASH_GT] = ACTIONS(448),
    [anon_sym_LT_LT_DASH] = ACTIONS(448),
    [anon_sym_LT_LT_LT] = ACTIONS(448),
    [anon_sym_LT_EQ_GT] = ACTIONS(448),
    [anon_sym_LT_EQ_EQ] = ACTIONS(450),
    [anon_sym_LT_TILDE_TILDE] = ACTIONS(448),
    [anon_sym_LT_EQ] = ACTIONS(450),
    [anon_sym_LT_LT] = ACTIONS(450),
    [anon_sym_LT_DASH] = ACTIONS(450),
    [anon_sym_LT_TILDE] = ACTIONS(450),
    [anon_sym_GT_DASH_GT] = ACTIONS(448),
    [anon_sym_GT_GT_GT] = ACTIONS(448),
    [anon_sym_EQ_EQ_GT] = ACTIONS(448),
    [anon_sym_EQ_GT] = ACTIONS(448),
    [anon_sym_EQ_COLON] = ACTIONS(448),
    [anon_sym_GT_EQ] = ACTIONS(448),
    [anon_sym_GT_GT] = ACTIONS(450),
    [anon_sym_PIPE_DASH_GT] = ACTIONS(448),
    [anon_sym_PIPE_EQ_GT] = ACTIONS(448),
    [anon_sym_TILDE_TILDE_GT] = ACTIONS(448),
    [anon_sym_TILDE_GT] = ACTIONS(448),
    [anon_sym_STAR] = ACTIONS(450),
    [anon_sym_SQUOTE] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(450),
    [anon_sym_LBRACK_PIPE] = ACTIONS(448),
    [aux_sym_math_delimited_left_token1] = ACTIONS(450),
    [anon_sym_PIPE_RBRACK] = ACTIONS(448),
    [aux_sym_math_delimited_right_token1] = ACTIONS(450),
    [anon_sym_PIPE_PIPE] = ACTIONS(448),
    [aux_sym_math_fence_token1] = ACTIONS(450),
    [sym_math_align_point] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(446),
    [anon_sym_LPAREN] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_] = ACTIONS(450),
    [anon_sym_2] = ACTIONS(450),
    [anon_sym_3] = ACTIONS(450),
    [anon_sym__] = ACTIONS(450),
    [anon_sym_CARET] = ACTIONS(450),
    [anon_sym_SLASH] = ACTIONS(450),
    [sym_math_text] = ACTIONS(450),
    [sym_math_ident] = ACTIONS(450),
    [anon_sym_POUND] = ACTIONS(450),
    [sym_string] = ACTIONS(448),
    [sym_line_comment] = ACTIONS(448),
    [anon_sym_SLASH_STAR] = ACTIONS(448),
    [sym__space] = ACTIONS(448),
    [sym_parbreak] = ACTIONS(448),
    [sym__newline] = ACTIONS(448),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(452), 1,
      anon_sym_DOT,
    ACTIONS(454), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(444), 28,
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
      anon_sym_POUND,
    ACTIONS(442), 33,
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
  [75] = 2,
    ACTIONS(437), 30,
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
      anon_sym_POUND,
    ACTIONS(435), 34,
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
  [144] = 2,
    ACTIONS(458), 30,
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
      anon_sym_POUND,
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
  [213] = 3,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 28,
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
      anon_sym_POUND,
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
  [283] = 4,
    ACTIONS(464), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(437), 28,
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
      anon_sym_POUND,
    ACTIONS(435), 33,
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
  [355] = 4,
    ACTIONS(467), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(437), 27,
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
      anon_sym_POUND,
    ACTIONS(435), 34,
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
  [427] = 5,
    ACTIONS(45), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(47), 1,
      aux_sym_math_delimited_right_token1,
    STATE(79), 1,
      sym_math_delimited_right,
    ACTIONS(472), 27,
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
      anon_sym_POUND,
    ACTIONS(470), 33,
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
  [501] = 5,
    ACTIONS(65), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(67), 1,
      aux_sym_math_delimited_right_token1,
    STATE(107), 1,
      sym_math_delimited_right,
    ACTIONS(472), 27,
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
      anon_sym_POUND,
    ACTIONS(470), 33,
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
  [575] = 5,
    ACTIONS(49), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(51), 1,
      aux_sym_math_fence_token1,
    STATE(89), 1,
      sym_math_fence,
    ACTIONS(476), 27,
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
      anon_sym_POUND,
    ACTIONS(474), 33,
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
  [649] = 4,
    ACTIONS(478), 1,
      anon_sym_DOT,
    STATE(67), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(444), 27,
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
      anon_sym_POUND,
    ACTIONS(442), 34,
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
  [721] = 4,
    ACTIONS(452), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(450), 28,
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
      anon_sym_POUND,
    ACTIONS(448), 33,
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
  [793] = 4,
    ACTIONS(452), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(444), 28,
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
      anon_sym_POUND,
    ACTIONS(442), 33,
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
  [865] = 4,
    ACTIONS(478), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(450), 27,
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
      anon_sym_POUND,
    ACTIONS(448), 34,
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
  [937] = 2,
    ACTIONS(482), 28,
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
      anon_sym_POUND,
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
  [1004] = 2,
    ACTIONS(486), 28,
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
      anon_sym_POUND,
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
  [1071] = 2,
    ACTIONS(490), 28,
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
      anon_sym_POUND,
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
  [1138] = 2,
    ACTIONS(494), 28,
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
      anon_sym_POUND,
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
  [1205] = 2,
    ACTIONS(498), 28,
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
      anon_sym_POUND,
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
  [1272] = 3,
    ACTIONS(504), 1,
      anon_sym__,
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
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
      anon_sym_POUND,
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
  [1341] = 2,
    ACTIONS(508), 28,
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
      anon_sym_POUND,
    ACTIONS(506), 34,
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
  [1408] = 4,
    ACTIONS(504), 1,
      anon_sym__,
    ACTIONS(514), 1,
      anon_sym_CARET,
    ACTIONS(512), 26,
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
      anon_sym_POUND,
    ACTIONS(510), 34,
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
  [1479] = 4,
    ACTIONS(504), 1,
      anon_sym__,
    ACTIONS(514), 1,
      anon_sym_CARET,
    ACTIONS(518), 26,
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
      anon_sym_POUND,
    ACTIONS(516), 34,
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
  [1550] = 2,
    ACTIONS(522), 28,
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
      anon_sym_POUND,
    ACTIONS(520), 34,
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
  [1617] = 2,
    ACTIONS(526), 28,
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
      anon_sym_POUND,
    ACTIONS(524), 34,
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
  [1684] = 2,
    ACTIONS(530), 28,
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
      anon_sym_POUND,
    ACTIONS(528), 34,
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
  [1751] = 2,
    ACTIONS(437), 28,
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
      anon_sym_POUND,
    ACTIONS(435), 34,
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
  [1818] = 2,
    ACTIONS(534), 28,
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
      anon_sym_POUND,
    ACTIONS(532), 34,
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
  [1885] = 2,
    ACTIONS(458), 28,
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
      anon_sym_POUND,
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
  [1952] = 2,
    ACTIONS(538), 28,
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
      anon_sym_POUND,
    ACTIONS(536), 34,
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
  [2019] = 2,
    ACTIONS(437), 29,
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
      anon_sym_POUND,
    ACTIONS(435), 33,
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
  [2086] = 2,
    ACTIONS(458), 29,
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
      anon_sym_POUND,
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
  [2153] = 2,
    ACTIONS(542), 28,
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
      anon_sym_POUND,
    ACTIONS(540), 34,
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
  [2220] = 2,
    ACTIONS(546), 28,
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
      anon_sym_POUND,
    ACTIONS(544), 34,
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
  [2287] = 2,
    ACTIONS(550), 28,
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
      anon_sym_POUND,
    ACTIONS(548), 34,
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
  [2354] = 2,
    ACTIONS(554), 28,
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
      anon_sym_POUND,
    ACTIONS(552), 34,
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
  [2421] = 2,
    ACTIONS(558), 28,
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
      anon_sym_POUND,
    ACTIONS(556), 34,
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
  [2488] = 2,
    ACTIONS(562), 28,
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
      anon_sym_POUND,
    ACTIONS(560), 34,
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
  [2555] = 2,
    ACTIONS(566), 28,
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
      anon_sym_POUND,
    ACTIONS(564), 34,
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
  [2622] = 3,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 27,
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
      anon_sym_POUND,
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
  [2690] = 4,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(96), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(450), 26,
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
      anon_sym_POUND,
    ACTIONS(448), 33,
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
  [2760] = 5,
    ACTIONS(141), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(143), 1,
      aux_sym_math_fence_token1,
    STATE(122), 1,
      sym_math_fence,
    ACTIONS(476), 25,
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
      anon_sym_POUND,
    ACTIONS(474), 33,
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
  [2832] = 4,
    ACTIONS(572), 1,
      anon_sym_DOT,
    STATE(96), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(437), 26,
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
      anon_sym_POUND,
    ACTIONS(435), 33,
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
  [2902] = 5,
    ACTIONS(81), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(83), 1,
      aux_sym_math_fence_token1,
    STATE(106), 1,
      sym_math_fence,
    ACTIONS(476), 26,
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
      anon_sym_POUND,
    ACTIONS(474), 32,
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
  [2974] = 5,
    ACTIONS(137), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(139), 1,
      aux_sym_math_delimited_right_token1,
    STATE(124), 1,
      sym_math_delimited_right,
    ACTIONS(472), 25,
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
      anon_sym_POUND,
    ACTIONS(470), 33,
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
  [3046] = 3,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 26,
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
      anon_sym_POUND,
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
  [3114] = 3,
    ACTIONS(458), 1,
      anon_sym_COLON,
    ACTIONS(107), 27,
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
      anon_sym_POUND,
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
  [3182] = 5,
    ACTIONS(198), 1,
      anon_sym_PIPE_RBRACK,
    ACTIONS(200), 1,
      aux_sym_math_delimited_right_token1,
    STATE(153), 1,
      sym_math_delimited_right,
    ACTIONS(472), 25,
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
      anon_sym_POUND,
    ACTIONS(470), 33,
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
  [3254] = 4,
    ACTIONS(570), 1,
      anon_sym_DOT,
    STATE(94), 1,
      aux_sym_math_field_access_repeat1,
    ACTIONS(444), 26,
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
      anon_sym_POUND,
    ACTIONS(442), 33,
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
  [3324] = 2,
    ACTIONS(558), 26,
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
      anon_sym_POUND,
    ACTIONS(556), 34,
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
  [3389] = 4,
    ACTIONS(577), 1,
      anon_sym__,
    ACTIONS(579), 1,
      anon_sym_CARET,
    ACTIONS(512), 24,
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
      anon_sym_POUND,
    ACTIONS(510), 34,
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
  [3458] = 2,
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
      anon_sym_POUND,
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
  [3523] = 2,
    ACTIONS(554), 27,
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
      anon_sym_POUND,
    ACTIONS(552), 33,
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
  [3588] = 2,
    ACTIONS(530), 27,
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
      anon_sym_POUND,
    ACTIONS(528), 33,
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
  [3653] = 4,
    ACTIONS(581), 1,
      anon_sym__,
    ACTIONS(583), 1,
      anon_sym_CARET,
    ACTIONS(518), 25,
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
      anon_sym_POUND,
    ACTIONS(516), 33,
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
  [3722] = 4,
    ACTIONS(581), 1,
      anon_sym__,
    ACTIONS(583), 1,
      anon_sym_CARET,
    ACTIONS(512), 25,
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
      anon_sym_POUND,
    ACTIONS(510), 33,
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
  [3791] = 2,
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
      anon_sym_POUND,
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
  [3856] = 2,
    ACTIONS(534), 27,
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
      anon_sym_POUND,
    ACTIONS(532), 33,
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
  [3921] = 2,
    ACTIONS(538), 27,
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
      anon_sym_POUND,
    ACTIONS(536), 33,
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
  [3986] = 2,
    ACTIONS(558), 27,
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
      anon_sym_POUND,
    ACTIONS(556), 33,
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
  [4051] = 5,
    ACTIONS(581), 1,
      anon_sym__,
    ACTIONS(583), 1,
      anon_sym_CARET,
    ACTIONS(589), 1,
      anon_sym_SLASH,
    ACTIONS(587), 24,
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
      anon_sym_POUND,
    ACTIONS(585), 33,
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
  [4122] = 2,
    ACTIONS(526), 26,
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
      anon_sym_POUND,
    ACTIONS(524), 34,
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
  [4187] = 2,
    ACTIONS(562), 27,
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
      anon_sym_POUND,
    ACTIONS(560), 33,
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
  [4252] = 2,
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
      anon_sym_POUND,
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
  [4317] = 2,
    ACTIONS(522), 26,
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
      anon_sym_POUND,
    ACTIONS(520), 34,
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
  [4382] = 2,
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
      anon_sym_POUND,
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
  [4447] = 2,
    ACTIONS(458), 27,
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
      anon_sym_POUND,
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
  [4512] = 2,
    ACTIONS(534), 26,
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
      anon_sym_POUND,
    ACTIONS(532), 34,
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
  [4577] = 2,
    ACTIONS(554), 26,
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
      anon_sym_POUND,
    ACTIONS(552), 34,
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
  [4642] = 2,
    ACTIONS(550), 26,
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
      anon_sym_POUND,
    ACTIONS(548), 34,
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
  [4707] = 2,
    ACTIONS(530), 26,
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
      anon_sym_POUND,
    ACTIONS(528), 34,
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
  [4772] = 4,
    ACTIONS(577), 1,
      anon_sym__,
    ACTIONS(579), 1,
      anon_sym_CARET,
    ACTIONS(518), 24,
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
      anon_sym_POUND,
    ACTIONS(516), 34,
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
  [4841] = 2,
    ACTIONS(490), 26,
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
      anon_sym_POUND,
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
  [4906] = 3,
    ACTIONS(577), 1,
      anon_sym__,
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
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
      anon_sym_POUND,
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
  [4973] = 2,
    ACTIONS(508), 26,
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
      anon_sym_POUND,
    ACTIONS(506), 34,
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
  [5038] = 2,
    ACTIONS(482), 26,
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
      anon_sym_POUND,
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
  [5103] = 2,
    ACTIONS(498), 26,
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
      anon_sym_POUND,
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
  [5168] = 2,
    ACTIONS(542), 26,
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
      anon_sym_POUND,
    ACTIONS(540), 34,
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
  [5233] = 2,
    ACTIONS(494), 26,
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
      anon_sym_POUND,
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
  [5298] = 2,
    ACTIONS(546), 26,
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
      anon_sym_POUND,
    ACTIONS(544), 34,
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
  [5363] = 2,
    ACTIONS(526), 27,
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
      anon_sym_POUND,
    ACTIONS(524), 33,
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
  [5428] = 2,
    ACTIONS(550), 27,
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
      anon_sym_POUND,
    ACTIONS(548), 33,
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
  [5493] = 2,
    ACTIONS(508), 27,
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
      anon_sym_POUND,
    ACTIONS(506), 33,
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
  [5558] = 2,
    ACTIONS(437), 27,
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
      anon_sym_POUND,
    ACTIONS(435), 33,
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
  [5623] = 2,
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
      anon_sym_POUND,
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
  [5688] = 2,
    ACTIONS(538), 26,
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
      anon_sym_POUND,
    ACTIONS(536), 34,
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
  [5753] = 2,
    ACTIONS(542), 27,
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
      anon_sym_POUND,
    ACTIONS(540), 33,
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
  [5818] = 2,
    ACTIONS(546), 27,
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
      anon_sym_POUND,
    ACTIONS(544), 33,
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
  [5883] = 2,
    ACTIONS(562), 26,
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
      anon_sym_POUND,
    ACTIONS(560), 34,
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
  [5948] = 2,
    ACTIONS(486), 26,
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
      anon_sym_POUND,
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
  [6013] = 3,
    ACTIONS(581), 1,
      anon_sym__,
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
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
      anon_sym_POUND,
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
  [6080] = 2,
    ACTIONS(566), 26,
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
      anon_sym_POUND,
    ACTIONS(564), 34,
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
  [6145] = 2,
    ACTIONS(566), 27,
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
      anon_sym_POUND,
    ACTIONS(564), 33,
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
  [6210] = 5,
    ACTIONS(302), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(304), 1,
      aux_sym_math_fence_token1,
    STATE(154), 1,
      sym_math_fence,
    ACTIONS(476), 24,
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
      anon_sym_POUND,
    ACTIONS(474), 32,
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
  [6280] = 3,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 25,
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
      anon_sym_POUND,
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
  [6346] = 4,
    ACTIONS(593), 1,
      anon_sym__,
    ACTIONS(595), 1,
      anon_sym_CARET,
    ACTIONS(518), 23,
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
      anon_sym_POUND,
    ACTIONS(516), 33,
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
  [6413] = 2,
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
      anon_sym_POUND,
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
  [6476] = 3,
    ACTIONS(593), 1,
      anon_sym__,
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
      anon_sym_CARET,
      anon_sym_SLASH,
      sym_math_text,
      sym_math_ident,
      anon_sym_POUND,
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
  [6541] = 4,
    ACTIONS(593), 1,
      anon_sym__,
    ACTIONS(595), 1,
      anon_sym_CARET,
    ACTIONS(512), 23,
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
      anon_sym_POUND,
    ACTIONS(510), 33,
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
  [6608] = 2,
    ACTIONS(530), 25,
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
      anon_sym_POUND,
    ACTIONS(528), 33,
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
  [6671] = 2,
    ACTIONS(554), 25,
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
      anon_sym_POUND,
    ACTIONS(552), 33,
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
  [6734] = 2,
    ACTIONS(534), 25,
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
      anon_sym_POUND,
    ACTIONS(532), 33,
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
  [6797] = 5,
    ACTIONS(593), 1,
      anon_sym__,
    ACTIONS(595), 1,
      anon_sym_CARET,
    ACTIONS(597), 1,
      anon_sym_SLASH,
    ACTIONS(587), 22,
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
      anon_sym_POUND,
    ACTIONS(585), 33,
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
  [6866] = 2,
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
      anon_sym_POUND,
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
  [6929] = 2,
    ACTIONS(566), 25,
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
      anon_sym_POUND,
    ACTIONS(564), 33,
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
  [6992] = 2,
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
      anon_sym_POUND,
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
  [7055] = 2,
    ACTIONS(562), 25,
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
      anon_sym_POUND,
    ACTIONS(560), 33,
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
  [7118] = 2,
    ACTIONS(538), 25,
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
      anon_sym_POUND,
    ACTIONS(536), 33,
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
  [7181] = 2,
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
      anon_sym_POUND,
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
  [7244] = 2,
    ACTIONS(558), 25,
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
      anon_sym_POUND,
    ACTIONS(556), 33,
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
  [7307] = 2,
    ACTIONS(550), 25,
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
      anon_sym_POUND,
    ACTIONS(548), 33,
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
  [7370] = 2,
    ACTIONS(546), 25,
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
      anon_sym_POUND,
    ACTIONS(544), 33,
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
  [7433] = 2,
    ACTIONS(526), 25,
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
      anon_sym_POUND,
    ACTIONS(524), 33,
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
  [7496] = 2,
    ACTIONS(542), 25,
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
      anon_sym_POUND,
    ACTIONS(540), 33,
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
  [7559] = 2,
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
      anon_sym_POUND,
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
  [7622] = 2,
    ACTIONS(508), 25,
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
      anon_sym_POUND,
    ACTIONS(506), 33,
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
  [7685] = 22,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(599), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
    ACTIONS(615), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      sym_parbreak,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    STATE(179), 1,
      sym_space,
    STATE(209), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(217), 1,
      sym_block_comment,
    STATE(273), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(336), 1,
      sym_heading,
    STATE(365), 1,
      sym_markup,
    ACTIONS(619), 2,
      sym__space,
      sym__newline,
    ACTIONS(601), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(181), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
  [7767] = 22,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(599), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      sym_parbreak,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_space,
    STATE(209), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(217), 1,
      sym_block_comment,
    STATE(273), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(336), 1,
      sym_heading,
    STATE(357), 1,
      sym_markup,
    ACTIONS(619), 2,
      sym__space,
      sym__newline,
    ACTIONS(601), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(181), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
  [7849] = 22,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(599), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      sym_parbreak,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_space,
    STATE(209), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(217), 1,
      sym_block_comment,
    STATE(273), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(336), 1,
      sym_heading,
    STATE(389), 1,
      sym_markup,
    ACTIONS(619), 2,
      sym__space,
      sym__newline,
    ACTIONS(601), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(181), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
  [7931] = 22,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(599), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      sym_parbreak,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_space,
    STATE(209), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(217), 1,
      sym_block_comment,
    STATE(273), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(336), 1,
      sym_heading,
    STATE(361), 1,
      sym_markup,
    ACTIONS(619), 2,
      sym__space,
      sym__newline,
    ACTIONS(601), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(181), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
  [8013] = 22,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(599), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      sym_parbreak,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_space,
    STATE(209), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(217), 1,
      sym_block_comment,
    STATE(273), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(336), 1,
      sym_heading,
    STATE(373), 1,
      sym_markup,
    ACTIONS(619), 2,
      sym__space,
      sym__newline,
    ACTIONS(601), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(181), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
  [8095] = 22,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(599), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      sym_parbreak,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    ACTIONS(635), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_space,
    STATE(209), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(217), 1,
      sym_block_comment,
    STATE(273), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(336), 1,
      sym_heading,
    STATE(383), 1,
      sym_markup,
    ACTIONS(619), 2,
      sym__space,
      sym__newline,
    ACTIONS(601), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(181), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
  [8177] = 22,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(599), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      sym_parbreak,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_space,
    STATE(209), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(217), 1,
      sym_block_comment,
    STATE(273), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(336), 1,
      sym_heading,
    STATE(377), 1,
      sym_markup,
    ACTIONS(619), 2,
      sym__space,
      sym__newline,
    ACTIONS(601), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(181), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
  [8259] = 22,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(599), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(615), 1,
      sym_line_comment,
    ACTIONS(617), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      sym_parbreak,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_space,
    STATE(209), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(217), 1,
      sym_block_comment,
    STATE(273), 1,
      aux_sym__markup_expr_line_start_sof_repeat1,
    STATE(336), 1,
      sym_heading,
    STATE(370), 1,
      sym_markup,
    ACTIONS(619), 2,
      sym__space,
      sym__newline,
    ACTIONS(601), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(181), 10,
      sym__markup_expr_base,
      sym__markup_expr_line_start_sof,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
  [8341] = 13,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym__delim_strong,
    ACTIONS(31), 1,
      sym__delim_emph,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(643), 1,
      aux_sym__markup_expr_text_token1,
    STATE(345), 1,
      sym__whitespace_line,
    ACTIONS(645), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    ACTIONS(647), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    STATE(180), 13,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [8403] = 13,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    ACTIONS(641), 1,
      anon_sym_RBRACK,
    ACTIONS(649), 1,
      aux_sym__markup_expr_text_token1,
    STATE(351), 1,
      sym__whitespace_line,
    ACTIONS(647), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(651), 6,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
    STATE(185), 13,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [8465] = 16,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym__delim_strong,
    ACTIONS(31), 1,
      sym__delim_emph,
    ACTIONS(653), 1,
      ts_builtin_sym_end,
    ACTIONS(655), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(659), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      sym__space,
    ACTIONS(663), 1,
      sym_parbreak,
    ACTIONS(665), 1,
      sym__newline,
    STATE(345), 1,
      sym__whitespace_line,
    ACTIONS(657), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(182), 13,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [8532] = 16,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    ACTIONS(641), 1,
      anon_sym_RBRACK,
    ACTIONS(649), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(667), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(669), 1,
      sym__space,
    ACTIONS(671), 1,
      sym_parbreak,
    ACTIONS(673), 1,
      sym__newline,
    STATE(351), 1,
      sym__whitespace_line,
    ACTIONS(651), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(185), 13,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [8599] = 16,
    ACTIONS(675), 1,
      ts_builtin_sym_end,
    ACTIONS(677), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(683), 1,
      aux_sym_link_token1,
    ACTIONS(686), 1,
      anon_sym_LT,
    ACTIONS(689), 1,
      anon_sym_AT,
    ACTIONS(692), 1,
      anon_sym_DOLLAR,
    ACTIONS(695), 1,
      anon_sym_POUND,
    ACTIONS(698), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(701), 1,
      sym__space,
    ACTIONS(704), 1,
      sym_parbreak,
    ACTIONS(707), 1,
      sym__newline,
    ACTIONS(710), 1,
      sym__delim_strong,
    ACTIONS(713), 1,
      sym__delim_emph,
    STATE(345), 1,
      sym__whitespace_line,
    ACTIONS(680), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(182), 13,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [8666] = 16,
    ACTIONS(675), 1,
      anon_sym_RBRACK,
    ACTIONS(716), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(722), 1,
      aux_sym_link_token1,
    ACTIONS(725), 1,
      anon_sym_LT,
    ACTIONS(728), 1,
      anon_sym_AT,
    ACTIONS(731), 1,
      anon_sym_DOLLAR,
    ACTIONS(734), 1,
      anon_sym_POUND,
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
    ACTIONS(752), 1,
      sym__delim_emph,
    STATE(351), 1,
      sym__whitespace_line,
    ACTIONS(719), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(183), 13,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [8733] = 16,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym__delim_strong,
    ACTIONS(31), 1,
      sym__delim_emph,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(643), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(659), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      sym__space,
    ACTIONS(663), 1,
      sym_parbreak,
    ACTIONS(665), 1,
      sym__newline,
    STATE(345), 1,
      sym__whitespace_line,
    ACTIONS(645), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(180), 13,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [8800] = 16,
    ACTIONS(603), 1,
      aux_sym_link_token1,
    ACTIONS(605), 1,
      anon_sym_LT,
    ACTIONS(607), 1,
      anon_sym_AT,
    ACTIONS(609), 1,
      anon_sym_DOLLAR,
    ACTIONS(611), 1,
      anon_sym_POUND,
    ACTIONS(623), 1,
      sym__delim_strong,
    ACTIONS(625), 1,
      sym__delim_emph,
    ACTIONS(653), 1,
      anon_sym_RBRACK,
    ACTIONS(667), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(669), 1,
      sym__space,
    ACTIONS(671), 1,
      sym_parbreak,
    ACTIONS(673), 1,
      sym__newline,
    ACTIONS(755), 1,
      aux_sym__markup_expr_text_token1,
    STATE(351), 1,
      sym__whitespace_line,
    ACTIONS(757), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(183), 13,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [8867] = 16,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym__delim_strong,
    ACTIONS(659), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      sym__space,
    ACTIONS(665), 1,
      sym__newline,
    ACTIONS(759), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(763), 1,
      sym_parbreak,
    ACTIONS(765), 1,
      sym__delim_emph,
    STATE(195), 1,
      aux_sym__markup_emph_repeat1,
    STATE(345), 1,
      sym__whitespace_line,
    ACTIONS(761), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(272), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
  [8932] = 16,
    ACTIONS(767), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(773), 1,
      aux_sym_link_token1,
    ACTIONS(776), 1,
      anon_sym_LT,
    ACTIONS(779), 1,
      anon_sym_AT,
    ACTIONS(782), 1,
      anon_sym_DOLLAR,
    ACTIONS(785), 1,
      anon_sym_POUND,
    ACTIONS(788), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(791), 1,
      sym__space,
    ACTIONS(794), 1,
      sym_parbreak,
    ACTIONS(797), 1,
      sym__newline,
    ACTIONS(800), 1,
      sym__delim_strong,
    ACTIONS(802), 1,
      sym__delim_emph,
    STATE(187), 1,
      aux_sym__markup_strong_repeat1,
    STATE(345), 1,
      sym__whitespace_line,
    ACTIONS(770), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(271), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
  [8997] = 16,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym__delim_strong,
    ACTIONS(659), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      sym__space,
    ACTIONS(665), 1,
      sym__newline,
    ACTIONS(759), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(763), 1,
      sym_parbreak,
    STATE(186), 1,
      aux_sym__markup_emph_repeat1,
    STATE(345), 1,
      sym__whitespace_line,
    STATE(391), 1,
      sym__markup_emph,
    ACTIONS(761), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(272), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
  [9062] = 16,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym__delim_strong,
    ACTIONS(659), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      sym__space,
    ACTIONS(665), 1,
      sym__newline,
    ACTIONS(759), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(763), 1,
      sym_parbreak,
    STATE(186), 1,
      aux_sym__markup_emph_repeat1,
    STATE(345), 1,
      sym__whitespace_line,
    STATE(386), 1,
      sym__markup_emph,
    ACTIONS(761), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(272), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
  [9127] = 16,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      sym__delim_emph,
    ACTIONS(659), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      sym__space,
    ACTIONS(665), 1,
      sym__newline,
    ACTIONS(763), 1,
      sym_parbreak,
    ACTIONS(805), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(809), 1,
      sym__delim_strong,
    STATE(187), 1,
      aux_sym__markup_strong_repeat1,
    STATE(345), 1,
      sym__whitespace_line,
    ACTIONS(807), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(271), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
  [9192] = 16,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      sym__delim_emph,
    ACTIONS(659), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      sym__space,
    ACTIONS(665), 1,
      sym__newline,
    ACTIONS(763), 1,
      sym_parbreak,
    ACTIONS(805), 1,
      aux_sym__markup_expr_text_token1,
    STATE(190), 1,
      aux_sym__markup_strong_repeat1,
    STATE(345), 1,
      sym__whitespace_line,
    STATE(385), 1,
      sym__markup_strong,
    ACTIONS(807), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(271), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
  [9257] = 16,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      sym__delim_strong,
    ACTIONS(659), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      sym__space,
    ACTIONS(665), 1,
      sym__newline,
    ACTIONS(759), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(763), 1,
      sym_parbreak,
    STATE(186), 1,
      aux_sym__markup_emph_repeat1,
    STATE(345), 1,
      sym__whitespace_line,
    STATE(372), 1,
      sym__markup_emph,
    ACTIONS(761), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(272), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
  [9322] = 16,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      sym__delim_emph,
    ACTIONS(659), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      sym__space,
    ACTIONS(665), 1,
      sym__newline,
    ACTIONS(763), 1,
      sym_parbreak,
    ACTIONS(805), 1,
      aux_sym__markup_expr_text_token1,
    STATE(190), 1,
      aux_sym__markup_strong_repeat1,
    STATE(345), 1,
      sym__whitespace_line,
    STATE(374), 1,
      sym__markup_strong,
    ACTIONS(807), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(271), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
  [9387] = 13,
    ACTIONS(811), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(815), 1,
      aux_sym_link_token1,
    ACTIONS(817), 1,
      anon_sym_LT,
    ACTIONS(819), 1,
      anon_sym_AT,
    ACTIONS(821), 1,
      anon_sym_DOLLAR,
    ACTIONS(823), 1,
      anon_sym_POUND,
    ACTIONS(825), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      sym__delim_strong,
    ACTIONS(831), 1,
      sym__delim_emph,
    STATE(197), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(827), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(813), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(250), 11,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym__space_same_line,
  [9446] = 16,
    ACTIONS(833), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(839), 1,
      aux_sym_link_token1,
    ACTIONS(842), 1,
      anon_sym_LT,
    ACTIONS(845), 1,
      anon_sym_AT,
    ACTIONS(848), 1,
      anon_sym_DOLLAR,
    ACTIONS(851), 1,
      anon_sym_POUND,
    ACTIONS(854), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(857), 1,
      sym__space,
    ACTIONS(860), 1,
      sym_parbreak,
    ACTIONS(863), 1,
      sym__newline,
    ACTIONS(866), 1,
      sym__delim_strong,
    ACTIONS(869), 1,
      sym__delim_emph,
    STATE(195), 1,
      aux_sym__markup_emph_repeat1,
    STATE(345), 1,
      sym__whitespace_line,
    ACTIONS(836), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(272), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
  [9511] = 16,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      sym__delim_emph,
    ACTIONS(659), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      sym__space,
    ACTIONS(665), 1,
      sym__newline,
    ACTIONS(763), 1,
      sym_parbreak,
    ACTIONS(805), 1,
      aux_sym__markup_expr_text_token1,
    STATE(190), 1,
      aux_sym__markup_strong_repeat1,
    STATE(345), 1,
      sym__whitespace_line,
    STATE(388), 1,
      sym__markup_strong,
    ACTIONS(807), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(271), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym_space,
  [9576] = 13,
    ACTIONS(871), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(877), 1,
      aux_sym_link_token1,
    ACTIONS(880), 1,
      anon_sym_LT,
    ACTIONS(883), 1,
      anon_sym_AT,
    ACTIONS(886), 1,
      anon_sym_DOLLAR,
    ACTIONS(889), 1,
      anon_sym_POUND,
    ACTIONS(892), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(897), 1,
      sym__delim_strong,
    ACTIONS(900), 1,
      sym__delim_emph,
    STATE(197), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(895), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(874), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(250), 11,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym__space_same_line,
  [9635] = 14,
    ACTIONS(811), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(815), 1,
      aux_sym_link_token1,
    ACTIONS(817), 1,
      anon_sym_LT,
    ACTIONS(819), 1,
      anon_sym_AT,
    ACTIONS(821), 1,
      anon_sym_DOLLAR,
    ACTIONS(823), 1,
      anon_sym_POUND,
    ACTIONS(825), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(829), 1,
      sym__delim_strong,
    ACTIONS(831), 1,
      sym__delim_emph,
    ACTIONS(903), 1,
      sym__token_eof,
    STATE(194), 1,
      aux_sym__markup_same_line_repeat1,
    STATE(343), 1,
      sym__markup_same_line,
    ACTIONS(813), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_text_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(250), 11,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_equation,
      sym_embedded_code_expr,
      sym_block_comment,
      sym__space_same_line,
  [9695] = 6,
    ACTIONS(905), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(909), 1,
      sym_heading_start,
    ACTIONS(911), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(913), 1,
      aux_sym__space_same_line_token1,
    STATE(323), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(907), 18,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
  [9733] = 6,
    ACTIONS(550), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(909), 1,
      sym_heading_start,
    ACTIONS(911), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(913), 1,
      aux_sym__space_same_line_token1,
    STATE(323), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(548), 18,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
  [9771] = 6,
    ACTIONS(905), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(909), 1,
      sym_heading_start,
    ACTIONS(911), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(913), 1,
      aux_sym__space_same_line_token1,
    STATE(323), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(907), 18,
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
      anon_sym_POUND,
      sym_line_comment,
  [9809] = 6,
    ACTIONS(550), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(909), 1,
      sym_heading_start,
    ACTIONS(911), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(913), 1,
      aux_sym__space_same_line_token1,
    STATE(323), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(548), 18,
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
      anon_sym_POUND,
      sym_line_comment,
  [9847] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(917), 1,
      aux_sym__markup_expr_text_token1,
    STATE(206), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(346), 1,
      sym_heading,
    ACTIONS(915), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [9881] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(921), 1,
      aux_sym__markup_expr_text_token1,
    STATE(206), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(346), 1,
      sym_heading,
    ACTIONS(919), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [9915] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(925), 1,
      aux_sym__markup_expr_text_token1,
    STATE(206), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(346), 1,
      sym_heading,
    ACTIONS(923), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [9949] = 5,
    ACTIONS(929), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(931), 1,
      sym_heading_start,
    STATE(206), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(346), 1,
      sym_heading,
    ACTIONS(927), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [9983] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(925), 1,
      aux_sym__markup_expr_text_token1,
    STATE(208), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(336), 1,
      sym_heading,
    ACTIONS(923), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10017] = 5,
    ACTIONS(929), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(931), 1,
      sym_heading_start,
    STATE(208), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(336), 1,
      sym_heading,
    ACTIONS(927), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10051] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(921), 1,
      aux_sym__markup_expr_text_token1,
    STATE(208), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(336), 1,
      sym_heading,
    ACTIONS(919), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10085] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(917), 1,
      aux_sym__markup_expr_text_token1,
    STATE(208), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(336), 1,
      sym_heading,
    ACTIONS(915), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10119] = 4,
    ACTIONS(934), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(938), 1,
      anon_sym_LBRACK,
    STATE(233), 1,
      sym_content_block,
    ACTIONS(936), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [10150] = 4,
    ACTIONS(934), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    STATE(228), 1,
      sym_content_block,
    ACTIONS(936), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10181] = 4,
    ACTIONS(934), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(942), 1,
      anon_sym_LBRACK,
    STATE(252), 1,
      sym_content_block,
    ACTIONS(936), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10212] = 2,
    ACTIONS(550), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(548), 20,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10238] = 2,
    ACTIONS(946), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(944), 20,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10264] = 2,
    ACTIONS(929), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(927), 20,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10290] = 3,
    ACTIONS(948), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(647), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(950), 14,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
  [10318] = 3,
    ACTIONS(948), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(647), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(950), 14,
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
      anon_sym_POUND,
  [10346] = 2,
    ACTIONS(490), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(488), 20,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10372] = 2,
    ACTIONS(562), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(560), 20,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10398] = 2,
    ACTIONS(490), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(488), 20,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10424] = 2,
    ACTIONS(929), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(927), 20,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10450] = 2,
    ACTIONS(946), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(944), 20,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10476] = 2,
    ACTIONS(550), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(548), 20,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10502] = 2,
    ACTIONS(562), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(560), 20,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10528] = 2,
    ACTIONS(562), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(560), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10553] = 2,
    ACTIONS(954), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(952), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10578] = 2,
    ACTIONS(956), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(958), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10603] = 2,
    ACTIONS(542), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(540), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10628] = 2,
    ACTIONS(960), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(962), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [10653] = 2,
    ACTIONS(964), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(966), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10678] = 2,
    ACTIONS(968), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(970), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [10703] = 2,
    ACTIONS(956), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(958), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [10728] = 2,
    ACTIONS(964), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(966), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [10753] = 2,
    ACTIONS(972), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(974), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [10778] = 2,
    ACTIONS(542), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(540), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10803] = 2,
    ACTIONS(976), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(978), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [10828] = 2,
    ACTIONS(968), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(970), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10853] = 2,
    ACTIONS(562), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(560), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10878] = 2,
    ACTIONS(482), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(480), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10903] = 2,
    ACTIONS(482), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(480), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10928] = 2,
    ACTIONS(490), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(488), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10953] = 2,
    ACTIONS(508), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(506), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [10978] = 2,
    ACTIONS(508), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(506), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11003] = 2,
    ACTIONS(526), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(524), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [11028] = 2,
    ACTIONS(976), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(978), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11053] = 2,
    ACTIONS(964), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(966), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11078] = 2,
    ACTIONS(550), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(548), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11103] = 2,
    ACTIONS(954), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(952), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [11128] = 2,
    ACTIONS(980), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(982), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [11153] = 2,
    ACTIONS(954), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(952), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11178] = 2,
    ACTIONS(956), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(958), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11203] = 2,
    ACTIONS(968), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(970), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11228] = 2,
    ACTIONS(550), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(548), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11253] = 2,
    ACTIONS(960), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(962), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11278] = 2,
    ACTIONS(546), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(544), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11303] = 2,
    ACTIONS(972), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(974), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11328] = 2,
    ACTIONS(972), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(974), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11353] = 2,
    ACTIONS(508), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(506), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [11378] = 2,
    ACTIONS(482), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(480), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [11403] = 2,
    ACTIONS(562), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(560), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [11428] = 2,
    ACTIONS(960), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(962), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11453] = 2,
    ACTIONS(526), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(524), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11478] = 2,
    ACTIONS(546), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(544), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11503] = 2,
    ACTIONS(490), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(488), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11528] = 2,
    ACTIONS(542), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(540), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [11553] = 2,
    ACTIONS(546), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(544), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [11578] = 2,
    ACTIONS(976), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(978), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11603] = 2,
    ACTIONS(526), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(524), 19,
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
      anon_sym_POUND,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11628] = 2,
    ACTIONS(490), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(488), 19,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [11653] = 2,
    ACTIONS(984), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(986), 18,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11677] = 2,
    ACTIONS(988), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(990), 18,
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
      anon_sym_POUND,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [11701] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(994), 1,
      anon_sym_SLASH_STAR,
    STATE(210), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(336), 1,
      sym_heading,
    ACTIONS(992), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(996), 2,
      sym__space,
      sym__newline,
    STATE(285), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [11727] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(994), 1,
      anon_sym_SLASH_STAR,
    STATE(203), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(346), 1,
      sym_heading,
    ACTIONS(992), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(996), 2,
      sym__space,
      sym__newline,
    STATE(285), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [11753] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1004), 1,
      sym_code_ident,
    STATE(366), 1,
      sym_code,
    STATE(284), 5,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
      aux_sym_code_repeat1,
  [11776] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1004), 1,
      sym_code_ident,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
    STATE(362), 1,
      sym_code,
    STATE(284), 5,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
      aux_sym_code_repeat1,
  [11799] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1004), 1,
      sym_code_ident,
    ACTIONS(1008), 1,
      anon_sym_RBRACE,
    STATE(390), 1,
      sym_code,
    STATE(284), 5,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
      aux_sym_code_repeat1,
  [11822] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1004), 1,
      sym_code_ident,
    ACTIONS(1010), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      sym_code,
    STATE(284), 5,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
      aux_sym_code_repeat1,
  [11845] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1004), 1,
      sym_code_ident,
    ACTIONS(1012), 1,
      anon_sym_RBRACE,
    STATE(364), 1,
      sym_code,
    STATE(284), 5,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
      aux_sym_code_repeat1,
  [11868] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1004), 1,
      sym_code_ident,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_code,
    STATE(284), 5,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
      aux_sym_code_repeat1,
  [11891] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1004), 1,
      sym_code_ident,
    ACTIONS(1016), 1,
      anon_sym_RBRACE,
    STATE(376), 1,
      sym_code,
    STATE(284), 5,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
      aux_sym_code_repeat1,
  [11914] = 6,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1004), 1,
      sym_code_ident,
    ACTIONS(1018), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      sym_code,
    STATE(284), 5,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
      aux_sym_code_repeat1,
  [11937] = 5,
    ACTIONS(1020), 1,
      anon_sym_LBRACE,
    ACTIONS(1023), 1,
      anon_sym_RBRACE,
    ACTIONS(1025), 1,
      anon_sym_LBRACK,
    ACTIONS(1028), 1,
      sym_code_ident,
    STATE(283), 5,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
      aux_sym_code_repeat1,
  [11957] = 5,
    ACTIONS(998), 1,
      anon_sym_LBRACE,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    ACTIONS(1033), 1,
      sym_code_ident,
    STATE(283), 5,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
      aux_sym_code_repeat1,
  [11977] = 5,
    ACTIONS(1035), 1,
      sym_heading_start,
    ACTIONS(1040), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1037), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(1043), 2,
      sym__space,
      sym__newline,
    STATE(285), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [11997] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1052), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12016] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1054), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12035] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1056), 1,
      sym_line_comment,
    ACTIONS(1058), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1060), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(291), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12054] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1062), 1,
      sym_line_comment,
    ACTIONS(1064), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1066), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(290), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12073] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1068), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12092] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1070), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12111] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1072), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12130] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1074), 1,
      sym_line_comment,
    ACTIONS(1076), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1078), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(300), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12149] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1080), 1,
      sym_line_comment,
    ACTIONS(1082), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1084), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(292), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12168] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1086), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12187] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1088), 1,
      sym_line_comment,
    ACTIONS(1090), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1092), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(295), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12206] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1094), 1,
      sym_line_comment,
    ACTIONS(1096), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1098), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(287), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12225] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1100), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12244] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1102), 1,
      sym_line_comment,
    ACTIONS(1104), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1106), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(305), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12263] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1108), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12282] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1110), 1,
      sym_line_comment,
    ACTIONS(1112), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1114), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(298), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12301] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1116), 1,
      sym_line_comment,
    ACTIONS(1118), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1120), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(306), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12320] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1122), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12339] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1124), 1,
      sym_line_comment,
    ACTIONS(1126), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1128), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(303), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12358] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1130), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12377] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1132), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12396] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1134), 1,
      sym_line_comment,
    ACTIONS(1136), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1138), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(310), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12415] = 5,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1140), 1,
      sym_line_comment,
    ACTIONS(1142), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1144), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(286), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12434] = 5,
    ACTIONS(1146), 1,
      sym_line_comment,
    ACTIONS(1149), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1152), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1155), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12453] = 5,
    ACTIONS(1046), 1,
      sym_line_comment,
    ACTIONS(1048), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1050), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(1157), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(309), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [12472] = 4,
    ACTIONS(940), 1,
      anon_sym_LBRACK,
    ACTIONS(1159), 1,
      anon_sym_LBRACE,
    ACTIONS(1161), 1,
      sym_code_ident,
    STATE(269), 4,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
  [12488] = 4,
    ACTIONS(1163), 1,
      anon_sym_LBRACE,
    ACTIONS(1165), 1,
      anon_sym_LBRACK,
    ACTIONS(1167), 1,
      sym_code_ident,
    STATE(134), 4,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
  [12504] = 4,
    ACTIONS(1169), 1,
      anon_sym_LBRACE,
    ACTIONS(1171), 1,
      anon_sym_LBRACK,
    ACTIONS(1173), 1,
      sym_code_ident,
    STATE(115), 4,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
  [12520] = 4,
    ACTIONS(938), 1,
      anon_sym_LBRACK,
    ACTIONS(1175), 1,
      anon_sym_LBRACE,
    ACTIONS(1177), 1,
      sym_code_ident,
    STATE(245), 4,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
  [12536] = 4,
    ACTIONS(1179), 1,
      anon_sym_LBRACE,
    ACTIONS(1181), 1,
      anon_sym_LBRACK,
    ACTIONS(1183), 1,
      sym_code_ident,
    STATE(166), 4,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
  [12552] = 4,
    ACTIONS(942), 1,
      anon_sym_LBRACK,
    ACTIONS(1185), 1,
      anon_sym_LBRACE,
    ACTIONS(1187), 1,
      sym_code_ident,
    STATE(263), 4,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
  [12568] = 4,
    ACTIONS(1189), 1,
      anon_sym_LBRACE,
    ACTIONS(1191), 1,
      anon_sym_LBRACK,
    ACTIONS(1193), 1,
      sym_code_ident,
    STATE(78), 4,
      sym__code_expr,
      sym__code_primary,
      sym_code_block,
      sym_content_block,
  [12584] = 1,
    ACTIONS(488), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [12593] = 4,
    ACTIONS(1195), 1,
      sym_heading_start,
    ACTIONS(1197), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1200), 1,
      aux_sym__space_same_line_token1,
    STATE(319), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [12608] = 2,
    ACTIONS(490), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(488), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [12619] = 2,
    ACTIONS(562), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(560), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [12630] = 4,
    ACTIONS(909), 1,
      sym_heading_start,
    ACTIONS(911), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(913), 1,
      aux_sym__space_same_line_token1,
    STATE(323), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [12645] = 4,
    ACTIONS(911), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(1203), 1,
      sym_heading_start,
    ACTIONS(1205), 1,
      aux_sym__space_same_line_token1,
    STATE(319), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [12660] = 1,
    ACTIONS(548), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [12669] = 1,
    ACTIONS(560), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [12678] = 3,
    ACTIONS(1207), 1,
      anon_sym_RPAREN,
    ACTIONS(1209), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(326), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [12690] = 3,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    ACTIONS(1214), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(330), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [12702] = 3,
    ACTIONS(1212), 1,
      anon_sym_RPAREN,
    ACTIONS(1214), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(326), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [12714] = 3,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    ACTIONS(1214), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(328), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [12726] = 3,
    ACTIONS(1218), 1,
      anon_sym_RPAREN,
    ACTIONS(1214), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(326), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [12738] = 3,
    ACTIONS(1216), 1,
      anon_sym_RPAREN,
    ACTIONS(1214), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    STATE(326), 2,
      sym__math_arg,
      aux_sym_math_args_repeat1,
  [12750] = 1,
    ACTIONS(480), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_code_ident,
  [12757] = 1,
    ACTIONS(540), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_code_ident,
  [12764] = 1,
    ACTIONS(544), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_code_ident,
  [12771] = 1,
    ACTIONS(506), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_code_ident,
  [12778] = 2,
    ACTIONS(1222), 1,
      sym__newline,
    ACTIONS(1220), 2,
      sym__token_eof,
      sym_parbreak,
  [12786] = 3,
    ACTIONS(1224), 1,
      sym_math_text,
    ACTIONS(1226), 1,
      sym_math_ident,
    STATE(80), 1,
      sym__math_text_ident,
  [12796] = 1,
    ACTIONS(1228), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [12802] = 1,
    ACTIONS(1230), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [12808] = 1,
    ACTIONS(1232), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12814] = 1,
    ACTIONS(560), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [12820] = 3,
    ACTIONS(1234), 1,
      sym_math_text,
    ACTIONS(1236), 1,
      sym_math_ident,
    STATE(84), 1,
      sym__math_text_ident,
  [12830] = 1,
    ACTIONS(1238), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [12836] = 1,
    ACTIONS(488), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [12842] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(205), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(346), 1,
      sym_heading,
  [12852] = 2,
    ACTIONS(1242), 1,
      sym__newline,
    ACTIONS(1240), 2,
      sym__token_eof,
      sym_parbreak,
  [12860] = 1,
    ACTIONS(1244), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12866] = 1,
    ACTIONS(1246), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12872] = 3,
    ACTIONS(1248), 1,
      sym_math_text,
    ACTIONS(1250), 1,
      sym_math_ident,
    STATE(137), 1,
      sym__math_text_ident,
  [12882] = 3,
    ACTIONS(1252), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(1254), 1,
      sym__token_eof,
    STATE(198), 1,
      sym__space_same_line,
  [12892] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(207), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(336), 1,
      sym_heading,
  [12902] = 3,
    ACTIONS(1256), 1,
      sym_math_text,
    ACTIONS(1258), 1,
      sym_math_ident,
    STATE(56), 1,
      sym__math_text_ident,
  [12912] = 1,
    ACTIONS(1260), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [12918] = 1,
    ACTIONS(1262), 1,
      aux_sym_reference_token1,
  [12922] = 1,
    ACTIONS(1264), 1,
      anon_sym_DOLLAR,
  [12926] = 1,
    ACTIONS(1266), 1,
      anon_sym_RBRACE,
  [12930] = 1,
    ACTIONS(1268), 1,
      anon_sym_RBRACK,
  [12934] = 1,
    ACTIONS(1270), 1,
      anon_sym_RPAREN,
  [12938] = 1,
    ACTIONS(1272), 1,
      sym__link_end,
  [12942] = 1,
    ACTIONS(1274), 1,
      anon_sym_RPAREN,
  [12946] = 1,
    ACTIONS(1276), 1,
      anon_sym_RBRACK,
  [12950] = 1,
    ACTIONS(1278), 1,
      anon_sym_RBRACE,
  [12954] = 1,
    ACTIONS(1280), 1,
      aux_sym_label_token1,
  [12958] = 1,
    ACTIONS(1282), 1,
      anon_sym_RBRACE,
  [12962] = 1,
    ACTIONS(1284), 1,
      anon_sym_RBRACK,
  [12966] = 1,
    ACTIONS(1286), 1,
      anon_sym_RBRACE,
  [12970] = 1,
    ACTIONS(1288), 1,
      anon_sym_GT,
  [12974] = 1,
    ACTIONS(1290), 1,
      anon_sym_DOLLAR,
  [12978] = 1,
    ACTIONS(1292), 1,
      anon_sym_RBRACE,
  [12982] = 1,
    ACTIONS(1294), 1,
      anon_sym_RBRACK,
  [12986] = 1,
    ACTIONS(1296), 1,
      anon_sym_GT,
  [12990] = 1,
    ACTIONS(1298), 1,
      sym__delim_emph,
  [12994] = 1,
    ACTIONS(1300), 1,
      anon_sym_RBRACK,
  [12998] = 1,
    ACTIONS(1302), 1,
      sym__delim_strong,
  [13002] = 1,
    ACTIONS(1304), 1,
      sym__link_end,
  [13006] = 1,
    ACTIONS(1306), 1,
      anon_sym_RBRACE,
  [13010] = 1,
    ACTIONS(1308), 1,
      anon_sym_RBRACK,
  [13014] = 1,
    ACTIONS(1310), 1,
      aux_sym_reference_token1,
  [13018] = 1,
    ACTIONS(1312), 1,
      sym__link_end,
  [13022] = 1,
    ACTIONS(1314), 1,
      aux_sym_reference_token1,
  [13026] = 1,
    ACTIONS(1316), 1,
      ts_builtin_sym_end,
  [13030] = 1,
    ACTIONS(1318), 1,
      anon_sym_RBRACE,
  [13034] = 1,
    ACTIONS(1320), 1,
      anon_sym_RBRACK,
  [13038] = 1,
    ACTIONS(1322), 1,
      ts_builtin_sym_end,
  [13042] = 1,
    ACTIONS(1324), 1,
      sym__delim_strong,
  [13046] = 1,
    ACTIONS(1326), 1,
      sym__delim_emph,
  [13050] = 1,
    ACTIONS(1328), 1,
      anon_sym_RPAREN,
  [13054] = 1,
    ACTIONS(1330), 1,
      sym__delim_strong,
  [13058] = 1,
    ACTIONS(1332), 1,
      anon_sym_RBRACK,
  [13062] = 1,
    ACTIONS(1334), 1,
      anon_sym_RBRACE,
  [13066] = 1,
    ACTIONS(1336), 1,
      sym__delim_emph,
  [13070] = 1,
    ACTIONS(1338), 1,
      anon_sym_GT,
  [13074] = 1,
    ACTIONS(1340), 1,
      anon_sym_DOLLAR,
  [13078] = 1,
    ACTIONS(1342), 1,
      aux_sym_label_token1,
  [13082] = 1,
    ACTIONS(1344), 1,
      anon_sym_RPAREN,
  [13086] = 1,
    ACTIONS(1346), 1,
      anon_sym_COLON,
  [13090] = 1,
    ACTIONS(1348), 1,
      aux_sym_label_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(55)] = 0,
  [SMALL_STATE(56)] = 75,
  [SMALL_STATE(57)] = 144,
  [SMALL_STATE(58)] = 213,
  [SMALL_STATE(59)] = 283,
  [SMALL_STATE(60)] = 355,
  [SMALL_STATE(61)] = 427,
  [SMALL_STATE(62)] = 501,
  [SMALL_STATE(63)] = 575,
  [SMALL_STATE(64)] = 649,
  [SMALL_STATE(65)] = 721,
  [SMALL_STATE(66)] = 793,
  [SMALL_STATE(67)] = 865,
  [SMALL_STATE(68)] = 937,
  [SMALL_STATE(69)] = 1004,
  [SMALL_STATE(70)] = 1071,
  [SMALL_STATE(71)] = 1138,
  [SMALL_STATE(72)] = 1205,
  [SMALL_STATE(73)] = 1272,
  [SMALL_STATE(74)] = 1341,
  [SMALL_STATE(75)] = 1408,
  [SMALL_STATE(76)] = 1479,
  [SMALL_STATE(77)] = 1550,
  [SMALL_STATE(78)] = 1617,
  [SMALL_STATE(79)] = 1684,
  [SMALL_STATE(80)] = 1751,
  [SMALL_STATE(81)] = 1818,
  [SMALL_STATE(82)] = 1885,
  [SMALL_STATE(83)] = 1952,
  [SMALL_STATE(84)] = 2019,
  [SMALL_STATE(85)] = 2086,
  [SMALL_STATE(86)] = 2153,
  [SMALL_STATE(87)] = 2220,
  [SMALL_STATE(88)] = 2287,
  [SMALL_STATE(89)] = 2354,
  [SMALL_STATE(90)] = 2421,
  [SMALL_STATE(91)] = 2488,
  [SMALL_STATE(92)] = 2555,
  [SMALL_STATE(93)] = 2622,
  [SMALL_STATE(94)] = 2690,
  [SMALL_STATE(95)] = 2760,
  [SMALL_STATE(96)] = 2832,
  [SMALL_STATE(97)] = 2902,
  [SMALL_STATE(98)] = 2974,
  [SMALL_STATE(99)] = 3046,
  [SMALL_STATE(100)] = 3114,
  [SMALL_STATE(101)] = 3182,
  [SMALL_STATE(102)] = 3254,
  [SMALL_STATE(103)] = 3324,
  [SMALL_STATE(104)] = 3389,
  [SMALL_STATE(105)] = 3458,
  [SMALL_STATE(106)] = 3523,
  [SMALL_STATE(107)] = 3588,
  [SMALL_STATE(108)] = 3653,
  [SMALL_STATE(109)] = 3722,
  [SMALL_STATE(110)] = 3791,
  [SMALL_STATE(111)] = 3856,
  [SMALL_STATE(112)] = 3921,
  [SMALL_STATE(113)] = 3986,
  [SMALL_STATE(114)] = 4051,
  [SMALL_STATE(115)] = 4122,
  [SMALL_STATE(116)] = 4187,
  [SMALL_STATE(117)] = 4252,
  [SMALL_STATE(118)] = 4317,
  [SMALL_STATE(119)] = 4382,
  [SMALL_STATE(120)] = 4447,
  [SMALL_STATE(121)] = 4512,
  [SMALL_STATE(122)] = 4577,
  [SMALL_STATE(123)] = 4642,
  [SMALL_STATE(124)] = 4707,
  [SMALL_STATE(125)] = 4772,
  [SMALL_STATE(126)] = 4841,
  [SMALL_STATE(127)] = 4906,
  [SMALL_STATE(128)] = 4973,
  [SMALL_STATE(129)] = 5038,
  [SMALL_STATE(130)] = 5103,
  [SMALL_STATE(131)] = 5168,
  [SMALL_STATE(132)] = 5233,
  [SMALL_STATE(133)] = 5298,
  [SMALL_STATE(134)] = 5363,
  [SMALL_STATE(135)] = 5428,
  [SMALL_STATE(136)] = 5493,
  [SMALL_STATE(137)] = 5558,
  [SMALL_STATE(138)] = 5623,
  [SMALL_STATE(139)] = 5688,
  [SMALL_STATE(140)] = 5753,
  [SMALL_STATE(141)] = 5818,
  [SMALL_STATE(142)] = 5883,
  [SMALL_STATE(143)] = 5948,
  [SMALL_STATE(144)] = 6013,
  [SMALL_STATE(145)] = 6080,
  [SMALL_STATE(146)] = 6145,
  [SMALL_STATE(147)] = 6210,
  [SMALL_STATE(148)] = 6280,
  [SMALL_STATE(149)] = 6346,
  [SMALL_STATE(150)] = 6413,
  [SMALL_STATE(151)] = 6476,
  [SMALL_STATE(152)] = 6541,
  [SMALL_STATE(153)] = 6608,
  [SMALL_STATE(154)] = 6671,
  [SMALL_STATE(155)] = 6734,
  [SMALL_STATE(156)] = 6797,
  [SMALL_STATE(157)] = 6866,
  [SMALL_STATE(158)] = 6929,
  [SMALL_STATE(159)] = 6992,
  [SMALL_STATE(160)] = 7055,
  [SMALL_STATE(161)] = 7118,
  [SMALL_STATE(162)] = 7181,
  [SMALL_STATE(163)] = 7244,
  [SMALL_STATE(164)] = 7307,
  [SMALL_STATE(165)] = 7370,
  [SMALL_STATE(166)] = 7433,
  [SMALL_STATE(167)] = 7496,
  [SMALL_STATE(168)] = 7559,
  [SMALL_STATE(169)] = 7622,
  [SMALL_STATE(170)] = 7685,
  [SMALL_STATE(171)] = 7767,
  [SMALL_STATE(172)] = 7849,
  [SMALL_STATE(173)] = 7931,
  [SMALL_STATE(174)] = 8013,
  [SMALL_STATE(175)] = 8095,
  [SMALL_STATE(176)] = 8177,
  [SMALL_STATE(177)] = 8259,
  [SMALL_STATE(178)] = 8341,
  [SMALL_STATE(179)] = 8403,
  [SMALL_STATE(180)] = 8465,
  [SMALL_STATE(181)] = 8532,
  [SMALL_STATE(182)] = 8599,
  [SMALL_STATE(183)] = 8666,
  [SMALL_STATE(184)] = 8733,
  [SMALL_STATE(185)] = 8800,
  [SMALL_STATE(186)] = 8867,
  [SMALL_STATE(187)] = 8932,
  [SMALL_STATE(188)] = 8997,
  [SMALL_STATE(189)] = 9062,
  [SMALL_STATE(190)] = 9127,
  [SMALL_STATE(191)] = 9192,
  [SMALL_STATE(192)] = 9257,
  [SMALL_STATE(193)] = 9322,
  [SMALL_STATE(194)] = 9387,
  [SMALL_STATE(195)] = 9446,
  [SMALL_STATE(196)] = 9511,
  [SMALL_STATE(197)] = 9576,
  [SMALL_STATE(198)] = 9635,
  [SMALL_STATE(199)] = 9695,
  [SMALL_STATE(200)] = 9733,
  [SMALL_STATE(201)] = 9771,
  [SMALL_STATE(202)] = 9809,
  [SMALL_STATE(203)] = 9847,
  [SMALL_STATE(204)] = 9881,
  [SMALL_STATE(205)] = 9915,
  [SMALL_STATE(206)] = 9949,
  [SMALL_STATE(207)] = 9983,
  [SMALL_STATE(208)] = 10017,
  [SMALL_STATE(209)] = 10051,
  [SMALL_STATE(210)] = 10085,
  [SMALL_STATE(211)] = 10119,
  [SMALL_STATE(212)] = 10150,
  [SMALL_STATE(213)] = 10181,
  [SMALL_STATE(214)] = 10212,
  [SMALL_STATE(215)] = 10238,
  [SMALL_STATE(216)] = 10264,
  [SMALL_STATE(217)] = 10290,
  [SMALL_STATE(218)] = 10318,
  [SMALL_STATE(219)] = 10346,
  [SMALL_STATE(220)] = 10372,
  [SMALL_STATE(221)] = 10398,
  [SMALL_STATE(222)] = 10424,
  [SMALL_STATE(223)] = 10450,
  [SMALL_STATE(224)] = 10476,
  [SMALL_STATE(225)] = 10502,
  [SMALL_STATE(226)] = 10528,
  [SMALL_STATE(227)] = 10553,
  [SMALL_STATE(228)] = 10578,
  [SMALL_STATE(229)] = 10603,
  [SMALL_STATE(230)] = 10628,
  [SMALL_STATE(231)] = 10653,
  [SMALL_STATE(232)] = 10678,
  [SMALL_STATE(233)] = 10703,
  [SMALL_STATE(234)] = 10728,
  [SMALL_STATE(235)] = 10753,
  [SMALL_STATE(236)] = 10778,
  [SMALL_STATE(237)] = 10803,
  [SMALL_STATE(238)] = 10828,
  [SMALL_STATE(239)] = 10853,
  [SMALL_STATE(240)] = 10878,
  [SMALL_STATE(241)] = 10903,
  [SMALL_STATE(242)] = 10928,
  [SMALL_STATE(243)] = 10953,
  [SMALL_STATE(244)] = 10978,
  [SMALL_STATE(245)] = 11003,
  [SMALL_STATE(246)] = 11028,
  [SMALL_STATE(247)] = 11053,
  [SMALL_STATE(248)] = 11078,
  [SMALL_STATE(249)] = 11103,
  [SMALL_STATE(250)] = 11128,
  [SMALL_STATE(251)] = 11153,
  [SMALL_STATE(252)] = 11178,
  [SMALL_STATE(253)] = 11203,
  [SMALL_STATE(254)] = 11228,
  [SMALL_STATE(255)] = 11253,
  [SMALL_STATE(256)] = 11278,
  [SMALL_STATE(257)] = 11303,
  [SMALL_STATE(258)] = 11328,
  [SMALL_STATE(259)] = 11353,
  [SMALL_STATE(260)] = 11378,
  [SMALL_STATE(261)] = 11403,
  [SMALL_STATE(262)] = 11428,
  [SMALL_STATE(263)] = 11453,
  [SMALL_STATE(264)] = 11478,
  [SMALL_STATE(265)] = 11503,
  [SMALL_STATE(266)] = 11528,
  [SMALL_STATE(267)] = 11553,
  [SMALL_STATE(268)] = 11578,
  [SMALL_STATE(269)] = 11603,
  [SMALL_STATE(270)] = 11628,
  [SMALL_STATE(271)] = 11653,
  [SMALL_STATE(272)] = 11677,
  [SMALL_STATE(273)] = 11701,
  [SMALL_STATE(274)] = 11727,
  [SMALL_STATE(275)] = 11753,
  [SMALL_STATE(276)] = 11776,
  [SMALL_STATE(277)] = 11799,
  [SMALL_STATE(278)] = 11822,
  [SMALL_STATE(279)] = 11845,
  [SMALL_STATE(280)] = 11868,
  [SMALL_STATE(281)] = 11891,
  [SMALL_STATE(282)] = 11914,
  [SMALL_STATE(283)] = 11937,
  [SMALL_STATE(284)] = 11957,
  [SMALL_STATE(285)] = 11977,
  [SMALL_STATE(286)] = 11997,
  [SMALL_STATE(287)] = 12016,
  [SMALL_STATE(288)] = 12035,
  [SMALL_STATE(289)] = 12054,
  [SMALL_STATE(290)] = 12073,
  [SMALL_STATE(291)] = 12092,
  [SMALL_STATE(292)] = 12111,
  [SMALL_STATE(293)] = 12130,
  [SMALL_STATE(294)] = 12149,
  [SMALL_STATE(295)] = 12168,
  [SMALL_STATE(296)] = 12187,
  [SMALL_STATE(297)] = 12206,
  [SMALL_STATE(298)] = 12225,
  [SMALL_STATE(299)] = 12244,
  [SMALL_STATE(300)] = 12263,
  [SMALL_STATE(301)] = 12282,
  [SMALL_STATE(302)] = 12301,
  [SMALL_STATE(303)] = 12320,
  [SMALL_STATE(304)] = 12339,
  [SMALL_STATE(305)] = 12358,
  [SMALL_STATE(306)] = 12377,
  [SMALL_STATE(307)] = 12396,
  [SMALL_STATE(308)] = 12415,
  [SMALL_STATE(309)] = 12434,
  [SMALL_STATE(310)] = 12453,
  [SMALL_STATE(311)] = 12472,
  [SMALL_STATE(312)] = 12488,
  [SMALL_STATE(313)] = 12504,
  [SMALL_STATE(314)] = 12520,
  [SMALL_STATE(315)] = 12536,
  [SMALL_STATE(316)] = 12552,
  [SMALL_STATE(317)] = 12568,
  [SMALL_STATE(318)] = 12584,
  [SMALL_STATE(319)] = 12593,
  [SMALL_STATE(320)] = 12608,
  [SMALL_STATE(321)] = 12619,
  [SMALL_STATE(322)] = 12630,
  [SMALL_STATE(323)] = 12645,
  [SMALL_STATE(324)] = 12660,
  [SMALL_STATE(325)] = 12669,
  [SMALL_STATE(326)] = 12678,
  [SMALL_STATE(327)] = 12690,
  [SMALL_STATE(328)] = 12702,
  [SMALL_STATE(329)] = 12714,
  [SMALL_STATE(330)] = 12726,
  [SMALL_STATE(331)] = 12738,
  [SMALL_STATE(332)] = 12750,
  [SMALL_STATE(333)] = 12757,
  [SMALL_STATE(334)] = 12764,
  [SMALL_STATE(335)] = 12771,
  [SMALL_STATE(336)] = 12778,
  [SMALL_STATE(337)] = 12786,
  [SMALL_STATE(338)] = 12796,
  [SMALL_STATE(339)] = 12802,
  [SMALL_STATE(340)] = 12808,
  [SMALL_STATE(341)] = 12814,
  [SMALL_STATE(342)] = 12820,
  [SMALL_STATE(343)] = 12830,
  [SMALL_STATE(344)] = 12836,
  [SMALL_STATE(345)] = 12842,
  [SMALL_STATE(346)] = 12852,
  [SMALL_STATE(347)] = 12860,
  [SMALL_STATE(348)] = 12866,
  [SMALL_STATE(349)] = 12872,
  [SMALL_STATE(350)] = 12882,
  [SMALL_STATE(351)] = 12892,
  [SMALL_STATE(352)] = 12902,
  [SMALL_STATE(353)] = 12912,
  [SMALL_STATE(354)] = 12918,
  [SMALL_STATE(355)] = 12922,
  [SMALL_STATE(356)] = 12926,
  [SMALL_STATE(357)] = 12930,
  [SMALL_STATE(358)] = 12934,
  [SMALL_STATE(359)] = 12938,
  [SMALL_STATE(360)] = 12942,
  [SMALL_STATE(361)] = 12946,
  [SMALL_STATE(362)] = 12950,
  [SMALL_STATE(363)] = 12954,
  [SMALL_STATE(364)] = 12958,
  [SMALL_STATE(365)] = 12962,
  [SMALL_STATE(366)] = 12966,
  [SMALL_STATE(367)] = 12970,
  [SMALL_STATE(368)] = 12974,
  [SMALL_STATE(369)] = 12978,
  [SMALL_STATE(370)] = 12982,
  [SMALL_STATE(371)] = 12986,
  [SMALL_STATE(372)] = 12990,
  [SMALL_STATE(373)] = 12994,
  [SMALL_STATE(374)] = 12998,
  [SMALL_STATE(375)] = 13002,
  [SMALL_STATE(376)] = 13006,
  [SMALL_STATE(377)] = 13010,
  [SMALL_STATE(378)] = 13014,
  [SMALL_STATE(379)] = 13018,
  [SMALL_STATE(380)] = 13022,
  [SMALL_STATE(381)] = 13026,
  [SMALL_STATE(382)] = 13030,
  [SMALL_STATE(383)] = 13034,
  [SMALL_STATE(384)] = 13038,
  [SMALL_STATE(385)] = 13042,
  [SMALL_STATE(386)] = 13046,
  [SMALL_STATE(387)] = 13050,
  [SMALL_STATE(388)] = 13054,
  [SMALL_STATE(389)] = 13058,
  [SMALL_STATE(390)] = 13062,
  [SMALL_STATE(391)] = 13066,
  [SMALL_STATE(392)] = 13070,
  [SMALL_STATE(393)] = 13074,
  [SMALL_STATE(394)] = 13078,
  [SMALL_STATE(395)] = 13082,
  [SMALL_STATE(396)] = 13086,
  [SMALL_STATE(397)] = 13090,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_unclosed, 1, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_fence, 2, .production_id = 10),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_fence, 2, .production_id = 10),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_arg, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_expr, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_fence_unclosed, 1, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_fence_unclosed, 1, .production_id = 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(14),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(14),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(72),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(72),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(77),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(77),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(71),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(71),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(49),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(53),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(317),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(294),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(88),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_arg_named, 3, .production_id = 17),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_arg, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(23),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(23),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(119),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(119),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(117),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(117),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(40),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(66),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(312),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(301),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(135),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(25),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(25),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(130),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(130),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(118),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(118),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(132),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(132),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(50),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(64),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(313),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(299),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(123),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(29),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(29),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(159),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(159),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(157),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(157),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(42),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(102),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(315),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(288),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(164),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_arg_named, 2, .production_id = 17),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(114),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(114),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(156),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 2), SHIFT_REPEAT(156),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_field_access_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(352),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_field_access, 1),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_field_access, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_field_access, 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_field_access, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_text_ident, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_text_ident, 1, .production_id = 11),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__math_text_ident, 1, .production_id = 11),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_expr, 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(342),
  [467] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(337),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_unclosed, 2, .production_id = 9),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_unclosed, 2, .production_id = 9),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_fence_unclosed, 2, .production_id = 9),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_fence_unclosed, 2, .production_id = 9),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 2),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_right, 1),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_right, 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_fence, 1),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_fence, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_shorthand, 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_shorthand, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_attach_below, 3, .production_id = 12),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_attach_below, 3, .production_id = 12),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_attach_above, 3, .production_id = 13),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_attach_above, 3, .production_id = 13),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_frac, 3, .production_id = 14),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_frac, 3, .production_id = 14),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_left, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_left, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_embedded_code_expr, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_embedded_code_expr, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited, 3, .production_id = 15),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited, 3, .production_id = 15),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_function_call, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_function_call, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_root, 2, .production_id = 8),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_root, 2, .production_id = 8),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_space, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited_fence, 3, .production_id = 15),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited_fence, 3, .production_id = 15),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_function_call, 4, .production_id = 16),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_function_call, 4, .production_id = 16),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_delimited, 2, .production_id = 10),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_delimited, 2, .production_id = 10),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [572] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_field_access_repeat1, 2), SHIFT_REPEAT(349),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_repeat1, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_repeat1, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 2),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2),
  [677] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(182),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(182),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(359),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(363),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(354),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(34),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(316),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(293),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(248),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(201),
  [707] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(202),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(196),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(188),
  [716] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(183),
  [719] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(183),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(375),
  [725] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(397),
  [728] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(380),
  [731] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(33),
  [734] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(311),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(296),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(254),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(199),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(200),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(191),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(189),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_emph, 1, .production_id = 1),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(271),
  [770] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(271),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(359),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(363),
  [779] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(354),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(34),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(316),
  [788] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(293),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(248),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(322),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(202),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2),
  [802] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(188),
  [805] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_strong, 1, .production_id = 1),
  [811] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_same_line, 1, .production_id = 1),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [833] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(272),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(272),
  [839] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(359),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(363),
  [845] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(354),
  [848] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(34),
  [851] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(316),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(293),
  [857] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(248),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(322),
  [863] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(202),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(196),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2),
  [871] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(250),
  [874] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(250),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(379),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(394),
  [883] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(378),
  [886] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(35),
  [889] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(314),
  [892] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(308),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(193),
  [900] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(192),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 1),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 1),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start, 2),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2), SHIFT_REPEAT(350),
  [934] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2, .production_id = 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, .production_id = 2),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 4),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 4),
  [948] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_base, 1),
  [950] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_base, 1),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, .production_id = 5),
  [954] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, .production_id = 5),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3, .production_id = 6),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3, .production_id = 6),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emph, 3, .production_id = 5),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emph, 3, .production_id = 5),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 3, .production_id = 5),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 3, .production_id = 5),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, .production_id = 2),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 2),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [976] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equation, 2),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equation, 2),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [984] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1020] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(277),
  [1023] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(172),
  [1028] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(283),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1035] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2),
  [1037] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(285),
  [1040] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(297),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(324),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1058] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1096] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(309),
  [1149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(289),
  [1152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(309),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2),
  [1197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(302),
  [1200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(319),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 2),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_math_args_repeat1, 2),
  [1209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_args_repeat1, 2), SHIFT_REPEAT(21),
  [1212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 2),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 1),
  [1218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_args, 3),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 2),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_arg_named, 4, .production_id = 19),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 7),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_arg, 3),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__math_arg, 2),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [1258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [1260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_arg_named, 3, .production_id = 18),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
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
