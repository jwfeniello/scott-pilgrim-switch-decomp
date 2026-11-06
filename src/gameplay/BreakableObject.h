// SPTG::BreakableObject (vtable 0x1889f10, 86 slots): an actor with health that plays a damage stage animation as it
// loses health, and sends an event when it breaks. Piniata.cpp has its own view for SPTG::Piniata, which derives from
// this. ComponentSerialize.h has a view that only serialization uses. Names are provisional.
#pragma once
#include "BaseCharacter.h"
#include "Archive.h"

namespace SPTG {

// What breaks off (0x7b4890).
struct BreakableDebris : onyx::Component { void Release(void* instigator); };
// The effect shown where a hit lands, and what triggers it.
struct BreakableEffect : onyx::Component {
    char padding_8[0x50];
    onyx::ComponentHandle* transform;   // +0x58
    char padding_60[0x18];
    bool visible;                       // +0x78
};
struct BreakableTrigger : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Fire(int a, int b);   // slot 13
};
// A hit on a breakable object: its kind and where it landed.
struct BreakableHit { char padding[0x60]; uint32_t kind; float x, y; };   // +0x60, +0x64
// One damage stage: below `threshold` (health / maximum health) the stage's animation plays.
struct BreakableStage { float threshold; int32_t animation; uint8_t loop; };

struct BreakableObject : AnimatedAiActor {
    SPTG_TYPE(AnimatedAiActor, 0x1b2ba6bfu)
    bool IsA(uint32_t type) override;   // slot 12 (0xa113d0)
    typedef StateMachine<BreakableObject>::State State;
    bool OnHit(BaseCharacter* other, void* hit) override;                    // slot 38 (0xa114d0)
    virtual int DamagedState(int event); virtual State DamagedStatePtr();    // slots 78, 79
    virtual int BrokenState(int event);  virtual State BrokenStatePtr();     // slots 80, 81
    virtual int State82(int event);      virtual State State82Ptr();         // slots 82, 83
    virtual int IdleState(int event);    virtual State IdleStatePtr();       // slots 84, 85

    onyx::ComponentHandle* debris;   // +0x1e8
    onyx::ComponentHandle* effect;   // +0x1f0
    onyx::ComponentHandle* trigger;  // +0x1f8
    EventSlot hitEvent;              // +0x200
    EventSlot brokenEvent;           // +0x218
    char padding_230[0x18];
    StateMachine<BreakableObject> states;  // +0x248
    char padding_270[0x18];
    uint64_t stageCount;             // +0x288
    BreakableStage* stages;          // +0x290
    char padding_298[0xc];
    uint8_t solid;                   // +0x2a4
    char padding_2a5[0x1];
    uint8_t endsAfterBreaking;       // +0x2a6
    bool shrinks;                    // +0x2a7

    // Plays the animation of the last stage whose threshold is at least the health ratio.
    __attribute__((always_inline)) void UpdateStageAnimation() {
        float current = health;
        float ratio = current / MaxHealth();
        const BreakableStage* stage = nullptr;
        for (const BreakableStage* i = stages, *end = stages + stageCount; i != end; ++i)
            if (ratio <= i->threshold) stage = i;
        int32_t next = stage ? stage->animation : 0;
        bool loop = stage ? stage->loop != 0 : false;
        if (animation != next) PlayAnimation(next, loop, 0, 1.0f);
    }
};
static_assert(__builtin_offsetof(BreakableObject, states) == 0x248, "BreakableObject states");
static_assert(__builtin_offsetof(BreakableObject, stages) == 0x290, "BreakableObject stages");

// SPTG::GunTurrets (89 slots): a breakable object that shoots at a target in range.
struct GunTurrets : BreakableObject {
    void Update() override;                                                  // slot 16
    bool OnHit(BaseCharacter* other, void* hit) override;                    // slot 38
    int DamagedState(int event) override;                                    // slot 78
    virtual State WaitingStatePtr();                                         // slot 86
    virtual State AimingStatePtr();                                          // slot 87
    virtual State FiringStatePtr();                                          // slot 88
    int WaitingState(int event);                                             // 0xa14230
    int AimingState(int event);                                              // 0xa14170
    bool TargetInRange();                                                    // 0xa142f0
    char padding_2a8[0x4];
    float shootTimer;                // +0x2ac
    float shootDelay;                // +0x2b0
    float range;                     // +0x2b4: how close a player has to be, across
};
static_assert(__builtin_offsetof(GunTurrets, shootTimer) == 0x2ac, "GunTurrets shootTimer");

}  // namespace SPTG
