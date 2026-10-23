# WebSocket connection response helpers

The request starters contain the original diagnostic labels
`JobWebSocketOpenConnection::writeProxyRequest` and
`JobWebSocketOpenConnection::writeHandshakeRequest`. Together with the
response-constructor call sites, these connect the recovered HTTP helpers
to the WebSocket opening job.

| Original address | Bytes | Reconstructed routine |
| --- | ---: | --- |
| `0x860a0` | 228 | `IsRedirect` |
| `0x86190` | 368 | `ReadStatusCode` |
| `0x86300` | 812 | `ValidateHandshake` |
| `0x8c690` | 456 | `StartProxyRequest` |
| `0x8cb90` | 452 | `StartHandshakeRequest` |

All five have complete exact-byte recipes with original relocation bindings.
Function names are descriptive reconstructions. The original labels provide
evidence for the enclosing job name and subsequent write stages.

## Status and validation

`ReadStatusCode` splits the response's first line on a space. It returns zero
if fewer than two parts exist or the second part is empty; otherwise it passes
that part to `atoi`. It does not itself validate the HTTP version, numeric
syntax, or status range. Keeping a reference to the second text object avoids
an extra vector-pointer reload and reproduces the original instructions.

`IsRedirect` requires a status in the inclusive range 300–307 and a `location`
entry found by the recovered map comparator. It checks entry presence, not a
nonempty value. This documents this game's predicate rather than a general
HTTP redirect policy.

`ValidateHandshake` passes statuses other than 101 to the
[matched HTTP-status result mapper](SDK_HTTP_RESULT.md) at `0x613a0`.
For 101, an optional check compares the expected accept text at
request offset 168 with the `Sec-WebSocket-Accept` header value. Header lookup
falls back to the response header object's auxiliary text when absent.

A mismatch produces code `0xb02` with the message
`Cannot validate Serial Key received from the server.` Passing or disabling
that check produces code zero and `Websocket successfully connected.` Both
constructed results retain their message, set the context pointer to null,
and set the final integer field to -1. No additional header checks occur in
this helper; callers may enforce other conditions.

## Request starters

Both starters build shared SDK text, allocate a 40-byte buffer object through
the existing allocator, initialize it using `0x14ef20`, and assign its owner
to job offset 296. The temporary buffer owner is released before the job's
next stage is configured, while the request text lives until function exit.

The proxy starter calls the CONNECT builder with request offset 120 and
proxy options at offset 312. The handshake starter calls the HTTP request
serializer with request offset 120. Both set state at offset 12 to 1, write
10 to the 64-bit field at offset 16, install their respective write callback
at offset 24, zero the following three callback words, and set the diagnostic
label at offset 56. The unit and broader meaning of the value 10 remain
unresolved.

## Callers still being recovered

Direct calls to the [response constructor](SDK_HTTP_RESPONSE.md) occur in
`0x8e120` (3,132 bytes) and `0x8f8a0` (3,236 bytes). Their strings and calls
identify handshake-response and proxy-response processing. They include
callbacks, logging, locking, and job transitions and remain unmatched.
The proxy handler's response-value constructor and assignment now have
[complete matches and RTTI-backed identities](SDK_HTTP_RESPONSE_VALUE.md).
The assignment helper stores a value; it does not itself dispatch an event.
The request serializers at `0x84980` and `0x84d20` also remain unmatched.

This checkpoint verifies the listed functions individually; it does not
establish a working network session or a bootable rebuilt game.
