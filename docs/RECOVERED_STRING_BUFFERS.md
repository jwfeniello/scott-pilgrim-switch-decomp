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
