# Component reference assignment, selection and initialization

Three sources add 30 complete engine matches / 22,712 bytes:

| Source | Functions | Bytes |
| --- | ---: | ---: |
| `ComponentReferenceCopy.cpp` | 11 | 7,612 |
| `ComponentSelection.cpp` | 10 | 8,080 |
| `ComponentInitializeSlots.cpp` | 9 | 7,020 |

These extend the previously recovered component accessor, allocator and tracked
reference layouts. Names describe observed operations; they do not establish
the full original class declarations.

Reference copying retains the incoming handle, calls the destination assignment
helper, and releases the temporary owner. Final release destroys the owned object,
removes tracking entries under the map mutex, and returns storage through the
allocator associated with each allocation.

Component selection stores the requested index, checks it against the collection
count, and retains the selected-value handle. It resolves an unloaded collection
entry and calls its readiness virtual method when necessary. It then replaces
the handle's object and dispatches a change containing the new and previous
objects, using the original event identifier `0x6c62f499`. The two families with
an additional 16-byte gap before the index use distinct checked layouts.

Initialization first calls the component base initialization routine. It looks
up a property using the original type identifier, checks both lookup words, reads
a temporary handle through the source's virtual interface, and assigns that
handle to the component slot. Destruction and exception cleanup remain part of
the full-function comparison.

The C++ evaluation structure matters for matching: calculating the destination
before entering the helper that creates its temporary owner reproduces the
original address computation and register lifetimes. No machine instructions are
patched or ignored. Every instantiated field offset and identifier is checked by
the complete linked-byte comparison, rather than merely inferred from clustering.

All three builds use public Clang 8.0.1 with preserved exception support. Negative
controls change the retain increment, change-event identifier, and lookup gate;
each is rejected. These results do not establish full-game execution or independently
validate every external dependency.
