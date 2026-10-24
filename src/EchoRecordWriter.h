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
        NameView& taken = pending;
        if (taken.size) { name = taken; taken.data = nullptr; taken.size = 0; }
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
// Field kinds beyond plain values: GUIDs, references with a reserved null value,
// and named fields checked (and possibly written) out of line.
struct Guid { char bytes[19]; };
// Out-of-line check before a named field is written.
bool ShouldWrite(Writer* writer, const void* field);
// Named field handed to an out-of-line writer: name, length and the value's address.
struct NamedField {
    const char* name; Size length; const void* value;
    template<Size N, class T> NamedField(const char (&text)[N], const T& v) : name(text), length(N - 1), value(&v) {}
};
template<unsigned Helper> struct NamedWriter { static void Write(NamedField* field, Writer* writer, int mode = 0); };
__attribute__((always_inline)) inline NameView TakeName(Writer* writer, NameView name) {
    NameView& pending = writer->pending;
    if (pending.size) { name = pending; pending.data = nullptr; pending.size = 0; }
    return name;
}
__attribute__((always_inline)) inline void WriteGuid(Writer* writer, NameView label, Guid value) {
    Record* record = writer->Next(); NameView name = TakeName(writer, label);
    record->type = 8; record->name = name.data; record->length = name.size;
    __builtin_memcpy(reinterpret_cast<char*>(record) + 0x68, &value, sizeof value);
}
template<Size N> __attribute__((always_inline)) inline void WriteGuid(Writer* writer, const char (&text)[N], Guid value) {
    WriteGuid(writer, NameView(text, N - 1), value);
}
// Reference values: a reserved value writes a null record (type 9) under the plain name.
template<class T> __attribute__((always_inline)) inline void WriteReference(Writer* writer, NameView label, T value, T invalid) {
    Size index = writer->count;
    if (value != invalid) {
        Record* record = index >= 100 ? &writer->overflow : &writer->records[writer->count++];
        NameView name = TakeName(writer, label);
        record->type = 5; record->name = name.data; record->length = name.size; record->value.unsigned_value = value;
    } else {
        Record* record = index >= 100 ? &writer->overflow : &writer->records[writer->count++];
        record->type = 9; record->name = label.data; record->length = label.size;
    }
}
template<Size N, class T> __attribute__((always_inline)) inline void WriteReference(Writer* writer, const char (&text)[N], T value, T invalid) {
    WriteReference(writer, NameView(text, N - 1), value, invalid);
}
// Named fields written inline after the out-of-line check.
// GUID fields build their name triple value-first.
struct NamedGuidField {
    const char* name; Size length; const void* value;
    template<Size N> NamedGuidField(const char (&text)[N], const Guid& guid) { value = &guid; name = text; length = N - 1; }
};
__attribute__((always_inline)) inline void WriteNamedGuid(Writer* writer, const NamedGuidField& field) {
    WriteGuid(writer, NameView(field.name, field.length), *static_cast<const Guid*>(field.value));
}
__attribute__((always_inline)) inline void WriteNamedReference(Writer* writer, const NamedField& field) {
    WriteReference(writer, NameView(field.name, field.length), *static_cast<const uint32_t*>(field.value), 0xffffffffu);
}
}
