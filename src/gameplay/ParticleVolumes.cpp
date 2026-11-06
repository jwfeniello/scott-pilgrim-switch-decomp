// Onyx::Graphics::Particle::Volume: where particles start (slot 13 places them), and the graphics components that
// show the volumes (slot 15 reports their extent). See Particle.h.
#include "Particle.h"

namespace Onyx {
namespace Graphics {
namespace Particle {

namespace Volume {

void VolumePoint::Place(ParticleList* particles) {
    for (uint32_t i = 0; i < particles->count; ++i) particles->items[i]->position = point;
}

}  // namespace Volume

void VolumeBaseGraphics::GetExtent(VolumeExtent* out) {
    out->Clear();
}

void VolumeLineGraphics::GetExtent(VolumeExtent* out) {
    out->Clear();
}

// A circle in x and y: its radius both ways, flat in z.
void VolumeCircleGraphics::GetExtent(VolumeExtent* out) {
    Volume::VolumeCircle* circle = onyx::Find<Volume::VolumeCircle, onyx_types::type_44978766>(volume);
    out->Clear();
    float radius = __builtin_fabsf(circle->radius);
    out->halfSize.v[2] = 0.0f;
    out->halfSize.v[0] = radius;
    out->halfSize.v[1] = radius;
}

// Half the box's size and its centre. Not yet matched: only the register of the last multiply differs (s4 here, s1).
void VolumeBoxGraphics::GetExtent(VolumeExtent* out) {
    Volume::VolumeBox* box = onyx::Get<Volume::VolumeBox, onyx_types::type_44978767>(volume);
    Vec3 min = box->min;
    Vec3 max = box->max;
    out->halfSize = Vec3(__builtin_fabsf(max.v[0] - min.v[0]) * 0.5f, __builtin_fabsf(max.v[1] - min.v[1]) * 0.5f,
                         __builtin_fabsf(max.v[2] - min.v[2]) * 0.5f);
    out->center = Vec3((min.v[0] + max.v[0]) * 0.5f, (min.v[1] + max.v[1]) * 0.5f, (min.v[2] + max.v[2]) * 0.5f);
}

// Disables every child's graphics, drops the references and clears the enabled bit. The loop is a guarded do-while:
// as a for loop its first load of the entries moves out in front.
void EmitterSequencerGraphics::Disable() {
    uint32_t count = children.count;
    if (count) {
        uint32_t i = 0;
        do static_cast<ParticleGraphics*>(children.items[i].handle->object)->Disable();
        while (++i < count);
    }
    children.Clear();
    componentFlags &= ~2u;
}

// Disables every child's graphics, drops the references and clears the enabled bit. The loop is a guarded do-while:
// as a for loop its first load of the entries moves out in front.
void EmitterGroupGraphics::Disable() {
    uint32_t count = children.count;
    if (count) {
        uint32_t i = 0;
        do static_cast<ParticleGraphics*>(children.items[i].handle->object)->Disable();
        while (++i < count);
    }
    children.Clear();
    componentFlags &= ~2u;
}

// All its children's extents together. Not yet matched (nor the group's, which is the same code): the original copies
// each zero 8 bytes then 4, storing before the next load, and keeps the low corner in v20.
void EmitterSequencerGraphics::GetExtent(VolumeExtent* out) {
    out->Clear();
    uint32_t count = children.count;
    for (uint32_t i = 0; i < count; ++i) {
        VolumeExtent extent;
        static_cast<ParticleGraphics*>(children.items[i].handle->object)->GetExtent(&extent);
        out->Add(extent);
    }
}

void EmitterGroupGraphics::GetExtent(VolumeExtent* out) {
    out->Clear();
    uint32_t count = children.count;
    for (uint32_t i = 0; i < count; ++i) {
        VolumeExtent extent;
        static_cast<ParticleGraphics*>(children.items[i].handle->object)->GetExtent(&extent);
        out->Add(extent);
    }
}

void EmitterSequencerGraphics::Draw(void* list) {
    uint32_t count = children.count;
    for (uint32_t i = 0; i < count; ++i) {
        if (ParticleGraphics* graphics = GraphicsIn(children.items[i])) graphics->Draw(list);
    }
}

void EmitterSequencerGraphics::Slot21(void* value) {
    uint32_t count = children.count;
    for (uint32_t i = 0; i < count; ++i) {
        if (ParticleGraphics* graphics = GraphicsIn(children.items[i])) graphics->Slot14(value);
    }
}

void EmitterGroupGraphics::Draw(void* list) {
    uint32_t count = children.count;
    for (uint32_t i = 0; i < count; ++i) {
        if (ParticleGraphics* graphics = GraphicsIn(children.items[i])) graphics->Draw(list);
    }
}

void EmitterGroupGraphics::Slot21(void* value) {
    uint32_t count = children.count;
    for (uint32_t i = 0; i < count; ++i) {
        if (ParticleGraphics* graphics = GraphicsIn(children.items[i])) graphics->Slot14(value);
    }
}

void EmitterSimpleGraphics::GetExtent(VolumeExtent* out) {
    out->Clear();
    onyx::ComponentHandle* handle = volumeGraphics;
    if (handle && handle->object) static_cast<ParticleGraphics*>(handle->object)->GetExtent(out);
}

}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
