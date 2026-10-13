# C++ ABI recovery

The October 13 checkpoint adds 10,109 complete original function extents,
77,456 bytes, through `src/LeafPrimitives.cpp`. The full project now verifies
27,388 functions / 2,462,776 bytes / 15.019982% of the original executable text.
The requested 15% milestone is reached; see [the final findings](FIFTEEN_PERCENT.md).

The source recovers scalar and vector field loads/stores, integer and floating
expressions, constants, and tail forwarding. It contains ordinary C++, rather
than original instruction arrays, assembly, compiler-byte patches or comparison
masks. Stable address labels identify the original extents. Complete original
declarations, signatures, field names and class identities are not established
by these machine-code matches. In particular, forwarding and empty-body ABI
views do not prove original return types or all incoming parameter types.

An exploratory symbolic pass emitted 11,577 source candidates (101,760 original
bytes). Whole-symbol size, standard relocations and every original byte rejected
the other candidates. Only the exact functions were retained in the public
source, followed by another complete compilation and comparison. No partial
function or similarity score contributes to progress.

Two more builds of the retained source produce identical objects. Adding an
external side effect to every body rejects all 10,109 functions using the
existing relocation recipes. The full project verifier independently recompiles
the source and requires the original complete FDE sizes and byte hashes.

```powershell
python tools/test_leaf_build.py --original "C:\path\Scott_Switch.elf" --clang8 "C:\path\llvm801\bin\clang++.exe" --build-dir "D:\scott-build\leaf-controls"
```

Receipts are saved in `progress/leaf_validation.json`. Library, engine and leaf
matches share one deduplicated original-address inventory. Complete linked-game
behavior, reconstructed type fidelity and data matching remain unestablished.

## Extended ABI views

The next retained sources add direct and virtual calls, guarded cleanup, branch
merges, ordinary control-flow blocks, atomic operations and selected alternate
compiler profiles. All are ordinary C++ expressions and control flow. The
`RecoveredLeaf_<address>` names label observed extents, not original symbols.
There are no instruction arrays, inline assembly or compiler-output patches.

Call argument counts, integer types, hidden-return storage and global declarations
are provisional ABI views. In particular, an address-bound global view does not
prove a recovered original declaration or a compatible whole-game data layout.
An exact body may leave unused arguments/registers untouched without identifying
their original types. None of these recipes constitutes a linked game build.
These entries are labeled `generated_cxx_abi_view` in the build configuration and
progress evidence. Further source and ABI review remains necessary.

`progress/call_omit_validation.json`, `progress/call_frame_validation.json` and
`progress/recovery_validation.json` record repeat builds and rejection of an
added external source side effect for every retained function. To repeat a
selected build, pass `--build-id ID` to `tools/test_leaf_build.py`, with its
recorded compiler executable in `--clang8` (that option accepts either public
compiler path). The independent full verifier uses the recorded version.
