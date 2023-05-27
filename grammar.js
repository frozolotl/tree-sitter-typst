const LEAF = {
  newline: /\r\n|[\n\x0B\x0C\r\x85\u2028\u2029]/,
  number_unit: /pt|em|mm|cm|in|deg|rad|em|fr|%/,
};

let trivia = $ => optional($._trivia);
let delimitedTrivia = ($, delimiter, item) => optional(seq(
  item,
  repeat(seq(
    trivia($),
    delimiter,
    trivia($),
    item,
  )),
  trivia($),
  optional(delimiter),
));

module.exports = grammar({
  name: 'typst',

  extras: $ => [],

  externals: $ => [
    $._token_eof,
    $._space,
    $.parbreak,
    $._newline,
    $._indent,
    $._dedent,
    $.raw,
    $._link_end,
    $.text,
    $._delim_strong,
    $._delim_emph,
  ],

  precedences: $ => [
    [
      $.math_args,
      $.math_arg_named,
      $._math_arg,
      $._math_expr,
    ],
    [
      $.math_root,
      $.math_attach_below,
      $.math_attach_above,
      $.math_frac,
    ],
    [
      $.math_delimited,
      $.math_delimited_unclosed,
    ],
    [
      $.math_delimited_fence,
      $.math_delimited_fence_unclosed,
    ],
    [
      $.code_parenthesized,
      'code_array',
      'code_dict',
    ],
    [
      $.code_named,
      $._code_primary,
    ]
  ],

  rules: {
    source_file: $ => optional($.markup),

    // Markup

    markup: $ => seq(
      choice(
        $._markup_expr_base,
        $.space,
        $.parbreak,
        $.strong,
        $.emph,
        $._markup_expr_line_start_sof,
      ),
      repeat(choice(
        $._markup_expr_base,
        $.space,
        $.parbreak,
        $.strong,
        $.emph,
        $._markup_expr_line_start,
      )),
    ),
    _markup_expr_base: $ => choice(
      $.line_comment,
      $.block_comment,

      $.text,
      $._markup_expr_text,
      $.linebreak,
      $.escape,
      $.text_shorthand,
      $.smart_quote,
      $.raw,
      $.link,
      $.label,
      $.reference,

      $.equation,
      $.embedded_code_expr,

      // TODO: SyntaxKind::ListMarker
      // TODO: SyntaxKind::EnumMarker
      // TODO: SyntaxKind::TermMarker
    ),
    _markup_expr_line_start_sof: $ => seq(
      repeat(prec.left(1, choice(
        $.space,
        $.parbreak,
        $.block_comment,
        $.line_comment,
      ))),
      $._markup_expr_line_start_content,
    ),
    _markup_expr_line_start: $ => seq(
      $._whitespace_line,
      $._markup_expr_line_start_content,
    ),
    _markup_expr_line_start_content: $ => repeat1(seq(
      $.heading,
      choice(
        $._token_eof,
        alias($._newline, $.space),
        $.parbreak,
      )
    )),

    _markup_expr_text: $ => alias(
      token(prec(-1, choice(
        '[',
        ']',
        repeat1('='),
        '-',
        '+',
        '/',
        '*',
        '_',
        ':',
      ))),
      $.text,
    ),
    linebreak: $ => token(seq(
      '\\',
      choice(LEAF.newline, /\s/),
    )),
    escape: $ => token(choice(
      /\\u\{[a-fA-F0-9]{1,4}\}/,
      /\\[^\p{White_Space}]/,
    )),
    text_shorthand: $ => token(choice(
      '...',
      '---',
      '--',
      '-?',
      '~',
    )),
    smart_quote: $ => token(choice('\'', '"')),
    link: $ => seq(
      /https?:\/\//,
      $._link_end,
    ),
    label: $ => seq(
      '<',
      field('text', /[\-_:\.\p{XID_Continue}]+/),
      '>',
    ),
    reference: $ => seq(
      '@',
      field('text', /([:\.]*[\-_\p{XID_Continue}])+/),
      optional(field('content', $.content_block)),
    ),

    strong: $ => seq(
      $._delim_strong,
      field('inner', $._markup_strong),
      $._delim_strong,
    ),
    _markup_strong: $ => alias(
      repeat1(choice(
        $._markup_expr_base,
        $.space,
        $.emph,
        $._markup_expr_line_start,
      )),
      $.markup,
    ),
    emph: $ => seq(
      $._delim_emph,
      field('inner', $._markup_emph),
      $._delim_emph,
    ),
    _markup_emph: $ => alias(
      repeat1(choice(
        $._markup_expr_base,
        $.space,
        $.strong,
        $._markup_expr_line_start,
      )),
      $.markup,
    ),

    heading_start: $ => /=+/,
    heading: $ => seq(
      $.heading_start,
      choice(
        $._token_eof,
        seq(
          $._space_same_line,
          choice(
            $._token_eof,
            field('inner', $._markup_same_line),
          ),
        ),
      ),
    ),
    _markup_same_line: $ => alias(
      prec.left(repeat1(choice(
        $._markup_expr_base,
        $._space_same_line,
        $.strong,
        $.emph,
      ))),
      $.markup,
    ),

    // Math

    equation: $ => seq(
      '$',
      optional(field('inner', $.math)),
      '$',
    ),
    math: $ => prec.right(repeat1(prec.left($._math_expr))),
    _math_expr: $ => choice(
      $._trivia,

      $.embedded_code_expr,
      $.math_text,
      $.math_shorthand,
      $.math_delimited,
      $.math_delimited_unclosed,
      $.math_delimited_fence,
      $.math_delimited_fence_unclosed,
      $.linebreak,
      $.math_align_point,
      $.escape,
      $.string,

      $.math_field_access,
      $.math_function_call,

      $.math_root,
      $.math_attach_below,
      $.math_attach_above,
      $.math_frac,
    ),

    math_shorthand: $ => choice(
      '->>', '->', '-->', ':=',
      '::=', '!=', '...', '<==>',
      '<-->', '<--', '<-<', '<->',
      '<<-', '<<<', '<=>', '<==',
      '<~~', '<=', '<<', '<-',
      '<~', '>->', '>>>', '==>',
      '=>', '=:', '>=', '>>',
      '|->', '|=>', '~~>', '~>',
      '*', '\'', '-',
    ),
    math_delimited: $ => seq(
      field('left', $.math_delimited_left),
      field('inner', optional($.math)),
      field('right', $.math_delimited_right),
    ),
    math_delimited_unclosed: $ => seq(
      field('left', $.math_delimited_left),
      field('inner', optional($.math)),
    ),
    math_delimited_left: $ => choice(
      alias('[|', $.math_shorthand),
      /[\u{0028}\u{005B}\u{007B}\u{2308}\u{230A}\u{231C}\u{231E}\u{2772}\u{27E6}\u{27E8}\u{27EA}\u{27EC}\u{27EE}\u{2983}\u{2985}\u{2987}\u{2989}\u{298B}\u{298D}\u{298F}\u{2991}\u{2993}\u{2995}\u{2997}\u{29D8}\u{29DA}\u{29FC}]/,
    ),
    math_delimited_right: $ => choice(
      alias('|]', $.math_shorthand),
      /[\u{0029}\u{005D}\u{007D}\u{2309}\u{230B}\u{231D}\u{231F}\u{2773}\u{27E7}\u{27E9}\u{27EB}\u{27ED}\u{27EF}\u{2984}\u{2986}\u{2988}\u{298A}\u{298C}\u{298E}\u{2990}\u{2992}\u{2994}\u{2996}\u{2998}\u{29D9}\u{29DB}\u{29FD}]/,
    ),
    // FIXME: If there is any content, then the right side is not part of this element.
    math_delimited_fence: $ => seq(
      field('left', $.math_fence),
      field('inner', optional($.math)),
      field('right', $.math_fence),
    ),
    math_delimited_fence_unclosed: $ => seq(
      field('left', $.math_fence),
      field('inner', optional($.math)),
    ),
    math_fence: $ => choice(
      alias('||', $.math_shorthand),
      /[\u{7C}\u{2016}\u{2980}\u{2982}\u{2999}\u{299a}]/
    ),
    math_align_point: $ => '&',

    math_field_access: $ => choice(
      field('value', $.math_ident),
      seq(
        field('value', $.math_field_access),
        seq(
          '.',
          field('field', $._math_text_ident),
        ),
      ),
    ),
    math_function_call: $ => seq(
      $.math_field_access,
      '(',
      field('args', optional($.math_args)),
      ')',
    ),
    math_args: $ => choice(
      repeat1($._math_arg),
      seq(
        trivia($),
        choice($.math_arg_named, $.math),
        repeat($._math_arg),
      ),
    ),
    _math_arg: $ => seq(
      choice(',', ';'),
      trivia($),
      optional(choice($.math_arg_named, $.math)),
    ),
    math_arg_named: $ => seq(
      field('name', $._math_text_ident),
      ':',
      trivia($),
      optional(field('arg', $.math)),
    ),

    math_root: $ => seq(
      choice('√', '∛', '∜'),
      field('expr', $._math_expr),
    ),
    math_attach_below: $ => prec.right(seq(
      field('expr', $._math_expr),
      '_',
      field('below', $._math_expr),
    )),
    math_attach_above: $ => prec.right(seq(
      field('expr', $._math_expr),
      '^',
      field('above', $._math_expr),
    )),
    math_frac: $ => prec.left(seq(
      field('numerator', $._math_expr),
      '/',
      field('denominator', $._math_expr),
    )),

    /// FIXME: Grapheme clusters are not parsed correctly.
    math_text: $ => /\d+(\.\d+)?|\P{M}\p{M}+|./,
    math_ident: $ => token(seq(
      /\p{XID_Start}/,
      // This should actually just be \p{XID_Continue} without underscores,
      // but regular expressions don't seem to support that.
      // So, here's a nice little regex that matches the same characters.
      /[\p{XID_Start}\p{Mn}\p{Mc}\p{Nd}\u{00B7}\u{0387}\u{0E33}\u{0EB3}\u{1369}\u{136A}\u{136B}\u{136C}\u{136D}\u{136E}\u{136F}\u{1370}\u{1371}\u{19DA}\u{203F}\u{2040}\u{2054}\u{FE33}\u{FE34}\u{FE4D}\u{FE4E}\u{FE4F}\u{FF3F}\u{FF9E}\u{FF9F}]+/,
    )),
    _math_text_ident: $ => choice(
      $.math_ident,
      alias($.math_text, $.math_ident),
    ),

    // Code

    // TODO: check if src/lexer/parser.rs:576 matters
    embedded_code_expr: $ => seq('#', $._code_expr),

    code: $ => repeat1($._code_expr),

    _code_expr_atomic: $ => $._code_primary,
    // FIXME: non-atomic and pattern parts are missing
    _code_expr: $ => $._code_expr_atomic,
    _code_expr_or_pattern: $ => $._code_expr,
    _code_primary: $ => choice(
      $.code_ident,
      $.code_block,
      $.content_block,
      $.code_parenthesized,
      $.equation,

      $.code_array,
      $.code_dict,

      $.code_number,
      $.string,
      $.label,
      $.raw,

      'none',
      'auto',
      'true',
      'false',
    ),

    code_block: $ => seq(
      '{',
      optional(field('inner', $.code)),
      '}',
    ),
    content_block: $ => seq(
      '[',
      optional(field('inner', $.markup)),
      ']',
    ),
    code_parenthesized: $ => seq(
      '(',
      field('inner', $._code_expr),
      ')',
    ),
    code_array: $ => prec('code_array', seq(
      '(',
      trivia($),
      delimitedTrivia($,
        ',',
        prec('code_array', choice(
          $._code_expr,
          $.code_spread,
        )),
      ),
      trivia($),
      ')',
    )),
    code_dict: $ => prec('code_dict', seq(
      '(',
      trivia($),
      optional(seq(
        ':',
        trivia($),
      )),
      delimitedTrivia($,
        ',',
        prec('code_dict', choice(
          $.code_named,
          $.code_spread,
        )),
      ),
      trivia($),
      ')',
    )),
    code_named: $ => seq(
      field('key', choice(
        $.string,
        $.code_ident,
      )),
      trivia($),
      ':',
      trivia($),
      field('value', $._code_expr),
    ),
    code_spread: $ => prec.right(seq(
      '..',
      trivia($),
      optional($._code_expr),
    )),

    code_ident: $ => /[_\p{XID_Start}][\-_\p{XID_Continue}]*/,
    code_number: $ => choice($.code_int, $.code_float),
    code_int: $ => token(seq(
      choice(
        /0b[01]+/,
        /0o[0-7]+/,
        /0x[0-9a-fA-F]+/,
        /[0-9]+/,
      ),
      optional(LEAF.number_unit),
    )),
    code_float: $ => token(seq(
      choice(
        seq(
          choice(
            /[0-9]+\.[0-9]*/,
            /\.[0-9]+/
          ),
          optional(/[eE][-+]?[0-9]+/),
        ),
        seq(
          /[0-9]+/,
          /[eE][-+]?[0-9]+/,
        ),
      ),
      optional(LEAF.number_unit),
    )),
    string: $ => /"(\\"|[^"])*"/,

    // Whitespace and Comments

    _trivia: $ => choice(
      $.space,
      $.parbreak,
      $.line_comment,
      $.block_comment,
    ),
    line_comment: $ => token(seq('//', /.*/)),
    block_comment: $ => seq(
      '/*',
      repeat(choice(
        choice(
          $.line_comment,
          $.block_comment,
        ),
        /./,
        LEAF.newline,
      )),
      choice('*/', $._token_eof),
    ),

    space: $ => choice(
      $._space,
      $._newline,
    ),
    _whitespace_line: $ => prec(1, seq(
      choice($._newline, $.parbreak),
      repeat(choice(
        $._space_same_line,
        $.block_comment,
      )),
    )),
    _space_same_line: $ => alias(/[ \t]+/, $.space),
  }
});
