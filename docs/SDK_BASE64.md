# SDK Base64 encoder

`src/SdkBase64.cpp` reconstructs the complete 720-byte function at0x478a0.
The recipe uses Clang8.0.1 O3, tail duplication threshold4, and verifies every
byte plus allocator, append, memory and alphabet-pointer references.

It accepts a byte-vector ABI view and returns an allocator-backed string.
Empty input yields an empty output without allocating the working buffer.
Other inputs reserve256 characters, encode three bytes into four alphabet
indices, and pad the final group with `=`. The final result converts between
the reconstructed working/output allocator views. The original alphabet
pointer is bound through GOT cell0x18ec838.

The input loop preserves its original unsigned32-bit index, even though the
vector size is64-bit. The reconstruction does not claim behavior for oversized
vectors or change that detail. Naming the allocator views is not evidence of
original class declarations.

This encoder is used by the WebSocket key generator at0x824d0 and accept-value
helper at0x827f0. Those callers remain unmatched.
