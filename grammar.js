const LEAF = {
  newline: /\r\n|[\n\x0B\x0C\r\x85\u2028\u2029]/,
  number_unit: /pt|em|mm|cm|in|deg|rad|em|fr|%/,
};

let trivia = $ => optional($._trivia);
let trivia_same_line = $ => optional($._trivia_same_line);
let delimitedTrivia = ($, delimiter, item) => optional(seq(
  item,
  repeat(seq(
    trivia($),
    delimiter,
    trivia($),
    item,
  )),
  optional(seq(
    trivia($),
    delimiter,
  )),
));

module.exports = grammar({
  name: 'typst',

  extras: $ => [],

  word: $ => $.code_ident,

  externals: $ => [
    $._error_sentinel,
    $._token_eof,
    $._space,
    $.parbreak,
    $._newline,
    $.heading_start,
    $._indent,
    $._dedent,
    $._start_line,
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
      $.embedded_code_expr,
      $._code_expr_or_stmt,
    ],
    [
      $.code_parenthesized,
      'array',
      'dict',
    ],
    [
      $.named_value,
      $._code_expr,
    ],
    [
      $.named_value,
      $.variable,
    ],
    [
      $.pattern_closure,
      $.pattern,
    ],
    [
      $.pattern_parenthesized,
      $.pattern_destructuring,
    ],
    [
      $.pattern_named,
      'pattern_destructuring',
    ],
    [
      $.param_named,
      'params',
    ],
  ],

  conflicts: $ => [
    [
      $.variable,
      $.code_args_named,
    ],
  ],

  rules: {
    source_file: $ => optional($.markup),

    // Markup

    markup: $ => prec.left(repeat1(choice(
      $._markup_expr_base,
      $.space,
      $.parbreak,
      $.heading,
    ))),
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

      $.strong,
      $.emph,
      // TODO: SyntaxKind::ListMarker
      // TODO: SyntaxKind::EnumMarker
      // TODO: SyntaxKind::TermMarker

      $.equation,
      $.embedded_code_expr,
    ),

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

    strong: $ => prec.right(seq(
      $._delim_strong,
      field('inner', optional($._markup_no_parbreak)),
      $._delim_strong,
    )),
    emph: $ => prec.right(seq(
      $._delim_emph,
      field('inner', optional($._markup_no_parbreak)),
      $._delim_emph,
    )),
    _markup_no_parbreak: $ => prec.left(alias(
      repeat1(choice(
        $._markup_expr_base,
        $.space,
        $.heading,
      )),
      $.markup,
    )),

    heading: $ => prec.right(seq(
      $.heading_start,
      choice(
        $._token_eof,
        seq(
          $._space_same_line,
          choice(
            $._token_eof,
            field('inner', optional($._markup_heading)),
          ),
        ),
      ),
    )),
    _markup_heading: $ => prec.right(alias(
      repeat1(choice(
        $._markup_expr_base,
        $._space_same_line,
      )),
      $.markup,
    )),

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
      field('name', $.math_ident),
      seq(
        field('object', $.math_field_access),
        '.',
        field('field', $._math_text_ident),
      ),
    ),
    math_function_call: $ => seq(
      field('function', $.math_field_access),
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

    embedded_code_expr: $ => seq(
      '#',
      choice(
        $._code_expr,
        seq(
          $._code_expr_or_stmt,
          choice(
            ';',
            $._token_eof,
            $._newline,
          ),
        ),
      ),
    ),

    _code_expr_or_stmt: $ => choice(
      $._code_expr,
      $._code_stmt,
    ),
    _code_stmt: $ => choice(
      $.let_binding,
      $.set_rule,
      $.show_rule,
    ),
    _code_expr: $ => (choice(
      $.code_block,
      $.content_block,
      $.code_parenthesized,
      $.equation,

      $.array,
      $.dict,

      $.conditional,

      $.variable,
      $.code_number,
      $.string,
      $.label,
      $.raw,

      'none',
      'auto',
      'true',
      'false',
    )),

    _block: $ => choice(
      $.code_block,
      $.content_block,
    ),
    code_block: $ => seq(
      '{',
      trivia($),
      repeat(seq(
        $._code_expr_or_stmt,
        choice(
          ";",
          $._newline,
        ),
      )),
      trivia($),
      '}',
    ),
    content_block: $ => seq(
      '[',
      $._start_line,
      optional(field('inner', $.markup)),
      ']',
    ),
    code_parenthesized: $ => seq(
      '(',
      trivia($),
      field('inner', $._code_expr_or_stmt),
      trivia($),
      ')',
    ),

    array: $ => prec('array', seq(
      '(',
      trivia($),
      delimitedTrivia($,
        ',',
        prec('array', choice(
          $._code_expr_or_stmt,
          $.spread,
        )),
      ),
      trivia($),
      ')',
    )),
    dict: $ => prec('dict', seq(
      '(',
      trivia($),
      optional(seq(
        ':',
        trivia($),
      )),
      delimitedTrivia($,
        ',',
        prec('dict', choice(
          $.named_value,
          $.spread,
        )),
      ),
      trivia($),
      ')',
    )),
    named_value: $ => seq(
      field('key', choice(
        $.string,
        $.code_ident,
      )),
      trivia($),
      ':',
      trivia($),
      field('value', $._code_expr_or_stmt),
    ),
    spread: $ => prec.right(seq(
      '..',
      optional(seq(
        trivia($),
        $._code_expr_or_stmt
      )),
    )),

    let_binding: $ => prec.right(seq(
      'let',
      trivia($),
      choice(
        field('pattern', $.pattern),
        seq(
          field('pattern', choice(
            $.pattern_destructuring,
            $.pattern_closure,
            $.pattern,
          )),
          trivia_same_line($),
          '=',
          trivia_same_line($),
          field('expr', $._code_expr_or_stmt),
        ),
      ),
    )),
    pattern: $ => choice(
      $.pattern_parenthesized,
      '_',
      $.code_ident,
    ),
    pattern_parenthesized: $ => seq(
      '(',
      trivia($),
      $.code_ident,
      trivia($),
      ')',
    ),
    pattern_destructuring: $ => seq(
      '(',
      trivia($),
      delimitedTrivia($,
        ',',
        prec('pattern_destructuring', choice(
          $.code_ident,
          $.pattern_spread,
          $.pattern_named,
        )),
      ),
      trivia($),
      ')',
    ),
    pattern_spread: $ => seq(
      '..',
      trivia($),
      $.code_ident,
    ),
    pattern_named: $ => seq(
      field('field', $.code_ident),
      trivia($),
      ':',
      trivia($),
      field('binding', choice('_', $.code_ident)),
    ),
    pattern_closure: $ => seq(
      field('name', $.code_ident),
      field('params', $.params),
    ),
    params: $ => seq(
      '(',
      trivia($),
      delimitedTrivia($,
        ',',
        prec('params', choice(
          $.code_ident,
          $.pattern_spread,
          $.param_named,
          $.pattern_destructuring,
        )),
      ),
      trivia($),
      ')',
    ),
    param_named: $ => seq(
      field('name', $.code_ident),
      trivia($),
      ':',
      trivia($),
      field('value', $._code_expr_or_stmt),
    ),

    set_rule: $ => prec.left(seq(
      'set',
      trivia_same_line($),
      field('target', $.set_rule_field_access),
      trivia_same_line($),
      field('arguments', $.code_args),
      optional(seq(
        trivia_same_line($),
        'if',
        trivia_same_line($),
        field('condition', $._code_expr_or_stmt),
      ))
    )),
    set_rule_field_access: $ => choice(
      field('name', $.code_ident),
      seq(
        field('object', $.set_rule_field_access),
        trivia($),
        '.',
        trivia_same_line($),
        field('field', $.code_ident),
      ),
    ),

    code_args: $ => prec.left(choice(
      seq(
        '(',
        trivia($),
        delimitedTrivia($,
          ',',
          choice(
            $._code_expr_or_stmt,
            $.code_args_named,
            $.spread,
          ),
        ),
        trivia($),
        ')',

        repeat($.content_block),
      ),
      repeat1($.content_block),
    )),
    code_args_named: $ => seq(
      field('name', $.code_ident),
      trivia($),
      ':',
      trivia($),
      field('value', $._code_expr_or_stmt),
    ),

    show_rule: $ => seq(
      'show',
      optional(seq(
        trivia_same_line($),
        field('selector', $._code_expr_or_stmt),
      )),
      trivia_same_line($),
      ':',
      trivia_same_line($),
      field('transform', $._code_expr_or_stmt),
    ),

    conditional: $ => prec.right(seq(
      'if',
      trivia_same_line($),
      $._code_expr_or_stmt,
      trivia_same_line($),
      $._block,
      optional(seq(
        trivia_same_line($),
        'else',
        trivia_same_line($),
        choice(
          $.conditional,
          $._block,
        ),
      )),
    )),

    variable: $ => $.code_ident,
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
    _trivia_same_line: $ => choice(
      $._space_same_line,
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
    _space_same_line: $ => alias($._space, $.space),
  }
});
