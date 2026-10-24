# The game executable is an LTO build

The game half of the executable (above the SDK libraries) shows the marks of
link-time optimization (LTO). Reproducing that with the public LLVM 8.0.1
`ld.lld` adds **110 exact FreeType functions / 81,164 bytes** that no
separate-compilation build reproduces.

## Evidence

- **API bodies inlined into game code.** Game functions at `0x6ca310`,
  `0x6ca430` and `0x6d9380` call `destroy_face` (`0xe13b90`), a `static`
  FreeType function that only `FT_Done_Face` and the face-opening error path
  call. Game code can reach it only if `FT_Done_Face` was inlined into it, which
  requires whole-program optimization. In the same way, game code calls the
  internal face opener and module and size-request helpers directly. Only 15
  functions in the FreeType region are called from outside it.
- **-O3 optimization with -O2 code generation.** Several game functions need
  `-O3` optimizations, such as non-trivial loop unswitching, together with
  `-O2` code generation (shared epilogues). That is the split an LTO build
  makes: compile at `-O3`, generate code at the linker's default `-O2`. See
  [compiler profiles](COMPILERS.md#game-code--o3-optimization--o2-code-generation).
- **FreeType function sizes.** Large FreeType functions are bigger than any
  per-module or single-translation-unit build produces. Internal functions with
  one caller are inlined once the whole program is visible.

SDK libraries (frame pointer kept, PIC) do not follow this. They match ordinary
`-O3` builds.

## FreeType under LTO

`freetype_2_9_lto_pie` in `config/builds.json` is an `lto` build:

1. Each FreeType 2.9 module (`vendor/freetype-2.9/src/...`, 39 sources) and the
   root file [`src/FreeType29LtoRoots.c`](../src/FreeType29LtoRoots.c) are
   compiled to bitcode with `-O3 -flto`.
2. [`src/FreeType29LtoKeep.c`](../src/FreeType29LtoKeep.c) is compiled as a
   normal object. It references the root wrappers so they stay link roots.
3. LLVM 8.0.1 `ld.lld --lto-O2 -pie --save-temps` links them. The verifier reads
   the code-generation object `*.elf.lto.o` that `--save-temps` writes, then
   checks each recipe against the original with the usual relocation rules.

Two settings differ from the game code:

- **Strict aliasing.** FreeType is built with the default type-based alias
  analysis. Adding `-fno-strict-aliasing`, which game code needs, drops the
  result from 110 to 39 functions; for example `tt_hadvance_adjust` then reloads
  a pointer after an integer store.
- **`-fsigned-char`.** It adds `_bdf_parse_properties` and loses nothing.

The root file models the game's call sites: thin wrappers around the FreeType
API calls a font renderer makes, so LTO can inline small API bodies into them as
it did into the game. The real call sites, argument values and call counts are
not reconstructed, and the choice of wrappers affects inlining. With every
`FT_EXPORT` function kept external instead, the result is 104 functions.

## Limits

- The FreeType version (2.9), module set and `ftoption.h` defaults are the
  vendored ones. About 47 more FreeType functions (160 KB) are within 3% of the
  original's size. Remaining differences include register allocation in
  inlined code (`TT_RunIns`), null checks the original removed based on its
  real callers (`FT_Outline_Get_CBox`, `PCF_Face_Done`), and a value the
  original folds after a null test (`tt_face_get_name`).
- The game-side zlib copy (`0xa85000`) resembles zlib but does not match under
  LTO; its version or build may differ.
- An LTO build needs `ld.lld` from the same LLVM 8.0.1 release
  (`--lld8` / `SCOTT_LLD8`). The output depends on the link inputs and their
  order, which the build entry records.
