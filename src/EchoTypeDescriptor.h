// Working names and ABI views; complete original declarations remain unknown.
// storm::echo event type descriptors: a guarded static constructed from category, kind and parent.
#include <stdint.h>
namespace EchoType {
// Event type descriptor; the constructor is out of line.
struct Descriptor { Descriptor(int category, int kind, void* parent) noexcept; char data[0x40]; };
template<unsigned Key> struct Parent { static char object; };
template<unsigned Key, int Category, int Kind> Descriptor* Get() {
    static Descriptor value(Category, Kind, &Parent<Key>::object);
    return &value;
}
}
#define ECHO_TYPE_DESCRIPTOR(Key, Category, Kind) template EchoType::Descriptor* EchoType::Get<Key, Category, Kind>();
