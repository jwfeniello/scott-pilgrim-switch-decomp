// Class identity comes from RTTI + relocated vtable. Method/field names are inferred.
#include <stdint.h>
#include <stddef.h>

struct Stream {
    virtual void slot0(); virtual void slot1(); virtual void slot2();
    virtual void slot3(); virtual void slot4(); virtual void slot5();
    virtual uint32_t Transfer(void* field, uint32_t bytes); // vtable +0x30
};

struct Archive {
    uint64_t transferred;
    Stream* stream;
    void Field(void* field, uint32_t bytes) {
        transferred += stream->Transfer(field, bytes);
    }
};

extern "C" void BaseAction_Serialize(void* action, Archive& archive); // ELF 0xbcaa30
extern "C" void BaseAction_Update(void* action); // original 0x8e17a0
extern "C" void BaseAction_Setup(void* action); // original 0x8e1690
extern "C" void* Move_ResolveLogger;
extern "C" void Move_ResolveMissing(void* logger, uint32_t id, void* handle); // 0x67edd0
extern "C" void Move_ApplyPosition(void* component, const void* position); // 0x85fd70
extern "C" void Move_SendCompletion(void* context, void* target, uint32_t id, void* payload); // 0xbf6e80
extern "C" float Move_FrameDelta; // original global 0x1924d70
extern "C" float Move_Epsilon; // original 0x1331fdc
extern "C" float Move_FramesPerSecond; // original 0x1331fe0 (60.0f)
extern "C" float sqrtf(float);
extern "C" void* Move_EventContext; // original global 0x1935068
extern "C" int* Move_GatePointer; // original global 0x1935070
extern "C" uint64_t Move_GateGuard; // original global 0x1935078
extern "C" unsigned char Move_GateData[0xa4]; // original global 0x1935080
extern "C" uint64_t Move_GateFloatA; // original 0x1331ae0
extern "C" uint64_t Move_GateFloatB; // original 0x1331000
extern "C" unsigned char Move_GateVector[16]; // original 0x1334730
extern "C" int __cxa_guard_acquire(uint64_t*);
extern "C" void __cxa_guard_release(uint64_t*);

struct MoveHandle { void* pad; void* component; };
struct MoveActor {
    char pad_00[0x78];
    MoveHandle* position;
    char pad_80[0xc4];
    int z_integer;
};
struct MoveOwner { void* pad; MoveActor* actor; };
struct MoveCompletionContext {
    char pad_00[0x38];
    uint8_t flags;
    char pad_39[7];
    void* completion_target;
};
struct MoveCallback {
    void* pad;
    void (*call)(MoveCallback*, void*);
};

namespace SPTG {
struct Vec3 { float x, y, z; };

struct ActorMoveAction {
    char unknown_000[0xa8];
    uint8_t flag_a8;
    uint8_t flag_a9;
    uint8_t unknown_aa;
    uint8_t absolute_start; // 0xab; inferred from movement setup
    uint8_t absolute_end;   // 0xac
    char unknown_ad[3];
    Vec3 start_parameter;   // 0xb0
    Vec3 end_parameter;     // 0xbc
    float duration_override; // 0xc8
    uint32_t movement_mode; // 0xcc; serialized via a temporary
    uint8_t flag_d0;
    uint8_t flag_d1;
    char unknown_d2[2];
    Vec3 start_position;    // 0xd4
    Vec3 end_position;      // 0xe0
    float duration;         // 0xec
    float elapsed;          // 0xf0

    void Serialize(Archive& archive);
    void UpdateCandidate();
    void SetupCandidate();
};

void ActorMoveAction::Serialize(Archive& archive) {
    BaseAction_Serialize(this, archive);
    archive.Field(&flag_a8, 1);
    archive.Field(&flag_a9, 1);
    archive.Field(&absolute_start, 1);
    archive.Field(&absolute_end, 1);
    archive.Field(&start_parameter.x, 4);
    archive.Field(&start_parameter.y, 4);
    archive.Field(&start_parameter.z, 4);
    archive.Field(&end_parameter.x, 4);
    archive.Field(&end_parameter.y, 4);
    archive.Field(&end_parameter.z, 4);
    archive.Field(&duration_override, 4);
    uint32_t mode = movement_mode;
    archive.Field(&mode, 4);
    movement_mode = mode;
    archive.Field(&flag_d0, 1);
    archive.Field(&flag_d1, 1);
}

static_assert(offsetof(ActorMoveAction, absolute_start) == 0xab, "start flag");
static_assert(offsetof(ActorMoveAction, start_parameter) == 0xb0, "start parameter");
static_assert(offsetof(ActorMoveAction, movement_mode) == 0xcc, "mode");
static_assert(offsetof(ActorMoveAction, start_position) == 0xd4, "start position");
static_assert(offsetof(ActorMoveAction, elapsed) == 0xf0, "elapsed");

static inline void initialize_move_gate() {
    for (unsigned i = 0; i < 0xa4; ++i) Move_GateData[i] = 0;
    *reinterpret_cast<uint64_t*>(Move_GateData + 4) = Move_GateFloatA;
    *reinterpret_cast<uint64_t*>(Move_GateData + 12) = Move_GateFloatB;
    *reinterpret_cast<uint32_t*>(Move_GateData + 20) = 0x454d414e;
    *reinterpret_cast<uint32_t*>(Move_GateData + 0x88) = 13;
    for (unsigned i = 0; i < 16; ++i) Move_GateData[0x90+i] = Move_GateVector[i];
}

void ActorMoveAction::UpdateCandidate() {
    BaseAction_Update(this);
    unsigned char* raw = reinterpret_cast<unsigned char*>(this);
    if (raw[0x98] == 0) return;

    float current = elapsed + Move_FrameDelta;
    elapsed = current;
    bool interpolate = duration != 0.0f && current <= duration;
    Vec3 position;
    if (interpolate) {
        float fraction = current / duration;
        position.x = start_position.x + (end_position.x - start_position.x) * fraction;
        position.y = start_position.y + (end_position.y - start_position.y) * fraction;
        position.z = start_position.z + (end_position.z - start_position.z) * fraction;
    } else {
        position = end_position;
    }

    MoveOwner* owner = *reinterpret_cast<MoveOwner**>(raw+0xa0);
    MoveActor* actor = owner->actor;
    MoveHandle** handle_slot = &actor->position;
    MoveHandle* handle = *handle_slot;
    void* component = handle ? handle->component : nullptr;
    if (!component) {
        Move_ResolveMissing(Move_ResolveLogger, 0x6492d61d, handle_slot);
        handle = *handle_slot;
        component = handle->component;
        void** vtable = *reinterpret_cast<void***>(component);
        reinterpret_cast<void (*)(void*)>(vtable[2])(component);
        handle = *handle_slot;
        component = handle ? handle->component : nullptr;
    }
    Move_ApplyPosition(component, &position);
    actor->z_integer = static_cast<int>(position.z);
    if (interpolate) return;

    MoveCompletionContext* context = *reinterpret_cast<MoveCompletionContext**>(raw+0x88);
    if (context == nullptr || !(context->flags & 2)) {
        if (!Move_GatePointer) {
            if (!(__atomic_load_n(reinterpret_cast<uint8_t*>(&Move_GateGuard), __ATOMIC_ACQUIRE) & 1)) {
                if (__cxa_guard_acquire(&Move_GateGuard)) {
                    initialize_move_gate();
                    __cxa_guard_release(&Move_GateGuard);
                }
            }
            Move_GatePointer = reinterpret_cast<int*>(Move_GateData);
        }
        if (*Move_GatePointer == 0) return;
    }
    uint64_t payload;
    MoveCallback* callback = *reinterpret_cast<MoveCallback**>(raw+0x80);
    if (callback) callback->call(callback, &payload);
    context = *reinterpret_cast<MoveCompletionContext**>(raw+0x88);
    if (context && context->completion_target)
        Move_SendCompletion(Move_EventContext, context->completion_target, 0x3a6530b8, &payload);
}

static inline void* move_component(MoveHandle** slot, uint32_t id) {
    MoveHandle* handle = *slot;
    void* component = handle ? handle->component : nullptr;
    if (!component) {
        Move_ResolveMissing(Move_ResolveLogger, id, slot);
        component = (*slot)->component;
        void** vtable = *reinterpret_cast<void***>(component);
        reinterpret_cast<void (*)(void*)>(vtable[2])(component);
        handle = *slot;
        component = handle ? handle->component : nullptr;
    }
    return component;
}

static inline void* move_nested_component(void* component, size_t offset, uint32_t id) {
    MoveHandle** slot = reinterpret_cast<MoveHandle**>(reinterpret_cast<char*>(component) + offset);
    MoveHandle* handle = *slot;
    void* nested = handle ? handle->component : nullptr;
    if (!nested) {
        Move_ResolveMissing(Move_ResolveLogger, id, slot);
        nested = (*slot)->component;
        void** vtable = *reinterpret_cast<void***>(nested);
        reinterpret_cast<void (*)(void*)>(vtable[2])(nested);
        handle = *slot;
        nested = handle ? handle->component : nullptr;
    }
    return nested;
}

void ActorMoveAction::SetupCandidate() {
    BaseAction_Setup(this);
    elapsed = 0.0f;

    MoveOwner* owner = *reinterpret_cast<MoveOwner**>(reinterpret_cast<char*>(this) + 0xa0);
    MoveActor* actor = owner->actor;
    void* position_component = move_component(&actor->position, 0x6492d61d);
    void* position_source = move_nested_component(position_component, 0x60, 0x022fe74a);
    Vec3 current = *reinterpret_cast<Vec3*>(reinterpret_cast<char*>(position_source) + 0x7c);
    start_position = current;
    if (absolute_start) {
        start_position = start_parameter;
    } else {
        start_position.x = current.x + start_parameter.x;
        start_position.y = current.y + start_parameter.y;
        start_position.z = current.z + start_parameter.z;
    }
    if (absolute_end) {
        end_position = end_parameter;
    } else {
        end_position.x = start_position.x + end_parameter.x;
        end_position.y = start_position.y + end_parameter.y;
        end_position.z = start_position.z + end_parameter.z;
    }

    actor = (*reinterpret_cast<MoveOwner**>(reinterpret_cast<char*>(this) + 0xa0))->actor;
    position_component = move_component(&actor->position, 0x6492d61d);
    Move_ApplyPosition(position_component, &start_position);
    actor->z_integer = static_cast<int>(start_position.z);

    actor = (*reinterpret_cast<MoveOwner**>(reinterpret_cast<char*>(this) + 0xa0))->actor;
    void** vtable = *reinterpret_cast<void***>(actor);
    float speed = movement_mode == 1
        ? reinterpret_cast<float (*)(MoveActor*)>(vtable[0x1f0 / 8])(actor)
        : reinterpret_cast<float (*)(MoveActor*)>(vtable[0x1e8 / 8])(actor);
    float calculated = 0.0f;
    if (!(__builtin_fabsf(speed) <= Move_Epsilon)) {
        float dx = end_position.x - start_position.x;
        float dz = end_position.z - start_position.z;
        float dy = end_position.y - start_position.y;
        float squared = dx*dx + dy*dy + dz*dz;
        calculated = __builtin_sqrtf(squared) / (speed * Move_FramesPerSecond);
    }
    duration = __builtin_fabsf(duration_override) <= Move_Epsilon ? calculated : duration_override;
    float ratio = 1.0f;
    if (!(__builtin_fabsf(duration) <= Move_Epsilon)) ratio = calculated / duration;
    float applied_ratio = __builtin_fabsf(ratio) <= Move_Epsilon ? 1.0f : ratio;

    actor = (*reinterpret_cast<MoveOwner**>(reinterpret_cast<char*>(this) + 0xa0))->actor;
    vtable = *reinterpret_cast<void***>(actor);
    reinterpret_cast<void (*)(MoveActor*, uint32_t, int, int)>(vtable[0xb8 / 8])(actor, movement_mode, 1, 0);
    actor = (*reinterpret_cast<MoveOwner**>(reinterpret_cast<char*>(this) + 0xa0))->actor;
    vtable = *reinterpret_cast<void***>(actor);
    reinterpret_cast<void (*)(MoveActor*, float)>(vtable[0xc8 / 8])(actor, applied_ratio);

    actor = (*reinterpret_cast<MoveOwner**>(reinterpret_cast<char*>(this) + 0xa0))->actor;
    position_component = move_component(&actor->position, 0x6492d61d);
    void* facing = move_nested_component(position_component, 0x58, 0x2eae5813);
    bool facing_left = *reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(facing) + 0x79) == 0;
    if (((start_position.x <= end_position.x) != facing_left) && flag_d1) {
        actor = (*reinterpret_cast<MoveOwner**>(reinterpret_cast<char*>(this) + 0xa0))->actor;
        vtable = *reinterpret_cast<void***>(actor);
        reinterpret_cast<void (*)(MoveActor*)>(vtable[0xf0 / 8])(actor);
    }
    if (flag_d0) {
        actor = (*reinterpret_cast<MoveOwner**>(reinterpret_cast<char*>(this) + 0xa0))->actor;
        position_component = move_component(&actor->position, 0x6492d61d);
        facing = move_nested_component(position_component, 0x58, 0x2eae5813);
        if (*reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(facing) + 0x79) == 0) {
            vtable = *reinterpret_cast<void***>(actor);
            reinterpret_cast<void (*)(MoveActor*)>(vtable[0xf0 / 8])(actor);
        }
    }
    owner = *reinterpret_cast<MoveOwner**>(reinterpret_cast<char*>(this) + 0xa0);
    if (owner && owner->actor) {
        actor = owner->actor;
        vtable = *reinterpret_cast<void***>(actor);
        if (reinterpret_cast<unsigned (*)(MoveActor*, uint32_t)>(vtable[0x60 / 8])(actor, 0x7d97ec86) & 1)
            *reinterpret_cast<uint8_t*>(reinterpret_cast<char*>(actor) + 0x3ba) = 1;
    }
}
}
