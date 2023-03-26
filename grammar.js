const LEAF = {
  newline: /\r\n|[\n\x0B\x0C\r\x85\u2028\u2029]/,
};

module.exports = grammar({
  name: 'typst',

  extras: $ => [],

  externals: $ => [
    $.eof,
    $.raw,
    $.text,
  ],

  rules: {
    source_file: $ => markup($, [
      $.parbreak,
    ]),

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
    // FIXME: Trailing dots are not handled correctly.
    link: $ => /https?:\/\/(\.?[0-9a-zA-Z~\/%?#&+=',;])*/,
    label: $ => seq(
      '<',
      field('text', /[\-_\p{XID_Continue}]+/),
      '>',
    ),

    // FIXME: These should not apply within words.
    strong: $ => prec.left(seq(
      '*',
      field('inner', markup($, [])),
      '*',
    )),
    emph: $ => prec.left(seq(
      '_',
      field('inner', markup($, [])),
      '_',
    )),

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
      choice('*/', $.eof),
    ),

    whitespace: $ => token(choice(
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

function markup($, additional_children) {
  return alias(repeat(markup_expr($, additional_children)), 'markup');
}

function markup_expr($, additional_children) {
  return choice(
    $.whitespace,
    $.line_comment,
    $.block_comment,

    $.text,
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
    // TODO: SyntaxKind::HeadingMarker
    // TODO: SyntaxKind::ListMarker
    // TODO: SyntaxKind::EnumMarker
    // TODO: SyntaxKind::TermMarker
    // TODO: SyntaxKind::RefMarker
    // TODO: SyntaxKind::Dollar

    // TODO: Those tokens that should actually be Text here.

    ...additional_children
  );
}
