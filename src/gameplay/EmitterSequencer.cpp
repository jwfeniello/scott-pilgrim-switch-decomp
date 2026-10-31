// Onyx::Graphics::Particle::Emitter::EmitterSequencer starts each emitter when the one before it ends.
//
// This one builds with default stack coloring, unlike ActionEvents.cpp: the two payloads below are
// separate scoped locals and the original keeps them in one stack slot.
#include "OnyxEvents.h"

namespace onyx {
template<class T> __attribute__((always_inline)) inline T* Peek(ComponentHandle*& cache) { return cache ? static_cast<T*>(cache->object) : nullptr; }
}  // namespace onyx

namespace Onyx {
namespace Graphics {
namespace Particle {
namespace Emitter {
using onyx::ComponentHandle;

struct ChangedEvent { void* source; void* component; ~ChangedEvent() {} };
const uint32_t GraphicsChanged = 0x6c62f499u;

struct SequencedEmitter : onyx::Component {
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9(); virtual void S10(); virtual void S11(); virtual void S12();
    virtual void Update(void* context);     // slot 13
    virtual void S14();
    virtual bool Finished();                // slot 15
};
struct EmitterSequencer {
    virtual void S0(); virtual void S1(); virtual void S2(); virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8(); virtual void S9();
    virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13();
    virtual void Restart();                 // slot 14
    char padding_8[0x38];
    ComponentHandle* listener;              // +0x40
    char padding_48[0x18];
    uint32_t count;                         // +0x60
    ComponentHandle** emitters;             // +0x68
    char padding_70[8];
    int32_t current;                        // +0x78
    bool loops;                             // +0x7c
    void Update(void* context);
};
void EmitterSequencer::Update(void* context) {
    uint32_t index = current;
    if (index == 0xffffffffu) {
        if (count && emitters[0] && emitters[0]->object) {
            current = 0;
            ComponentHandle* to = listener;
            ChangedEvent payload{this, this};
            Event_Notify(Accessor_Tracking, to, GraphicsChanged, reinterpret_cast<onyx::EventPayload*>(&payload));
        }
    } else {
        SequencedEmitter* x = onyx::Peek<SequencedEmitter>(emitters[index]);
        if (x) {
            if (x->Finished()) {
                uint32_t n = count;
                if (n) {
                    uint32_t next = current + 1;
                    if (next >= n) {
                        if (loops) Restart();
                    } else if (emitters[next] && emitters[next]->object) {
                        current = next;
                        ComponentHandle* to = listener;
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

}  // namespace Emitter
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
