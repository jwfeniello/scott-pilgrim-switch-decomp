// Onyx::Graphics: the engine's cameras, meshes, sprites, materials and render setup (Particle and MaterialProperty
// live elsewhere). Class names are the RTTI names; method and field names are provisional (SlotN, valueNN), offsets
// come from the code that uses them.
#pragma once
#include "Particle.h"
#include "StateMachine.h"

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

// Onyx::Graphics::GraphicsFader (OnyxSerialize.h has a serialization view of it without the vtable). Slot 2 enables
// it: starts its state machine in the state slot 14 names and applies its level (+0xe8, 0xc9d8b0).
struct GraphicsFader {
    typedef SPTG::StateMachine<GraphicsFader>::State State;
    virtual void Slot0(); virtual void Slot1();
    virtual void Enable();                                     // slot 2 (0xc9d0f0)
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Slot13();
    virtual State InitialState();                              // slot 14
    void Apply(float level);                                   // 0xc9d8b0
    char padding_8[0x30];
    uint32_t componentFlags;     // +0x38: bit 1 while enabled
    char padding_3c[0x74];
    SPTG::StateMachine<GraphicsFader> states;   // +0xb0
    char padding_d8[0x10];
    float level;                 // +0xe8
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

// The engine's graphics system, reached through a global pointer (0x191dce8). +0x23c8 issues draws: 0x6d5c70 with an
// index buffer bound, 0x6d55a0 without.
struct DrawContext {
    void DrawIndexed(uint32_t count, uint32_t start, uint32_t primitive);   // 0x6d5c70
    void Draw(uint32_t count, uint32_t start, uint32_t primitive);          // 0x6d55a0
};
struct GraphicsSystem {
    char padding_0[0x1cc];
    uint32_t flag1cc : 1;
    uint32_t blendMode : 4;      // +0x1cc, bits 1-4
    uint32_t bits1cc : 27;
    char padding_1d0[0x21f8];
    DrawContext draw;            // +0x23c8
    char padding_23c9[0x1c7];
    // The lights the shaders see, 0x70 bytes each (where the table starts is a guess; the entries' stride and the
    // spot parameters' place are from the code). The first two spot values are copied as a pair (one 8-byte store
    // in the original), the others one by one.
    struct LightPair { float x, y; };
    struct LightSlot {
        char padding_0[0x60];
        LightPair spotPair;      // +0x60 (+0x25f0 from the system)
        float spot[2];           // +0x68
    } lights[8];                 // +0x2590
};
extern "C" GraphicsSystem* Accessor_GraphicsSystem;

// A light (the base of LightPoint and LightSpot; the class name is provisional). Slot 13 writes the light into the
// graphics system's light table.
struct Light {
    virtual void Slot0();
    void Enable();                                             // slot 2 (0xb69bc0)
    void Upload(uint32_t index);                               // slot 13 (0xb6a550)
    char padding_8[0x30];
    uint32_t componentFlags;     // +0x38: bit 1 while enabled
    char padding_3c[0x2c];
    float attenuation68;         // +0x68
    float attenuation6c;         // +0x6c
    float inverseRange;          // +0x70
    char padding_74[0x4];
    float falloff;               // +0x78
    char padding_7c[0x8];
    float range;                 // +0x84
};
// A point light has no cone: slot 13 sets the slot's spot parameters to the "none" values.
struct LightPoint : Light {
    void Upload(uint32_t index);                               // slot 13 (0xb6ab30)
};

// Every dynamic material updater, kept in a global list (0x1930108); the updaters' slot 13 steps them all.
struct DynamicMaterialUpdater {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Update();                                     // slot 13
    void UpdateAll(uint32_t flags);                            // slot 13 of the list's owner (0xb69420)
};
extern "C" PointerList<DynamicMaterialUpdater*>* Accessor_DynamicMaterialUpdaters;

// One draw of a render unit (0x1c bytes); the draw calls take the words at +0x10, +0x8 and +0x0.
struct DrawRange {
    uint32_t primitive;          // +0x0
    uint32_t value4;
    uint32_t start;              // +0x8
    uint32_t valueC;
    uint32_t count;              // +0x10
    uint32_t value14;
    uint32_t value18;
};
// Slot 4 draws the unit: with an index buffer (+0x30) bound, the indexed draw.
struct GeometryDynamicRenderUnit {
    virtual void Slot0();
    void Draw();                 // slot 4 (0xae1420)
    char padding_8[0x28];
    void* indexBuffer;           // +0x30
    DrawRange range;             // +0x38
};
struct GeometryStaticRenderUnit {
    virtual void Slot0();
    void Draw();                 // slot 4 (0xae6a20)
    char padding_8[0x28];
    void* indexBuffer;           // +0x30
    char padding_38[0x18];
    uint64_t rangeCount;         // +0x50
    DrawRange* ranges;           // +0x58
};

// A vector (allocator, capacity, count, entries).
template<class T> struct Vector {
    void* allocator;
    uint64_t capacity;
    uint64_t count;              // +0x10
    T* items;                    // +0x18
};

// A mesh part as the render queue takes it (0x38 bytes); its material's +0xa8 sends it to the second pass.
struct RenderMaterial {
    char padding_0[0xa8];
    bool secondPass;             // +0xa8
};
// The module a modular mesh's part belongs to; +0x34 says whether it shows.
struct RenderModule {
    char padding_0[0x34];
    bool visible;                // +0x34
};
struct RenderPart {
    char padding_0[0x10];
    RenderMaterial* material;    // +0x10
    char padding_18[0x10];
    RenderModule* module;        // +0x28: modular meshes only
    char padding_30[0x8];
};
struct RenderView;
struct RenderQueue {
    void Add(RenderPart* part, int pass);                      // 0xae6dd0
    char padding_0[0x560];
    RenderView* view560[1];      // +0x560: what a modular mesh's slot 19 takes (its address)
};
__attribute__((always_inline)) inline int PassOf(const RenderPart* part) { return part->material->secondPass ? 2 : 1; }

// The component a mesh keeps its geometry in (type 0x40062c4c, which the factory table calls Onyx::Component::Bucket);
// its extent is at +0xf0.
struct MeshBucket : onyx::Component {
    char padding_8[0xe8];
    VolumeExtent extent;         // +0xf0
};
// Onyx::Graphics::Mesh (type 0x7cbaf3f7): its bucket's handle is at +0x50.
struct Mesh : onyx::Component {
    char padding_8[0x48];
    onyx::ComponentHandle* bucket;   // +0x50
};
// Onyx::Graphics::SkinnedMesh (type 0x5c5b66b6) and its bucket (type 0x1f09b050, another Onyx::Component::Bucket in
// the factory table), whose extent is at +0x150.
struct SkinnedMeshBucket : onyx::Component {
    char padding_8[0x148];
    VolumeExtent extent;         // +0x150
};
struct SkinnedMesh : onyx::Component {
    char padding_8[0x48];
    onyx::ComponentHandle* bucket;   // +0x50
};
// Slot 15 reports the mesh's extent; slot 21 queues every part of the mesh.
struct MeshInstance {
    virtual void Slot0();
    void GetExtent(VolumeExtent& extent);                      // slot 15 (0xb4f420, MeshInstanceLevelOfDetail's too)
    void Queue(RenderQueue* queue);                            // slot 21 (0xb4f660)
    char padding_8[0xd8];
    onyx::ComponentHandle* mesh;     // +0xe0
    Vector<RenderPart> parts;    // +0xe8
};
// One module of a modular mesh (0x38 bytes); 0xb4a530 brings it up to date, its extent is at +0x1c.
struct MeshModule {
    void Update();                                             // 0xb4a530
    char padding_0[0x1c];
    VolumeExtent extent;         // +0x1c
    char padding_34[0x4];
};
// Slot 13 rebuilds the mesh when asked (+0x108) and then recomputes the extent from the modules'; slot 21 runs slot
// 19 on the queue's +0x560, then queues the parts whose module shows.
struct ModularMeshInstance {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12(); virtual void Slot13(); virtual void Slot14();
    virtual void Slot15(); virtual void Slot16(); virtual void Slot17(); virtual void Slot18();
    virtual void Slot19(RenderView** view);                    // slot 19 (0xb48320)
    void Update();                                             // slot 13 (0xb481c0, ModularMeshInstanceLevelOfDetail's too)
    void Queue(RenderQueue* queue);                            // slot 21 (0xb485e0)
    void Rebuild();                                            // 0xb49910
    void RebuildParts();                                       // 0xb49fa0
    char padding_8[0x98];
    Vector<MeshModule> modules;  // +0xa0
    char padding_c0[0x8];
    Vector<RenderPart> parts;    // +0xc8
    char padding_e8[0x8];
    VolumeExtent extent;         // +0xf0
    bool rebuild;                // +0x108
    bool extentDirty;            // +0x109
};
// Onyx::Graphics::Morph (type 0x3aa59a88).
struct Morph : onyx::Component {};
// What plays a morph instance's morph (+0x90 in the instance; the morph it plays is its first word).
struct MorphPlayer {
    Morph* morph;
    void Bind(Morph* morph);                                   // 0xb43a10
    bool Advance();                                            // 0xb3e960: true when the instance should follow up
};
// Slot 13 binds the player to the instance's morph the first time, then steps it.
struct MorphInstance {
    virtual void Slot0();
    void Update();                                             // slot 13 (0xb43780)
    void Prepare();                                            // 0xb43ef0
    void FollowUp();                                           // 0xb444b0
    char padding_8[0x88];
    MorphPlayer player;          // +0x90
    char padding_98[0xa8];
    onyx::ComponentHandle* morphHandle;   // +0x140
};
// Slot 2 queues every part the strategy skins.
struct SoftwareSkinningStrategy {
    virtual void Slot0();
    void Queue(RenderQueue* queue);                            // slot 2 (0xaf7f60)
    char padding_8[0x18];
    Vector<RenderPart> parts;    // +0x20
};

extern "C" float tanf(float);

// The cameras keep their clip planes at +0x58 and +0x5c and the projection matrix (row-major, Direct3D's
// right-handed form) at +0x94. Slot 15 rebuilds the projection.
struct CameraLayout {
    virtual void Slot0();
    char padding_8[0x50];
    float nearPlane;             // +0x58
    float farPlane;              // +0x5c
    char padding_60[0x34];
    float projection[4][4];      // +0x94
    char padding_d4[0x4];
};
struct PerspectiveCamera : CameraLayout {
    void UpdateProjection();                                   // slot 15 (0xb8f800)
    float fieldOfView;           // +0xd8: vertical, in radians
    float aspectRatio;           // +0xdc
};
struct OrthographicCamera : CameraLayout {
    void UpdateProjection();                                   // slot 15 (0xb90ac0)
    // Slot 16: the ray through a screen point (its origin and direction); slot 18: the point that far between the
    // clip planes along it (0 at the near plane, 1 at the far one). Slot 18's parameter order (the depth before the
    // output) is a guess only the match supports: it decides the order of the entry's register copies.
    virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10();
    virtual void Slot11(); virtual void Slot12(); virtual void Slot13(); virtual void Slot14(); virtual void Slot15();
    virtual void ScreenRay(const void* point, Vec3& origin, Vec3& direction);   // slot 16
    void ScreenPoint(const void* point, float depth, Vec3& position);          // slot 18 (0xb911c0)
    float left;                  // +0xd8
    float right;                 // +0xdc
    float bottom;                // +0xe0
    float top;                   // +0xe4
};

// The texel data a texture owns (+0x58); its destructor (0x686c90) is out of line, its memory goes back to the
// allocator it came from.
struct TexelBuffer {
    ~TexelBuffer();
};
// Texture's base (the class name is provisional); its destructor is 0x686d90.
struct TextureBase {
    virtual ~TextureBase();
    char padding_8[0x50];
};
// Onyx::Graphics::Texture: slots 0 and 1 (0x6866b0, 0x686730) destroy the texel buffer.
struct Texture : TextureBase {
    ~Texture();
    TexelBuffer* texels;         // +0x58
};

// Onyx::Graphics::TexelStorageLinearLittleEndian: slot 3 adds up slot 4 over the levels below the one asked for, so
// slot 5 (slots 3 and 4 for the level below) covers the levels up to it.
// What a texel format is made of (0x685400 looks a format up): the block's width and height as powers of two and its
// size in bytes.
struct TexelFormatInfo {
    char padding_0[0x1c];
    uint8_t blockWidthLog2;      // +0x1c
    uint8_t blockHeightLog2;     // +0x1d
    uint8_t bytesPerBlock;       // +0x1e
};
const TexelFormatInfo* TexelFormat(uint32_t format);          // 0x685400
struct TexelStorageLinearLittleEndian {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
    virtual uint32_t Slot3(uint32_t level, uint32_t a, uint32_t b, uint32_t c, bool d);   // slot 3 (0x684fb0)
    virtual uint32_t Slot4(uint32_t level, uint32_t a, uint32_t b, uint32_t c, bool d);   // slot 4 (0x685040)
    uint32_t Slot5(uint32_t level, uint32_t a, uint32_t b, uint32_t c);                  // slot 5 (0x685110)
    char padding_8[0x4];
    uint32_t rowAlignment;       // +0xc
    uint32_t levelAlignment;     // +0x10
};

namespace Evolution_RenderTarget {

// A reference-counted object the render targets share (count at +0x8); slot 3 disposes of it when the last reference
// goes.
struct SharedResource {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
    virtual void Dispose();      // slot 3
    uint32_t references;         // +0x8
};

// A render-target surface; it holds one shared resource (+0x28). Surface adds nothing its destructor runs.
struct SurfaceNative {
    virtual ~SurfaceNative() {
        SharedResource* shared = resource;
        if (__atomic_sub_fetch(&shared->references, 1, __ATOMIC_RELAXED) == 0) shared->Dispose();
    }
    char padding_8[0x20];
    SharedResource* resource;    // +0x28
};
struct Surface : SurfaceNative {
    ~Surface();                  // slot 1 (0x6d2040): the deleting destructor
};

template<class T> struct RenderTargetResourceHandle;
struct TexelBufferDescriptor;

// A table of render-target resources (the entries are 0x40 bytes); its destructor (0x6cf620) is out of line.
struct ResourceTable {
    char padding_0[0x28];
    ~ResourceTable();
};

// Keeps the render targets of one kind in a table per pass; the destructor releases both passes (0x6cf7f0 with 0
// and 1) before the tables go.
template<class Handle, class Descriptor, class Native> struct RenderTargetResourceManager {
    virtual ~RenderTargetResourceManager() {
        Release(0);
        Release(1);
    }
    void Release(int pass) noexcept;   // 0x6cf7f0 (the destructor has no landing pads, so it cannot throw)
    ResourceTable tables[2];     // +0x8
};
typedef RenderTargetResourceManager<RenderTargetResourceHandle<Texture>, TexelBufferDescriptor, void*>
    TextureResourceManager;
extern template struct RenderTargetResourceManager<RenderTargetResourceHandle<Texture>, TexelBufferDescriptor, void*>;
// The texture targets' manager; its destructor is the base's.
struct RenderTargetTextureManager : TextureResourceManager {
    ~RenderTargetTextureManager();   // slots 0 and 1 (0x6cf740, 0x6cf790)
};

}  // namespace Evolution_RenderTarget

namespace NewMaterialSystem {

// The shader files register under a key (+0x88 of the file) in a global table (0x191dcf0, at +0x50 of it). The table's
// lookup (0x687c60) takes its count and entries by value; an entry (0x28 bytes) starts with a "removed" flag.
struct ShaderKey;
struct ShaderValue;
struct ShaderEntry {
    bool removed;
    char padding_1[0x27];
};
struct ShaderTableView {
    uint64_t count;
    ShaderEntry* items;
};
ShaderEntry* FindShader(ShaderTableView view, const ShaderKey* key);   // 0x687c60
struct ShaderTable {
    void* allocator;
    uint64_t capacity;
    ShaderTableView view;        // +0x10
    void Insert(const ShaderKey* key, ShaderValue* value);            // 0x687f80
};
struct ShaderRegistry {
    char padding_0[0x50];
    ShaderTable table;           // +0x50
};
}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx
extern "C" Onyx::Graphics::NewMaterialSystem::ShaderRegistry* Accessor_ShaderRegistry;
namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {

// Onyx::Graphics::NewMaterialSystem::ShaderFile: slot 2 (enable) registers the file unless its key is there, slot 3
// (disable) marks its entry removed.
struct ShaderFile {
    virtual void Slot0();
    void Enable();                                             // slot 2 (0x687a70)
    void Disable();                                            // slot 3 (0x687ae0)
    char padding_8[0x30];
    uint32_t componentFlags;     // +0x38: bit 1 while enabled
    char padding_3c[0x3c];
    char value[0x10];            // +0x78
    char key[0x10];              // +0x88
};

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
// is an owned object (its allocator gets it back) that holds a function (+0x8) taking the entry; slot 14 calls
// every entry's.
struct CatalogEntry {
    virtual ~CatalogEntry();
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
// The ring (sentinel, count). Its destructor destroys every entry and frees every node, then leaves the ring empty.
// The original inlines it into the catalogs' destructors, which our inliner declines without always_inline.
struct CatalogRing {
    CatalogLink head;
    uint64_t count;              // +0x10
    __attribute__((always_inline)) ~CatalogRing() {
        for (CatalogLink* link = head.next; link != &head;) {
            CatalogNode* node = static_cast<CatalogNode*>(link);
            link = link->next;
            if (CatalogEntry* entry = node->entry) {
                onyx::Allocator* allocator = onyx::AllocatorFor(entry);
                entry->~CatalogEntry();
                allocator->Free(entry);
            }
            if (node) onyx::AllocatorFor(node)->Free(node);
        }
        count = 0;
        head.next = &head;
        head.prev = &head;
    }
    __attribute__((always_inline)) void CallEntries() {
        CatalogIterator end = {&head};
        for (CatalogIterator it = {head.next}; end != it;) {
            CatalogEntry* entry = *it++;
            entry->function(entry);
        }
    }
};

}  // namespace EvolutionDevelopment

// The base the catalogs' Onyx::Catalog<T> derives from; its destructor is 0x6c8ae0 (ComponentBase::~ComponentBase
// in other builds).
struct CatalogComponentBase {
    virtual ~CatalogComponentBase();
    char padding_8[0x68];
};
// A list of component pointers that frees its buffer when it goes (Onyx::Catalog's list, +0x70).
template<class T> struct OwnedPointerList : PointerList<T> {
    ~OwnedPointerList() {
        T* buffer = this->items;
        this->count = 0;
        if (buffer) onyx::AllocatorFor(buffer)->Free(buffer);
        this->items = nullptr;
        this->capacity = 0;
        this->count = 0;
    }
};

}  // namespace Graphics

namespace Meta { struct Null; }
// Onyx::Catalog<T, Meta::Null>: the components of type T (its slot 13 is CatalogRefresh.cpp's Collection).
template<class T, class M> struct Catalog : Graphics::CatalogComponentBase {
    Graphics::OwnedPointerList<T*> components;   // +0x70
    char padding_98[0x10];
};
struct LightComponent;

namespace Graphics {
struct Visual;
namespace EvolutionDevelopment {

struct View2;
// The catalogs: slot 14 calls every entry's function; slot 0 (the destructor) empties the ring.
struct View2Catalog : Catalog<View2, Meta::Null> {
    ~View2Catalog();             // slot 0 (0xb6f830)
    void Slot14();               // slot 14 (0xb6f990)
    CatalogRing entries;         // +0xa8
};
struct VisualCatalog : Catalog<Visual, Meta::Null> {
    ~VisualCatalog();            // slot 0 (0xb70da0)
    void Slot14();               // slot 14 (0xb70f00)
    CatalogRing entries;         // +0xa8
};
struct Partitioning;
struct PartitioningCatalog : Catalog<Partitioning, Meta::Null> {
    ~PartitioningCatalog();      // slot 0 (0xb728e0)
    void Slot14();               // slot 14 (0xb72a80)
    CatalogRing entries;         // +0xa8
    char padding_c0[0x8];
    OwnedPointerList<void*> list;   // +0xc8
};
struct LightCatalog : Catalog<LightComponent, Meta::Null> {
    ~LightCatalog();             // slot 0 (0xb72d10)
    void Slot14();               // slot 14 (0xb72e70)
    CatalogRing entries;         // +0xa8
};

}  // namespace EvolutionDevelopment

}  // namespace Graphics

// Onyx::SkinnedMeshComponent (SkinnedMeshInstanceLevelOfDetail's base): slot 15 reports the skinned mesh's extent.
struct SkinnedMeshComponent {
    virtual void Slot0();
    void GetExtent(Graphics::VolumeExtent& extent);            // slot 15 (0xaf95a0)
    char padding_8[0x88];
    onyx::ComponentHandle* mesh;     // +0x90
};

}  // namespace Onyx
