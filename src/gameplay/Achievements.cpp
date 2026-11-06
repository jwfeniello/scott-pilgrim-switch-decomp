// SPTG::AchievementManager (vtable 0x184d8b0): reports achievements from a two-state machine whose states aren't
// virtual; the getters at slots 14 and 15 return them. Names are provisional.
#include "OnyxComponents.h"
#include "StateMachine.h"

namespace SPTG {

struct AchievementManager : onyx::Component {
    typedef StateMachine<AchievementManager>::State State;
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8();
    virtual void S9(); virtual void S10(); virtual void S11(); virtual void S12(); virtual void S13();
    virtual State IdlePtr();                     // slot 14 (0x7a3590)
    virtual State BusyPtr();                     // slot 15 (0x7a35a0)
    int Idle(int event);                         // 0x7a36e0
    int Busy(int event);                         // 0x7a35b0

    char padding_8[0x68];
    StateMachine<AchievementManager> states;     // +0x70
    int32_t machineValue;                        // +0x98: while not -1, transitions also send kStateEvent3
    char padding_9c[0xc];
    int32_t busy;                                // +0xa8: 1 while in the busy state
    char padding_ac[0x14];
    bool done;                                   // +0xc0: lets the busy state return to idle
};

// Slot 14's state (0x7a36e0): idle; entering clears +0xa8.
int AchievementManager::Idle(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateEnter:
        busy = 0;
        break;
    case kStateUpdate:
    case kStateExit:
    case kStateEvent3:
        break;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// Slot 15's state (0x7a35b0): busy until +0xc0 is set, then back to idle. Entering sets +0xa8 and clears +0xc0.
// The transition is inlined here.
int AchievementManager::Busy(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (!done) return kStateHandled;
        states.TransitionInline(IdlePtr(), machineValue);
        result = kStateParentTookOver;
        break;
    default:
        result = kStateUnhandled;
        break;
    case kStateEnter:
        busy = 1;
        done = false;
        break;
    case kStateExit:
        states.AssertOwner(this);
        break;
    case kStateEvent3:
        break;
    }
    return result;
}

AchievementManager::State AchievementManager::IdlePtr() { return &AchievementManager::Idle; }   // 0x7a3590
AchievementManager::State AchievementManager::BusyPtr() { return &AchievementManager::Busy; }   // 0x7a35a0

}  // namespace SPTG
