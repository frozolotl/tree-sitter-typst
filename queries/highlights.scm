(line_comment) @comment.line
(block_comment) @comment.block

(ERROR) @string
(text) @text.literal @keyword
(escape) @string.escape
(shorthand) @punctuation
(smart_quote) @punctuation
(raw) @markup.raw.inline
(link) @markup.link.url
(label) @markup.label

(strong) @markup.bold
(emph) @markup.italic