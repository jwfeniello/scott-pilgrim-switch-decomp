// SPTG::AnimatedAiActor's own functions: the ones BaseCharacter and InteractiveObject inherit or call. See
// BaseCharacter.h for the class.
#include "BaseCharacter.h"

extern "C" int32_t Attack_NextId;   // 0x1925328

namespace SPTG {

// Starts an animation. With a partner whose transform has a parent, also takes the partner's facing.
void AnimatedAiActor::PlayAnimation(int anim, bool loop, bool scaled, float speed) {
    onyx::Get<AnimationController, kAnimationControllerType>(animationHandle)->Play(anim, loop);
    if (partnerHandle && partnerHandle->object) {
        BaseCharacter* partner = static_cast<BaseCharacter*>(partnerHandle->object);
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        onyx::Transform* transform = onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform);
        void** parent = static_cast<void**>(transform->hierarchy);
        if (parent && *parent) {
            ActorObject* other = onyx::Find<ActorObject, onyx_types::type_6492d61d>(partner->actorObject);
            ActorFlags* from = onyx::Find<ActorFlags, 0x2eae5813u>(other->flags);
            ActorFlags* flags = onyx::Find<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->flags);
            flags->facingLeft = from->facingLeft;
            flags->flag7a = from->flag7a;
        }
    }
    if (scaled) speed *= SpeedScale();
    SetAnimationSpeed(speed);
    animation = anim;
}

// Slot 28 (0x93fcf0): which way the character faces.
void AnimatedAiActor::SetFacing(int left) {
    ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags);
    flags->facingLeft = left & 1;
}

// At or below ground height and not moving up.
bool AnimatedAiActor::IsOnGround() {
    onyx::Transform* transform = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->transform);
    if (groundHeight < (int)transform->position.z) return false;
    if (__builtin_fabsf(motion.z) <= 0.000001f) return true;
    return motion.z < 0.0f;
}

// Slot 65 (0x941790): adds to the value at +0x160, kept between zero and the
// limit from slot 57.
void AnimatedAiActor::GainHealth(float amount) {
    health += amount;
    float limit = MaxHealth();
    float value = health;
    if (value < 0.0f) {
        value = 0.0f;
    } else if (value > limit) {
        value = limit;
    }
    health = value;
}

// Loses health, down to zero, and returns how much was taken.
float AnimatedAiActor::LoseHealth(float amount) {
    float first = health;
    float taken;
    if (first >= amount) {
        health = first - amount;
        taken = amount;
    } else {
        health = 0.0f;
        taken = first;
    }
    return taken;
}

// Sets a point to move to.
void AnimatedAiActor::Slot74(const float* point, bool flag, float value) {
    value174 = 0.0f;
    value178 = value;
    point168.x = point[0];
    point168.y = point[1];
    point168.z = point[2];
    flag17c = flag;
}

// Sets the animation speed, unless a hit is holding the animation.
void AnimatedAiActor::SetAnimationSpeed(float speed) {
    animationSpeed = speed;
    if (hitStopLeft <= 0.0f) onyx::Get<AnimationController, kAnimationControllerType>(animationHandle)->SetSpeed(speed);
}

// Turns round.
void AnimatedAiActor::TurnAround() {
    SetFacing(!onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags)->facingLeft);
}

// Starts an attack: copies it, gives it an id, and scales it for the attacker.
int AnimatedAiActor::StartAttack(Attack* attack, bool flag, int source, BaseCharacter* attacker) {
    attackLanded = 0;
    *currentAttack = *attack;
    int id = ++Attack_NextId;
    AnimatedAiActor* scaling = source == 1 ? this : reinterpret_cast<AnimatedAiActor*>(attacker);
    currentAttack->id = id;
    float scale = scaling->Slot58(flag);
    currentAttack->damage = (scale * Slot77()) * currentAttack->damage;
    float value = scaling->Slot40();
    currentAttack->value40 = value;
    currentAttack->SetSource(source, attacker);
    value15c = 0;
    int last = currentAttack->id;
    recentHits[0] = recentHits[1];
    recentHits[1] = recentHits[2];
    recentHits[2] = recentHits[3];
    recentHits[3] = last;
    return currentAttack->id;
}

}  // namespace SPTG
