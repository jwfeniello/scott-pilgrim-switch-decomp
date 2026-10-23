# WebSocket URI and Host setup candidate

`src/wip/WebSocketHandshakeSetup.cpp` reconstructs the routine at `0x83890`
used by WebSocketHandshakeRequest. The original is 2,144 bytes; Clang8 O2,
tail duplication threshold4 currently produces 2,136 bytes with 91 normalized
instruction differences. It is excluded from exact progress.

The routine parses the URI for the request target, then parses it again to
select a port. It narrows the parsed port to uint16 before testing for zero.
Zero defaults to443 for the case-sensitive scheme `wss`, or80 otherwise.
An absent scheme is represented by `http` for this decision. The URI parser
accepts leading decimal digits in the port component; a leading minus sign
therefore gives an empty component and selects the default.

The Host value uses the URI hostname unless the matched case-insensitive
search helper finds `gaap.ubiservices.ubi.com` anywhere in it. That case uses
`public-ws-ubiservices.ubi.com`. Ports80 and443 are omitted regardless of scheme;
other values are appended as decimal. The Host key and value are retained
text temporaries. The stringstream extraction temporary is destroyed before
header lookup, a lifetime detail preserved by the candidate.

## Bounded validation

`tools/compare_websocket_setup.py` compares complete ARM64 returns for840
cases: four scheme forms, five host forms, seven port inputs, three path
forms and two existing-header states. It checks request target, port, Host
value, preserved input and accept value, reference counts, disposal, ordered
helper/allocation traces, stack balance and callee-saved registers.

The original URI parser, request-target builder, port reader, case-insensitive
search and stringstream extraction execute during both runs. The fixture
models slicing, copy-on-write detachment with unique owners, allocation,
string insertion, stream initialization/insertion/destruction, header lookup,
text construction, ASCII case conversion and bounded decimal conversion.
These are not full allocator, container, concurrency or network tests.

Three compiled negative controls change port narrowing, scheme case, and the
replacement hostname. They must be rejected by output or trace comparisons.
The receipt is `progress/websocket_setup_behavior.json`. No behavior result
adds exact-match credit.

```powershell
python tools/compare_websocket_setup.py --original <private-elf> --clang8 <clang++.exe> --build-dir <scratch-directory>
```
