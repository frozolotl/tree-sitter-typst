const LEAF = {
  newline: /\r\n|[\n\x0B\x0C\r\x85\u2028\u2029]/,
};

module.exports = grammar({
  name: 'typst',

  extras: $ => [],

  externals: $ => [
    $._token_eof,
    $.raw,
    $._link_end,
    $.text,
  ],

  rules: {
    source_file: $ => markup($),

    _markup_expr_text: $ => alias(token(choice(
      '[',
      ']',
      repeat1('='),
      '-',
      '+',
      '/',
    )), $.text),
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

    // FIXME: These should not apply within words.
    strong: $ => prec.left(seq(
      '*',
      field('inner', markup($, {
        minus: [$.parbreak],
      })),
      '*',
    )),
    emph: $ => prec.left(seq(
      '_',
      field('inner', markup($, {
        minus: [$.parbreak],
      })),
      '_',
    )),

    heading: $ => seq(
      repeat1('='),
      choice(
        $._token_eof,
        repeat1(choice(
          $.space,
          $.parbreak,
          $.line_comment,
          $.block_comment,
        )),
      ),
      markup($, {
        minus: [
          $.label,
          $._markup_expr_text,
        ],
      })
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

    space: $ => token(choice(
      seq(
        /[ \t]+/,
        optional(LEAF.newline),
      ),
      seq(
        /[ \t]*/,
        LEAF.newline,
      ),
    )),
    parbreak: $ => token(seq(
      /[ \t]*/,
      LEAF.newline,
      repeat1(LEAF.newline),
    )),
  }
});

function markup($, options) {
  //return alias(repeat(markup_expr($, options)), $.markup);
  return repeat(markup_expr($, options));
}

function markup_expr($, options) {
  options = {
    plus: [],
    minus: [],
    ...options,
  };
  let choices = [
    $.space,
    $.parbreak,
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
    $.strong,
    $.emph,
    // $.heading,
    // TODO: SyntaxKind::ListMarker
    // TODO: SyntaxKind::EnumMarker
    // TODO: SyntaxKind::TermMarker
    // TODO: SyntaxKind::RefMarker
    // TODO: SyntaxKind::Dollar
    ...options.plus,
  ].filter(x => !options.minus.includes(x));
  return choice(...choices);
}
