# HUD pools and event lifetimes

This checkpoint adds 127 complete exact functions / 42,044 bytes over
`085885727c23b41be02f24b10b152305f68a46d3`. Its largest addition is the cleanup
of 32 distinct `SPTG::TSmallPool<...>` HUD pool types, with two destructor
entry points each. These identities come from the original vtables and RTTI.

All 1,508 configured builds passed the full original-byte comparison, and all
17 verifier/report tests passed. The resulting checkpoint is 30,306 exact
functions / 3,122,192 bytes / 19.041629% of the full executable `.text`.
Fully linked game and data coverage remain unestablished.

| Recovered family | Functions | Exact bytes |
| --- | ---: | ---: |
| HUD object-pool cleanup | 64 | 14,080 |
| Component event readers | 9 | 5,940 |
| Component vector and reference cleanup | 9 | 4,536 |
| GUID hash-bucket rebuilding | 8 | 6,016 |
| Storm string-record growth and copying | 13 | 6,364 |
| Additional string helpers with imported RTTI | 4 | 1,580 |
| Storm shared event cleanup | 17 | 1,768 |
| RapidJSON pretty printing and array indexing | 3 | 1,760 |

## What the HUD routines do

The pool stores its allocation beginning and used end at offsets 24 and 32.
These matched instantiations destroy 72-byte elements, in forward order, through
their virtual destructors. They reload the storage pointer after destructors,
find the allocation's engine allocator, and free the allocation. The ordinary
destructor clears the two storage pointers. The deleting destructor additionally
deletes the pool object.

This recovers pool lifetime management, rather than the drawing, update, or
gameplay behavior of the HUD elements. The complete pool/element declarations
are still unknown. The source's volatile loop access preserves the observed
reloads; byte equality does not prove that the original source used that qualifier.

The verifier rejected an early candidate with the same normalized instruction
listing but a different conditional branch destination. The accepted build uses
ordinary C++ and the compiler's `-jump-threading-threshold=0` option, with full
branch displacements checked. A negative control that skips destruction of the
first live element was rejected for all 64 functions.

## Other recovered behavior

The component readers first call the inherited reader, set the proxy's owner,
and read saved event records. They skip readonly or incomplete keys, resolve the
remaining targets, choose a typed or generic callback, register it, mark the host
changed, and release their temporary callback ownership. Tag values and host
offsets differ by component; complete class layouts and callback signatures
remain provisional.

The GUID helpers rebuild hash buckets while keeping equal keys together. Original
allocation-context RTTI identifies `storm::GUID` keys. Only the observed
length-byte/key-byte prefix is represented by the source; its complete key
declaration is not recovered. String-record vector growth allocates a larger
buffer, copies existing records through their record constructor, destroys old
strings, and releases the old buffer. The event destructors release a shared
payload and its weak control-block ownership when the last strong owner goes away.

## Import verification

Some string allocations pass `typeid(char).name()` to the allocation tracker.
The original obtains that type information through the imported `_ZTIc` symbol.
The verifier now recognizes zero-addend `R_AARCH64_GLOB_DAT` relocations to
undefined object symbols. It requires the compiler's undefined symbol name,
recipe import name, and original dynamic symbol to agree, and checks that the
GOT cell is writable. It rejects wrong names, wrong cells, nonzero addends,
defined source symbols, relative-relocation conflicts, and ambiguous bindings.
Complete function bytes and original FDE boundaries remain mandatory.

## RTTI-backed HUD pool names

Addresses are original ELF virtual addresses. Each row represents
`SPTG::TSmallPool<SPTG::ELEMENT>` and two 220-byte complete functions.

| Element | Ordinary destructor | Deleting destructor |
| --- | --- | --- |
| `HudStatusBEATINGHEART` | `0x8ab790` | `0x8ab870` |
| `HudStatusDAMAGE` | `0x8a9b40` | `0x8a9c20` |
| `HudStatusDROPIN` | `0x8a0340` | `0x8a0420` |
| `HudStatusFX_1Up` | `0x8a1f20` | `0x8a2000` |
| `HudStatusFX_BLOCK` | `0x8a8bf0` | `0x8a8cd0` |
| `HudStatusFX_CAMERAUNBLOCK_GO_DOWN` | `0x8a5cb0` | `0x8a5d90` |
| `HudStatusFX_CAMERAUNBLOCK_GO_LEFT` | `0x8a7030` | `0x8a7110` |
| `HudStatusFX_CAMERAUNBLOCK_GO_RIGHT` | `0x8a69b0` | `0x8a6a90` |
| `HudStatusFX_CAMERAUNBLOCK_GO_UP` | `0x8a6330` | `0x8a6410` |
| `HudStatusFX_EMOTICON` | `0x8a76d0` | `0x8a77b0` |
| `HudStatusFX_HITSTRONG` | `0x8a8fe0` | `0x8a90c0` |
| `HudStatusFX_HITWEAK` | `0x8a93d0` | `0x8a94b0` |
| `HudStatusFX_KEY_DISAPPEAR` | `0x8a5050` | `0x8a5130` |
| `HudStatusFX_LAND` | `0x8a8800` | `0x8a88e0` |
| `HudStatusFX_LANDONWATER` | `0x8a8410` | `0x8a84f0` |
| `HudStatusFX_LEVELUP` | `0x8a7c30` | `0x8a7d10` |
| `HudStatusFX_LEVELUP_STRIPE` | `0x8a7980` | `0x8a7a60` |
| `HudStatusFX_PLAYERNAME` | `0x8a2530` | `0x8a2610` |
| `HudStatusFX_SLIDE` | `0x8a8020` | `0x8a8100` |
| `HudStatusFX_TEXT` | `0x8a5630` | `0x8a5710` |
| `HudStatusFX_VEGANPOLICE` | `0x8a7420` | `0x8a7500` |
| `HudStatusGUTS` | `0x8aa870` | `0x8aa950` |
| `HudStatusGUTSDAMAGE` | `0x8a14e0` | `0x8a15c0` |
| `HudStatusHEARTS` | `0x8ab3c0` | `0x8ab4a0` |
| `HudStatusHPRECOVERY` | `0x8a0d70` | `0x8a0e50` |
| `HudStatusKIMAREACLEAR` | `0x8a2ea0` | `0x8a2f80` |
| `HudStatusLIFE` | `0x8abd50` | `0x8abe30` |
| `HudStatusMONEY` | `0x8aa2b0` | `0x8aa390` |
| `HudStatusPLEASEWAIT` | `0x8a1b30` | `0x8a1c10` |
| `HudStatusPOS_TEXT` | `0x8a4c60` | `0x8a4d40` |
| `HudStatusRATIONS` | `0x8aac40` | `0x8aad20` |
| `HudStatusSCOTTAREACLEAR` | `0x8a3810` | `0x8a38f0` |
