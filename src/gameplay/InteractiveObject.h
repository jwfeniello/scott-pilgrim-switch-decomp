// SPTG::InteractiveObject (vtable 0x187b4e8, 92 slots): something a character can get on. It has its own state
// machine at +0x250, and its own attacks. Names are provisional.
#pragma once
#include "BaseCharacter.h"

namespace SPTG {

struct InteractiveObject : AnimatedAiActor {
    typedef StateMachine<InteractiveObject>::State State;
    void ReactTo(BaseCharacter* other, int reaction, void* data) override;   // slot 21
    void OnDismount() override;                                              // slot 32
    bool OnMount(void* rider) override;                                      // slot 33
    bool CanMount() override;                                                // slot 34
    void Slot35(bool flag, BaseCharacter* other) override;                   // slot 35
    bool Slot37() override;                                                  // slot 37
    void Slot43(float value) override;                                       // slot 43
    void Slot74(const float* point, bool flag, float value) override;        // slot 74
    SPTG_SLOT(78) SPTG_SLOT(79)
    virtual int State80(int event); virtual State State80Ptr();              // slots 80, 81
    virtual int State82(int event); virtual State State82Ptr();              // slots 82, 83
    virtual int State84(int event); virtual State State84Ptr();              // slots 84, 85
    virtual int State86(int event); virtual State State86Ptr();              // slots 86, 87
    virtual int State88(int event); virtual State State88Ptr();              // slots 88, 89
    virtual int State90(int event); virtual State State90Ptr();              // slots 90, 91

    void* slot1e8;                   // +0x1e8
    EventSlot event1f0;              // +0x1f0
    EventSlot event208;              // +0x208
    EventSlot event220;              // +0x220
    EventSlot event238;              // +0x238
    StateMachine<InteractiveObject> states;  // +0x250
    char padding_278[0x8];
    Attack attack280;                // +0x280
    Attack attack2d8;                // +0x2d8
    Attack attack330;                // +0x330
    Attack attack388;                // +0x388
};
static_assert(__builtin_offsetof(InteractiveObject, states) == 0x250, "InteractiveObject states");
static_assert(__builtin_offsetof(InteractiveObject, attack388) == 0x388, "InteractiveObject attack388");

}  // namespace SPTG
