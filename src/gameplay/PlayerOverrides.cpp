// SPTG::ControllablePlayer overrides that forward to BaseCharacter and act on the
// result. Names are provisional.
#include "BaseCharacter.h"

namespace SPTG {

// What ActorObject::playfield holds when it passes IsA(0x21350526).
struct PlayfieldObject : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6();
    virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual bool IsA(uint32_t type);   // slot 12
    char padding_8[0x30];
    uint32_t flags;                    // +0x38
    char padding_3c[0xdc];
    int32_t value118;                  // +0x118
};

void ControllablePlayer::Slot76() {
    ActorObject* actor = onyx::Get<ActorObject, onyx_types::type_6492d61d>(actorObject);
    onyx::ComponentHandle* handle = actor->playfield;
    if (!handle) return;
    PlayfieldObject* object = static_cast<PlayfieldObject*>(handle->object);
    if (!object) return;
    if (object->IsA(0x21350526u) && (object->flags & 1) && (actionMode != 5 || object->value118 != 12))
        BaseCharacter::Slot76();
}

void ControllablePlayer::Slot87(void* data, bool a, bool b, BaseCharacter* other) {
    BaseCharacter::Slot87(data, a, b, other);
    if (other) {
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(other->actorObject);
        ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags);
        flag13c1 = flags->facingLeft ^ 1;
    }
}

bool ControllablePlayer::Slot88(float amount) {
    flag14f9 = 0;
    State state = State114Ptr();
    if (states.current == state) {
        Slot65(amount);
        CharacterMessage message(27, nullptr);
        message.receiver = this;
        OnMessage(&message);
        states.Transition(State243Ptr());
        return true;
    }
    return false;
}

// Reached through the singleton at +0x7b8: three bytes for each entry from +0xb9.
struct PlayerTable {
    char padding_0[0xbb];
    struct { uint8_t flag; uint8_t rest[2]; } entries[1];   // +0xbb
};

void ControllablePlayer::Slot20() {
    if (!flag1525) return;
    if (flag13b1) {
        PlayerInput* state = input;
        if (!state->flag8) {
            uint64_t held = state->held;
            state->held = 0;
            state->value1d0 = held;
            state->value1b0 = 0;
            return;
        }
        state->flag1e4 = 0;
        PlayerTable* table = reinterpret_cast<Singleton<PlayerTable>*>(&slot7b8)->Get();
        PlayerInput* current = input;
        uint32_t index = current->value1f0 - 1;
        table->entries[index].flag = 0;
        flag13b1 = 0;
        current->flag8 = 0;
    }
    Notify995d50();
}

}  // namespace SPTG
