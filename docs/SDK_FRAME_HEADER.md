# Shared-buffer frame header

`SdkFrameHeader.cpp` matches the complete 364-byte function at `0x81950`.
The names are descriptive ABI views. The neighboring frame builder and its
126/127 extended-length tags, mask bit, and FIN bit strongly suggest WebSocket
framing. RTTI identifies the shared buffer as `ubiservices::WebSocketBuffer`;
the frame-view and owner names remain descriptive.

The reader rejects a null input buffer or fewer than two bytes. If a header
length is already set it returns true. Otherwise it retains the input buffer
through the reconstructed atomic owner assignment and computes the header
length: two base bytes, eight additional bytes for length tag 127, two for
the subsequent tag check `>= 126`, and four when the mask bit is set.
Repeated atomic-owner and data reads are preserved, including the second
threshold comparison. It computes the required header length; it does not
prove that the entire header or payload is present or valid.

The shared buffer has its data pointer at offset 16, capacity at 24, size at
28, a byte flag at 32, and a 32-bit field at 36, following a 16-byte reference
object header. The frame view contains its owner at offset 0 and computed
header length at offset 8.

Clang 8.0.1 O2 matches the full function and its bindings. The larger builder at `0x81ad0` is matched separately in `SdkFrameBuild.cpp`.

## Frame builder

`SdkFrameBuild.cpp` matches all 1,624 bytes at `0x81ad0`. It resets the previous
owner, chooses a 2-, 4-, or 10-byte base header according to payload length,
optionally adds four mask-key bytes, allocates a shared buffer, and writes the
header and payload. Extended lengths use network byte order. A null payload
sets opcode 8. Otherwise the opcode comes from the payload buffer's field at
offset 36. The final-frame bit is set when the fragmentation argument is false.

When requested, this function sets the mask bit and stores the supplied key.
It copies payload bytes without applying XOR masking; any separate masking
operation must be traced elsewhere. Atomic ownership, buffer growth, zeroing,
and the observed endian-initialization flag access are preserved.

The original buffer vtable is bound at `0x17c7a40` through GOT cell `0x18ecb48`.
The reconstructed constructor initializes its data/flag fields before assigning
capacity and size in its body, reproducing the original instruction order.
RTTI confirms the buffer name `ubiservices::WebSocketBuffer`: vtable
`0x17c7a40` points to typeinfo `0x17c8e98`, whose name at `0x133bd73` is
`N11ubiservices15WebSocketBufferE`. The field layout is reconstructed; no
recovered original class definition is claimed.

## Payload consumption

`SdkFrameConsume.cpp` matches the complete 912-byte function at `0x82140`.
It decodes the short, 16-bit, or 64-bit payload length, copies a nonzero
opcode into the destination buffer, appends the payload, consumes the header
and payload from the input buffer, then resets the saved header length.
Buffer growth and atomic reference ownership follow the same recovered
mechanisms as the builder.

The extended length is decoded into a 64-bit value, but the append and
consume operations take 32-bit counts. This truncation is preserved. The
function assumes its caller has supplied a sufficiently complete frame;
it does not validate the available input length or apply XOR masking.
Clang 7.0.1 and 8.0.1 both reproduce all bytes and verified linked references.
