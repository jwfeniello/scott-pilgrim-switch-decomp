// SPTG::AnimatedAiActor's own functions: the ones BaseCharacter and InteractiveObject inherit or call. See
// BaseCharacter.h for the class.
#include "Camera.h"
#include "OnyxEvents.h"

extern "C" int32_t Attack_NextId;   // 0x1925328
extern "C" void Transform_AddChild(onyx::Transform* parent, onyx::Transform* child, bool keepPosition);   // 0x68f0e0

namespace SPTG {

// An attack landed.
void AnimatedAiActor::AttackLanded(AnimatedAiActor* target) {
    HoldForLandedAttack();
}

// Pauses or resumes the animation.
void AnimatedAiActor::SetAnimationPaused(bool paused) {
    onyx::Get<AnimationController, kAnimationControllerType>(animationHandle)->SetPaused(paused);
}

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

// Slot 2 (0x93f1f0, shared by the actor classes): activation. Sets bit 1 of the
// component flags, sends the actor object's event 0x255c0afe, refills health and
// plays animation 0.
void AnimatedAiActor::EnsureReady() {
    componentFlags |= 2;
    ActorObject* actor = onyx::Find<ActorObject, 0x6492d61du>(actorObject);
    onyx::SendEvent<0x255c0afeu>(actor->readyCallback, actor->readyTarget);
    health = MaxHealth();
    PlayAnimation(0, true, false, 1.0f);
}

// Slot 24 (0x93fa80): plays an animation with flags: bit 0 faces left, bit 1
// raises +0x7a of the actor flags, and bit 2 loops the animation.
void AnimatedAiActor::PlayFacingAnimation(int animation, uint8_t flags) {
    bool loop = (flags & 4) != 0;
    ActorFlags* actorFlags = onyx::Find<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags);
    actorFlags->facingLeft = flags & 1;
    actorFlags->flag7a = (flags & 2) != 0;
    PlayAnimation(animation, loop, false, 1.0f);
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
    sentEvents = 0;
    int last = currentAttack->id;
    recentHits[0] = recentHits[1];
    recentHits[1] = recentHits[2];
    recentHits[2] = recentHits[3];
    recentHits[3] = last;
    return currentAttack->id;
}

// Slot 16: with a shadow, moves it to the actor and makes it a child of the actor's transform. Also copies +0x120
// to the flags.
void AnimatedAiActor::Update() {
    flag50 = 0;
    flag51 = 1;
    ShadowAnimatedObject* shadow = shadowHandle ? static_cast<ShadowAnimatedObject*>(shadowHandle->object) : nullptr;
    ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
    ActorFlags* flags = onyx::Find<ActorFlags, 0x2eae5813u>(actor->flags);
    if (shadow) {
        ActorObject* again = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        onyx::Vector3 position = onyx::Get<onyx::Transform, onyx::kTransform>(again->transform)->Position();
        onyx::Find<onyx::Transform, onyx::kTransform>(shadow->transform)->SetPosition(position);
        onyx::Transform* parent = onyx::Find<onyx::Transform, onyx::kTransform>(again->transform);
        Transform_AddChild(parent, onyx::Find<onyx::Transform, onyx::kTransform>(shadow->transform), true);
        flags->SetShadow(shadow, false);
    }
    flags->value7c = value120;
}

// Follows the playfield: takes its ground height, snaps to it when the playfield says to and the actor isn't moving
// up or down, and tells the shadow.
void AnimatedAiActor::FollowPlayfield() {
    onyx::ComponentHandle* handle = onyx::Get<ActorObject, onyx_types::type_6492d61d>(actorObject)->playfield;
    if (!handle) return;
    PlayfieldCollision* field = static_cast<PlayfieldCollision*>(handle->object);
    if (!field) return;
    if (field->IsA(PlayfieldCollision::kType) && (field->componentFlags & 1)) {
        if (field->hasGround) groundHeight = field->groundHeight;
        onyx::Vector3 position = onyx::Find<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->transform)->Position();
        bool snap = field->hasGround && field->snapsToGround;
        float z = position.z;
        if (snap && __builtin_fabsf(motion.z) <= 0.000001f) {
            z = groundHeight;
            position.z = z;
            onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->MoveTo(position);
        }
        if (IsOnGround()) lastGroundHeight = groundHeight;
        if (shadowHandle && shadowHandle->object) static_cast<ShadowAnimatedObject*>(shadowHandle->object)->SetGroundHeight(groundHeight, z);
    }
}

// Thrown or knocked away: sets the motion and moves it by the throw offset, both by the facing unless a direction is
// given. Not yet matched (not credited): the last two additions have their operands the other way round.
int AnimatedAiActor::Slot41(bool a, bool b, bool c, void* data, BaseCharacter* other, float scale, float f1, float f2, float f3) {
    float sign = f2;
    if (f2 == 0.0f) sign = FacingSign();
    float speed = __builtin_fabsf(f1);
    float sx = throwSpeed * scale;
    float sy = throwY * scale;
    float sz = throwZ * scale;
    float x = speed + sx;
    float y = sy + 0.0f;
    float z = sz + 0.0f;
    motion.y = y;
    motion.z = z;
    motion.x = sign * x;
    ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
    onyx::Transform* transform = onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform);
    float oy = throwOffset.y;
    onyx::Vector3 position = transform->Position();
    float ox = sign * throwOffset.x;
    float oz = throwOffset.z;
    onyx::Vector3 moved;
    moved.x = ox + position.x;
    moved.y = oy + position.y;
    moved.z = oz + position.z;
    onyx::Find<onyx::Transform, onyx::kTransform>(actor->transform)->SetPosition(moved);
    if (flag141) Call944010();
    return 0;
}

// The camera block's edges when one is active, otherwise the camera position and a 384 by 216 view. Not yet matched
// (not credited): the original moves the outer two edges through integer registers.
void AnimatedAiActor::GetScreenRect(ScreenRect* out) {
    LevelCamera* levelCamera = onyx::Find<LevelCamera, onyx_types::type_67f2aa4d>(camera.Get()->levelCamera);
    CameraBlock* block = onyx::Get<CameraBlock, onyx_types::type_55e5c01c>(levelCamera->block);
    ScreenRect rect;
    if (block->active) {
        rect = onyx::Get<CameraBlock, onyx_types::type_55e5c01c>(levelCamera->block)->rect;
    } else {
        onyx::Transform* view = onyx::Get<onyx::Transform, onyx::kTransform>(levelCamera->transform);
        float left = view->position.x;
        float bottom = view->position.y;
        rect.left = left;
        rect.top = bottom + 216.0f;
        rect.right = left + 384.0f;
        rect.bottom = bottom;
    }
    *out = rect;
}

// Whether the actor stands inside the screen rectangle.
bool AnimatedAiActor::IsOnScreen() {
    float x = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->transform)->position.x;
    float y = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags)->valueFc;
    ScreenRect rect;
    GetScreenRect(&rect);
    return y > rect.bottom && y < rect.top && x < rect.right && x > rect.left;
}

// Slot 15 (0x862680): bit 2 of the component flags, while +0x50 is clear.
// Not yet matched: the original masks the flags with 4 before shifting them, and ours drops the mask.
bool FlaggedComponent::IsActive() {
    return !flag50 & ((componentFlags & 4) != 0);
}

// The type tests (slot 12): each class's own type or one of its base's (SPTG_TYPE).
bool AnimatedAiActor::IsA(uint32_t type) { return IsType(type); }   // 0x948080

}  // namespace SPTG
