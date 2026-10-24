**WE ARE LOOKING FOR THE ORIGINAL NINTENDO SWITCH SDK, CLANG FOR NX COMPILER,
BUILD FLAGS, AND LIBRARY VERSIONS USED TO BUILD THIS GAME.**

If you have relevant version information or access to a compatible toolchain,
please [open an issue](https://github.com/jwfeniello/scott-pilgrim-switch-decomp/issues).
Compiler `--version` output, build IDs, SDK version details, and library revision
information would help us identify and reproduce the original build. The exact
SDK/compiler revision is still unknown; SDK 10.6.0 has not been confirmed.
See [compiler profiles](docs/COMPILERS.md) for what currently works.

# Scott Pilgrim Switch decompilation

Matching reconstruction of **Scott Pilgrim vs. The World: The Game – Complete
Edition** for Nintendo Switch.

[Progress on decomp.dev](https://decomp.dev/jwfeniello/scott-pilgrim-switch-decomp)
· [Progress workflow](https://github.com/jwfeniello/scott-pilgrim-switch-decomp/actions/workflows/progress.yml)

**Current locally verified progress: 32,066 exact functions /
3,617,192 bytes / 22.060536% of executable `.text`.** The original `.text` is 16,396,664 bytes.
This includes engine and library infrastructure. The project does not yet rebuild
or boot the complete game. Original method names and many ABI declarations remain
provisional. See the [integration plan](docs/INTEGRATION_PLAN.md) for
the work needed to turn isolated matches into a linked game build.

## Gameplay understanding

[Gameplay components and actor state](docs/GAMEPLAY_COMPONENTS.md) names all 793
recovered component type IDs from factory RTTI. It recovers the cached-component
accessor, `Onyx::Transform` and `Vector3` value semantics, and adds 17 exact
functions, including the player game-over coordinator.

[Code without FDEs](docs/NON_FDE_CODE.md) identifies the 222,892-byte block that
no FDE covers as Nintendo's libcurl 7.64.1 fork and nghttp2 1.38.0. It adds 628
complete functions / 143,744 bytes there. Each extent's boundaries are proven by
calls, tail calls, pointers or adjacent proven functions, and the fork's struct
and configuration changes are reconstructed from the original's offsets.

[Library build evidence](docs/LIBRARY_BUILD_EVIDENCE.md) adds 740 complete
functions / 319,460 bytes. Error-call line numbers identify OpenSSL 1.0.2q; the
font code is FreeType 2.9 built as a single translation unit. A verifier fix binds
unnamed section symbols per section.

[SDK result layout and error descriptions](docs/SDK_RESULT_LAYOUT.md) add five
complete matches / 1,696 bytes. The shared 40-byte result layout also replaces
two generated routines and corrects the request-state candidate and its fixture.

[HUD pools and event lifetimes](docs/HUD_AND_EVENT_LIFETIMES.md) add 127 complete
functions / 42,044 bytes. This includes 64 destructors for 32 RTTI-identified HUD
pool types, component callback readers, reference cleanup, GUID hash tables,
string records, Storm event cleanup, and JSON formatting.

[Startup and graphics recovery](docs/STARTUP_AND_GRAPHICS.md) adds 114 complete
functions / 55,424 bytes for NVN procedure loading, factory registration, network
and graphics defaults, SDK containers, text construction, and static type IDs.

[Component reference operations](docs/COMPONENT_REFERENCE_OPERATIONS.md) add
30 complete matches / 22,712 bytes for handle assignment, component selection,
change notification, and property-based slot initialization.

[HTTP job flow](docs/HTTP_JOB_FLOW.md) adds 45 complete matches / 28,172 bytes
for response-storage construction and request start/wait state transitions.
Another 21 ordered-map helpers add 8,508 bytes; see
[recovered container families](docs/RECOVERED_HASH_MAPS.md).

[Service-response research](docs/SERVICE_RESPONSE_CANDIDATE.md) checks 6,912
bounded delivery/completion cases against the original ARM64 routine, with four
rejected negative controls. Another 960 cases check JSON construction and header
lookup before stream initialization. The case-insensitive text comparator now
byte-matches all 488 bytes; the full response handler remains unmatched and its
complete logging path remains unverified.

[SDK JSON operations](docs/SDK_JSON.md) recover 12 complete matches / 4,888 bytes,
including shared-document initialization, member updates, nested-value copying,
numeric/text setters, and string-array conversion used by the response infrastructure.

[Actor actions](docs/ACTOR_ACTIONS.md) maps the original jump/movement class
hierarchy, shared lifecycle routines, and their player-side dependencies. A
readable jump-phase model passes 4,224 bounded comparisons with the original
ARM64 update. This behavioral research receives no exact-match percentage and
does not establish full-game execution.

[Action dependencies and state dispatch](docs/ACTOR_ACTION_DEPENDENCIES.md)
adds 7,133 bounded comparisons of shared lifecycle, player request remapping,
landing, jump setup, and state transitions. RTTI identifies the Transform and
GraphicsObject dependencies; member-function pointers connect actions to two
specific player state handlers. These reconstructions also receive zero exact credit.

[Player state findings](docs/PLAYER_ACTION_STATES.md) follows those handlers into
game-over coordination and action-state entry/exit. Another 19,824 bounded checks
validate movie-request gating, movement resets, playfield flags, and owned-handle
cleanup. The original `GameOverMovie` literal and catalog RTTI anchor the interpretation.

[Player revival](docs/PLAYER_REVIVAL.md) connects the downed countdown to a
nearby-player recovery scan and the following animation/recovery state. Another
1,120 bounded checks verify candidate ordering, callback-sensitive counters,
spatial boundaries, and complete recovery-handler behavior; no exact credit.

[Gameplay statistics](docs/GAMEPLAY_STATISTICS.md) identifies that path as life
transfer through original event strings and constructor wiring. It maps 28 handlers
and adds 3,240 bounded checks through nine original event handlers, including damage,
purchases, death, life transfer, and reanimation statistics; no exact credit.

[Integrated gameplay code](docs/INTEGRATED_GAMEPLAY.md) now implements that dispatcher
and nine handlers in one typed C++ module. All 3,240 behavior cases also pass through
the rebuilt module. All ten compiled functions now byte-match, and four adjacent
money-statistics callbacks also match. The latest batch adds twelve exact
functions and 1,324 bytes; the existing player-mark match is counted only once.

[Player connections](docs/PLAYER_CONNECTIONS.md) traces action exit, a game-over
timer, collision-scan gating, and selected regions of the shared 13 KB player
update. It adds 1,246 bounded comparisons, explicitly separating complete small
functions from interior-region checks. Animation readiness has a tested candidate
implementation; its player-side binding remains unproven.

[Additional hash-map matches](docs/RECOVERED_HASH_MAPS.md) add seven complete
library functions: pointer-key lookup and rehash policy. Their application-level
types remain unrecovered.

[String-buffer matches](docs/RECOVERED_STRING_BUFFERS.md) add seven complete
seek, put-back, and string-assignment routines from public libc++ source.

[Request-state reconstruction](docs/REQUEST_STATE_CANDIDATE.md) adds a typed
688-byte candidate and 960 bounded original-versus-compiled checks. It still
differs in stack placement and receives zero exact credit. Original RTTI now
identifies thirteen Storm matchmaking specializations, and their complete
destructors add **13 exact functions / 3,172 bytes**.

## Contributing

**HUMAN AND AI-ASSISTED CONTRIBUTIONS ARE WELCOME.** Both follow the same
review and verification standards. Useful contributions include:

- Reconstructing engine, gameplay, or library functions in readable C/C++.
- Recovering class layouts, method names, and function signatures with evidence.
- Identifying compiler settings, SDK revisions, and upstream library versions.
- Improving verification tools, documentation, and source review.

Open an issue to share findings or submit a focused pull request. For function
reconstructions, include the original address and complete function size, compiler
version and flags, verification commands and results, and any uncertain ABI or
class assumptions. Mention AI assistance when used so reviewers understand how
the source was produced; verify generated claims and code before submitting.

Exact-match credit requires the complete original function to match byte for
byte after checked standard ELF relocations. Similarity scores and partial
matches receive no credit. Close candidates can go in `src/wip/` with their
remaining differences documented. New matching code needs repeat-build and
deliberately incorrect-source controls; changes to matching inputs require a
fresh full verification before updating progress. See [methodology](docs/METHODOLOGY.md)
and the build commands below.

Submit reconstructed source and reproducible evidence. Keep original game files,
assets, proprietary SDK files, and compiler installations outside the repository.

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
original FDE function extent, or of a proven extent in code without FDEs
(`config/non_fde_functions.tsv`, rechecked against the original). It rejects extra compiler bytes as well as missing
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
unmatched functions, together with the 628 proven extents in code without FDEs.
The other 415,992 bytes outside FDEs stay unmatched in the denominator. Data matching is not tracked yet. The fully linked measure is
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
build. These candidates are not promoted by a similarity score. The player object-list
helper has 128 bounded normal-path comparisons against the original; see
[player helper findings](docs/PLAYER_OBJECT_LIST.md). It also receives zero
exact-match credit.

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
