// Onyx::Graphics members (see OnyxGraphics.h).
#include "OnyxGraphics.h"

namespace Onyx {
namespace Graphics {

// Slot 15 (0xb04590): the pyramid's extent, base-wide and centred half way up.
void PyramidShape::GetExtent(VolumeExtent& extent) {
    extent.halfSize = Vec3(baseSize, baseSize, height * 0.5f);
    extent.center = Vec3(0.0f, 0.0f, height * 0.5f);
}

// Slot 15 (0xb09230): the cone's extent, as wide as its base and centred half way up.
void ConeShape::GetExtent(VolumeExtent& extent) {
    extent.halfSize = Vec3(radius, radius, height * 0.5f);
    extent.center = Vec3(0.0f, 0.0f, height * 0.5f);
}

// Slot 24 (0xae47a0): sets the offset, mirrored on the flipped axes.
void Sprite::SetOffset(const float* value) {
    float x = value[0];
    float y = value[1];
    float mirroredX = flipX ? -x : x;
    float mirroredY = flipY ? -y : y;
    offset[0] = mirroredX;
    offset[1] = mirroredY;
    offset[2] = 0.0f;
}

namespace NewMaterialSystem {

// Slot 13 (0xb64440): updates every parameter that changed.
void ShaderMaterialTemplate::UpdateDirtyParameters() {
    for (ShaderParameter** it = parameters.items; it != parameters.items + parameters.count; ++it) {
        if ((*it)->dirty) UpdateParameter(*it);
    }
}

// Slot 14 (0xb644a0): whether any parameter changed.
bool ShaderMaterialTemplate::HasDirtyParameter() {
    for (ShaderParameter** it = parameters.items; it != parameters.items + parameters.count; ++it) {
        if ((*it)->dirty) return true;
    }
    return false;
}

}  // namespace NewMaterialSystem

namespace EvolutionDevelopment {

// Slot 14 (0xb6f990): calls every entry's function.
void View2Catalog::Slot14() {
    entries.CallEntries();
}
// Slot 14 (0xb70f00): calls every entry's function.
void VisualCatalog::Slot14() {
    entries.CallEntries();
}
// Slot 14 (0xb72a80): calls every entry's function.
void PartitioningCatalog::Slot14() {
    entries.CallEntries();
}
// Slot 14 (0xb72e70): calls every entry's function.
void LightCatalog::Slot14() {
    entries.CallEntries();
}

}  // namespace EvolutionDevelopment

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {
namespace Evolution_RenderTarget {

// Slot 1 (0x6d2040): Surface's deleting destructor (SurfaceNative's, inlined). SurfaceNative's own deleting destructor
// (slot 1, 0x6d2090) is emitted with its vtable here.
Surface::~Surface() {
}

// Slots 0 and 1 (0x6cf740, 0x6cf790): the base's destructor, inlined; slot 1 also frees.
// Not yet matched: the original saves x19/x30 right after x20 in the prologue; ours schedules that store four
// instructions later (the bodies are otherwise the same).
RenderTargetTextureManager::~RenderTargetTextureManager() {
}

// Slots 0 and 1 (0x6cf9f0, 0x6cfa40): the texture manager's base destructor (D2 and D0 here).
// Not yet matched: the same prologue scheduling difference.
template TextureResourceManager::~RenderTargetResourceManager();

}  // namespace Evolution_RenderTarget
}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 4 (0xae1420): draws the unit's range, indexed when an index buffer is bound.
void GeometryDynamicRenderUnit::Draw() {
    DrawContext* context = &Accessor_GraphicsSystem->draw;
    if (indexBuffer) {
        context->DrawIndexed(range.count, range.start, range.primitive);
    } else {
        context->Draw(range.count, range.start, range.primitive);
    }
}

// Slot 4 (0xae6a20): draws every range, indexed when an index buffer is bound.
void GeometryStaticRenderUnit::Draw() {
    DrawContext* context = &Accessor_GraphicsSystem->draw;
    DrawRange* begin = ranges;
    DrawRange* end = ranges + rangeCount;
    if (indexBuffer) {
        for (DrawRange* it = begin; it != end; ++it) context->DrawIndexed(it->count, it->start, it->primitive);
    } else {
        for (DrawRange* it = begin; it != end; ++it) context->Draw(it->count, it->start, it->primitive);
    }
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 13 (0xb6ab30): the light's slot, with the spot parameters of a light without a cone.
void LightPoint::Upload(uint32_t index) {
    Light::Upload(index);
    GraphicsSystem::LightSlot& slot = Accessor_GraphicsSystem->lights[index];
    GraphicsSystem::LightPair none = {0.0f, -1.0f};
    slot.spotPair = none;
    slot.spot[0] = -1.0f;
    slot.spot[1] = 0.0f;
}

// Slot 13 (0xb69420): with either of the low two flags set, steps every dynamic material updater.
void DynamicMaterialUpdater::UpdateAll(uint32_t flags) {
    if (flags & 3) {
        PointerList<DynamicMaterialUpdater*>* updaters = Accessor_DynamicMaterialUpdaters;
        DynamicMaterialUpdater** it = updaters->items;
        DynamicMaterialUpdater** end = it + updaters->count;
        for (; it != end; ++it) (*it)->Update();
    }
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 2 (0xb69bc0, LightSpot's and LightPoint's): enables the light and works out its attenuation terms.
// Not yet matched: the original lays the zero case out first (b.hi to the division); ours falls through to the
// division. The rest matches.
void Light::Enable() {
    componentFlags |= 2;
    inverseRange = __builtin_fabsf(range) > 1e-6f ? 1.0f / range : 0.0f;
    float size = falloff < 0.01f ? 0.01f : falloff;
    float scaled = size * 0.01f;
    attenuation68 = 1.0f / scaled;
    attenuation6c = 1.0f / (size * scaled);
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 21 (0xb4f660): queues every part, in the pass its material asks for.
void MeshInstance::Queue(RenderQueue* queue) {
    for (RenderPart* it = parts.items; it != parts.items + parts.count; ++it) queue->Add(it, PassOf(it));
}

// Slot 2 (0xaf7f60): queues every part, in the pass its material asks for.
void SoftwareSkinningStrategy::Queue(RenderQueue* queue) {
    RenderPart* begin = parts.items;
    RenderPart* end = begin + parts.count;
    for (RenderPart* it = begin; it != end; ++it) queue->Add(it, PassOf(it));
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 21 (0xb485e0): slot 19 on the queue's view, then every part whose module shows, in its material's pass.
void ModularMeshInstance::Queue(RenderQueue* queue) {
    Slot19(queue->view560);
    for (RenderPart* it = parts.items; it != parts.items + parts.count; ++it) {
        if (it->module->visible) queue->Add(it, PassOf(it));
    }
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 15 (0xb4f420): the extent of the mesh's bucket.
void MeshInstance::GetExtent(VolumeExtent& extent) {
    Mesh* resolved = onyx::Find<Mesh, 0x7cbaf3f7u>(mesh);
    MeshBucket* bucket = onyx::Find<MeshBucket, 0x40062c4cu>(resolved->bucket);
    extent = bucket->extent;
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {

// Slot 15 (0xaf95a0): the extent of the skinned mesh's bucket.
void SkinnedMeshComponent::GetExtent(Graphics::VolumeExtent& extent) {
    Graphics::SkinnedMesh* resolved = onyx::Find<Graphics::SkinnedMesh, 0x5c5b66b6u>(mesh);
    Graphics::SkinnedMeshBucket* bucket = onyx::Find<Graphics::SkinnedMeshBucket, 0x1f09b050u>(resolved->bucket);
    extent = bucket->extent;
}

}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 13 (0xb43780): the first time, binds the player to the morph and prepares; then steps the player and follows
// up when it asks.
void MorphInstance::Update() {
    if (!player.morph) {
        player.Bind(onyx::Find<Morph, 0x3aa59a88u>(morphHandle));
        Prepare();
    }
    if (player.Advance()) FollowUp();
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 13 (0xb481c0): rebuilds when asked, then (when it changed) the extent: the modules' extents put together.
// Not yet matched: the original stores the cleared extent's first 16 bytes after the flag and the last 8; ours stores
// them first (the loop matches).
void ModularMeshInstance::Update() {
    if (rebuild) {
        rebuild = false;
        Rebuild();
        RebuildParts();
        extentDirty = true;
    }
    if (extentDirty) {
        extentDirty = false;
        extent.Clear();
        for (MeshModule* it = modules.items; it != modules.items + modules.count; ++it) {
            it->Update();
            extent.Add(it->extent);
        }
    }
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 15 (0xb8f800): the perspective projection from the field of view, aspect ratio and clip planes.
// Not yet matched: the same operations, scheduled differently (the original stores [1][1] before the depth divide
// and [0][0] near the end).
void PerspectiveCamera::UpdateProjection() {
    float fov = fieldOfView;
    float aspect = aspectRatio;
    float zn = nearPlane;
    float zf = farPlane;
    float yScale = 1.0f / tanf(fov * 0.5f);
    float xScale = yScale / aspect;
    float depth = zf / (zf - zn);
    projection[0][0] = xScale;
    projection[0][1] = 0.0f;
    projection[0][2] = 0.0f;
    projection[0][3] = 0.0f;
    projection[1][0] = 0.0f;
    projection[1][1] = yScale;
    projection[1][2] = 0.0f;
    projection[1][3] = 0.0f;
    projection[2][0] = 0.0f;
    projection[2][1] = 0.0f;
    projection[2][2] = -depth;
    projection[2][3] = -1.0f;
    projection[3][0] = 0.0f;
    projection[3][1] = 0.0f;
    projection[3][2] = -zn * depth;
    projection[3][3] = 0.0f;
}

// Slot 15 (0xb90ac0): the orthographic projection from the view box and clip planes.
void OrthographicCamera::UpdateProjection() {
    float zn = nearPlane;
    float zf = farPlane;
    float t = top;
    float b = bottom;
    float l = left;
    float r = right;
    float invWidth = 1.0f / (r - l);
    float invHeight = 1.0f / (t - b);
    float invDepth = 1.0f / (zf - zn);
    float m30 = -(l + r) * invWidth;
    float m31 = -(t + b) * invHeight;
    float m32 = -zn * invDepth;
    float m00 = 2.0f * invWidth;
    float m11 = 2.0f * invHeight;
    float m22 = -invDepth;
    projection[0][0] = m00;
    projection[0][1] = 0.0f;
    projection[0][2] = 0.0f;
    projection[0][3] = 0.0f;
    projection[1][0] = 0.0f;
    projection[1][1] = m11;
    projection[1][2] = 0.0f;
    projection[1][3] = 0.0f;
    projection[2][0] = 0.0f;
    projection[2][1] = 0.0f;
    projection[2][2] = m22;
    projection[2][3] = 0.0f;
    projection[3][0] = m30;
    projection[3][1] = m31;
    projection[3][2] = m32;
    projection[3][3] = 1.0f;
}


}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 18 (0xb911c0): the point on the screen point's ray, the given fraction of the way between the clip planes.
void OrthographicCamera::ScreenPoint(const void* point, float depth, Vec3& position) {
    Vec3 direction;
    ScreenRay(point, position, direction);
    float distance = nearPlane + (farPlane - nearPlane) * depth;
    Vec3 offset = direction * distance;
    position.v[0] = offset.v[0] + position.v[0];
    position.v[1] = offset.v[1] + position.v[1];
    position.v[2] = offset.v[2] + position.v[2];
}


}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slots 0 and 1 (0x6866b0, 0x686730): destroys the texel buffer and gives its memory back. The base-object
// destructor (D2, which the complete one aliases here) is slot 0's code.
// Not yet matched (slot 1): ours calls the aliased complete destructor; the original inlines it, as a destructor
// defined in the class (emitted with a vtable whose key function is elsewhere in the file) would be.
Texture::~Texture() {
    TexelBuffer* buffer = texels;
    if (buffer) {
        onyx::Allocator* allocator = onyx::AllocatorFor(buffer);
        buffer->~TexelBuffer();
        allocator->Free(buffer);
    }
}

// Slot 5 (0x685110): slots 3 and 4 added, for the level below.
uint32_t TexelStorageLinearLittleEndian::Slot5(uint32_t level, uint32_t a, uint32_t b, uint32_t c) {
    uint32_t below = level - 1;
    uint32_t first = Slot3(below, a, b, c, false);
    return Slot4(below, a, b, c, false) + first;
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 3 (0x684fb0): slot 4 summed over the levels below the given one.
uint32_t TexelStorageLinearLittleEndian::Slot3(uint32_t level, uint32_t a, uint32_t b, uint32_t c, bool) {
    uint32_t total = 0;
    for (uint32_t i = 0; i < level; ++i) total += Slot4(i, a, b, c, false);
    return total;
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 4 (0x685040): the bytes one level takes: its size in blocks, the rows aligned, the whole aligned.
uint32_t TexelStorageLinearLittleEndian::Slot4(uint32_t level, uint32_t format, uint32_t width, uint32_t height, bool) {
    uint32_t across = width >> level;
    uint32_t down = height >> level;
    if (across | down) {
        if (across == 0 && width != 0) across = 1;
        if (down == 0 && height != 0) down = 1;
    }
    across = (across + ~(~0u << TexelFormat(format)->blockWidthLog2)) >> TexelFormat(format)->blockWidthLog2;
    down = (down + ~(~0u << TexelFormat(format)->blockHeightLog2)) >> TexelFormat(format)->blockHeightLog2;
    uint32_t row = (across * TexelFormat(format)->bytesPerBlock + rowAlignment - 1) & -rowAlignment;
    return (row * down + levelAlignment - 1) & -levelAlignment;
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {
namespace NewMaterialSystem {

// Slot 2 (0x687a70): enables the file and registers it unless its key is already in the table.
void ShaderFile::Enable() {
    componentFlags |= 2;
    ShaderRegistry* registry = Accessor_ShaderRegistry;
    const ShaderKey* fileKey = reinterpret_cast<const ShaderKey*>(key);
    ShaderEntry* found = FindShader(registry->table.view, fileKey);
    if (registry->table.view.items + registry->table.view.count == found) {
        registry->table.Insert(fileKey, reinterpret_cast<ShaderValue*>(value));
    }
}

// Slot 3 (0x687ae0): marks the file's entry removed and disables it.
void ShaderFile::Disable() {
    const ShaderKey* fileKey = reinterpret_cast<const ShaderKey*>(key);
    ShaderRegistry* registry = Accessor_ShaderRegistry;
    ShaderEntry* entry = FindShader(registry->table.view, fileKey);
    if (registry->table.view.items + registry->table.view.count != entry) entry->removed = true;
    componentFlags &= ~2u;
}

}  // namespace NewMaterialSystem
}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {

// Slot 2 (0xc9d0f0): enables the fader, starts its states and applies its level.
void GraphicsFader::Enable() {
    componentFlags |= 2;
    states.Start(this, InitialState());
    Apply(level);
}

}  // namespace Graphics
}  // namespace Onyx

namespace Onyx {
namespace Graphics {
namespace EvolutionDevelopment {

// Slot 0 (0xb6f830): empties the ring; Catalog's list and base go after.
View2Catalog::~View2Catalog() {
}
// Slot 0 (0xb70da0): empties the ring; Catalog's list and base go after.
VisualCatalog::~VisualCatalog() {
}
// Slot 0 (0xb72d10): empties the ring; Catalog's list and base go after.
LightCatalog::~LightCatalog() {
}
// Slot 0 (0xb728e0): frees its own list and empties the ring; Catalog's list and base go after.
PartitioningCatalog::~PartitioningCatalog() {
}

}  // namespace EvolutionDevelopment
}  // namespace Graphics
}  // namespace Onyx
