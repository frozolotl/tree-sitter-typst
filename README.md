# tree-sitter-typst
A [typst](https://typst.app/) parser for tree-sitter.

## Goals
This grammar will be kept as close as possible to the official parser.
Visual inaccuracies should be considered a bug.
It is however not a goal to produce the exact same syntax trees.

## Usage
### Helix
Append the following configuration to your `~/.config/helix/languages.toml` or `%AppData%\helix\config.toml`.
```toml
[[language]]
name = "typst"
scope = "source.typst"
injection-regex = "^typst$"
file-types = ["typ"]
comment-token = "//"
indent = { tab-width = 2, unit = "  " }
roots = []
language-server = { command = "typst-lsp" }

[[grammar]]
name = "typst"
source = { git = "https://github.com/frozolotl/tree-sitter-typst.git" }
```
