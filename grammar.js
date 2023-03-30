const LEAF = {
  newline: /\r\n|[\n\x0B\x0C\r\x85\u2028\u2029]/,
};

module.exports = grammar({
  name: 'typst',

  extras: $ => [],

  externals: $ => [
    $._token_eof,
    $.space,
    $.parbreak,
    $._indent,
    $._dedent,
    $.raw,
    $._link_end,
    $.text,
    $._delim_strong,
    $._delim_emph,
    $.heading_start,
  ],

  rules: {
    source_file: $ => optional($.markup),

    markup: $ => repeat1(choice(
        $._markup_expr_base,
        $.space,
        $.parbreak,
        $.strong,
        $.emph,
        $.heading,
    )),
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

    _markup_expr_text: $ => alias(
      token(choice(
        '[',
        ']',
        repeat1('='),
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

    strong: $ => prec.left(seq(
      $._delim_strong,
      field('inner', $._markup_strong),
      $._delim_strong,
    )),
    _markup_strong: $ => alias(
      repeat1(choice(
        $._markup_expr_base,
        $.space,
        $.emph,
        $.heading,
      )),
      $.markup,
    ),
    emph: $ => prec.left(seq(
      $._delim_emph,
      field('inner', $._markup_emph),
      $._delim_emph,
    )),
    _markup_emph: $ => alias(
      repeat1(choice(
        $._markup_expr_base,
        $.space,
        $.strong,
        $.heading,
      )),
      $.markup,
    ),

    // Looks ugly, but seems to work.
    heading: $ => seq(
      $.heading_start,
      choice(
        $._token_eof,
        seq(
          $._space_no_newline,
          choice(
            $._token_eof,
            seq(
              field('inner', $._markup_no_newline),
              choice(
                $._token_eof,
                LEAF.newline,
              ),
            ),
          ),
        ),
      ),
    ),
    _markup_no_newline: $ => alias(
      prec.left(repeat1(choice(
        $._markup_expr_base,
        $._space_no_newline,
      ))),
      $.markup,
    ),

    ident: $ => /[_\p{XID_Start}][\-_\p{XID_Continue}]*/,

    line_comment: $ => token(seq('//', /.*/)),
    block_comment: $ => seq(
      '/*',
      repeat(choice(
        prec(1, choice(
          $.line_comment,
          $.block_comment,
        )),
        /./,
        LEAF.newline,
      )),
      choice('*/', $._token_eof),
    ),

    _space_no_newline: $ => alias(/[ \t]+/, $.space),
  }
});

