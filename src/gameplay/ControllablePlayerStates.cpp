// SPTG::ControllablePlayer's smaller state handlers and overrides. Slots follow
// the vtable; what most of the states represent is not established yet.
#include "BaseCharacter.h"
#include "Random.h"

namespace SPTG {

// Forwards to the parent, then records the direction the actor now faces.
void ControllablePlayer::TurnAround() {
    BaseCharacter::TurnAround();
    ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
    ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags);
    flag13c1 = flags->facingLeft ^ 1;
}

void ControllablePlayer::FaceX(float x) {
    BaseCharacter::FaceX(x);
    ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
    ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags);
    flag13c1 = flags->facingLeft ^ 1;
}

bool ControllablePlayer::CanMount() {
    if (flag141) return false;
    if (actionMode != 6) return false;
    State state = State251Ptr();
    return states.current != state;
}

// Tells itself the amount with message 17, then applies it.
void ControllablePlayer::Slot43(float value) {
    CharacterMessage message(17, nullptr);
    message.receiver = this;
    *reinterpret_cast<uint32_t*>(&message.data) = static_cast<uint32_t>(value);
    OnMessage(&message);
    BaseCharacter::Slot43(value);
}

int ControllablePlayer::State126(int event) {
    int result = BaseCharacter::State126(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateEnter) return kStateUnhandled;
    __builtin_memset(value142c, 0, sizeof(value142c));
    return kStateHandled;
}

int ControllablePlayer::State138(int event) {
    switch (event) {
        case kStateUpdate:
            if (IsOnGround()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateUnhandled;
        case kStateEnter:
            PlayAnimation(116, false, false, 1.0f);
            StartAttack(&attackEb8, false, 1, nullptr);
            return kStateHandled;
        case kStateExit:
            actionMode = 0;
            return kStateUnhandled;
        default:
            return kStateUnhandled;
    }
}

int ControllablePlayer::State243(int event) {
    switch (event) {
        case kStateUpdate:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        case kStateEnter:
            PlayAnimation(288, false, false, 1.0f);
            flag511 = 0;
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

// Counts how long the input bit at +0x1414 has been held.
void ControllablePlayer::Slot257() {
    if (input->held & (1ull << value1414)) value1410 += Move_FrameDelta;
    else value1410 = 0.0f;
}

// A jump attack: plays its rising animation until it lands, ending on the landing state.
int ControllablePlayer::State185(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            int current = animation;
            if (current == 79) PlayAnimation(80, true, false, 1.0f);
            else if (current == 76) PlayAnimation(77, true, false, 1.0f);
        }
        if (IsOnGround() && motion.z <= 0.0f) {
            states.Transition(State104Ptr());
            result = kStateParentTookOver;
            break;
        }
        result = kStateHandled;
        break;
    case kStateEnter:
        result = kStateHandled;
        if (flag13f1) {
            StartAttack(&attackAf0, false, 1, nullptr);
            PlayAnimation(76, false, false, 1.0f);
        } else {
            StartAttack(&attackA98, false, 1, nullptr);
            PlayAnimation(79, false, false, 1.0f);
        }
        break;
    case kStateExit:
        motion.x = 0;
        result = kStateHandled;
        break;
    case kStateEvent3:
        return result;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// A dash in the direction the actor faces, ending when its animation does.
int ControllablePlayer::State193(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State102Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        float sign = FacingSign();
        motionTarget.z = savedZ;
        motionC4 = savedC4;
        motion.x = sign * dashSpeed;
        motion.y = dashY;
        motion.z = dashZ;
        PlayAnimation(85, false, false, 1.0f);
        return kStateHandled;
    }
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    }
}

// Standing attack that can chain: on the animation's end, a held attack input with time left restarts it.
int ControllablePlayer::State167(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        if (!AnimationDone()) {
            result = kStateHandled;
            break;
        }
        AttackInput input;
        ReadAttackInput(&input);
        if (input.pressed && value142c[1] > 0.0f) goto start;
        states.Transition(State96Ptr());
        result = kStateParentTookOver;
        break;
    }
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
    start:
        result = kStateHandled;
        StartAttack(&attack9e8, false, 1, nullptr);
        PlayAnimation(39, false, true, 1.0f);
        break;
    case kStateExit:
        states.AssertOwner(this);
        result = kStateHandled;
        break;
    case kStateEvent3:
        return result;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// An attack that keeps some of the run into it: slowly moving it stops dead, otherwise it slides at slideSpeed.
int ControllablePlayer::State173(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State96Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        StartAttack(&attack938, false, 1, nullptr);
        float speed = __builtin_fabsf(motion.x);
        float limit = jumpBackSpeed;
        value1bc = 0.0f;
        float target;
        if (speed > limit) {
            float sign = FacingSign();
            target = slideSpeed * sign;
        } else {
            target = 0.0f;
            motion.x = 0.0f;
        }
        motionTarget.x = target;
        result = kStateHandled;
        PlayAnimation(11, false, true, 1.0f);
        return result;
    }
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    }
}

// A jump kick along a set direction, until the character lands.
int ControllablePlayer::State189(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (animation == 82 && AnimationDone()) PlayAnimation(83, false, false, 1.0f);
        if (!IsOnGround()) return kStateHandled;
        states.Transition(State104Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        float sign = FacingSign();
        float x = sign * kickSpeed;
        float y = kickY;
        float z = kickZ;
        motion.x = x;
        motion.y = y;
        motion.z = z;
        motionTarget = onyx::Vector3::Zero();
        result = kStateHandled;
        StartAttack(&attackB48, false, 1, nullptr);
        PlayAnimation(82, false, false, 1.0f);
        return result;
    }
    case kStateExit:
        motion.x = 0;
        return kStateHandled;
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    }
}

// A jump kick along the same direction as State189, on its own animations and attack.
int ControllablePlayer::State191(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (animation == 284 && AnimationDone()) PlayAnimation(285, false, false, 1.0f);
        if (!IsOnGround()) return kStateHandled;
        states.Transition(State104Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        float sign = FacingSign();
        float x = sign * kickSpeed;
        float y = kickY;
        float z = kickZ;
        motion.x = x;
        motion.y = y;
        motion.z = z;
        motionTarget = onyx::Vector3::Zero();
        result = kStateHandled;
        StartAttack(&attackBa0, false, 1, nullptr);
        PlayAnimation(284, false, false, 1.0f);
        return result;
    }
    case kStateExit:
        motion.x = 0;
        return kStateHandled;
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    }
}

// A special attack: its cost comes out of +0x32c first, and any shortfall out of health.
int ControllablePlayer::State203(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) {
            result = kStateHandled;
            break;
        }
        states.Transition(State96Ptr());
        result = kStateParentTookOver;
        break;
    case kStateEnter: {
        float cost = __builtin_ceilf(specialCost * GutsCostScale());
        float available = guts;
        if (cost > available) {
            LoseHealth(cost - available);
            available = guts;
        }
        LoseGuts(cost < available ? cost : available);
        motion = onyx::Vector3::Zero();
        result = kStateHandled;
        StartAttack(&attackE60, true, 1, nullptr);
        PlayAnimation(28, false, false, 1.0f);
        if (input && !flag13c0) input->Call8fabf0(input->source->owner->value8);
        break;
    }
    case kStateExit:
        if (input && !flag13c0) input->Call8f80d0();
        result = kStateHandled;
        break;
    case kStateEvent3:
        return result;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// Turns the actor around when the held direction points the other way.
void ControllablePlayer::TurnToMoveInput() {
    onyx::Vector3 move;
    if (!ReadMoveInput(input, &move) || __builtin_fabsf(move.x) <= 0.000001f) return;
    float direction = move.x >= 0.0f ? 1.0f : -1.0f;
    if (direction * FacingSign() < 0.0f) {
        flag13c1 ^= 1;
        TurnAround();
    }
}

// Standing idle without taking input. Leaves the update event unhandled.
int ControllablePlayer::State247(int event) {
    int result;
    switch (event) {
    case kStateEnter:
        flag13b0 = 0;
        value142c[0] = 0.0f;
        value142c[1] = 0.0f;
        value142c[4] = 0.0f;
        value142c[5] = 0.0f;
        value142c[2] = 0.0f;
        value142c[3] = 0.0f;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        result = kStateHandled;
        if (BaseCharacter* mount = Mount()) {
            int animation = mount->Slot49() ? 60 : 44;
            PlayAnimation(animation, true, false, 1.0f);
            if (IsMounted()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(100, true, false, 1.0f);
        } else {
            PlayAnimation(0, true, false, 1.0f);
        }
        break;
    case kStateExit:
        flag13b0 = 1;
        value142c[0] = 0.0f;
        value142c[1] = 0.0f;
        value142c[4] = 0.0f;
        value142c[5] = 0.0f;
        value142c[2] = 0.0f;
        value142c[3] = 0.0f;
        result = kStateHandled;
        break;
    case kStateEvent3:
        result = kStateHandled;
        break;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// A sliding attack: starts, holds its middle animation until the slide slows down, then finishes.
int ControllablePlayer::State179(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        int current = animation;
        if (current == 33) {
            if (AnimationDone()) {
                result = kStateHandled;
                PlayAnimation(34, true, true, 1.0f);
                return result;
            }
        } else if (current == 34) {
            if (__builtin_fabsf(motion.x) < slideStopSpeed) {
                result = kStateHandled;
                PlayAnimation(35, false, true, 1.0f);
                return result;
            }
        } else if (current == 35 && AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    case kStateEnter: {
        float speed = slideAttackSpeed;
        float x = speed * FacingSign();
        float scale = SpeedScale();
        result = kStateHandled;
        motionTarget.x = x * scale;
        value1bc = 0.0f;
        StartAttack(&attackC50, false, 1, nullptr);
        PlayAnimation(33, false, true, 1.0f);
        return result;
    }
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    case kStateExit:
        result = kStateHandled;
        motionTarget.x = 0.0f;
        motion.x = 0.0f;
        return result;
    }
}

// A second sliding attack, the same as State179 on its own animations and attack.
int ControllablePlayer::State181(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        int current = animation;
        if (current == 36) {
            if (AnimationDone()) {
                result = kStateHandled;
                PlayAnimation(37, true, true, 1.0f);
                return result;
            }
        } else if (current == 37) {
            if (__builtin_fabsf(motion.x) < slideStopSpeed) {
                result = kStateHandled;
                PlayAnimation(38, false, false, 1.0f);
                return result;
            }
        } else if (current == 38 && AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    case kStateEnter: {
        float speed = slideAttackSpeed;
        float x = speed * FacingSign();
        float scale = SpeedScale();
        result = kStateHandled;
        motionTarget.x = x * scale;
        value1bc = 0.0f;
        StartAttack(&attackCa8, false, 1, nullptr);
        PlayAnimation(36, false, true, 1.0f);
        return result;
    }
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    case kStateExit:
        result = kStateHandled;
        motionTarget.x = 0.0f;
        motion.x = 0.0f;
        return result;
    }
}

// A step along the way the actor faces, ending on the state its button says.
int ControllablePlayer::State235(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (!IsOnGround()) {
            states.Transition(State102Ptr());
        } else {
            if (!AnimationDone()) return kStateHandled;
            if (input->held & (1ull << value141c)) states.Transition(State98Ptr());
            else states.Transition(State96Ptr());
        }
        return kStateParentTookOver;
    case kStateEnter: {
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(9, false, false, 1.0f);
        float sign = FacingSign();
        result = kStateHandled;
        flag3ba = 1;
        motion.x = value8d0 * sign;
        return result;
    }
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    case kStateExit:
        result = kStateHandled;
        motion.x = 0.0f;
        flag3ba = 0;
        return result;
    }
}

// Whether a direction or an attack button went down since the last call. Remembers the directions.
bool ControllablePlayer::AnyInputPressed() {
    onyx::Vector3 move;
    ReadMoveInput(input, &move);
    bool pressed = (move.x != 0.0f && lastMove.x == 0.0f) || (move.y != 0.0f && lastMove.y == 0.0f) ||
                   input->JustPressed(0x10) || input->JustPressed(0x20) || input->JustPressed(0x40) ||
                   input->JustPressed(0x80) || input->JustPressed(0x200) || input->JustPressed(0x100);
    lastMove.x = move.x;
    lastMove.y = move.y;
    lastMove.z = move.z;
    return pressed;
}

// Slot 100 (0x981280): on the ground, steered by the stick. Anything else goes through the input check at slot 256.
// Not yet matched: the multiply before SpeedScale lands in s9 in the original and s8 here, and the next one in s0 and s1.
int ControllablePlayer::State100(int event) {
    int result = BaseCharacter::State100(event);
    if (result == kStateParentTookOver) return result;
    if (event == kStateEnter || event == kStateExit) return kStateHandled;
    if (event != kStateUpdate) return kStateUnhandled;
    SteerFromInput();
    if (AirInput(kStateUpdate) == kStateParentTookOver) {
        states.AssertOwner(this);
        return kStateParentTookOver;
    }
    return kStateHandled;
}

// Slot 102 (0x9813b0): moving through the air. With +0x1288 raised it takes input only once the timer has run out.
// Not yet matched, with the same two registers as State100.
int ControllablePlayer::State102(int event) {
    int result = BaseCharacter::State102(event);
    if (result == kStateParentTookOver) return result;
    switch (event) {
    case kStateUpdate:
        if (IsOnGround()) return kStateHandled;
        SteerFromInput();
        if (!flag1288) return kStateHandled;
        airTimer = __builtin_fmaxf(airTimer - Move_FrameDelta, 0.0f);
        if (__builtin_fabsf(airTimer) > 0.000001f) return kStateHandled;
        if (AirInput(kStateUpdate) == kStateParentTookOver) {
            states.AssertOwner(this);
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        return kStateHandled;
    case kStateExit:
        motion.y = 0.0f;
        motionTarget.x = 0.0f;
        airTimer = 0.0f;
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Slot 104 (0x981550): landing. Entry stops the fall, snaps to the ground when it's within 0.1 (unless the playfield
// says not to) and clears the air attack count. While it plays, a charge held in +0x142c or +0x1430 picks states 175 or 177.
int ControllablePlayer::State104(int event) {
    int result = BaseCharacter::State104(event);
    if (result == kStateParentTookOver) return result;
    switch (event) {
    case kStateEnter: {
        flag13f0 = 0;
        flag13f1 = 0;
        flag140c = 0;
        motion.y = 0.0f;
        onyx::Vector3 position = onyx::Find<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->transform)->position;
        float ground = groundHeight;
        if (__builtin_fabsf(position.z - ground) < 0.1f) {
            PlayfieldCollision* field = static_cast<PlayfieldCollision*>(onyx::Get<ActorObject, 0x6492d61du>(actorObject)->playfield->object);
            if (!field->IsA(PlayfieldCollision::kType)) field = nullptr;
            if (!field->flag128) {
                position.z = ground;
                onyx::Find<ActorObject, 0x6492d61du>(actorObject)->MoveTo(position);
                groundHeight = static_cast<int>(ground);
            }
        }
        airAttackCount = 0;
        return kStateHandled;
    }
    case kStateUpdate:
        if (!IsMounted()) {
            if (value142c[0] > 0.0f) {
                states.Transition(State175Ptr());
            } else if (value142c[1] > 0.0f) {
                states.Transition(State177Ptr());
            } else {
                return kStateHandled;
            }
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateExit:
        motion.y = 0.0f;
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Slot 114 (0x9824f0): holds +0x3ba raised, and entry marks the player down on the HUD.
// Not yet matched: the return block sits in a different place, and one `mov w19, #1` comes before the panel test.
int ControllablePlayer::State114(int event) {
    int result = kStateHandled;
    if (BaseCharacter::State114(event) == kStateParentTookOver) {
        states.AssertOwner(this);
        result = kStateParentTookOver;
    } else {
        switch (event) {
        case kStateUpdate:
            result = kStateHandled;
            break;
        case kStateEnter: {
            result = kStateHandled;
            flag3ba = result;
            InGameHUD* screen = hud.Get();
            uint32_t player = playerIndex;
            screen->players[player].downed = result;
            screen->window.Get();
            if (player <= 3) {
                if (HudPlayerPanel* panel = screen->panel) {
                    result = kStateHandled;
                    panel->showingStatus[player] = result;
                    panel->SetStatus(12, player);
                }
            }
            break;
        }
        case kStateExit:
            flag3ba = 0;
            result = kStateHandled;
            break;
        default:
            result = kStateUnhandled;
            break;
        }
    }
    return result;
}

// Slot 68 (0x97fe10): counts its calls, and every so many (a random number between +0x12ac and +0x12b0) runs 0x80f6e0.
void ControllablePlayer::Slot68() {
    ++value1450;
    uint32_t low = value12ac;
    uint32_t high = value12b0;
    uint32_t every = RandomRange(low, high);
    if (effectCounter++ >= every) {
        effectCounter = 0;
        Effect10();
    }
}

// Slot 156 (0x9862d0): whether a second player can act: at least two players outside the state at slot 233, and none
// of +0x150c, +0x150d or +0x7e8.
bool ControllablePlayer::Slot156() {
    PlayerCatalog* catalog = onyx::Find<PlayerCatalog, onyx_types::type_0bf4a9b7>(level.Get()->players);
    if (!catalog->count) return false;
    uint32_t active = 0;
    for (ControllablePlayer** i = catalog->players; i != catalog->players + catalog->count; ++i) {
        ControllablePlayer* player = *i;
        State state = player->State233Ptr();
        active += !(player->states.current == state);
    }
    if (active < 2 || flag150c || flag150d) return false;
    return !flag7e8;
}

// Slot 136 (0x984d30): Enemy's state of the same slot, but it also follows the way it faces. Once the partner has been held
// for the delay it plays the recovery animation for the one it was in and is released.
// Not yet matched: the original inverts the facing flag with `eor`, where ours compares it with zero, and it sets the return
// value before testing the partner.
int ControllablePlayer::State136(int event) {
    switch (event) {
    case kStateEnter: {
        ShadowAnimatedObject* effect = shadowHandle ? static_cast<ShadowAnimatedObject*>(shadowHandle->object) : nullptr;
        if (effect) effect->visible = 0;
        timer330 = 0.0f;
        return kStateHandled;
    }
    case kStateUpdate: {
        if (flag13c1 != !onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags)->facingLeft) {
            flag13c1 = !onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags)->facingLeft;
        }
        timer330 += Move_FrameDelta;
        BaseCharacter* partner = partnerHandle ? static_cast<BaseCharacter*>(partnerHandle->object) : nullptr;
        if (partner && timer330 > partnerDelay) {
            partner->Dismount();
            int recovery = -1;
            switch (partner->animation) {
            case 44: case 60: recovery = 0; break;
            case 43: case 59: recovery = 1; break;
            case 53: case 69: recovery = 2; break;
            case 54: case 70: recovery = 3; break;
            case 55: case 71: recovery = 4; break;
            case 56: case 72: recovery = 5; break;
            case 57: case 73: recovery = 6; break;
            case 42: case 58: recovery = 7; break;
            }
            if (recovery != -1) partner->PlayAnimation(recovery, 1, 0, 1.0f);
            ReleaseHeld(false, 0.0f, 0.0f);
            states.Transition(State100Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    case kStateExit: {
        ShadowAnimatedObject* effect = shadowHandle ? static_cast<ShadowAnimatedObject*>(shadowHandle->object) : nullptr;
        if (effect) effect->visible = 1;
        return kStateHandled;
    }
    }
    return kStateUnhandled;
}

// Slot 94 (0x980850): knocked out. Unless it's out already it lets go, loses all health and guts, and goes down: from
// state 114 to 116, otherwise to 108, and not at all from 108, 112 or 116.
void ControllablePlayer::Slot94() {
    flag511 = 1;
    if (!IsOut()) {
        Dismount();
        health = 0.0f;
        guts = 0.0f;
        if (!states.IsIn(State108Ptr()) && !states.IsIn(State112Ptr()) && !states.IsIn(State116Ptr())) {
            if (states.IsIn(State114Ptr())) states.Transition(State116Ptr());
            else states.Transition(State108Ptr());
        }
        actionMode = 5;
    }
}

// Slot 122 (0x983310): BaseCharacter's, and exit stops the two actions at +0x1368 and +0x1378 and starts
// the one at +0x1370, with the actor flags' +0x50 and the material modifiers filled in.
int ControllablePlayer::State122(int event) {
    int result = BaseCharacter::State122(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateExit) return kStateUnhandled;
    if (reference1370) {
        if (reference1368) static_cast<ActorEffect*>(reference1368)->Stop();
        if (reference1378) static_cast<ActorEffect*>(reference1378)->Stop();
        ActorEffect* action = static_cast<ActorEffect*>(reference1370);
        onyx::ComponentHandle* handle = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags)->handle50;
        void* target = handle ? handle->object : nullptr;
        void* modifiers = materialModifiers ? materialModifiers->object : nullptr;
        action->target = target;
        action->modifiers = modifiers;
        static_cast<ActorEffect*>(reference1370)->EnsureReady();
    }
    flag511 = 0;
    return kStateHandled;
}

// Slot 237 (0x98f700): stands in animation 30. A stick move goes to state 161 when dashing and 163 otherwise, and how a
// dash is read depends on the player's saved settings. When the animation ends it goes to state 96.
int ControllablePlayer::State237(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        result = Call993350();
        if (result == kStateParentTookOver) break;
        onyx::Vector3 move;
        if (ReadMoveInput(input, &move)) {
            TurnToMoveInput();
            uint64_t dash = input->held & 0x300000000ull;
            if (persistentData.Get()->players[playerIndex].value154) {
                if (dash) states.Transition(State161Ptr());
                else states.Transition(State163Ptr());
            } else {
                if ((input->value1b0 & 1) | dash | (input->value1b0 & 2)) states.Transition(State161Ptr());
                else states.Transition(State163Ptr());
            }
            result = kStateParentTookOver;
            break;
        }
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            result = kStateParentTookOver;
            break;
        }
        result = Slot255(kStateUpdate);
        if (result == kStateParentTookOver) break;
        if (Call9936a0() != kStateParentTookOver) {
            result = kStateHandled;
        } else {
            states.AssertOwner(this);
            result = kStateParentTookOver;
        }
        break;
    }
    default:
        result = kStateUnhandled;
        break;
    case kStateEnter:
        PlayAnimation(30, 0, 0, 1.0f);
        value334 = 0.0f;
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

// Slot 165 (0x9875b0): stops and attacks on the spot, back to standing when the animation ends.
// Not yet matched: the original keeps `this` in x20 and the result in x19, and ours the other way round.
int ControllablePlayer::State165(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            result = kStateParentTookOver;
            break;
        }
    case kStateExit:
        states.AssertOwner(this);
        result = kStateHandled;
        break;
    default:
        result = kStateUnhandled;
        break;
    case kStateEnter:
        result = kStateHandled;
        StartAttack(&attack990, false, 1, nullptr);
        motion.x = 0.0f;
        PlayAnimation(10, false, true, 1.0f);
        break;
    case kStateEvent3:
        break;
    }
    return result;
}

}  // namespace SPTG
