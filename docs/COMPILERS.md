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
`SCOTT_CLANG7` / `SCOTT_CLANG8`. Installations remain outside the repository.

The 15% checkpoint also records `-O3` library builds with public libc++ 4 and
musl header fixtures, allocator ABI views and explicit internal helper
instantiations. Shared callback construction uses `-funwind-tables`, which
changes frame setup scheduling on the tested Clang build. These observations
do not identify the original NX compiler or prove an original library version.
See [the milestone findings](FIFTEEN_PERCENT.md) and [header provenance](../vendor/README.md).

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
