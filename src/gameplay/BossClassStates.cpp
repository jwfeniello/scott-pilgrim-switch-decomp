// States and hooks of the boss classes (see docs/GAME_CLASSES.md#bosses). Names
// are provisional.
#include "BossClasses.h"
#include "ComponentTypes.h"
#include "Random.h"

namespace SPTG {

// Slot 13 (NegaScott 0xa45080, RoxyMirror 0xa3a8c0, SuperFightingRobotAI
// 0xa31950): Boss's slot 13, inlined.
void NegaScott::Slot13() {
    UpdateBoss13();
}
void RoxyMirror::Slot13() {
    UpdateBoss13();
}
void SuperFightingRobotAI::Slot13() {
    UpdateBoss13();
}

// TagTeamMember slot 13 (0xa25a70): Boss's slot 13, then counts +0xd78 down.
void TagTeamMember::Slot13() {
    UpdateBoss13();
    if (timerD78 > 0.0f) timerD78 -= Move_FrameDelta;
}

// GigaGideon slot 13 (0xa58430): Boss's slot 13, then runs the effect's slot 3
// while its +0x18 is clear.
void GigaGideon::Slot13() {
    UpdateBoss13();
    if (effect && !effect->flag18) effect->Slot3();
}

// TagTeamMember slot 168 (0xa25d00): Boss's slot 168, only with +0xd81 set.
bool TagTeamMember::Slot168() {
    if (flagD81) return Boss::Slot168();
    return false;
}

// Gideon slot 168 (0xa60650): Boss's slot 168, or with +0x12c at 1, +0x813.
bool Gideon::Slot168() {
    if (Boss::Slot168()) return true;
    if (value12c == 1) return flag813;
    return false;
}

// Slot 237: accepts an attack request unless its kind is 31, 39, 45 or 61
// (Chau 0xa6b330, Patel 0xa400e0; Boss also refuses 32).
bool Chau::Slot237(const AttackSlot& request) {
    switch (request.kind) {
    case 31:
    case 39:
    case 45:
    case 61:
        return false;
    }
    return true;
}
bool Patel::Slot237(const AttackSlot& request) {
    switch (request.kind) {
    case 31:
    case 39:
    case 45:
    case 61:
        return false;
    }
    return true;
}

// Slot 238: whether the animation playing is 0, 1, 7 or 174 (TagTeamMember
// 0xa25d20), or also 115 (Lynette 0xa62e50).
bool TagTeamMember::Slot238() {
    switch (animation) {
    case 0:
    case 1:
    case 7:
    case 174:
        return true;
    }
    return false;
}
bool Lynette::Slot238() {
    switch (animation) {
    case 0:
    case 1:
    case 7:
    case 115:
    case 174:
        return true;
    }
    return false;
}

// Patel slot 170 (0xa3fff0): the jump-back speed, tripled with +0x974 and
// scaled by +0xd78 in mode 4. Not yet matched (not credited): the original loads
// the mode after the multiply.
float Patel::Slot170() {
    float speed = jumpBackSpeed;
    if (flag974) speed *= 3.0f;
    if (modeFfc == 4) return speed * scaleD78;
    return speed;
}

// LucasLee slot 21 (0xa47da0): reaction 1 switches to slot 258.
void LucasLee::ReactTo(BaseCharacter*, int reaction, void*) {
    if (reaction == 1) states.Transition(State258Ptr());
}

// Slot 56 (GigaGideon 0xa58d80, SuperFightingRobotAI 0xa31eb0): records the flag
// at +0x940; when set, switches to slot 96 (the robot first runs 0xa38af0).
void GigaGideon::SetSolid(bool solid) {
    flag940 = solid;
    if (solid) states.Transition(State96Ptr());
}
void SuperFightingRobotAI::SetSolid(bool solid) {
    flag940 = solid;
    if (solid) {
        CallA38af0();
        states.Transition(State96Ptr());
    }
}

// HipsterChick slot 7 (0xa42800): after Enemy's slot 7, switches to slot 270
// with +0x87c at 3.
void HipsterChick::Slot7() {
    Enemy::Slot7();
    states.Transition(State270Ptr());
    mode87c = 3;
}

// HipsterChick slot 19 (0xa42cb0): after Enemy's slot 19, resets +0xe84..+0xe8d.
void HipsterChick::Slot19() {
    Enemy::Slot19();
    valueE84 = 1;
    valueE88 = 1;
    flagE8c = 0;
    flagE8d = 0;
}

// HipsterChick slot 51 (0xa42ce0): out while in the state at slot 270.
bool HipsterChick::IsOut() {
    State state = State270Ptr();
    return states.current == state;
}

// HipsterChick slot 270 (0xa44040): entry releases the boss (slot 71).
int HipsterChick::State270(int event) {
    switch (event) {
    case kStateUpdate:
    case kStateExit:
    case kStateEvent3:
        return kStateHandled;
    case kStateEnter:
        Release();
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Slot 38 (Chau 0xa6a8e0, Patel 0xa3fe20): after Boss's hit check, plays
// animation 29 when slot 79 holds.
bool Chau::OnHit(BaseCharacter* other, void* hit) {
    if (!Boss::OnHit(other, hit)) return false;
    if (Slot79()) PlayAnimation(29, 0, 0, 1.0f);
    return true;
}
bool Patel::OnHit(BaseCharacter* other, void* hit) {
    if (!Boss::OnHit(other, hit)) return false;
    if (Slot79()) PlayAnimation(29, 0, 0, 1.0f);
    return true;
}

// Slot 234 (Envy 0xa676e0, KenKyle 0xa4d4b0, Gideon 0xa60c00, LucasLee 0xa48070,
// GigaGideon 0xa59ce0): Boss's choice (slot 246 for kind 1, else 198) with
// class kinds first.
void Envy::Slot234(int kind) {
    if (kind == 79) states.Transition(State254Ptr());
    else TransitionForKind(kind);
}
void KenKyle::Slot234(int kind) {
    if (kind == 79) states.Transition(State196Ptr());
    else TransitionForKind(kind);
}
void Gideon::Slot234(int kind) {
    if (kind == 79) states.Transition(State196Ptr());
    else if (kind == 28) states.Transition(State254Ptr());
    else TransitionForKind(kind);
}
void LucasLee::Slot234(int kind) {
    if (kind == 174) states.Transition(State266Ptr());
    else if (kind == 178) states.Transition(State254Ptr());
    else TransitionForKind(kind);
}
void GigaGideon::Slot234(int kind) {
    if (kind == 20) states.Transition(State278Ptr());
    else if (kind == 21) states.Transition(State254Ptr());
}

// Envy slot 122 (0xa67450): after Boss's state, entry clears +0xd83.
int Envy::State122(int event) {
    int result = Boss::State122(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateEnter) return kStateUnhandled;
    flagD83 = 0;
    return kStateHandled;
}

// SuperGideon slot 122 (0xa532d0): after Boss's state, entry raises +0xd4a and
// runs 0xa254a0 with 0.
int SuperGideon::State122(int event) {
    if (Boss::State122(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    flagD4a = 1;
    CallA254a0(0.0f);
    return kStateHandled;
}

// NegaScott slot 254 (0xa457d0): after Boss's state, exit raises +0xd4a.
int NegaScott::State254(int event) {
    int result = Boss::State254(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateExit) return kStateUnhandled;
    flagD4a = 1;
    return kStateHandled;
}

// Envy slot 198 (0xa67670): after Boss's state, raises +0x3bb from entry to exit.
int Envy::State198(int event) {
    int result = Boss::State198(event);
    if (result == kStateParentTookOver) return result;
    if (event == kStateEnter) {
        flag3bb = 1;
        return kStateHandled;
    }
    if (event == kStateExit) {
        flag3bb = 0;
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Todd slots 98 and 248 (0xa214b0, 0xa22660): after Boss's state, raise +0xd88
// from entry to exit.
int Todd::State98(int event) {
    int result = Boss::State98(event);
    if (result == kStateParentTookOver) return result;
    if (event == kStateEnter) {
        flagD88 = 1;
        return kStateHandled;
    }
    if (event == kStateExit) {
        flagD88 = 0;
        return kStateHandled;
    }
    return kStateUnhandled;
}
int Todd::State248(int event) {
    int result = Boss::State248(event);
    if (result == kStateParentTookOver) return result;
    if (event == kStateEnter) {
        flagD88 = 1;
        return kStateHandled;
    }
    if (event == kStateExit) {
        flagD88 = 0;
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Todd slot 106 (0xa21520): after Boss's state, entry plays animation 14 while
// +0x12c is 0.
int Todd::State106(int event) {
    int result = Boss::State106(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateEnter) return kStateUnhandled;
    if (value12c == 0) PlayAnimation(14, 0, 0, 1.0f);
    return kStateHandled;
}

// SuperFightingRobotAI slot 96 (0xa31f20): each update switches to slot 258.
int SuperFightingRobotAI::State96(int event) {
    switch (event) {
    case kStateUpdate:
        states.Transition(State258Ptr());
        return kStateParentTookOver;
    case kStateEnter:
    case kStateExit:
    case kStateEvent3:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// SuperGideon slot 73 (0xa53110): not in the state at slot 258, and +0x100 set.
bool SuperGideon::Slot73() {
    State state = State258Ptr();
    return !(states.current == state) && flag100;
}

// SuperGideon slot 13 (0xa52b10): as GigaGideon's, with its effect at +0x1190.
void SuperGideon::Slot13() {
    UpdateBoss13();
    if (effect && !effect->flag18) effect->Slot3();
}

// Slot 234 with more class kinds (Lynette 0xa62ca0, Patel 0xa40050, SuperGideon
// 0xa53940, NegaScott 0xa455f0).
void Lynette::Slot234(int kind) {
    switch (kind) {
    case 20: states.Transition(State270Ptr()); break;
    case 11: states.Transition(State254Ptr()); break;
    case 180: states.Transition(State272Ptr()); break;
    default: TransitionForKind(kind); break;
    }
}
void Patel::Slot234(int kind) {
    switch (kind) {
    case 20: states.Transition(State264Ptr()); break;
    case 79: states.Transition(State258Ptr()); break;
    case 32: states.Transition(State266Ptr()); break;
    default: TransitionForKind(kind); break;
    }
}
void SuperGideon::Slot234(int kind) {
    if (kind == 79) states.Transition(State196Ptr());
    else if (kind == 176 || kind == 174) states.Transition(State258Ptr());
    else TransitionForKind(kind);
}
void NegaScott::Slot234(int kind) {
    switch (kind) {
    case 79: states.Transition(State258Ptr()); break;
    case 190: states.Transition(State254Ptr()); break;
    case 193:
    case 195: states.Transition(State262Ptr()); break;
    default: TransitionForKind(kind); break;
    }
}

// Gideon slot 98 (0xa605c0): after Boss's state, an update with +0xd49 clears
// it and switches to slot 258.
int Gideon::State98(int event) {
    int result = Boss::State98(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateUpdate) return kStateUnhandled;
    if (!flagD49) return kStateHandled;
    flagD49 = 0;
    states.Transition(State258Ptr());
    return kStateParentTookOver;
}

// HipsterChick slot 96 (0xa42e00): raises +0x3ba from entry to exit; each
// update switches to slot 258.
int HipsterChick::State96(int event) {
    switch (event) {
    case kStateUpdate:
        states.Transition(State258Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        flag3ba = 1;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    }
}

// HipsterChick slot 268 (0xa43f60): plays animation 4 with +0x3bb raised until
// exit; when it is done, switches to slot 266.
int HipsterChick::State268(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State266Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(4, 0, 0, 1.0f);
        flag3bb = 1;
        return kStateHandled;
    case kStateExit:
        flag3bb = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// HipsterChick slot 16 (0xa42c00): Boss's update, then its own attack is
// requested with kind 0.
void HipsterChick::Update() {
    Boss::Update();
    RequestAttack(attack, 0);
}

// Roxy slot 69 (0xa3c940): Boss's damage handling, inlined.
float Roxy::TakeDamage(const void* hit, BaseCharacter* other) {
    return TakeBossDamage(hit, other);
}

// Slot 172 (Chau 0xa6ac30, GigaGideon 0xa59c20, KenKyle 0xa4cb20, SuperGideon
// 0xa53350): Enemy's state 172 as these classes write it: only the update
// reports the event as handled, which the original computes at the end as
// `event == kStateUpdate`.
int Chau::State172(int event) {
    int result = kStateUnhandled;
    switch (event) {
    case kStateUpdate:
        if (LeaveCheck()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        break;
    case kStateEnter:
        aiMode = 6;
        flagAe9 = 1;
        break;
    case kStateExit:
        flagAe9 = 0;
        flag3ba = 0;
        break;
    case kStateEvent3:
        return result;
    }
    return event == kStateUpdate;
}
int GigaGideon::State172(int event) {
    int result = kStateUnhandled;
    switch (event) {
    case kStateUpdate:
        if (LeaveCheck()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        break;
    case kStateEnter:
        aiMode = 6;
        flagAe9 = 1;
        break;
    case kStateExit:
        flagAe9 = 0;
        flag3ba = 0;
        break;
    case kStateEvent3:
        return result;
    }
    return event == kStateUpdate;
}
int KenKyle::State172(int event) {
    int result = kStateUnhandled;
    switch (event) {
    case kStateUpdate:
        if (LeaveCheck()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        break;
    case kStateEnter:
        aiMode = 6;
        flagAe9 = 1;
        break;
    case kStateExit:
        flagAe9 = 0;
        flag3ba = 0;
        break;
    case kStateEvent3:
        return result;
    }
    return event == kStateUpdate;
}
int SuperGideon::State172(int event) {
    int result = kStateUnhandled;
    switch (event) {
    case kStateUpdate:
        if (LeaveCheck()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        break;
    case kStateEnter:
        aiMode = 6;
        flagAe9 = 1;
        break;
    case kStateExit:
        flagAe9 = 0;
        flag3ba = 0;
        break;
    case kStateEvent3:
        return result;
    }
    return event == kStateUpdate;
}

// SuperFightingRobotHand slot 172 (0xa29bf0): Enemy's state 172, also raising
// +0x3ba on entry.
int SuperFightingRobotHand::State172(int event) {
    switch (event) {
    case kStateEnter:
        aiMode = 6;
        flagAe9 = 1;
        flag3ba = 1;
        return kStateHandled;
    case kStateExit:
        flagAe9 = 0;
        flag3ba = 0;
        return kStateHandled;
    case kStateUpdate:
        if (LeaveCheck()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    return kStateUnhandled;
}

// SuperFightingRobotHand slot 96 (0xa29730): with targets and unless 0xa1e720
// holds, each update switches to slot 244.
int SuperFightingRobotHand::State96(int event) {
    switch (event) {
    case kStateUpdate:
        if (targetCount == 0 || CheckA1e720()) return kStateHandled;
        states.Transition(State244Ptr());
        return kStateParentTookOver;
    case kStateEnter:
    case kStateExit:
    case kStateEvent3:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Todd slot 59 (0xa20f60): +0x1198, or 0 in the states at slots 268 and 270.
float Todd::Slot59() {
    State first = State268Ptr();
    if (states.current == first) return 0.0f;
    State second = State270Ptr();
    if (states.current == second) return 0.0f;
    return value1198;
}

// Chau slot 116 (0xa6ab50): after Boss's state, exit notifies every player
// (0x80f430 with 17).
int Chau::State116(int event) {
    int result = Boss::State116(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateExit) return kStateUnhandled;
    PlayerCatalog* catalog = onyx::Get<PlayerCatalog, onyx_types::type_0bf4a9b7>(level.Get()->players);
    for (ControllablePlayer** i = catalog->players; i != catalog->players + catalog->count; ++i) (*i)->Notify80f430(17);
    return kStateHandled;
}

// SuperFightingRobotAI slot 7 (0xa317d0): after Enemy's slot 7, makes itself the
// owner of both hands and raises +0x3ba.
void SuperFightingRobotAI::Slot7() {
    Enemy::Slot7();
    onyx::Get<SuperFightingRobotHand, onyx_types::type_37bd3ac0>(hand1)->owner = this;
    onyx::Get<SuperFightingRobotHand, onyx_types::type_37bd3ac0>(hand2)->owner = this;
    flag3ba = 1;
}

// Slot 82 (LucasLee 0xa47e60, SuperGideon 0xa53180, TagTeamMember 0xa25be0):
// never in the class's state at slot 258 (TagTeamMember: 266); otherwise
// Boss's test.
bool LucasLee::Slot82() {
    State state = State258Ptr();
    if (states.current == state) return false;
    if (Slot85()) return false;
    return CanSlot82();
}
bool SuperGideon::Slot82() {
    State state = State258Ptr();
    if (states.current == state) return false;
    if (Slot85()) return false;
    return CanSlot82();
}
bool TagTeamMember::Slot82() {
    State state = State266Ptr();
    if (states.current == state) return false;
    if (Slot85()) return false;
    return CanSlot82();
}

// TagTeamMember slot 69 (0xa25b00): Boss's damage handling; the damage also
// comes off +0xd7c, and once it runs out (without +0xd5a) +0xd80 is raised.
float TagTeamMember::TakeDamage(const void* hit, BaseCharacter* other) {
    return TakeTagTeamDamage(hit, other);
}

// KenKyle slot 69 (0xa4c450): Boss's damage handling; once +0x160 is used up
// and slot 95 fails, in action modes 5, 6, 8 and 9 it raises +0xd4e (once) and
// clears +0xd54.
float KenKyle::TakeDamage(const void* hit, BaseCharacter* other) {
    float damage = TakeBossDamage(hit, other);
    if (value160 <= 0.0f && !Slot95()) {
        switch (actionMode) {
        case 5:
        case 6:
        case 8:
        case 9:
            if (!flagD4e) {
                flagD4e = 1;
                valueD54 = 0;
            }
            break;
        }
    }
    return damage;
}

// Chau slot 69 (0xa6a940): Boss's damage handling, then the phase from the
// health lost (+0x160 against slot 57), in steps of +0x11c0, at most +0x11c4.
float Chau::TakeDamage(const void* hit, BaseCharacter* other) {
    float damage = TakeBossDamage(hit, other);
    uint32_t phase = (uint32_t)((1.0f - value160 / Slot57()) / phaseStep);
    phaseDb4 = phase + 1 <= phaseCount ? phase + 1 : phaseCount;
    return damage;
}

// SuperFightingRobotHand slot 69 (0xa293f0): sets the timer from +0x524 or
// +0x528 (by the hit's +0x14), counts hits taken in the state at slot 272,
// raises +0xfbb, then Boss's damage handling.
float SuperFightingRobotHand::TakeDamage(const void* hit, BaseCharacter* other) {
    timer330 = static_cast<const DamageHit*>(hit)->value14 == 0 ? value524 : value528;
    State state = State272Ptr();
    if (states.current == state) ++hitsFa0;
    flagFbb = 1;
    return TakeBossDamage(hit, other);
}

// HipsterChick slot 260 (0xa43380): plays animation 16 with +0x3ba raised until
// exit; when it is done, switches to slot 270.
int HipsterChick::State260(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State270Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        flag3ba = 1;
        PlayAnimation(16, 0, 0, 1.0f);
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// HipsterChick slot 94 (0xa42d30): unless in the states at slots 270 or 260,
// switches to slot 260 (Patel's slot 13 sends this to its chicks).
void HipsterChick::Slot94() {
    State gone = State270Ptr();
    if (states.current == gone) return;
    State attacking = State260Ptr();
    if (states.current == attacking) return;
    states.Transition(State260Ptr());
}

// Chau slot 234 (0xa6b240): kinds 19, 79 and 81, and 174 and 177 by phase (once
// the phase reaches +0x11c4, both go to slot 264), then Boss's choice.
void Chau::Slot234(int kind) {
    switch (kind) {
    case 19: states.Transition(State258Ptr()); break;
    case 79:
    case 81: states.Transition(State196Ptr()); break;
    case 174:
        if (phaseDb4 != phaseCount) states.Transition(State260Ptr());
        else states.Transition(State264Ptr());
        break;
    case 177:
        if (phaseDb4 != phaseCount) states.Transition(State262Ptr());
        else states.Transition(State264Ptr());
        break;
    default: TransitionForKind(kind); break;
    }
}

// Roxy slot 234 (0xa3ccd0): six class kinds, then Boss's choice.
void Roxy::Slot234(int kind) {
    switch (kind) {
    case 180: states.Transition(State266Ptr()); break;
    case 177: states.Transition(State260Ptr()); break;
    case 174: states.Transition(State268Ptr()); break;
    case 19: states.Transition(State262Ptr()); break;
    case 31: states.Transition(State264Ptr()); break;
    case 79: states.Transition(State258Ptr()); break;
    default: TransitionForKind(kind); break;
    }
}

// Chau slot 73 (0xa6aa40): not in the states at slots 260, 262 or 264, and
// +0x100 set.
bool Chau::Slot73() {
    State first = State260Ptr();
    if (states.current == first) return false;
    State second = State262Ptr();
    if (states.current == second) return false;
    State third = State264Ptr();
    return !(states.current == third) && flag100;
}

// Patel slot 246 (0xa402e0): after Boss's state, an update on a playfield
// collision with +0x128 and bit 31 of +0x130 set drops what Patel holds and
// switches to slot 100.
int Patel::State246(int event) {
    int result = Boss::State246(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateUpdate) return kStateUnhandled;
    ActorObject* actor = onyx::Get<ActorObject, onyx_types::type_6492d61d>(actorObject);
    onyx::Component* object = actor->playfield->object;
    PlayfieldCollision* collision =
        static_cast<TypedComponent*>(object)->IsA(PlayfieldCollision::kType) ? static_cast<PlayfieldCollision*>(object) : nullptr;
    if (collision->flag128 && (collision->flags130 & 0x80000000u)) {
        ReleaseHeld(false, 0.0f, 0.0f);
        states.Transition(State100Ptr());
        return kStateParentTookOver;
    }
    return kStateHandled;
}

// KenKyle slot 114 (0xa4c810): after BaseCharacter's state, raises +0x3ba until
// exit; switches to slot 116 once the twin is in its state 114 or out.
int KenKyle::State114(int event) {
    int result = BaseCharacter::State114(event);
    if (result == kStateParentTookOver) return result;
    switch (event) {
    case kStateEnter:
        flag3ba = 1;
        return kStateHandled;
    case kStateUpdate: {
        BaseCharacter* other = static_cast<BaseCharacter*>(twin->object);
        State state = other->State114Ptr();
        if (other->states.current == state || static_cast<BaseCharacter*>(twin->object)->IsOut()) {
            states.Transition(State116Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    case kStateExit:
        flag3ba = 0;
        flagD4e = 0;
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Todd slot 256 (0xa226d0): plays animation 150 with +0x3ba raised until exit;
// a finished 150 is followed by 151, and once 151 is done it switches to slot
// 200.
int Todd::State256(int event) {
    switch (event) {
    case kStateUpdate:
        if (animation != 151) {
            if (animation == 150 && AnimationDone()) PlayAnimation(151, 0, 0, 1.0f);
            return kStateHandled;
        }
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State200Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        PlayAnimation(150, 0, 0, 1.0f);
        flag3ba = 1;
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// NegaScott slot 244 (0xa456a0): replaces Boss's state on entry (AI mode 1 with
// a live target, else 6; animation 7 unless slot 239 already shows it); an
// update with +0xd4a set switches to slot 260, otherwise runs Boss's update.
int NegaScott::State244(int event) {
    switch (event) {
    case kStateUpdate:
        if (flagD4a) {
            flagD4a = 0;
            states.Transition(State260Ptr());
            return kStateParentTookOver;
        }
        if (Boss::State244(kStateUpdate) == kStateParentTookOver) return kStateParentTookOver;
        break;
    case kStateEnter:
        aiMode = target && target->object ? 1 : 6;
        if (!Slot239(7)) PlayAnimation(7, 1, 0, 1.0f);
        value7ac = 0.0f;
        flag813 = 1;
        mode87c = 2;
        return kStateHandled;
    case kStateExit:
        flag813 = 0;
        mode87c = 3;
        break;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
    return kStateHandled;
}

// GigaGideon slot 16 (0xa584b0): Boss's update, then its two attacks are
// requested with kinds 20 and 21.
void GigaGideon::Update() {
    Boss::Update();
    RequestAttack(attacks[0], 20);
    RequestAttack(attacks[1], 21);
}

// SuperFightingRobotAI slot 262 (0xa32280): each update switches to slot 272
// when either hand has +0xfb8 set, else to slot 264.
int SuperFightingRobotAI::State262(int event) {
    switch (event) {
    case kStateUpdate:
        if (onyx::Get<SuperFightingRobotHand, onyx_types::type_37bd3ac0>(hand1)->flagFb8) states.Transition(State272Ptr());
        else if (onyx::Get<SuperFightingRobotHand, onyx_types::type_37bd3ac0>(hand2)->flagFb8) states.Transition(State272Ptr());
        else states.Transition(State264Ptr());
        return kStateParentTookOver;
    case kStateEnter:
    case kStateExit:
    case kStateEvent3:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// GigaGideon slot 116 (0xa598e0): on entry, after Enemy's state, runs slot 240
// unless +0xd28 is set and plays animation 283 with +0x3ba raised. Once +0x14c
// is used up, it holds Z at +0x1200 and after +0x1204 seconds switches to slot
// 200.
int GigaGideon::State116(int event) {
    switch (event) {
    case kStateUpdate:
        if (!(value14c <= 0.0f)) return kStateHandled;
        motion.z = value1200;
        stateTime += Move_FrameDelta;
        if (stateTime >= value1204) {
            states.Transition(State200Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        if (Enemy::State116(event) == kStateParentTookOver) return kStateParentTookOver;
        if (!flagD28) Slot240();
        flag3ba = 1;
        PlayAnimation(283, 1, 0, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    }
}

// Slot 244 (TagTeamMember 0xa25d50, Lynette 0xa630d0, Todd 0xa22500): the boss's
// approach, as NegaScott's: entry sets the AI mode by target and plays
// animation 7; an update first checks the class's exits, then runs Boss's.
// Not yet matched (not credited): no case order reproduces the original's
// block layout.
int TagTeamMember::State244(int event) {
    switch (event) {
    case kStateUpdate:
        if (flagD5a) {
            if (!(timerD78 > 0.0f)) {
                states.Transition(State264Ptr());
                return kStateParentTookOver;
            }
        } else if (!flagD5b) {
            states.Transition(State262Ptr());
            return kStateParentTookOver;
        }
        {
            int result = Boss::State244(kStateUpdate);
            if (result != kStateParentTookOver) return kStateHandled;
            return result;
        }
    case kStateEnter:
        aiMode = target && target->object ? 1 : 6;
        if (!Slot239(7)) PlayAnimation(7, 1, 0, 1.0f);
        value7ac = 0.0f;
        flag813 = 1;
        mode87c = 2;
        return kStateHandled;
    case kStateExit:
        flag813 = 0;
        mode87c = 3;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int Lynette::State244(int event) {
    switch (event) {
    case kStateUpdate:
        if (flagD80 || flagD84) {
            states.Transition(State276Ptr());
            return kStateParentTookOver;
        }
        if (flagD5a) {
            if (!(timerD78 > 0.0f)) {
                states.Transition(State264Ptr());
                return kStateParentTookOver;
            }
        } else if (!flagD5b) {
            states.Transition(State262Ptr());
            return kStateParentTookOver;
        }
        {
            int result = Boss::State244(kStateUpdate);
            if (result != kStateParentTookOver) return kStateHandled;
            return result;
        }
    case kStateEnter:
        aiMode = target && target->object ? 1 : 6;
        if (!Slot239(7)) PlayAnimation(7, 1, 0, 1.0f);
        value7ac = 0.0f;
        flag813 = 1;
        mode87c = 2;
        return kStateHandled;
    case kStateExit:
        flag813 = 0;
        mode87c = 3;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int Todd::State244(int event) {
    switch (event) {
    case kStateUpdate:
        if (flagD89) {
            flagD89 = 0;
            valueD94 = 0;
            states.Transition(State264Ptr());
            return kStateParentTookOver;
        }
        if (Boss::State244(kStateUpdate) == kStateParentTookOver) return kStateParentTookOver;
        return kStateHandled;
    case kStateEnter:
        aiMode = target && target->object ? 1 : 6;
        if (!Slot239(7)) PlayAnimation(7, 1, 0, 1.0f);
        value7ac = 0.0f;
        flag813 = 1;
        mode87c = 2;
        flagD88 = 1;
        CallA254a0(0.0f);
        return kStateHandled;
    case kStateExit:
        flag813 = 0;
        mode87c = 3;
        flagD88 = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Patel slot 256 (0xa40400): animations 150, 151 and 152 in turn with +0x3ba
// raised; once 152 is done, switches to slot 200. Not yet matched (not
// credited).
int Patel::State256(int event) {
    switch (event) {
    case kStateUpdate:
        if (animation != 152) {
            if (animation == 151) {
                if (AnimationDone()) PlayAnimation(152, 0, 0, 1.0f);
            } else if (animation == 150 && AnimationDone()) {
                PlayAnimation(151, 0, 0, 1.0f);
            }
            return kStateHandled;
        }
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State200Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        flag3ba = 1;
        PlayAnimation(150, 0, 0, 1.0f);
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// KenKyle slot 38 (0xa4c300): outside its states 258, 260 and 262 it is Boss's
// hit check; in them it refuses a hit it has recorded and records any other.
// Not yet matched (not credited): one test compiles to tbz instead of cbz.
bool KenKyle::OnHit(BaseCharacter* other, void* hit) {
    State first = State258Ptr();
    if (!(states.current == first)) {
        State second = State260Ptr();
        if (!(states.current == second)) {
            State third = State262Ptr();
            if (!(states.current == third)) return Boss::OnHit(other, hit);
        }
    }
    int32_t id = static_cast<const int32_t*>(hit)[17];
    if (recentHits[0] == id || recentHits[1] == id || recentHits[2] == id || recentHits[3] == id) return false;
    RecordHit(hit);
    return true;
}

// HipsterChick slot 108 (0xa43050): entry stops the chick; each update switches
// to slot 106.
int HipsterChick::State108(int event) {
    switch (event) {
    case kStateUpdate:
        states.Transition(State106Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        // Falls through.
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Patel slot 69 (0xa3fe80): Boss's damage handling; in mode 1 (or 3), once
// health falls to (1 - +0xd74) (or twice that) of slot 57, moves to mode 2 (4).
float Patel::TakeDamage(const void* hit, BaseCharacter* other) {
    float damage = TakeBossDamage(hit, other);
    if (modeChanged) return damage;
    float health;
    float limit;
    if (modeFfc == 3) {
        health = value160;
        limit = Slot57() * (1.0f - (healthStep + healthStep));
    } else if (modeFfc == 1) {
        health = value160;
        limit = Slot57() * (1.0f - healthStep);
    } else {
        return damage;
    }
    if (health <= limit) {
        if (modeFfc == 1) modeFfc = 2;
        else if (modeFfc == 3) modeFfc = 4;
        modeChanged = 1;
    }
    return damage;
}

// SuperFightingRobotHand slot 260 (0xa2b930): the hand's idle: entry stops it
// and plays animation 0 with +0x3ba raised until exit.
int SuperFightingRobotHand::State260(int event) {
    switch (event) {
    case kStateUpdate:
    case kStateEvent3:
        return kStateHandled;
    case kStateEnter:
        flag3ba = 1;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(0, 1, 0, 1.0f);
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Envy slot 82 (0xa672e0): never in its states 268 or 266; otherwise Boss's
// test.
bool Envy::Slot82() {
    State first = State268Ptr();
    if (states.current == first) return false;
    State second = State266Ptr();
    if (states.current == second) return false;
    if (Slot85()) return false;
    return CanSlot82();
}

// Animation states: stop or raise a flag on entry, switch on when the
// animation is done (SuperGideon 186 0xa53410, GigaGideon 264 0xa5bf20,
// LucasLee 258 0xa49800).
int SuperGideon::State186(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(114, 1, 0, 1.0f);
        return kStateHandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int GigaGideon::State264(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State266Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(29, 0, 0, 1.0f);
        flag3ba = 1;
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int LucasLee::State258(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(87, 0, 1, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        flag3bb = 1;
        return kStateHandled;
    case kStateExit:
        flag3bb = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Todd slot 262 (0xa233a0): plays animation 97 with +0x3bb raised until exit;
// when it is done, raises +0xd25 and switches to slot 244.
int Todd::State262(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            flagD25 = 1;
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(97, 0, 1, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        flag3bb = 1;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        flag3bb = 0;
        return kStateHandled;
    }
}

// Slot 186, Enemy's stagger, as Ken & Kyle (0xa4cbe0), Todd (0xa21d40) and Envy
// (0xa674c0) replace it: animation 114 for at least the class's time, then slot
// 96 (Todd: 244).
int KenKyle::State186(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone() && stateTime > limit10b8) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(114, 1, 0, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        stateTime = 0.0f;
        return kStateHandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int Todd::State186(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone() && stateTime > limit11a0) {
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(114, 1, 0, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        stateTime = 0.0f;
        return kStateHandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int Envy::State186(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (AnimationDone() && stateTime > limitF90) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(114, 1, 0, 1.0f);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// KenKyle slot 270 (0xa50030): stops, plays animation 183 and applies +0x10c4
// (slot 65) and +0x10c8 (slot 89); then slot 244.
int KenKyle::State270(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(183, 0, 0, 1.0f);
        Slot65(value10c4);
        Slot89(value10c8);
        return kStateHandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Lynette slot 268 (0xa63980) and Gideon slot 258 (0xa614b0): stop and start
// the class's attack with its animation; then slot 244.
int Lynette::State268(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        StartAttack(&attack.attack, false, 1, nullptr);
        PlayAnimation(11, 0, 1, 1.0f);
        return kStateHandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int Gideon::State258(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        flag3ba = 1;
        PlayAnimation(25, 0, 1, 1.0f);
        StartAttack(&attack.attack, false, 1, nullptr);
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// HipsterChick slot 262 (0xa43460): stops and attacks again every +0xe64
// seconds.
int HipsterChick::State262(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime -= Move_FrameDelta;
        if (stateTime <= 0.0f) {
            stateTime = attackPeriod;
            StartAttack(&attack.attack, false, 1, nullptr);
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(0, 1, 0, 1.0f);
        StartAttack(&attack.attack, false, 1, nullptr);
        stateTime = attackPeriod;
        return kStateHandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// HipsterChick slots 106 (0xa42ea0) and 258 (0xa431c0): once the animation is
// done, mode 4 leads to slot 268 (106) or 266 (258), mode 2 to slot 262.
int HipsterChick::State106(int event) {
    switch (event) {
    case kStateUpdate:
        if (valueE88 == 2) {
            if (!AnimationDone()) return kStateHandled;
            states.Transition(State262Ptr());
        } else {
            if (valueE88 != 4 || !AnimationDone()) return kStateHandled;
            states.Transition(State268Ptr());
        }
        return kStateParentTookOver;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(13, 0, 0, 1.0f);
        return kStateHandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int HipsterChick::State258(int event) {
    switch (event) {
    case kStateUpdate:
        if (valueE88 == 2) {
            if (!AnimationDone()) return kStateHandled;
            states.Transition(State262Ptr());
        } else {
            if (valueE88 != 4 || !AnimationDone()) return kStateHandled;
            states.Transition(State266Ptr());
        }
        return kStateParentTookOver;
    case kStateEnter:
        PlayAnimation(143, 0, 0, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        flag3ba = 1;
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Envy slot 272 (0xa68d60): animation 96 for at least +0xf9c seconds, then slot
// 264; exit raises +0xd84.
int Envy::State272(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (stateTime > limitF9c && AnimationDone()) {
            states.Transition(State264Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        flag3ba = 1;
        stateTime = 0.0f;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(96, 0, 0, 1.0f);
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        flagD84 = 1;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Envy slot 270 (0xa68bc0): starts its attack with animation 117; after +0xf84
// seconds and the animation, animation 11; once that is done, slot 244.
int Envy::State270(int event) {
    switch (event) {
    case kStateUpdate:
        if (animation == 117) {
            stateTime += Move_FrameDelta;
            if (stateTime > limitF84 && AnimationDone()) PlayAnimation(11, 0, 0, 1.0f);
        } else if (animation == 11) {
            if (AnimationDone()) {
                states.Transition(State244Ptr());
                return kStateParentTookOver;
            }
        }
        return kStateHandled;
    case kStateEnter:
        flag3ba = 1;
        stateTime = 0.0f;
        mode87c = 2;
        Call9dc2d0(valueD74);
        mode87c = 3;
        StartAttack(&attack.attack, false, 1, nullptr);
        PlayAnimation(117, 1, 0, 1.0f);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        flag3ba = 0;
        flagD59 = 0;
        return kStateHandled;
    }
}

// Todd slot 122 (0xa215a0): knocked down: stops, animation 27; once it is done,
// slot 258 if 0xa255e0 passes (and +0xd89 is clear), else slot 244. Exit runs
// 0xa254a0.
int Todd::State122(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        if (flagD89 || !CheckA255e0(&attackDd8)) states.Transition(State244Ptr());
        else states.Transition(State258Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(27, 0, 1, 1.0f);
        return kStateHandled;
    case kStateExit:
        CallA254a0(0.0f);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Gideon slot 38 (0xa60420): records the hit's +0x5c in +0x12c; for 1 (unless
// slot 79 holds) raises +0xd49 one time in five; then Boss's hit check.
bool Gideon::OnHit(BaseCharacter* other, void* hit) {
    value12c = static_cast<const int32_t*>(hit)[23];
    if (value12c == 1 && !Slot79()) flagD49 = RandomRange(0, 4) == 0;
    else flagD49 = false;
    return Boss::OnHit(other, hit);
}

// KenKyle slot 122 (0xa4c930): after Boss's state, entry rolls 1-100 against
// +0x10d4; on success it raises +0xd49 and +0xd4b and flips the twin's turn.
int KenKyle::State122(int event) {
    int result = Boss::State122(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateEnter) return kStateUnhandled;
    uint32_t roll = RandomRange(1, 100);
    if (chance10d4 >= roll) {
        flagD49 = 1;
        flagD4b = 1;
        KenKyle* other = static_cast<KenKyle*>(twin->object);
        other->flagD4b = static_cast<KenKyle*>(other->twin->object)->flagD4b ^ 1;
    }
    return kStateHandled;
}

// SuperGideon slot 244 (0xa539e0): NegaScott's approach with three exits. With
// +0xd49 set, an update goes to slot 260 while +0x160 is at least slot 57 times
// +0x1130, else to 262; +0xd4a leads to 264 and an out target to 186. Entry
// first runs 0xa254a0; exit clears both flags.
// Not yet matched (not credited).
int SuperGideon::State244(int event) {
    switch (event) {
    case kStateUpdate:
        if (flagD49) {
            states.Transition(value160 < Slot57() * value1130 ? State262Ptr() : State260Ptr());
            return kStateParentTookOver;
        }
        if (flagD4a) {
            states.Transition(State264Ptr());
            return kStateParentTookOver;
        }
        if (static_cast<BaseCharacter*>(target->object)->IsOut()) {
            states.Transition(State186Ptr());
            return kStateParentTookOver;
        }
        if (Boss::State244(kStateUpdate) == kStateParentTookOver) return kStateParentTookOver;
        break;
    case kStateEnter:
        CallA254a0(0.0f);
        aiMode = target && target->object ? 1 : 6;
        if (!Slot239(7)) PlayAnimation(7, 1, 0, 1.0f);
        value7ac = 0.0f;
        flag813 = 1;
        mode87c = 2;
        return kStateHandled;
    case kStateExit:
        flag813 = 0;
        mode87c = 3;
        flagD49 = 0;
        flagD4a = 0;
        break;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
    return kStateHandled;
}

// Patel slot 244 (0xa40110): NegaScott's approach; +0x1000 (a mode change)
// leads to slot 260. After Boss's update, standing on a playfield collision
// with +0x128 and bit 31 of +0x130 drops what it holds and goes to slot 100.
// Not yet matched (not credited).
int Patel::State244(int event) {
    switch (event) {
    case kStateUpdate: {
        if (modeChanged) {
            modeChanged = 0;
            states.Transition(State260Ptr());
            return kStateParentTookOver;
        }
        int result = Boss::State244(kStateUpdate);
        if (result == kStateParentTookOver) return result;
        ActorObject* actor = onyx::Get<ActorObject, onyx_types::type_6492d61d>(actorObject);
        onyx::Component* object = actor->playfield->object;
        PlayfieldCollision* collision =
            static_cast<TypedComponent*>(object)->IsA(PlayfieldCollision::kType) ? static_cast<PlayfieldCollision*>(object) : nullptr;
        if (collision->flag128 && (collision->flags130 & 0x80000000u)) {
            ReleaseHeld(false, 0.0f, 0.0f);
            states.Transition(State100Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    case kStateEnter:
        aiMode = target && target->object ? 1 : 6;
        if (!Slot239(7)) PlayAnimation(7, 1, 0, 1.0f);
        value7ac = 0.0f;
        flag813 = 1;
        mode87c = 2;
        return kStateHandled;
    case kStateExit:
        flag813 = 0;
        mode87c = 3;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Lynette slot 274 (0xa64390): a guard. Animation 181 loops; a hit while time
// (+0xf38) and absorbed damage (+0xf3c) remain plays 135, then 181 again. Once
// either runs out, animation 182, then slot 244 with +0xd25 raised.
// Not yet matched (not credited).
int Lynette::State274(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (flag811 && stateTime < limitF38 && damageTaken < limitF3c) PlayAnimation(135, 0, 0, 1.0f);
        if (!AnimationDone()) return kStateHandled;
        if (animation == 135) {
            PlayAnimation(181, 1, 0, 1.0f);
        } else if (animation == 182) {
            flagD25 = 1;
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        if (stateTime >= limitF38 || damageTaken >= limitF3c) PlayAnimation(182, 0, 1, 1.0f);
        return kStateHandled;
    case kStateEnter:
        flagD24 = 0;
        PlayAnimation(181, 1, 1, 1.0f);
        stateTime = 0.0f;
        damageTaken = 0.0f;
        flag3bb = 1;
        return kStateHandled;
    case kStateExit:
        flag3bb = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// TagTeamMember slot 266 (0xa26780): stops with animation 174 and waits while
// +0xd5a is set, then goes to slot 262. A hit restores +0xd78 from +0xd50 and
// goes to slot 244 with +0xd25 raised.
int TagTeamMember::State266(int event) {
    switch (event) {
    case kStateUpdate:
        if (flagD5a) return kStateHandled;
        states.Transition(State262Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        flagD24 = 0;
        flagD81 = 0;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(174, 1, 0, 1.0f);
        Slot28(!flagD58);
        return kStateHandled;
    case kStateExit:
        flagD81 = 1;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    case kStateDamaged:
        timerD78 = timeD50;
        flagD25 = 1;
        states.Transition(State244Ptr());
        return kStateParentTookOver;
    default:
        return kStateUnhandled;
    }
}

// Slot 16 (Todd 0xa20ab0, Lynette 0xa62320): Boss's update, then the class's
// three attacks are requested. Lynette also refills +0xd7c from +0xd4c.
void Todd::Update() {
    Boss::Update();
    RequestAttack(attackDd8, 20);
    RequestAttack(attackE50, 11);
    RequestAttack(attackFb8, 28);
}
void Lynette::Update() {
    Boss::Update();
    healthD7c = healthD4c;
    RequestAttack(attackDc8, 20);
    RequestAttack(attack, 11);
    RequestAttack(attackEb8, 180);
}

// Whether the character is in the given state.
static inline bool InState(BaseCharacter* character, BaseCharacter::State state) { return character->states.current == state; }

// Lynette slot 69 (0xa628c0): hits taken in states 274, 280 and 278 add their
// value to +0xd88; then TagTeamMember's damage handling.
float Lynette::TakeDamage(const void* hit, BaseCharacter* other) {
    if (InState(this, State274Ptr()) || InState(this, State280Ptr()) || InState(this, State278Ptr()))
        damageTaken += *static_cast<const float*>(hit);
    return TakeTagTeamDamage(hit, other);
}

// The distance to target entry i, or 10000 when there is none or that player is out.
static inline float TargetDistance(Enemy* enemy, uint32_t i) {
    float distance = 10000.0f;
    if (i < enemy->targetCount && !static_cast<BaseCharacter*>(enemy->targets[i].actor->object)->IsOut())
        distance = enemy->targets[i].distance;
    return distance;
}
static inline KenKyle* Twin(KenKyle* self) { return static_cast<KenKyle*>(self->twin->object); }
static inline onyx::Component* TargetObject(Enemy* enemy) { return enemy->target ? enemy->target->object : nullptr; }
static inline bool SameTarget(Enemy* a, Enemy* b) { return TargetObject(a) == TargetObject(b); }

// KenKyle slots 246 (0xa4db00) and 248 (0xa4dcd0): after Boss's state, entry
// brings the twin into the same state when both target the same player within
// +0x10dc and the twin's slot 238 holds.
int KenKyle::State246(int event) {
    int result = Boss::State246(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateEnter) return kStateUnhandled;
    if (SameTarget(this, Twin(this)) && TargetDistance(this, targetIndex) <= range10dc &&
        TargetDistance(Twin(this), targetIndex) <= range10dc && Twin(this)->Slot238()) {
        KenKyle* other = Twin(this);
        if (!InState(other, other->State246Ptr())) other->states.Transition(other->State246Ptr());
    }
    return kStateHandled;
}
int KenKyle::State248(int event) {
    int result = Boss::State248(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateEnter) return kStateUnhandled;
    if (SameTarget(this, Twin(this)) && TargetDistance(this, targetIndex) <= range10dc &&
        TargetDistance(Twin(this), targetIndex) <= range10dc && Twin(this)->Slot238()) {
        KenKyle* other = Twin(this);
        if (!InState(other, other->State248Ptr())) other->states.Transition(other->State248Ptr());
    }
    return kStateHandled;
}

// GigaGideon slot 258 (0xa5b4a0): stands with animation 12. An update goes to
// slot 264 once +0xd54 is used up, to 262 when +0xd65 is set (clearing it), to
// 96 when 0xa1e720 passes, else to 260 after +0xe68 seconds.
// Not yet matched (not credited).
int GigaGideon::State258(int event) {
    switch (event) {
    case kStateUpdate:
        value7ac += Move_FrameDelta;
        if (valueD54 <= 0.0f) {
            states.Transition(State264Ptr());
        } else if (flagD65) {
            flagD65 = 0;
            states.Transition(State262Ptr());
        } else if (CheckA1e720()) {
            states.Transition(State96Ptr());
        } else if (value7ac >= limitE68) {
            states.Transition(State260Ptr());
        } else {
            return kStateHandled;
        }
        return kStateParentTookOver;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(12, 1, 0, 1.0f);
        value7ac = 0.0f;
        flag3bb = 1;
        return kStateHandled;
    case kStateExit:
        flag3bb = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// GigaGideon slot 262 (0xa5bd10): animation 12 at +0xea4 speed; after +0xea8
// seconds animation 25 with the attack at +0xd78; once that is done, slot 258.
int GigaGideon::State262(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (animation == 12) {
            if (stateTime >= limitEa8) {
                PlayAnimation(25, 0, 0, 1.0f);
                StartAttack(&attackD78.attack, false, 1, nullptr);
            }
        } else if (animation == 25) {
            if (!AnimationDone()) return kStateHandled;
            states.Transition(State258Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(12, 1, 0, speedEa4);
        stateTime = 0.0f;
        flag3bb = 1;
        return kStateHandled;
    case kStateExit:
        flag3bb = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Lynette slot 282 (0xa64d10): animation 115 (unless already playing); when
// +0xd83 is raised, animation 13, and once that is done, slot 264. Exit clears
// +0xd59.
// Not yet matched (not credited).
int Lynette::State282(int event) {
    switch (event) {
    case kStateUpdate:
        if (animation != 13) {
            if (animation == 115 && flagD83) {
                flagD83 = 0;
                PlayAnimation(13, 0, 0, 1.0f);
            }
            return kStateHandled;
        }
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State264Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        flag3ba = 1;
        flagD83 = 0;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        if (animation != 115) PlayAnimation(115, 1, 0, 1.0f);
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        flagD59 = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// SuperFightingRobotHand slot 108 (0xa299e0): stops; an update goes to slot 258
// with animation 38 when the next state is 268 or 270, else to slot 106.
// Not yet matched (not credited).
int SuperFightingRobotHand::State108(int event) {
    switch (event) {
    case kStateUpdate:
        if (states.next == State268Ptr() || states.next == State270Ptr()) {
            PlayAnimation(38, 0, 0, 1.0f);
            states.Transition(State258Ptr());
        } else {
            states.Transition(State106Ptr());
        }
        return kStateParentTookOver;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        return kStateHandled;
    case kStateExit:
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// SuperFightingRobotHand slot 106 (0xa297d0): entry raises +0xfbb. An update
// counts +0x330 down; until +0xd08 reaches +0xcb4 it goes to slot 264 when the
// time is up. Then +0xd08 restarts and a coin flip picks slot 248 or 264.
// Not yet matched (not credited).
int SuperFightingRobotHand::State106(int event) {
    switch (event) {
    case kStateUpdate:
        timer330 -= Move_FrameDelta;
        if (valueD08 < limitCb4) {
            if (timer330 <= 0.0f) {
                states.Transition(State264Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        }
        valueD08 = 0;
        switch (RandomRange(0, 1)) {
        case 1:
            states.Transition(State248Ptr());
            return kStateParentTookOver;
        case 0:
            states.Transition(State264Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        flagFbb = 1;
        return kStateHandled;
    case kStateExit:
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Todd slot 82 (0xa21230): never in states 264, 270, 268, 260 or 266; otherwise
// Boss's test.
bool Todd::Slot82() {
    State first = State264Ptr();
    if (states.current == first) return false;
    State second = State270Ptr();
    if (states.current == second) return false;
    State third = State268Ptr();
    if (states.current == third) return false;
    State fourth = State260Ptr();
    if (states.current == fourth) return false;
    State fifth = State266Ptr();
    if (states.current == fifth) return false;
    if (Slot85()) return false;
    return CanSlot82();
}

// Slot 16 (Gideon 0xa60160, Ken & Kyle 0xa4c040, Lucas Lee 0xa47ae0): Boss's
// update, then the class's five attacks are requested.
void Gideon::Update() {
    Boss::Update();
    RequestAttack(attackD50, 20);
    RequestAttack(attackDc8, 11);
    RequestAttack(attackE40, 31);
    RequestAttack(attackEb8, 79);
    RequestAttack(attackF30, 28);
}
void KenKyle::Update() {
    Boss::Update();
    RequestAttack(attackD68, 20);
    RequestAttack(attackDe0, 11);
    RequestAttack(attackE58, 31);
    RequestAttack(attackEd0, 32);
    RequestAttack(attackF48, 79);
}
void LucasLee::Update() {
    Boss::Update();
    RequestAttack(attackD58, 19);
    RequestAttack(attackDd0, 31);
    RequestAttack(attackE48, 11);
    RequestAttack(attackEc0, 174);
    RequestAttack(attackF38, 178);
}

// Lynette slot 82 (0xa62a80): never in states 274, 280, 278 or 266; otherwise
// Boss's test.
bool Lynette::Slot82() {
    State first = State274Ptr();
    if (states.current == first) return false;
    State second = State280Ptr();
    if (states.current == second) return false;
    State third = State278Ptr();
    if (states.current == third) return false;
    State fourth = State266Ptr();
    if (states.current == fourth) return false;
    if (Slot85()) return false;
    return CanSlot82();
}

// Lynette slot 278 (0xa648a0): animation 0 loops, a hit before +0xf58 seconds
// plays 13; after +0xf58 seconds, slot 276.
int Lynette::State278(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (flag811 && stateTime < limitF58) PlayAnimation(13, 0, 0, 1.0f);
        if (!AnimationDone()) return kStateHandled;
        if (stateTime >= limitF58) {
            states.Transition(State276Ptr());
            return kStateParentTookOver;
        }
        if (animation == 13) PlayAnimation(0, 1, 0, 1.0f);
        return kStateHandled;
    case kStateEnter:
        flagD24 = 0;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(0, 1, 0, 1.0f);
        stateTime = 0.0f;
        flag3bb = 1;
        return kStateHandled;
    case kStateExit:
        flag3bb = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Lynette slot 280 (0xa64ac0) and Envy slot 268 (0xa68980): a guard. The guard
// animation loops; a hit while time and absorbed damage remain plays 13. Once
// either runs out, Lynette goes to slot 282 with +0xd59 raised (and raises
// +0xd85 on exit), Envy to slot 244 with +0xd25 raised.
int Lynette::State280(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (flag811 && stateTime < limitF40 && damageTaken < limitF44) PlayAnimation(13, 0, 0, 1.0f);
        if (!AnimationDone()) return kStateHandled;
        if (stateTime >= limitF40 || damageTaken >= limitF44) {
            flagD59 = 1;
            states.Transition(State282Ptr());
            return kStateParentTookOver;
        }
        if (animation == 13) PlayAnimation(115, 1, 0, 1.0f);
        return kStateHandled;
    case kStateEnter:
        flagD24 = 0;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(115, 1, 0, 1.0f);
        stateTime = 0.0f;
        damageTaken = 0.0f;
        flag3bb = 1;
        return kStateHandled;
    case kStateExit:
        flagD85 = 1;
        flag3bb = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int Envy::State268(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (flag811 && stateTime < limitF88 && damageTaken < limitF8c) PlayAnimation(13, 0, 0, 1.0f);
        if (!AnimationDone()) return kStateHandled;
        if (stateTime >= limitF88 || damageTaken >= limitF8c) {
            flagD25 = 1;
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        if (animation == 13) PlayAnimation(17, 1, 0, 1.0f);
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(17, 1, 0, 1.0f);
        stateTime = 0.0f;
        damageTaken = 0.0f;
        flag3bb = 1;
        return kStateHandled;
    case kStateExit:
        flag3bb = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// LucasLee slot 266 (0xa4a810): animation 174 with the attack at +0xec0; each
// time it ends it plays again (175 after the first, counted at +0xff0) with the
// attack; once 175 is done, slot 244.
// Not yet matched (not credited).
int LucasLee::State266(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        if (animation == 175) {
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        if (animation == 174) {
            PlayAnimation(countFf0 ? 175 : 174, 0, 1, 1.0f);
            ++countFf0;
            StartAttack(&attackEc0.attack, false, 1, nullptr);
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(174, 0, 1, 1.0f);
        StartAttack(&attackEc0.attack, false, 1, nullptr);
        countFf0 = 0;
        flag3bb = 1;
        return kStateHandled;
    case kStateExit:
        flag3bb = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Todd slot 69 (0xa21010): Boss's damage handling; totals the damage at +0xd8c,
// counts hits in state 260 and adds damage in state 270. Once the total reaches
// +0x119c (outside states 268 and 270) it raises +0xd89 and counts +0xd90.
float Todd::TakeDamage(const void* hit, BaseCharacter* other) {
    float damage = TakeBossDamage(hit, other);
    damageD8c += damage;
    if (InState(this, State260Ptr())) ++hitsDb4;
    if (InState(this, State270Ptr())) damageDbc += damage;
    if (!flagD89 && damageD8c >= limit119c && !InState(this, State268Ptr()) && !InState(this, State270Ptr())) {
        ++countD90;
        flagD89 = 1;
    }
    return damage;
}

// SuperGideon slot 69 (0xa52ef0): Boss's damage handling; once the damage since
// the last roll reaches +0x1118, rolls 1-100 against +0x111c to raise +0xd49
// and +0x3ba, and starts counting again.
float SuperGideon::TakeDamage(const void* hit, BaseCharacter* other) {
    float damage = TakeBossDamage(hit, other);
    damageD4c += damage;
    if (damageD4c >= limit1118) {
        int roll = RandomRange(1, 100);
        if (roll <= chance111c) {
            flagD49 = 1;
            flag3ba = 1;
        }
        damageD4c = 0.0f;
    }
    return damage;
}

// Slot 16 (Envy 0xa66f00, Patel 0xa3fbe0): Boss's update, then the class's four
// attacks are requested. Envy also refills +0xd7c from +0xd4c.
void Envy::Update() {
    Boss::Update();
    healthD7c = healthD4c;
    RequestAttack(attack, 11);
    RequestAttack(attackE10, 32);
    RequestAttack(attackE88, 25);
    RequestAttack(attackF00, 79);
}
void Patel::Update() {
    Boss::Update();
    RequestAttack(attackD90, 20);
    RequestAttack(attackE08, 32);
    RequestAttack(attackEf8, 79);
    RequestAttack(attackE80, 11);
}

// Patel slot 266 (0xa41a40) and Roxy slots 264 (0xa3e090), 266 (0xa3e2e0) and
// 268 (0xa3e530): stop, turn to the target player's X position (slot 91) and
// attack; once the animation is done, slot 244 (Roxy 268: 246).
int Patel::State266(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State244Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(player->actorObject);
        Slot91(onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.x);
        PlayAnimation(32, 0, 1, 1.0f);
        StartAttack(&attackE08.attack, false, 1, nullptr);
        return kStateHandled;
    }
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int Roxy::State264(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State244Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(player->actorObject);
        Slot91(onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.x);
        PlayAnimation(31, 0, 1, 1.0f);
        StartAttack(&attackE00.attack, false, 1, nullptr);
        return kStateHandled;
    }
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int Roxy::State266(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State244Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(player->actorObject);
        Slot91(onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.x);
        PlayAnimation(180, 0, 1, 1.0f);
        StartAttack(&attackEf0.attack, false, 1, nullptr);
        return kStateHandled;
    }
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}
int Roxy::State268(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State246Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(player->actorObject);
        Slot91(onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.x);
        PlayAnimation(174, 0, 1, 1.0f);
        StartAttack(&attackE78.attack, false, 1, nullptr);
        return kStateHandled;
    }
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// KenKyle slot 82 (0xa4c560): never in states 258, 260, 262, 266, 264 or 268;
// otherwise Boss's test.
bool KenKyle::Slot82() {
    State first = State258Ptr();
    if (states.current == first) return false;
    State second = State260Ptr();
    if (states.current == second) return false;
    State third = State262Ptr();
    if (states.current == third) return false;
    State fourth = State266Ptr();
    if (states.current == fourth) return false;
    State fifth = State264Ptr();
    if (states.current == fifth) return false;
    State sixth = State268Ptr();
    if (states.current == sixth) return false;
    if (Slot85()) return false;
    return CanSlot82();
}

// Patel slot 264 (0xa417b0): stops, turns to the target player's X position and
// attacks (0xa41ca0, then the attack at +0xd90); each time the animation is done
// it attacks again, +0xd70 times in all; then slot 244.
int Patel::State264(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        if (attacksDone >= attackCount) {
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        attacksDone += 1.0f;
        StartAttack(&attackD90.attack, false, 1, nullptr);
        CallA41ca0();
        return kStateHandled;
    case kStateEnter: {
        attacksDone = 0.0f;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(player->actorObject);
        Slot91(onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.x);
        CallA41ca0();
        StartAttack(&attackD90.attack, false, 1, nullptr);
        return kStateHandled;
    }
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// KenKyle slot 198 (0xa4d1f0): Boss's special attack, as Enemy's state with a
// turn to the target player's X position. When the twin targets the same
// player within +0x10dc and its slot 238 holds, both run 0xa506f0 with +0x878.
// Once the animation is done and +0xd50 seconds have passed, slot 244.
int KenKyle::State198(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime += Move_FrameDelta;
        if (!AnimationDone()) return kStateHandled;
        if (stateTime >= timeD50) {
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter: {
        int result = Enemy::State198(event);
        if (result == kStateParentTookOver) return result;
        BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(player->actorObject);
        Slot91(onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.x);
        stateTime = 0.0f;
        timeD50 = 0.0f;
        if (SameTarget(this, Twin(this)) && TargetDistance(this, targetIndex) <= range10dc &&
            TargetDistance(Twin(this), targetIndex) <= range10dc && Twin(this)->Slot238()) {
            CallA506f0(value878);
            Twin(this)->CallA506f0(value878);
        }
        return kStateHandled;
    }
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// The distance between two characters on X and Y.
static inline float DistanceXY(BaseCharacter* first, BaseCharacter* second) {
    ActorObject* a = onyx::Find<ActorObject, onyx_types::type_6492d61d>(first->actorObject);
    onyx::Vector3 p = onyx::Get<onyx::Transform, onyx::kTransform>(a->transform)->position;
    ActorObject* b = onyx::Find<ActorObject, onyx_types::type_6492d61d>(second->actorObject);
    onyx::Vector3 q = onyx::Get<onyx::Transform, onyx::kTransform>(b->transform)->position;
    float dx = p.x - q.x;
    float dy = p.y - q.y;
    return __builtin_sqrtf(dx * dx + dy * dy);
}

// KenKyle slot 260 (0xa4e750): stops with animation 114 and +0xd4d raised and
// waits for the twin; once the twin is in this state too and within +0x10bc
// (on X and Y), slot 262.
// Not yet matched (not credited).
int KenKyle::State260(int event) {
    switch (event) {
    case kStateUpdate:
        if (DistanceXY(Twin(this), this) <= range10bc && Twin(this)->flagD4d) {
            states.Transition(State262Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        flagD4d = 1;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(114, 1, 0, 1.0f);
        flag3bb = 1;
        return kStateHandled;
    case kStateExit:
        flagD4d = 0;
        flag3bb = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Patel slot 262 (0xa414a0): with +0x3ba raised, animation 177, then 178 until
// every HipsterChick is out, then 179; once that is done, slot 244. Every
// +0xd88 seconds the attack at +0xf70 starts again. Exit sets the mode at
// +0xffc to 3.
// Not yet matched (not credited).
int Patel::State262(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime -= Move_FrameDelta;
        if (stateTime <= 0.0f) {
            stateTime = periodD88;
            StartAttack(&attackF70.attack, false, 1, nullptr);
        }
        if (animation == 177) {
            if (AnimationDone()) PlayAnimation(178, 1, 0, 1.0f);
        } else if (animation == 178) {
            for (uint32_t i = 0; i < chickCount; ++i)
                if (!onyx::Get<HipsterChick, onyx_types::type_4a52c0d7>(chicks[i])->IsOut()) return kStateHandled;
            PlayAnimation(179, 0, 0, 1.0f);
        } else if (animation == 179) {
            if (AnimationDone()) {
                states.Transition(State244Ptr());
                return kStateParentTookOver;
            }
        }
        return kStateHandled;
    case kStateEnter:
        flag3ba = 1;
        PlayAnimation(177, 0, 1, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        stateTime = periodD88;
        StartAttack(&attackF70.attack, false, 1, nullptr);
        return kStateHandled;
    case kStateExit:
        flag3ba = 0;
        modeFfc = 3;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Slot 237 (Gideon 0xa60c80, Lucas Lee 0xa480f0, Todd 0xa22300): attack
// request filters. Gideon refuses kinds 32, 39, 45 and 61; Lucas Lee and Todd
// also 31. Lucas Lee takes 11 and 19 only with +0xfd0 clear and 174 only with
// it set; Todd takes 11 once +0xdb8 reaches +0x11b0, unless the target's slot
// 85 holds.
bool Gideon::Slot237(const AttackSlot& request) {
    switch (request.kind) {
    case 32:
    case 39:
    case 45:
    case 61:
        return false;
    }
    return true;
}
bool LucasLee::Slot237(const AttackSlot& request) {
    switch (request.kind) {
    case 31:
    case 32:
    case 39:
    case 45:
    case 61:
        return false;
    case 11:
    case 19:
        return !flagFd0;
    case 174:
        return flagFd0;
    }
    return true;
}
bool Todd::Slot237(const AttackSlot& request) {
    switch (request.kind) {
    case 31:
    case 32:
    case 39:
    case 45:
    case 61:
        return false;
    case 11:
        if (valueDb8 >= limit11b0) return !static_cast<BaseCharacter*>(target->object)->Slot85();
        return false;
    }
    return true;
}

// Lucas Lee's other animation set, used while +0xfd0 is raised.
static inline int LucasLeeAnimation(int animation) {
    switch (animation) {
    case 0: return 44;
    case 1: return 43;
    case 7: return 42;
    case 12: return 97;
    case 13: return 91;
    case 87: return 86;
    }
    return animation;
}

// LucasLee slot 22 (0xa47de0): plays the other set's animation while +0xfd0 is
// raised.
void LucasLee::PlayAnimation(int animation, bool a, bool b, float speed) {
    if (flagFd0) animation = LucasLeeAnimation(animation);
    BaseCharacter::PlayAnimation(animation, a, b, speed);
}

// LucasLee slot 239 (0xa48170): whether the animation playing is the given one
// or its counterpart in the other set.
// Not yet matched (not credited).
bool LucasLee::Slot239(int anim) {
    return animation == LucasLeeAnimation(anim) || animation == anim;
}

// LucasLee slot 162 (0xa48050): never while +0xfd0 is raised; otherwise
// Enemy's.
bool LucasLee::Slot162() {
    if (flagFd0) return false;
    return Enemy::Slot162();
}

// KenKyle slot 240 (0xa4d520): when the twin has +0xd28 raised, raises it here
// too. Otherwise, once the twin is down (+0x160 used up, slot 95 failing) in
// action mode 5, 6, 8 or 9, runs 0x996c30 with +0x10e0 while the twin's +0xd54
// is below +0x10e4, then Boss's slot 240.
void KenKyle::Slot240() {
    KenKyle* other = Twin(this);
    if (other->flagD28) {
        flagD28 = 1;
        return;
    }
    if (!(other->value160 <= 0.0f) || other->Slot95()) return;
    switch (other->actionMode) {
    case 5:
    case 6:
    case 8:
    case 9:
        break;
    default:
        return;
    }
    if (Twin(this)->valueD54 < limit10e4) Call996c30(value10e0, 0, 0, nullptr);
    Boss::Slot240();
}

// Slot 259 (TagTeamMember 0xa25eb0, Lynette 0xa634c0, Envy 0xa68360): whether
// +0xd80 is set; Envy also needs +0xd84, Lynette +0xd85 and state 244 or 282.
// Not matched here; the address is credited to an earlier byte-level build
// (FUN_00a25eb0, which returns the byte as a 32-bit value).
bool TagTeamMember::Slot259() {
    return flagD80;
}
bool Lynette::Slot259() {
    if (!flagD85) return false;
    if (InState(this, State244Ptr()) || InState(this, State282Ptr())) return flagD80;
    return false;
}
// Matches, but the address is credited to an earlier byte-level build.
bool Envy::Slot259() {
    return flagD84 && flagD80;
}

// Patel slot 13 (0xa3faf0): Boss's slot 13, then, with +0x7b8 set, each
// HipsterChick's slot 94.
// Not yet matched (not credited).
void Patel::Slot13() {
    UpdateBoss13();
    if (!flag7b8) return;
    for (uint32_t i = 0; i < chickCount; ++i) onyx::Get<HipsterChick, onyx_types::type_4a52c0d7>(chicks[i])->Slot94();
}

// KenKyle slot 4 (0xa4b5f0): Boss's serialization, then the seven attack slots
// and the settings from +0x10b0 to +0x10ec (see Archive.h).
void KenKyle::Slot4(onyx::Archive& archive) {
    Boss::Slot4(archive);
    attackD68.Serialize(archive);
    attackDe0.Serialize(archive);
    attackE58.Serialize(archive);
    attackEd0.Serialize(archive);
    attackF48.Serialize(archive);
    attackFc0.Serialize(archive);
    attack1038.Serialize(archive);
    onyx::Transfer(archive, value10b0);
    onyx::Transfer(archive, value10b4);
    onyx::Transfer(archive, limit10b8);
    onyx::Transfer(archive, range10bc);
    onyx::Transfer(archive, value10c0);
    onyx::Transfer(archive, value10c4);
    onyx::Transfer(archive, value10c8);
    onyx::Transfer(archive, value10cc);
    onyx::Transfer(archive, value10d0);
    onyx::Transfer(archive, chance10d4);
    onyx::Transfer(archive, value10d8);
    onyx::Transfer(archive, range10dc);
    onyx::Transfer(archive, value10e0);
    onyx::Transfer(archive, limit10e4);
    onyx::Transfer(archive, value10e8);
    onyx::Transfer(archive, value10ec);
}

}  // namespace SPTG
