const LEAF = {
  newline: /\r\n|[\n\x0B\x0C\r\x85\u2028\u2029]/,
};

module.exports = grammar({
  name: 'typst',

  extras: $ => [],

  externals: $ => [
    // $.text,
    $.eof,
  ],

  word: $ => $.ident,

  rules: {
    source_file: $ => repeat($._markup_expr),
    _markup_expr: $ => choice(
      $.line_comment,
      $.block_comment,
      $.parbreak,
      $.whitespace,
      $.text,
    ),

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

    ident: $ => /[_\p{XID_Start}][-_\p{XID_Continue}]*/,
    text: $ => /[^\t\n\x0B\x0C\r\\\[\]{}~'"*_:`$<>#]+/,

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
    linebreak: $ => token(seq(
      '\\',
      choice(LEAF.newline, /\s/),
    )),
  }
});

