(line_comment) @comment.line
(block_comment) @comment.block

(markup) @markup
(escape) @string.escape
(text_shorthand) @punctuation
(smart_quote) @punctuation
(raw) @markup.raw.inline
(link) @markup.link.url
(label) @markup.label
(strong) @markup.bold
(emph) @markup.italic

(heading
  (heading_start) @markup.heading.marker
) @markup.heading