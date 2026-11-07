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
    CallEntries();
}
// Slot 14 (0xb70f00): calls every entry's function.
void VisualCatalog::Slot14() {
    CallEntries();
}
// Slot 14 (0xb72a80): calls every entry's function.
void PartitioningCatalog::Slot14() {
    CallEntries();
}
// Slot 14 (0xb72e70): calls every entry's function.
void LightCatalog::Slot14() {
    CallEntries();
}

}  // namespace EvolutionDevelopment

}  // namespace Graphics
}  // namespace Onyx
