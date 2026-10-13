# Type and callback families: 7% milestone

Three C++ reconstructions add 1,908 complete original functions / 311,248 bytes.
The resulting total is 4,586 unique functions / 1,159,776 bytes / 7.073244% of
the original 16,396,664-byte executable `.text` section. This is exact machine
code coverage, including engine and library infrastructure.

| Source | Reference ELF address | Full body bytes | Exact instances | Exact bytes |
| --- | --- | ---: | ---: | ---: |
| `src/TypeRegistrationOnce.cpp` | `0x26ee00` | 240 | 649 | 155,760 |
| `src/FactoryConstruction.cpp` | `0x26ecb0` | 192 | 489 | 93,888 |
| `src/CallbackIdentity.cpp` | `0x677ef0` | 80 | 770 | 61,600 |

## Observed behavior and source limits

One-time registration checks a byte flag and returns if it is set. Otherwise it
sets the flag before the other calls, initializes a guarded static type index to
`-1`, resolves the supplied context, initializes a guarded 16-byte zero cache,
and tail-calls registration with the index object, caller-supplied hash pointer,
resolved context and cache. The initial flag is an ordinary unsynchronized byte;
the C++ reconstruction preserves that behavior. This differs from the previously
matched lazy registration family, which checks the index and builds its hash.

Factory construction loads a shared factory, obtains a context through a virtual
method, allocates eight bytes with an empty string tag, and constructs a
polymorphic temporary. It passes that temporary by pointer reference to a virtual
factory method. On return, it clears its local owner pointer, invokes the virtual
destructor if the remaining pointer is nonnull, adjusts to the allocation base
using the vtable's offset-to-top entry, and frees the allocation. Allowing the
allocation call to unwind restores the original frame-setup scheduling; marking
every call `noexcept` produces the wrong instruction order.

The factory result is described only as an indirect-return ABI view. Its actual
fields and complete original size are unknown. Virtual slot names, type names,
and structures here are reconstruction labels and views of the touched fields.
Binding a compiled vtable symbol to its original address does not establish a
match for the vtable, its type information, or any destructor body.

Callback identity first compares the bound owner, then uses an ordinary C++
member-function-pointer comparison. Clang's AArch64 representation handles the
member pointer's function/virtual encoding, adjustment and null representation.
Representing the member as two ordinary integers and comparing both directly
would lose those null-member comparison rules. Owner names and signatures in
the view do not prove the complete original class declarations.

## Discovery and strict verification

The discovery tool compiles and fully verifies one reference per family first.
Its masks then find candidate original FDEs, masking only the locations and
fields corresponding to compiler relocations. Every other instruction bit stays
fixed during discovery. Promotion independently compiles every C++ template
instance and compares every byte of the complete original function after checked
standard ELF relocations. No masked or partial score earns exact credit.

One-time registration has 28 relocations per body; factory construction has 10;
callback identity has none. Each function receives its own call and GOT bindings.
GOT cells must be writable, aligned and have the expected original RELATIVE
pointee. The guard-call bindings are checked against the original targets
`0xfa4130` and `0xfa4140`. The empty factory allocation tag is a real C++ literal.
The linker now handles mergeable byte string literals, checks their terminator,
and requires their full bytes to match immutable original storage. It never
substitutes instruction bytes outside actual ELF relocation fields.

All 1,908 functions pass full comparison. Two repeat builds of each family produce
identical objects and pass all original-byte comparisons again. These controls
are compiled against the existing recipes, without rediscovering bindings:

| Source mutation | Rejected functions | Wrong compiled size | First differing offset |
| --- | ---: | ---: | ---: |
| Initial index `-1` changed to `-2` | 649 | 240 | 156 |
| Allocation size increased by eight | 489 | 192 | 56 |
| Owner equality changed to inequality | 770 | 80 | 12 |

Results and provenance hashes are saved in `progress/type_and_callback_validation.json`.
The full portable verifier freshly rebuilds all 745 configurations and compares
all 4,586 complete functions. The verification snapshot retains all matching
source, generated include, build configuration and verifier hashes.

## Reproduction

With your original ELF and public compiler installations:

```powershell
python tools/test_type_and_callback_build.py --original "C:\path\Scott_Switch.elf" --clang8 "C:\path\llvm801\bin\clang++.exe" --build-dir "D:\scott-build\type-and-callback"
python tools/verify.py --original "C:\path\Scott_Switch.elf" --clang7 "C:\path\llvm701\bin\clang++.exe" --clang8 "C:\path\llvm801\bin\clang++.exe" --build-dir "D:\scott-build"
python -m unittest discover -s tools -p "test_*.py" -v
python tools/report.py --out build/report.json
```

`tools/discover_type_and_callback_families.py` repeats discovery and comparison.
Its `--promote` option accepts the batch only after every complete function matches
and rejects overlap with existing recipes. Refresh the full snapshot afterwards.
Only declared matching function bodies earn code credit; referenced callees,
generated destructors and class identities do not add credit.
