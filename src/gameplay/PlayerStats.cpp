// SPTG::ControllablePlayer's stat-derived values and health changes. The stats
// at +0x860..+0x86c scale per-character values at +0x874..+0x898: a stat of 100
// reaches a base value's limit, or adds that many percent. What each stat means
// is not established, so the fields keep their offsets as names.
#include "BaseCharacter.h"

namespace SPTG {

// The compare order matters: std::max and std::min's, which pass NaN through.
template<class T> __attribute__((always_inline)) inline const T& Max(const T& a, const T& b) { return a < b ? b : a; }
template<class T> __attribute__((always_inline)) inline const T& Min(const T& a, const T& b) { return b < a ? b : a; }

template<class T> __attribute__((always_inline)) inline T Clamp(const T& value, const T& low, const T& high) {
    T result = low;
    if (!(value < low)) {
        result = value;
        if (value > high) result = high;
    }
    return result;
}

// A value that moves from `low` towards `high` as the stat goes from 0 to 100.
__attribute__((always_inline)) inline float Scaled(const float& low, const float& high, const float& stat) {
    return Clamp(low + (high - low) / 100.0f * Max(stat, 0.0f), low, high);
}

float ControllablePlayer::Slot40() {
    return Min(Max(Max(statStrength, 0.0f) * (Max(value898, 0.0f) / 100.0f), 0.0f), 100.0f);
}

int ControllablePlayer::Slot45() {
    if (partnerHandle && partnerHandle->object) return static_cast<BaseCharacter*>(partnerHandle->object)->Slot45();
    return 0;
}

float ControllablePlayer::MaxHealth() {
    return Scaled(value874, base98, statDefense);
}

float ControllablePlayer::Slot58(bool flag) {
    const float& stat = flag ? statWill : statStrength;
    const float& percent = flag ? value88c : value890;
    return percent / 100.0f * Max(stat, 0.0f) + 1.0f;
}

float ControllablePlayer::Slot59() {
    return value878 / 10000.0f * Max(statDefense, 0.0f);
}

float ControllablePlayer::SpeedScale() {
    float scale = 1.0f;
    if (value13d8 > 0.0f) scale = value12b4;
    return scale * (value884 / 100.0f * Max(statSpeed, 0.0f) + 1.0f);
}

// Takes damage from +0x160, then any remainder from +0x32c; returns what was taken.
float ControllablePlayer::LoseHealth(float amount) {
    float current = health;
    float taken;
    if (current >= amount) {
        taken = amount;
        health = current - amount;
    } else {
        taken = current;
        health = 0.0f;
    }
    if (taken < amount && guts > 0.0f) {
        float reserve = guts - (amount - taken);
        guts = reserve;
        if (reserve < 0.0f) {
            taken = reserve + amount;
            guts = 0.0f;
        } else {
            taken = amount;
        }
    }
    OnHealthLost(taken);
    return taken;
}

void ControllablePlayer::GainHealth(float amount) {
    if (flag7e8) return;
    float room = MaxHealth() - health;
    float change = room > amount ? amount : room;
    health += amount;
    float limit = MaxHealth();
    float value = health;
    health = Clamp(value, 0.0f, limit);
    if (__builtin_fabsf(change) <= 0.000001f) return;
    OnHealthChanged(change);
}

void ControllablePlayer::RestoreHealth() {
    float change = MaxHealth() - health;
    health = MaxHealth();
    OnHealthChanged(change);
}

float ControllablePlayer::Slot149() {
    return Scaled(value87c, value2fc, statDefense);
}

float ControllablePlayer::MaxGuts() {
    return Scaled(value880, base2f4, statWill);
}

float ControllablePlayer::GutsCostScale() {
    float stat = Max(1.0f, Max(statWill, 0.0f));
    return Max(1.0f - value888 * stat / 100.0f / 100.0f, 0.1f);
}

float ControllablePlayer::Slot152() {
    return value894 / 100.0f * Max(statStrength, 0.0f) + 1.0f;
}

// What an item does when used. Returns whether any of its effects did anything.
bool ControllablePlayer::UseItem(Item* item) {
    if (!item->effectCount) return false;
    bool used = false;
    for (uint32_t i = 0; i < item->effectCount; ++i) {
        ItemEffect& effect = item->effects[i];
        switch (effect.kind) {
        case kItemHealth:
            GainHealth(effect.amount);
            used = true;
            break;
        case kItemGuts:
            AddGuts(effect.amount);
            used = true;
            break;
        case kItemExperience:
            GainExperience(effect.amount);
            used = true;
            break;
        case kItemLives: {
            uint32_t lives = effect.amount + value870;
            bool over = lives > 9;
            value870 = over ? 9 : lives;
            used |= !over;
            break;
        }
        case kItemDefense: {
            float amount = effect.amount;
            float before = statDefense;
            float after = Clamp(before + amount, 0.0f, 100.0f);
            bool changed = before != after;
            statDefense = after;
            used |= changed;
            break;
        }
        case kItemSpeed: {
            float amount = effect.amount;
            float before = statSpeed;
            float after = Clamp(before + amount, 0.0f, 100.0f);
            bool changed = before != after;
            statSpeed = after;
            used |= changed;
            break;
        }
        case kItemWill: {
            float amount = effect.amount;
            float before = statWill;
            float after = Clamp(before + amount, 0.0f, 100.0f);
            bool changed = before != after;
            statWill = after;
            used |= changed;
            break;
        }
        case kItemStrength: {
            float amount = effect.amount;
            float before = statStrength;
            float after = Clamp(before + amount, 0.0f, 100.0f);
            bool changed = before != after;
            statStrength = after;
            used |= changed;
            break;
        }
        case kItemFlag:
            used = true;
            flag13f8 = 1;
            break;
        case kItemLearnMove:
            used |= LearnMove(effect.move);
            break;
        case kItemEffect10:
            used |= Effect10();
            break;
        }
    }
    if (!used) return false;
    CharacterMessage message(7, nullptr);
    message.receiver = this;
    message.dataValue = item->id;
    OnMessage(&message);
    return true;
}

}  // namespace SPTG
