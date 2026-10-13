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
