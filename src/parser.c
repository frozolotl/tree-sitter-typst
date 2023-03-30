#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

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
  aux_sym_heading_token1 = 10,
  sym_line_comment = 11,
  anon_sym_SLASH_STAR = 12,
  aux_sym_block_comment_token1 = 13,
  anon_sym_STAR_SLASH = 14,
  aux_sym__space_no_newline_token1 = 15,
  sym__token_eof = 16,
  sym_space = 17,
  sym_parbreak = 18,
  sym__indent = 19,
  sym__dedent = 20,
  sym_raw = 21,
  sym__link_end = 22,
  sym_text = 23,
  sym__delim_strong = 24,
  sym__delim_emph = 25,
  sym_heading_start = 26,
  sym_source_file = 27,
  sym_markup = 28,
  sym__markup_expr_base = 29,
  sym__markup_expr_text = 30,
  sym_link = 31,
  sym_label = 32,
  sym_strong = 33,
  sym__markup_strong = 34,
  sym_emph = 35,
  sym__markup_emph = 36,
  sym_heading = 37,
  sym__markup_no_newline = 38,
  sym_block_comment = 39,
  sym__space_no_newline = 40,
  aux_sym_markup_repeat1 = 41,
  aux_sym__markup_strong_repeat1 = 42,
  aux_sym__markup_emph_repeat1 = 43,
  aux_sym__markup_no_newline_repeat1 = 44,
  aux_sym_block_comment_repeat1 = 45,
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
  [aux_sym_heading_token1] = "heading_token1",
  [sym_line_comment] = "line_comment",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [aux_sym__space_no_newline_token1] = "space",
  [sym__token_eof] = "_token_eof",
  [sym_space] = "space",
  [sym_parbreak] = "parbreak",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_raw] = "raw",
  [sym__link_end] = "_link_end",
  [sym_text] = "text",
  [sym__delim_strong] = "_delim_strong",
  [sym__delim_emph] = "_delim_emph",
  [sym_heading_start] = "heading_start",
  [sym_source_file] = "source_file",
  [sym_markup] = "markup",
  [sym__markup_expr_base] = "_markup_expr_base",
  [sym__markup_expr_text] = "_markup_expr_text",
  [sym_link] = "link",
  [sym_label] = "label",
  [sym_strong] = "strong",
  [sym__markup_strong] = "_markup_strong",
  [sym_emph] = "emph",
  [sym__markup_emph] = "_markup_emph",
  [sym_heading] = "heading",
  [sym__markup_no_newline] = "_markup_no_newline",
  [sym_block_comment] = "block_comment",
  [sym__space_no_newline] = "_space_no_newline",
  [aux_sym_markup_repeat1] = "markup_repeat1",
  [aux_sym__markup_strong_repeat1] = "_markup_strong_repeat1",
  [aux_sym__markup_emph_repeat1] = "_markup_emph_repeat1",
  [aux_sym__markup_no_newline_repeat1] = "_markup_no_newline_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
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
  [aux_sym_heading_token1] = aux_sym_heading_token1,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [aux_sym__space_no_newline_token1] = sym_space,
  [sym__token_eof] = sym__token_eof,
  [sym_space] = sym_space,
  [sym_parbreak] = sym_parbreak,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_raw] = sym_raw,
  [sym__link_end] = sym__link_end,
  [sym_text] = sym_text,
  [sym__delim_strong] = sym__delim_strong,
  [sym__delim_emph] = sym__delim_emph,
  [sym_heading_start] = sym_heading_start,
  [sym_source_file] = sym_source_file,
  [sym_markup] = sym_markup,
  [sym__markup_expr_base] = sym__markup_expr_base,
  [sym__markup_expr_text] = sym__markup_expr_text,
  [sym_link] = sym_link,
  [sym_label] = sym_label,
  [sym_strong] = sym_strong,
  [sym__markup_strong] = sym__markup_strong,
  [sym_emph] = sym_emph,
  [sym__markup_emph] = sym__markup_emph,
  [sym_heading] = sym_heading,
  [sym__markup_no_newline] = sym__markup_no_newline,
  [sym_block_comment] = sym_block_comment,
  [sym__space_no_newline] = sym__space_no_newline,
  [aux_sym_markup_repeat1] = aux_sym_markup_repeat1,
  [aux_sym__markup_strong_repeat1] = aux_sym__markup_strong_repeat1,
  [aux_sym__markup_emph_repeat1] = aux_sym__markup_emph_repeat1,
  [aux_sym__markup_no_newline_repeat1] = aux_sym__markup_no_newline_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
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
  [aux_sym_heading_token1] = {
    .visible = false,
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
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__space_no_newline_token1] = {
    .visible = true,
    .named = true,
  },
  [sym__token_eof] = {
    .visible = false,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym_parbreak] = {
    .visible = true,
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
  [sym_heading_start] = {
    .visible = true,
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
  [sym__markup_no_newline] = {
    .visible = false,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__space_no_newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_markup_repeat1] = {
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
  [aux_sym__markup_no_newline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
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
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_inner, 1},
  [1] =
    {field_text, 1},
  [2] =
    {field_inner, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_markup,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__markup_strong_repeat1, 2,
    aux_sym__markup_strong_repeat1,
    sym_markup,
  aux_sym__markup_emph_repeat1, 2,
    aux_sym__markup_emph_repeat1,
    sym_markup,
  aux_sym__markup_no_newline_repeat1, 2,
    aux_sym__markup_no_newline_repeat1,
    sym_markup,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 19,
  [26] = 23,
  [27] = 16,
  [28] = 18,
  [29] = 20,
  [30] = 30,
  [31] = 21,
  [32] = 22,
  [33] = 17,
  [34] = 34,
  [35] = 24,
  [36] = 19,
  [37] = 37,
  [38] = 24,
  [39] = 17,
  [40] = 18,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 41,
  [45] = 45,
  [46] = 41,
  [47] = 45,
  [48] = 45,
  [49] = 45,
  [50] = 17,
  [51] = 18,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 57,
  [61] = 56,
  [62] = 62,
  [63] = 58,
  [64] = 58,
  [65] = 59,
  [66] = 66,
  [67] = 67,
  [68] = 56,
  [69] = 67,
  [70] = 67,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(21);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(35);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(35);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(31);
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
      if (lookahead == '{') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '}') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(25);
      if (lookahead == '\r') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 18:
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(30);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '_') ADVANCE(21);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == '~') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if (('\n' <= lookahead && lookahead <= '\f') ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(35);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '?') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '=') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_linebreak);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_linebreak);
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_shorthand);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_shorthand);
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_smart_quote);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_link_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_label_token1);
      if (aux_sym_label_token1_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_heading_token1);
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__space_no_newline_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 19, .external_lex_state = 2},
  [2] = {.lex_state = 19, .external_lex_state = 2},
  [3] = {.lex_state = 19, .external_lex_state = 2},
  [4] = {.lex_state = 19, .external_lex_state = 3},
  [5] = {.lex_state = 19, .external_lex_state = 4},
  [6] = {.lex_state = 19, .external_lex_state = 5},
  [7] = {.lex_state = 19, .external_lex_state = 5},
  [8] = {.lex_state = 19, .external_lex_state = 4},
  [9] = {.lex_state = 19, .external_lex_state = 3},
  [10] = {.lex_state = 19, .external_lex_state = 3},
  [11] = {.lex_state = 19, .external_lex_state = 3},
  [12] = {.lex_state = 19, .external_lex_state = 6},
  [13] = {.lex_state = 19, .external_lex_state = 6},
  [14] = {.lex_state = 19, .external_lex_state = 6},
  [15] = {.lex_state = 19, .external_lex_state = 6},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 19, .external_lex_state = 2},
  [20] = {.lex_state = 19, .external_lex_state = 2},
  [21] = {.lex_state = 19, .external_lex_state = 2},
  [22] = {.lex_state = 19, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 2},
  [24] = {.lex_state = 19, .external_lex_state = 2},
  [25] = {.lex_state = 19, .external_lex_state = 3},
  [26] = {.lex_state = 19, .external_lex_state = 3},
  [27] = {.lex_state = 19, .external_lex_state = 3},
  [28] = {.lex_state = 19, .external_lex_state = 3},
  [29] = {.lex_state = 19, .external_lex_state = 3},
  [30] = {.lex_state = 19, .external_lex_state = 3},
  [31] = {.lex_state = 19, .external_lex_state = 3},
  [32] = {.lex_state = 19, .external_lex_state = 3},
  [33] = {.lex_state = 19, .external_lex_state = 3},
  [34] = {.lex_state = 19, .external_lex_state = 3},
  [35] = {.lex_state = 19, .external_lex_state = 3},
  [36] = {.lex_state = 19, .external_lex_state = 6},
  [37] = {.lex_state = 19, .external_lex_state = 6},
  [38] = {.lex_state = 19, .external_lex_state = 6},
  [39] = {.lex_state = 19, .external_lex_state = 6},
  [40] = {.lex_state = 19, .external_lex_state = 6},
  [41] = {.lex_state = 1, .external_lex_state = 7},
  [42] = {.lex_state = 1, .external_lex_state = 7},
  [43] = {.lex_state = 1, .external_lex_state = 7},
  [44] = {.lex_state = 1, .external_lex_state = 7},
  [45] = {.lex_state = 1, .external_lex_state = 7},
  [46] = {.lex_state = 1, .external_lex_state = 7},
  [47] = {.lex_state = 1, .external_lex_state = 7},
  [48] = {.lex_state = 1, .external_lex_state = 7},
  [49] = {.lex_state = 1, .external_lex_state = 7},
  [50] = {.lex_state = 1, .external_lex_state = 7},
  [51] = {.lex_state = 1, .external_lex_state = 7},
  [52] = {.lex_state = 19, .external_lex_state = 7},
  [53] = {.lex_state = 19, .external_lex_state = 7},
  [54] = {.lex_state = 0, .external_lex_state = 7},
  [55] = {.lex_state = 0, .external_lex_state = 7},
  [56] = {.lex_state = 0, .external_lex_state = 8},
  [57] = {.lex_state = 0, .external_lex_state = 9},
  [58] = {.lex_state = 19},
  [59] = {.lex_state = 0, .external_lex_state = 10},
  [60] = {.lex_state = 0, .external_lex_state = 9},
  [61] = {.lex_state = 0, .external_lex_state = 8},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 19},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 0, .external_lex_state = 10},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 18},
  [68] = {.lex_state = 0, .external_lex_state = 8},
  [69] = {.lex_state = 18},
  [70] = {.lex_state = 18},
};

enum {
  ts_external_token__token_eof = 0,
  ts_external_token_space = 1,
  ts_external_token_parbreak = 2,
  ts_external_token__indent = 3,
  ts_external_token__dedent = 4,
  ts_external_token_raw = 5,
  ts_external_token__link_end = 6,
  ts_external_token_text = 7,
  ts_external_token__delim_strong = 8,
  ts_external_token__delim_emph = 9,
  ts_external_token_heading_start = 10,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__token_eof] = sym__token_eof,
  [ts_external_token_space] = sym_space,
  [ts_external_token_parbreak] = sym_parbreak,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token_raw] = sym_raw,
  [ts_external_token__link_end] = sym__link_end,
  [ts_external_token_text] = sym_text,
  [ts_external_token__delim_strong] = sym__delim_strong,
  [ts_external_token__delim_emph] = sym__delim_emph,
  [ts_external_token_heading_start] = sym_heading_start,
};

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__token_eof] = true,
    [ts_external_token_space] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_raw] = true,
    [ts_external_token__link_end] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
    [ts_external_token_heading_start] = true,
  },
  [2] = {
    [ts_external_token_space] = true,
    [ts_external_token_parbreak] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
    [ts_external_token_heading_start] = true,
  },
  [3] = {
    [ts_external_token_space] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token__delim_emph] = true,
    [ts_external_token_heading_start] = true,
  },
  [4] = {
    [ts_external_token_space] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_emph] = true,
    [ts_external_token_heading_start] = true,
  },
  [5] = {
    [ts_external_token_space] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
    [ts_external_token__delim_strong] = true,
    [ts_external_token_heading_start] = true,
  },
  [6] = {
    [ts_external_token__token_eof] = true,
    [ts_external_token_raw] = true,
    [ts_external_token_text] = true,
  },
  [7] = {
    [ts_external_token__token_eof] = true,
  },
  [8] = {
    [ts_external_token__link_end] = true,
  },
  [9] = {
    [ts_external_token__delim_strong] = true,
  },
  [10] = {
    [ts_external_token__delim_emph] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__markup_expr_text_token1] = ACTIONS(1),
    [sym_smart_quote] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_heading_token1] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [sym__token_eof] = ACTIONS(1),
    [sym_space] = ACTIONS(1),
    [sym_parbreak] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym_raw] = ACTIONS(1),
    [sym__link_end] = ACTIONS(1),
    [sym_text] = ACTIONS(1),
    [sym__delim_strong] = ACTIONS(1),
    [sym__delim_emph] = ACTIONS(1),
    [sym_heading_start] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym_markup] = STATE(62),
    [sym__markup_expr_base] = STATE(3),
    [sym__markup_expr_text] = STATE(3),
    [sym_link] = STATE(3),
    [sym_label] = STATE(3),
    [sym_strong] = STATE(3),
    [sym_emph] = STATE(3),
    [sym_heading] = STATE(3),
    [sym_block_comment] = STATE(3),
    [aux_sym_markup_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__markup_expr_text_token1] = ACTIONS(5),
    [sym_linebreak] = ACTIONS(7),
    [sym_escape] = ACTIONS(7),
    [sym_shorthand] = ACTIONS(7),
    [sym_smart_quote] = ACTIONS(7),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(7),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [sym_space] = ACTIONS(7),
    [sym_parbreak] = ACTIONS(7),
    [sym_raw] = ACTIONS(7),
    [sym_text] = ACTIONS(7),
    [sym__delim_strong] = ACTIONS(15),
    [sym__delim_emph] = ACTIONS(17),
    [sym_heading_start] = ACTIONS(19),
  },
  [2] = {
    [sym__markup_expr_base] = STATE(2),
    [sym__markup_expr_text] = STATE(2),
    [sym_link] = STATE(2),
    [sym_label] = STATE(2),
    [sym_strong] = STATE(2),
    [sym_emph] = STATE(2),
    [sym_heading] = STATE(2),
    [sym_block_comment] = STATE(2),
    [aux_sym_markup_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym__markup_expr_text_token1] = ACTIONS(23),
    [sym_linebreak] = ACTIONS(26),
    [sym_escape] = ACTIONS(26),
    [sym_shorthand] = ACTIONS(26),
    [sym_smart_quote] = ACTIONS(26),
    [aux_sym_link_token1] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(32),
    [sym_line_comment] = ACTIONS(26),
    [anon_sym_SLASH_STAR] = ACTIONS(35),
    [sym_space] = ACTIONS(26),
    [sym_parbreak] = ACTIONS(26),
    [sym_raw] = ACTIONS(26),
    [sym_text] = ACTIONS(26),
    [sym__delim_strong] = ACTIONS(38),
    [sym__delim_emph] = ACTIONS(41),
    [sym_heading_start] = ACTIONS(44),
  },
  [3] = {
    [sym__markup_expr_base] = STATE(2),
    [sym__markup_expr_text] = STATE(2),
    [sym_link] = STATE(2),
    [sym_label] = STATE(2),
    [sym_strong] = STATE(2),
    [sym_emph] = STATE(2),
    [sym_heading] = STATE(2),
    [sym_block_comment] = STATE(2),
    [aux_sym_markup_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [aux_sym__markup_expr_text_token1] = ACTIONS(49),
    [sym_linebreak] = ACTIONS(51),
    [sym_escape] = ACTIONS(51),
    [sym_shorthand] = ACTIONS(51),
    [sym_smart_quote] = ACTIONS(51),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(51),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [sym_space] = ACTIONS(51),
    [sym_parbreak] = ACTIONS(51),
    [sym_raw] = ACTIONS(51),
    [sym_text] = ACTIONS(51),
    [sym__delim_strong] = ACTIONS(15),
    [sym__delim_emph] = ACTIONS(17),
    [sym_heading_start] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(53), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(57), 1,
      aux_sym_link_token1,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      sym__delim_strong,
    ACTIONS(65), 1,
      sym__delim_emph,
    ACTIONS(67), 1,
      sym_heading_start,
    STATE(11), 1,
      aux_sym__markup_emph_repeat1,
    STATE(30), 7,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_strong,
      sym_heading,
      sym_block_comment,
    ACTIONS(55), 8,
      sym_space,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
  [44] = 10,
    ACTIONS(57), 1,
      aux_sym_link_token1,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      sym_heading_start,
    ACTIONS(69), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(73), 1,
      sym__delim_emph,
    STATE(10), 1,
      aux_sym__markup_strong_repeat1,
    STATE(60), 1,
      sym__markup_strong,
    STATE(34), 7,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_emph,
      sym_heading,
      sym_block_comment,
    ACTIONS(71), 8,
      sym_space,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
  [88] = 10,
    ACTIONS(53), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(57), 1,
      aux_sym_link_token1,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      sym__delim_strong,
    ACTIONS(67), 1,
      sym_heading_start,
    STATE(4), 1,
      aux_sym__markup_emph_repeat1,
    STATE(65), 1,
      sym__markup_emph,
    STATE(30), 7,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_strong,
      sym_heading,
      sym_block_comment,
    ACTIONS(55), 8,
      sym_space,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
  [132] = 10,
    ACTIONS(53), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(57), 1,
      aux_sym_link_token1,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      sym__delim_strong,
    ACTIONS(67), 1,
      sym_heading_start,
    STATE(4), 1,
      aux_sym__markup_emph_repeat1,
    STATE(59), 1,
      sym__markup_emph,
    STATE(30), 7,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_strong,
      sym_heading,
      sym_block_comment,
    ACTIONS(55), 8,
      sym_space,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
  [176] = 10,
    ACTIONS(57), 1,
      aux_sym_link_token1,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      sym_heading_start,
    ACTIONS(69), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(73), 1,
      sym__delim_emph,
    STATE(10), 1,
      aux_sym__markup_strong_repeat1,
    STATE(57), 1,
      sym__markup_strong,
    STATE(34), 7,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_emph,
      sym_heading,
      sym_block_comment,
    ACTIONS(71), 8,
      sym_space,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
  [220] = 10,
    ACTIONS(75), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(81), 1,
      aux_sym_link_token1,
    ACTIONS(84), 1,
      anon_sym_LT,
    ACTIONS(87), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(90), 1,
      sym__delim_strong,
    ACTIONS(92), 1,
      sym__delim_emph,
    ACTIONS(95), 1,
      sym_heading_start,
    STATE(9), 1,
      aux_sym__markup_strong_repeat1,
    STATE(34), 7,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_emph,
      sym_heading,
      sym_block_comment,
    ACTIONS(78), 8,
      sym_space,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
  [264] = 10,
    ACTIONS(57), 1,
      aux_sym_link_token1,
    ACTIONS(59), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      sym_heading_start,
    ACTIONS(69), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(73), 1,
      sym__delim_emph,
    ACTIONS(98), 1,
      sym__delim_strong,
    STATE(9), 1,
      aux_sym__markup_strong_repeat1,
    STATE(34), 7,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_emph,
      sym_heading,
      sym_block_comment,
    ACTIONS(71), 8,
      sym_space,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
  [308] = 10,
    ACTIONS(100), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(106), 1,
      aux_sym_link_token1,
    ACTIONS(109), 1,
      anon_sym_LT,
    ACTIONS(112), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      sym__delim_strong,
    ACTIONS(118), 1,
      sym__delim_emph,
    ACTIONS(120), 1,
      sym_heading_start,
    STATE(11), 1,
      aux_sym__markup_emph_repeat1,
    STATE(30), 7,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_strong,
      sym_heading,
      sym_block_comment,
    ACTIONS(103), 8,
      sym_space,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
  [352] = 9,
    ACTIONS(123), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(127), 1,
      aux_sym_link_token1,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(131), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      sym__token_eof,
    STATE(15), 1,
      aux_sym__markup_no_newline_repeat1,
    STATE(55), 1,
      sym__markup_no_newline,
    STATE(37), 6,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_block_comment,
      sym__space_no_newline,
    ACTIONS(125), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_no_newline_token1,
  [392] = 8,
    ACTIONS(135), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(141), 1,
      aux_sym_link_token1,
    ACTIONS(144), 1,
      anon_sym_LT,
    ACTIONS(149), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      aux_sym__markup_no_newline_repeat1,
    ACTIONS(147), 2,
      sym__token_eof,
      aux_sym_heading_token1,
    STATE(37), 6,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_block_comment,
      sym__space_no_newline,
    ACTIONS(138), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_no_newline_token1,
  [430] = 9,
    ACTIONS(123), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(127), 1,
      aux_sym_link_token1,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(131), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      sym__token_eof,
    STATE(15), 1,
      aux_sym__markup_no_newline_repeat1,
    STATE(54), 1,
      sym__markup_no_newline,
    STATE(37), 6,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_block_comment,
      sym__space_no_newline,
    ACTIONS(125), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_no_newline_token1,
  [470] = 8,
    ACTIONS(123), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(127), 1,
      aux_sym_link_token1,
    ACTIONS(129), 1,
      anon_sym_LT,
    ACTIONS(131), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      aux_sym__markup_no_newline_repeat1,
    ACTIONS(154), 2,
      sym__token_eof,
      aux_sym_heading_token1,
    STATE(37), 6,
      sym__markup_expr_base,
      sym__markup_expr_text,
      sym_link,
      sym_label,
      sym_block_comment,
      sym__space_no_newline,
    ACTIONS(125), 8,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      sym_line_comment,
      aux_sym__space_no_newline_token1,
  [508] = 2,
    ACTIONS(158), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(156), 16,
      sym_space,
      sym_parbreak,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [530] = 2,
    ACTIONS(162), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(160), 16,
      sym_space,
      sym_parbreak,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [552] = 2,
    ACTIONS(166), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(164), 16,
      sym_space,
      sym_parbreak,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [574] = 2,
    ACTIONS(170), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(168), 16,
      sym_space,
      sym_parbreak,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [596] = 2,
    ACTIONS(174), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(172), 16,
      sym_space,
      sym_parbreak,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [618] = 2,
    ACTIONS(178), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(176), 16,
      sym_space,
      sym_parbreak,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [640] = 2,
    ACTIONS(182), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(180), 16,
      sym_space,
      sym_parbreak,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [662] = 2,
    ACTIONS(186), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(184), 16,
      sym_space,
      sym_parbreak,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [684] = 2,
    ACTIONS(190), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(188), 16,
      sym_space,
      sym_parbreak,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      ts_builtin_sym_end,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [706] = 2,
    ACTIONS(170), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(168), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [726] = 2,
    ACTIONS(186), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(184), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [746] = 2,
    ACTIONS(158), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(156), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [766] = 2,
    ACTIONS(166), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(164), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [786] = 2,
    ACTIONS(174), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(172), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [806] = 2,
    ACTIONS(192), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(194), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [826] = 2,
    ACTIONS(178), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(176), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [846] = 2,
    ACTIONS(182), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(180), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [866] = 2,
    ACTIONS(162), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(160), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [886] = 2,
    ACTIONS(196), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(198), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [906] = 2,
    ACTIONS(190), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(188), 14,
      sym_space,
      sym_raw,
      sym_text,
      sym__delim_strong,
      sym__delim_emph,
      sym_heading_start,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      sym_line_comment,
      anon_sym_SLASH_STAR,
  [926] = 2,
    ACTIONS(170), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(168), 13,
      sym__token_eof,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      aux_sym_heading_token1,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_no_newline_token1,
  [945] = 2,
    ACTIONS(200), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(202), 13,
      sym__token_eof,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      aux_sym_heading_token1,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_no_newline_token1,
  [964] = 2,
    ACTIONS(190), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(188), 13,
      sym__token_eof,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      aux_sym_heading_token1,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_no_newline_token1,
  [983] = 2,
    ACTIONS(162), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(160), 13,
      sym__token_eof,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      aux_sym_heading_token1,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_no_newline_token1,
  [1002] = 2,
    ACTIONS(166), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(164), 13,
      sym__token_eof,
      sym_raw,
      sym_text,
      sym_linebreak,
      sym_escape,
      sym_shorthand,
      sym_smart_quote,
      aux_sym_link_token1,
      anon_sym_LT,
      aux_sym_heading_token1,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      aux_sym__space_no_newline_token1,
  [1021] = 5,
    ACTIONS(206), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      aux_sym_block_comment_token1,
    ACTIONS(204), 2,
      aux_sym_heading_token1,
      sym_line_comment,
    ACTIONS(210), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(43), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1040] = 5,
    ACTIONS(206), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      aux_sym_block_comment_token1,
    ACTIONS(204), 2,
      aux_sym_heading_token1,
      sym_line_comment,
    ACTIONS(212), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(43), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1059] = 5,
    ACTIONS(217), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      aux_sym_block_comment_token1,
    ACTIONS(214), 2,
      aux_sym_heading_token1,
      sym_line_comment,
    ACTIONS(223), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(43), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1078] = 5,
    ACTIONS(206), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      aux_sym_block_comment_token1,
    ACTIONS(204), 2,
      aux_sym_heading_token1,
      sym_line_comment,
    ACTIONS(225), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(43), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1097] = 5,
    ACTIONS(206), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      aux_sym_block_comment_token1,
    ACTIONS(227), 2,
      aux_sym_heading_token1,
      sym_line_comment,
    ACTIONS(231), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(44), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1116] = 5,
    ACTIONS(206), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      aux_sym_block_comment_token1,
    ACTIONS(204), 2,
      aux_sym_heading_token1,
      sym_line_comment,
    ACTIONS(233), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(43), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1135] = 5,
    ACTIONS(206), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(237), 1,
      aux_sym_block_comment_token1,
    ACTIONS(235), 2,
      aux_sym_heading_token1,
      sym_line_comment,
    ACTIONS(239), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(46), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1154] = 5,
    ACTIONS(206), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(243), 1,
      aux_sym_block_comment_token1,
    ACTIONS(241), 2,
      aux_sym_heading_token1,
      sym_line_comment,
    ACTIONS(245), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(41), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1173] = 5,
    ACTIONS(206), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(249), 1,
      aux_sym_block_comment_token1,
    ACTIONS(247), 2,
      aux_sym_heading_token1,
      sym_line_comment,
    ACTIONS(251), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(42), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [1192] = 2,
    ACTIONS(162), 1,
      aux_sym_block_comment_token1,
    ACTIONS(160), 5,
      sym__token_eof,
      aux_sym_heading_token1,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [1203] = 2,
    ACTIONS(166), 1,
      aux_sym_block_comment_token1,
    ACTIONS(164), 5,
      sym__token_eof,
      aux_sym_heading_token1,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [1214] = 3,
    ACTIONS(253), 1,
      aux_sym__space_no_newline_token1,
    ACTIONS(255), 1,
      sym__token_eof,
    STATE(12), 1,
      sym__space_no_newline,
  [1224] = 3,
    ACTIONS(257), 1,
      aux_sym__space_no_newline_token1,
    ACTIONS(259), 1,
      sym__token_eof,
    STATE(14), 1,
      sym__space_no_newline,
  [1234] = 1,
    ACTIONS(261), 2,
      sym__token_eof,
      aux_sym_heading_token1,
  [1239] = 1,
    ACTIONS(263), 2,
      sym__token_eof,
      aux_sym_heading_token1,
  [1244] = 1,
    ACTIONS(265), 1,
      sym__link_end,
  [1248] = 1,
    ACTIONS(267), 1,
      sym__delim_strong,
  [1252] = 1,
    ACTIONS(269), 1,
      anon_sym_GT,
  [1256] = 1,
    ACTIONS(271), 1,
      sym__delim_emph,
  [1260] = 1,
    ACTIONS(273), 1,
      sym__delim_strong,
  [1264] = 1,
    ACTIONS(275), 1,
      sym__link_end,
  [1268] = 1,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
  [1272] = 1,
    ACTIONS(279), 1,
      anon_sym_GT,
  [1276] = 1,
    ACTIONS(281), 1,
      anon_sym_GT,
  [1280] = 1,
    ACTIONS(283), 1,
      sym__delim_emph,
  [1284] = 1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [1288] = 1,
    ACTIONS(287), 1,
      aux_sym_label_token1,
  [1292] = 1,
    ACTIONS(289), 1,
      sym__link_end,
  [1296] = 1,
    ACTIONS(291), 1,
      aux_sym_label_token1,
  [1300] = 1,
    ACTIONS(293), 1,
      aux_sym_label_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 264,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 352,
  [SMALL_STATE(13)] = 392,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 470,
  [SMALL_STATE(16)] = 508,
  [SMALL_STATE(17)] = 530,
  [SMALL_STATE(18)] = 552,
  [SMALL_STATE(19)] = 574,
  [SMALL_STATE(20)] = 596,
  [SMALL_STATE(21)] = 618,
  [SMALL_STATE(22)] = 640,
  [SMALL_STATE(23)] = 662,
  [SMALL_STATE(24)] = 684,
  [SMALL_STATE(25)] = 706,
  [SMALL_STATE(26)] = 726,
  [SMALL_STATE(27)] = 746,
  [SMALL_STATE(28)] = 766,
  [SMALL_STATE(29)] = 786,
  [SMALL_STATE(30)] = 806,
  [SMALL_STATE(31)] = 826,
  [SMALL_STATE(32)] = 846,
  [SMALL_STATE(33)] = 866,
  [SMALL_STATE(34)] = 886,
  [SMALL_STATE(35)] = 906,
  [SMALL_STATE(36)] = 926,
  [SMALL_STATE(37)] = 945,
  [SMALL_STATE(38)] = 964,
  [SMALL_STATE(39)] = 983,
  [SMALL_STATE(40)] = 1002,
  [SMALL_STATE(41)] = 1021,
  [SMALL_STATE(42)] = 1040,
  [SMALL_STATE(43)] = 1059,
  [SMALL_STATE(44)] = 1078,
  [SMALL_STATE(45)] = 1097,
  [SMALL_STATE(46)] = 1116,
  [SMALL_STATE(47)] = 1135,
  [SMALL_STATE(48)] = 1154,
  [SMALL_STATE(49)] = 1173,
  [SMALL_STATE(50)] = 1192,
  [SMALL_STATE(51)] = 1203,
  [SMALL_STATE(52)] = 1214,
  [SMALL_STATE(53)] = 1224,
  [SMALL_STATE(54)] = 1234,
  [SMALL_STATE(55)] = 1239,
  [SMALL_STATE(56)] = 1244,
  [SMALL_STATE(57)] = 1248,
  [SMALL_STATE(58)] = 1252,
  [SMALL_STATE(59)] = 1256,
  [SMALL_STATE(60)] = 1260,
  [SMALL_STATE(61)] = 1264,
  [SMALL_STATE(62)] = 1268,
  [SMALL_STATE(63)] = 1272,
  [SMALL_STATE(64)] = 1276,
  [SMALL_STATE(65)] = 1280,
  [SMALL_STATE(66)] = 1284,
  [SMALL_STATE(67)] = 1288,
  [SMALL_STATE(68)] = 1292,
  [SMALL_STATE(69)] = 1296,
  [SMALL_STATE(70)] = 1300,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(68),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(67),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(49),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(6),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_markup_repeat1, 2), SHIFT_REPEAT(53),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markup, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_emph, 1, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(34),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(34),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(56),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(69),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(48),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(7),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 2), SHIFT_REPEAT(52),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_strong, 1, .production_id = 1),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(30),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(30),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(56),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(69),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(48),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 2), SHIFT_REPEAT(52),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markup_no_newline_repeat1, 2), SHIFT_REPEAT(37),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_no_newline_repeat1, 2), SHIFT_REPEAT(37),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_no_newline_repeat1, 2), SHIFT_REPEAT(61),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_no_newline_repeat1, 2), SHIFT_REPEAT(70),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_no_newline_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__markup_no_newline_repeat1, 2), SHIFT_REPEAT(45),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markup_no_newline, 1, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 4, .production_id = 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 4, .production_id = 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emph, 3, .production_id = 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emph, 3, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, .production_id = 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_emph_repeat1, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_strong_repeat1, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markup_no_newline_repeat1, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__markup_no_newline_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(43),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(47),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(43),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
