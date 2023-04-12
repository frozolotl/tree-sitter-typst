#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym__markup_expr_text_token1 = 1,
  sym_linebreak = 2,
  sym_escape = 3,
  sym_shorthand = 4,
  sym_smart_quote = 5,
  aux_sym_link_token1 = 6,
  anon_sym_LT = 7,
  aux_sym_label_token1 = 8,
  anon_sym_GT = 9,
  anon_sym_AT = 10,
  aux_sym_reference_token1 = 11,
  sym_heading_start = 12,
  sym_ident = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  sym_line_comment = 16,
  anon_sym_SLASH_STAR = 17,
  aux_sym_block_comment_token1 = 18,
  aux_sym_block_comment_token2 = 19,
  anon_sym_STAR_SLASH = 20,
  aux_sym__space_same_line_token1 = 21,
  sym__token_eof = 22,
  sym__space = 23,
  sym_parbreak = 24,
  sym__newline = 25,
  sym__indent = 26,
  sym__dedent = 27,
  sym_raw = 28,
  sym__link_end = 29,
  sym_text = 30,
  sym__delim_strong = 31,
  sym__delim_emph = 32,
  sym_source_file = 33,
  sym_markup = 34,
  sym__markup_expr_base = 35,
  sym__markup_expr_line_start_sof = 36,
  sym__markup_expr_line_start = 37,
  aux_sym__markup_expr_line_start_content = 38,
  sym__markup_expr_text = 39,
  sym_link = 40,
  sym_label = 41,
  sym_reference = 42,
  sym_strong = 43,
  sym__markup_strong = 44,
  sym_emph = 45,
  sym__markup_emph = 46,
  sym_heading = 47,
  sym__markup_same_line = 48,
  sym_content_block = 49,
  sym_block_comment = 50,
  sym_space = 51,
  sym__whitespace_line = 52,
  sym__space_same_line = 53,
  aux_sym_markup_repeat1 = 54,
  aux_sym__markup_expr_line_start_sof_repeat1 = 55,
  aux_sym__markup_strong_repeat1 = 56,
  aux_sym__markup_emph_repeat1 = 57,
  aux_sym__markup_same_line_repeat1 = 58,
  aux_sym_block_comment_repeat1 = 59,
  aux_sym__whitespace_line_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__markup_expr_text_token1] = "text",
  [sym_linebreak] = "linebreak",
  [sym_escape] = "escape",
  [sym_shorthand] = "shorthand",
  [sym_smart_quote] = "smart_quote",
  [aux_sym_link_token1] = "link_token1",
  [anon_sym_LT] = "<",
  [aux_sym_label_token1] = "label_token1",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
  [aux_sym_reference_token1] = "reference_token1",
  [sym_heading_start] = "heading_start",
  [sym_ident] = "ident",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym__whitespace_line_repeat1] = "_whitespace_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__markup_expr_text_token1] = sym_text,
  [sym_linebreak] = sym_linebreak,
  [sym_escape] = sym_escape,
  [sym_shorthand] = sym_shorthand,
  [sym_smart_quote] = sym_smart_quote,
  [aux_sym_link_token1] = aux_sym_link_token1,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_label_token1] = aux_sym_label_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_reference_token1] = aux_sym_reference_token1,
  [sym_heading_start] = sym_heading_start,
  [sym_ident] = sym_ident,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_shorthand] = {
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
  [sym_ident] = {
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
  field_inner = 1,
  field_text = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_inner] = "inner",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_text, 1},
  [1] =
    {field_inner, 1},
  [2] =
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 7,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 14,
  [20] = 20,
  [21] = 21,
  [22] = 14,
  [23] = 23,
  [24] = 16,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 31,
  [34] = 34,
  [35] = 30,
  [36] = 34,
  [37] = 32,
  [38] = 38,
  [39] = 38,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 46,
  [49] = 43,
  [50] = 41,
  [51] = 45,
  [52] = 44,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 44,
  [58] = 45,
  [59] = 55,
  [60] = 60,
  [61] = 56,
  [62] = 62,
  [63] = 46,
  [64] = 64,
  [65] = 44,
  [66] = 66,
  [67] = 45,
  [68] = 53,
  [69] = 69,
  [70] = 62,
  [71] = 46,
  [72] = 60,
  [73] = 60,
  [74] = 55,
  [75] = 45,
  [76] = 44,
  [77] = 64,
  [78] = 69,
  [79] = 56,
  [80] = 62,
  [81] = 69,
  [82] = 64,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 89,
  [92] = 90,
  [93] = 90,
  [94] = 89,
  [95] = 90,
  [96] = 89,
  [97] = 89,
  [98] = 89,
  [99] = 90,
  [100] = 90,
  [101] = 89,
  [102] = 90,
  [103] = 89,
  [104] = 90,
  [105] = 105,
  [106] = 106,
  [107] = 45,
  [108] = 108,
  [109] = 44,
  [110] = 45,
  [111] = 44,
  [112] = 46,
  [113] = 113,
  [114] = 44,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 45,
  [121] = 113,
  [122] = 119,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 125,
  [129] = 129,
  [130] = 127,
  [131] = 125,
  [132] = 129,
  [133] = 133,
  [134] = 134,
  [135] = 126,
  [136] = 129,
  [137] = 123,
  [138] = 134,
  [139] = 127,
  [140] = 126,
  [141] = 123,
  [142] = 142,
  [143] = 142,
  [144] = 134,
  [145] = 142,
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

static inline bool sym_ident_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
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
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':') ADVANCE(49);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(49);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(44);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(49);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '_') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == '~') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == '_') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == '_') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == '~') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(18);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 19:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(30);
      if (lookahead == '\r') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != 160 &&
          lookahead != 5760 &&
          (lookahead < 8192 || 8202 < lookahead) &&
          lookahead != 8239 &&
          lookahead != 8287 &&
          lookahead != 12288) ADVANCE(32);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 21:
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(40);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(36);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(26);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '@') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '?') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_linebreak);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_linebreak);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_escape);
      if (lookahead == '{') ADVANCE(20);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_shorthand);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_shorthand);
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_smart_quote);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_reference_token1);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(18);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_heading_start);
      if (lookahead == '=') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_ident);
      if (aux_sym_reference_token1_character_set_1(lookahead)) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_block_comment_token2);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__space_same_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 23, .external_lex_state = 2},
  [2] = {.lex_state = 16, .external_lex_state = 2},
  [3] = {.lex_state = 16, .external_lex_state = 2},
  [4] = {.lex_state = 16, .external_lex_state = 2},
  [5] = {.lex_state = 16, .external_lex_state = 2},
  [6] = {.lex_state = 23, .external_lex_state = 2},
  [7] = {.lex_state = 17, .external_lex_state = 2},
  [8] = {.lex_state = 24, .external_lex_state = 2},
  [9] = {.lex_state = 17, .external_lex_state = 2},
  [10] = {.lex_state = 24, .external_lex_state = 2},
  [11] = {.lex_state = 17, .external_lex_state = 2},
  [12] = {.lex_state = 24, .external_lex_state = 2},
  [13] = {.lex_state = 24, .external_lex_state = 2},
  [14] = {.lex_state = 24, .external_lex_state = 3},
  [15] = {.lex_state = 24, .external_lex_state = 4},
  [16] = {.lex_state = 24, .external_lex_state = 5},
  [17] = {.lex_state = 24, .external_lex_state = 5},
  [18] = {.lex_state = 24, .external_lex_state = 4},
  [19] = {.lex_state = 24, .external_lex_state = 3},
  [20] = {.lex_state = 24, .external_lex_state = 2},
  [21] = {.lex_state = 24, .external_lex_state = 2},
  [22] = {.lex_state = 24, .external_lex_state = 3},
  [23] = {.lex_state = 24, .external_lex_state = 2},
  [24] = {.lex_state = 24, .external_lex_state = 5},
  [25] = {.lex_state = 24, .external_lex_state = 6},
  [26] = {.lex_state = 16, .external_lex_state = 2},
  [27] = {.lex_state = 23, .external_lex_state = 2},
  [28] = {.lex_state = 16, .external_lex_state = 2},
  [29] = {.lex_state = 23, .external_lex_state = 2},
  [30] = {.lex_state = 16, .external_lex_state = 2},
  [31] = {.lex_state = 16, .external_lex_state = 2},
  [32] = {.lex_state = 23, .external_lex_state = 2},
  [33] = {.lex_state = 23, .external_lex_state = 2},
  [34] = {.lex_state = 16, .external_lex_state = 2},
  [35] = {.lex_state = 23, .external_lex_state = 2},
  [36] = {.lex_state = 23, .external_lex_state = 2},
  [37] = {.lex_state = 16, .external_lex_state = 2},
  [38] = {.lex_state = 22, .external_lex_state = 4},
  [39] = {.lex_state = 22, .external_lex_state = 2},
  [40] = {.lex_state = 15, .external_lex_state = 2},
  [41] = {.lex_state = 23, .external_lex_state = 2},
  [42] = {.lex_state = 23, .external_lex_state = 2},
  [43] = {.lex_state = 23, .external_lex_state = 2},
  [44] = {.lex_state = 16, .external_lex_state = 2},
  [45] = {.lex_state = 16, .external_lex_state = 2},
  [46] = {.lex_state = 16, .external_lex_state = 2},
  [47] = {.lex_state = 16, .external_lex_state = 2},
  [48] = {.lex_state = 23, .external_lex_state = 2},
  [49] = {.lex_state = 16, .external_lex_state = 2},
  [50] = {.lex_state = 16, .external_lex_state = 2},
  [51] = {.lex_state = 23, .external_lex_state = 2},
  [52] = {.lex_state = 23, .external_lex_state = 2},
  [53] = {.lex_state = 17, .external_lex_state = 2},
  [54] = {.lex_state = 24, .external_lex_state = 2},
  [55] = {.lex_state = 24, .external_lex_state = 2},
  [56] = {.lex_state = 17, .external_lex_state = 2},
  [57] = {.lex_state = 17, .external_lex_state = 2},
  [58] = {.lex_state = 17, .external_lex_state = 2},
  [59] = {.lex_state = 17, .external_lex_state = 2},
  [60] = {.lex_state = 24, .external_lex_state = 4},
  [61] = {.lex_state = 24, .external_lex_state = 2},
  [62] = {.lex_state = 24, .external_lex_state = 2},
  [63] = {.lex_state = 17, .external_lex_state = 2},
  [64] = {.lex_state = 24, .external_lex_state = 2},
  [65] = {.lex_state = 24, .external_lex_state = 4},
  [66] = {.lex_state = 24, .external_lex_state = 4},
  [67] = {.lex_state = 24, .external_lex_state = 4},
  [68] = {.lex_state = 24, .external_lex_state = 4},
  [69] = {.lex_state = 24, .external_lex_state = 2},
  [70] = {.lex_state = 17, .external_lex_state = 2},
  [71] = {.lex_state = 24, .external_lex_state = 2},
  [72] = {.lex_state = 24, .external_lex_state = 2},
  [73] = {.lex_state = 17, .external_lex_state = 2},
  [74] = {.lex_state = 24, .external_lex_state = 4},
  [75] = {.lex_state = 24, .external_lex_state = 2},
  [76] = {.lex_state = 24, .external_lex_state = 2},
  [77] = {.lex_state = 17, .external_lex_state = 2},
  [78] = {.lex_state = 17, .external_lex_state = 2},
  [79] = {.lex_state = 24, .external_lex_state = 4},
  [80] = {.lex_state = 24, .external_lex_state = 4},
  [81] = {.lex_state = 24, .external_lex_state = 4},
  [82] = {.lex_state = 24, .external_lex_state = 4},
  [83] = {.lex_state = 24, .external_lex_state = 2},
  [84] = {.lex_state = 24, .external_lex_state = 2},
  [85] = {.lex_state = 23, .external_lex_state = 7},
  [86] = {.lex_state = 23, .external_lex_state = 7},
  [87] = {.lex_state = 23, .external_lex_state = 7},
  [88] = {.lex_state = 1, .external_lex_state = 8},
  [89] = {.lex_state = 1, .external_lex_state = 8},
  [90] = {.lex_state = 1, .external_lex_state = 8},
  [91] = {.lex_state = 1, .external_lex_state = 8},
  [92] = {.lex_state = 1, .external_lex_state = 8},
  [93] = {.lex_state = 1, .external_lex_state = 8},
  [94] = {.lex_state = 1, .external_lex_state = 8},
  [95] = {.lex_state = 1, .external_lex_state = 8},
  [96] = {.lex_state = 1, .external_lex_state = 8},
  [97] = {.lex_state = 1, .external_lex_state = 8},
  [98] = {.lex_state = 1, .external_lex_state = 8},
  [99] = {.lex_state = 1, .external_lex_state = 8},
  [100] = {.lex_state = 1, .external_lex_state = 8},
  [101] = {.lex_state = 1, .external_lex_state = 8},
  [102] = {.lex_state = 1, .external_lex_state = 8},
  [103] = {.lex_state = 1, .external_lex_state = 8},
  [104] = {.lex_state = 1, .external_lex_state = 8},
  [105] = {.lex_state = 23},
  [106] = {.lex_state = 23},
  [107] = {.lex_state = 1, .external_lex_state = 8},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 23, .external_lex_state = 7},
  [110] = {.lex_state = 23, .external_lex_state = 7},
  [111] = {.lex_state = 1, .external_lex_state = 8},
  [112] = {.lex_state = 23, .external_lex_state = 7},
  [113] = {.lex_state = 0, .external_lex_state = 9},
  [114] = {.lex_state = 23},
  [115] = {.lex_state = 23, .external_lex_state = 8},
  [116] = {.lex_state = 0, .external_lex_state = 9},
  [117] = {.lex_state = 0, .external_lex_state = 9},
  [118] = {.lex_state = 0, .external_lex_state = 9},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 0, .external_lex_state = 9},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0, .external_lex_state = 10},
  [126] = {.lex_state = 0, .external_lex_state = 11},
  [127] = {.lex_state = 23},
  [128] = {.lex_state = 0, .external_lex_state = 10},
  [129] = {.lex_state = 16},
  [130] = {.lex_state = 23},
  [131] = {.lex_state = 0, .external_lex_state = 10},
  [132] = {.lex_state = 16},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0, .external_lex_state = 12},
  [135] = {.lex_state = 0, .external_lex_state = 11},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 18},
  [138] = {.lex_state = 0, .external_lex_state = 12},
  [139] = {.lex_state = 23},
  [140] = {.lex_state = 0, .external_lex_state = 11},
  [141] = {.lex_state = 18},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 21},
  [144] = {.lex_state = 0, .external_lex_state = 12},
  [145] = {.lex_state = 21},
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
    [sym_ident] = ACTIONS(1),
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
    [sym_source_file] = STATE(133),
    [sym_markup] = STATE(124),
    [sym__markup_expr_base] = STATE(12),
    [sym__markup_expr_line_start_sof] = STATE(12),
    [aux_sym__markup_expr_line_start_content] = STATE(35),
    [sym__markup_expr_text] = STATE(12),
    [sym_link] = STATE(12),
    [sym_label] = STATE(12),
    [sym_reference] = STATE(12),
    [sym_strong] = STATE(12),
    [sym_emph] = STATE(12),
    [sym_heading] = STATE(113),
    [sym_block_comment] = STATE(43),
    [sym_space] = STATE(6),
    [aux_sym__markup_expr_line_start_sof_repeat1] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__markup_expr_text_token1] = ACTIONS(5),
    [sym_linebreak] = ACTIONS(7),
    [sym_escape] = ACTIONS(7),
    [sym_shorthand] = ACTIONS(7),
    [sym_smart_quote] = ACTIONS(7),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_heading_start] = ACTIONS(15),
    [sym_line_comment] = ACTIONS(17),
    [anon_sym_SLASH_STAR] = ACTIONS(19),
    [sym__space] = ACTIONS(21),
    [sym_parbreak] = ACTIONS(23),
    [sym__newline] = ACTIONS(21),
    [sym_raw] = ACTIONS(7),
    [sym_text] = ACTIONS(7),
    [sym__delim_strong] = ACTIONS(25),
    [sym__delim_emph] = ACTIONS(27),
  },
  [2] = {
    [sym_markup] = STATE(136),
    [sym__markup_expr_base] = STATE(11),
    [sym__markup_expr_line_start_sof] = STATE(11),
    [aux_sym__markup_expr_line_start_content] = STATE(30),
    [sym__markup_expr_text] = STATE(11),
    [sym_link] = STATE(11),
    [sym_label] = STATE(11),
    [sym_reference] = STATE(11),
    [sym_strong] = STATE(11),
    [sym_emph] = STATE(11),
    [sym_heading] = STATE(121),
    [sym_block_comment] = STATE(49),
    [sym_space] = STATE(5),
    [aux_sym__markup_expr_line_start_sof_repeat1] = STATE(86),
    [aux_sym__markup_expr_text_token1] = ACTIONS(29),
    [sym_linebreak] = ACTIONS(31),
    [sym_escape] = ACTIONS(31),
    [sym_shorthand] = ACTIONS(31),
    [sym_smart_quote] = ACTIONS(31),
    [aux_sym_link_token1] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [sym_heading_start] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(41),
    [anon_sym_SLASH_STAR] = ACTIONS(43),
    [sym__space] = ACTIONS(45),
    [sym_parbreak] = ACTIONS(47),
    [sym__newline] = ACTIONS(45),
    [sym_raw] = ACTIONS(31),
    [sym_text] = ACTIONS(31),
    [sym__delim_strong] = ACTIONS(49),
    [sym__delim_emph] = ACTIONS(51),
  },
  [3] = {
    [sym_markup] = STATE(132),
    [sym__markup_expr_base] = STATE(11),
    [sym__markup_expr_line_start_sof] = STATE(11),
    [aux_sym__markup_expr_line_start_content] = STATE(30),
    [sym__markup_expr_text] = STATE(11),
    [sym_link] = STATE(11),
    [sym_label] = STATE(11),
    [sym_reference] = STATE(11),
    [sym_strong] = STATE(11),
    [sym_emph] = STATE(11),
    [sym_heading] = STATE(121),
    [sym_block_comment] = STATE(49),
    [sym_space] = STATE(5),
    [aux_sym__markup_expr_line_start_sof_repeat1] = STATE(86),
    [aux_sym__markup_expr_text_token1] = ACTIONS(29),
    [sym_linebreak] = ACTIONS(31),
    [sym_escape] = ACTIONS(31),
    [sym_shorthand] = ACTIONS(31),
    [sym_smart_quote] = ACTIONS(31),
    [aux_sym_link_token1] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [sym_heading_start] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym_line_comment] = ACTIONS(41),
    [anon_sym_SLASH_STAR] = ACTIONS(43),
    [sym__space] = ACTIONS(45),
    [sym_parbreak] = ACTIONS(47),
    [sym__newline] = ACTIONS(45),
    [sym_raw] = ACTIONS(31),
    [sym_text] = ACTIONS(31),
    [sym__delim_strong] = ACTIONS(49),
    [sym__delim_emph] = ACTIONS(51),
  },
  [4] = {
    [sym_markup] = STATE(129),
    [sym__markup_expr_base] = STATE(11),
    [sym__markup_expr_line_start_sof] = STATE(11),
    [aux_sym__markup_expr_line_start_content] = STATE(30),
    [sym__markup_expr_text] = STATE(11),
    [sym_link] = STATE(11),
    [sym_label] = STATE(11),
    [sym_reference] = STATE(11),
    [sym_strong] = STATE(11),
    [sym_emph] = STATE(11),
    [sym_heading] = STATE(121),
    [sym_block_comment] = STATE(49),
    [sym_space] = STATE(5),
    [aux_sym__markup_expr_line_start_sof_repeat1] = STATE(86),
    [aux_sym__markup_expr_text_token1] = ACTIONS(29),
    [sym_linebreak] = ACTIONS(31),
    [sym_escape] = ACTIONS(31),
    [sym_shorthand] = ACTIONS(31),
    [sym_smart_quote] = ACTIONS(31),
    [aux_sym_link_token1] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [sym_heading_start] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(55),
    [sym_line_comment] = ACTIONS(41),
    [anon_sym_SLASH_STAR] = ACTIONS(43),
    [sym__space] = ACTIONS(45),
    [sym_parbreak] = ACTIONS(47),
    [sym__newline] = ACTIONS(45),
    [sym_raw] = ACTIONS(31),
    [sym_text] = ACTIONS(31),
    [sym__delim_strong] = ACTIONS(49),
    [sym__delim_emph] = ACTIONS(51),
  },
  [5] = {
    [sym__markup_expr_base] = STATE(9),
    [sym__markup_expr_line_start] = STATE(9),
    [sym__markup_expr_text] = STATE(9),
    [sym_link] = STATE(9),
    [sym_label] = STATE(9),
    [sym_reference] = STATE(9),
    [sym_strong] = STATE(9),
    [sym_emph] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym_space] = STATE(9),
    [sym__whitespace_line] = STATE(122),
    [aux_sym_markup_repeat1] = STATE(9),
    [aux_sym__markup_expr_text_token1] = ACTIONS(57),
    [sym_linebreak] = ACTIONS(59),
    [sym_escape] = ACTIONS(59),
    [sym_shorthand] = ACTIONS(59),
    [sym_smart_quote] = ACTIONS(59),
    [aux_sym_link_token1] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(35),
    [anon_sym_AT] = ACTIONS(37),
    [sym_heading_start] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(63),
    [sym_line_comment] = ACTIONS(61),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__space] = ACTIONS(61),
    [sym_parbreak] = ACTIONS(61),
    [sym__newline] = ACTIONS(61),
    [sym_raw] = ACTIONS(59),
    [sym_text] = ACTIONS(59),
    [sym__delim_strong] = ACTIONS(49),
    [sym__delim_emph] = ACTIONS(51),
  },
  [6] = {
    [sym__markup_expr_base] = STATE(8),
    [sym__markup_expr_line_start] = STATE(8),
    [sym__markup_expr_text] = STATE(8),
    [sym_link] = STATE(8),
    [sym_label] = STATE(8),
    [sym_reference] = STATE(8),
    [sym_strong] = STATE(8),
    [sym_emph] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym_space] = STATE(8),
    [sym__whitespace_line] = STATE(119),
    [aux_sym_markup_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(63),
    [aux_sym__markup_expr_text_token1] = ACTIONS(65),
    [sym_linebreak] = ACTIONS(67),
    [sym_escape] = ACTIONS(67),
    [sym_shorthand] = ACTIONS(67),
    [sym_smart_quote] = ACTIONS(67),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_heading_start] = ACTIONS(61),
    [sym_line_comment] = ACTIONS(61),
    [anon_sym_SLASH_STAR] = ACTIONS(61),
    [sym__space] = ACTIONS(61),
    [sym_parbreak] = ACTIONS(61),
    [sym__newline] = ACTIONS(61),
    [sym_raw] = ACTIONS(67),
    [sym_text] = ACTIONS(67),
    [sym__delim_strong] = ACTIONS(25),
    [sym__delim_emph] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(69), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(75), 1,
      aux_sym_link_token1,
    ACTIONS(78), 1,
      anon_sym_LT,
    ACTIONS(81), 1,
      anon_sym_AT,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(86), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      sym__space,
    ACTIONS(92), 1,
      sym_parbreak,
    ACTIONS(95), 1,
      sym__newline,
    ACTIONS(98), 1,
      sym__delim_strong,
    ACTIONS(101), 1,
      sym__delim_emph,
    STATE(122), 1,
      sym__whitespace_line,
    ACTIONS(72), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(7), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [59] = 14,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      sym__delim_strong,
    ACTIONS(27), 1,
      sym__delim_emph,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(114), 1,
      sym_parbreak,
    ACTIONS(116), 1,
      sym__newline,
    STATE(119), 1,
      sym__whitespace_line,
    ACTIONS(108), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(10), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [118] = 14,
    ACTIONS(33), 1,
      aux_sym_link_token1,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      sym__delim_strong,
    ACTIONS(51), 1,
      sym__delim_emph,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    ACTIONS(118), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(122), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      sym__space,
    ACTIONS(126), 1,
      sym_parbreak,
    ACTIONS(128), 1,
      sym__newline,
    STATE(122), 1,
      sym__whitespace_line,
    ACTIONS(120), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(7), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [177] = 14,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(136), 1,
      aux_sym_link_token1,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(142), 1,
      anon_sym_AT,
    ACTIONS(145), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      sym__space,
    ACTIONS(151), 1,
      sym_parbreak,
    ACTIONS(154), 1,
      sym__newline,
    ACTIONS(157), 1,
      sym__delim_strong,
    ACTIONS(160), 1,
      sym__delim_emph,
    STATE(119), 1,
      sym__whitespace_line,
    ACTIONS(133), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(10), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [236] = 14,
    ACTIONS(33), 1,
      aux_sym_link_token1,
    ACTIONS(35), 1,
      anon_sym_LT,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      sym__delim_strong,
    ACTIONS(51), 1,
      sym__delim_emph,
    ACTIONS(57), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    ACTIONS(122), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      sym__space,
    ACTIONS(126), 1,
      sym_parbreak,
    ACTIONS(128), 1,
      sym__newline,
    STATE(122), 1,
      sym__whitespace_line,
    ACTIONS(59), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(9), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [295] = 14,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      sym__delim_strong,
    ACTIONS(27), 1,
      sym__delim_emph,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(114), 1,
      sym_parbreak,
    ACTIONS(116), 1,
      sym__newline,
    STATE(119), 1,
      sym__whitespace_line,
    ACTIONS(67), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(8), 11,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_block_comment,
      sym_space,
      aux_sym_markup_repeat1,
  [354] = 14,
    ACTIONS(163), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(169), 1,
      aux_sym_link_token1,
    ACTIONS(172), 1,
      anon_sym_LT,
    ACTIONS(175), 1,
      anon_sym_AT,
    ACTIONS(178), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      sym__space,
    ACTIONS(184), 1,
      sym_parbreak,
    ACTIONS(187), 1,
      sym__newline,
    ACTIONS(190), 1,
      sym__delim_strong,
    ACTIONS(192), 1,
      sym__delim_emph,
    STATE(13), 1,
      aux_sym__markup_strong_repeat1,
    STATE(119), 1,
      sym__whitespace_line,
    ACTIONS(166), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(83), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_block_comment,
      sym_space,
  [411] = 14,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym__delim_emph,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(116), 1,
      sym__newline,
    ACTIONS(195), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(199), 1,
      sym_parbreak,
    STATE(23), 1,
      aux_sym__markup_strong_repeat1,
    STATE(119), 1,
      sym__whitespace_line,
    STATE(131), 1,
      sym__markup_strong,
    ACTIONS(197), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(83), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_block_comment,
      sym_space,
  [468] = 11,
    ACTIONS(201), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(205), 1,
      aux_sym_link_token1,
    ACTIONS(207), 1,
      anon_sym_LT,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      sym__delim_strong,
    ACTIONS(217), 1,
      sym__delim_emph,
    STATE(18), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(213), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(203), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(66), 9,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_block_comment,
      sym__space_same_line,
  [519] = 14,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      sym__delim_strong,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(116), 1,
      sym__newline,
    ACTIONS(199), 1,
      sym_parbreak,
    ACTIONS(219), 1,
      aux_sym__markup_expr_text_token1,
    STATE(20), 1,
      aux_sym__markup_emph_repeat1,
    STATE(119), 1,
      sym__whitespace_line,
    STATE(140), 1,
      sym__markup_emph,
    ACTIONS(221), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(84), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_block_comment,
      sym_space,
  [576] = 14,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      sym__delim_strong,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(116), 1,
      sym__newline,
    ACTIONS(199), 1,
      sym_parbreak,
    ACTIONS(219), 1,
      aux_sym__markup_expr_text_token1,
    STATE(20), 1,
      aux_sym__markup_emph_repeat1,
    STATE(119), 1,
      sym__whitespace_line,
    STATE(126), 1,
      sym__markup_emph,
    ACTIONS(221), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(84), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_block_comment,
      sym_space,
  [633] = 11,
    ACTIONS(223), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(229), 1,
      aux_sym_link_token1,
    ACTIONS(232), 1,
      anon_sym_LT,
    ACTIONS(235), 1,
      anon_sym_AT,
    ACTIONS(238), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      sym__delim_strong,
    ACTIONS(246), 1,
      sym__delim_emph,
    STATE(18), 1,
      aux_sym__markup_same_line_repeat1,
    ACTIONS(241), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
    ACTIONS(226), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(66), 9,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_block_comment,
      sym__space_same_line,
  [684] = 14,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym__delim_emph,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(116), 1,
      sym__newline,
    ACTIONS(195), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(199), 1,
      sym_parbreak,
    STATE(23), 1,
      aux_sym__markup_strong_repeat1,
    STATE(119), 1,
      sym__whitespace_line,
    STATE(128), 1,
      sym__markup_strong,
    ACTIONS(197), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(83), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_block_comment,
      sym_space,
  [741] = 14,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      sym__delim_strong,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(116), 1,
      sym__newline,
    ACTIONS(199), 1,
      sym_parbreak,
    ACTIONS(219), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(249), 1,
      sym__delim_emph,
    STATE(21), 1,
      aux_sym__markup_emph_repeat1,
    STATE(119), 1,
      sym__whitespace_line,
    ACTIONS(221), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(84), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_block_comment,
      sym_space,
  [798] = 14,
    ACTIONS(251), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(257), 1,
      aux_sym_link_token1,
    ACTIONS(260), 1,
      anon_sym_LT,
    ACTIONS(263), 1,
      anon_sym_AT,
    ACTIONS(266), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      sym__space,
    ACTIONS(272), 1,
      sym_parbreak,
    ACTIONS(275), 1,
      sym__newline,
    ACTIONS(278), 1,
      sym__delim_strong,
    ACTIONS(281), 1,
      sym__delim_emph,
    STATE(21), 1,
      aux_sym__markup_emph_repeat1,
    STATE(119), 1,
      sym__whitespace_line,
    ACTIONS(254), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(84), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_block_comment,
      sym_space,
  [855] = 14,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym__delim_emph,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(116), 1,
      sym__newline,
    ACTIONS(195), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(199), 1,
      sym_parbreak,
    STATE(23), 1,
      aux_sym__markup_strong_repeat1,
    STATE(119), 1,
      sym__whitespace_line,
    STATE(125), 1,
      sym__markup_strong,
    ACTIONS(197), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(83), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_block_comment,
      sym_space,
  [912] = 14,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym__delim_emph,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(116), 1,
      sym__newline,
    ACTIONS(195), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(199), 1,
      sym_parbreak,
    ACTIONS(283), 1,
      sym__delim_strong,
    STATE(13), 1,
      aux_sym__markup_strong_repeat1,
    STATE(119), 1,
      sym__whitespace_line,
    ACTIONS(197), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(83), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_emph,
      sym_block_comment,
      sym_space,
  [969] = 14,
    ACTIONS(9), 1,
      aux_sym_link_token1,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      sym__delim_strong,
    ACTIONS(110), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym__space,
    ACTIONS(116), 1,
      sym__newline,
    ACTIONS(199), 1,
      sym_parbreak,
    ACTIONS(219), 1,
      aux_sym__markup_expr_text_token1,
    STATE(20), 1,
      aux_sym__markup_emph_repeat1,
    STATE(119), 1,
      sym__whitespace_line,
    STATE(135), 1,
      sym__markup_emph,
    ACTIONS(221), 7,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
    STATE(84), 9,
      sym__markup_expr_base,
      sym__markup_expr_line_start,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_block_comment,
      sym_space,
  [1026] = 12,
    ACTIONS(201), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(205), 1,
      aux_sym_link_token1,
    ACTIONS(207), 1,
      anon_sym_LT,
    ACTIONS(209), 1,
      anon_sym_AT,
    ACTIONS(211), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      sym__delim_strong,
    ACTIONS(217), 1,
      sym__delim_emph,
    ACTIONS(285), 1,
      sym__token_eof,
    STATE(15), 1,
      aux_sym__markup_same_line_repeat1,
    STATE(118), 1,
      sym__markup_same_line,
    ACTIONS(203), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_same_line_token1,
    STATE(66), 9,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_reference,
      sym_strong,
      sym_emph,
      sym_block_comment,
      sym__space_same_line,
  [1078] = 6,
    ACTIONS(287), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(291), 1,
      sym_heading_start,
    ACTIONS(293), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym__space_same_line_token1,
    STATE(105), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(289), 16,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
  [1114] = 6,
    ACTIONS(291), 1,
      sym_heading_start,
    ACTIONS(293), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(299), 1,
      aux_sym__markup_expr_text_token1,
    STATE(105), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(297), 16,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
  [1150] = 6,
    ACTIONS(291), 1,
      sym_heading_start,
    ACTIONS(293), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(299), 1,
      aux_sym__markup_expr_text_token1,
    STATE(105), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(297), 16,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
  [1186] = 6,
    ACTIONS(287), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(291), 1,
      sym_heading_start,
    ACTIONS(293), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym__space_same_line_token1,
    STATE(105), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
    ACTIONS(289), 16,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
  [1222] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(301), 1,
      aux_sym__markup_expr_text_token1,
    STATE(31), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(121), 1,
      sym_heading,
    ACTIONS(303), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1254] = 5,
    ACTIONS(305), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(309), 1,
      sym_heading_start,
    STATE(31), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(121), 1,
      sym_heading,
    ACTIONS(307), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1286] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(314), 1,
      aux_sym__markup_expr_text_token1,
    STATE(33), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(113), 1,
      sym_heading,
    ACTIONS(312), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1318] = 5,
    ACTIONS(305), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(309), 1,
      sym_heading_start,
    STATE(33), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(113), 1,
      sym_heading,
    ACTIONS(307), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1350] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(316), 1,
      aux_sym__markup_expr_text_token1,
    STATE(31), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(121), 1,
      sym_heading,
    ACTIONS(318), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1382] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(301), 1,
      aux_sym__markup_expr_text_token1,
    STATE(33), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(113), 1,
      sym_heading,
    ACTIONS(303), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1414] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(316), 1,
      aux_sym__markup_expr_text_token1,
    STATE(33), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(113), 1,
      sym_heading,
    ACTIONS(318), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1446] = 5,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(314), 1,
      aux_sym__markup_expr_text_token1,
    STATE(31), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(121), 1,
      sym_heading,
    ACTIONS(312), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1478] = 4,
    ACTIONS(320), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(324), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym_content_block,
    ACTIONS(322), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [1507] = 4,
    ACTIONS(320), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_content_block,
    ACTIONS(322), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1536] = 4,
    ACTIONS(320), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_content_block,
    ACTIONS(322), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1565] = 2,
    ACTIONS(305), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(307), 18,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1589] = 2,
    ACTIONS(332), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(330), 18,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1613] = 3,
    ACTIONS(336), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(61), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 12,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
  [1639] = 2,
    ACTIONS(338), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(340), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1663] = 2,
    ACTIONS(342), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(344), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1687] = 2,
    ACTIONS(299), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(297), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1711] = 2,
    ACTIONS(332), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(330), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1735] = 2,
    ACTIONS(299), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(297), 18,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1759] = 3,
    ACTIONS(336), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(61), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
    ACTIONS(334), 12,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
  [1785] = 2,
    ACTIONS(305), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(307), 18,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1809] = 2,
    ACTIONS(342), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(344), 18,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1833] = 2,
    ACTIONS(338), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(340), 18,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1857] = 2,
    ACTIONS(346), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(348), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1880] = 2,
    ACTIONS(346), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(348), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1903] = 2,
    ACTIONS(352), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(350), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1926] = 2,
    ACTIONS(354), 1,
      aux_sym__markup_expr_text_token1,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1949] = 2,
    ACTIONS(338), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(340), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1972] = 2,
    ACTIONS(342), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(344), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [1995] = 2,
    ACTIONS(352), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(350), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2018] = 2,
    ACTIONS(358), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(360), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [2041] = 2,
    ACTIONS(354), 1,
      aux_sym__markup_expr_text_token1,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2064] = 2,
    ACTIONS(364), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(362), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2087] = 2,
    ACTIONS(299), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(297), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2110] = 2,
    ACTIONS(368), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(366), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2133] = 2,
    ACTIONS(338), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(340), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [2156] = 2,
    ACTIONS(370), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(372), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [2179] = 2,
    ACTIONS(342), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(344), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [2202] = 2,
    ACTIONS(346), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(348), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [2225] = 2,
    ACTIONS(376), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(374), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2248] = 2,
    ACTIONS(364), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(362), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2271] = 2,
    ACTIONS(299), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(297), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2294] = 2,
    ACTIONS(358), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(360), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2317] = 2,
    ACTIONS(358), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(360), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2340] = 2,
    ACTIONS(352), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(350), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [2363] = 2,
    ACTIONS(342), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(344), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2386] = 2,
    ACTIONS(338), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(340), 17,
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
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2409] = 2,
    ACTIONS(368), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(366), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2432] = 2,
    ACTIONS(376), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(374), 17,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      anon_sym_RBRACK,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2455] = 2,
    ACTIONS(354), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(356), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [2478] = 2,
    ACTIONS(364), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(362), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [2501] = 2,
    ACTIONS(376), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(374), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [2524] = 2,
    ACTIONS(368), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(366), 17,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [2547] = 2,
    ACTIONS(378), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(380), 16,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2569] = 2,
    ACTIONS(382), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(384), 16,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      anon_sym_AT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [2591] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(388), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(113), 1,
      sym_heading,
    ACTIONS(386), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(390), 2,
      sym__space,
      sym__newline,
    STATE(87), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [2617] = 7,
    ACTIONS(15), 1,
      sym_heading_start,
    ACTIONS(388), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(121), 1,
      sym_heading,
    ACTIONS(386), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(390), 2,
      sym__space,
      sym__newline,
    STATE(87), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [2643] = 5,
    ACTIONS(392), 1,
      sym_heading_start,
    ACTIONS(397), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(394), 2,
      sym_parbreak,
      sym_line_comment,
    ACTIONS(400), 2,
      sym__space,
      sym__newline,
    STATE(87), 3,
      sym_block_comment,
      sym_space,
      aux_sym__markup_expr_line_start_sof_repeat1,
  [2663] = 5,
    ACTIONS(403), 1,
      sym_line_comment,
    ACTIONS(406), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(409), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(412), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(88), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2682] = 5,
    ACTIONS(414), 1,
      sym_line_comment,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(420), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(99), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2701] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      sym_line_comment,
    ACTIONS(424), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(426), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(88), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2720] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(428), 1,
      sym_line_comment,
    ACTIONS(430), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(432), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(93), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2739] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      sym_line_comment,
    ACTIONS(424), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(434), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(88), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2758] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      sym_line_comment,
    ACTIONS(424), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(436), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(88), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2777] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(438), 1,
      sym_line_comment,
    ACTIONS(440), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(442), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(90), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2796] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      sym_line_comment,
    ACTIONS(424), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(444), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(88), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2815] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(446), 1,
      sym_line_comment,
    ACTIONS(448), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(450), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(100), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2834] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(452), 1,
      sym_line_comment,
    ACTIONS(454), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(456), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(95), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2853] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(458), 1,
      sym_line_comment,
    ACTIONS(460), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(462), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(102), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2872] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      sym_line_comment,
    ACTIONS(424), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(464), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(88), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2891] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      sym_line_comment,
    ACTIONS(424), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(466), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(88), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2910] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(468), 1,
      sym_line_comment,
    ACTIONS(470), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(472), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(92), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2929] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      sym_line_comment,
    ACTIONS(424), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(474), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(88), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2948] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(476), 1,
      sym_line_comment,
    ACTIONS(478), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(480), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(104), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2967] = 5,
    ACTIONS(416), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      sym_line_comment,
    ACTIONS(424), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(482), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(88), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [2986] = 4,
    ACTIONS(293), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      sym_heading_start,
    ACTIONS(486), 1,
      aux_sym__space_same_line_token1,
    STATE(106), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [3001] = 4,
    ACTIONS(488), 1,
      sym_heading_start,
    ACTIONS(490), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(493), 1,
      aux_sym__space_same_line_token1,
    STATE(106), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [3016] = 2,
    ACTIONS(342), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(344), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [3027] = 4,
    ACTIONS(291), 1,
      sym_heading_start,
    ACTIONS(293), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym__space_same_line_token1,
    STATE(105), 3,
      sym_block_comment,
      sym__space_same_line,
      aux_sym__whitespace_line_repeat1,
  [3042] = 1,
    ACTIONS(340), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3051] = 1,
    ACTIONS(344), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3060] = 2,
    ACTIONS(338), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(340), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [3071] = 1,
    ACTIONS(297), 6,
      sym__space,
      sym_parbreak,
      sym__newline,
      sym_heading_start,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [3080] = 2,
    ACTIONS(498), 1,
      sym__newline,
    ACTIONS(496), 2,
      sym__token_eof,
      sym_parbreak,
  [3088] = 1,
    ACTIONS(340), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [3094] = 3,
    ACTIONS(500), 1,
      aux_sym__space_same_line_token1,
    ACTIONS(502), 1,
      sym__token_eof,
    STATE(25), 1,
      sym__space_same_line,
  [3104] = 1,
    ACTIONS(504), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [3110] = 1,
    ACTIONS(506), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [3116] = 1,
    ACTIONS(508), 3,
      sym__token_eof,
      sym_parbreak,
      sym__newline,
  [3122] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(32), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(113), 1,
      sym_heading,
  [3132] = 1,
    ACTIONS(344), 3,
      sym_heading_start,
      anon_sym_SLASH_STAR,
      aux_sym__space_same_line_token1,
  [3138] = 2,
    ACTIONS(512), 1,
      sym__newline,
    ACTIONS(510), 2,
      sym__token_eof,
      sym_parbreak,
  [3146] = 3,
    ACTIONS(15), 1,
      sym_heading_start,
    STATE(37), 1,
      aux_sym__markup_expr_line_start_content,
    STATE(121), 1,
      sym_heading,
  [3156] = 1,
    ACTIONS(514), 1,
      aux_sym_reference_token1,
  [3160] = 1,
    ACTIONS(516), 1,
      ts_builtin_sym_end,
  [3164] = 1,
    ACTIONS(518), 1,
      sym__delim_strong,
  [3168] = 1,
    ACTIONS(520), 1,
      sym__delim_emph,
  [3172] = 1,
    ACTIONS(522), 1,
      anon_sym_GT,
  [3176] = 1,
    ACTIONS(524), 1,
      sym__delim_strong,
  [3180] = 1,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
  [3184] = 1,
    ACTIONS(528), 1,
      anon_sym_GT,
  [3188] = 1,
    ACTIONS(530), 1,
      sym__delim_strong,
  [3192] = 1,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
  [3196] = 1,
    ACTIONS(534), 1,
      ts_builtin_sym_end,
  [3200] = 1,
    ACTIONS(536), 1,
      sym__link_end,
  [3204] = 1,
    ACTIONS(538), 1,
      sym__delim_emph,
  [3208] = 1,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
  [3212] = 1,
    ACTIONS(542), 1,
      aux_sym_reference_token1,
  [3216] = 1,
    ACTIONS(544), 1,
      sym__link_end,
  [3220] = 1,
    ACTIONS(546), 1,
      anon_sym_GT,
  [3224] = 1,
    ACTIONS(548), 1,
      sym__delim_emph,
  [3228] = 1,
    ACTIONS(550), 1,
      aux_sym_reference_token1,
  [3232] = 1,
    ACTIONS(552), 1,
      aux_sym_label_token1,
  [3236] = 1,
    ACTIONS(554), 1,
      aux_sym_label_token1,
  [3240] = 1,
    ACTIONS(556), 1,
      sym__link_end,
  [3244] = 1,
    ACTIONS(558), 1,
      aux_sym_label_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 59,
  [SMALL_STATE(9)] = 118,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 236,
  [SMALL_STATE(12)] = 295,
  [SMALL_STATE(13)] = 354,
  [SMALL_STATE(14)] = 411,
  [SMALL_STATE(15)] = 468,
  [SMALL_STATE(16)] = 519,
  [SMALL_STATE(17)] = 576,
  [SMALL_STATE(18)] = 633,
  [SMALL_STATE(19)] = 684,
  [SMALL_STATE(20)] = 741,
  [SMALL_STATE(21)] = 798,
  [SMALL_STATE(22)] = 855,
  [SMALL_STATE(23)] = 912,
  [SMALL_STATE(24)] = 969,
  [SMALL_STATE(25)] = 1026,
  [SMALL_STATE(26)] = 1078,
  [SMALL_STATE(27)] = 1114,
  [SMALL_STATE(28)] = 1150,
  [SMALL_STATE(29)] = 1186,
  [SMALL_STATE(30)] = 1222,
  [SMALL_STATE(31)] = 1254,
  [SMALL_STATE(32)] = 1286,
  [SMALL_STATE(33)] = 1318,
  [SMALL_STATE(34)] = 1350,
  [SMALL_STATE(35)] = 1382,
  [SMALL_STATE(36)] = 1414,
  [SMALL_STATE(37)] = 1446,
  [SMALL_STATE(38)] = 1478,
  [SMALL_STATE(39)] = 1507,
  [SMALL_STATE(40)] = 1536,
  [SMALL_STATE(41)] = 1565,
  [SMALL_STATE(42)] = 1589,
  [SMALL_STATE(43)] = 1613,
  [SMALL_STATE(44)] = 1639,
  [SMALL_STATE(45)] = 1663,
  [SMALL_STATE(46)] = 1687,
  [SMALL_STATE(47)] = 1711,
  [SMALL_STATE(48)] = 1735,
  [SMALL_STATE(49)] = 1759,
  [SMALL_STATE(50)] = 1785,
  [SMALL_STATE(51)] = 1809,
  [SMALL_STATE(52)] = 1833,
  [SMALL_STATE(53)] = 1857,
  [SMALL_STATE(54)] = 1880,
  [SMALL_STATE(55)] = 1903,
  [SMALL_STATE(56)] = 1926,
  [SMALL_STATE(57)] = 1949,
  [SMALL_STATE(58)] = 1972,
  [SMALL_STATE(59)] = 1995,
  [SMALL_STATE(60)] = 2018,
  [SMALL_STATE(61)] = 2041,
  [SMALL_STATE(62)] = 2064,
  [SMALL_STATE(63)] = 2087,
  [SMALL_STATE(64)] = 2110,
  [SMALL_STATE(65)] = 2133,
  [SMALL_STATE(66)] = 2156,
  [SMALL_STATE(67)] = 2179,
  [SMALL_STATE(68)] = 2202,
  [SMALL_STATE(69)] = 2225,
  [SMALL_STATE(70)] = 2248,
  [SMALL_STATE(71)] = 2271,
  [SMALL_STATE(72)] = 2294,
  [SMALL_STATE(73)] = 2317,
  [SMALL_STATE(74)] = 2340,
  [SMALL_STATE(75)] = 2363,
  [SMALL_STATE(76)] = 2386,
  [SMALL_STATE(77)] = 2409,
  [SMALL_STATE(78)] = 2432,
  [SMALL_STATE(79)] = 2455,
  [SMALL_STATE(80)] = 2478,
  [SMALL_STATE(81)] = 2501,
  [SMALL_STATE(82)] = 2524,
  [SMALL_STATE(83)] = 2547,
  [SMALL_STATE(84)] = 2569,
  [SMALL_STATE(85)] = 2591,
  [SMALL_STATE(86)] = 2617,
  [SMALL_STATE(87)] = 2643,
  [SMALL_STATE(88)] = 2663,
  [SMALL_STATE(89)] = 2682,
  [SMALL_STATE(90)] = 2701,
  [SMALL_STATE(91)] = 2720,
  [SMALL_STATE(92)] = 2739,
  [SMALL_STATE(93)] = 2758,
  [SMALL_STATE(94)] = 2777,
  [SMALL_STATE(95)] = 2796,
  [SMALL_STATE(96)] = 2815,
  [SMALL_STATE(97)] = 2834,
  [SMALL_STATE(98)] = 2853,
  [SMALL_STATE(99)] = 2872,
  [SMALL_STATE(100)] = 2891,
  [SMALL_STATE(101)] = 2910,
  [SMALL_STATE(102)] = 2929,
  [SMALL_STATE(103)] = 2948,
  [SMALL_STATE(104)] = 2967,
  [SMALL_STATE(105)] = 2986,
  [SMALL_STATE(106)] = 3001,
  [SMALL_STATE(107)] = 3016,
  [SMALL_STATE(108)] = 3027,
  [SMALL_STATE(109)] = 3042,
  [SMALL_STATE(110)] = 3051,
  [SMALL_STATE(111)] = 3060,
  [SMALL_STATE(112)] = 3071,
  [SMALL_STATE(113)] = 3080,
  [SMALL_STATE(114)] = 3088,
  [SMALL_STATE(115)] = 3094,
  [SMALL_STATE(116)] = 3104,
  [SMALL_STATE(117)] = 3110,
  [SMALL_STATE(118)] = 3116,
  [SMALL_STATE(119)] = 3122,
  [SMALL_STATE(120)] = 3132,
  [SMALL_STATE(121)] = 3138,
  [SMALL_STATE(122)] = 3146,
  [SMALL_STATE(123)] = 3156,
  [SMALL_STATE(124)] = 3160,
  [SMALL_STATE(125)] = 3164,
  [SMALL_STATE(126)] = 3168,
  [SMALL_STATE(127)] = 3172,
  [SMALL_STATE(128)] = 3176,
  [SMALL_STATE(129)] = 3180,
  [SMALL_STATE(130)] = 3184,
  [SMALL_STATE(131)] = 3188,
  [SMALL_STATE(132)] = 3192,
  [SMALL_STATE(133)] = 3196,
  [SMALL_STATE(134)] = 3200,
  [SMALL_STATE(135)] = 3204,
  [SMALL_STATE(136)] = 3208,
  [SMALL_STATE(137)] = 3212,
  [SMALL_STATE(138)] = 3216,
  [SMALL_STATE(139)] = 3220,
  [SMALL_STATE(140)] = 3224,
  [SMALL_STATE(141)] = 3228,
  [SMALL_STATE(142)] = 3232,
  [SMALL_STATE(143)] = 3236,
  [SMALL_STATE(144)] = 3240,
  [SMALL_STATE(145)] = 3244,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(7),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(7),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(134),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(145),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(123),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(101),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(63),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(26),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(28),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(22),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(17),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(10),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(10),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(144),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(143),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(141),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(89),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(71),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(29),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(27),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(19),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(24),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(83),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(83),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(144),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(143),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(141),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(89),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(71),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(108),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(27),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(24),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_same_line, 1, .production_id = 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(66),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(66),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(138),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(142),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(137),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(96),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(14),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 2), SHIFT_REPEAT(16),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_emph, 1, .production_id = 1),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(84),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(84),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(144),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(143),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(141),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(89),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(71),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(108),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(27),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(19),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_strong, 1, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_space, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2), SHIFT_REPEAT(115),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_line_start_sof, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 2, .production_id = 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 2, .production_id = 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_expr_line_start_content, 2, .production_id = 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_expr_base, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markup_expr_base, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, .production_id = 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, .production_id = 4),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content_block, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content_block, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emph, 3, .production_id = 4),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emph, 3, .production_id = 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 3, .production_id = 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 3, .production_id = 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_same_line_repeat1, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, .production_id = 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(87),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(97),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_expr_line_start_sof_repeat1, 2), SHIFT_REPEAT(112),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(88),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(94),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(88),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__whitespace_line, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(91),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__whitespace_line_repeat1, 2), SHIFT_REPEAT(106),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 5),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [534] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
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
