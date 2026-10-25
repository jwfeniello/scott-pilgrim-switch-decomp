// Attack states shared by the regular enemies (see docs/GAME_CLASSES.md#enemy-attack-states).
// Each starts one of the enemy's attacks with its animation and, once the
// animation is done, moves on to a fixed next state. Names are provisional.
#include "Enemy.h"

namespace SPTG {

// vtable 0x187fa08
struct EnemyZombie : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
};
// vtable 0x18801d0
struct EnemyWolverine : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
};
// vtable 0x18810e0
struct EnemySpeedy : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
};
// vtable 0x1882018
struct EnemyPaparazzi : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
};
// vtable 0x18827b0
struct EnemyNormal : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
};
// vtable 0x1882fa8
struct EnemyMini : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
};
// vtable 0x1884700
struct EnemyHanzo : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
};
// vtable 0x1884ed8
struct EnemyGodzilla : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
};
// vtable 0x1885680
struct EnemyGiant : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
};
// vtable 0x1886e20
struct EnemyChubby : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
};

// Slot 234 (0x9e87c0): starts attack 0 and plays animation 20; once the animation is done,
// switches to the state at slot 236.
int EnemyZombie::State234(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State236Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(20, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 236 (0x9e88d0): starts attack 0 and plays animation 21; once the animation is done,
// switches to the state at slot 180.
int EnemyZombie::State236(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(21, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 238 (0x9e89e0): plays animation 31 and starts attack 2; once the animation is done,
// switches to the state at slot 96.
int EnemyZombie::State238(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(31, 0, 1, 1.0f);
        StartAttack(&attacks[2].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 240 (0x9e8af0): starts attack 1 and plays animation 11; once the animation is done,
// switches to the state at slot 180.
int EnemyZombie::State240(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[1].attack, false, 1, nullptr);
        PlayAnimation(11, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 242 (0x9e8c00): plays animation 32 and starts attack 3; once the animation is done,
// switches to the state at slot 96.
int EnemyZombie::State242(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(32, 0, 1, 1.0f);
        StartAttack(&attacks[3].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 234 (0x9e9bd0): starts attack 0 and plays animation 11; once the animation is done,
// switches to the state at slot 180.
int EnemyWolverine::State234(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(11, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 236 (0x9e9ce0): plays animation 32 and starts attack 1; once the animation is done,
// switches to the state at slot 96.
int EnemyWolverine::State236(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(32, 0, 1, 1.0f);
        StartAttack(&attacks[1].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 234 (0x9eb2f0): starts attack 0 and plays animation 20; once the animation is done,
// switches to the state at slot 180.
int EnemySpeedy::State234(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(20, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 236 (0x9eb400): plays animation 31 and starts attack 4; once the animation is done,
// switches to the state at slot 96.
int EnemySpeedy::State236(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(31, 0, 1, 1.0f);
        StartAttack(&attacks[4].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 234 (0x9ed0f0): starts attack 0 and plays animation 11; once the animation is done,
// switches to the state at slot 96.
int EnemyPaparazzi::State234(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(11, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 236 (0x9ed200): starts attack 1 and plays animation 19; once the animation is done,
// switches to the state at slot 96.
int EnemyPaparazzi::State236(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[1].attack, false, 1, nullptr);
        PlayAnimation(19, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 236 (0x9ef620): starts attack 0 and plays animation 20; once the animation is done,
// switches to the state at slot 238.
int EnemyNormal::State236(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State238Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(20, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 238 (0x9ef730): starts attack 0 and plays animation 21; once the animation is done,
// switches to the state at slot 180.
int EnemyNormal::State238(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(21, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 240 (0x9ef840): starts attack 1 and plays animation 11; once the animation is done,
// switches to the state at slot 180.
int EnemyNormal::State240(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[1].attack, false, 1, nullptr);
        PlayAnimation(11, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 242 (0x9ef950): plays animation 31 and starts attack 5; once the animation is done,
// switches to the state at slot 96.
int EnemyNormal::State242(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(31, 0, 1, 1.0f);
        StartAttack(&attacks[5].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 244 (0x9efa60): plays animation 32 and starts attack 6; once the animation is done,
// switches to the state at slot 96.
int EnemyNormal::State244(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(32, 0, 1, 1.0f);
        StartAttack(&attacks[6].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 234 (0x9f09e0): starts attack 1 and plays animation 11; once the animation is done,
// switches to the state at slot 96.
int EnemyMini::State234(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[1].attack, false, 1, nullptr);
        PlayAnimation(11, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 234 (0x9f71d0): starts attack 0 and plays animation 20; once the animation is done,
// switches to the state at slot 180.
int EnemyHanzo::State234(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(20, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 236 (0x9f72e0): starts attack 1 and plays animation 11; once the animation is done,
// switches to the state at slot 180.
int EnemyHanzo::State236(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[1].attack, false, 1, nullptr);
        PlayAnimation(11, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 238 (0x9f73f0): plays animation 31 and starts attack 5; once the animation is done,
// switches to the state at slot 96.
int EnemyHanzo::State238(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(31, 0, 1, 1.0f);
        StartAttack(&attacks[5].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 240 (0x9f7500): plays animation 32 and starts attack 6; once the animation is done,
// switches to the state at slot 96.
int EnemyHanzo::State240(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(32, 0, 1, 1.0f);
        StartAttack(&attacks[6].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 234 (0x9f9940): starts attack 0 and plays animation 11; once the animation is done,
// switches to the state at slot 96.
int EnemyGodzilla::State234(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(11, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 234 (0x9fc010): starts attack 0 and plays animation 20; once the animation is done,
// switches to the state at slot 180.
int EnemyGiant::State234(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(20, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 236 (0x9fc120): starts attack 1 and plays animation 11; once the animation is done,
// switches to the state at slot 180.
int EnemyGiant::State236(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[1].attack, false, 1, nullptr);
        PlayAnimation(11, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 238 (0x9fc230): plays animation 31 and starts attack 5; once the animation is done,
// switches to the state at slot 96.
int EnemyGiant::State238(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(31, 0, 1, 1.0f);
        StartAttack(&attacks[5].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 240 (0x9fc340): plays animation 32 and starts attack 6; once the animation is done,
// switches to the state at slot 96.
int EnemyGiant::State240(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(32, 0, 1, 1.0f);
        StartAttack(&attacks[6].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 238 (0x9ff920): starts attack 0 and plays animation 11; once the animation is done,
// switches to the state at slot 180.
int EnemyChubby::State238(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State180Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(11, 0, 1, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 240 (0x9ffa30): plays animation 32 and starts attack 1; once the animation is done,
// switches to the state at slot 96.
int EnemyChubby::State240(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(32, 0, 1, 1.0f);
        StartAttack(&attacks[1].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

}  // namespace SPTG
