# HTTP status to SDK result mapping

`src/SdkHttpResult.cpp` reconstructs `ResultFromStatus` at `0x613a0`, a
10,180-byte function. It contains 55 explicit HTTP-status cases plus a fallback.
Each result stores an SDK code, retains a message text, sets its context pointer
to null, and sets the final integer field to -1.

Statuses 200, 201, and 202 produce SDK code zero with distinct messages. Other
listed statuses map to the original SDK codes and strings; unlisted statuses
produce code `0x8e` and `HTTP failure`. This is the game's mapping, including
its unusual entries: 406 and 407 both produce `Not Acceptable` with code `0x6d`,
while 408 produces `Proxy Authentication Required` with code `0x6e`.

The switch's default case placement matters to the emitted block order.
Clang 8.0.1 O3 with tail duplication threshold 4 and the existing libc++ 4
headers reproduces the complete function. The compiled 624-byte jump table
also matches the original. It covers the dispatch interval 200–511, including
entries that branch to the fallback.

## Verification of the jump table

The ELF object represents both its jump table and its mergeable strings with
unnamed section symbols. A single binding by symbol name cannot distinguish
them. The recipe therefore uses an `immutable_sections` binding keyed by the
compiled section index for the jump table; strings retain their individual
literal bindings.

The linker verifies every byte of the complete section, not just the referenced
offset. It requires allocated, read-only, nonexecutable, nonmergeable PROGBITS;
rejects empty or truncated sections, invalid offsets, and sections containing
relocations; and requires the destination extent to be immutable original data.
It then applies only the normal ELF address relocations. The table contributes
no executable-byte credit of its own.

A regression test covers the unnamed-symbol collision and rejects a changed
byte outside the referenced offset, writable/executable/mergeable source
sections, out-of-range offsets, embedded relocations, and writable destinations.

## Caller declaration correction

Inspection of this routine showed that the non-101 path in
`SdkWebSocketValidate.cpp` passes the HTTP status in `w0`. The earlier declaration
omitted that argument, although the matching compiled caller happened to leave
the status in that register. The source now explicitly calls
`ResultFromStatus(status)` and retains its exact-byte match. This illustrates
why matching call instructions alone does not establish a callee's C++ signature.

The proxy-response handler at `0x8f8a0` uses the same mapping to choose its
success or failure path. That larger handler remains under reconstruction.
