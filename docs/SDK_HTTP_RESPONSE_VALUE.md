# SDK HTTP response value

`src/SdkHttpResponseValue.cpp` reconstructs the response value stored by the
WebSocket connection handlers. Original RTTI identifies this class as
`ubiservices::HttpResponse` and its body object as
`ubiservices::HttpStringEntity`.

| Original address | Bytes | Recovered operation |
| --- | ---: | --- |
| `0xfc980` | 472 | Response constructor |
| `0x8ed60` | 388 | Response copy assignment |
| `0x167580` | 360 | Map insertion helper copy |
| `0x167c00` | 360 | Map insertion helper used by the constructor |

All four complete functions match with public Clang 8.0.1 and the committed
libc++ 4 profile. The wrapper `ConstructHttpResponseValue` is not credited;
its emitted constructor is. The two map copies have separate checked helper
bindings. A repeated build reproduced all four matches; changing the
constructor's status or the assignment's length caused exact verification
to reject the affected function.

## Layout and behavior

The reconstructed response is 64 bytes: its virtual table pointer is at 0,
the header object at 8, status at 48, a 32-bit length at 52, and a retained
entity owner at 56. The header object's first word remains unresolved;
its map and auxiliary text occupy response offsets 16 and 40. The source
checks the response size and recovered member offsets at compile time.

Construction copies the header map, retains its auxiliary text, stores the
status and input text length, and allocates a 32-byte string entity. It calls
the still-unmatched body-copy helper at `0x67840`, then retains the entity.
The two class identities are anchored by original GOT cells `0x18ec9f8` and
`0x18ed468`, pointing to vtables `0x17c6a98` and `0x17c4d10` respectively.

Assignment guards self-assignment, assigns the header map, retains/releases
the auxiliary text, copies status and length, then retains/releases the body
entity. It returns the destination. The explicit text assignment call preserves
the original member-address evaluation order.

This corrects an earlier research interpretation of `0x8ed60` as dispatch:
the helper performs value assignment. The proxy-response caller uses it to
store a response in its connection context. That caller remains unmatched.

This value is distinct from the parser's 64-byte response view in
[SdkHttpResponse.cpp](../src/SdkHttpResponse.cpp), which contains request
context, status-line text, parsed headers and body text. Equal total size does
not establish interchangeable types.

## Remaining body-copy boundary

Disassembly of `0x67840` shows a temporary constructed from the input text's
C string, followed by an owned byte-array replacement. The response length
field is obtained separately from the original text's stored length. These
operations may differ for text containing embedded null bytes; the helper
must be reconstructed with its actual behavior.

The current private body-copy candidate remains unmatched. No runtime
fixture or complete network-session result is claimed for this checkpoint.
