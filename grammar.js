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

  word: $ => $.ident,

  rules: {
    source_file: $ => repeat($._markup_expr),
    _markup_expr: $ => choice(
      $.whitespace,
      $.parbreak,
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
    // Second character class does not have a trailing dot.
    link: $ => /https?:\/\/[0-9a-zA-Z~\/%?#&+='\.,;]*[0-9a-zA-Z~\/%?#&+=',;]/,
    label: $ => seq(
      '<',
      field('text', /[-_\p{XID_Continue}]+/),
      '>',
    ),

    ident: $ => /[_\p{XID_Start}][-_\p{XID_Continue}]*/,

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

