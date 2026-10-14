# Work toward 25%

Current verified checkpoint: **29,663 exact functions /
2,829,700 bytes / 17.257779%** of the original 16,396,664-byte
`.text`. The 25% target requires 4,099,166 exact bytes and remains unfinished.

## Added engine and ABI views

The first batch after 15% added 692 complete functions / 49,056 bytes.
A composite ownership destructor accounts for 14 instances of 536 bytes, plus
121 emitted sibling methods. Separate ownership slots in a nested aggregate
reproduce its load scheduling; an array declaration did not. An atomic exchange
with acquire-release ordering is required. Wrong-order source rejects all 14.

Typed control-flow recovery added 416 functions / 19,632 bytes. Callee argument
and return register use helps choose scalar ABI views, including float values.
Original declarations, class names and semantic field types remain provisional.
The 19 added builds have repeat and external-side-effect controls recorded in
`progress/recovery_validation.json`; the destructor also has a targeted control
in `progress/engine_family_validation.json`.

## Public OpenSSL C bodies

408 source profiles reproduce 839 complete original functions /
294,660 bytes using ordinary public OpenSSL C source and Clang 7.0.1/8.0.1.
The fixture is the official `OpenSSL_1_0_2u` tag, with headers and licensing
recorded in `vendor/openssl-provenance.json` and `vendor/openssl_sha256.json`.
This establishes these isolated function matches. The original complete library
revision, configuration and linked data are not established.

A derived AArch64 fixture with 32-bit bignum limbs and `BN_LLONG` reproduces more
original arithmetic than the default 64-bit limbs. Optimizations, frame-pointer
settings and unwind-table generation affect the results. Some larger arithmetic
bodies also require disabling automatic loop and SLP vectorization. Profiles use `no-asm`;
credited C definitions contain no active inline assembly. Observed diagnostic
filenames are supplied through ordinary `#line` directives. Literal bytes and
standard ELF relocations are checked during each full function comparison.

Every added C build was compiled twice with identical object output. Adding an
external side effect to every preprocessed C definition rejects every credited
function. Receipts are in `progress/c_library_validation.json`. These controls
complement the fresh full 1,343-build original-byte comparison in
`progress/verified.json`.

## Vector and named-call ABI recovery

New C++ views add 65 complete functions / 4,588 bytes across 11 source builds.
The renderer now preserves vector-valued call results and uses standard C import
signatures plus conservative parameter counts/types inferred from original
demangled SDK imports. An additional compiler-profile scan added 11 of these
functions; floating-point optimization flags alone did not produce a large gain.

The sources use ordinary C++ vector extensions and bit views. These selected
bodies need no NEON header or inline assembly. Every source subset was freshly
compiled, repeated with identical object output, and rejected after adding an
external source side effect to every credited function. Receipts are merged in
`progress/recovery_validation.json`. Exact bodies do not establish original
SDK headers, complete return types, class identities, or full ABI declarations.

## Public zlib source

Six public zlib builds add six complete functions / 1,992 bytes: `adler32_z`,
`crc32_z`, `inflateEnd`, `deflateInit_`, and two original instances of
`inflateInit_`. Each passed full-byte comparison and repeat/wrong-source controls.
The `v1.2.11` tag and fixture hashes are recorded in `vendor/zlib-provenance.json`
and `vendor/zlib_sha256.json`; its original license is retained. The version
marker in the fixture is explicitly marked as altered. It does not establish
the complete Nintendo SDK fork or its linked data.

The C source index now handles old-style parameter declarations, as used in
these upstream bodies, while preserving the distinction between definitions,
attributed prototypes, function-pointer typedefs, and struct declarations.
The regression test and real negative controls exercise that boundary.

## Extended ABI and output-register views

Seven additional C++ builds reproduce 105 complete functions / 9,464 bytes.
Recovery now distinguishes real local-stack loads from callee-save restores,
corrects comparison-alias operand access metadata, and models aggregate results
returned through the ARM64 `x8` register. Ordinary C++ return-value objects
produce that calling convention; the verifier remains independent of the
disassembler and checks every complete original byte.

A separate two-register output view reproduces 568 complete bodies / 7,164
bytes. These views expose the observed `x0`/`x1` outputs. Their original return
types, caller contracts, and class ownership still require review. Matching
bytes alone do not establish those declarations.

All eight new builds passed fresh subset compilation, identical-object repeats,
and external-side-effect negative controls for every credited function.
Their receipts are merged in `progress/recovery_validation.json` and the
fresh complete snapshot covers all 1,343 source builds. The player helper in
`src/wip/PlayerObjectListIndex.cpp` passes 128 bounded normal-path comparisons
but remains uncredited; see [the behavior findings](PLAYER_OBJECT_LIST.md).

## Reporting and remaining work

Header input hashing now visits shared header folders once per invocation. It
still detects changed, added and missing headers and rejects paths outside the
repository. No persistent header cache is used.

Public zlib 1.2.11 source now reproduces six complete functions / 1,992 bytes. The original includes
the marker `1.2.11.f-NINTENDO-SDK-v1`; matching that version string alone does not
establish the complete SDK fork. A public curl 7.64.1 probe yielded no new FDE
matches. Its original version-string reference lies outside the FDE inventory
at 0x278a0. No additional credit is assigned to unproven function boundaries.

The entire original `.text` remains the denominator, including 559,736 bytes
outside the FDE inventory. Data and complete linked-game measures remain zero.
A complete game build and boot remain unestablished.
