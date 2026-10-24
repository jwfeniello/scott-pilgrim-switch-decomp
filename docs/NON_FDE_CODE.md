# Code without FDEs: curl and nghttp2

The function inventory comes from the original's `.eh_frame` FDEs. **222,892
bytes at `0x3e4`–`0x36e94` have no FDE**, and the rest of `.text` that FDEs do
not cover is alignment padding. This block was always part of the whole-`.text`
denominator, but nothing in it could be credited. It holds:

- **libcurl 7.64.1** (about `0x3e4`–`0x28700`): Nintendo's SDK fork, identified
  by `libcurl/7.64.1` and `NintendoSDK_libcurl-10_6_0` strings;
- **nghttp2 1.38.0** (about `0x28700`–`0x36e94`): the HTTP/2 library curl
  links, identified by its version string and frame/HPACK error strings;
- fork-only code mixed into both ranges: the TLS backend over `nnssl*`, socket
  and resolver glue, allocation callbacks. It has no public source.

This batch credits **605 complete functions / 131,332 bytes** here: curl
344 / 81,324 and nghttp2 261 / 50,008.

## How extents are proven

Without an FDE, a function's extent has to be shown another way. Each credited
extent is listed in [`config/non_fde_functions.tsv`](../config/non_fde_functions.tsv),
and `tools/verify.py` rechecks it against the user-supplied original:

1. **Exact body.** A whole compiled function matches the original bytes at that
   address with checked relocations, the same rule as every other match.
2. **Start evidence**, one of:
   - `call`: a `BL` targets the address;
   - `tail`: an unconditional `B` targets it from a *different* function;
   - `pointer`: an `R_AARCH64_RELATIVE` relocation points at it;
   - `after_function`: it is exactly where an FDE function or another listed
     exact extent ends.
3. **End evidence**, the same kinds, with `before_function` for an end that is
   exactly where an FDE function or another listed extent starts.

A `BL` or `B` only counts when the branch instruction itself lies inside an
FDE function or another listed exact extent. This keeps stray data words in
unproven code from creating boundaries. The extents must not overlap each
other or any FDE. A gap without evidence stays uncredited even when a body
matches inside it. For example, `dohprobe` (1,368 bytes) matches exactly, but
the function after it is unproven and is reached only by a branch from
unproven code.

The report keeps the remaining uncovered bytes in the zero-credit
`unmatched/text_without_fde` unit.

## Build settings

Every credited body in the block uses the same settings: Clang 8.0.1 at
**`-Os`** with a kept frame pointer, **`-fPIC`**, **`-funwind-tables`**, function
and data sections, and **`-mno-implicit-float`**. The frame-setup order only
matches when unwind tables are generated, so the FDEs existed at compile time
and were dropped when the SDK library was linked. Unused library functions were
removed by section garbage collection, so the layout is not contiguous upstream
order.

## The curl fork

The struct offsets and calls in the original pin down how the fork differs
from upstream 7.64.1. The edits are in
[`vendor/curl-7.64.1-sdk.patch`](../vendor/curl-7.64.1-sdk.patch) and the
derived `lib/curl_config.h`:

- **Allocation.** `Curl_cmalloc`, `Curl_cfree`, `Curl_crealloc`, `Curl_cstrdup`
  and `Curl_ccalloc` are functions (`0x28728`–`0x28768`) that tail-call through
  a callback table. Upstream has global function pointers, so every call site
  differs.
- **`struct ssl_primary_config`** has six pointer-sized fields and a flag before
  its bitfields; the original reads `verifypeer` at offset `0x79`, not `0x48`.
  This structure is embedded twice in both `connectdata` and `UserDefined`.
- **`struct UserDefined`** has three byte-sized options after `proxyauth`,
  written by the fork's `setopt` cases.
- **Configuration.** There is no OpenSSL: the built-in MD5 implementation is
  present, and `UrlState` has no `engine` field. TLS goes through a platform
  backend under multi-SSL. NTLM is off (`connectdata` has no NTLM state), and
  so are Unix sockets and `HAVE_SIGNAL`. nghttp2 is on. `SIZEOF_TIME_T` is left
  undefined, so `timediff_t` is `int`; the original compares time differences
  in 32-bit registers.
- **Sockets.** Socket calls and errors use the platform's `nnsocket*` imports,
  for example `nnsocketRecv` and `nnsocketGetLastErrno`. The original calls these
  directly, and the fork configuration maps the BSD names onto them.

The added fields are unnamed (`sdk_reserved`, `sdk_flag`, `sdk_options`): their
offsets are established, but what they are for is not.

## What is not credited

- Fork-modified functions, most visibly `Curl_vsetopt` (16,996 bytes, with extra
  options) and `create_conn` (9,428 bytes), plus several large transfer and
  header functions that differ in a few places.
- The fork-only code listed above.
- Matching bodies whose neighbours leave a boundary unproven.

These matches show that the reconstructed sources compile to the same bytes.
They do not show that the fork's behaviour is fully reproduced, or that these
sources could be linked into a working game.
