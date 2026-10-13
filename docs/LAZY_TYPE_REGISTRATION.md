# Lazy type registration: 753 exact functions

`src/LazyTypeRegistration.cpp` reconstructs 753 complete 236-byte functions,
adding 177,708 exact bytes. This brings the project to 2,678 unique functions /
848,528 bytes / 5.175004% of the original 16,396,664-byte `.text` section.
The original reference function is at ELF address `0x26eef0`.

## Observed behavior

Each function uses a guarded static object whose first 32-bit field starts at
`-1`. When this index remains `-1`, it calls a type-specific setup routine,
constructs a hash argument, resolves the supplied context, initializes a guarded
16-byte cache to zero, and calls a registration routine with the object, hash,
resolved context and cache. It returns the static object's address.

The setup, context-resolution and registration callees remain external bindings.
They receive no matching credit from this work. Method names are working labels;
the C++ structures describe only the observed fields and call interface. Their
names and sizes do not establish the original complete class declarations.

## Compiler findings

Public Clang 8.0.1 reproduces the entire family with:

```text
-target aarch64-none-elf -std=c++11 -O2 -mcpu=cortex-a57
-fno-strict-aliasing -fno-omit-frame-pointer -fPIC
```

Ordinary static-local constructors reproduce both guard sequences. The hash
argument occupies an eight-byte stack object, with only its first 32-bit field
initialized. A plain four-byte integer puts the argument in the wrong stack
slot. The `RegistrationHash` ABI view reproduces the observed eight-byte extent
and first-field store. The meaning or use of the remaining field is unknown.

The generated include supplies each original hash immediate. The template key
is an address used as a unique reconstruction label, without a runtime meaning.
No assembly or instruction replacement is used to achieve the matches.

## Exactness and reproducibility

Discovery uses structural masks to find candidate FDEs. Acceptance compares all
236 bytes of each complete function after checked standard ELF relocations.
Each function has 31 relocations: GOT page/load pairs and call branches. GOT
loads can be separated from their page-address instructions, so discovery tracks
the actual base register. The portable linker validates the original GOT cells
and their RELATIVE pointees, and checks each supplied symbol binding.

The original guard-call targets are `0xfa4130` and `0xfa4140`. Hash immediates,
instructions and non-relocation bytes are never masked in the acceptance test.
Extra or missing compiler bytes fail the comparison.

Two repeated batch builds produce identical objects and all 753 exact bodies.
Changing every hash with `Hash ^ 1u` rejects all 753 functions, first differing at
offset 56. Changing the initial index from `-1` to `-2` also rejects all 753,
first differing at offset 168. Both controls retain the original function size.
Evidence hashes and results are saved in
`progress/lazy_registration_validation.json`; full per-function receipts are
part of `progress/verified.json`.

The complete project was freshly rebuilt through all 742 build configurations,
confirming all 2,678 matches against the original ELF. The five portable-tool
tests and 32 research dashboard/worker tests pass. GitHub Actions validates and
publishes the source-current snapshot without receiving the original binary.

From the repository root, with local compiler and original paths:

```powershell
python tools/test_lazy_registration_build.py --original "C:\path\Scott_Switch.elf" --clang8 "C:\path\llvm801\bin\clang++.exe" --build-dir "D:\scott-build\lazy-registration"
python tools/verify.py --original "C:\path\Scott_Switch.elf" --clang7 "C:\path\llvm701\bin\clang++.exe" --clang8 "C:\path\llvm801\bin\clang++.exe" --build-dir "D:\scott-build"
python tools/report.py --out build/report.json
```

`tools/discover_lazy_registration.py` can repeat discovery and generate recipes.
Its `--promote` option requires every candidate to pass the complete comparison
and rejects addresses already credited to another reconstruction. Refresh the
full verification snapshot after changing any source or build recipe.
