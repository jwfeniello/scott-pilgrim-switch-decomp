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
addresses. **165 functions / 47,728 bytes** match exactly (`-O3`, frame pointer
kept, PIC, no implicit float, unwind tables, no exceptions, libc++ 4 headers).

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

The event list is generated from IDA pseudocode by a piece parser; each piece
becomes one statement in the event's `Write`. Accesses through a typed `this`
pointer (`a1 + 7` on a `_QWORD *`) are rewritten as byte offsets first.

## Limits

- One float writer (`0x29eb60`) differs because its name length equals its type
  tag (7), which changes how the constant is shared. It is not credited.
- About 75 more event writers use the same stream but also write containers,
  enumeration names, string views or formatted index names. They are not
  reconstructed.
