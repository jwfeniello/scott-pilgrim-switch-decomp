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


## Public OpenSSL C source fixture

The OpenSSL headers and C body views in `src/OpenSsl_*.c` come from the official
[`OpenSSL_1_0_2u` tag](https://github.com/openssl/openssl/tree/OpenSSL_1_0_2u).
The archive URL and SHA256 are recorded in `openssl-provenance.json`; every
vendored header/configuration byte is covered by `openssl_sha256.json` and the
full verification snapshot. The archive was fetched through the official GitHub
API. The original executable contains OpenSSL source paths, but its exact full
library revision is unproven. Matching individual bodies does not establish that
revision or a complete compatible linked library.

`openssl-configs` contains derived no-assembly AArch64 header fixtures. The
32-bit-limb fixture enables BN_LLONG; a 64-bit-limb variant is also tested.
These are matching configuration views, not recovered original build files.
Wrapper includes use angle brackets with explicit repository header roots, and
source diagnostic filenames use the observed original file prefix. Algorithm
bodies and copyright notices are retained. Header formatting is preserved except
for generated fixture configuration values, including a portable default prefix.

The original OpenSSL/SSLeay terms are retained in
[`openssl-1.0.2u/LICENSE`](openssl-1.0.2u/LICENSE). This product includes software
developed by the OpenSSL Project for use in the OpenSSL Toolkit
(https://www.openssl.org/), cryptographic software written by Eric Young
(eay@cryptsoft.com), and software written by Tim Hudson (tjh@cryptsoft.com).

## Public zlib C source fixture

`zlib-1.2.11` contains headers and notices from the official
[`v1.2.11` tag](https://github.com/madler/zlib/tree/v1.2.11), with upstream
commit, archive hash, and original header hashes in `zlib-provenance.json`.
`zlib_sha256.json` records the vendored fixture bytes, which are also covered
by declared header roots in the full verification snapshot. The C source views
in `src/Zlib_*.c` preserve upstream algorithms and copyright notices.

The sole header-value alteration supplies the observed
`1.2.11.f-NINTENDO-SDK-v1` version marker and is explicitly marked in `zlib.h`.
Matching that string and six isolated bodies does not establish the complete
SDK fork, its configuration, or linked data. The full original license notice
is retained in [`zlib-1.2.11/LICENSE`](zlib-1.2.11/LICENSE) and `zlib.h`.

## Public OpenSSL q source fixture

`openssl-1.0.2q` contains public headers, exported-header copies, and notices from
the official [`OpenSSL_1_0_2q` tag](https://github.com/openssl/openssl/tree/OpenSSL_1_0_2q).
Its commit and archive hash are in `openssl-q-provenance.json`; fixture hashes
are in `openssl_q_sha256.json`. Exported headers are materialized from the
corresponding q source files. `openssl-q-configs/32_longlong` supplies a derived
no-assembly AArch64 configuration with 32-bit bignum limbs and `BN_LLONG`.

The C views in `src/OpenSslQ_*.c` retain upstream algorithms and copyright notices.
Their diagnostic filenames use the observed original prefix. The complete
OpenSSL/SSLeay license is in [`openssl-1.0.2q/LICENSE`](openssl-1.0.2q/LICENSE).
Matching isolated q and u bodies does not establish a complete original library
revision, SDK installation, configuration, or linked data.
# RapidJSON source fixture

`rapidjson-1.1.0` contains public headers and notices from the official
[v1.1.0 tag](https://github.com/Tencent/rapidjson/tree/v1.1.0).
The archive URL/hash and modification are recorded in
`rapidjson-provenance.json`; file hashes are in `rapidjson_sha256.json`.
The writer's hexadecimal digit table is adapted to lowercase to match the
observed original data. See [the source-view notes](../docs/RAPIDJSON.md).
The fixture retains the upstream `license.txt`.

