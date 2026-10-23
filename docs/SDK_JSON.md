# Recovered SDK JSON operations

[SdkJson.cpp](../src/SdkJson.cpp) reconstructs JSON operations used by the SDK
response handler, using the vendored RapidJSON 1.1.0 headers and a recovered pool
allocator layout. **11 complete functions / 4,276 bytes** match the original
instructions with checked relocation bindings.

| Original address | Bytes | Recovered operation |
| --- | ---: | --- |
| `0x42890` | 336 | RapidJSON object-member insertion |
| `0x44100` | 1,092 | Assign a named member, inserting it if absent, and update the current-value pointer |
| `0x44550` | 80 | Assign a signed integer through the writer |
| `0x445a0` | 68 | Assign a double through the writer |
| `0x445f0` | 320 | Assign a C string through the writer |
| `0x44730` | 344 | Assign an intrusive SDK string through the writer |
| `0x44890` | 596 | Convert a vector of SDK strings to a JSON array |
| `0x44de0` | 520 | RapidJSON value-copy constructor with a destination allocator |
| `0x44ff0` | 388 | Add a named member by copying another JSON view's current value |
| `0x173390` | 276 | RapidJSON document handler for signed 64-bit integers |
| `0x1734b0` | 256 | RapidJSON document handler for unsigned 64-bit integers |

These operations explain several dependencies of the unmatched response handler
at `0x181f30`. They do not identify that entire handler as a JSON destructor, nor
establish every original class declaration. Names such as `JsonDocument`, `Writer`,
and `JsonOwner` in this source are local ABI views.

## Layout and ownership evidence

The internal document view contains an owner at `0x18`, a parent JSON value at
`0x20`, an allocated member-name pointer at `0x28`, and an inline member-name
buffer beginning at `0x30`. Lookup chooses the inline buffer when its first byte
is nonzero, then the allocated name, then an empty string. This gives meaning to
fields previously labeled unknown, scratch, or flag in the response candidate.
The candidate's byte at `0x30` is the start of that inline name, not an established
independent Boolean field.

The owner holds an intrusive root pointer and a current-value pointer at `0x10`.
The root's document pointer is at `0x10`; its RapidJSON allocator pointer is at
`0x18`. The recovered value representation is 24 bytes, with 48-bit pointer packing
disabled. The document representation used here is 104 bytes.

Member assignment transfers a value into an existing member, or constructs a name
and inserts a new member. It then updates the owner's current-value pointer.
The transfer clears the source value's type flags. Nested-member insertion instead
copies the source value using the destination allocator before insertion.

The allocator uses linked chunks with capacity, used size, and next pointer at
offsets `0`, `8`, and `0x10`. It rounds requests to eight bytes. Cleanup frees
owned chunks and retains a supplied user buffer, resetting that buffer's used size.
Allocation and release bindings are `0x36ea0` and `0x37030`. Reallocation remains
an external dependency, bound to `0x16dc90` where used.

## Reproduction and limits

`sdk_json_o3_general` verifies ten functions with Clang 8.0.1 O3, a preserved frame
pointer, PIC, libc++ 4 headers, and `-mgeneral-regs-only`. The separate
`sdk_json_o2_simd` profile verifies the double setter using the floating-point ABI.
Both use the checked-in RapidJSON headers. The normal full verifier checks each
entire original FDE range; no prefix or fuzzy match contributes credit.

The JSON array-append routine at `0x44af0`, writer field-selection routine at
`0x436b0`, and document initializer at `0x45180` remain unmatched. The existing
response-handler fixture still uses synthetic JSON boundaries. These exact helper
matches do not by themselves validate the complete logging path or a game build.

## JSON view initializer candidate

[src/wip/JsonFieldInit.cpp](../src/wip/JsonFieldInit.cpp) reconstructs the 368-byte
initializer at `0x45720`. It clones the supplied view's owner, retains the shared
document root, copies the member/current-value pointers, records the parent value,
and copies the requested member name. Up to 15 name bytes plus the terminator fit
in the 16-byte inline buffer. Longer names use a block with an eight-byte header
containing the requested byte count and the offset to the character storage.

The compiled candidate is also 368 bytes. After normal relocation to the original
address, one instruction differs, at function offset `0xf0`: the candidate adds
nine to the returned length, while the original adds eight to the previously
computed length-plus-one. This is **not an exact match and receives zero credit**.
The source is not in the matching-build manifest.

[tools/compare_json_field_init.py](../tools/compare_json_field_init.py) runs both
versions in the ARM64 harness. **216 cases** compare allocation/copy traces,
destination fields, source-owner storage, root reference counts, and allocation
contents, with stack and callee-saved register checks. Cases cover selected name
lengths from zero through 255, two byte patterns, null/one-owner/multiple-owner
roots, and null/non-null member and current-value pointers. Three compiled
negative controls are rejected: an incorrect reference increment, an incorrect
inline-storage boundary, and an incorrect allocation-header offset.

```text
python tools/compare_json_field_init.py --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory>
```

The optional Unicorn dependency is required. The
[research receipt](../progress/json_field_init_behavior.json) records source and
original hashes, flags, and the differing instruction offset. Allocation,
`strlen`, and `memcpy` are synthetic services; allocation failure, giant sizes,
invalid inputs, concurrency, and full-game behavior are outside these checks.

The field selector at `0x436b0` uses this initializer while constructing returned
writers and managing temporary shared views. A private reconstruction of that
larger routine remains unmatched; verifying this dependency does not establish
the complete field selector's behavior.
