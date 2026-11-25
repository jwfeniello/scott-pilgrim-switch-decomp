// Onyx::Fire::FireRenderer (vtable 0x184a6d0): Onyx's renderer behind the Fire player. Member, slot and helper names
// are provisional.
#include <stdint.h>

namespace Onyx {
namespace Fire {

// The vertex arrays, one per vertex kind (0x38 bytes each, at +0x1e0); their destructor is out of line (0x73ee20).
struct VertexArray {
    char padding_0[0x38];
};
struct VertexArrays {
    VertexArray arrays[4];
    ~VertexArrays();
};
// Readies `count` vertices in an array (0x6d8a10; mode 2 here).
void ReadyVertices(uint32_t count, VertexArray* array, int32_t mode);

// What +0x50 holds; it lets its resources go through 0x73d810 (which may throw: the renderer's destructor has a
// landing pad around that call alone).
struct RendererResources {
    char padding_0[0x78];
    __attribute__((always_inline)) ~RendererResources() { Release(this); }
    static void Release(RendererResources* resources);   // 0x73d810
};

// The parts of the renderer behind 0x191dce8 that slot 16 sets: from bit 7 of the state bits, the stencil state
// (packed fields; where one ends and the next begins isn't known), and the stencil reference.
struct StencilRenderer {
    char padding_0[0x1cc];
    uint32_t state0 : 7;
    uint32_t stencil : 24;             // bits 7-30 of +0x1cc
    uint32_t state31 : 1;
    uint32_t stencilReference;         // +0x1d0
};
extern "C" StencilRenderer* Graphics_Renderer;   // 0x191dce8

// The texture state slots 11 and 14 fill (+0xc8).
struct TextureSlot {
    char padding_0[0x14];
    uint32_t modeU;                    // +0x14
    uint32_t modeV;                    // +0x18
    char padding_1c[0xc];
    void* texture;                     // +0x28
};
struct FireTexture {
    char padding_0[0x8];
    void* handle;                      // +0x8
};
struct FireTextureRef {
    char padding_0[0x8];
    FireTexture* texture;              // +0x8
};

struct FireRenderer {
    virtual ~FireRenderer();
    virtual void Slot2(); virtual void Slot3();
    virtual void PrepareVertices(uint32_t count, uint32_t kind, uint32_t* bytes);   // slot 4
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10();
    virtual void* SetTexture(FireTexture* texture);          // slot 11
    virtual void Slot12(); virtual void Slot13();
    virtual void* SetTextureRef(FireTextureRef* texture);    // slot 14
    virtual void Slot15();
    virtual void* PushMask();                                // slot 16
    char padding_8[0xc];
    uint32_t maskDepth;                // +0x14: the next stencil reference
    char padding_18[0x38];
    RendererResources resources;       // +0x50
    TextureSlot* textures;             // +0xc8
    char padding_d0[0x110];
    VertexArrays vertices;             // +0x1e0
};

// Slots 0 and 1 (0x73ef20, 0x73ef50): the members go, the vertex arrays first.
FireRenderer::~FireRenderer() {}

// Slot 4 (0x73f640): readies `count` vertices of a kind and gives their size in bytes (0 for an unknown kind).
void FireRenderer::PrepareVertices(uint32_t count, uint32_t kind, uint32_t* bytes) {
    ReadyVertices(count, &vertices.arrays[kind], 2);
    uint32_t size;
    switch (static_cast<int32_t>(kind)) {
    case 0: size = 8; break;
    case 1: size = 16; break;
    case 2: size = 12; break;
    case 3: size = 20; break;
    default: size = 0; break;
    }
    *bytes = size * count;
}

// Slot 11 (0x73fbf0): binds a texture (repeating both ways), or none.
void* FireRenderer::SetTexture(FireTexture* texture) {
    if (texture) {
        void* handle = texture->handle;
        TextureSlot* slot = textures;
        slot->modeU = 1;
        slot->modeV = 1;
        slot->texture = handle;
    } else {
        textures->texture = nullptr;
    }
    return nullptr;
}

// Slot 14 (0x73fc60): binds the texture a reference holds (mode 2 both ways), or none.
void* FireRenderer::SetTextureRef(FireTextureRef* ref) {
    if (ref) {
        void* handle = ref->texture->handle;
        TextureSlot* slot = textures;
        slot->modeU = 2;
        slot->modeV = 2;
        slot->texture = handle;
    } else {
        textures->texture = nullptr;
    }
    return nullptr;
}

// Slot 16 (0x73d120): starts drawing a mask: the stencil test that writes the next reference, which it then raises.
// Not yet matched: the original loads the state bits before it stores the reference; here the load comes after.
void* FireRenderer::PushMask() {
    StencilRenderer* renderer = Graphics_Renderer;
    renderer->stencilReference = maskDepth;
    renderer->stencil = 0xff7113;
    ++maskDepth;
    return nullptr;
}

}  // namespace Fire
}  // namespace Onyx
