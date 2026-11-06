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
    Vector3 move = particle->velocity * time;
    particle->position.x = move.x + particle->position.x;
    particle->position.y = move.y + particle->position.y;
    particle->position.z = move.z + particle->position.z;
    return false;
}

bool EffectAngle::Step(ParticleData* particle, float time) {
    if (Over(particle)) return true;
    Vector3 move = particle->velocity * time;
    particle->position.x = move.x + particle->position.x;
    particle->position.y = move.y + particle->position.y;
    particle->position.z = move.z + particle->position.z;
    return false;
}

bool EffectRotate::Step(ParticleData* particle, float time) {
    if (Over(particle)) return true;
    float t = particle->age / duration;
    particle->rotation.x += (particle->spin.x + particle->spin.x * spinGain.x * t) * time;
    particle->rotation.y += (particle->spin.y + particle->spin.y * spinGain.y * t) * time;
    particle->rotation.z += (particle->spin.z + particle->spin.z * spinGain.z * t) * time;
    return false;
}

}  // namespace Effect
}  // namespace Particle
}  // namespace Graphics
}  // namespace Onyx
