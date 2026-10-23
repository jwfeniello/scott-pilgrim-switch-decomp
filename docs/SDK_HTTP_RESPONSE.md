# HTTP headers and response construction

These complete functions have exact-byte recipes, including relocation bindings:

| Original address | Bytes | Reconstructed routine |
| --- | ---: | --- |
| `0x64c70` | 620 | `ParseHeaderLine` |
| `0x85270` | 1,680 | `ParseHeaderBlock` |
| `0x85900` | 1,952 | `ConstructResponse` |
| `0x1622a0` | 176 | Text-map tree destruction |
| `0x163db0` | 176 | Text-map tree destruction |

Names describe recovered behavior; they are not claims of original symbol names.
The two tree routines use separate recursive-call bindings to their respective
original addresses. The response constructor's tree-destruction call is bound
to `0x701100`, independently of those two additional matches.

## Header parsing

`SdkHttpHeaderLine.cpp` splits a line on `:` with a limit of two parts. With
two parts, it applies the text helper at `0x80020` to both, assigns the value
through header-map lookup, and returns the processed key. Otherwise it returns
a retained copy of the input line. The caller can ignore that return value;
its construction and destruction still matter to the match.

`SdkHttpHeaders.cpp` initializes an empty header map and an empty auxiliary
text field. It searches the input byte buffer for CRLFCRLF from the supplied
cursor. On success it advances the cursor beyond that delimiter, extracts
the preceding range, splits it on CRLF, and processes each line with
`ParseHeaderLine`. If the complete delimiter is absent, it advances only when
a CRLF occurs exactly at the current cursor. Otherwise the cursor is unchanged.

The header-map tree starts at offset 8 within the header object; its auxiliary
text is at offset 32. Header parsing retains buffer owners while reading and
releases all intermediate text/vector owners. The exact source preserves the
order of separator-pointer, separator-length, and cursor evaluation.

## Response construction

`SdkHttpResponse.cpp` reconstructs a 64-byte object layout:

| Offset | Recovered field |
| ---: | --- |
| 0 | Supplied context value |
| 8 | First line as shared SDK text |
| 16 | Header object |
| 56 | Remaining buffer bytes as shared SDK text |

The constructor uses the [matched line reader](SDK_HTTP_LINE.md), then the
header-block parser. It moves the parsed tree into the destination and assigns
the auxiliary text field. It copies the remaining buffer range into the body
text, then removes only the consumed prefix from the input buffer. Thus the
remaining body bytes stay in that buffer after prefix removal. This does not
establish Content-Length handling, chunk decoding, or a complete HTTP client.

The initial unused atomic owner read is preserved. Buffer prefix removal loads
its owner once, reduces the current size, and moves the remaining bytes down;
the branch for an excessive removal count sets size to zero.

## Build details

The header-line and header-block builds use Clang 8.0.1 with the existing libc++
8 headers. The response build uses the existing libc++ 4 map implementation,
O3, tail duplication threshold 4, and
`-mllvm -stackcoloring-lifetime-start-on-first-use=false`. By-value owner
parameters and that stack-lifetime setting reproduce the original temporary
slots. Matching a function with these inputs does not identify the game's
original compiler version.

Only complete strict matches contribute to progress. Related request and
header serializers remain unmatched. These recovered functions are verified
individually; this is not evidence of a bootable rebuilt game.
