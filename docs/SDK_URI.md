# URI helpers used by the WebSocket handshake

Six complete functions total 2,312 exact bytes with Clang8.0.1 O2,
tail duplication threshold4. URI and field names are descriptive ABI views;
no original class name or definition has been recovered for this object.

| Address | Bytes | Recovered behavior |
| --- | ---: | --- |
| 0x73ee0 | 464 | SDK text slice wrapper, empty when position is at or beyond size |
| 0x740b0 | 340 | Parse the URI port component with atoi; empty/missing gives zero |
| 0x74a10 | 368 | Replace the query component through the URI reconstruction helper |
| 0x74b80 | 116 | Append a NUL-terminated string to shared SDK text |
| 0x74c00 | 124 | Same append, returning the destination pointer for chaining |
| 0x74c80 | 900 | Build path plus optional parameters, query, and fragment |

The URI view has a shared text owner at offset8 and nine offset/count pairs
starting at16. A pair is present only when neither member equals size_t(-1).
The matched helpers use the port pair at80, path at96, parameters at112,
query at128, and fragment at144. The request-target builder inserts `;`,
`?`, and `#` for the respective present components, even when their count
is zero. It does not normalize, encode, validate, or remove the fragment.

The port reader returns the atoi result as an int. A caller may truncate
that result; the reader itself does not enforce a 16-bit range. Missing
components construct and release an empty shared string as in the original.
The slice wrapper calls the separately matched substring converter0x80e00,
whose C-string conversion truncates embedded NUL bytes.

Append operations preserve copy-on-write detachment and repeated atomic owner
reads, then insert the supplied byte range at the current end. They bind to
DetachText0x7efe0 and InsertText0x7f310. Each complete function and all
references/literals are checked independently; no fuzzy credit is used.

The unmatched handshake setup0x83890 uses these helpers to parse the URI,
store the request target at offset0x98, and choose a port at0xa0. Consequently
the two bytes initially zeroed by its constructor are a port field, not
confirmed independent flags. The parser0x73580/2400 and setup0x83890/2144
remain unmatched.

The query replacement wrapper retains two copies of the supplied shared text
and initializes two indices to 7, but passes a replacement count of one to
0x74210. Both temporary lifetimes are preserved. This is a reconstructed ABI
view, not evidence of the original container type. The 2,040-byte URI
reconstruction callee remains unmatched and receives no exact credit.

A private reassembly candidate now compiles to 2,040 bytes, with two
normalized instruction differences in the replacement-count guard. Passing
the shared source owner and range table separately to the range-reading helper
reproduces the original register allocation. This diagnostic proximity is not
byte-match verification or a portable-behavior proof; no credit is assigned.

A complete, behavior-tested parser candidate is now available; see
[URI parser candidate](SDK_URI_PARSER_CANDIDATE.md). It is excluded from
exact coverage despite matching the original size and passing bounded tests.
