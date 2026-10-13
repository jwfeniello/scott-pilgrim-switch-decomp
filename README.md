# Scott Pilgrim Switch decompilation

Matching reconstruction of **Scott Pilgrim vs. The World: The Game – Complete
Edition** for Nintendo Switch.

[Progress on decomp.dev](https://decomp.dev/jwfeniello/scott-pilgrim-switch-decomp)
· [Progress workflow](https://github.com/jwfeniello/scott-pilgrim-switch-decomp/actions/workflows/progress.yml)

**Current locally verified progress: 28,919 exact functions / 2,806,492 bytes /
17.116238% of executable `.text`.** The original `.text` is 16,396,664 bytes.
This includes engine and library infrastructure. The project does not yet rebuild
or boot the complete game. Original method names and many ABI declarations remain
provisional.

## Build and verify

The original game ELF is supplied locally. Its required SHA-256 is
`ea95638e6d6aaa0dc6cddd552a9366799aa1ec3bc07ee201f23f6c151103f5b8`.
The retail revision has not yet been independently identified.

Verification uses Python 3.10+ (standard library only) and public **Clang 7.0.1**
and **Clang 8.0.1**. Compiler binaries are supplied separately; see
[compiler profiles](docs/COMPILERS.md). No Nintendo SDK installation is required
for these isolated function comparisons.

From the repository root, with your own paths:

```powershell
python tools/verify.py --original "C:\path\Scott_Switch.elf" --clang7 "C:\path\llvm701\bin\clang++.exe" --clang8 "C:\path\llvm801\bin\clang++.exe" --build-dir "D:\scott-build"
python tools/report.py
python -m unittest discover -s tools -p "test_*.py" -v
```

The verifier compiles ordinary C and C++, resolves checked standard ELF relocations
against original symbol bindings, and compares every byte of each complete
original FDE function extent. It rejects extra compiler bytes as well as missing
or different bytes. Source code is compiled, never executed. Outputs go to the
chosen build directory. `--jobs 4` optionally runs four compiler processes;
byte comparisons and receipt order remain deterministic. `--only BUILD_ID` checks one entry from
`config/builds.json` without updating the complete snapshot.

## Progress reports

```powershell
python tools/report.py --out build/report.json
```

This exports the committed, locally verified snapshot in objdiff v2 format.
It checks the source, generated includes, verification tools and build
configuration hashes first. Changing a matching input requires another full
`tools/verify.py` run before the report can be published.

GitHub Actions validates the snapshot and the report format, then uploads
`switch_report/report.json` for [decomp.dev](https://decomp.dev). CI publishes
local verification evidence; it does not receive the original game binary or
perform a new original-byte comparison. See [publication setup](docs/PUBLISHING.md).

All 53,675 original `.text` FDE functions appear in the report, including
unmatched functions. Another 559,736 bytes outside these FDEs stay unmatched in
the denominator. Data matching is not tracked yet. The fully linked measure is
zero because there is no complete linked game build. Unmatched functions are
grouped by address for navigation; these groups do not claim original source-file
boundaries.

## Reconstructions

| Family | Exact functions | Exact bytes |
| --- | ---: | ---: |
| Component registry startup | 1 | 96,172 |
| Engine registry startup | 1 | 78,712 |
| Component lookup/accessors | 32 | 26,368 |
| Small factories | 87 | 4,852 |
| Tracked callback removal | 238 | 190,400 |
| Reference pair release | 100 | 68,000 |
| Lazy hexadecimal type hashes | 760 | 197,600 |
| Lazy type registration | 753 | 177,708 |
| One-time type registration | 649 | 155,760 |
| Factory construction and ownership cleanup | 489 | 93,888 |
| Callback identity comparison | 770 | 61,600 |
| Callback cloning | 726 | 46,464 |
| Bound member invocation | 689 | 19,292 |
| Deleting destructor wrappers | 1,193 | 28,632 |
| Callback owner cleanup | 271 | 26,016 |
| Static factory construction | 140 | 25,760 |
| Guarded callback dispatch | 481 | 146,224 |
| Reference member and set destruction | 250 | 207,804 |
| Serializer, ActionStep methods and probes | 6 | 664 |
| Local-model leaf proposals | 700 | 8,052 |

The 700 leaf proposals are exact machine-code matches whose ABI/source review
remains pending. Exact bytes do not establish the original prototype, class
ownership or readable source quality. See [methodology](docs/METHODOLOGY.md).

The latest engine families add 3,750 complete functions / 500,192 bytes using
ordinary C++ templates and Clang 8.0.1. Every instance matches; repeat builds
and deliberately incorrect source controls validate the comparison. See
[engine family findings](docs/ENGINE_FAMILIES.md),
[7% milestone findings](docs/TYPE_AND_CALLBACK_FAMILIES.md) and
[lazy registration findings](docs/LAZY_TYPE_REGISTRATION.md).

`src/wip/` preserves close reconstructions with **zero** exact-match credit.
The metadata initializer remains 13 instruction words away in its last workspace
build. These candidates are not promoted by a similarity score.

## Layout

- `src/`: matching family sources and generated template/include parameters.
- `src/generated/`: individually compiled local-model leaf proposals.
- `src/wip/`: incomplete candidates.
- `config/`: original function metadata and explicit build/link recipes.
- `progress/verified.json`: current full-byte verification receipts, without code bytes.
- `tools/`: portable ELF verification, report generation and publication checks.
- `orig/`: local original ELF; ignored by Git.

The repository contains reconstructed source and metadata. Game binaries,
assets, proprietary SDK files and compiler installations are not distributed.

Reconstructed project source and tools are licensed under [MIT](LICENSE).
Vendored library sources and headers retain their upstream licenses; see
[third-party notices](THIRD_PARTY_NOTICES.md).

The requested 15% milestone is reached. See [milestone findings](docs/FIFTEEN_PERCENT.md)
and [C++ ABI recovery](docs/LEAF_RECOVERY.md) for validation and declaration limits.

The next requested target is 25%. See [ongoing findings](docs/TWENTY_FIVE_PERCENT.md)
for the current verified checkpoint and library source limitations.
