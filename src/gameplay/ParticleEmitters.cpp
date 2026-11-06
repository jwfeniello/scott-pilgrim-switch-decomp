// Onyx::Graphics::Particle::Emitter: the emitters, and the groups and sequencers that run lists of them. See
// Particle.h.
#include "Particle.h"
#include "OnyxEvents.h"

namespace Onyx {
namespace Graphics {
namespace Particle {
namespace Emitter {

void EmitterGroup::Restart() {
    uint32_t count = emitters.count;
    for (uint32_t i = 0; i < count; ++i) {
        if (EmitterBase* emitter = EmitterIn(emitters.items[i])) emitter->Restart();
    }
}

bool EmitterGroup::Finished() {
    bool finished = true;
    uint32_t count = emitters.count;
    for (uint32_t i = 0; i < count; ++i) {
        if (EmitterBase* emitter = EmitterIn(emitters.items[i])) finished &= emitter->Finished();
    }
    return finished;
}

void EmitterGroup::Slot16(void* value) {
    uint32_t count = emitters.count;
    for (uint32_t i = 0; i < count; ++i) {
        if (EmitterBase* emitter = EmitterIn(emitters.items[i])) emitter->Slot16(value);
    }
}

void EmitterGroup::Slot18(bool flag) {
    uint32_t count = emitters.count;
    for (uint32_t i = 0; i < count; ++i) {
        if (EmitterBase* emitter = EmitterIn(emitters.items[i])) emitter->Slot18(flag);
    }
}

struct ChangedEvent { void* source; void* component; ~ChangedEvent() {} };
const uint32_t GraphicsChanged = 0x6c62f499u;

// Starts the first emitter that is there; then, as each finishes, the next, telling the listener each time. At the end
// it restarts if it loops. The two payloads are separate scoped locals: each is 16 bytes, so together they reach
// LLVM's cutoff for merging stack slots and the original keeps them in one slot.
void EmitterSequencer::Update(void* context) {
    uint32_t index = current;
    if (index == 0xffffffffu) {
        if (static_cast<uint32_t>(emitters.count) && emitters.items[0].handle && emitters.items[0].handle->object) {
            current = 0;
            onyx::ComponentHandle* to = listener;
            ChangedEvent payload{this, this};
            Event_Notify(Accessor_Tracking, to, GraphicsChanged, reinterpret_cast<onyx::EventPayload*>(&payload));
        }
    } else {
        EmitterBase* x = EmitterIn(emitters.items[index]);
        if (x) {
            if (x->Finished()) {
                uint32_t n = emitters.count;
                if (n) {
                    uint32_t next = current + 1;
                    if (next >= n) {
                        if (loops) Restart();
                    } else if (emitters.items[next].handle && emitters.items[next].handle->object) {
                        current = next;
                        onyx::ComponentHandle* to = listener;
                        ChangedEvent payload{this, this};
                        Event_Notify(Accessor_Tracking, to, GraphicsChanged, reinterpret_cast<onyx::EventPayload*>(&payload));
                    }
                }
            } else {
                x->Update(context);
            }
        }
    }
}

void EmitterSequencer::Restart() {
    current = -1;
    uint32_t count = emitters.count;
    for (uint32_t i = 0; i < count; ++i) {
        if (EmitterBase* emitter = EmitterIn(emitters.items[i])) emitter->Restart();
    }
}

}  // namespace Emitter
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
