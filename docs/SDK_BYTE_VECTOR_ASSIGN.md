# SDK byte-vector range assignment

`src/SdkByteVectorAssign.cpp` instantiates libc++ vector assignment from a
const-char pointer range into the SDK allocator-backed unsigned-byte vector.
The complete instantiated method at0x603e0 is316 bytes and matches with
Clang8.0.1 O2/O3, tail duplication threshold4. Only that method is credited;
the source wrapper that forces its emission receives no credit.

The method reuses capacity when possible, overwrites the existing prefix,
constructs additional bytes or shrinks the logical end, and releases/reallocates
storage when the supplied range exceeds capacity. The recipe checks every
byte and the allocation, free and vector length-error references.

The proxy CONNECT builder at0x840f0 uses it to convert formatted credential
text into a byte vector before Base64 encoding. That larger builder is still
unmatched. Allocator and function names are reconstructed ABI views.
