#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 11
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

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
  sym_line_comment = 10,
  anon_sym_SLASH_STAR = 11,
  aux_sym_block_comment_token1 = 12,
  aux_sym_block_comment_token2 = 13,
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
  sym__markup_expr_text = 28,
  sym_link = 29,
  sym_label = 30,
  sym_strong = 31,
  sym_emph = 32,
  sym_heading = 33,
  sym_block_comment = 34,
  sym__space_no_newline = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_heading_repeat1 = 37,
  aux_sym_block_comment_repeat1 = 38,
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
  [sym_line_comment] = "line_comment",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [aux_sym_block_comment_token2] = "block_comment_token2",
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
  [sym__markup_expr_text] = "_markup_expr_text",
  [sym_link] = "link",
  [sym_label] = "label",
  [sym_strong] = "strong",
  [sym_emph] = "emph",
  [sym_heading] = "heading",
  [sym_block_comment] = "block_comment",
  [sym__space_no_newline] = "_space_no_newline",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_heading_repeat1] = "heading_repeat1",
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
  [sym_line_comment] = sym_line_comment,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [aux_sym_block_comment_token2] = aux_sym_block_comment_token2,
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
  [sym__markup_expr_text] = sym__markup_expr_text,
  [sym_link] = sym_link,
  [sym_label] = sym_label,
  [sym_strong] = sym_strong,
  [sym_emph] = sym_emph,
  [sym_heading] = sym_heading,
  [sym_block_comment] = sym_block_comment,
  [sym__space_no_newline] = sym__space_no_newline,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_heading_repeat1] = aux_sym_heading_repeat1,
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
  [sym_emph] = {
    .visible = true,
    .named = true,
  },
  [sym_heading] = {
    .visible = true,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heading_repeat1] = {
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_inner, 1},
  [1] =
    {field_text, 2},
  [2] =
    {field_text, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 19,
  [24] = 16,
  [25] = 15,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
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
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(38);
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
          lookahead == 8233) ADVANCE(37);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '\r') ADVANCE(38);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(37);
      if (lookahead != 0) ADVANCE(37);
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
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__markup_expr_text_token1);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(35);
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
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_block_comment_token2);
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
  [4] = {.lex_state = 19, .external_lex_state = 2},
  [5] = {.lex_state = 19, .external_lex_state = 2},
  [6] = {.lex_state = 19, .external_lex_state = 2},
  [7] = {.lex_state = 19, .external_lex_state = 2},
  [8] = {.lex_state = 19, .external_lex_state = 2},
  [9] = {.lex_state = 19, .external_lex_state = 2},
  [10] = {.lex_state = 19, .external_lex_state = 2},
  [11] = {.lex_state = 19, .external_lex_state = 2},
  [12] = {.lex_state = 19, .external_lex_state = 2},
  [13] = {.lex_state = 19, .external_lex_state = 2},
  [14] = {.lex_state = 19, .external_lex_state = 2},
  [15] = {.lex_state = 19, .external_lex_state = 2},
  [16] = {.lex_state = 19, .external_lex_state = 2},
  [17] = {.lex_state = 19, .external_lex_state = 2},
  [18] = {.lex_state = 19, .external_lex_state = 2},
  [19] = {.lex_state = 1, .external_lex_state = 3},
  [20] = {.lex_state = 1, .external_lex_state = 3},
  [21] = {.lex_state = 1, .external_lex_state = 3},
  [22] = {.lex_state = 1, .external_lex_state = 3},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 1, .external_lex_state = 3},
  [25] = {.lex_state = 1, .external_lex_state = 3},
  [26] = {.lex_state = 19, .external_lex_state = 3},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 0, .external_lex_state = 4},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 0},
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

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
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
    [ts_external_token__token_eof] = true,
  },
  [4] = {
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
    [sym_line_comment] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [aux_sym_block_comment_token1] = ACTIONS(1),
    [aux_sym_block_comment_token2] = ACTIONS(1),
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
    [sym_source_file] = STATE(30),
    [sym__markup_expr_text] = STATE(10),
    [sym_link] = STATE(10),
    [sym_label] = STATE(10),
    [sym_strong] = STATE(10),
    [sym_emph] = STATE(10),
    [sym_heading] = STATE(10),
    [sym_block_comment] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
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
    [sym__markup_expr_text] = STATE(4),
    [sym_link] = STATE(4),
    [sym_label] = STATE(4),
    [sym_strong] = STATE(4),
    [sym_emph] = STATE(4),
    [sym_heading] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym__space_no_newline] = STATE(4),
    [aux_sym_heading_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(21),
    [aux_sym__markup_expr_text_token1] = ACTIONS(23),
    [sym_linebreak] = ACTIONS(25),
    [sym_escape] = ACTIONS(25),
    [sym_shorthand] = ACTIONS(25),
    [sym_smart_quote] = ACTIONS(25),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(25),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [aux_sym__space_no_newline_token1] = ACTIONS(25),
    [sym_space] = ACTIONS(25),
    [sym_parbreak] = ACTIONS(25),
    [sym_raw] = ACTIONS(25),
    [sym_text] = ACTIONS(25),
    [sym__delim_strong] = ACTIONS(15),
    [sym__delim_emph] = ACTIONS(17),
    [sym_heading_start] = ACTIONS(19),
  },
  [3] = {
    [sym__markup_expr_text] = STATE(3),
    [sym_link] = STATE(3),
    [sym_label] = STATE(3),
    [sym_strong] = STATE(3),
    [sym_emph] = STATE(3),
    [sym_heading] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym__space_no_newline] = STATE(3),
    [aux_sym_heading_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [aux_sym__markup_expr_text_token1] = ACTIONS(29),
    [sym_linebreak] = ACTIONS(32),
    [sym_escape] = ACTIONS(32),
    [sym_shorthand] = ACTIONS(32),
    [sym_smart_quote] = ACTIONS(32),
    [aux_sym_link_token1] = ACTIONS(35),
    [anon_sym_LT] = ACTIONS(38),
    [sym_line_comment] = ACTIONS(32),
    [anon_sym_SLASH_STAR] = ACTIONS(41),
    [aux_sym__space_no_newline_token1] = ACTIONS(32),
    [sym_space] = ACTIONS(32),
    [sym_parbreak] = ACTIONS(32),
    [sym_raw] = ACTIONS(32),
    [sym_text] = ACTIONS(32),
    [sym__delim_strong] = ACTIONS(44),
    [sym__delim_emph] = ACTIONS(47),
    [sym_heading_start] = ACTIONS(50),
  },
  [4] = {
    [sym__markup_expr_text] = STATE(3),
    [sym_link] = STATE(3),
    [sym_label] = STATE(3),
    [sym_strong] = STATE(3),
    [sym_emph] = STATE(3),
    [sym_heading] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym__space_no_newline] = STATE(3),
    [aux_sym_heading_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(53),
    [aux_sym__markup_expr_text_token1] = ACTIONS(55),
    [sym_linebreak] = ACTIONS(57),
    [sym_escape] = ACTIONS(57),
    [sym_shorthand] = ACTIONS(57),
    [sym_smart_quote] = ACTIONS(57),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(57),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [aux_sym__space_no_newline_token1] = ACTIONS(57),
    [sym_space] = ACTIONS(57),
    [sym_parbreak] = ACTIONS(57),
    [sym_raw] = ACTIONS(57),
    [sym_text] = ACTIONS(57),
    [sym__delim_strong] = ACTIONS(15),
    [sym__delim_emph] = ACTIONS(17),
    [sym_heading_start] = ACTIONS(19),
  },
  [5] = {
    [sym__markup_expr_text] = STATE(13),
    [sym_link] = STATE(13),
    [sym_label] = STATE(13),
    [sym_strong] = STATE(13),
    [sym_emph] = STATE(13),
    [sym_heading] = STATE(13),
    [sym_block_comment] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(59),
    [aux_sym__markup_expr_text_token1] = ACTIONS(61),
    [sym_linebreak] = ACTIONS(59),
    [sym_escape] = ACTIONS(59),
    [sym_shorthand] = ACTIONS(59),
    [sym_smart_quote] = ACTIONS(59),
    [aux_sym_link_token1] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [sym_line_comment] = ACTIONS(59),
    [anon_sym_SLASH_STAR] = ACTIONS(59),
    [aux_sym__space_no_newline_token1] = ACTIONS(59),
    [sym_space] = ACTIONS(59),
    [sym_parbreak] = ACTIONS(59),
    [sym_raw] = ACTIONS(59),
    [sym_text] = ACTIONS(59),
    [sym__delim_strong] = ACTIONS(59),
    [sym__delim_emph] = ACTIONS(59),
    [sym_heading_start] = ACTIONS(59),
  },
  [6] = {
    [sym__markup_expr_text] = STATE(12),
    [sym_link] = STATE(12),
    [sym_label] = STATE(12),
    [sym_strong] = STATE(12),
    [sym_emph] = STATE(12),
    [sym_heading] = STATE(12),
    [sym_block_comment] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(63),
    [aux_sym__markup_expr_text_token1] = ACTIONS(65),
    [sym_linebreak] = ACTIONS(63),
    [sym_escape] = ACTIONS(63),
    [sym_shorthand] = ACTIONS(63),
    [sym_smart_quote] = ACTIONS(63),
    [aux_sym_link_token1] = ACTIONS(63),
    [anon_sym_LT] = ACTIONS(63),
    [sym_line_comment] = ACTIONS(63),
    [anon_sym_SLASH_STAR] = ACTIONS(63),
    [aux_sym__space_no_newline_token1] = ACTIONS(63),
    [sym_space] = ACTIONS(63),
    [sym_parbreak] = ACTIONS(63),
    [sym_raw] = ACTIONS(63),
    [sym_text] = ACTIONS(63),
    [sym__delim_strong] = ACTIONS(63),
    [sym__delim_emph] = ACTIONS(63),
    [sym_heading_start] = ACTIONS(63),
  },
  [7] = {
    [sym__markup_expr_text] = STATE(12),
    [sym_link] = STATE(12),
    [sym_label] = STATE(12),
    [sym_strong] = STATE(12),
    [sym_emph] = STATE(12),
    [sym_heading] = STATE(12),
    [sym_block_comment] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(67),
    [aux_sym__markup_expr_text_token1] = ACTIONS(69),
    [sym_linebreak] = ACTIONS(67),
    [sym_escape] = ACTIONS(67),
    [sym_shorthand] = ACTIONS(67),
    [sym_smart_quote] = ACTIONS(67),
    [aux_sym_link_token1] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [sym_line_comment] = ACTIONS(67),
    [anon_sym_SLASH_STAR] = ACTIONS(67),
    [aux_sym__space_no_newline_token1] = ACTIONS(67),
    [sym_space] = ACTIONS(67),
    [sym_parbreak] = ACTIONS(67),
    [sym_raw] = ACTIONS(67),
    [sym_text] = ACTIONS(67),
    [sym__delim_strong] = ACTIONS(67),
    [sym__delim_emph] = ACTIONS(67),
    [sym_heading_start] = ACTIONS(67),
  },
  [8] = {
    [sym__markup_expr_text] = STATE(13),
    [sym_link] = STATE(13),
    [sym_label] = STATE(13),
    [sym_strong] = STATE(13),
    [sym_emph] = STATE(13),
    [sym_heading] = STATE(13),
    [sym_block_comment] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(71),
    [aux_sym__markup_expr_text_token1] = ACTIONS(73),
    [sym_linebreak] = ACTIONS(71),
    [sym_escape] = ACTIONS(71),
    [sym_shorthand] = ACTIONS(71),
    [sym_smart_quote] = ACTIONS(71),
    [aux_sym_link_token1] = ACTIONS(71),
    [anon_sym_LT] = ACTIONS(71),
    [sym_line_comment] = ACTIONS(71),
    [anon_sym_SLASH_STAR] = ACTIONS(71),
    [aux_sym__space_no_newline_token1] = ACTIONS(71),
    [sym_space] = ACTIONS(71),
    [sym_parbreak] = ACTIONS(71),
    [sym_raw] = ACTIONS(71),
    [sym_text] = ACTIONS(71),
    [sym__delim_strong] = ACTIONS(71),
    [sym__delim_emph] = ACTIONS(71),
    [sym_heading_start] = ACTIONS(71),
  },
  [9] = {
    [sym__markup_expr_text] = STATE(9),
    [sym_link] = STATE(9),
    [sym_label] = STATE(9),
    [sym_strong] = STATE(9),
    [sym_emph] = STATE(9),
    [sym_heading] = STATE(9),
    [sym_block_comment] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym__markup_expr_text_token1] = ACTIONS(77),
    [sym_linebreak] = ACTIONS(80),
    [sym_escape] = ACTIONS(80),
    [sym_shorthand] = ACTIONS(80),
    [sym_smart_quote] = ACTIONS(80),
    [aux_sym_link_token1] = ACTIONS(83),
    [anon_sym_LT] = ACTIONS(86),
    [sym_line_comment] = ACTIONS(80),
    [anon_sym_SLASH_STAR] = ACTIONS(89),
    [sym_space] = ACTIONS(80),
    [sym_parbreak] = ACTIONS(80),
    [sym_raw] = ACTIONS(80),
    [sym_text] = ACTIONS(80),
    [sym__delim_strong] = ACTIONS(92),
    [sym__delim_emph] = ACTIONS(95),
    [sym_heading_start] = ACTIONS(98),
  },
  [10] = {
    [sym__markup_expr_text] = STATE(9),
    [sym_link] = STATE(9),
    [sym_label] = STATE(9),
    [sym_strong] = STATE(9),
    [sym_emph] = STATE(9),
    [sym_heading] = STATE(9),
    [sym_block_comment] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym__markup_expr_text_token1] = ACTIONS(103),
    [sym_linebreak] = ACTIONS(105),
    [sym_escape] = ACTIONS(105),
    [sym_shorthand] = ACTIONS(105),
    [sym_smart_quote] = ACTIONS(105),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(105),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [sym_space] = ACTIONS(105),
    [sym_parbreak] = ACTIONS(105),
    [sym_raw] = ACTIONS(105),
    [sym_text] = ACTIONS(105),
    [sym__delim_strong] = ACTIONS(15),
    [sym__delim_emph] = ACTIONS(17),
    [sym_heading_start] = ACTIONS(19),
  },
  [11] = {
    [sym__markup_expr_text] = STATE(13),
    [sym_link] = STATE(13),
    [sym_label] = STATE(13),
    [sym_strong] = STATE(13),
    [sym_emph] = STATE(13),
    [sym_heading] = STATE(13),
    [sym_block_comment] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [aux_sym__markup_expr_text_token1] = ACTIONS(107),
    [sym_linebreak] = ACTIONS(109),
    [sym_escape] = ACTIONS(109),
    [sym_shorthand] = ACTIONS(109),
    [sym_smart_quote] = ACTIONS(109),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(109),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [sym_space] = ACTIONS(109),
    [sym_parbreak] = ACTIONS(109),
    [sym_raw] = ACTIONS(109),
    [sym_text] = ACTIONS(109),
    [sym__delim_strong] = ACTIONS(15),
    [sym__delim_emph] = ACTIONS(111),
    [sym_heading_start] = ACTIONS(19),
  },
  [12] = {
    [sym__markup_expr_text] = STATE(9),
    [sym_link] = STATE(9),
    [sym_label] = STATE(9),
    [sym_strong] = STATE(9),
    [sym_emph] = STATE(9),
    [sym_heading] = STATE(9),
    [sym_block_comment] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__markup_expr_text_token1] = ACTIONS(103),
    [sym_linebreak] = ACTIONS(105),
    [sym_escape] = ACTIONS(105),
    [sym_shorthand] = ACTIONS(105),
    [sym_smart_quote] = ACTIONS(105),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(105),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [sym_space] = ACTIONS(105),
    [sym_parbreak] = ACTIONS(105),
    [sym_raw] = ACTIONS(105),
    [sym_text] = ACTIONS(105),
    [sym__delim_strong] = ACTIONS(113),
    [sym__delim_emph] = ACTIONS(17),
    [sym_heading_start] = ACTIONS(19),
  },
  [13] = {
    [sym__markup_expr_text] = STATE(9),
    [sym_link] = STATE(9),
    [sym_label] = STATE(9),
    [sym_strong] = STATE(9),
    [sym_emph] = STATE(9),
    [sym_heading] = STATE(9),
    [sym_block_comment] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym__markup_expr_text_token1] = ACTIONS(103),
    [sym_linebreak] = ACTIONS(105),
    [sym_escape] = ACTIONS(105),
    [sym_shorthand] = ACTIONS(105),
    [sym_smart_quote] = ACTIONS(105),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(105),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [sym_space] = ACTIONS(105),
    [sym_parbreak] = ACTIONS(105),
    [sym_raw] = ACTIONS(105),
    [sym_text] = ACTIONS(105),
    [sym__delim_strong] = ACTIONS(15),
    [sym__delim_emph] = ACTIONS(115),
    [sym_heading_start] = ACTIONS(19),
  },
  [14] = {
    [sym__markup_expr_text] = STATE(12),
    [sym_link] = STATE(12),
    [sym_label] = STATE(12),
    [sym_strong] = STATE(12),
    [sym_emph] = STATE(12),
    [sym_heading] = STATE(12),
    [sym_block_comment] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [aux_sym__markup_expr_text_token1] = ACTIONS(117),
    [sym_linebreak] = ACTIONS(119),
    [sym_escape] = ACTIONS(119),
    [sym_shorthand] = ACTIONS(119),
    [sym_smart_quote] = ACTIONS(119),
    [aux_sym_link_token1] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(119),
    [anon_sym_SLASH_STAR] = ACTIONS(13),
    [sym_space] = ACTIONS(119),
    [sym_parbreak] = ACTIONS(119),
    [sym_raw] = ACTIONS(119),
    [sym_text] = ACTIONS(119),
    [sym__delim_strong] = ACTIONS(121),
    [sym__delim_emph] = ACTIONS(17),
    [sym_heading_start] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(125), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(123), 17,
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
      aux_sym__space_no_newline_token1,
  [23] = 2,
    ACTIONS(129), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(127), 17,
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
      aux_sym__space_no_newline_token1,
  [46] = 2,
    ACTIONS(133), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(131), 17,
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
      aux_sym__space_no_newline_token1,
  [69] = 2,
    ACTIONS(137), 1,
      aux_sym__markup_expr_text_token1,
    ACTIONS(135), 17,
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
      aux_sym__space_no_newline_token1,
  [92] = 5,
    ACTIONS(139), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(145), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(21), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [111] = 5,
    ACTIONS(141), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(147), 1,
      sym_line_comment,
    ACTIONS(149), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(151), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(19), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [130] = 5,
    ACTIONS(153), 1,
      sym_line_comment,
    ACTIONS(156), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(162), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(21), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [149] = 5,
    ACTIONS(141), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(164), 1,
      sym_line_comment,
    ACTIONS(166), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(168), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(23), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [168] = 5,
    ACTIONS(139), 1,
      sym_line_comment,
    ACTIONS(141), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(170), 2,
      sym__token_eof,
      anon_sym_STAR_SLASH,
    STATE(21), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [187] = 2,
    ACTIONS(129), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(127), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [198] = 2,
    ACTIONS(125), 2,
      aux_sym_block_comment_token1,
      aux_sym_block_comment_token2,
    ACTIONS(123), 4,
      sym__token_eof,
      sym_line_comment,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [209] = 2,
    STATE(2), 1,
      sym__space_no_newline,
    ACTIONS(172), 2,
      sym__token_eof,
      aux_sym__space_no_newline_token1,
  [217] = 1,
    ACTIONS(174), 1,
      anon_sym_GT,
  [221] = 1,
    ACTIONS(176), 1,
      sym__link_end,
  [225] = 1,
    ACTIONS(178), 1,
      aux_sym_label_token1,
  [229] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 23,
  [SMALL_STATE(17)] = 46,
  [SMALL_STATE(18)] = 69,
  [SMALL_STATE(19)] = 92,
  [SMALL_STATE(20)] = 111,
  [SMALL_STATE(21)] = 130,
  [SMALL_STATE(22)] = 149,
  [SMALL_STATE(23)] = 168,
  [SMALL_STATE(24)] = 187,
  [SMALL_STATE(25)] = 198,
  [SMALL_STATE(26)] = 209,
  [SMALL_STATE(27)] = 217,
  [SMALL_STATE(28)] = 221,
  [SMALL_STATE(29)] = 225,
  [SMALL_STATE(30)] = 229,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(28),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(29),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(14),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(11),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heading_repeat1, 2), SHIFT_REPEAT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 3, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emph, 3, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emph, 3, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, .production_id = 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_emph, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_emph, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_link, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, .production_id = 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(21),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(22),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(21),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
