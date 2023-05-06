const LEAF = {
  newline: /\r\n|[\n\x0B\x0C\r\x85\u2028\u2029]/,
};

let trivia = $ => optional($._trivia);

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

      // TODO: SyntaxKind::Hashtag
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
      choice(
        $.heading,
      ),
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
    math: $ => repeat1($._math_expr),
    _math_expr: $ => choice(
      $._trivia,

      // TODO: SyntaxKind::Hashtag
      $.math_text,
      // FIXME: check `maybe_delimited`
      $.math_shorthand,
      $.linebreak,
      $.math_align_point,
      $.escape,
      $.string,

      $.math_field_access,
      $.math_function_call,
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
    _math_shorthand_open: $ => alias(choice('[|', '||'), $.math_shorthand),
    _math_shorthand_close: $ => alias(choice('|]', '||'), $.math_shorthand),
    math_align_point: $ => '&',

    math_field_access: $ => seq(
      $.math_ident,
      repeat(seq(
        '.',
        $._math_text_ident,
      )),
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

    content_block: $ => seq(
      '[',
      optional($.markup),
      ']',
    ),

    code_ident: $ => /[_\p{XID_Start}][\-_\p{XID_Continue}]*/,
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
