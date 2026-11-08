// Onyx::Graphics::MaterialProperty: the render-state properties a material sets for one of its passes. Slot 9 applies
// the property's state and slot 8 puts the default back. The classes are the RTTI ones; the slot names are provisional.
#include <stdint.h>
#include "OnyxComponents.h"

// The default colors, set at startup (see src/NetworkGraphicsInitializer.cpp): white and opaque black, red in the low byte.
extern uint32_t Color_191c438;
extern uint32_t Color_191c43c;

namespace Onyx {
namespace Graphics {

// The renderer behind the global at 0x191dce8. +0x1cc holds the state bits the toggles flip.
struct RendererState {
    char padding_0[0x1b8];
    struct {
        uint32_t enabled : 1;
        uint32_t : 3;
        uint32_t source : 5;           // Blending's table values
        uint32_t destination : 5;
        uint32_t : 18;
    } blend;                 // +0x1b8
    float blendColor[4];     // +0x1bc
    union {
        uint32_t stateBits;      // +0x1cc
        struct {
            uint32_t state0 : 1;
            uint32_t depthFunc : 4;    // DepthFunc's table value
            uint32_t depthWrite : 1;   // the bit DisableDepthWrite clears
            uint32_t : 26;
        };
    };
    char padding_1d0[0x4];
    struct {
        uint8_t raster0 : 2;
        uint8_t frontFace : 1;         // FrontFace: set for 1, clear for 0
        uint8_t fillMode : 2;          // FillMode's table value
        uint8_t : 3;
    } raster;                // +0x1d4
    char padding_1d5[0x7];
    struct {
        uint16_t enabled : 1;
        uint16_t func : 4;             // a depth-function table value
        uint16_t reference : 8;
        uint16_t : 3;
    } alphaTest;             // +0x1dc
    char padding_1de[0x10a];
    float ambient[4];        // +0x2e8
    float diffuse[4];        // +0x2f8
    float specular[4];       // +0x308
    float emissive[4];       // +0x318
    float globalAmbient[4];  // +0x328
    char padding_338[0x20b0];
    struct FrameBuffers {
        void ClearColor();   // 0x6d6830
        void ClearAll();     // 0x6d6710
    } frameBuffers;          // +0x23e8: the names are provisional
    char padding_23e9[0xae3];
    float depthOffset[2];    // +0x2ecc
    char padding_2ed4[0xc];
    struct TextureUnits {
        // 0x6d8690: the last four arguments are 1, 1, 0, 0 from BindFirstTexture and 2, 2, 0, 0 from BindTexture.
        void Bind(uint32_t unit, struct Texture* texture, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6);
    } textureUnits;          // +0x2ee0: the names are provisional
};
struct Texture : onyx::Component {};   // type 0x24097ed9
// The renderer's values for each depth function and fill mode, in the property's order.
extern "C" const uint32_t Graphics_DepthFuncTable[];   // 0x13492a0
extern "C" const uint32_t Graphics_FillModeTable[];    // 0x14a8c10
extern "C" const uint32_t Graphics_BlendTable[];       // 0x14a8be0
extern "C" RendererState* Graphics_Renderer;   // 0x191dce8

namespace MaterialProperty {

// The pass's textures, as handles.
struct PassTextures {
    char padding_0[0x68];
    uint32_t count;                    // +0x68
    onyx::ComponentHandle** handles;   // +0x70
};
// What slots 8 and 9 receive. +0x70 is whether the pass is active. The names are provisional.
struct PassContext {
    PassTextures* textures;  // +0x0
    char padding_8[0x8];
    uint32_t unit;           // +0x10: BindTexture's texture unit; BindRenderTargetTexture passes it on too
    char padding_14[0x5c];
    uint8_t active;          // +0x70
};

struct Property {
    virtual ~Property();                          // slots 0, 1
    virtual void Slot2();
    virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5();
    virtual void Slot6();
    virtual bool Enabled();                       // slot 7
    virtual void Reset(PassContext* context);     // slot 8: back to the default (a color property's is white or black)
    virtual void Apply(PassContext* context);     // slot 9: the property's own state
    virtual void Slot10();
    virtual void ApplyState();                    // slot 11: DisableDepthWrite clears the depth write bit here
    virtual void DefaultState();                  // slot 12: and sets it back here
};

// Slots 8 and 9 do their work when no pass is active, or when the property is enabled (slot 7). The binary keeps a
// separate copy of the work for each case: FrontFace has its switch twice, and Blending, AlphaTest and DepthOffset
// share only their last store, through an address merged from both copies. The copies fold into one when the work is
// a single call or store, as in the toggles. So the original wrote the work out twice; this macro is our spelling of
// that, and its name is ours.
#define APPLY_WHEN_ENABLED(context, ...) \
    if (!(context)->active) {            \
        __VA_ARGS__                      \
    } else if (Enabled()) {              \
        __VA_ARGS__                      \
    }

// A color property: its color at +0x8, one byte a channel, red first.
struct ColorBase : Property {
    uint8_t color[4];        // +0x8
};
// The renderer's colors are four floats from 0 to 1, one channel at a time.
__attribute__((always_inline)) inline void SetColor(float* out, uint32_t r, uint32_t g, uint32_t b, uint32_t a) {
    out[0] = r / 255.0f;
    out[1] = g / 255.0f;
    out[2] = b / 255.0f;
    out[3] = a / 255.0f;
}
struct DiffuseColor : ColorBase {
    void Reset(PassContext* context) override;    // 0xaeb900
    void Apply(PassContext* context) override;    // 0xaeb990
};
// Not yet matched: the instruction order differs. Byte-typed channels (a four-byte color passed by value) give the
// original's vectorized green and blue in Reset, but neither function's order matches yet.
void DiffuseColor::Reset(PassContext* context) {
    if (!context->active || Enabled()) {
        uint32_t c = Color_191c438;
        SetColor(Graphics_Renderer->diffuse, c & 0xff, (c >> 8) & 0xff, (c >> 16) & 0xff, c >> 24);
    }
}
void DiffuseColor::Apply(PassContext* context) {
    if (!context->active || Enabled()) SetColor(Graphics_Renderer->diffuse, color[0], color[1], color[2], color[3]);
}

// The buffer clears: slot 9 clears through the renderer's frame buffers.
struct ClearColorBuffer : Property {
    void Apply(PassContext* context) override;    // 0xb67420
};
struct ClearFrameBuffers : Property {
    void Apply(PassContext* context) override;    // 0xb674b0
};
void ClearColorBuffer::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context, Graphics_Renderer->frameBuffers.ClearColor();)
}
void ClearFrameBuffers::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context, Graphics_Renderer->frameBuffers.ClearAll();)
}

// The render states taken from a table or a value of the property's own at +0x8.
struct DepthFunc : Property {
    uint32_t func;           // +0x8
    void Apply(PassContext* context) override;    // 0xb697f0
};
struct FillMode : Property {
    uint32_t mode;           // +0x8
    void Apply(PassContext* context) override;    // 0xafbc70
};
struct DepthOffset : Property {
    float offset[2];         // +0x8
    void Apply(PassContext* context) override;    // 0xb68750: the renderer gets both values negated, swapped
};
void DepthFunc::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context, Graphics_Renderer->depthFunc = Graphics_DepthFuncTable[func];)
}
void FillMode::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context, Graphics_Renderer->raster.fillMode = Graphics_FillModeTable[mode];)
}
void DepthOffset::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context,
        float* out = Graphics_Renderer->depthOffset;
        float a = offset[0];
        float b = offset[1];
        out[0] = -b;
        out[1] = -a;)
}

struct Blending : Property {
    uint32_t source;         // +0x8
    uint32_t destination;    // +0xc
    void Apply(PassContext* context) override;    // 0xae1fa0: blending on, both factors through the table
};
struct AlphaTest : Property {
    uint8_t reference;       // +0x8
    char padding_9[0x3];
    uint32_t func;           // +0xc
    void Apply(PassContext* context) override;    // 0xb69a90: the test on, its reference and function
};
struct FrontFace : Property {
    uint32_t face;           // +0x8
    void Apply(PassContext* context) override;    // 0xb696b0: the winding bit for 0 or 1, nothing otherwise
};
struct BlendingConstantColor : Property {
    uint8_t color[4];        // +0x8
    void Apply(PassContext* context) override;    // 0xb68850
};
void Blending::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context,
        RendererState* renderer = Graphics_Renderer;
        renderer->blend.enabled = 1;
        uint32_t s = Graphics_BlendTable[source];
        uint32_t d = Graphics_BlendTable[destination];
        renderer->blend.source = s;
        renderer->blend.destination = d;)
}
void AlphaTest::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context,
        RendererState* renderer = Graphics_Renderer;
        renderer->alphaTest.enabled = 1;
        uint32_t f = func;
        uint8_t r = reference;
        renderer->alphaTest.reference = r;
        renderer->alphaTest.func = Graphics_DepthFuncTable[f];)
}
void FrontFace::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context,
        switch (face) {
        case 0:
            Graphics_Renderer->raster.frontFace = 0;
            break;
        case 1:
            Graphics_Renderer->raster.frontFace = 1;
            break;
        })
}
void BlendingConstantColor::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context,
        float r = color[0], g = color[1], b = color[2], a = color[3];
        RendererState* renderer = Graphics_Renderer;
        renderer->blendColor[0] = r;
        renderer->blendColor[1] = g;
        renderer->blendColor[2] = b;
        renderer->blendColor[3] = a;)
}

struct BindRenderTargetTexture : Property {
    void Apply(PassContext* context) override;    // 0xb78390: hands the pass's value at +0x10 to the helper
    void Bind(uint32_t value);                    // 0xb783e0: provisional name
};
void BindRenderTargetTexture::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context, Bind(context->unit);)
}

// The pass's texture at the property's index, bound to unit 0 (BindFirstTexture) or the pass's unit (BindTexture).
// Not yet matched: after resolving, the original reads the handle again through the array (reloading the array
// pointer), where onyx::Find rereads it through the resolved reference; the rest matches.
struct BindFirstTexture : Property {
    uint32_t index;          // +0x8
    void Apply(PassContext* context) override;    // 0xb694b0
};
struct BindTexture : Property {
    uint32_t index;          // +0x8
    void Apply(PassContext* context) override;    // 0xaebea0
};
void BindFirstTexture::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context,
        uint32_t i = index;
        PassTextures* textures = context->textures;
        if (i < textures->count) {
            Texture* texture = onyx::Find<Texture, onyx_types::type_24097ed9>(textures->handles[i]);
            Graphics_Renderer->textureUnits.Bind(0, texture, 1, 1, 0, 0);
        })
}
void BindTexture::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context,
        PassTextures* textures = context->textures;
        uint32_t i = index;
        if (i < textures->count) {
            uint32_t unit = context->unit;
            Texture* texture = onyx::Find<Texture, onyx_types::type_24097ed9>(textures->handles[i]);
            Graphics_Renderer->textureUnits.Bind(unit, texture, 2, 2, 0, 0);
        })
}

// The three plain toggles: their slots 11 and 12 do the work.
struct DisableDepthWrite : Property {
    void Reset(PassContext* context) override;    // 0xaeb4a0
    void Apply(PassContext* context) override;    // 0xaeb4e0
};
struct DisableColorWrite : Property {
    void Reset(PassContext* context) override;    // 0xb698b0
    void Apply(PassContext* context) override;    // 0xb698f0
};
struct Noise : Property {
    void Reset(PassContext* context) override;    // 0xb666f0
    void Apply(PassContext* context) override;    // 0xb66730
};

void DisableDepthWrite::Reset(PassContext* context) {
    APPLY_WHEN_ENABLED(context, DefaultState();)
}

void DisableDepthWrite::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context, ApplyState();)
}

void DisableColorWrite::Reset(PassContext* context) {
    APPLY_WHEN_ENABLED(context, DefaultState();)
}

void DisableColorWrite::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context, ApplyState();)
}

void Noise::Reset(PassContext* context) {
    APPLY_WHEN_ENABLED(context, DefaultState();)
}

void Noise::Apply(PassContext* context) {
    APPLY_WHEN_ENABLED(context, ApplyState();)
}

#undef APPLY_WHEN_ENABLED

}  // namespace MaterialProperty
}  // namespace Graphics
}  // namespace Onyx
