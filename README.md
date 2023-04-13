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
First, clone this repository to a path to your liking.

Append the following configuration to your `~/.config/helix/languages.toml` or `%AppData%\helix\config.toml`.
Make sure you have replaced the path on the last line with the correct one.
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
source = { path = "<path to tree-sitter-typst>" }
```

Now, symlink your query files.
Alternatively, you can copy them to the correct folder, but that would make updating the grammar more difficult.
```sh
$ mkdir -p ~/.config/helix/runtime/queries/
$ ln -s <path to tree-sitter-typst>/queries/ ~/.config/helix/runtime/queries/typst
```

Run the following commands to fetch and build the grammar:
```sh
$ hx --grammar fetch
$ hx --grammar build
```
