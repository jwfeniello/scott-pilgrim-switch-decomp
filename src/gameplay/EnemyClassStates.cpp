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

// Slot 196 (EnemyGiant 0x9fbf70, EnemyNormal 0x9ef510, EnemySpeedy 0x9eb250):
// after Enemy's jump back, entry starts one of two attacks by a flag.
int EnemyGiant::State196(int event) {
    if (Enemy::State196(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    if (flagB89)
        StartAttack(&attacks[4].attack, false, 1, nullptr);
    else
        StartAttack(&attacks[3].attack, false, 1, nullptr);
    return kStateHandled;
}
int EnemyNormal::State196(int event) {
    if (Enemy::State196(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    if (flag9c4)
        StartAttack(&attacks[4].attack, false, 1, nullptr);
    else
        StartAttack(&attacks[3].attack, false, 1, nullptr);
    return kStateHandled;
}
int EnemySpeedy::State196(int event) {
    if (Enemy::State196(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    if (flag9c4)
        StartAttack(&attacks[3].attack, false, 1, nullptr);
    else
        StartAttack(&attacks[2].attack, false, 1, nullptr);
    return kStateHandled;
}

// Slot 166 (EnemyWolverine 0x9e9650, EnemyChubby 0x9ff560): three hit kinds.
void EnemyWolverine::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    if (kind == 11) states.Transition(State234Ptr());
    else if (kind == 32) states.Transition(State236Ptr());
    else if (kind == 33) states.Transition(State194Ptr());
}
void EnemyChubby::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    if (kind == 11) {
        states.Transition(State238Ptr());
    } else if (kind == 32) {
        states.Transition(State240Ptr());
    } else if (kind == 39) {
        flagCf8 = 0;
        states.Transition(State236Ptr());
    }
}

// EnemyStuntman slot 69 (0x9ce090): takes the damage through the base class,
// raises +0x811, sends the current state the damage event, passes the damage to
// the other character (slot 43) and to 0x995a30, and clears +0x328.
float EnemyStuntman::TakeDamage(const void* hit, BaseCharacter* other) {
    float damage = BaseCharacter::TakeDamage(hit, other);
    flag811 = 1;
    states.Send(kStateDamaged);
    if (other) other->Slot43(damage);
    Apply995a30(damage);
    value328 = 0.0f;
    return damage;
}

// EnemyGuyOnFire slot 96 (0x9e61b0): replaces Enemy's state; each update switches
// to slot 176 once 0x9ddab0 passes for its sensor.
int EnemyGuyOnFire::State96(int event) {
    switch (event) {
    case kStateUpdate:
        if (Check9ddab0(&sensor)) {
            states.Transition(State176Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
    case kStateEvent3:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Slot 21 (EnemyGiant 0x9fb390, EnemyGodzilla 0x9f8ef0): reaction 1 switches to
// a class state unless already in it.
void EnemyGiant::ReactTo(BaseCharacter*, int reaction, void*) {
    if (reaction != 1) return;
    State target = State246Ptr();
    if (states.current == target) return;
    states.Transition(State246Ptr());
}
void EnemyGodzilla::ReactTo(BaseCharacter*, int reaction, void*) {
    if (reaction != 1) return;
    State target = State238Ptr();
    if (states.current == target) return;
    states.Transition(State238Ptr());
}

// Slot 33 (EnemyGiant 0x9fb430, EnemyGodzilla 0x9f8f90, EnemyHanzo 0x9f61b0): in
// action mode 6, switches to a class state unless already in it.
bool EnemyGiant::Slot33(void*) {
    if (actionMode == 6) {
        State target = State244Ptr();
        if (!(states.current == target)) states.Transition(State244Ptr());
    }
    return false;
}
bool EnemyGodzilla::Slot33(void*) {
    if (actionMode == 6) {
        State target = State236Ptr();
        if (!(states.current == target)) states.Transition(State236Ptr());
    }
    return false;
}
bool EnemyHanzo::Slot33(void*) {
    if (actionMode == 6) {
        State target = State242Ptr();
        if (!(states.current == target)) states.Transition(State242Ptr());
    }
    return false;
}

// Slots 96 and 174 (EnemyGiant 0x9fb650, 0x9fba40): after Enemy's state, entry
// clears +0x1040 and each update switches to slot 242 once 0x9fd3e0 passes.
int EnemyGiant::State96(int event) {
    int result = Enemy::State96(event);
    if (result == kStateParentTookOver) return result;
    switch (event) {
    case kStateEnter:
        value1040 = 0;
        return kStateHandled;
    case kStateUpdate:
        if (Check9fd3e0()) {
            states.Transition(State242Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    return kStateUnhandled;
}
int EnemyGiant::State174(int event) {
    int result = Enemy::State174(event);
    if (result == kStateParentTookOver) return result;
    switch (event) {
    case kStateEnter:
        value1040 = 0;
        return kStateHandled;
    case kStateUpdate:
        if (Check9fd3e0()) {
            states.Transition(State242Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    return kStateUnhandled;
}

// EnemyForestElves slot 69 (0x9fe190): as Stuntman's, then sets +0x328 to 100
// and runs 0x996c30.
float EnemyForestElves::TakeDamage(const void* hit, BaseCharacter* other) {
    float damage = BaseCharacter::TakeDamage(hit, other);
    flag811 = 1;
    states.Send(kStateDamaged);
    if (other) other->Slot43(damage);
    Apply995a30(damage);
    value328 = 100.0f;
    Call996c30(value9c8, 0, 0, nullptr);
    return damage;
}

// EnemyShooter slot 166 (0x9ebe50): hit kind 20 switches to state 236 or 234
// (by +0xc24) when 0x994610 passes, else raises +0xb49 and switches to slot 176.
void EnemyShooter::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    if (kind != 20) return;
    if (Check994610()) {
        if (valueC24) states.Transition(State236Ptr());
        else states.Transition(State234Ptr());
    } else {
        flagB49 = 1;
        states.Transition(State176Ptr());
    }
}

// EnemyJetPackMatt slot 200 (0x9f1e00): replaces Enemy's blink state: entry sets
// the timer to 1; the first update with time left runs 0x996c30 and removes the
// enemy (slot 70).
int EnemyJetPackMatt::State200(int event) {
    switch (event) {
    case kStateUpdate:
        if (timer330 > 0.0f) {
            timer330 = -1.0f;
            Call996c30(value9c8, 0, 0, nullptr);
            Remove(true);
        }
        return kStateHandled;
    case kStateEnter:
        timer330 = 1.0f;
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

// EnemyZombie slot 202 (0x9e8700): after Enemy's state, entry starts attack 4 and
// resets the state time; each update advances it.
int EnemyZombie::State202(int event) {
    if (Enemy::State202(event) == kStateParentTookOver) return kStateParentTookOver;
    switch (event) {
    case kStateEnter:
        StartAttack(&attacks[4].attack, false, 1, nullptr);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        return kStateHandled;
    case kStateExit:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// EnemyGuyOnFire slot 176 (0x9e6250): after Enemy's state, entry starts the
// class's attack; with an attack pending, an update starts it once the delay has
// passed.
int EnemyGuyOnFire::State176(int event) {
    if (Enemy::State176(event) == kStateParentTookOver) return kStateParentTookOver;
    switch (event) {
    case kStateEnter:
        StartAttack(&attack.attack, false, 1, nullptr);
        attackTimer = 0.0f;
        attackPending = 0;
        return kStateHandled;
    case kStateUpdate:
        if (attackPending) {
            attackTimer += Move_FrameDelta;
            if (attackTimer >= attackDelay) {
                StartAttack(&attack.attack, false, 1, nullptr);
                attackTimer = 0.0f;
                attackPending = 0;
            }
        }
        return kStateHandled;
    }
    return kStateUnhandled;
}

// EnemyStuntman slot 16 (0x9cccb0): the actor update. A stuntman that is not
// held is released (slot 71) when its attachment's ID is outside 10001-999999.
// Each frame then resets the scaled values to their bases, runs slot 229 (which
// scales them again) and resets +0x32c,
// +0x160, the sensor and its counters.
void EnemyStuntman::Update() {
    UpdateEnemy();
    value32c = 0.0f;
    value160 = 1.0f;
    sensor.Reset();
    valueBb8 = 0;
    timerBc8 = 0.0f;
    flagBcc = 0;
}

// Slot 166 (EnemyZombie 0x9e81d0, EnemySpeedy 0x9eb0e0, EnemyHanzo 0x9f6a60,
// EnemyGiant 0x9fb710): as above, with more hit kinds. Kinds 8 and 79 lower and
// raise a flag and switch to the same state.
void EnemyZombie::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    switch (kind) {
    case 11: states.Transition(State240Ptr()); break;
    case 20: states.Transition(State234Ptr()); break;
    case 31: states.Transition(State238Ptr()); break;
    case 32: states.Transition(State242Ptr()); break;
    case 202: states.Transition(State202Ptr()); break;
    }
}
void EnemySpeedy::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    switch (kind) {
    case 8: flag9c4 = 0; states.Transition(State196Ptr()); break;
    case 20: states.Transition(State234Ptr()); break;
    case 31: states.Transition(State236Ptr()); break;
    case 33: states.Transition(State194Ptr()); break;
    case 79: flag9c4 = 1; states.Transition(State196Ptr()); break;
    }
}
void EnemyHanzo::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    switch (kind) {
    case 8: flag9c4 = 0; states.Transition(State9f7ef0Ptr()); break;
    case 11: states.Transition(State236Ptr()); break;
    case 20: states.Transition(State234Ptr()); break;
    case 31: states.Transition(State238Ptr()); break;
    case 32: states.Transition(State240Ptr()); break;
    case 33: states.Transition(State194Ptr()); break;
    case 79: flag9c4 = 1; states.Transition(State9f7ef0Ptr()); break;
    }
}
void EnemyGiant::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    value15c = 0.0f;
    switch (kind) {
    case 8: flagB89 = 0; states.Transition(State196Ptr()); break;
    case 11: states.Transition(State236Ptr()); break;
    case 20: states.Transition(State234Ptr()); break;
    case 31: states.Transition(State238Ptr()); break;
    case 32: states.Transition(State240Ptr()); break;
    case 33: states.Transition(State194Ptr()); break;
    case 45:
    case 61: states.Transition(State130Ptr()); break;
    case 79: flagB89 = 1; states.Transition(State196Ptr()); break;
    case 89: states.Transition(State242Ptr()); break;
    }
}

// EnemyGodzilla slot 100 (0x9f9230): replaces BaseCharacter's state: entry plays
// animation 0; once falling or level and on the ground, switches to slot 104.
int EnemyGodzilla::State100(int event) {
    switch (event) {
    case kStateUpdate:
        if (motion.z <= 0.0f && IsOnGround()) {
            states.Transition(State104Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(0, 1, 0, 1.0f);
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

// EnemyNormal slot 33 (0x9eef10, shared by EnemyJake and EnemyAlberta): with
// +0x1040 set in action mode 6, switches to slot 246 unless already in it;
// otherwise does what BaseCharacter's slot 33 does.
bool EnemyNormal::Slot33(void* data) {
    if (flag1040 && actionMode == 6) {
        State target = State246Ptr();
        if (!(states.current == target)) {
            states.Transition(State246Ptr());
            return false;
        }
    }
    ActorSlot33(data);
    states.Transition(State136Ptr());
    return true;
}

// Slot 16, the actor update (EnemyThief 0x9ea0d0, EnemyShooter 0x9ebc30, also
// EnemyArZee's, EnemyJetPackMatt 0x9f1160, EnemyGodzilla 0x9f8da0, EnemyPaparazzi
// 0x9ecd30, EnemyMini 0x9f01d0, EnemyWolverine 0x9e93f0, EnemyChubby 0x9fee90):
// Enemy's update, then each of the class's attacks is requested with the hit
// kind its slot 166 answers.
void EnemyThief::Update() {
    UpdateEnemy();
    RequestAttack(attacks[0], 33);
}
void EnemyShooter::Update() {
    UpdateEnemy();
    RequestAttack(attacks[0], 20);
}
void EnemyJetPackMatt::Update() {
    UpdateEnemy();
    RequestAttack(attacks[0], 11);
}
void EnemyGodzilla::Update() {
    UpdateEnemy();
    RequestAttack(attacks[0], 11);
}
void EnemyPaparazzi::Update() {
    UpdateEnemy();
    RequestAttack(attacks[0], 11);
    RequestAttack(attacks[1], 19);
}
void EnemyMini::Update() {
    UpdateEnemy();
    RequestAttack(attacks[0], 8);
    RequestAttack(attacks[1], 11);
}
void EnemyWolverine::Update() {
    UpdateEnemy();
    RequestAttack(attacks[0], 11);
    RequestAttack(attacks[1], 32);
    RequestAttack(attacks[2], 33);
}
void EnemyChubby::Update() {
    UpdateEnemy();
    RequestAttack(attacks[0], 11);
    RequestAttack(attacks[2], 39);
    RequestAttack(attacks[1], 32);
}

// EnemyOneHitWonder slot 236 (0x9da280, inherited by its five subclasses): entry
// stops the enemy in action mode 5 and AI mode 6; each update removes it.
int EnemyOneHitWonder::State236(int event) {
    switch (event) {
    case kStateUpdate:
        Remove(true);
        return kStateHandled;
    case kStateEnter:
        actionMode = 5;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        targetIndex = 4;
        aiMode = 6;
        mode87c = 3;
        flag7b8 = 1;
        flag7b9 = 1;
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

// EnemyOneHitWonder slot 238 (0x9da3f0): entry stops the enemy and starts a
// timer; once it passes +0xbc4, clears +0xbcc and returns to slot 96.
int EnemyOneHitWonder::State238(int event) {
    switch (event) {
    case kStateUpdate:
        timerBc8 += Move_FrameDelta;
        if (timerBc8 > timeLimitBc4) {
            flagBcc = 0;
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        timerBc8 = 0.0f;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
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

// EnemyStuntman slot 234 (0x9da030): after EnemyOneHitWonder's state, times the
// state; while still in it, with the stuntman's X position inside its range and
// the current target within reach on every axis, saves the motion and switches
// to the state at 0x9da590. Not yet matched (not credited): the x and y reach
// tests match (they compile to one vector compare), but the original shares
// one "handled" return block between the entry, exit and early exits.
int EnemyStuntman::State234(int event) {
    int result = EnemyOneHitWonder::State234(event);
    if (result == kStateParentTookOver) return result;
    switch (event) {
    case kStateEnter:
        value334 = 0.0f;
        return kStateHandled;
    case kStateUpdate: {
        value334 += Move_FrameDelta;
        if (flagBf8) return kStateHandled;
        State state = State234Ptr();
        if (!(states.current == state)) return kStateHandled;
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        float x = onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.x;
        if (x >= minX && x <= maxX && targetIndex < targetCount) {
            const TargetEntry& target = targets[targetIndex];
            if ((reach.x >= __builtin_fabsf(target.offset.x)) & (reach.y >= __builtin_fabsf(target.offset.y)) &&
                reach.z >= __builtin_fabsf(target.offset.z)) {
                flagBf8 = 1;
                savedMotion.x = motion.x;
                savedMotion.y = motion.y;
                savedMotion.z = motion.z;
                states.Transition(State9da590Ptr());
                return kStateParentTookOver;
            }
        }
        return kStateHandled;
    }
    case kStateExit:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Slot 82 (EnemyGiant 0x9fb550, also EnemyGeeOne's; EnemyGodzilla 0x9f9130):
// never in the class's attack state (Giant 246, Godzilla 238); otherwise
// BaseCharacter's test.
bool EnemyGiant::Slot82() {
    State state = State246Ptr();
    if (states.current == state) return false;
    return CanSlot82();
}
bool EnemyGodzilla::Slot82() {
    State state = State238Ptr();
    if (states.current == state) return false;
    return CanSlot82();
}

// EnemyGiant slot 246 (0x9fd010) and EnemyGodzilla slot 238 (0x9f9b70):
// animation 206 with the attack in the tenth (Godzilla: fourth) slot; once it
// is done, slot 96.
int EnemyGiant::State246(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State96Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        PlayAnimation(206, 0, 1, 1.0f);
        StartAttack(&attacks[9].attack, false, 1, nullptr);
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
int EnemyGodzilla::State238(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State96Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        PlayAnimation(206, 0, 1, 1.0f);
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

// EnemyHanzo slot 242 (0x9f7610) and EnemyGodzilla slot 236 (0x9f9a50): runs
// 0x9dc4c0 in mode 2, attacks (the eighth slot; Godzilla: the third) with
// animation 25 in action mode 6; once the animation is done, slot 122
// (Godzilla: 96). Exit restores action mode 0.
int EnemyHanzo::State242(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State122Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        mode87c = 2;
        Update9dc4c0();
        mode87c = 3;
        StartAttack(&attacks[7].attack, false, 1, nullptr);
        PlayAnimation(25, 0, 0, 1.0f);
        actionMode = 6;
        return kStateHandled;
    case kStateExit:
        actionMode = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int EnemyGodzilla::State236(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State96Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        mode87c = 2;
        Update9dc4c0();
        mode87c = 3;
        StartAttack(&attacks[2].attack, false, 1, nullptr);
        PlayAnimation(25, 0, 0, 1.0f);
        actionMode = 6;
        return kStateHandled;
    case kStateExit:
        actionMode = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Slot 19 (EnemyAerial 0xa026b0, EnemyShooter 0x9ebd60): after Enemy's slot 19,
// resets the class's sensor, flags and vectors.
void EnemyAerial::Slot19() {
    Enemy::Slot19();
    sensor.Reset();
    valueDa8 = 0;
    flagDac = 0;
    vectorDb0 = onyx::Vector3::Zero();
    valueDbc = 0;
    flagDc0 = 0;
}
void EnemyShooter::Slot19() {
    Enemy::Slot19();
    flagC40 = 0;
    vectorC44 = onyx::Vector3::Zero();
    vectorC50 = onyx::Vector3::Zero();
    valueC5c = 0;
}

// EnemyJake slot 19 (0xa026b0): after Enemy's slot 19, resets the sensor at
// +0x11c8 and the state values, and raises +0x11c1.
void EnemyJake::Slot19() {
    Enemy::Slot19();
    sensor.Reset();
    value11f0 = 0;
    timer11f4 = 0.0f;
    flag11f8 = 0;
    flag11c1 = 1;
}

// EnemyJake slots 252 (0x9f4c20) and 254 (0x9f4d40): AI mode 7 with 0x94fde0
// on entry, AI mode 6 with 0x9500f0 on exit. State 252 attacks with animation
// 177 and then goes to 250; state 254 waits +0x11b8 seconds, then clears
// +0x11f8 and goes to 96.
int EnemyJake::State252(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State250Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        aiMode = 7;
        PlayAnimation(177, 0, 1, 1.0f);
        StartAttack(&attack1140.attack, false, 1, nullptr);
        Call94fde0();
        return kStateHandled;
    case kStateExit:
        aiMode = 6;
        Call9500f0();
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int EnemyJake::State254(int event) {
    switch (event) {
    case kStateUpdate:
        timer11f4 += Move_FrameDelta;
        if (timer11f4 > limit11b8) {
            flag11f8 = 0;
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        aiMode = 7;
        timer11f4 = 0.0f;
        Call94fde0();
        return kStateHandled;
    case kStateExit:
        aiMode = 6;
        Call9500f0();
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

}  // namespace SPTG
