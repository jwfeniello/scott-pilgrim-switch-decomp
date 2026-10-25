// SPTG::Enemy's own virtuals other than its states (see
// docs/GAME_CLASSES.md#enemy-states). Names are provisional.
#include "Enemy.h"

namespace SPTG {

// Slot 16 (0x9e1fa0): the actor update. An enemy that is not held is released
// (slot 71) when its attachment's ID is outside 10001-999999. The scaled values
// are then reset to their bases and scaled again (slot 229).
void Enemy::Update() {
    UpdateEnemy();
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
    return TakeEnemyDamage(hit, other);
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
    scaled910 = values->scale * base90c + extra;
    Slot66();
    value32c = Slot150();
}

// Slot 4 (0x9e06c0): BaseCharacter's serialization, then Enemy's own fields
// (see Archive.h): two handles, two component slots and the settings from
// +0x8f8 to +0xa20.
void Enemy::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    BaseCharacter::Slot4(archive, source);
    onyx::TransferHandle(handle788, archive, source);
    onyx::TransferHandle(handle790, archive, source);
    AssignComponentSlot<7752160u, 1051727473u>(&slot798, source);
    AssignComponentSlot<7998976u, 1330418336u>(&scaling, source);
    onyx::TransferAs<uint32_t>(archive, value8f8);
    onyx::TransferAs<uint32_t>(archive, value8fc);
    onyx::TransferAs<uint32_t>(archive, value900);
    onyx::TransferAs<uint32_t>(archive, specialType);
    onyx::Transfer(archive, specialSpeedScale);
    onyx::Transfer(archive, base90c);
    onyx::TransferAs<uint32_t>(archive, value914);
    onyx::Transfer(archive, value918);
    onyx::Transfer(archive, attackRange);
    onyx::Transfer(archive, chance);
    onyx::Transfer(archive, value924);
    onyx::Transfer(archive, value928);
    onyx::Transfer(archive, value92c);
    onyx::Transfer(archive, value930);
    onyx::Transfer(archive, value934);
    onyx::Transfer(archive, value938);
    onyx::Transfer(archive, value93c);
    onyx::Transfer(archive, flag940);
    onyx::Transfer(archive, range0.min);
    onyx::Transfer(archive, range0.max);
    onyx::Transfer(archive, range0.extra);
    onyx::Transfer(archive, range1.min);
    onyx::Transfer(archive, range1.max);
    onyx::Transfer(archive, range1.extra);
    onyx::Transfer(archive, range2.min);
    onyx::Transfer(archive, range2.max);
    onyx::Transfer(archive, range2.extra);
    onyx::Transfer(archive, range3.min);
    onyx::Transfer(archive, range3.max);
    onyx::Transfer(archive, range3.extra);
    onyx::Transfer(archive, flag974);
    onyx::Transfer(archive, flags978);
    onyx::Transfer(archive, value97c);
    onyx::Transfer(archive, value980);
    onyx::Transfer(archive, delay984);
    onyx::Transfer(archive, value988);
    onyx::Transfer(archive, value98c);
    onyx::Transfer(archive, value990);
    onyx::Transfer(archive, counterChanceHealthy);
    onyx::Transfer(archive, counterChance);
    onyx::Transfer(archive, counterHealthThreshold);
    onyx::Transfer(archive, followUpChance);
    onyx::Transfer(archive, value9a4);
    onyx::Transfer(archive, assistChance);
    onyx::Transfer(archive, delay9ac);
    onyx::Transfer(archive, dashSpeed);
    onyx::Transfer(archive, dashHold);
    onyx::Transfer(archive, dashDelayBase);
    onyx::Transfer(archive, value9bc);
    onyx::Transfer(archive, value9c8);
    onyx::Transfer(archive, partnerDelay);
    onyx::Transfer(archive, removeFlag);
    onyx::Transfer(archive, flag9d1);
    onyx::Transfer(archive, blinkDuration);
    onyx::Transfer(archive, blinkPeriod);
    onyx::Transfer(archive, value9dc);
    onyx::Transfer(archive, value9e0);
    onyx::Transfer(archive, bonus);
    onyx::Transfer(archive, value9e8);
    onyx::Transfer(archive, bonusMode2);
    onyx::Transfer(archive, value9f0);
    onyx::Transfer(archive, bonusMode3);
    onyx::Transfer(archive, value9f8);
    onyx::Transfer(archive, value9fc);
    onyx::Transfer(archive, valueA00);
    onyx::Transfer(archive, valueA04);
    onyx::TransferAs<uint32_t>(archive, valueA08);
    onyx::Transfer(archive, valueA0c);
    onyx::Transfer(archive, valueA10);
    onyx::Transfer(archive, valueA14);
    onyx::Transfer(archive, valueA18);
    onyx::Transfer(archive, valueA1c);
    onyx::Transfer(archive, valueA20);
    onyx::Transfer(archive, valueB4c);
    onyx::Transfer(archive, valueB50);
}

}  // namespace SPTG
