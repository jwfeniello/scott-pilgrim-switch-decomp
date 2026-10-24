// Working names and ABI views; complete original declarations remain unknown.
// Three-level copy-construct clone of a 40-byte event.
#include <stdint.h>
#include <stddef.h>
extern "C" void* StormAllocate(size_t size, size_t align, uint32_t flags, void* arena, const char* file, uint32_t line);
inline void* operator new(size_t, void* place) noexcept { return place; }
template<unsigned Key> struct Layer0 {
    virtual ~Layer0();
    uint32_t field_8; uint64_t field_16; uint64_t field_24;
    __attribute__((always_inline)) Layer0(const Layer0& o) : field_8(o.field_8), field_16(o.field_16), field_24(o.field_24) {}
};
template<unsigned Key> struct Layer1 : Layer0<Key> {
    virtual ~Layer1();
    uint32_t field_32;
    __attribute__((always_inline)) Layer1(const Layer1& o) : Layer0<Key>(o), field_32(o.field_32) {}
};
template<unsigned Key> struct Layer2 : Layer1<Key> {
    virtual ~Layer2();
    __attribute__((always_inline)) Layer2(const Layer2& o) : Layer1<Key>(o) {}
    Layer2* Clone() const;
};
template<unsigned Key> Layer2<Key>* Layer2<Key>::Clone() const {
    return new (StormAllocate(sizeof(Layer2), 8, 0x41202003u, nullptr, "", 0)) Layer2(*this);
}
#define STORM_LAYERED_CLONE40(Key) template struct Layer2<Key>;
