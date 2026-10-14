# Player object-list helper: original 0x996ab0

`src/wip/PlayerObjectListIndex.cpp` reconstructs the normal behavior of a
376-byte helper called by the larger ControllablePlayer-related method.
The method and most local type names are inferred. Its original method name
and complete declarations are not established. This WIP receives zero exact
matching credit: its tested C++ body is 372 bytes and instruction differences
remain. The complete original extent includes exception cleanup after the
normal return.

The helper obtains a LevelItemAccessor through the already identified
`0x7725e0` accessor, then checks the handle slot at returned object `+0x80`.
On a missing handle/object, it requests type ID `0x4f08e67a` through
`0x67edd0` and calls the object's virtual readiness method. It rereads the
slot afterward, so initialization can clear the cached handle.

`0x8679f0` fills a temporary object-pointer list. The helper returns the first
index whose pointer equals the requested non-null pointer; it returns `-1`
for no match or a null requested pointer. It clears the list count and frees
its backing storage through the allocator selected by `0xa82b30`. The
allocator index uses the low byte of that helper's return value.

## Bounded behavior comparison

The original function and freshly compiled C++ agree in 128 normal-path ARM64
emulation cases. Cases cover empty/populated lists, null entries, duplicate
matches, null/non-null search pointers, missing handles/objects, a cache cleared
during readiness, and an allocated buffer for an empty list. Return values,
dependency call order, constructor fields and cleanup arguments are checked.
The evidence includes the current source and original ELF hashes in
`progress/player_list_behavior.json`.

External accessors, the resolver, collection fill, and allocator calls are
controlled test fixtures. These tests do not exercise real dependency behavior,
unwinding, a complete game build, or booting. The record does not establish
original class names or declare an exact match.

With Python 3.10+, Clang 8.0.1, your original ELF, and the optional Unicorn Python
package (tested with 2.1.4), rerun from the repository root:

```powershell
python tools/compare_player_list_behavior.py --original "C:\path\Scott_Switch.elf" --clang8 "C:\path\llvm801\bin\clang++.exe" --build-dir "D:\scott-build\player-list-behavior"
```

The tool rebuilds the ordinary C++ WIP and its return stub, uses checked standard
ELF relocations to bind known dependency addresses, and executes bounded fixtures
under emulation. It never changes matching progress.
