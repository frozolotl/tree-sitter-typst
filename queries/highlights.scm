;; Markup

(markup) @markup
(escape) @string.escape
(text_shorthand) @punctuation
(smart_quote) @punctuation.delimiter
(raw) @markup.raw.inline
(link) @markup.link.url
(label) @markup.label
(strong) @markup.bold
(emph) @markup.italic

(heading
  (heading_start) @markup.heading.marker
) @markup.heading

;; Math

(equation
  "$" @punctuation.special)

(math_shorthand) @punctuation
(math_align_point) @operator

(math_field_access
  "." @punctuation.delimiter)
(math_function_call
  ["(" ")"] @punctuation.bracket)
(math_args
  ["," ";"] @punctuation.delimiter)
(math_arg_named
  ":" @punctuation.delimiter)

((math_text) @constant.numeric.integer
  (#match? @constant.numeric.integer "^\\d+$"))
((math_text) @constant.numeric.float
  (#match? @constant.numeric.float "^\\d+\\.\\d+$"))
(math_ident) @identifier

;; Code

(string) @string

;; Comments

(line_comment) @comment.line
(block_comment) @comment.block

