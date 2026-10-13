# Work toward 25%

Current verified checkpoint: **28,863 exact functions /
2,771,572 bytes / 16.903268%** of the original 16,396,664-byte
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

368 source profiles reproduce 783 complete original functions /
259,740 bytes using ordinary public OpenSSL C source and Clang 8.0.1.
The fixture is the official `OpenSSL_1_0_2u` tag, with headers and licensing
recorded in `vendor/openssl-provenance.json` and `vendor/openssl_sha256.json`.
This establishes these isolated function matches. The original complete library
revision, configuration and linked data are not established.

A derived AArch64 fixture with 32-bit bignum limbs and `BN_LLONG` reproduces more
original arithmetic than the default 64-bit limbs. Optimizations, frame-pointer
settings and unwind-table generation affect the results. Profiles use `no-asm`;
credited C definitions contain no active inline assembly. Observed diagnostic
filenames are supplied through ordinary `#line` directives. Literal bytes and
standard ELF relocations are checked during each full function comparison.

Every added C build was compiled twice with identical object output. Adding an
external side effect to every preprocessed C definition rejects every credited
function. Receipts are in `progress/c_library_validation.json`. These controls
complement the fresh full 1,278-build original-byte comparison in
`progress/verified.json`.

## Reporting and remaining work

Header input hashing now visits shared header folders once per invocation. It
still detects changed, added and missing headers and rejects paths outside the
repository. No persistent header cache is used. Optional `--jobs 4` compilation produced
identical object and function receipts to the sequential full rebuild.

A public zlib 1.2.11 probe found a small unpromoted batch. The original includes
the marker `1.2.11.f-NINTENDO-SDK-v1`; matching that version string alone does not
establish the complete SDK fork. A public curl 7.64.1 probe yielded no new FDE
matches. Its original version-string reference lies outside the FDE inventory
at 0x278a0. No additional credit is assigned to unproven function boundaries.

The entire original `.text` remains the denominator, including 559,736 bytes
outside the FDE inventory. Data and complete linked-game measures remain zero.
A complete game build and boot remain unestablished.
