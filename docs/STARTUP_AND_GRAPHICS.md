# Startup, graphics procedure loading, and SDK containers

The October 23 checkpoint adds 114 complete functions and 55,424 exact `.text`
bytes over commit `caacedc`. All 1,486 configured source builds and all 15 verifier
tests pass: 30,179 functions, 3,080,148 bytes, 18.785211% of the original executable
`.text`. These are isolated linked function matches; a complete game build is
still unavailable.

## Graphics procedure loading

`NvnProcedureLoader.cpp` matches the complete 14,476-byte function at `0x6320d0`.
It calls a supplied resolver with the device and each of 516 original NVN API
names, then stores the returned addresses in their procedure slots. The strings,
procedure destinations, and external references are checked against the original.
The generic function-pointer type represents address storage; it does not recover
the signatures of all 516 graphics functions. Changing a procedure name causes
verification to reject the candidate.

## Factory and global initialization

Five additional complete startup routines contribute 21,128 bytes:

| Original address | Bytes | Recovered operations |
| --- | ---: | --- |
| `0x638650` | 4,024 | Flag vector and 16 factory registrations |
| `0x639650` | 2,316 | Flag vector and nine factory registrations |
| `0x6660a0` | 1,332 | Flag vector and five factory registrations |
| `0x63a0c0` | 2,224 | Flag vector, ten default slots, eight factory registrations |
| `0x635a70` | 11,232 | Network defaults, error definitions, graphics defaults, 28 factories, and Uplay manager initialization |

The factory routines reuse the recovered guarded 100-bucket registry: initialize
the table and each entry once, then insert the entry into its hash bucket. The
sources preserve acquire loads, guard calls, registration order, and external
factory references. Incorrect bucket arithmetic is rejected for all five builds.

The network initializer defines 46 named error records with domain, code, message
mapping, and owned-context defaults. Original strings distinguish game errors,
Ubisoft services, Storm networking, and platform-specific errors. Those names
document available definitions; they do not prove every platform path executes
on Switch. The routine also initializes loopback/broadcast/any-address values,
endpoint defaults, colors, two-component format records, a linear texel-storage
object, and the Uplay manager. Unknown field meanings retain provisional names.

`StaticTypeIdentifiers.cpp` contributes 68 complete 48-byte initializers, or
3,264 bytes. They assign and increment a shared type counter once under the
original unsynchronized startup guard. A wrong counter increment is rejected.
This does not imply the initialization is safe to invoke concurrently.

## SDK containers and text values

`SdkOwnedContainers.cpp` adds 37 functions / 15,880 bytes using public libc++
headers and the recovered SDK text ownership ABI. The set includes vector and
split-buffer operations (18 / 8,712), deque operations (11 / 4,548), ordered
container helpers (five / 1,572), two four-text record constructors (two / 888),
and text ordering (one / 160). The record constructors are not vector helpers;
their original application-level class names remain unknown.

`SdkTextRecords.cpp` adds three functions / 676 bytes: text default construction,
text copy construction, and a record containing a zero-initialized 32-bit field
and four text members. The original meaning of the 32-bit field is unestablished.
Negative controls cover ownership increments/decrements, allocation alignment,
ordering, and record initialization.

Every credited match covers its complete original unwind range and checks linked
references and literals. Diagnostic similarity, bounded emulation, and recovered
data inventories add no extra exact-match credit.
