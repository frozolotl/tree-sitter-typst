# tree-sitter-typst
A tree-sitter grammar for the [typst](https://typst.app/) typesetting language with a focus on correctness.

## Goals
* This grammar will be kept as close as possible to the official parser.
  Visual inaccuracies should be considered a bug.
  It is however not a goal to produce the exact same syntax trees.
* Everything should be tested.
* I try to keep the grammar up-to-date. The future will show if I manage to keep that promise.

## Missing Features
- [ ] Code
- [ ] Math
- [ ] Lists
- [ ] Enums
- [ ] Terms

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
