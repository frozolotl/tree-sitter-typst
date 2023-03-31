const LEAF = {
  newline: /\r\n|[\n\x0B\x0C\r\x85\u2028\u2029]/,
};

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

  rules: {
    source_file: $ => optional($.markup),

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
      $.shorthand,
      $.smart_quote,
      $.raw,
      $.link,
      $.label,

      // TODO: SyntaxKind::Hashtag
      // TODO: SyntaxKind::ListMarker
      // TODO: SyntaxKind::EnumMarker
      // TODO: SyntaxKind::TermMarker
      // TODO: SyntaxKind::RefMarker
      // TODO: SyntaxKind::Dollar
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
    escape: $ => /\\u\{[a-fA-F0-9]{1,4}\}/,
    shorthand: $ => token(choice(
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
      field('text', /[\-_\p{XID_Continue}]+/),
      '>',
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

    ident: $ => /[_\p{XID_Start}][\-_\p{XID_Continue}]*/,

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

