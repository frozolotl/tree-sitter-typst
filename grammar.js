const LEAF = {
  any: /\s|\S/,
  newline: /\r\n|[\n\x0B\x0C\r\x85\u2028\u2029]/,
  number_unit: /pt|em|mm|cm|in|deg|rad|em|fr|%/,
};

let trivia = $ => repeat($._trivia);
let trivia_same_line = $ => repeat($._trivia_same_line);
let delimitedTrivia = ($, delimiter, item) => optional(delimitedTrivia1($, delimiter, item));
let delimitedTrivia1 = ($, delimiter, item) => seq(
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
);

module.exports = grammar({
  name: 'typst',

  extras: $ => [],

  word: $ => $.code_ident,

  externals: $ => [
    $._error_sentinel,
    $._token_eof,

    $._space,
    $.parbreak,
    $._one_newline,
    $._any_newline,
    $.heading_start,
    $._indent,
    $._dedent,
    $.content_block_open,
    $.content_block_close,
    $._block_comment_start,

    $.embedded_code_expr_end,
    $.embedded_code_stmt_end,

    $.raw_open_inline,
    $.raw_open_block,
    $._raw_close,

    $._link_end,
    $.text,
    $._delim_strong,
    $._delim_emph,
  ],

  precedences: $ => [
    [
      'math_args',
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
    [$._math_expr],
    [
      $.math_args,
      $._math_expr,
    ],
    [
      $.variable,
      $.code_args_named,
    ],
  ],

  rules: {
    source_file: $ => optional($.markup),

    // Markup

    markup: $ => repeat1(choice(
      $._markup_expr_base,
      $._space,
      $._one_newline,
      $.parbreak,
      $.heading,
    )),
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
      token(choice(
        '[',
        ']',
        '=',
        '-',
        '+',
        '/',
        '*',
        '_',
        ':',
      )),
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
    raw: $ => seq(
      choice(
        seq(
          $.raw_open_block,
          field('language', $.code_ident),
          field('body', optional($.raw_body)),
        ),
        seq(
          choice(
            $.raw_open_inline,
            $.raw_open_block,
          ),
          field('body', optional($.raw_body)),
        ),
      ),
      $._raw_close,
    ),
    raw_body: $ => repeat1(LEAF.any),
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
        $._space,
        $._one_newline,
        $.heading,
      )),
      $.markup,
    )),

    heading: $ => prec.right(seq(
      $.heading_start,
      choice(
        $._token_eof,
        seq(
          $._space,
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
        $._space,
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
      '*', '\'', '-', '||',
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
    math_align_point: $ => '&',

    math_field_access: $ => seq(
      field('target', $.math_ident),
      repeat(seq(
        '.',
        field('field', $._math_text_ident),
      )),
    ),
    math_function_call: $ => seq(
      field('function', $.math_field_access),
      field('args', $.math_args),
    ),
    math_args: $ => seq(
      '(',
      repeat(seq(
        optional(choice(
          $.math,
          seq(
            trivia($),
            $.math_arg_named,
          ),
        )),
        choice(',', ';'),
      )),
      optional(choice(
        $.math,
        seq(
          trivia($),
          $.math_arg_named,
        ),
      )),
      ')',
    ),
    math_arg_named: $ => seq(
      field('name', $._math_text_ident),
      ':',
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
        $._embedded_code_expr,
        $._embedded_code_stmt,
      ),
    ),
    _embedded_code_expr: $ => seq(
      $._code_expr,
      optional($.embedded_code_expr_end),
    ),
    _embedded_code_stmt: $ => seq(
      $._code_stmt,
      trivia_same_line($),
      $.embedded_code_stmt_end,
    ),

    _code_expr_or_stmt: $ => choice(
      $._code_expr,
      $._code_stmt,
    ),
    _code_stmt: $ => choice(
      $.let_binding,
      $.set_rule,
      $.show_rule,
      $.module_import,
      $.module_include,
    ),
    _code_expr: $ => choice(
      $.code_block,
      $.content_block,
      $.code_parenthesized,
      $.equation,

      $.array,
      $.dict,

      $.conditional,
      $.while_loop,
      $.for_loop,
      'break',
      'continue',
      $.return_stmt,

      $.variable,
      $.code_int,
      $.code_float,
      $.string,
      $.label,
      $.raw,

      'none',
      'auto',
      'true',
      'false',
    ),

    _block: $ => choice(
      $.code_block,
      $.content_block,
    ),
    code_block: $ => seq(
      '{',
      trivia($),
      optional($._code_block_inner),
      '}',
    ),
    _code_block_inner: $ => repeat1(seq(
      $._code_expr_or_stmt,
      choice(
        ';',
        $._any_newline,
      ),
      trivia($),
    )),
    content_block: $ => seq(
      $.content_block_open,
      optional(field('inner', $.markup)),
      $.content_block_close,
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
      optional(seq(
        trivia($),
        delimitedTrivia1($,
          ',',
          prec('array', choice(
            $._code_expr_or_stmt,
            $.spread,
          )),
        ),
      )),
      trivia($),
      ')',
    )),
    dict: $ => prec('dict', seq(
      '(',
      optional(seq(
        trivia($),
        ':',
      )),
      optional(seq(
        trivia($),
        delimitedTrivia1($,
          ',',
          prec('dict', choice(
            $.named_value,
            $.spread,
          )),
        ),
      )),
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
      trivia_same_line($),
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
      optional(seq(
        delimitedTrivia1($,
          ',',
          prec('pattern_destructuring', choice(
            $.code_ident,
            $.pattern_spread,
            $.pattern_named,
          )),
        ),
        trivia($),
      )),
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
      optional(seq(
        delimitedTrivia1($,
          ',',
          prec('params', choice(
            $.code_ident,
            $.pattern_spread,
            $.param_named,
            $.pattern_destructuring,
          )),
        ),
        trivia($),
      )),
      ')',
    ),
    param_named: $ => seq(
      field('name', $.code_ident),
      trivia($),
      ':',
      trivia($),
      field('value', $._code_expr_or_stmt),
    ),

    set_rule: $ => prec.right(seq(
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
      )),
    )),
    set_rule_field_access: $ => prec.left(seq(
      field('target', $.code_ident),
      repeat(seq(
        trivia($),
        '.',
        trivia_same_line($),
        field('field', $.code_ident),
      ))
    )),

    code_args: $ => prec.left(choice(
      seq(
        '(',
        trivia($),
        optional(seq(
          delimitedTrivia1($,
            ',',
            choice(
              $._code_expr_or_stmt,
              $.code_args_named,
              $.spread,
            ),
          ),
          trivia($),
        )),
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
      field('condition', $._code_expr_or_stmt),
      trivia_same_line($),
      field('if_body', $._block),
      optional(seq(
        trivia($),
        'else',
        trivia_same_line($),
        field('else_body', choice(
          $.conditional,
          $._block,
        )),
      )),
    )),

    while_loop: $ => seq(
      'while',
      trivia_same_line($),
      field('condition', $._code_expr_or_stmt),
      trivia_same_line($),
      field('body', $._block),
    ),
    for_loop: $ => seq(
      'for',
      trivia_same_line($),
      field('pattern', $.pattern),
      trivia_same_line($),
      'in',
      trivia_same_line($),
      field('iter', $._code_expr_or_stmt),
      trivia_same_line($),
      field('body', $._block),
    ),

    module_import: $ => prec.right(seq(
      'import',
      trivia_same_line($),
      field('source', $._code_expr_or_stmt),
      optional(seq(
        trivia_same_line($),
        ':',
        trivia_same_line($),
        choice(
          '*',
          delimitedTrivia($,
            ',',
            field('item', $.code_ident),
          ),
        ),
      )),
    )),
    module_include: $ => seq(
      'include',
      trivia_same_line($),
      field('source', $._code_expr_or_stmt),
    ),

    return_stmt: $ => prec.right(seq(
      'return',
      optional(seq(
        trivia_same_line($),
        field('argument', $._code_expr_or_stmt),
      ))
    )),

    variable: $ => $.code_ident,
    code_ident: $ => /[_\p{XID_Start}][\-_\p{XID_Continue}]*/,
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
            /\.[0-9]+/,
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
      $._space,
      $._one_newline,
      $._any_newline,
      $.parbreak,
      $.line_comment,
      $.block_comment,
    ),
    _trivia_same_line: $ => choice(
      $._space,
      $.block_comment,
    ),
    line_comment: $ => token(seq('//', /.*/)),
    block_comment: $ => seq(
      $._block_comment_start,
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
  }
});
