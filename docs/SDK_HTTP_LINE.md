# HTTP line reader

`src/SdkHttpLine.cpp` reconstructs `0x84ff0`, a complete 636-byte function,
as `ReadHttpLine`. Its caller at `0x85900` uses it before parsing response
headers. The descriptive C++ name is reconstructed, not an original symbol.

The [header parsers and response constructor](SDK_HTTP_RESPONSE.md) now have
their own complete exact-match recipes.

The input is a shared byte-buffer owner and an unsigned cursor. Buffer data
is at offset 16 and its current size at offset 28. The routine retains a
temporary owner while searching from the cursor for CRLF, releases it, then
advances the cursor past the two delimiter bytes. It retains another owner
while constructing the returned SDK text from the range before CRLF. An
empty range creates an empty SDK text object.

The extraction helper takes start and end offsets. Expressing it as an offset
and a length instead changed the subtraction and branch instructions; keeping
the endpoint comparison recovered the original code generation. Atomic owner
reads, reference acquisition, and destruction are included in the match.

This routine does not guard the search failure sentinel before advancing the
cursor and extracting the range. The reconstruction preserves that behavior;
it should not be treated as a general-purpose validated line parser.

Build `sdk_http_line` uses Clang 8.0.1 O3 and tail duplication threshold 4.
Verification compares all original bytes and resolves allocation, sized text
construction, and the SDK text-content vtable to their original bindings.
No normalized or partial comparison contributes to its exact credit.

## Related recovery work

The neighboring functions at `0x84980` and `0x84d20` serialize an HTTP request
and its header map. The former emits the method name, ` /`, request target,
` HTTP/1.1`, CRLF, serialized headers, and another CRLF. The six method-table
entries are GET, POST, PUT, HEAD, DELETE, and PATCH; an out-of-range method
selects an empty string. Header entries are formatted as `%s: %s\r\n` in tree
iteration order. These two serializers remain unmatched and receive no credit.
