// Working names and ABI views; complete original declarations remain unknown.
// storm::echo event Serialize: base fields, then one named field through the stream visitor.
#include <stdint.h>
using Size=__SIZE_TYPE__;
namespace storm { struct Stream { bool Visit(void* field); }; }
template<unsigned Kind> struct FieldValue { char data[4]; };
// A named value as passed to the stream visitor: literal name, its length, and the value.
template<unsigned Kind> struct NamedField {
    const char* name; Size size; FieldValue<Kind>* value;
    template<Size N> __attribute__((always_inline)) NamedField(const char (&text)[N], FieldValue<Kind>& v) : name(text), size(N - 1), value(&v) {}
    void Serialize(storm::Stream* stream, int mode);
};
template<unsigned Key> struct EchoBase { void Serialize(storm::Stream* stream); };
template<unsigned Key, unsigned Offset, unsigned Kind> struct EchoField;
// storm::echo event Serialize: the base fields, then one named field.
#define ECHO_FIELD_KIND(Kind, Name) \
template<unsigned Key, unsigned Offset> struct EchoField<Key, Offset, Kind> : EchoBase<Key> { \
    char padding[Offset]; \
    FieldValue<Kind> value; \
    void Serialize(storm::Stream* stream) { \
        EchoBase<Key>::Serialize(stream); \
        NamedField<Kind> field(Name, value); \
        if (stream->Visit(&field)) field.Serialize(stream, 0); \
    } \
};
ECHO_FIELD_KIND(0, "peerId")
ECHO_FIELD_KIND(1, "srefid")
ECHO_FIELD_KIND(2, "handlerRefId")
#define ECHO_FIELD_SERIALIZE(Key, Offset, Kind) template struct EchoField<Key, Offset, Kind>;
