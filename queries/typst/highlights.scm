;; Markup

(markup) @markup
(escape) @string.escape
(text_shorthand) @punctuation
(smart_quote) @punctuation.delimiter
(raw
  (raw_open_inline)) @markup.raw.inline
(raw
  (raw_open_block)) @markup.raw.block
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

(math_shorthand) @operator
(math_delimited_left) @punctuation.bracket
(math_delimited_right) @punctuation.bracket
(math_align_point) @operator

(math_function_call
  [
    (math_field_access
      target: (_) @function)
    (math_field_access
      field: (_) @function.method)
  ])
(math_field_access
  [
    target: (_) @variable
    field: (_) @variable.other.member  
  ])

(math_root
  ["√" "∛" "∜"] @operator)
(math_attach_below
  "_" @operator)
(math_attach_above
  "^" @operator)
(math_frac
  "/" @operator)

((math_text) @constant.numeric.integer
  (#match? @constant.numeric.integer "^\\d+$"))
((math_text) @constant.numeric.float
  (#match? @constant.numeric.float "^\\d+\\.\\d+$"))
(math_ident) @identifier

;; Code

"#" @punctuation.special
[
  (embedded_code_expr_end)
  (embedded_code_stmt_end)
] @punctuation.delimiter

(content_block_open) @punctuation.bracket
(content_block_close) @punctuation.bracket

".." @operator

(let_binding
  [
    "let" @keyword.storage
    "=" @operator
  ])
(pattern
  [
    "_" @variable
    (code_ident) @variable
  ])
(pattern_parenthesized
  (code_ident) @variable)
(pattern_destructuring
  (code_ident) @variable)
(pattern_closure
  name: (_) @function)
(params
  [
    (code_ident) @variable.parameter
    (pattern_spread
      (code_ident) @variable.parameter)
    (pattern_destructuring
      [
        (code_ident) @variable.parameter
        (pattern_spread
          (code_ident) @variable.parameter)
        (pattern_named
          binding: (code_ident) @variable.parameter)
      ])
  ])
(param_named
  name: (_) @variable.parameter)
(pattern_named
  [
    field: (_) @variable.other.member
    binding: (_) @variable 
  ])

"set" @keyword.operator.assignment
(set_rule_field_access
  [
    target: (_) @variable
    field: (_) @variable.other.member  
  ])

"show" @keyword.control.show

"if" @keyword.control.conditional
"else" @keyword.control.conditional
"while" @keyword.control.repeat.while
"for" @keyword.control.repeat.for
(for_loop
  "in" @keyword.control.repeat.in)

"import" @keyword.control.import
"include" @keyword.control.import

[
  "break"
  "continue"
  "return"
] @keyword.control.return

(variable) @variable
(code_ident) @identifier
(code_int) @constant.numeric.integer
(code_float) @constant.numeric.float
(string) @string
[
  "none"
  "auto"
  "true"
  "false"
] @constant.builtin

;; Any

[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket
[
  "."
  ","
  ";"
  ":"
] @punctuation.delimiter

(line_comment) @comment.line
(block_comment) @comment.block

