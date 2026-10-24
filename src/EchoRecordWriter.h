// Working names and ABI views; complete original declarations remain unknown.
// storm::echo record writer: events append typed, named 128-byte records (at most 100) to a stream.
#pragma once
#include <stdint.h>
using Size=__SIZE_TYPE__;
namespace EchoRecords {
struct NameView { const char* data; Size size; NameView() : data(nullptr), size(0) {} NameView(const char* d, Size s) : data(d), size(s) {} };
// One 128-byte output record: type tag, name view and a value slot.
struct Record {
    uint8_t type; char pad[7]; const char* name; Size length; char pad2[0x18];
    union { bool boolean; uint64_t unsigned_value; int64_t signed_value; double real; } value;
    char rest[0x48];
};
// Bounded record writer; a pending name, when set, replaces the next field name.
struct Writer {
    char before[0x50];
    NameView pending;
    Record records[100]; Record overflow; Size count;
    __attribute__((always_inline)) Record* Next() { return count >= 100 ? &overflow : &records[count++]; }
    template<Size N> __attribute__((always_inline)) NameView Name(const char (&text)[N]) {
        NameView name = {text, N - 1};
        if (pending.size) { name = pending; pending.data = nullptr; pending.size = 0; }
        return name;
    }
    template<Size N> __attribute__((always_inline)) void WriteBool(const char (&text)[N], bool value) {
        Record* record = Next(); NameView name = Name(text);
        record->type = 2; record->name = name.data; record->length = name.size; record->value.boolean = value;
    }
    template<Size N> __attribute__((always_inline)) void WriteUnsigned(const char (&text)[N], uint64_t value) {
        Record* record = Next(); NameView name = Name(text);
        record->type = 5; record->name = name.data; record->length = name.size; record->value.unsigned_value = value;
    }
    template<Size N> __attribute__((always_inline)) void WriteSigned(const char (&text)[N], int64_t value) {
        Record* record = Next(); NameView name = Name(text);
        record->type = 6; record->name = name.data; record->length = name.size; record->value.signed_value = value;
    }
    template<Size N> __attribute__((always_inline)) void WriteReal(const char (&text)[N], float value) {
        Record* record = Next(); NameView name = Name(text);
        record->type = 7; record->value.real = value; record->name = name.data; record->length = name.size;
    }
};
// Parent-class serialization, called first by every event writer.
template<unsigned Key> struct Base { void Write(Writer* writer); };
}
