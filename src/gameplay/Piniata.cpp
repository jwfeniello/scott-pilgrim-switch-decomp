// SPTG::Piniata: a breakable object that shrinks as it is hit (see
// docs/GAME_CLASSES.md#piniatas). Names describe observed behavior and are
// provisional. Virtual slots are numbered from the original vtable (0x1889c08).
#include "OnyxComponents.h"
#include "StateMachine.h"

namespace SPTG {

struct BreakableObject {
    float Scale();   // 0x941820
    void Update();   // 0x945670
};

// Weakly referenced components the piniata checks every frame.
struct PiniataEffect : onyx::Component { char padding[0x70]; bool visible; };   // +0x78
struct PiniataTrigger : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Slot13(); virtual void Slot14(); virtual void Slot15(); virtual void Slot16(); virtual void Slot17();
    virtual void Slot18(); virtual void Slot19();
    virtual bool IsActive();   // slot 20
};

// One damage stage: below `threshold` (health / maximum health) the stage's animation plays.
struct PiniataStage { float threshold; int32_t animation; uint8_t loop; };

struct Piniata : BreakableObject {
    typedef StateMachine<Piniata>::State State;
    virtual ~Piniata();                                           // slots 0, 1
    virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6();
    virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual void Slot12();
    virtual void Update();                                        // slot 13
    virtual void Slot14(); virtual void Slot15(); virtual void Slot16(); virtual void Slot17(); virtual void Slot18();
    virtual void Slot19(); virtual void Slot20(); virtual void Slot21();
    virtual void PlayAnimation(int animation, int a, int b, float speed);  // slot 22
    virtual void Slot23(); virtual void Slot24(); virtual void Slot25(); virtual void Slot26();
    virtual bool AnimationDone();                                 // slot 27
    virtual void Slot28(); virtual void Slot29(); virtual void Slot30(); virtual void Slot31(); virtual void Slot32();
    virtual void Slot33(); virtual void Slot34(); virtual void Slot35(); virtual void Slot36(); virtual void Slot37();
    virtual void Slot38(); virtual void Slot39(); virtual void Slot40(); virtual void Slot41(); virtual void Slot42();
    virtual void Slot43(); virtual void Slot44(); virtual void Slot45(); virtual void Slot46(); virtual void Slot47();
    virtual void Slot48(); virtual void Slot49(); virtual void Slot50(); virtual void Slot51(); virtual void Slot52();
    virtual void Slot53(); virtual void Slot54(); virtual void Slot55(); virtual void Slot56();
    virtual float MaxHealth();                                    // slot 57
    virtual void Slot58(); virtual void Slot59(); virtual void Slot60(); virtual void Slot61(); virtual void Slot62();
    virtual void Slot63(); virtual void Slot64();
    virtual void SetScale(float scale);                           // slot 65
    virtual void Slot66(); virtual void Slot67(); virtual void Slot68();
    virtual float ShrinkScale();                                  // slot 69
    virtual void Slot70(); virtual void Slot71(); virtual void Slot72(); virtual void Slot73(); virtual void Slot74();
    virtual void Slot75(); virtual void Slot76(); virtual void Slot77();
    // States and the getters returning them (slots 78-85).
    virtual int DamagedState(int event); virtual State DamagedStatePtr();
    virtual int BrokenState(int event);  virtual State BrokenStatePtr();
    virtual int State82(int event);      virtual State State82Ptr();
    virtual int IdleState(int event);    virtual State IdleStatePtr();

    char padding_8[0x158];
    float health;                         // +0x160
    char padding_164[0x3c];
    int32_t animation;                    // +0x1a0
    char padding_1a4[0x4c];
    onyx::ComponentHandle* effect;        // +0x1f0, weak dependency
    onyx::ComponentHandle* trigger;       // +0x1f8, weak dependency
    char padding_200[0x48];
    StateMachine<Piniata> states;         // +0x248
    char padding_270[0x18];
    uint64_t stageCount;                  // +0x288
    PiniataStage* stages;                 // +0x290
    char padding_298[0xf];
    bool shrinks;                         // +0x2a7
};
static_assert(__builtin_offsetof(Piniata, effect) == 0x1f0, "Piniata effect");
static_assert(__builtin_offsetof(Piniata, states) == 0x248, "Piniata states");
static_assert(__builtin_offsetof(Piniata, shrinks) == 0x2a7, "Piniata shrink flag");

// Slot 13 (0xa11430): updates the object and the current state, then hides the
// effect while the trigger is active.
void Piniata::Update() {
    BreakableObject::Update();
    states.Update();
    PiniataEffect* e = effect ? static_cast<PiniataEffect*>(effect->object) : nullptr;
    PiniataTrigger* t = trigger ? static_cast<PiniataTrigger*>(trigger->object) : nullptr;
    if (e && t && t->IsActive()) e->visible = false;
}

// Slot 69 (0xa11c70): a shrinking piniata above scale 1 loses one unit of scale
// and reports 1; otherwise it reports its current scale.
float Piniata::ShrinkScale() {
    float scale = BreakableObject::Scale();
    if (shrinks && scale > 1.0f) {
        SetScale(scale - 1.0f);
        return 1.0f;
    }
    return scale;
}

// Slot 78 (0xa130e0): on entry, plays the animation of the last stage whose
// threshold is at least the health ratio; once the animation is done with no
// health left, switches to the broken state.
int Piniata::DamagedState(int event) {
    switch (event) {
    case kStateEnter: {
        float current = health;
        float ratio = current / MaxHealth();
        const PiniataStage* stage = nullptr;
        for (const PiniataStage* i = stages, *end = stages + stageCount; i != end; ++i)
            if (ratio <= i->threshold) stage = i;
        int32_t next = stage ? stage->animation : 0;
        bool loop = stage ? stage->loop != 0 : false;
        if (animation != next) PlayAnimation(next, loop, 0, 1.0f);
        return kStateHandled;
    }
    case kStateUpdate:
        if (AnimationDone() && health == 0.0f) {
            states.Transition(BrokenStatePtr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Slot 84 (0xa12150): the idle state plays animation 16 on entry.
int Piniata::IdleState(int event) {
    switch (event) {
    case kStateUpdate: case kStateExit: case kStateEvent3: return kStateHandled;
    case kStateEnter: PlayAnimation(16, 1, 0, 1.0f); return kStateHandled;
    }
    return kStateUnhandled;
}

}  // namespace SPTG
