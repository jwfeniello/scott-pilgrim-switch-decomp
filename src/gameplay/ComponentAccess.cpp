// Gameplay accessors that reach a component through a cached Onyx handle.
// Owner classes come from the RTTI of the vtables that reference each function;
// function names describe observed behavior and are not original symbols.
#include "OnyxComponents.h"
using namespace onyx;

template<unsigned Offset> struct HandleAt { char padding[Offset]; ComponentHandle* handle; };

// --- Transform getters and setters --------------------------------------------

extern "C" void TransformOwner_CopyPosition(HandleAt<0x50>* self, Vector3* out) {
    Transform* t = Find<Transform, kTransform>(self->handle);
    out->x = t->position.x; out->y = t->position.y; out->z = t->position.z;
}
extern "C" void TransformOwner_CopyVector70(HandleAt<0x50>* self, Vector3* out) {
    Transform* t = Find<Transform, kTransform>(self->handle);
    out->x = t->vector70.x; out->y = t->vector70.y; out->z = t->vector70.z;
}
extern "C" void TransformOwner_CopyVector58(HandleAt<0x50>* self, Vector3* out) {
    Transform* t = Find<Transform, kTransform>(self->handle);
    out->x = t->vector58.x; out->y = t->vector58.y; out->z = t->vector58.z;
}
extern "C" void TransformOwner_CopyVector64(HandleAt<0x50>* self, Vector3* out) {
    Transform* t = Find<Transform, kTransform>(self->handle);
    out->x = t->vector64.x; out->y = t->vector64.y; out->z = t->vector64.z;
}
extern "C" void TransformOwner_SetPosition(HandleAt<0x50>* self, const Vector3* value) {
    Find<Transform, kTransform>(self->handle)->SetPosition(*value);
}

// SPTG::LevelSection and SPTG::HollowSection, vtable slot 14: the section's
// depth is its Transform Z rounded half away from zero.
extern "C" int32_t LevelSection_RoundedDepth(HandleAt<0x50>* self) {
    float z = Get<Transform, kTransform>(self->handle)->position.z;
    return static_cast<int32_t>(static_cast<float>(static_cast<int32_t>(z + (z > 0.0f ? 0.5f : -0.5f))));
}

// Onyx::SimpleObstacle, vtable slots 14 and 2.
extern "C" Vector3 SimpleObstacle_Position(HandleAt<0x60>* self) {
    return Get<Transform, kTransform>(self->handle)->Position();
}
extern "C" Vector3 SimpleObstacle_OwnerPosition(HandleAt<0x10>* self) {
    return Get<Transform, kTransform>(self->handle)->Position();
}

// SPTG::ShadowAnimatedObject, vtable slot 14: Transform X/Y with the object's
// own integer depth as Z.
struct ShadowAnimatedObject {
    char padding[0x58];
    ComponentHandle* transform;
    char padding2[0x148 - 0x60];
    int32_t depth;
};
static_assert(__builtin_offsetof(ShadowAnimatedObject, depth) == 0x148, "ShadowAnimatedObject depth");
extern "C" void ShadowAnimatedObject_Position(ShadowAnimatedObject* self, Vector3* out) {
    Transform* t = Find<Transform, kTransform>(self->transform);
    out->x = t->position.x; out->y = t->position.y;
    out->z = static_cast<float>(self->depth);
}

// Onyx::DareAudio::RolloffGraphics, vtable slots 16 and 17.
extern "C" Transform* RolloffGraphics_Transform(HandleAt<0x58>* self) {
    return Find<Transform, kTransform>(self->handle);
}

// A global scene object whose +0x98 member owns a Transform at +0x50.
struct SceneRoot { char padding[0x98]; HandleAt<0x50>* view; };
extern "C" SceneRoot* Scene_Root;
extern "C" void Scene_ViewVector64(void*, void*, Vector3* out) {
    *out = Get<Transform, kTransform>(Scene_Root->view->handle)->Vector64();
}
extern "C" void Scene_ViewVector58(void*, void*, Vector3* out) {
    *out = Get<Transform, kTransform>(Scene_Root->view->handle)->Vector58();
}
extern "C" void Scene_ViewX(void*, void*, Vector3* out) {
    out->x = Get<Transform, kTransform>(Scene_Root->view->handle)->position.x;
    out->y = 0; out->z = 0;
}

// --- Other component forwards -------------------------------------------------

// SPTG::AnimatedAiActor (and Striker/StrikerYeti), vtable slot 27: forwards to
// virtual +0xa0 of the component registered as 0x29fbe438 (registration not yet recovered).
struct ForwardedQuery : Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6();
    virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual void Slot12(); virtual void Slot13(); virtual void Slot14(); virtual void Slot15(); virtual void Slot16();
    virtual void Slot17(); virtual void Slot18(); virtual void Slot19();
    virtual uint64_t Query();  // +0xa0
};
extern "C" uint64_t AnimatedAiActor_ForwardQuery(HandleAt<0x70>* self) {
    return Get<ForwardedQuery, 0x29fbe438u>(self->handle)->Query();
}

// SPTG::AnimationInfoHolder (Switch and Bank variants), vtable slot 20: bit 2 of
// the current record's flags, read through the component registered as 0x771ba2ee.
struct AnimationRecord { char padding[12]; uint8_t flags; };
struct AnimationRecords : Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6();
    virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual void Slot12(); virtual void Slot13(); virtual void Slot14(); virtual void Slot15();
    virtual AnimationRecord* Current();  // +0x80
};
extern "C" bool AnimationInfoHolder_CurrentFlag2(HandleAt<0x50>* self) {
    return (Get<AnimationRecords, onyx_types::type_771ba2ee>(self->handle)->Current()->flags >> 2) & 1;
}
