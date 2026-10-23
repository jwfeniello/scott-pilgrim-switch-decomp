# Recovered SDK JSON operations

[SdkJson.cpp](../src/SdkJson.cpp) and
[SdkJsonDocument.cpp](../src/SdkJsonDocument.cpp) reconstruct JSON operations used
by the SDK response handler, using the vendored RapidJSON 1.1.0 headers and a
recovered pool allocator layout. **12 complete functions / 4,888 bytes** match the
original instructions with checked relocation bindings.

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
| `0x45180` | 612 | Initialize a shared JSON document and its first view |
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
`sdk_json_document` verifies the shared-document initializer with Clang 8.0.1 O2
and general registers. All use the checked-in RapidJSON headers. The normal full verifier checks each
entire original FDE range; no prefix or fuzzy match contributes credit.

The JSON array-append routine at `0x44af0` and writer field-selection routine at
`0x436b0` remain unmatched. The existing
response-handler fixture still uses synthetic JSON boundaries. These exact helper
matches do not by themselves validate the complete logging path or a game build.

## Exact shared-document initialization

The initializer at `0x45180` allocates a 24-byte intrusive root, a 104-byte
RapidJSON document, and a 24-byte view owner. The RapidJSON constructor also
creates its pool object. Temporary owners retain the root while the first view
is constructed, then release their references, leaving that view as the owner.
The initializer clears the parent and allocated-name pointers after destroying
those temporaries. The inline-name buffer is left for the caller to initialize.

Original RTTI identifies the root as **`ubiservices::JsonImpl::JsonRoot`**:
GOT cell `0x18ec820` resolves to vtable `0x17c4390`, whose typeinfo is
`0x17c7b08`; its name is stored at `0x1339ffe`. This establishes the root's
identity, without recovering every original declaration around it.

The source models the JSON view as a member at offset eight and checks the layout
with static assertions. Keeping null and non-null raw-root construction paths
separate reproduces both original atomic-exchange loops. Combining them produced
a shorter candidate that was not byte-identical. The 612-byte match covers the
entire initializer and its relocation bindings; the original class declarations
and complete game build remain unrecovered.

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

## Text-buffer flush and growth

`GrowJsonBuffer` (`0x459e0`, 232 bytes) reconstructs the helper that appends
the pending character range to an allocator-backed string, then resets the
write cursor. It reallocates when the capacity is insufficient or the cursor
is null, with a minimum allocation of 1,024 characters. The character array
has an eight-byte header holding its count and allocation offset.

The reconstructed buffer layout has begin/cursor/end pointers at offsets
0/8/16 and the string at offset 24. Names remain descriptive rather than
recovered symbols. Both sides of the capacity/cursor predicate are evaluated
to reproduce the original conditional comparison. Exact verification covers
the complete function, including bindings to the string insertion helper
`0x45ad0`, allocator `0x36ea0`, and deallocator `0x37030`.

## JSON view destruction

`src/SdkJsonDestructors.cpp` reconstructs `ubiservices::Json` destruction.
The class identity comes from original RTTI at `0x17c7af0`, associated with
vtable `0x17c4368`. The normal destructor at `0x3eed0` and deleting destructor
at `0x3ef50` each match a complete 120-byte function.

Destruction clears the 24-byte view's owner pointer, atomically releases the
owner's shared root, calls its virtual disposal method when the reference
count reaches zero, then frees the owner allocation. The deleting destructor
also releases the view allocation. Virtual-table references, free/delete
bindings and all instructions are checked by the exact verifier.

Only the Json class identity is established by RTTI here. Names and types
for the shared-root and owner internals remain reconstructed ABI views.

## Construction and deep copying

`src/SdkJsonConstructors.cpp` reconstructs four complete functions:

| Function | Address | Bytes | Behavior |
| --- | --- | ---: | --- |
| `CopyJsonView` | `0x3ee00` | 196 | Allocate an owner, retain the shared root, copy name/cursor |
| `JsonFromChars` | `0x3e9d0` | 476 | Create a document and parse a non-null character pointer |
| `JsonFromText` | `0x3ebb0` | 532 | Create a document and parse nonempty SDK text |
| `DeepCopyJsonView` | `0x3efe0` | 968 | Create an independent root/document and copy the selected value |

The names are descriptive. Parsing uses the external text-normalization and
RapidJSON parsing routines, preserving their original call bindings. A
successful parse selects the document as the view cursor; a parse error
clears the cursor. Null input in the character-pointer overload and empty
input in the SDK-text overload skip parsing.

The deep-copy routine constructs an empty JSON object and clears the result
cursor when the source has no selected value. Otherwise it allocates a new
root, copies the source value through the existing `0x44de0` helper, preserves
the source name pointer, and releases intermediate ownership references.

Passing normalized text and temporary root ownership by value to inline
helpers reproduces their lifetimes and stack slots. Separate return scopes
preserve return-value construction without a shallow owner copy. An explicit
copy constructor retains the shared root if copy elision is unavailable.
All four functions are credited only after complete byte and binding checks.

## Buffer finalization

`FinishJsonBuffer` in `src/SdkJsonBufferFinalize.cpp` matches the complete
268-byte function at `0x3e8c0`. If an array is present, it appends the pending
character range to the accumulated string, clears the array's begin pointer,
and frees the allocation using its stored header offset. It then returns a
converted copy of the accumulated string.

Two separate, provisional allocator template views select libc++ 8's
converting string constructor. That constructor reproduces the original
short- and long-string copying paths, unlike the same-type copy constructor.
Both allocator bindings resolve to the original engine allocator. This
is evidence for a matching reconstruction, not proof of the original
allocator class names or source declarations.

## SDK string construction

`SdkTextConstructor.cpp` reconstructs the complete 448-byte function at
`0x7e7e0`. It allocates a 40-byte reference-counted string object, constructs
a temporary string from a nullable character pointer, converts that string
into the object's string member, and installs the object with an atomic
reference increment and pointer exchange. Null input produces an empty string.
The temporary string is destroyed after the object is installed.

The original vtable binding identifies `ubiservices::String::InternalContent`
through RTTI. The local `Object` and allocator names are provisional. Distinct
allocator template types select the converting constructor that matches the
original; this does not prove the original allocator class declarations.
Clang 8.0.1 with libc++8 matches the full function and verified bindings.

The same build also matches the length-specified character constructor at
`0x7e9a0` (440 bytes), wide-character constructor at `0x7eb60` (576 bytes),
and length-specified wide-character constructor at `0x7eda0` (568 bytes).
The wide forms construct a temporary wide string, call the original conversion
helper at `0x81300`, then initialize the reference-counted string object.
The temporary wide string is passed by value to the construction helper; this
preserves the original stack layout and destruction order. The conversion
helper itself is still external to this reconstruction.

## Shared string detachment

`SdkTextDetach.cpp` reconstructs the complete 812-byte function at `0x7efe0`.
When the signed reference count is less than two it returns without allocation.
Otherwise it creates a new 40-byte string object: the `preserve` argument
selects either a copy of the current contents or an empty string. It assigns
the new reference through an acquire/recheck/compare-exchange retention loop,
releases the former reference, then releases its temporary owner.

The source string is passed directly to the object constructor. A deferred
string-view conversion preserves initialization and source-access order.
These are reconstructed source expressions, not recovered original class
definitions. The full function matches with Clang 8.0.1 and libc++8, including
its allocator, vtable, and library-call bindings.

## String prefix and replacement wrapper

`SdkTextOperations.cpp` matches the 304-byte prefix function at `0x7f630`
and the 384-byte replacement wrapper at `0x7f760`. The prefix helper returns
a string by value, copying the requested byte count when it fits, or the full
string otherwise. The replacement wrapper obtains character pointers from
two reference-counted strings and calls `0x7f8e0`, then wraps its returned
string in a new reference-counted object. The search-and-replace implementation
at `0x7f8e0` is matched separately in `SdkTextReplace.cpp`.

`SdkTextReplace.cpp` matches all 1,048 bytes of `0x7f8e0`. It searches for
the first occurrence of a nonempty character string, then combines the prefix,
replacement, and suffix. An empty search string or no match returns a copy
of the input. It calls the matched prefix helper and the original string
append implementation. Its manual search uses the original `i + j <= size`
bound, including access to the terminator, and preserves the original repeated
length and atomic-owner reads. This is reconstruction of the original behavior,
not a generalized replacement API.

`SdkTextWrapping.cpp` matches five separate 316-byte wrappers at `0x47620`,
`0x47760`, `0x7fd00`, `0x80020`, and `0x80400`. Each obtains a string result
from its own bound operation and creates a reference-counted string object.
The first-occurrence replacement wrapper is `0x7fd00`; the shared source name
`TransformCharacters` is deliberately generic because the other wrappers
bind different callees. The manifest records each binding independently.

`SdkTextReplaceAll.cpp` matches the 480-byte function at `0x7fe40`. It copies
the input string, repeatedly finds and replaces the search string, and advances
by the replacement string's length. It preserves the original loop, including
its lack of an explicit empty-search guard; no new edge-case policy is added.

## Uppercase and substring

`SdkTextCaseSubstring.cpp` matches uppercase conversion at `0x80540` (284
bytes) and substring extraction at `0x80e00` (412 bytes). Uppercase conversion
copies the string and applies `toupper` to each unsigned byte, reevaluating the
end iterator after each call as the original does. This is byte-wise conversion,
not Unicode case folding.

The substring helper calls `substr(position, count)` and constructs the result
from that temporary's `c_str()`. Consequently embedded NUL bytes can truncate
the returned string. Both the bounds behavior and this conversion are preserved.
The wrapper at `0x80400` therefore wraps uppercase conversion; `0x80020` wraps
whitespace trimming at `0x80160`, which is identified but still unmatched.

## Delimiter-set splitting

`SdkTextSplit.cpp` matches `0x80660` (1,940 bytes) and two 720-byte vector
growth helpers at `0x17c890` and `0x17cb60`. The split function returns an empty
vector for limit zero or empty input. Limit one copies the whole input. Otherwise
it skips delimiter bytes with `find_first_not_of`, locates token ends with
`find_first_of`, and preserves the remaining suffix as the last result when
the limit is reached. Suffix construction uses a C string and retains the
original embedded-NUL behavior.

The single-result branch uses `push_back`; token branches use `emplace_back`.
A reconstructed string type supplies the observed converting-copy behavior.
Its inheritance and allocator identities are provisional ABI views, not claims
about the original declarations. Full function bytes and external references
are verified independently for all three functions.

The public libc++8 header subset now also includes `vector` and `__split_buffer`
from LLVM 8.0.0. Their bytes were checked against the 8.0.0 and 8.0.1 upstream
tags and are identical; provenance and SHA-256 hashes are in the vendor manifest.
