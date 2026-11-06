// States and overrides of the individual enemy classes (see
// docs/GAME_CLASSES.md#enemy-class-states). Names are provisional.
#include "EnemyClasses.h"
#include "Random.h"

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
    sentEvents = 0;
    if (kind == 11) states.Transition(State234Ptr());
}
void EnemyJetPackMatt::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    sentEvents = 0;
    if (kind == 11) states.Transition(State234Ptr());
}
void EnemyThief::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    sentEvents = 0;
    if (kind == 33) states.Transition(State194Ptr());
}

// EnemyAerial slot 56 (0xa02b40): records the flag at +0x940; when set, switches
// to slot 96.
void EnemyAerial::SetSolid(bool solid) {
    flag940 = solid;
    if (solid) states.Transition(State96Ptr());
}

// Slot 108 (EnemyAerial 0xa03670, EnemyOneHitWonder 0x9cf0b0, which all the one-hit enemies share): after Enemy's state,
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
int EnemyOneHitWonder::State108(int event) {
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
    sentEvents = 0;
    if (kind == 11) states.Transition(State234Ptr());
    else if (kind == 19) states.Transition(State236Ptr());
}
void EnemyMini::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    sentEvents = 0;
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
bool EnemyGiant::CanMount() {
    State guarded = State244Ptr();
    if (states.current == guarded) return false;
    if (flag141) return false;
    return actionMode == 6;
}
bool EnemyGodzilla::CanMount() {
    State guarded = State236Ptr();
    if (states.current == guarded) return false;
    if (flag141) return false;
    return actionMode == 6;
}
bool EnemyHanzo::CanMount() {
    State guarded = State242Ptr();
    if (states.current == guarded) return false;
    if (flag141) return false;
    return actionMode == 6;
}
bool EnemyNormal::CanMount() {
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
    sentEvents = 0;
    if (kind == 11) states.Transition(State234Ptr());
    else if (kind == 32) states.Transition(State236Ptr());
    else if (kind == 33) states.Transition(State194Ptr());
}
void EnemyChubby::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    sentEvents = 0;
    if (kind == 11) {
        states.Transition(State238Ptr());
    } else if (kind == 32) {
        states.Transition(State240Ptr());
    } else if (kind == 39) {
        flagCf8 = 0;
        states.Transition(State236Ptr());
    }
}

// EnemyOneHitWonder slot 69 (0x9ce090, shared by the one-hit enemies): takes the damage through the base class,
// raises +0x811, sends the current state the damage event, passes the damage to
// the other character (slot 43) and to 0x995a30, and clears +0x328.
float EnemyOneHitWonder::TakeDamage(const void* hit, BaseCharacter* other) {
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
bool EnemyGiant::OnMount(void*) {
    if (actionMode == 6) {
        State target = State244Ptr();
        if (!(states.current == target)) states.Transition(State244Ptr());
    }
    return false;
}
bool EnemyGodzilla::OnMount(void*) {
    if (actionMode == 6) {
        State target = State236Ptr();
        if (!(states.current == target)) states.Transition(State236Ptr());
    }
    return false;
}
bool EnemyHanzo::OnMount(void*) {
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
// (by +0xc24) when it's on screen, else raises +0xb49 and switches to slot 176.
void EnemyShooter::Slot166(int kind) {
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    sentEvents = 0;
    if (kind != 20) return;
    if (IsOnScreen()) {
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

// EnemyOneHitWonder slot 16 (0x9cccb0, shared by the one-hit enemies): the actor update. A stuntman that is not
// held is released (slot 71) when its attachment's ID is outside 10001-999999.
// Each frame then resets the scaled values to their bases, runs slot 229 (which
// scales them again) and resets +0x32c,
// +0x160, the sensor and its counters.
void EnemyOneHitWonder::Update() {
    UpdateEnemy();
    guts = 0.0f;
    health = 1.0f;
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
    sentEvents = 0;
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
    sentEvents = 0;
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
    sentEvents = 0;
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
    sentEvents = 0;
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
bool EnemyNormal::OnMount(void* data) {
    if (flag1040 && actionMode == 6) {
        State target = State246Ptr();
        if (!(states.current == target)) {
            states.Transition(State246Ptr());
            return false;
        }
    }
    AnimatedAiActor::OnMount(data);
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

// EnemySasuke slot 234 (0x9e50c0): after EnemyOneHitWonder's state, times the
// state; while still in it, once Sasuke has reached the x he aims for (+0xbf4) in
// the direction he faces, saves the motion and switches to the state at
// 0x9e5360. Event 10003 is not handled.
// Not yet matched: the original places the second actor lookup's null case before
// the flags lookup and works out the state machine's address there; the rest lines up.
int EnemySasuke::State234(int event) {
    int result = EnemyOneHitWonder::State234(event);
    if (result == kStateParentTookOver) return result;
    switch (event) {
    default:
        return kStateUnhandled;
    case kStateEnter:
        value334 = 0.0f;
        return kStateHandled;
    case kStateUpdate: {
        value334 += Move_FrameDelta;
        if (flagBf8) return kStateHandled;
        State state = State234Ptr();
        if (!(states.current == state)) return kStateHandled;
        float x = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->transform)->position.x;
        bool left = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->flags)->facingLeft;
        float limit = targetX;
        if (left ? x <= limit : x >= limit) {
            savedMotion.x = motion.x;
            savedMotion.y = motion.y;
            savedMotion.z = motion.z;
            states.Transition(State9e5360Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    case kStateExit:
        return kStateHandled;
    }
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

// Slot 4: serialization (see Archive.h). Each class runs its parent's slot 4,
// then moves its own fields in order: attack slots through their Serialize
// (0x9e6310), other fields through the archive. A few 4-byte fields go
// through a uint32_t copy, which suggests another type in the original.
// EnemyNormal 0x9ee710:
void EnemyNormal::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Enemy::Slot4(archive, source);
    for (int i = 0; i < 10; ++i) attacks[i].Serialize(archive);
    onyx::Transfer(archive, flag1040);
    attack1048.Serialize(archive);
    attack10c0.Serialize(archive);
}
// EnemyJake 0x9f29e0:
void EnemyJake::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    EnemyNormal::Slot4(archive, source);
    attack1140.Serialize(archive);
    onyx::Transfer(archive, limit11b8);
    onyx::Transfer(archive, value11bc);
    onyx::Transfer(archive, flag11c0);
}
// EnemyGeeOne 0x9fd620:
void EnemyGeeOne::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    EnemyGiant::Slot4(archive, source);
    onyx::TransferAs<uint32_t>(archive, value1048);
    onyx::Transfer(archive, value104c);
    onyx::Transfer(archive, value1050);
    onyx::Transfer(archive, value1054);
}
// EnemyMini 0x9efff0:
void EnemyMini::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Enemy::Slot4(archive, source);
    attacks[0].Serialize(archive);
    attacks[1].Serialize(archive);
    onyx::Transfer(archive, flagC80);
    onyx::TransferAs<uint32_t>(archive, valueC84);
    onyx::Transfer(archive, valueC88);
    onyx::Transfer(archive, valueC8c);
    onyx::Transfer(archive, valueC90);
    onyx::Transfer(archive, flagC94);
}

// EnemyStuntman 0x9cc080 and EnemySasuke 0x9e4ab0 (EnemyOneHitWonder has no slot
// 4 of its own, so each moves its fields too):
void EnemyStuntman::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    EnemyOneHitWonder::Slot4(archive, source);
    onyx::Transfer(archive, valueBbc);
    onyx::Transfer(archive, flagBc0);
    onyx::Transfer(archive, timeLimitBc4);
    onyx::Transfer(archive, valueBd0);
    onyx::TransferAs<uint32_t>(archive, valueBd4);
    onyx::Transfer(archive, valueBd8);
    onyx::Transfer(archive, valueBdc);
    onyx::Transfer(archive, valueBe0);
    onyx::Transfer(archive, reach.x);
    onyx::Transfer(archive, reach.y);
    onyx::Transfer(archive, reach.z);
}
void EnemySasuke::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    EnemyOneHitWonder::Slot4(archive, source);
    onyx::Transfer(archive, valueBbc);
    onyx::Transfer(archive, flagBc0);
    onyx::Transfer(archive, timeLimitBc4);
    onyx::Transfer(archive, valueBd0);
    onyx::TransferAs<uint32_t>(archive, valueBd4);
    onyx::Transfer(archive, valueBd8);
    onyx::Transfer(archive, valueBdc);
    onyx::Transfer(archive, valueBe0);
    onyx::Transfer(archive, valueBe4);
    onyx::Transfer(archive, valueBe8);
    onyx::Transfer(archive, valueBec);
    onyx::Transfer(archive, valueBf0);
}
// EnemyJetPackMatt 0x9f0c90 and EnemyShooter 0x9eb900:
void EnemyJetPackMatt::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Enemy::Slot4(archive, source);
    onyx::TransferAs<uint32_t>(archive, valueB8c);
    attacks[0].Serialize(archive);
    onyx::Transfer(archive, valueC08);
    onyx::Transfer(archive, valueC0c);
    onyx::Transfer(archive, valueC10);
    onyx::Transfer(archive, valueC14);
    onyx::Transfer(archive, valueC18);
    onyx::Transfer(archive, valueC1c);
    onyx::Transfer(archive, valueC20);
    onyx::Transfer(archive, valueC24);
    onyx::Transfer(archive, valueC28);
    onyx::Transfer(archive, valueC2c);
    onyx::Transfer(archive, valueC30);
    onyx::Transfer(archive, valueC34);
}
void EnemyShooter::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Enemy::Slot4(archive, source);
    onyx::TransferAs<uint32_t>(archive, valueB8c);
    attacks[0].Serialize(archive);
    onyx::Transfer(archive, valueC08);
    onyx::Transfer(archive, valueC0c);
    onyx::Transfer(archive, valueC10);
    onyx::Transfer(archive, valueC14);
    onyx::Transfer(archive, valueC18);
    onyx::Transfer(archive, valueC1c);
    onyx::Transfer(archive, valueC20);
    onyx::TransferAs<uint32_t>(archive, valueC24);
    onyx::Transfer(archive, valueC28);
    onyx::Transfer(archive, valueC2c);
    onyx::Transfer(archive, valueC30);
    onyx::Transfer(archive, valueC34);
    onyx::Transfer(archive, valueC38);
    onyx::Transfer(archive, valueC3c);
}

// A thief's landed attack takes money from a player who isn't down.
void EnemyThief::AttackLanded(AnimatedAiActor* target) {
    if (moneyStolen > 0.0f && target->Slot50() == 0 && target->IsA(onyx_types::type_2f2bf4aa)) {
        ControllablePlayer* player = static_cast<ControllablePlayer*>(target);
        if (player->money > moneyStolen && !player->Slot79()) {
            float amount = moneyStolen;
            player->SpendMoney(amount);
            player->Call996c30(amount, 1, 2, stealEffect);
        }
    }
}

void EnemyGuyOnFire::AttackLanded(AnimatedAiActor* target) {
    HoldForLandedAttack();
    attackTimer = 0.0f;
    attackPending = 1;
}

void EnemyChargingCrowd::AttackLanded(AnimatedAiActor* target) {
    HoldForLandedAttack();
    attackTimer = 0.0f;
    attackPending = 1;
}

int EnemyNormal::State246(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State122Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        mode87c = 2;
        Update9dc4c0();
        mode87c = 3;
        StartAttack(&attack1048.attack, false, 1, nullptr);
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

int EnemyGiant::State244(int event) {
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
        PlayAnimation(25, 0, 1, 1.0f);
        SetAnimationSpeed(1.5f);
        actionMode = 6;
        return kStateHandled;
    case kStateExit:
        actionMode = 0;
        SetAnimationSpeed(1.0f);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Waits with the shadow hidden, then has the partner it is holding let go.
int EnemyChubby::State136(int event) {
    switch (event) {
    case kStateUpdate:
        timer330 += Move_FrameDelta;
        if (timer330 >= partnerDelay && partnerHandle && partnerHandle->object) {
            static_cast<BaseCharacter*>(partnerHandle->object)->ReactTo(this, 2, nullptr);
            static_cast<BaseCharacter*>(partnerHandle->object)->Dismount();
            flagCf8 = 1;
            states.Transition(State236Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        timer330 = 0.0f;
        if (shadowHandle && shadowHandle->object) static_cast<ShadowAnimatedObject*>(shadowHandle->object)->visible = 0;
        return kStateHandled;
    case kStateExit:
        if (shadowHandle && shadowHandle->object) static_cast<ShadowAnimatedObject*>(shadowHandle->object)->visible = 1;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Stands still for waitTime, then goes to the state at slot 234.
int EnemyForestElves::State240(int event) {
    switch (event) {
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(0, true, false, 1.0f);
        timer330 = 0.0f;
        waiting = 1;
        return kStateHandled;
    case kStateUpdate:
        timer330 += Move_FrameDelta;
        if (timer330 > waitTime) {
            states.Transition(State234Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Stands still in animation 27 in action mode 7 and goes to slot 194 when that is over.
int EnemyGodzilla::State122(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State194Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(27, 0, 0, 1.0f);
        actionMode = 7;
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

// Stands still in animation 27 and goes to slot 238 when that is over.
int EnemyArZee::State122(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State238Ptr());
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(27, 0, 1, 1.0f);
        break;
    case kStateEvent3:
        break;
    default:
        result = kStateUnhandled;
        break;
    case kStateExit:
        actionMode = 0;
        break;
    }
    return result;
}

void EnemyArZee::Slot19() {
    EnemyShooter::Slot19();
    vectorC84 = onyx::Vector3::Zero();
    flagC90 = 0;
    flagCa4 = 0;
    valuesC94[0] = 0;
    valuesC94[1] = 0;
    valuesC94[2] = 0;
    valuesC94[3] = 0;
    vectorCa8 = onyx::Vector3::Zero();
    vectorCb4 = onyx::Vector3::Zero();
}

// A hit from source 1 that is new, while on the ground and able to dodge, is dodged: it is recorded and the dodge state
// takes over. Anything else goes to Enemy's check.
bool EnemySpeedy::OnHit(BaseCharacter* other, void* hit) {
    const HitRecord* record = static_cast<const HitRecord*>(hit);
    if (record->source != 1) return Enemy::OnHit(other, hit);
    int32_t id = record->id;
    if (recentHits[0] == id || recentHits[1] == id || recentHits[2] == id || recentHits[3] == id || !IsOnGround() || actionMode == 8 || (Slot79() && !record->unstoppable) || IsOut()) return Enemy::OnHit(other, hit);
    int32_t last = record->id;
    recentHits[0] = recentHits[1];
    recentHits[1] = recentHits[2];
    recentHits[2] = recentHits[3];
    recentHits[3] = last;
    dodgeDirection = record->fromRight ? 1.0f : -1.0f;
    states.Transition(State9eb520Ptr());
    return false;
}

// In the air it counts as on the ground only when +0xc38 is clear; otherwise as any actor.
bool EnemyJetPackMatt::IsOnGround() {
    if (!flying) return true;
    onyx::Transform* transform = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->transform);
    if (groundHeight < (int)transform->position.z) return false;
    if (__builtin_fabsf(motion.z) <= 0.000001f) return true;
    return motion.z < 0.0f;
}

// Slot 159 (0x9f1c40): Enemy's spawn, and it remembers the height it was placed at.
void EnemyJetPackMatt::Spawn(const EnemySpawnInfo* info) {
    SpawnFrom(info);
    spawnHeight = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->transform)->position.z;
}

// Slot 76 (0x9f1800): takes the playfield's ground height and tells the shadow; a flyer doesn't snap to the ground.
// EnemyJetPackMatt slot 13 (0x9f0f50): after Enemy's, a Matt above height 80
// with health left comes down to 70. One whose target is more than 500 away,
// with +0x940 raised and +0xae9 clear, loses its +0x328 and guts and goes to the
// state at 0x9f25b0.
void EnemyJetPackMatt::Slot13() {
    Enemy::Slot13();
    onyx::Vector3 position = onyx::Find<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->transform)->position;
    if (position.z > 80.0f && health > 0.0f) {
        position.z = 70.0f;
        onyx::Find<ActorObject, 0x6492d61du>(actorObject)->MoveTo(position);
        groundHeight = 70;
        FollowPlayfield();
    }
    uint32_t index = targetIndex;
    if (index != 4 && health > 0.0f && targets[index].distance > 500.0f && flag940 && !flagAe9) {
        value328 = 0.0f;
        guts = 0.0f;
        states.Transition(State9f25b0Ptr());
    }
}

void EnemyJetPackMatt::FollowPlayfield() {
    onyx::ComponentHandle* handle = onyx::Get<ActorObject, onyx_types::type_6492d61d>(actorObject)->playfield;
    if (!handle) return;
    PlayfieldCollision* field = static_cast<PlayfieldCollision*>(handle->object);
    if (!field) return;
    if (field->IsA(PlayfieldCollision::kType) && (field->componentFlags & 1)) {
        if (field->hasGround) groundHeight = field->groundHeight;
        onyx::Transform* transform = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->transform);
        if (shadowHandle && shadowHandle->object) static_cast<ShadowAnimatedObject*>(shadowHandle->object)->SetGroundHeight(groundHeight, transform->position.z);
    }
}

// Slot 76 (0xa030c0): the same as the jetpack's.
void EnemyAerial::FollowPlayfield() {
    onyx::ComponentHandle* handle = onyx::Get<ActorObject, onyx_types::type_6492d61d>(actorObject)->playfield;
    if (!handle) return;
    PlayfieldCollision* field = static_cast<PlayfieldCollision*>(handle->object);
    if (!field) return;
    if (field->IsA(PlayfieldCollision::kType) && (field->componentFlags & 1)) {
        if (field->hasGround) groundHeight = field->groundHeight;
        onyx::Transform* transform = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->transform);
        if (shadowHandle && shadowHandle->object) static_cast<ShadowAnimatedObject*>(shadowHandle->object)->SetGroundHeight(groundHeight, transform->position.z);
    }
}

// EnemyNormal slot 166 (0x9ef0d0, shared by EnemyJake and EnemyAlberta): picks the state for an attack kind, unless the
// level gate is in mode 12, which sends it to slot 96.
void EnemyNormal::Slot166(int kind) {
    if (static_cast<LevelGateState*>(levelGate.Get()->state->object)->mode == 12) {
        states.Transition(State96Ptr());
        return;
    }
    savedMotion.x = motion.x;
    savedMotion.y = motion.y;
    savedMotion.z = motion.z;
    sentEvents = 0;
    switch (kind) {
    case 1: states.Transition(State248Ptr()); break;
    case 8:
        flag9c4 = 0;
        states.Transition(State196Ptr());
        break;
    case 11: states.Transition(State240Ptr()); break;
    case 20: states.Transition(State236Ptr()); break;
    case 31: states.Transition(State242Ptr()); break;
    case 32: states.Transition(State244Ptr()); break;
    case 33: states.Transition(State194Ptr()); break;
    case 45:
    case 61:
        states.Transition(State130Ptr());
        break;
    case 79:
        flag9c4 = 1;
        states.Transition(State196Ptr());
        break;
    case 202: states.Transition(State202Ptr()); break;
    default: break;
    }
}

// EnemyChubby slot 242 (0x9ffb40): stops and plays animation 97, then loops 114, and when that ends goes to state 96.
int EnemyChubby::State242(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (animation == 97) {
            if (AnimationDone()) {
                result = kStateHandled;
                PlayAnimation(114, 1, 0, 1.0f);
            }
        } else if (animation == 114) {
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                result = kStateParentTookOver;
            }
        }
        break;
    default:
        result = kStateUnhandled;
        break;
    case kStateEnter:
        PlayAnimation(97, 0, 1, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        // Falls through.
    case kStateExit:
        states.AssertOwner(this);
        result = kStateHandled;
        break;
    case kStateEvent3:
        break;
    }
    return result;
}

// EnemyChubby slot 236 (0x9ff6e0): jumps forward with its third attack, and lands in state 96 when the animation is over.
int EnemyChubby::State236(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (attackLanded) Call995c50(3);
        if (AnimationDone() && IsOnGround() && motion.z <= 0.0f) {
            states.Transition(State96Ptr());
            result = kStateParentTookOver;
        } else {
            result = kStateHandled;
        }
        break;
    default:
        result = kStateUnhandled;
        break;
    case kStateEnter: {
        motion.z = value2b0 + value2b4;
        float speed = 0.0f;
        if (!flagCf8) {
            float sign = FacingSign();
            speed = jumpBackSpeed * sign;
        }
        motionTarget.z = savedZ;
        motionC4 = savedC4;
        motion.x = speed;
        motionTarget.x = 0.0f;
        PlayAnimation(39, 0, 0, 1.0f);
        result = kStateHandled;
        StartAttack(&attacks[2].attack, false, 1, nullptr);
        stateTime = 0.0f;
        break;
    }
    case kStateExit:
        states.AssertOwner(this);
        result = kStateHandled;
        break;
    case kStateEvent3:
        break;
    }
    return result;
}

// EnemyMini slot 196 (0x9f0770): a flying attack. It starts its first attack, keeps its speed or takes the jump speed when
// it had none, and plays animations 79, 80 in the air and 81 on landing before going to state 96.
int EnemyMini::State196(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        switch (animation) {
        case 79:
            if (AnimationDone()) {
                result = kStateHandled;
                PlayAnimation(80, 1, 0, 1.0f);
            }
            break;
        case 80:
            if (IsOnGround()) {
                result = kStateHandled;
                PlayAnimation(81, 1, 0, 1.0f);
            }
            break;
        case 81:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                result = kStateParentTookOver;
            }
            break;
        }
        break;
    default:
        result = kStateUnhandled;
        break;
    case kStateEnter: {
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        ReleaseHeld(false, __builtin_fminf(value334 / value2c4, 1.0f), 0.0f);
        float speed = 0.0f;
        if (!flag9c4) {
            speed = savedMotion.x;
            if (!(speed > 0.0f)) {
                float sign = FacingSign();
                speed = jumpBackSpeed * sign;
            }
        }
        motion.x = speed;
        result = kStateHandled;
        PlayAnimation(79, 1, 0, 1.0f);
        break;
    }
    case kStateExit:
        states.AssertOwner(this);
        result = kStateHandled;
        break;
    case kStateEvent3:
        break;
    }
    return result;
}

// EnemyNormal slot 167 (0x9ef200): picks at random from two attacks, a different pair when the target's slot 83 holds. Mounted,
// it goes to state 130. Not yet matched: the original shares less of the two inlined random rolls than ours does.
void EnemyNormal::Approach() {
    if (IsMounted()) {
        states.Transition(State130Ptr());
        return;
    }
    if (static_cast<BaseCharacter*>(target->object)->Slot83()) {
        switch (RandomRange(0, 1)) {
        case 0: states.Transition(State242Ptr()); break;
        case 1: states.Transition(State244Ptr()); break;
        }
    } else {
        switch (RandomRange(0, 1)) {
        case 0: states.Transition(State236Ptr()); break;
        case 1: states.Transition(State240Ptr()); break;
        }
    }
}

// EnemyPaparazzi slot 167 (0x9ecf60): picks one of its two attack states at
// random.
void EnemyPaparazzi::Approach() {
    switch (RandomRange(0, 1)) {
    case 0: states.Transition(State234Ptr()); break;
    case 1: states.Transition(State236Ptr()); break;
    }
}

// EnemyHanzo slot 167 (0x9f6b30): picks at random from two attacks, states 238
// and 240 when the target's slot 83 holds, else 234 and 236.
// Not yet matched, like EnemyNormal's: the original branches on slot 83 before the
// random generator's lock is released, with the release copied into both arms and
// no null test of the generator.
void EnemyHanzo::Approach() {
    if (static_cast<BaseCharacter*>(target->object)->Slot83()) {
        switch (RandomRange(0, 1)) {
        case 0: states.Transition(State238Ptr()); break;
        case 1: states.Transition(State240Ptr()); break;
        }
    } else {
        switch (RandomRange(0, 1)) {
        case 0: states.Transition(State234Ptr()); break;
        case 1: states.Transition(State236Ptr()); break;
        }
    }
}

// EnemyGiant slot 167 (0x9fb7f0): the same, with its own attacks. Not yet matched, for the same reason.
void EnemyGiant::Approach() {
    if (IsMounted()) {
        states.Transition(State130Ptr());
        return;
    }
    if (static_cast<BaseCharacter*>(target->object)->Slot83()) {
        switch (RandomRange(0, 1)) {
        case 0: states.Transition(State238Ptr()); break;
        case 1: states.Transition(State240Ptr()); break;
        }
    } else {
        switch (RandomRange(0, 1)) {
        case 0: states.Transition(State234Ptr()); break;
        case 1: states.Transition(State236Ptr()); break;
        }
    }
}

// EnemyZombie slot 174 (0x9e84c0): Enemy's, and with +0xde8 raised it stops after animation 7, stays in 210 for a while and then
// runs 0x9db480.
int EnemyZombie::State174(int event) {
    int result = Enemy::State174(event);
    if (result == kStateParentTookOver) return result;
    switch (event) {
    case kStateEnter:
        waitTimer = 0.0f;
        return kStateHandled;
    case kStateUpdate:
        if (!flagDe8) return kStateHandled;
        if (animation == 7) {
            if (AnimationDone()) {
                motion = onyx::Vector3::Zero();
                motionTarget = onyx::Vector3::Zero();
                PlayAnimation(210, 0, 0, 1.0f);
                waitTimer = 0.0f;
            }
        } else if (animation == 210) {
            waitTimer += Move_FrameDelta;
            if (waitTimer > waitDec) {
                Call9db480();
            } else {
                motion = onyx::Vector3::Zero();
                motionTarget = onyx::Vector3::Zero();
            }
        }
        return kStateHandled;
    }
    return kStateUnhandled;
}

// EnemyJetPackMatt slot 106 (0x9f1980): knocked out of the air. It waits out +0x330, then plays 91 after 13 and 92 after 14, and
// stops and goes to state 96 after those or after 263, which replaces them with bit 1 of +0x780 set.
int EnemyJetPackMatt::State106(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (timer330 <= 0.0f) {
            if (AnimationDone()) {
                switch (animation) {
                case 13:
                    PlayAnimation(91, 0, 0, 1.0f);
                    break;
                case 14:
                    PlayAnimation(92, 0, 0, 1.0f);
                    break;
                case 91:
                case 92:
                    motion = onyx::Vector3::Zero();
                    motionTarget = onyx::Vector3::Zero();
                    // Falls through.
                case 263:
                    states.Transition(State96Ptr());
                    return kStateParentTookOver;
                }
            }
        } else {
            timer330 -= Move_FrameDelta;
        }
        break;
    case kStateEnter:
        if (flags780 & 2) {
            motion = onyx::Vector3::Zero();
            motionTarget = onyx::Vector3::Zero();
            PlayAnimation(263, 0, 0, 1.0f);
        } else {
            PlayAnimation(value12c == 1 ? 13 : 14, 0, 0, 1.0f);
        }
        break;
    default:
        result = kStateUnhandled;
        break;
    case kStateExit:
        states.AssertOwner(this);
        break;
    case kStateEvent3:
        break;
    }
    return result;
}

// EnemyShooter slot 236 (0x9ec240): fires once its delay runs out, and goes to state 96 when the animation ends. At a target in
// the air it may aim up: animation 21 with its own muzzle and delay, and an upward velocity from the angle.
int EnemyShooter::State236(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (!flagC40) {
            stateTime -= Move_FrameDelta;
            if (stateTime < 0.0f) {
                Fire();
                flagC40 = 1;
            }
        }
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            result = kStateParentTookOver;
        } else {
            result = kStateHandled;
        }
        break;
    default:
        result = kStateUnhandled;
        break;
    case kStateEnter: {
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        vectorC50.x = valueC08;
        vectorC50.y = valueC0c;
        vectorC50.z = valueC10;
        bool aim = false;
        if (!static_cast<BaseCharacter*>(target->object)->IsOnGround()) {
            float roll = static_cast<uint32_t>(RandomRange<int>(0, 100));
            aim = valueC28 > roll;
        }
        if (aim) {
            vectorC50.z = __builtin_tanf(valueC2c * 3.1415927f / 180.0f) * vectorC50.x;
            vectorC44.x = valueC30;
            vectorC44.y = valueC34;
            vectorC44.z = valueC38;
            stateTime = valueC3c;
            PlayAnimation(21, 0, 0, 1.0f);
        } else {
            vectorC44.x = valueC14;
            vectorC44.y = valueC18;
            vectorC44.z = valueC1c;
            stateTime = valueC20;
            PlayAnimation(20, 0, 0, 1.0f);
        }
        flagC40 = 0;
        result = kStateHandled;
        break;
    }
    case kStateExit:
        states.AssertOwner(this);
        result = kStateHandled;
        break;
    case kStateEvent3:
        break;
    }
    return result;
}

// EnemyForestElves slot 96 (0x9fe250): idle until the sensor passes. It then turns to the first thing the sensor has seen that's
// enabled and not out, places the range origin near it once, and goes to state 234.
int EnemyForestElves::State96(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (Check9ddab0(&sensor)) {
            if (!flagBcc) {
                BaseCharacter* seen = nullptr;
                for (uint32_t i = 0; i < sensor.count; ++i) {
                    onyx::ComponentHandle* handle = sensor.handles[i];
                    if (handle && handle->object) {
                        BaseCharacter* character = static_cast<BaseCharacter*>(handle->object);
                        if ((character->componentFlags & 1) && !character->IsOut()) {
                            seen = character;
                            break;
                        }
                    }
                }
                if (!seen) break;
                FaceX(onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(seen->actorObject)->transform)->position.x);
                onyx::Vector3 point;
                PickPoint(&point, static_cast<float>(valueBbc));
                rangeOriginX = point.x;
                rangeOriginY = point.y;
                rangeOriginZ = point.z;
                flagBcc = 1;
            }
            states.Transition(State234Ptr());
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
    case kStateEvent3:
        break;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// EnemyStuntman slot 96 (0x9cea20): like EnemyForestElves's, and it also sets the range of X positions it acts in from the screen,
// less the margin at +0xbd0.
int EnemyStuntman::State96(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (Check9ddab0(&sensor)) {
            if (!flagBcc) {
                BaseCharacter* seen = nullptr;
                for (uint32_t i = 0; i < sensor.count; ++i) {
                    onyx::ComponentHandle* handle = sensor.handles[i];
                    if (handle && handle->object) {
                        BaseCharacter* character = static_cast<BaseCharacter*>(handle->object);
                        if ((character->componentFlags & 1) && !character->IsOut()) {
                            seen = character;
                            break;
                        }
                    }
                }
                if (!seen) break;
                FaceX(onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(seen->actorObject)->transform)->position.x);
                onyx::Vector3 point;
                PickPoint(&point, static_cast<float>(valueBbc));
                rangeOriginX = point.x;
                rangeOriginY = point.y;
                rangeOriginZ = point.z;
                flagBcc = 1;
                ScreenRect rect;
                GetScreenRect(&rect);
                float margin = valueBd0;
                minX = rect.left + margin;
                maxX = rect.right - margin;
            }
            states.Transition(State234Ptr());
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
    case kStateEvent3:
        break;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// EnemySasuke slot 96 (0x9e4de0): like EnemyForestElves's, and it aims for the screen edge it faces, less the margin at +0xbd0.
int EnemySasuke::State96(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (Check9ddab0(&sensor)) {
            if (!flagBcc) {
                BaseCharacter* seen = nullptr;
                for (uint32_t i = 0; i < sensor.count; ++i) {
                    onyx::ComponentHandle* handle = sensor.handles[i];
                    if (handle && handle->object) {
                        BaseCharacter* character = static_cast<BaseCharacter*>(handle->object);
                        if ((character->componentFlags & 1) && !character->IsOut()) {
                            seen = character;
                            break;
                        }
                    }
                }
                if (!seen) break;
                FaceX(onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(seen->actorObject)->transform)->position.x);
                onyx::Vector3 point;
                PickPoint(&point, static_cast<float>(valueBbc));
                rangeOriginX = point.x;
                rangeOriginY = point.y;
                rangeOriginZ = point.z;
                flagBcc = 1;
                ScreenRect rect;
                GetScreenRect(&rect);
                if (onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags)->facingLeft) targetX = rect.right - static_cast<float>(valueBd0);
                else targetX = rect.left + static_cast<float>(valueBd0);
                flagBf8 = 0;
            }
            states.Transition(State234Ptr());
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
    case kStateEvent3:
        break;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// The type tests (slot 12): each class's own type or one of its base's (SPTG_TYPE).
bool EnemyStuntman::IsA(uint32_t type) { return IsType(type); }   // 0x9cc290
bool EnemyOneHitWonder::IsA(uint32_t type) { return IsType(type); }   // 0x9e4010
bool EnemySasuke::IsA(uint32_t type) { return IsType(type); }   // 0x9e4ce0
bool EnemyGuyOnFire::IsA(uint32_t type) { return IsType(type); }   // 0x9e5fc0
bool EnemyChargingCrowd::IsA(uint32_t type) { return IsType(type); }   // 0x9e68e0
bool EnemyZombie::IsA(uint32_t type) { return IsType(type); }   // 0x9e7dd0
bool EnemyWolverine::IsA(uint32_t type) { return IsType(type); }   // 0x9e9340
bool EnemyThief::IsA(uint32_t type) { return IsType(type); }   // 0x9ea020
bool EnemySpeedy::IsA(uint32_t type) { return IsType(type); }   // 0x9eaba0
bool EnemyShooter::IsA(uint32_t type) { return IsType(type); }   // 0x9ebb80
bool EnemyPaparazzi::IsA(uint32_t type) { return IsType(type); }   // 0x9ecc80
bool EnemyNormal::IsA(uint32_t type) { return IsType(type); }   // 0x9ee800
bool EnemyMini::IsA(uint32_t type) { return IsType(type); }   // 0x9f0120
bool EnemyJetPackMatt::IsA(uint32_t type) { return IsType(type); }   // 0x9f0eb0
bool EnemyJake::IsA(uint32_t type) { return IsType(type); }   // 0x9f2aa0
bool EnemyHanzo::IsA(uint32_t type) { return IsType(type); }   // 0x9f5cc0
bool EnemyGodzilla::IsA(uint32_t type) { return IsType(type); }   // 0x9f8cf0
bool EnemyGiant::IsA(uint32_t type) { return IsType(type); }   // 0x9fadf0
bool EnemyGeeOne::IsA(uint32_t type) { return IsType(type); }   // 0x9fd700
bool EnemyForestElves::IsA(uint32_t type) { return IsType(type); }   // 0x9fdd50
bool EnemyChubby::IsA(uint32_t type) { return IsType(type); }   // 0x9fede0
bool EnemyArZee::IsA(uint32_t type) { return IsType(type); }   // 0x9ffe80
bool EnemyAlberta::IsA(uint32_t type) { return IsType(type); }   // 0xa01050
bool EnemyAerial::IsA(uint32_t type) { return IsType(type); }   // 0xa02600

}  // namespace SPTG
