# Additional complete hash-map matches

Following the money-statistics consumer exposed two reusable library operations.
A focused 105-build sweep varied unsigned, 64-bit unsigned and pointer keys,
seven trivial value widths, libc++ 4/8 headers, and Clang 7/8 profiles.
Only complete functions with checked relocations were accepted.

| Operation | Original functions | Bytes each | Total |
| --- | --- | --- | --- |
| Hash-table rehash policy | `0x7879e0`, `0xc2b490` | 212 | 424 |
| Pointer-key lookup | `0x496940`, `0x4c3870`, `0x571270`, `0x572c70`, `0x572ee0` | 288 | 1,440 |

`HashMapRecovered0.cpp` and `HashMapRecovered1.cpp` instantiate public library
code using minimal ABI views. The value types and application-level class names
of these seven original functions are not recovered. Rehash policy does not
identify its key/value types, and identical lookup code does not prove that the
original pointer keys represented C strings. These are isolated library matches,
not matches for the money-statistics consumer that led to the investigation.

The 212-byte policy chooses a new bucket count and calls the separately bound
rehash implementation; the 288-byte lookup hashes a pointer and follows the
appropriate bucket chain. Existing matches are excluded, so the batch adds
seven functions and 1,864 bytes without duplicate credit.

The pointer lookup uses the existing public libc++ 4 headers. Rehash policy uses
libc++ 8.0.0 headers. `vendor/llvm-libcxx-8` contains only the header dependency
closure observed when compiling the hash-map and string-buffer instantiations, together with its upstream
license. Headers are copied byte-for-byte from the local public
`libcxx-8.0.0.src` source tree. The ordinary source hashes and recursive header
hashes in the verifier cover these inputs. Matching an isolated library body
does not establish which library or compiler version built the full game.

The 876-byte money-statistics consumer at `0x6f3c30` remains unmatched. Further
inspection distinguishes normal execution from its exception-cleanup tail and
shows that the original copies the pair of labels together. Private prototypes
with ordinary unordered_map operations and controlled inlining remain research
only; they receive no exact credit.
