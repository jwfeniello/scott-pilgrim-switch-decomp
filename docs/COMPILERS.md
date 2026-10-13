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
