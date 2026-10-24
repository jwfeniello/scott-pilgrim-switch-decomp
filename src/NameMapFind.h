// Working names and ABI views; complete original declarations remain unknown.
// libc++ 4 unordered_map::find keyed by a length-prefixed name hashed with a CRC-32 table (SDK, -O3).
#include <stdint.h>
#include <stddef.h>
#include <unordered_map>
namespace NameMap {
extern "C" const uint32_t NameMap_Crc32Table[256] __attribute__((visibility("hidden")));
// Length-prefixed name: one length byte followed by the characters.
struct Name { uint8_t length; char text[63]; };
struct NameHash {
    size_t operator()(const Name& name) const {
        uint32_t crc = 0xffffffffu;
        for (const char* p = name.text, *end = name.text + name.length; p < end; )
            crc = NameMap_Crc32Table[(crc ^ uint8_t(*p++)) & 0xff] ^ (crc >> 8);
        return ~crc;
    }
};
struct NameEqual {
    bool operator()(const Name& a, const Name& b) const {
        return a.length == b.length && __builtin_memcmp(a.text, b.text, b.length) == 0;
    }
};
template<unsigned Key> struct Value { void* data; };
template<unsigned Key> struct Map { typedef std::unordered_map<Name, Value<Key>, NameHash, NameEqual> Type; };
}
#define NAME_MAP_FIND(Key) template NameMap::Map<Key>::Type::iterator NameMap::Map<Key>::Type::find(const NameMap::Name&);
