// Onyx::Graphics::Particle::Effect: what each effect does to a particle as it steps (slot 14) and as it starts it
// (slot 13). See Particle.h.
#include "Particle.h"

namespace Onyx {
namespace Graphics {
namespace Particle {
namespace Effect {

void EffectBase::Start(ParticleData* particle) {
    StartAge(particle);
}

void EffectDelay::Start(ParticleData* particle) {
    StartAge(particle);
}

void EffectPredicate::Start(ParticleData* particle) {
    StartAge(particle);
}

void EffectPhysic::EnsureReady() {
    componentFlags |= 2;
    inverseMass = mass > 0.0f ? 1.0f / mass : 0.0f;
    force = gravity * mass;
}

// Not yet matched: the original reads both cell counts first and stores its zero pairs from a vector register.
void EffectTextureStep::EnsureReady() {
    componentFlags |= 2;
    transform[0] = Vec3(1.0f / columns, 0.0f, 0.0f);
    transform[1] = Vec3(0.0f, 1.0f / rows, 0.0f);
    transform[2] = Vec3(0.0f, 0.0f, 1.0f);
    transform[3] = Vec3(0.0f, 0.0f, 0.0f);
}

bool EffectDelay::Step(ParticleData* particle, float time) {
    if (Over(particle)) return true;
    return false;
}

bool EffectSpawner::Step(ParticleData* particle, float time) {
    if (Over(particle)) return true;
    return false;
}

bool EffectTransform::Step(ParticleData* particle, float time) {
    if (Over(particle)) return true;
    Vec3 move = particle->velocity * time;
    particle->position.v[0] = move.v[0] + particle->position.v[0];
    particle->position.v[1] = move.v[1] + particle->position.v[1];
    particle->position.v[2] = move.v[2] + particle->position.v[2];
    return false;
}

bool EffectAngle::Step(ParticleData* particle, float time) {
    if (Over(particle)) return true;
    Vec3 move = particle->velocity * time;
    particle->position.v[0] = move.v[0] + particle->position.v[0];
    particle->position.v[1] = move.v[1] + particle->position.v[1];
    particle->position.v[2] = move.v[2] + particle->position.v[2];
    return false;
}

// Not yet matched: the original keeps spin.z in s2 and spin.xy in d5 and multiplies t first in z; every spelling tried
// gets one of the three wrong.
bool EffectRotate::Step(ParticleData* particle, float time) {
    if (Over(particle)) return true;
    float t = particle->age / duration;
    Vec3 turn((particle->spin.v[0] + particle->spin.v[0] * spinGain.v[0] * t) * time,
              (particle->spin.v[1] + particle->spin.v[1] * spinGain.v[1] * t) * time,
              (particle->spin.v[2] + particle->spin.v[2] * spinGain.v[2] * t) * time);
    particle->rotation.v[0] = turn.v[0] + particle->rotation.v[0];
    particle->rotation.v[1] = turn.v[1] + particle->rotation.v[1];
    particle->rotation.v[2] = turn.v[2] + particle->rotation.v[2];
    return false;
}

// Starts its clock again, takes the longest of its effects' durations and resets each effect once. Not yet matched:
// the first loop steps its pointer before its counter here, after it in the original.
void EffectGroup::Reset() {
    time = 0.0f;
    uint32_t count = effects.count;
    float longest = 0.0f;
    for (uint32_t i = 0; i < count; ++i) {
        if (EffectBase* effect = EffectIn(effects.items[i])) longest = longest > effect->duration ? longest : effect->duration;
    }
    duration = longest;
    for (uint32_t i = 0; i < count; ++i) {
        EffectBase* effect = EffectIn(effects.items[i]);
        if (effect && effect->stamp != stamp) {
            effect->stamp = stamp;
            effect->Reset();
        }
    }
}

// Runs its clock, back to 0 past the duration, and ticks each effect once.
void EffectGroup::Tick(float time) {
    this->time += time;
    if (this->time > duration) this->time = 0.0f;
    uint32_t count = effects.count;
    for (uint32_t i = 0; i < count; ++i) {
        EffectBase* effect = EffectIn(effects.items[i]);
        if (effect && effect->stamp != stamp) {
            effect->stamp = stamp;
            effect->Tick(time);
        }
    }
}

void EffectGroup::Slot17(void* value) {
    uint32_t count = effects.count;
    for (uint32_t i = 0; i < count; ++i) {
        if (EffectBase* effect = EffectIn(effects.items[i])) effect->Slot17(value);
    }
}

}  // namespace Effect
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
