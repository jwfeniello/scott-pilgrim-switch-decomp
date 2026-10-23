# Unmatched WebSocket handshake constructor

`src/wip/WebSocketHandshake.cpp` reconstructs the complete constructor at
`0x82d10`. RTTI identifies `ubiservices::WebSocketHandshakeRequest`. The
candidate compiles to 2,664 bytes; the original is 2,668 bytes. It is absent
from the exact build manifest and earns **zero exact-match credit**.

It initializes the HTTP base and two shared strings, sets handshake headers,
zeroes the port field at offset0xa0, passes protocol and extension lists to
the separately matched list helper,
computes the expected accept response, and calls final setup. Environment
kinds 1 and 2 add `_beta_cn` to the User-Agent. Version formatting is `%u`,
including versions greater than the signed 32-bit limit.

The fixture executes both complete ARM64 constructors and compares ordered
external calls, final object bytes, string values, reference counts, and
disposals. It also checks an independent expected-header result and verifies
stack balance and callee-saved registers. Fifty cases combine five environment
values, five version values, and empty/existing header values. Four compiled
negative controls must fail: signed version formatting, wrong beta selection,
a reference increment of two, and reversed temporary-construction order.

The first candidate using inline assignment temporaries failed: it constructed
values before keys. Explicit key temporaries preserve the original call and
allocation order. This mattered despite identical final header values.

```powershell
$env:PYTHONPATH = '<folder containing Unicorn>'
python tools/compare_websocket_handshake.py --original <private-ELF> --clang8 <clang++.exe> --build-dir <scratch-folder>
```

The allocator, base constructor, SDK text operations, map, key generation,
accept helper, list handler, and final setup are synthetic dependencies. List
arguments and call order are checked; list contents are not processed here.
Atomic retain/release and temporary cleanup execute in the actual constructor
code. There is no concurrency, allocation-failure, networking, or full-game
validation. The fixture does not establish portability or exact code identity.

Remaining matching differences include stack frame size, temporary locations,
and an additional retained register. The receipt in
`progress/websocket_handshake_behavior.json` records source and original hashes.

The called URI/Host setup now has a separate complete reconstruction and
bounded comparison: [WebSocket setup candidate](WEBSOCKET_SETUP_CANDIDATE.md).
