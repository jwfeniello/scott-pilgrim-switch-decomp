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
addresses. **75 functions / 16,300 bytes** match exactly (`-O3`, frame pointer
kept, PIC, no implicit float, unwind tables).

| Tag | Value | Field types seen |
| ---: | --- | --- |
| 2 | Boolean, stored as a byte | `bool` |
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
- **Pending name**: the writers take the pending name through a reference to
  it, which keeps its address in one register for the load and the clear.

The event list is generated from IDA pseudocode by a piece parser; each piece
becomes one statement in the event's `Write`.

## Limits

- One float writer (`0x29eb60`) differs because its name length equals its type
  tag (7), which changes how the constant is shared. It is not credited.
- About 210 more event writers use the same stream but also write strings,
  nested objects and containers. They are not reconstructed.
