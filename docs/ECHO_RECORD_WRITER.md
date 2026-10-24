# storm::echo record writers

Storm's `echo` events serialize themselves into a bounded record stream. The
writer holds up to 100 records of 128 bytes plus one overflow record. Each record
has a type tag, a name and a value. A pending name, when set, replaces the name
of the next record. Events first call their parent's writer, then append one
record per field.

[`src/EchoRecordWriter.h`](../src/EchoRecordWriter.h) models the writer and
[`src/EchoRecordEvents.cpp`](../src/EchoRecordEvents.cpp) holds the events. The
event list is generated from the field list read from each original function:
field offset, type, record tag and name. Struct names are the original
addresses. **178 event writers / 53,200 bytes** match exactly (`-O3`, frame pointer
kept, PIC, no implicit float, unwind tables, no exceptions, libc++ 4 headers).
[`src/EchoFieldWriters.cpp`](../src/EchoFieldWriters.cpp) adds the parent writer
most events call first (`0x576a80`, handler and cookie references written only in
mode 2). It is a separate translation unit so the events keep calling it out of
line.

The writers are built without exceptions: with landing pads, the writers that
destroy a local string differ. All earlier matches still match with
`-fno-exceptions`.

| Tag | Value | Field types seen |
| ---: | --- | --- |
| 2 | Boolean, stored as a byte | `bool` |
| 3 | Text, a library string at record offset `0x38` | string member, returned string, converted value |
| 5 | Unsigned integer, stored as 64 bits | `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t` |
| 6 | Signed integer, stored as 64 bits | `uint32_t` field written as signed |
| 7 | Real, stored as `double` | `float` (converted when stored) |
| 8 | GUID, 19 bytes at record offset `0x68` | 19-byte GUID passed by value |
| 9 | Null reference, plain name only | Reference whose value is reserved (`0xFFFF`, `0xFFFFFFFF`) |

The integer writers store type, name, length, then value; the real writer stores
the value before the name. Writers with more than one field show the difference,
so the overloads were written separately in the original.

Other field kinds:

- **References** read the record count before testing the value against its
  reserved null value; a null reference writes type 9 under the plain name,
  without the pending-name substitution.
- **Named fields** are a `{name, length, value address}` triple on the stack.
  An out-of-line check (`0x57d530`) runs first. Then the field is either written
  inline (GUIDs, 32-bit references) or passed to an out-of-line writer (peer,
  `srefid` and handler references). GUID triples are built value first; the
  others in member order.
- **Named pairs** carry a second member address (for example a reason code and
  its text). They are built as a temporary and copied into the checked local;
  built in place, the stores are scheduled differently. IDA drops the fourth
  word of some pairs, so the generator reads both member offsets from the
  original instructions.
- **Out-of-line writers** take two or three arguments. The third (a mode) is
  passed only where the original sets `w2`, so each writer has a two- and a
  three-argument overload instead of a default argument.
- **Pending names** are set before some nested and out-of-line writers, which
  then write their first record under that name.
- **Pending name access**: the writers take the pending name through a reference
  to it, which keeps its address in one register for the load and the clear.
- **Text records** clear the record's string and assign it. The value is either
  converted out of line from the field, returned by a virtual call, or copied
  from a string member. The strings are libc++ 4 `basic_string` over a Storm
  allocator (flags `0x41201007`, tagged with `typeid(char).name()`); a copied
  member is taken by value, which keeps each copy in its own stack slot. The
  record's data and length are read through a storage view of the string: the
  short-form test written as `(size & 1) == 0` matches, while the library's own
  accessors schedule differently.

- **Mode**: the writers' third argument is an 8-bit value (compared as a byte).
  Some fields are written only in mode 2, either in a block or after an early
  `if (mode != 2) return;`. Some others are written only when a leading 32-bit
  member is at least 1.
- **String views and C strings**: a `{data, size}` member is written as text
  directly. Enumeration names come from a name table with a default for values
  out of range; the text length comes from `strlen`. The table is a hidden
  external array, addressed directly.
- **Arrays**: vectors, sets and maps (libc++ 4 containers) write each element in
  turn: a plain record, a checked member writer or a nested writer under a pending
  name. When the element's first record fits, its name is replaced by
  `<name>#<index>`, built in the record's name storage (offset `0x18`) with an
  out-of-line formatter (`0x589f30`). The record count is read before the element,
  the index is taken before the name is copied, and the new name is read through
  a reference so its loads are speculated.

The event list is generated from IDA pseudocode by a piece parser; each piece
becomes one statement in the event's `Write`. Accesses through a typed `this`
pointer (`a1 + 7` on a `_QWORD *`) are rewritten as byte offsets first.

## Event constructors

[`src/EchoEventConstructors.cpp`](../src/EchoEventConstructors.cpp) adds 26 event
constructors (1,644 bytes). Their class names come from the vtables they install
(for example `storm::echo::object::outEvent::MasterResolved`). Three facts were
needed:

- **Strict aliasing.** Without it the base class's vtable store survives next to
  the derived one.
- **Default cookie argument.** The base constructor takes the cookie as a default
  argument (a module-local global, `0x1905f58`), so it is loaded before the
  handler reference is set to -1.
- **An intermediate object-event base** takes two identifiers and a
  `std::shared_ptr` by value. That is why the original moves or copies the
  pointer before any base initialization. Copies inline the atomic reference
  increment, which libc++ 8 does and libc++ 4 does not, so this build uses the
  libc++ 8 headers.

Member names and parameter types are provisional. Constructors with nested
allocations or other bodies (about 48) are not reconstructed.

## Limits

- One float writer (`0x29eb60`) differs because its name length equals its type
  tag (7), which changes how the constant is shared. It is not credited.
- Six vector writers differ only in register assignment (index and record base
  registers swap); the map and set writers with the same element code match.
- The named reference writers (`0x2b8790`, `0x2b8840`) differ by two words: the
  original keeps the null record's address add separate from its store.
- About 60 more event writers combine these pieces with bit-flag text, nested
  containers or inline enumeration switches. They are not reconstructed.
