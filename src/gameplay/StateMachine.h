// Hierarchical state machines of SPTG actors (see docs/GAME_CLASSES.md).
// A state is a member function taking an event and returning a result; the
// machine is embedded in its owner. Names are provisional.
#pragma once
#include <stdint.h>

namespace SPTG {

enum StateEvent { kStateUpdate = 10000, kStateEnter = 10001, kStateExit = 10002, kStateEvent3 = 10003 };
enum StateResult { kStateUnhandled = 0, kStateHandled = 1, kStateParentTookOver = 2 };

// The owner, the current state and the requested state. Transition is
// instantiated once per owner class.
template<class Owner> struct StateMachine {
    typedef int (Owner::*State)(int event);
    Owner* owner;
    State current;
    State next;
    void Transition(State state);
    // Sends the current state the per-frame update event.
    __attribute__((always_inline)) void Update() { (owner->*current)(kStateUpdate); }
    // Starts the machine in `initial` and sends it the enter event.
    __attribute__((always_inline)) void Start(Owner* self, State initial) {
        next = initial;
        owner = self;
        current = initial;
        (self->*initial)(kStateEnter);
    }
};

}  // namespace SPTG
