// States and overrides of the individual enemy classes (see
// docs/GAME_CLASSES.md#enemy-class-states). Names are provisional.
#include "EnemyClasses.h"

namespace SPTG {

// EnemyNormal slot 96 (0x9ef080): after Enemy's state, handles update and entry.
int EnemyNormal::State96(int event) {
    if (Enemy::State96(event) == kStateParentTookOver) return kStateParentTookOver;
    switch (event) {
    case kStateUpdate:
        return kStateHandled;
    case kStateEnter:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// EnemyNormal slot 174 (0x9ef450): after Enemy's state, handles entry.
int EnemyNormal::State174(int event) {
    if (Enemy::State174(event) == kStateParentTookOver) return kStateParentTookOver;
    return event == kStateEnter;
}

// EnemyNormal slot 234 (0x9ef5b0): loops animation 1 on entry.
int EnemyNormal::State234(int event) {
    switch (event) {
    case kStateEnter:
        PlayAnimation(1, 1, 0, 1.0f);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// EnemyChubby slot 234 (0x9ff670): loops animation 7 on entry.
int EnemyChubby::State234(int event) {
    switch (event) {
    case kStateEnter:
        PlayAnimation(7, 1, 0, 1.0f);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// EnemyGodzilla and EnemySpeedy slot 167 (0x9f9570, 0x9eb1a0): approaching
// switches straight to the class's state at slot 234.
void EnemyGodzilla::Approach() { states.Transition(State234Ptr()); }
void EnemySpeedy::Approach() { states.Transition(State234Ptr()); }

// Slot 166 (EnemyGodzilla 0x9f9510, EnemyJetPackMatt 0x9f1d90, EnemyThief
// 0x9ea370): saves the motion and clears +0x15c; one kind of event switches to
// a class state.
void EnemyGodzilla::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    if (kind == 11) states.Transition(State234Ptr());
}
void EnemyJetPackMatt::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    if (kind == 11) states.Transition(State234Ptr());
}
void EnemyThief::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    if (kind == 33) states.Transition(State194Ptr());
}

// EnemyAerial slot 56 (0xa02b40): records the flag at +0x940; when set, switches
// to slot 96.
void EnemyAerial::SetSolid(bool solid) {
    flag940 = solid;
    if (solid) states.Transition(State96Ptr());
}

// Slot 108 (EnemyAerial 0xa03670, EnemyStuntman 0x9cf0b0): after Enemy's state,
// raise a flag on entry and lower it on exit (Stuntman's +0x940 the other way round).
int EnemyAerial::State108(int event) {
    if (Enemy::State108(event) == kStateParentTookOver) return kStateParentTookOver;
    switch (event) {
    case kStateEnter:
        flag3ba = 1;
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    }
    return kStateUnhandled;
}
int EnemyStuntman::State108(int event) {
    if (Enemy::State108(event) == kStateParentTookOver) return kStateParentTookOver;
    switch (event) {
    case kStateEnter:
        flag940 = 0;
        return kStateHandled;
    case kStateExit:
        flag940 = 1;
        return kStateHandled;
    }
    return kStateUnhandled;
}

// EnemyChubby slot 167 (0x9ff5f0): approaching switches to slot 240 when the
// target's slot 83 holds, else to slot 238.
void EnemyChubby::Approach() {
    BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
    if (player->Slot83()) states.Transition(State240Ptr());
    else states.Transition(State238Ptr());
}

// EnemyWolverine slot 167 (0x9e96e0): approaching switches to slot 236 when the
// target's slot 83 holds.
void EnemyWolverine::Approach() {
    BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
    if (player->Slot83()) states.Transition(State236Ptr());
}

// EnemyGodzilla slot 124 (0x9f9490): after the base state, plays animation 150
// on entry.
int EnemyGodzilla::State124(int event) {
    int result = BaseCharacter::State124(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateEnter) return kStateUnhandled;
    PlayAnimation(150, 0, 0, 1.0f);
    return kStateHandled;
}

// EnemyNormal slot 248 (0x9efc90): switches straight to slot 174.
int EnemyNormal::State248(int event) {
    switch (event) {
    case kStateUpdate:
        states.Transition(State174Ptr());
        return kStateParentTookOver;
    case kStateEnter:
    case kStateExit:
    case kStateEvent3:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Slot 194 (EnemyNormal 0x9ef490, EnemySpeedy 0x9eb1d0, EnemyThief 0x9ea3d0):
// after Enemy's dash state, entry starts one of the class's attacks.
int EnemyNormal::State194(int event) {
    if (Enemy::State194(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    StartAttack(&attacks[2].attack, false, 1, nullptr);
    return kStateHandled;
}
int EnemySpeedy::State194(int event) {
    if (Enemy::State194(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    StartAttack(&attacks[1].attack, false, 1, nullptr);
    return kStateHandled;
}
int EnemyThief::State194(int event) {
    if (Enemy::State194(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    StartAttack(&attacks[0].attack, false, 1, nullptr);
    return kStateHandled;
}

// Slot 166 (EnemyPaparazzi 0x9ecef0, EnemyMini 0x9f06e0): as above, with two kinds.
void EnemyPaparazzi::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    if (kind == 11) states.Transition(State234Ptr());
    else if (kind == 19) states.Transition(State236Ptr());
}
void EnemyMini::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    if (kind == 8) {
        flag9c4 = 0;
        states.Transition(State196Ptr());
    } else if (kind == 11) {
        states.Transition(State234Ptr());
    }
}

// Slot 34 (EnemyGiant 0x9fb4d0, EnemyGodzilla 0x9f9030, EnemyHanzo 0x9f6250,
// EnemyNormal 0x9ef000): not while in the class's state at the given slot or
// with +0x141 set; otherwise only in action mode 6.
bool EnemyGiant::Slot34Check() {
    State guarded = State244Ptr();
    if (states.current == guarded) return false;
    if (flag141) return false;
    return actionMode == 6;
}
bool EnemyGodzilla::Slot34Check() {
    State guarded = State236Ptr();
    if (states.current == guarded) return false;
    if (flag141) return false;
    return actionMode == 6;
}
bool EnemyHanzo::Slot34Check() {
    State guarded = State242Ptr();
    if (states.current == guarded) return false;
    if (flag141) return false;
    return actionMode == 6;
}
bool EnemyNormal::Slot34Check() {
    State guarded = State246Ptr();
    if (states.current == guarded) return false;
    if (flag141) return false;
    return actionMode == 6;
}

// EnemyGodzilla slot 38 (0x9f90b0): not hit while in Enemy's dash state (194).
bool EnemyGodzilla::OnHit(BaseCharacter* other, void* hit) {
    State guarded = State194Ptr();
    if (states.current == guarded) return false;
    return Enemy::OnHit(other, hit);
}

}  // namespace SPTG
