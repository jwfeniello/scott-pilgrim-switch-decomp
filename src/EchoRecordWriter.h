// Working names and ABI views; complete original declarations remain unknown.
// storm::echo record writer: events append typed, named 128-byte records (at most 100) to a stream.
#pragma once
#include <stdint.h>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <typeinfo>
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
template<unsigned Key> struct Base { void Write(Writer* writer); void Write(Writer* writer, uint8_t mode); };
// Field kinds beyond plain values: GUIDs, references with a reserved null value,
// named fields checked (and possibly written) out of line, and text records.
struct Guid { char bytes[19]; };
// Out-of-line check before a named field is written.
bool ShouldWrite(Writer* writer, const void* field);
// Named field handed to an out-of-line writer: name, length and the value's address.
struct NamedField {
    const char* name; Size length; const void* value;
    template<Size N, class T> NamedField(const char (&text)[N], const T& v) : name(text), length(N - 1), value(&v) {}
};
// Named field with two value addresses (for example text storage and its length).
struct NamedPair {
    const char* name; Size length; const void* value; const void* extra;
    template<Size N, class T, class U> NamedPair(const char (&text)[N], const T& v, const U& e) : name(text), length(N - 1), value(&v), extra(&e) {}
};
template<unsigned Helper> struct NamedWriter {
    static void Write(NamedField* field, Writer* writer); static void Write(NamedField* field, Writer* writer, uint8_t mode);
    static void Write(NamedPair* field, Writer* writer); static void Write(NamedPair* field, Writer* writer, uint8_t mode);
};
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
// Members written by an out-of-line writer after the check; only their address is used here.
struct Opaque { char first; };
template<unsigned Helper> struct MemberWriter { static void Write(const void* field, Writer* writer); static void Write(const void* field, Writer* writer, uint8_t mode); };
// Text records (type 3): the record's library string at offset 0x38 is cleared, then filled
// by an out-of-line converter of the field.
struct Text { void* words[3]; };
void AssignText(Text* text, const char* data, Size size);
template<unsigned Converter> struct TextWriter { static void Write(const void* field, Text* text); };
template<unsigned Converter, Size N, class T> __attribute__((always_inline)) inline void WriteText(Writer* writer, const char (&label)[N], const T& value) {
    Record* record = writer->Next(); NameView name = TakeName(writer, NameView(label, N - 1));
    record->type = 3; record->name = name.data; record->length = name.size;
    Text* text = reinterpret_cast<Text*>(reinterpret_cast<char*>(record) + 0x38);
    AssignText(text, nullptr, 0);
    TextWriter<Converter>::Write(&value, text);
}
// Local library string handed to a named-field writer; freed through the Storm allocator when long.
void FreeText(void* data, const char* file, uint32_t line) noexcept;
struct LocalText {
    uint64_t first; uint64_t size; void* data;
    LocalText() : first(0), size(0), data(nullptr) {}
    ~LocalText() { if (first & 1) FreeText(data, "", 0); }
};
// Optional nested objects, written out of line (possibly under a pending name).
struct Object;
template<unsigned Helper> struct NestedWriter { static void Write(Object* object, Writer* writer); static void Write(Object* object, Writer* writer, uint8_t mode); };
// Library strings over the Storm allocator; character storage is tagged with typeid(char).
void* AllocText(Size size, Size alignment, uint32_t flags, const char* type, const char* file, uint32_t line);
template<class T> struct TextAllocator {
    using value_type = T;
    template<class U> struct rebind { using other = TextAllocator<U>; };
    TextAllocator() noexcept {}
    template<class U> TextAllocator(const TextAllocator<U>&) noexcept {}
    T* allocate(Size count) { return static_cast<T*>(AllocText(sizeof(T) * count, alignof(T), 0x41201007u, typeid(T).name(), "", 0)); }
    void deallocate(T* value, Size) noexcept { FreeText(value, "", 0); }
};
template<class T, class U> bool operator==(const TextAllocator<T>&, const TextAllocator<U>&) { return true; }
template<class T, class U> bool operator!=(const TextAllocator<T>&, const TextAllocator<U>&) { return false; }
typedef std::basic_string<char, std::char_traits<char>, TextAllocator<char> > StormText;
// Storage view of a library string (short form: length in the first byte, characters after it).
struct TextLayout {
    union { struct { Size capacity; Size size; char* data; } large; struct { unsigned char size; char data[23]; } small; };
};
template<unsigned N> struct Slots : Slots<N - 1> { virtual void Pad(char (*)[N]); };
template<> struct Slots<0> {};
template<unsigned Slot> struct TextSource : Slots<Slot> { virtual StormText Text() const; };
// Text records from a string taken by value (a copy of a member, or a returned string).
template<Size N> __attribute__((always_inline)) inline void WriteTextValue(Writer* writer, const char (&label)[N], const StormText& value) {
    Record* record = writer->Next(); NameView name = TakeName(writer, NameView(label, N - 1));
    const TextLayout& text = reinterpret_cast<const TextLayout&>(value);
    bool short_form = (text.small.size & 1) == 0;
    const char* data = short_form ? text.small.data : text.large.data;
    Size length = short_form ? Size(text.small.size >> 1) : text.large.size;
    record->type = 3; record->name = name.data; record->length = name.size;
    AssignText(reinterpret_cast<Text*>(reinterpret_cast<char*>(record) + 0x38), data, length);
}
template<Size N> __attribute__((always_inline)) inline void WriteTextCopy(Writer* writer, const char (&label)[N], StormText value) {
    WriteTextValue(writer, label, value);
}
// Named pairs are built as a temporary and copied into the checked local.
template<unsigned Helper> __attribute__((always_inline)) inline void WriteNamedPair(Writer* writer, const NamedPair& pair) {
    NamedPair f = pair; if (ShouldWrite(writer, &f)) NamedWriter<Helper>::Write(&f, writer);
}
template<unsigned Helper> __attribute__((always_inline)) inline void WriteNamedPair(Writer* writer, const NamedPair& pair, uint8_t mode) {
    NamedPair f = pair; if (ShouldWrite(writer, &f)) NamedWriter<Helper>::Write(&f, writer, mode);
}
// Array writers: each element is written, then its first record is renamed "#index" when it fits;
// the new name is kept in the record's name storage (offset 0x18).
template<unsigned Key, Size N> struct Element { char bytes[N]; };
template<unsigned Key, Size N> struct alignas(8) ElementKey { char bytes[N]; bool operator<(const ElementKey& other) const; };
template<unsigned Key, Size Offset> struct Field { char before[Offset]; uint32_t value; };
void AppendFormat(Text* text, Size limit, const char* format, ...);
__attribute__((always_inline)) inline NameView TextView(const TextLayout& text) {
    unsigned char size = text.small.size;
    const char* long_data = text.large.data; Size long_size = text.large.size;
    bool short_form = (size & 1) == 0;
    const char* data = short_form ? text.small.data : long_data;
    Size length = short_form ? Size(size >> 1) : long_size;
    return NameView(data, length);
}
__attribute__((always_inline)) inline void NameElement(Writer* writer, Size slot, Size& index) {
    if (slot < 100) {
        Record* record = &writer->records[slot];
        Text* text = reinterpret_cast<Text*>(reinterpret_cast<char*>(record) + 0x18);
        Size number = index++;
        AssignText(text, record->name, record->length);
        AppendFormat(text, 10, "#%zu", number);
        NameView name = TextView(*reinterpret_cast<const TextLayout*>(text));
        record->name = name.data; record->length = name.size;
    }
}
// Text record from a name view (a string-view member or an enumeration name).
template<Size N> __attribute__((always_inline)) inline void WriteTextView(Writer* writer, const char (&label)[N], NameView text) {
    Record* record = writer->Next(); NameView name = TakeName(writer, NameView(label, N - 1));
    record->type = 3; record->name = name.data; record->length = name.size;
    AssignText(reinterpret_cast<Text*>(reinterpret_cast<char*>(record) + 0x38), text.data, text.size);
}
// Text record from a C string (assigned with its length from strlen), for example an enumeration name
// taken from a name table with a default for values out of range.
template<Size N> __attribute__((always_inline)) inline void WriteTextC(Writer* writer, const char (&label)[N], const char* text) {
    Record* record = writer->Next(); NameView name = TakeName(writer, NameView(label, N - 1));
    record->type = 3; record->name = name.data; record->length = name.size;
    AssignText(reinterpret_cast<Text*>(reinterpret_cast<char*>(record) + 0x38), text, __builtin_strlen(text));
}
template<unsigned Key> struct NameTable { __attribute__((visibility("hidden"))) static const char* const names[]; };
}
