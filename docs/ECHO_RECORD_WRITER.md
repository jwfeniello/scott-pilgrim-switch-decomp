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
addresses. **44 functions / 7,716 bytes** match exactly (`-O3`, frame pointer
kept, PIC, unwind tables).

| Tag | Value | Field types seen |
| ---: | --- | --- |
| 2 | Boolean, stored as a byte | `bool` |
| 5 | Unsigned integer, stored as 64 bits | `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t` |
| 6 | Signed integer, stored as 64 bits | `uint32_t` field written as signed |
| 7 | Real, stored as `double` | `float` (converted when stored) |

The integer writers store type, name, length, then value; the real writer stores
the value before the name. Writers with more than one field show the difference,
so the overloads were written separately in the original.

## Limits

- One float writer (`0x29eb60`) differs because its name length equals its type
  tag (7), which changes how the constant is shared. It is not credited.
- About 240 more event writers use the same stream but also write nested objects,
  strings, GUIDs and optional references through out-of-line helpers. They are
  not reconstructed.
