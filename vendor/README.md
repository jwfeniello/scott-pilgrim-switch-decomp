# Public header fixtures

`llvm-libcxx-4/include` contains public LLVM libc++ headers from the
[`release_40` branch](https://github.com/llvm-mirror/libcxx/tree/2a0436688e5f1cf233b5cef9d9d0a4dc6acf8a97/include).
The branch revision is `2a0436688e5f1cf233b5cef9d9d0a4dc6acf8a97`.
Its complete dual MIT / University of Illinois/NCSA license and contributor
credits accompany the headers.

`musl/include` and `musl/generated/bits` contain public musl 1.1.20 headers for
AArch64. Upstream: [musl 1.1.20 source](https://musl.libc.org/releases/musl-1.1.20.tar.gz).
The generated `alltypes.h` combines the AArch64 and common type inputs using
musl's `mkalltypes.sed`; these inputs and its MIT copyright notice are included.
Architecture-specific bits headers come from that same release.

These are compilation fixtures for isolated C++ library algorithms. They do
not establish the original game's library revision or provide a linked musl
runtime. Nintendo SDK files and compiler binaries are supplied separately and
are not distributed here.

`header_sha256.json` records the copied header bytes. Library builds declare
their `header_roots`; the verifier hashes every file under those roots, including
headers reached through angle-bracket includes. Changed or newly added headers
invalidate the verification snapshot. Upstream header bytes are preserved.
