// Onyx::Graphics::Particle: particle effects, emitters and volumes. Class names are the RTTI names; field and method
// names are provisional, offsets come from the code that uses them.
#pragma once
#include "OnyxComponents.h"
#include "Random.h"

namespace Onyx {
namespace Graphics {
namespace Particle {

using onyx::Vector3;

// Component-wise vector arithmetic as the particle code uses it.
__attribute__((always_inline)) inline Vector3 operator+(const Vector3& a, const Vector3& b) {
    return Vector3(a.x + b.x, a.y + b.y, a.z + b.z);
}
__attribute__((always_inline)) inline Vector3 operator*(const Vector3& a, const Vector3& b) {
    return Vector3(a.x * b.x, a.y * b.y, a.z * b.z);
}
__attribute__((always_inline)) inline Vector3 operator*(float s, const Vector3& v) {
    return Vector3(s * v.x, s * v.y, s * v.z);
}
// A value between min and max from the game's generator (Random.h; the engine shares it).
__attribute__((always_inline)) inline float RandomBetween(float min, float max) {
    return min + (max - min) * SPTG::RandomFloat();
}

// One live particle, as the effects step it.
struct ParticleData {
    Vector3 position;            // +0x0
    Vector3 velocity;            // +0xc: added to the position by EffectTransform
    char padding_18[0xc];
    Vector3 spin;                // +0x24: EffectRotate turns the particle by this, scaled over the effect
    char padding_30[0xc];
    Vector3 rotation;            // +0x3c
    char padding_48[0x28];
    float age;                   // +0x70: time since the effect started on it
};

namespace Effect {

// The base of every effect component (vtable 0x18a6898, 0x58 bytes). Slot 13 starts a particle, slot 14 steps it
// and says whether the effect has run its course.
struct EffectBase : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Start(ParticleData* particle);                 // slot 13
    virtual bool Step(ParticleData* particle, float time);      // slot 14
    virtual void Slot15(); virtual void Slot16(); virtual void Slot17();

    char padding_8[0x44];
    float duration;              // +0x4c: 1 by default
    float startSpread;           // +0x50: a particle starts at a random age below this
    int32_t value54;             // +0x54

    // Starts the particle at a random age below startSpread (the base's slot 13, which some effects repeat).
    __attribute__((always_inline)) void StartAge(ParticleData* particle) {
        particle->age = RandomBetween(0.0f, startSpread);
    }
    // Whether the particle is past the effect's end, to within 2e-6.
    __attribute__((always_inline)) bool Over(const ParticleData* particle) const {
        return particle->age > duration || __builtin_fabsf(particle->age - duration) <= 2e-6f;
    }
};

struct EffectDelay : EffectBase {
    void Start(ParticleData* particle) override;                // slot 13 (0xb29240)
    bool Step(ParticleData* particle, float time) override;     // slot 14 (0xb29360)
};
struct EffectPredicate : EffectBase {
    void Start(ParticleData* particle) override;                // slot 13 (0xb26d40)
};
struct EffectSpawner : EffectBase {
    bool Step(ParticleData* particle, float time) override;     // slot 14 (0xb22f20)
};
// Moves the particle by its velocity.
struct EffectTransform : EffectBase {
    bool Step(ParticleData* particle, float time) override;     // slot 14 (0xb213a0)
};
struct EffectAngle : EffectBase {
    bool Step(ParticleData* particle, float time) override;     // slot 14 (0xb2b2e0)
};
// Turns the particle by its spin, which grows by +0x74 times the spin over the effect.
struct EffectRotate : EffectBase {
    bool Step(ParticleData* particle, float time) override;     // slot 14 (0xb25de0)
    char padding_58[0x1c];
    Vector3 spinGain;            // +0x74
};

}  // namespace Effect
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
