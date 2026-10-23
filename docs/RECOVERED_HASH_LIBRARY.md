# Recovered SHA implementation

The unmodified SHA sources from [Stephan Brumme's hash-library](https://github.com/stbrumme/hash-library)
produce five complete function matches totaling 4,620 bytes with Clang8.0.1
O3 and tail duplication threshold4. Files are pinned to commit
`d389d18112bcf7e4786ec5e8723f3658a7f433d7`; vendor/stbrumme-hash/SOURCE.json records byte hashes,
and the upstream zlib license is retained. This is evidence for matching
implementation code, not proof of the exact original dependency revision.

| Original address | Size | Upstream method |
| --- | ---: | --- |
| 0x48b10 | 3340 | SHA1::processBlock |
| 0x49820 | 304 | SHA1::add |
| 0x49950 | 336 | SHA1::processBuffer |
| 0x4bac0 | 304 | SHA256::add |
| 0x4bbf0 | 336 | SHA256::processBuffer |

The two algorithms share the same update and finalization instruction
patterns, but their calls bind to different block processors. Each
address has its own verified binding. SHA256::processBlock at0x49aa0
remains unmatched, so the SHA256 library is not claimed complete.

Function sections preserve relocations for calls between upstream methods.
Without them, locally resolved relative branch displacements prevent an
exact relocated comparison even where instruction structure agrees. No
original instructions or fixed branch-byte patches are included.

The WebSocket accept helper0x827f0 calls the matched SHA1 update and
finalization routines. Its five-word save/finalize/serialize/restore
sequence also resembles upstream SHA1::getHash, giving a concrete source
lead for its remaining reconstruction. That helper is still unmatched.
