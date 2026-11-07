// Onyx::Graphics: the engine's cameras, meshes, sprites, materials and render setup (Particle and MaterialProperty
// live elsewhere). Class names are the RTTI names; method and field names are provisional (SlotN, valueNN), offsets
// come from the code that uses them.
#pragma once
#include "Particle.h"

namespace Onyx {
namespace Graphics {

typedef Gear::Vector3<float> Vec3;
using Particle::VolumeExtent;

// A list of pointers (Allocator, capacity, count, a reserved word, the entries): the layout CatalogRefresh.cpp's
// PointerList reads.
template<class T> struct PointerList {
    void* allocator;
    uint64_t capacity;
    uint64_t count;              // +0x10
    void* reserved;
    T* items;                    // +0x20
};

// The shape components' common base (Onyx::Graphics::ShapeComponent): slot 15 reports the extent, as the particle
// graphics components do.
struct ShapeComponent : onyx::Component {
    virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6();
    virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual void Slot12(); virtual void Slot13(); virtual void Slot14();
    virtual void GetExtent(VolumeExtent& extent);              // slot 15
};
// A pyramid and a cone stand on their base: as wide as the base (+0x108) both ways and as tall as +0x104, centred
// half way up.
struct PyramidShape : ShapeComponent {
    void GetExtent(VolumeExtent& extent) override;             // slot 15 (0xb04590)
    char padding_8[0xfc];
    float height;                // +0x104
    float baseSize;              // +0x108
};
struct ConeShape : ShapeComponent {
    void GetExtent(VolumeExtent& extent) override;             // slot 15 (0xb09230)
    char padding_8[0xfc];
    float height;                // +0x104
    float radius;                // +0x108
};

// Onyx::Graphics::Sprite. Slot 24 sets the offset, mirrored on the axes the sprite is flipped on.
struct Sprite {
    virtual void Slot0();
    void SetOffset(const float* offset);                        // slot 24 (0xae47a0)
    char padding_8[0x5c];
    float offset[3];             // +0x64
    char padding_70[0x1a];
    bool flipX;                  // +0x8a
    bool flipY;                  // +0x8b
};

namespace NewMaterialSystem {

// One of a shader material template's parameters; +8 says it changed.
struct ShaderParameter {
    void* reserved;
    bool dirty;                  // +0x8
};
struct ShaderMaterialTemplate {
    virtual void Slot0();
    void UpdateParameter(ShaderParameter* parameter);         // 0xb644e0
    void UpdateDirtyParameters();                              // slot 13 (0xb64440)
    bool HasDirtyParameter();                                  // slot 14 (0xb644a0)
    char padding_8[0xb0];
    PointerList<ShaderParameter*> parameters;                  // +0xb8
};

}  // namespace NewMaterialSystem

namespace EvolutionDevelopment {

// The catalogs keep a ring of entries (a sentinel link in the catalog, the entry at +0x10 of each node). An entry
// holds a function (+0x8) that takes the entry; slot 14 calls every entry's.
struct CatalogEntry {
    void* reserved;
    void (*function)(CatalogEntry* entry);   // +0x8
};
struct CatalogLink {
    CatalogLink* prev;
    CatalogLink* next;           // +0x8
};
struct CatalogNode : CatalogLink {
    CatalogEntry* entry;         // +0x10
};
// An iterator over the ring (the loop steps it with a post-increment: the node it reads and the one it advances are
// separate registers in the original).
struct CatalogIterator {
    CatalogLink* link;
    CatalogEntry*& operator*() const { return static_cast<CatalogNode*>(link)->entry; }
    CatalogIterator operator++(int) {
        CatalogIterator old = *this;
        link = link->next;
        return old;
    }
    bool operator!=(const CatalogIterator& other) const { return link != other.link; }
};
struct CatalogLayout {
    virtual void Slot0();
    char padding_8[0xa0];
    CatalogLink entries;         // +0xa8: the sentinel
    __attribute__((always_inline)) void CallEntries() {
        CatalogIterator end = {&entries};
        for (CatalogIterator it = {entries.next}; end != it;) {
            CatalogEntry* entry = *it++;
            entry->function(entry);
        }
    }
};
struct View2Catalog : CatalogLayout { void Slot14(); };          // slot 14 (0xb6f990)
struct VisualCatalog : CatalogLayout { void Slot14(); };         // slot 14 (0xb70f00)
struct PartitioningCatalog : CatalogLayout { void Slot14(); };   // slot 14 (0xb72a80)
struct LightCatalog : CatalogLayout { void Slot14(); };          // slot 14 (0xb72e70)

}  // namespace EvolutionDevelopment

}  // namespace Graphics
}  // namespace Onyx
