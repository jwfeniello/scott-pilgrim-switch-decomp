# What an exact match establishes

A credited function must come from compiled C++ and agree with every byte of its
complete original unwind extent after standard ELF relocations. It must have the
same size. The linker checks instruction opcode, relocation width, alignment and
range. GOT references are validated against original RELATIVE relocation entries
and writable load segments. Compiler mergeable constants must agree with immutable
original data. Only these standard relocation fields can change compiled bytes.

There are no raw original instructions in source, assembly fallbacks, immediate
patches, masked acceptance tests, truncation at a return, or partial-body credit.
Structural normalization used during earlier candidate discovery did not establish
an exact match. The public verifier does not use discovery masks.

Sources and generated parameter files are normal build inputs. The compiler
symbol determines the complete candidate extent; the original FDE determines the
complete target extent. `config/builds.json` binds source symbols to original
external addresses and identifies real compiler constants through the source.
It does not contain original machine-code byte sequences.

Repeat builds and changed source constants in the original workspace verified
the acceptance boundary. Examples include altered registry IDs, callback bucket
counts, atomic decrements and lazy hash values. The initial public snapshot is
created by a fresh rebuild of every credited function from this clean repository.

The original FDE inventory covers 15,836,928 bytes. Full executable `.text` spans
16,396,664 bytes. Unattributed bytes remain unmatched, so the denominator never
shrinks to only reconstructed functions. Match addresses are unique and original
function extents do not overlap. Coverage includes infrastructure and library code.

ABI layouts, labels and many prototypes are reconstructed views rather than
recovered original headers. Callback RTTI confirms 238 distinct callable types,
but does not recover the original 800-byte method names. Factory class names can
be established through original object vtables/RTTI without reconstructing their
methods; those names receive no additional byte credit.

Local-model leaf proposals retain a source-review-pending label. All 700 must
pass the same complete byte comparison, but a byte match alone does not prove
their original prototypes or meaningful names. External callees receive no
matching credit from their callers.

The objdiff-format report uses strict zero-or-100 per-function scores. Its
matched-code measure is exact executable coverage; fuzzy candidates receive
zero. Fully linked code and data measures are zero until a game build and data
matching are established. CI verifies current snapshot inputs and report
consistency rather than rebuilding against a redistributed original ELF.
