# Straight-line C++ recovery

The October 13 checkpoint adds 10,109 complete original function extents,
77,456 bytes, through `src/LeafPrimitives.cpp`. The full project now verifies
20,649 functions / 1,838,940 bytes / 11.215330% of the original executable text.
The requested 15% milestone remains in progress.

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
