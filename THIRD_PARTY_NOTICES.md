# Third-party notices

The hash-table algorithms in `src/HashCapacity.cpp` and `src/HashRebuild.cpp` follow LLVM libc++ code, adapted to reconstructed allocation and object ABI views. LLVM libc++ 8 is distributed under the MIT and University of Illinois/NCSA licenses; the complete upstream notice is in `vendor/llvm-libcxx/LICENSE.TXT`. Upstream: https://github.com/llvm/llvm-project/blob/llvmorg-8.0.1/libcxx/include/__hash_table

`src/FunctionSwapAbi.cpp` follows the public LLVM libc++ ownership-swap algorithm.
The same LLVM notice applies to that adaptation.

Library ABI views instantiate public libc++ templates for deque, split-buffer,
vector, string, sorting, hash-table and tree operations. The vendored libc++ 4
headers, complete dual MIT / University of Illinois/NCSA notice and contributor
credits are in `vendor/llvm-libcxx-4`. Public musl 1.1.20 C and AArch64 type headers
are in `vendor/musl`, with their complete MIT copyright notice. See
[header provenance](vendor/README.md). No Nintendo SDK library files are included.


Public OpenSSL source views use the OpenSSL_1_0_2u release, under the retained
OpenSSL/SSLeay license in `vendor/openssl-1.0.2u/LICENSE`. This product includes
software developed by the OpenSSL Project for use in the OpenSSL Toolkit
(https://www.openssl.org/), cryptographic software written by Eric Young
(eay@cryptsoft.com), and software written by Tim Hudson (tjh@cryptsoft.com).
See `vendor/README.md` for provenance and configuration limits.

Public zlib 1.2.11 source views and headers are copyright (C) 1995-2017
Jean-loup Gailly and Mark Adler, under the retained zlib license in
`vendor/zlib-1.2.11/LICENSE` and `zlib.h`. Source files retain their individual
copyright notices. The altered fixture version marker is identified in
`vendor/README.md`; no complete proprietary SDK fork is distributed.

The public OpenSSL_1_0_2q views retain the OpenSSL/SSLeay terms in
`vendor/openssl-1.0.2q/LICENSE`. The OpenSSL Project, Eric Young and Tim Hudson
acknowledgments above also apply to these additional public source/header views.
# RapidJSON

The RapidJSON v1.1.0 headers retain their upstream copyright and license notices.
See `vendor/rapidjson-1.1.0/license.txt` for the MIT license and additional
upstream third-party notices. The lowercase hexadecimal writer-table adaptation
is documented in `vendor/rapidjson-provenance.json`.

# FreeType

Portions of this software are copyright © 2018 The FreeType Project
(www.freetype.org). All rights reserved. The public FreeType 2.9 files under
`vendor/freetype-2.9` are distributed under the FreeType License; the complete
texts are in `vendor/freetype-2.9/docs/FTL.TXT` and `docs/LICENSE.TXT` (FreeType
is dual-licensed under the FTL and GPLv2; `docs/GPLv2.TXT` is included for
completeness). The derived configuration in `vendor/freetype-2.9-configs` only
disables `FT_CONFIG_OPTION_ENVIRONMENT_PROPERTIES`.

# MiniUPnPc

The public miniupnpc 1.9 headers under `vendor/miniupnpc-1.9` and the source views
in `src/MiniUpnpc19_*.c` retain their upstream notices. Copyright (c) 2005-2014
Thomas Bernard; the complete BSD-style license is in `vendor/miniupnpc-1.9/LICENSE`.
