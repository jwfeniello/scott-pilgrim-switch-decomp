// Working names and ABI views; complete original declarations remain unknown.
// Compose destructors over a component holding a render unit with an allocator-owned buffer.
#include "ReferenceReleaseAbi.h"
namespace ComposeArray {
using SingleRelease::allocator_for;
// Onyx::Component base; its destructor is out of line.
template<unsigned Key> struct ComponentBase { virtual ~ComponentBase(); };
// Allocator-owned buffer: the count is cleared, then the storage is returned.
struct Buffer {
    uint64_t count; void* data;
    __attribute__((always_inline)) ~Buffer() { void* storage = data; count = 0; if (storage) allocator_for(storage)->Free(storage); }
};
// A polymorphic render-unit member (e.g. Onyx::Graphics::GeometryStaticRenderUnit).
template<unsigned Key, unsigned BufferOffset> struct RenderUnit {
    char before[BufferOffset - 8];
    Buffer buffer;
    virtual ~RenderUnit() {}
};
template<unsigned Key, unsigned UnitOffset, unsigned BufferOffset> struct Shape : ComponentBase<Key> {
    char before[UnitOffset - 8];
    RenderUnit<Key, BufferOffset - UnitOffset> unit;
    ~Shape() override {}
};
template<unsigned Key, unsigned UnitOffset, unsigned BufferOffset, unsigned SlotOffset> struct Compose : Shape<Key, UnitOffset, BufferOffset> {
    char gap[SlotOffset - BufferOffset - 16];
    SingleRelease::Slot reference;
    ~Compose() override;
};
template<unsigned Key, unsigned U, unsigned B, unsigned O> Compose<Key, U, B, O>::~Compose() {}
}
#define COMPOSE_RENDER_UNIT_DESTRUCTOR(Key, U, B, O) template struct ComposeArray::Compose<Key, U, B, O>;
