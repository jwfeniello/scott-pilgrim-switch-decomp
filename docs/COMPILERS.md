# Compiler profiles

The original Nintendo Clang compiler revision is not established. These public
LLVM versions reproduce the credited complete functions on the tested Windows
host. A different host or compiler build must pass the same full-byte verifier.

- [Clang 7.0.1 / LLVM releases](https://releases.llvm.org/7.0.1/): leaf proposals,
  probes, ActorMoveAction serialization and two ActionStep methods.
- [Clang 8.0.1 / LLVM releases](https://releases.llvm.org/8.0.1/): registries,
  accessors, factories, callback/reference lifecycle, lazy type hashes and
  lazy and one-time type registration, factory construction and callback identity.

Exact flags are committed per build in `config/builds.json`. The common target is
`aarch64-none-elf`, C++11, Cortex-A57. Most engine families use `-O2`, disabled
strict aliasing and omitted frame pointers. The engine registry additionally
uses `-mllvm -likely-branch-weight=1048575`; accessors use
`-mllvm -jump-threading-threshold=1` and their real component ID define.

Lazy type hash functions instead use `-O3 -fPIC -fno-omit-frame-pointer`.
Their genuine C++ static-local constructors generate Itanium guard sequences.
`-O2` shares epilogues and produces a shorter body; `-O3` restores the original
260-byte control-flow layout. GOT relocations bind to original GOT cells, whose
RELATIVE pointees are independently checked.

Lazy type registration uses `-O2 -fPIC -fno-omit-frame-pointer` with genuine
static-local constructors. Its eight-byte hash argument initializes only the
first 32-bit field; this ABI view restores the original stack slot. See
[registration findings](LAZY_TYPE_REGISTRATION.md).

One-time registration, factory construction and callback identity also use
`-O2 -fPIC -fno-omit-frame-pointer`. Factory construction permits its allocation
call to unwind. Marking every callee `noexcept` changes the frame setup scheduling
and fails exact comparison. Its empty allocation tag is a real C++ string literal;
the linker validates the entire literal including its terminator against an
immutable original section. See [the three family findings](TYPE_AND_CALLBACK_FAMILIES.md).

Specify compiler paths with `--clang7` / `--clang8` or the environment variables
`SCOTT_CLANG7` / `SCOTT_CLANG8`. LTO builds also need `ld.lld` from the LLVM 8.0.1
release (`--lld8` / `SCOTT_LLD8`); see [the LTO build](LTO_BUILD.md). Installations
remain outside the repository.

The 15% checkpoint also records `-O3` library builds with public libc++ 4 and
musl header fixtures, allocator ABI views and explicit internal helper
instantiations. Shared callback construction uses `-funwind-tables`, which
changes frame setup scheduling on the tested Clang build. These observations
do not identify the original NX compiler or prove an original library version.
See [the milestone findings](FIFTEEN_PERCENT.md) and [header provenance](../vendor/README.md).

## Game code: -O3 optimization, -O2 code generation

Some game functions need `-O3` optimization but `-O2` code generation, the
combination an LTO build produces (the compile step optimizes at `-O3`; the
linker generates code at its default `-O2`). Builds can express this with
`codegen_flags`: `tools/verify.py` then compiles `flags` to bitcode and runs a
second, code-generation-only step (`-Xclang -disable-llvm-optzns`).

- **Circuit property lookups (`0xcc10a0` and 13 more).** The original has the
  loop unswitched on its type test. Clang 8 does that only at `-O3`, since `-O2`
  limits unswitching to trivial cases. A single-step `-O3` build then
  duplicates the epilogues and the guard path, which `-O2` code generation does
  not. Only the two-step build matches all 14.
- **FreeType.** The single-translation-unit FreeType source built this way adds
  nine exact functions (8,764 bytes) that neither `-O2` nor `-O3` reproduces.
- **Consistency.** Rebuilding a random sample of 100 existing `-O2` builds this
  way still reproduces 10,508 of their 10,509 functions (the exception is a zlib
  `inflate` build). The game-side lazy type-hash copies match both ways.
- **Scope.** SDK-side builds (frame pointer kept, PIC) do not follow this: the
  760 lazy type-hash functions there need `-O3` code generation and match none
  of the two-step builds. This fits SDK libraries compiled normally and the game
  executable built with LTO. It is inferred from code shape and not otherwise
  established. True LTO also inlines across translation units, which this
  two-step build does not reproduce.

## Newer public Clang is further from the original

Official LLVM 9.0.1 and 10.0.0 Windows releases (GPG signatures by the LLVM
release managers verified) were tested and are not used by any build. On 150
randomly chosen Clang 8 builds (2,123 exact functions), the same sources and flags
reproduce 2,121 functions with Clang 8.0.1, 489 with Clang 9.0.1 and 119 with
Clang 10.0.0. Of 93 FreeType single-translation-unit matches, Clang 9 reproduces
8 and Clang 10 none. Neither closes the gameplay near misses described in
[gameplay components](GAMEPLAY_COMPONENTS.md). The original NX compiler is
therefore closest to the LLVM 7/8 generation. Its remaining differences, such as
the `0xe7ffdefe` trap encoding and some instruction-scheduling choices, do not
come from a newer public release.
