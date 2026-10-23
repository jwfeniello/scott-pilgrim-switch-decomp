# Complete string-buffer matches

Public libc++ string-buffer instantiations reproduce seven additional complete
functions, totaling 1,372 bytes. Each is checked against its full original FDE
extent, including external references; no fuzzy credit is assigned.

| Operation | Original addresses | Size each |
| --- | --- | --- |
| `basic_stringbuf<char>::seekpos` | `0x1601d0`, `0x4fd480` | 20 |
| `basic_stringbuf<char>::pbackfail` | `0x160250`, `0x4fd500` | 124 |
| `basic_stringbuf<char>::seekoff` | `0x160070`, `0x4fd320` | 340 |
| `basic_stringbuf<char>::str(const string&)` | `0x17d350` | 404 |

`src/RecoveredStringBuffers.cpp` instantiates public library templates. Three
Clang 8.0.1 profiles reproduce these bodies: libc++ 4 at O2 without a frame
pointer or exceptions; libc++ 8 at O3 without a frame pointer or exceptions;
and libc++ 8 at O3 with a frame pointer and exceptions. Headers and source are
covered by verification input hashes. The dependency closure for the newly used
stream and locale headers is included under the existing vendor directories.
No Nintendo SDK files are needed for these builds.

The probe explored sixteen combinations of header version, optimization, frame
pointer and exception settings. The other instantiated string methods remain
uncredited. These matches identify specific library operations, not the entire
original library/compiler revision, and do not establish that the larger
service/request handlers containing stream operations are reconstructed.

Large remaining service-code clusters were inspected separately. For example,
the routine at `0x181f30` handles fields named `requestStatusCode` and
`sdkErrorCode`. Its displayed Ghidra destructor name should not be used as an
established original identity. This classification receives no exact-match
credit and keeps future source reconstruction grounded in actual behavior.

## Stream routines recovered from request logging

[RecoveredStringStreams.cpp](../src/RecoveredStringStreams.cpp) instantiates
public libc++ 8 stream types and a normal text-insertion wrapper. The
`recovered_stringstreams` profile adds **11 complete functions / 2,052 bytes**:

| Function group | Original addresses | Bytes per function |
| --- | --- | --- |
| string-buffer overflow | `0x4fd580` | 384 |
| padded character output | `0x17cf40` | 360 |
| stringstream deleting destructor | `0x4fd0b0` | 148 |
| stringstream complete destructor | `0x15fa60`, `0x4fcdb0` | 140 |
| deleting destructor, fixed adjustment | `0x4fd150` | 148 |
| complete destructor, fixed adjustment | `0x15fb90`, `0x4fcf80` | 140 |
| deleting destructor, virtual adjustment | `0x4fd1f0` | 156 |
| complete destructor, virtual adjustment | `0x15fcc0`, `0x4fd010` | 148 |

The profile uses Clang 8.0.1 O2, PIC, a preserved frame pointer, unwind tables,
and disabled exceptions. Header contents come from the existing vendored libc++
8 and musl closures. Each original function has its own checked relocation
bindings; multiple addresses are distinct original bodies, not repeated credit
for one address.

These matches were found while reconstructing the 3,320-byte response-processing
routine at `0x181f30`, which formats service-error diagnostics through a stringstream.
That larger candidate is still unmatched and has not passed a behavioral fixture.
It receives no exact credit. A broader 16-profile stream-instantiation sweep
found no additional unique matches beyond this batch.

## Ubisoft stream hierarchy

[UbisoftStringStream.h](../src/UbisoftStringStream.h) reconstructs the stream
hierarchy identified by the service-response routine's original RTTI:

- Vtable `0x17c9450`, typeinfo `0x17c96d8`: `ubiservices::BasicStringStream<char>`.
- Vtable `0x17c9530`, typeinfo `0x17c95a8`: a `std::basic_stringstream` using
  `ubiservices::ContainerAllocator<char>`.
- Vtable `0x17c9710`, typeinfo `0x17c9790`: the corresponding custom-allocator
  `std::basic_stringbuf`.

The derived constructor enables `boolalpha | showbase`, matching the original
`0x201` flag update. The empty allocator view uses the allocation/free ABI already
observed elsewhere; complete matching overflow code independently checks its
allocation size, alignment, category, and free-call bindings. These findings do
not establish every original class declaration or allocator operation.

[RecoveredUbisoftStreams.cpp](../src/RecoveredUbisoftStreams.cpp) produces
**10 new complete matches / 1,800 bytes** with Clang 8.0.1 O3, PIC, a preserved
frame pointer, unwind tables, disabled exceptions, and public libc++ 8 headers:

| Function group | Addresses | Bytes |
| --- | --- | --- |
| derived deleting destructor | `0x15fe00` | 148 |
| derived complete destructor | `0x15f8a0` | 140 |
| custom-allocator buffer overflow | `0x1602d0` | 468 |
| base deleting destructor | `0x15faf0` | 148 |
| fixed-adjustment derived deleting destructor | `0x15fea0` | 148 |
| fixed-adjustment derived complete destructor | `0x15f930` | 140 |
| fixed-adjustment base deleting destructor | `0x15fc20` | 148 |
| virtual-adjustment derived deleting destructor | `0x15ff40` | 156 |
| virtual-adjustment derived complete destructor | `0x15f9c0` | 148 |
| virtual-adjustment base deleting destructor | `0x15fd60` | 156 |

The service-response candidate now uses this shared header. Its updated JSON
initialization and expression lifetimes follow the inspected original operations,
and bounded JSON-prefix checks now cover the setup before stream initialization.
The complete diagnostic-logging path remains unverified and the full handler
remains unmatched. Only complete byte-verified functions add exact credit.

## SDK allocator-backed buffer extraction

`RecoveredUbisoftStringBuffer.cpp` explicitly instantiates the public libc++
string-buffer template with the reconstructed `ubiservices::ContainerAllocator`.
Its `str() const` method matches the complete 352-byte function at `0x17d1f0`.
This extracts the accumulated buffer contents into an allocator-backed string;
the logging reconstruction at `0x1535e0` calls this helper before creating its
reference-counted message text. The larger logging function remains unmatched.

The credited profile uses Clang 8, libc++ 4 headers, O2 and general registers.
Full verification binds allocation/free and string-copy dependencies and
compares all original function bytes. Other instantiated methods receive no
new credit from this build.
