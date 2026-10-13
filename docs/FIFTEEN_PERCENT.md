# Fifteen percent milestone

The final independent rebuild verifies **27,388 distinct original functions /
2,462,776 bytes / 15.019982%** of the original 16,396,664-byte `.text`, using 891
recorded source builds. This adds 1,144 functions and 265,840 bytes beyond the
published 13.398677% checkpoint. All credited bodies match their entire original
FDE extents after checked standard relocations. Data and fully linked game credit
remain zero.

The additions cover function-object ownership swaps, larger reference-member
cleanup, inherited buffers, wire-record deserialization and callback creation,
guarded scalar dispatch, guarded type registration, copied-field clone routines,
shared-reference callback construction, hidden result records, and public C++
container/string/sorting algorithms. Repeat builds and wrong-source controls
cover every added build; the full verifier independently recompiles all builds.

Important recovery findings:

- A temporary callback slot may be changed by a callee while cleanup still owns
  the original allocation. Keeping those two values separate restores the
  original normal and exception paths.
- Default temporary construction must occur inside the same conditions as the
  original. Moving zero initialization before a null check changes the body.
- Copy construction through several polymorphic bases reproduces intermediate
  vtable writes. Shared control fields require their observed atomic increments.
- Public libc++ headers reproduce isolated library bodies when allocator argument
  widths, allocation flags, element storage and context bindings agree. Explicit
  instantiation of internal vector helpers exposes bodies not emitted separately
  by an ordinary container-class instantiation.
- A context's address loaded through a GOT cell and a global pointer's value can
  look similar in the original. Their LLVM representations and optimization
  behavior differ. Relocation recipes validate the GOT cell and its pointee.
- `-funwind-tables` restores the frame setup scheduling for shared callback
  construction. Exact recorded profiles remain per-build observations, not an
  identification of the original Nintendo compiler.

Sources are provisional C++ ABI views. Matching does not establish complete
original signatures, return types, field types, class names or untouched data
layouts. Generated calls and hidden output storage also need further ABI review.
The relaxed temporary store in deserialization and the volatile pool-enabled
view reproduce observed scheduling; their original qualifiers are not proven.
Static delegate host/member views describe the stored representation and require
further type recovery before whole-game use.

The metadata registry, component collection and element-buffer candidates remain
uncredited. They still differ from original bytes. There are no instruction
arrays, assembly, edited compiler bytes, partial-body credit or fuzzy credit.

Receipts are in `progress/verified.json`, `progress/engine_family_validation.json`
(56 family proofs), `progress/recovery_validation.json`,
`progress/library_validation.json` (47 library build proofs), and
`progress/sibling_profile_validation.json`. Header provenance and licenses are
documented in [vendor/README.md](../vendor/README.md).
