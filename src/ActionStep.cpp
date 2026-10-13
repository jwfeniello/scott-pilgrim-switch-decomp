// SPTG::ActionStep class identity is confirmed by RTTI and its vtable.
// Method and field names below describe observed behavior and remain provisional.
#include <stdint.h>
#include <stddef.h>

extern "C" void ActionStep_StartCurrent(void* self); // Original 0x927f10
extern "C" uint64_t ActionStep_MakeKey(void* field); // Original 0x7b3d60
extern "C" void ActionStep_BeginChild(uint64_t key, void* child, uint32_t flags); // Original 0x7b40a0
extern "C" void ActionStep_ResolveMissing(void* logger, uint32_t id, void* handle); // 0x67edd0
extern "C" void ActionStep_SendCompletion(void* context, void* target, uint32_t event_id, void* payload); // 0xbf6e80
extern "C" int __cxa_guard_acquire(uint64_t* guard);
extern "C" void __cxa_guard_release(uint64_t* guard);
extern "C" void* ActionStep_Logger; // original global 0x191cd10
extern "C" void* ActionStep_EventContext; // original global 0x1935068
extern "C" int* ActionStep_GatePointer; // original global 0x1935070
extern "C" uint64_t ActionStep_GateGuard; // original global 0x1935078
extern "C" unsigned char ActionStep_GateData[0xa4]; // original global 0x1935080
extern "C" uint64_t ActionStep_GateFloatConstantA; // original 0x1331ae0
extern "C" uint64_t ActionStep_GateFloatConstantB; // original 0x1331000
extern "C" unsigned char ActionStep_GateVectorConstant[16]; // original 0x1334730

struct ActionStepHandle {
    void* pad;
    unsigned char* action;
};

struct ActionStepContext {
    char pad_00[0x38];
    uint8_t flags;
    char pad_39[7];
    void* completion_target;
};

struct ActionStepCallback {
    void* pad;
    void (*call)(ActionStepCallback*, void*);
};

namespace SPTG {
struct ActionStep {
    char unknown_000[0x98];
    uint16_t active_state; // 0x98: low byte is active, high byte is another state flag
    char unknown_09a[0x16];
    uint32_t child_count;  // 0xb0
    char unknown_0b4[4];
    ActionStepHandle** children; // 0xb8: each entry is a component handle
    char unknown_0c0[0x30];
    uint32_t child_index;  // 0xf0

    void Enable();
    void Disable();
    void Update();
    void StartCurrentCandidate();
};

// The completion callback/context fields are at +0x80/+0x88, before the
// active-state field. Access them without changing the provisional class layout.
static inline ActionStepCallback* callback_at(ActionStep* self) {
    return *reinterpret_cast<ActionStepCallback**>(reinterpret_cast<char*>(self) + 0x80);
}
static inline ActionStepContext* context_at(ActionStep* self) {
    return *reinterpret_cast<ActionStepContext**>(reinterpret_cast<char*>(self) + 0x88);
}

static inline void initialize_gate() {
    // This is the static completion-event descriptor's initialization as seen
    // in original assembly. Exact constructor/type identity remains unknown.
    for (unsigned i = 0; i < 0xa4; ++i) ActionStep_GateData[i] = 0;
    *reinterpret_cast<uint64_t*>(ActionStep_GateData + 4) = ActionStep_GateFloatConstantA;
    *reinterpret_cast<uint64_t*>(ActionStep_GateData + 12) = ActionStep_GateFloatConstantB;
    *reinterpret_cast<uint32_t*>(ActionStep_GateData + 20) = 0x454d414e;
    *reinterpret_cast<uint32_t*>(ActionStep_GateData + 0x88) = 13;
    for (unsigned i = 0; i < 16; ++i) ActionStep_GateData[0x90 + i] = ActionStep_GateVectorConstant[i];
}

void ActionStep::Update() {
    if ((active_state & 0xff) == 0) return;
    uint32_t index = child_index;
    ActionStepHandle** array = children;
    uint32_t count = child_count;
    ActionStepHandle* handle = array[index];
    unsigned char* child = handle ? handle->action : nullptr;
    if (child == nullptr) {
        ActionStepHandle** slot = array + index;
        ActionStep_ResolveMissing(ActionStep_Logger, 0x126e2f33, slot);
        handle = array[index];
        child = handle->action;
        auto vtable = *reinterpret_cast<void***>(child);
        reinterpret_cast<void (*)(void*)>(vtable[2])(child);
        handle = array[index];
        child = handle->action;
    }
    if (child[0x98] != 0) return;
    child_index += 1;
    if (child_index < count) {
        ActionStep_StartCurrent(this);
        return;
    }
    ActionStepContext* context = context_at(this);
    if (context == nullptr || !(context->flags & 2)) {
        if (!ActionStep_GatePointer) {
            if (!(__atomic_load_n(reinterpret_cast<uint8_t*>(&ActionStep_GateGuard), __ATOMIC_ACQUIRE) & 1)) {
                if (__cxa_guard_acquire(&ActionStep_GateGuard)) {
                    initialize_gate();
                    __cxa_guard_release(&ActionStep_GateGuard);
                }
            }
            ActionStep_GatePointer = reinterpret_cast<int*>(ActionStep_GateData);
        }
        if (*ActionStep_GatePointer == 0) return;
    }
    // The callback fills this event payload when present. Original code does
    // not initialize the stack slot before handing its address to callbacks.
    uint64_t payload;
    if (ActionStepCallback* cb = callback_at(this)) cb->call(cb, &payload);
    context = context_at(this);
    if (context && context->completion_target) {
        ActionStep_SendCompletion(ActionStep_EventContext, context->completion_target,
                                  0x3a6530b8, &payload);
    }
}

void ActionStep::StartCurrentCandidate() {
    uint32_t count = child_count;
    uint32_t index = child_index;
    if (index < count) {
        ActionStepHandle** array = children;
        ActionStepHandle* handle = array[index];
        unsigned char* child = handle ? handle->action : nullptr;
        if (!child) {
            ActionStepHandle** slot = array + index;
            ActionStep_ResolveMissing(ActionStep_Logger, 0x126e2f33, slot);
            handle = array[index];
            child = handle->action;
            auto vtable = *reinterpret_cast<void***>(child);
            reinterpret_cast<void (*)(void*)>(vtable[2])(child);
            handle = children[index];
            child = handle ? handle->action : nullptr;
        }
        uint64_t key = ActionStep_MakeKey(reinterpret_cast<char*>(this) + 0xc8);
        ActionStep_BeginChild(key, child, 0);
        return;
    }
    if (index != count) return;
    ActionStepContext* context = context_at(this);
    if (context == nullptr || !(context->flags & 2)) {
        if (!ActionStep_GatePointer) {
            if (!(__atomic_load_n(reinterpret_cast<uint8_t*>(&ActionStep_GateGuard), __ATOMIC_ACQUIRE) & 1)) {
                if (__cxa_guard_acquire(&ActionStep_GateGuard)) {
                    initialize_gate();
                    __cxa_guard_release(&ActionStep_GateGuard);
                }
            }
            ActionStep_GatePointer = reinterpret_cast<int*>(ActionStep_GateData);
        }
        if (*ActionStep_GatePointer == 0) return;
    }
    uint64_t payload;
    if (ActionStepCallback* cb = callback_at(this)) cb->call(cb, &payload);
    context = context_at(this);
    if (context && context->completion_target) {
        ActionStep_SendCompletion(ActionStep_EventContext, context->completion_target,
                                  0x3a6530b8, &payload);
    }
}

void ActionStep::Enable() {
    active_state = 1;
    ActionStep_StartCurrent(this);
}

void ActionStep::Disable() {
    active_state = 0x100;
}

static_assert(offsetof(ActionStep, active_state) == 0x98, "state offset");
static_assert(offsetof(ActionStep, child_count) == 0xb0, "count offset");
static_assert(offsetof(ActionStep, children) == 0xb8, "list offset");
static_assert(offsetof(ActionStep, child_index) == 0xf0, "index offset");
}
