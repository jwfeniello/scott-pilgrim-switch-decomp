# WebSocket accept-value candidate

`src/wip/WebSocketAccept.cpp` reconstructs the complete helper at0x827f0.
It appends `258EAFA5-E914-47DA-95CA-C5AB0DC85B11` to the supplied key,
computes SHA-1, serializes the five digest words in big-endian order, Base64
encodes the twenty bytes, and constructs shared SDK text from the result.
The hash object is a reconstructed view of the recovered SHA-1 library.

The candidate compiles to776 bytes, the original size, with15 normalized
instruction differences under Clang8 O2 and tail duplication threshold4.
Remaining differences concern vector initialization, paired hash-state stores,
and instruction scheduling. Normalization ignores relocation immediates, so
these diagnostics do not establish a byte match. The function is excluded
from exact progress.

## Validation

`tools/compare_websocket_accept.py` executes complete original and candidate
returns for133 cases, including the conventional WebSocket example key,
embedded NULs, empty input and deterministic binary strings through128 bytes.
The original SHA-1 update, finalization, block transform, Base64 encoder and
append helper execute in both runs. Output must also equal an independent
Python hashlib/Base64 calculation. Allocation/free/disposal order, reference
counts and input preservation are compared; the harness checks the stack and
callee-saved registers. Three compiled controls change the GUID, digest byte
order and initial hash state, and must fail.

Concatenation, allocation/free and memory primitives are modeled. The test
does not establish concurrency, allocation-failure behavior or network/game
behavior. It compares externally observable results and lifetime traces;
internal hash-state restoration after serialization still needs exact machine
code verification. The receipt is `progress/websocket_accept_behavior.json`.
No behavior result adds exact-match credit.

```powershell
python tools/compare_websocket_accept.py --original <private-elf> --clang8 <clang++.exe> --build-dir <scratch-directory>
```
