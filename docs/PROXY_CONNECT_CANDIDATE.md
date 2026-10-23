# Proxy CONNECT request candidate

`src/wip/ProxyConnect.cpp` reconstructs the complete request builder at
`0x840f0` (2,188 original bytes). Clang 8 O2 with tail duplication threshold 4
produces 2,164 bytes and 146 normalized instruction differences. These
diagnostic differences are not an exact-match score. The candidate receives
no exact progress credit.

The builder reads the request URL owner at offset 8, parses its host, and emits
`CONNECT host:port HTTP/1.1`, a Host header, and the Proxy-Connection and
Connection keep-alive headers. The port comes from the request field at
offset 160. A final blank line terminates the request.

The Host header changes to `public-ws-ubiservices.ubi.com` only when environment
kind is 2 and a case-insensitive substring search finds
`gaap.ubiservices.ubi.com` in the host. This environment gate differs from
the [WebSocket setup routine](WEBSOCKET_SETUP_CANDIDATE.md).

Authentication is enabled by a nonempty text field at proxy-options offset 24.
The text fields at offsets 8 and 32 supply the two values formatted as `%s:%s`,
then Base64-encoded for `Proxy-Authorization: Basic ...`. Field names remain
provisional: the gate is a separate field from either formatted value.

Credential conversion preserves the original's two atomic owner reads: one
for the data pointer, then another for its length. Temporary text and byte
vector destruction precedes insertion of the completed authorization header.
The host text used in the request line survives the complete chained stream
expression. These lifetime details matter independently of the final bytes.

## Bounded validation

`tools/compare_proxy_connect.py` compares complete original and candidate
returns across 360 cases: four environment kinds, five host forms, three
ports, two authentication-gate states, and three credential pairs. An
independent Python oracle checks all request bytes. The fixture also checks
unchanged request/options storage, owner reference counts, disposal, ordered
helper/allocation traces, stack balance, and callee-saved registers.

The original URI parser, folded search, byte-vector assignment, Base64 encoder,
and stream extraction execute. Slicing and detachment use synthetic unique
owners; formatting, allocation/free, SDK insertion, stream lifecycle and
insertion, text construction, and ASCII case conversion are modeled.
Concurrency, allocation failure, malformed-input safety, and live proxy or
network behavior are outside this fixture. In particular, these runs do not
prove equivalence under concurrent owner changes.

Three compiled negative controls change the environment gate, authentication
gate, and second credential field. All are rejected by output or trace checks.
The receipt is `progress/proxy_connect_behavior.json`.

```powershell
python tools/compare_proxy_connect.py --original <private-elf> --clang8 <clang++.exe> --build-dir <scratch-directory>
```
