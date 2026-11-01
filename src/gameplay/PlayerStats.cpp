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

}  // namespace SPTG
