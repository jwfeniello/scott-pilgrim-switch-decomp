// SPTG::Enemy's own virtuals other than its states (see
// docs/GAME_CLASSES.md#enemy-states). Names are provisional.
#include "Enemy.h"

namespace SPTG {

// Slot 16 (0x9e1fa0): the actor update. An enemy that is not held is released
// (slot 71) when its attachment's ID is outside 10001-999999. The scaled values
// are then reset to their bases and scaled again (slot 229).
void Enemy::Update() {
    BaseCharacter::Update();
    if (!IsHeld()) {
        const Holder* h = attachment ? attachment : &NoHolder;
        if (h->id - 10001u >= 989999u) Release();
    }
    scaled9c = base98;
    scaled2f8 = base2f4;
    scaled910 = specialAttack.base74;
    Slot229();
}

// Slot 41 (0x9cd820): raises +0x130, runs BaseCharacter's slot 41 and starts the
// attack at +0x258.
void Enemy::Slot41(bool a, bool b, bool c, void* data, BaseCharacter* other, float scale, float f1, float f2, float f3) {
    flag130 = 1;
    BaseCharacter::Slot41(a, b, c, data, other, scale, f1, f2, f3);
    StartAttack(&attack258, false, 3, other);
}

// Slot 45 (0x9cd870): 0 with +0x130 set, 3 in action mode 8, else the
// partner's slot 45 (1 without a partner).
int Enemy::Slot45() {
    if (flag130) return 0;
    if (actionMode == 8) return 3;
    BaseCharacter* partner = partnerHandle ? static_cast<BaseCharacter*>(partnerHandle->object) : nullptr;
    if (partner) return partner->Slot45();
    return 1;
}

// Slot 69 (0x9e2030): takes the damage through BaseCharacter, raises +0x811,
// sends the current state the damage event and passes the damage to the other
// character (slot 43) and to 0x995a30.
float Enemy::TakeDamage(const void* hit, BaseCharacter* other) {
    float damage = BaseCharacter::TakeDamage(hit, other);
    flag811 = 1;
    states.Send(kStateDamaged);
    if (other) other->Slot43(damage);
    Apply995a30(damage);
    return damage;
}

// Slot 229 (0x9d9bc0): scales the three base values by the scaling's factor and
// adds the bonus for its mode (3, 2 or any other), then runs slot 66 and resets
// +0x32c to slot 150. Not yet matched (not credited): the original computes the
// address of `bonus` before comparing the mode with 2, and every selection
// tried so far computes it after. The rest matches.
void Enemy::Slot229() {
    int mode = scaling.Get()->mode;
    int extra = mode == 3 ? bonusMode3 : mode == 2 ? bonusMode2 : bonus;
    EnemyScaling* values = scaling.Get();
    scaled9c = base98 * values->scale + extra;
    scaled2f8 = values->scale * base2f4 + extra;
    scaled910 = values->scale * specialAttack.base74 + extra;
    Slot66();
    value32c = Slot150();
}

}  // namespace SPTG
