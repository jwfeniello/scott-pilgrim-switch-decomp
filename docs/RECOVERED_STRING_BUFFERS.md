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
