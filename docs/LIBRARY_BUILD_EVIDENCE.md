# Library build evidence

This batch adds **740 complete exact functions / 319,460 bytes** and brings the
verified total to **31,051 functions / 3,443,348 bytes / 21.000296%** of executable
`.text`. Almost all of it comes from public upstream library sources once their
revision and build shape were identified. These are isolated complete-body
matches; they do not establish a linked or bootable game.

| Source | Functions | Bytes |
| --- | ---: | ---: |
| OpenSSL (new 1.0.2q views and existing OpenSSL builds) | 382 | 226,704 |
| FreeType 2.9 | 278 | 75,724 |
| zlib 1.2.11 (Ubiservices copy) | 4 | 11,624 |
| MiniUPnPc 1.9 (Storm fork) | 3 | 1,556 |
| libc++ 4 container instantiations | 4 | 1,344 |
| Existing and recovered C++ sources (flag variants, extra addresses) | 69 | 2,508 |

## Verifier change: unnamed section symbols

`link_method` previously recorded every unnamed section symbol under the empty
name `''`. A function referencing a local static function (`.text` section symbol)
and a string literal (`.rodata.str` section symbol) therefore resolved the literal
through the `.text` binding, and two different unnamed sections conflicted. The
full-byte comparison always rejected the result, so this produced false
negatives, never false credit.

Unnamed section symbols now bind per section (`@.text`, `@.bss`, ...), and
relocations into mergeable literal sections always use the content-checked
literal path. Older receipts that recorded `''` still link unchanged; all
existing builds were rebuilt and re-verified. `test_unnamed_section_symbols_bind_per_section`
covers both behaviors. Section-splitting builds (`-ffunction-sections
-fdata-sections`) then bind each jump table and constant separately instead of
requiring an entire translation unit's `.rodata` to match as one block.

## OpenSSL revision: 1.0.2q

OpenSSL error calls pass `__FILE__` and `__LINE__`. Reading the line argument at
each of the 2,408 original call sites and checking it against every public 1.0.2
tag gives:

| Tag | Sites at an error/allocation statement |
| --- | ---: |
| 1.0.2p | 2,207 |
| **1.0.2q** | **2,389** |
| 1.0.2r | 2,281 |
| 1.0.2u | 2,134 |

The 19 remaining q mismatches are register-tracking misreads in the scan (for
example, line values 16–20). Multi-line `SSLerr(...)` calls report the
invocation's last line, which the comparison accounts for.

Three build settings then explain most remaining OpenSSL differences:

- **Section splitting** (above).
- **`-fPIE`**: the original loads some external function addresses through
  the GOT where a non-PIC build uses `ADRP+ADD`.
- **`-mno-implicit-float`**: the original zeroes and copies small memory blocks with
  general-register stores; default Clang uses SIMD `q` registers, which also
  shifts stack slots and store order.

About thirty q sources had never been compiled because of include paths, including
`rsa_pmeth.c`, the `*_ameth.c` files, `p_lib.c` and `e_aes.c`. OpenSSL now has 49
unmatched FDE functions / 29,804 bytes in its span, down from 428 / 255,884 bytes.

## SDK-region code avoids implicit SIMD

Below `0x640000` (Ubiservices, Storm, OpenSSL and related SDK code, about 28,000
functions), not one original function zeroes memory with SIMD `movi`/`stp q`.
Above it, game code does so routinely. This supports `-mno-implicit-float` or
`-mgeneral-regs-only` for the SDK half. Recompiling recorded private SDK
experiments with the flag did not by itself close their remaining differences.

## zlib

The zlib copy next to OpenSSL (`0x253a60`–`0x256940`) matches public 1.2.11
`inflate`, `inflateInit2_`, `inflate_fast` and `inflate_table` with
`-mno-implicit-float` and section splitting. The copies near `0x530000` and
`0xa85000` still differ; separate and single-translation-unit builds both fail.

## FreeType 2.9 and a bulk build

`0xe10000`–`0xe90000` (about 574 KB unmatched before this batch) is FreeType: AFM,
BDF, PCF, Type 1/CID/Type 42, PFR, WinFNT, autofit properties, the TrueType
interpreter and FreeType's bundled gzip. Every FreeType-specific string there
exists in tags 2.9 through 2.10.4. Tag 2.8.1 lacks `cff-load` and several
tricky-font names, and 2.11.0 drops the `warping` property. 2.9 reproduces the
largest set of complete bodies, a superset of every later tag tested.

Per-module builds match 170 functions. Large original functions are bigger than
any per-module profile produces (for example `_bdf_parse_start` is 4,224 bytes
against 3,808 at `-O3`), while placing `ftbase.c` in the same translation unit
brings them close (4,300). A single translation unit containing every module adds
99 more exact functions. The original therefore appears to use a bulk/unity build
or equivalent cross-file inlining; the exact grouping is not established.

Additional evidence and constraints:

- FreeType 2.9 uses inline assembly for `FT_MulFix` on AArch64. The project never
  credits inline assembly, so every credited build defines
  `FT_CONFIG_OPTION_NO_ASSEMBLER`. Two bodies that only match the assembly form
  (`0xe10430`, `0xe10310`) remain uncredited.
- Two property setters match only with `FT_CONFIG_OPTION_ENVIRONMENT_PROPERTIES`
  disabled. That variant adds bodies without losing any, so it is plausibly the
  original setting.
- Three bodies need `-fsigned-char` (`ldrsb` in the original).

## MiniUPnPc and libc++

Storm's MiniUPnP fork is not upstream (it has its own `logger.c`). Public
miniupnpc 1.9 still reproduces `parsexml`, `NameValueParserStartElt` and
`GetValueFromNameValueList`. A private libc++ 4 deque instantiation reproduces
`move_backward` for three 48-byte-element deques and one hash-table member.

## Limits found in this batch

- **Trap encoding.** 337 unmatched functions (40,860 bytes) contain the original
  trap word `0xe7ffdefe`; public Clang emits `brk #1` for `llvm.trap`. They cannot
  match with the public compilers. No matched function contains either form.
- **Scheduling.** Several FreeType and OpenSSL bodies differ only in the order of
  two independent instructions (loop counters, a pair of stores). No public
  scheduling model or flag tested reproduces them.
- **Jump-table holes.** `pkey_rsa_ctrl` matches every instruction, but its byte
  jump table fills unused cases with a different target.
- **Defined GOT symbols.** `lh_new` loads `strcmp` through a GOT cell whose
  `GLOB_DAT` relocation names a symbol defined in the executable. The verifier
  only models undefined imports there.

## Unmatched research, no credit

- ComponentCollection (`0x762630`, 41 × 1,964 bytes): 28 → 20 diagnostic
  differences. Initialising `size` first fixes a store order, and a `void*` memcpy
  guard fixes one comparison group. LLVM orders commutative compare operands by
  value "complexity", and a cast ranks below a plain instruction. A typed
  `Allocate` fixes every compare but disturbs register allocation. What remains is
  allocation of map/node registers and the hash constant.
- Job constructor (`0x68ba0`): unchanged at 7 differences across float-flag, PIE
  and member-pointer null-test spellings.
- Service response (`0x181f30`): about 324 differences with the float flags.

The private scanner also skipped later symbols whose masked instruction pattern
had already failed, even when their literals or call targets differed. That is
fixed, and a full rescan of all lab objects found the last few bodies listed above.
