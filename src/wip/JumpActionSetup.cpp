// WIP: jump action setup (0x8e8dd0, 1,048 bytes) and landing predicate (0x9415b0).
// Not credited. Build: Clang 8, -O2 -fomit-frame-pointer -fno-pic
// -fno-delete-null-pointer-checks. Setup reaches 1,036 bytes: the original builds
// the by-value MoveTo argument inside each start branch and SLP-adds X/Y there.
// See docs/GAMEPLAY_COMPONENTS.md.
extern "C" float sqrtf(float);
extern "C" float fabsf(float);
#include "gameplay/OnyxComponents.h"
using namespace onyx;

struct Facing : Component { char padding[0x79 - 8]; uint8_t faces_left; };
struct ActorObject : Component {
    char padding[0x48];
    ComponentHandle* playfield;  // 0x50
    ComponentHandle* facing;     // 0x58
    ComponentHandle* transform;  // 0x60
};
static_assert(__builtin_offsetof(ActorObject, transform) == 0x60, "ActorObject transform");
static_assert(__builtin_offsetof(Facing, faces_left) == 0x79, "Facing flag");

struct Actor : Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Slot13(); virtual void Slot14(); virtual void Slot15(); virtual void Slot16(); virtual void Slot17();
    virtual void Slot18(); virtual void Slot19(); virtual void Slot20(); virtual void Slot21(); virtual void Slot22();
    virtual void SetMotionMode(uint32_t, uint32_t, uint32_t);  // +0xb8
    virtual void Slot24(); virtual void Slot25(); virtual void Slot26(); virtual void Slot27(); virtual void Slot28();
    virtual void Slot29();
    virtual void TurnAround();                                 // +0xf0
    char header[0x70];
    ComponentHandle* actor_object;  // 0x078
    char p080[0x1a4 - 0x80];
    Vector3 motion;                 // 0x1a4
    float p1b0, p1b4;
    float gravity;                  // 0x1b8
    float p1bc, p1c0;
    float motion_c4;                // 0x1c4
};
static_assert(__builtin_offsetof(Actor, actor_object) == 0x78, "Actor object");
static_assert(__builtin_offsetof(Actor, motion) == 0x1a4, "Actor motion");
static_assert(__builtin_offsetof(Actor, gravity) == 0x1b8, "Actor gravity");
static_assert(__builtin_offsetof(Actor, motion_c4) == 0x1c4, "Actor c4");

struct JumpAction {
    char header[0xa0];
    ComponentHandle* actor;     // 0xa0
    char pa8[3];
    uint8_t absolute_start;     // 0xab
    uint8_t face_forward;       // 0xac
    uint8_t face_target;        // 0xad
    char pae[2];
    float height;               // 0xb0
    float parameter_b4;         // 0xb4
    float gravity;              // 0xb8
    Vector3 start;              // 0xbc
    Vector3 target;             // 0xc8
    Vector3 origin;             // 0xd4
    float time;                 // 0xe0
};
static_assert(__builtin_offsetof(JumpAction, start) == 0xbc, "Jump start");
static_assert(__builtin_offsetof(JumpAction, time) == 0xe0, "Jump time");

const uint32_t kActorObject = onyx_types::type_6492d61d;
const uint32_t kFacing = 0x2eae5813u;
extern "C" void ActorAction_Setup(JumpAction* self);
extern "C" void ActorObject_MoveTo(ActorObject* object, Vector3 position);

inline Vector3 operator+(const Vector3& a, const Vector3& b) { return Vector3(a.x + b.x, a.y + b.y, a.z + b.z); }

extern "C" void JumpAction_Setup(JumpAction* self) {
    ActorAction_Setup(self);
    Vector3 start;
    if (self->absolute_start) {
        start = self->start;
    } else {
        Actor* actor = static_cast<Actor*>(self->actor->object);
        ActorObject* object = Find<ActorObject, kActorObject>(actor->actor_object);
        Vector3 position = Get<Transform, kTransform>(object->transform)->Position();
        self->origin = position;
        start = self->start + position;
    }
    Actor* actor = static_cast<Actor*>(self->actor->object);
    ActorObject_MoveTo(Find<ActorObject, kActorObject>(actor->actor_object), start);
    static_cast<Actor*>(self->actor->object)->SetMotionMode(2, 1, 0);
    self->time = sqrtf((self->height + self->height) / fabsf(self->gravity * 60.0f));
    actor = static_cast<Actor*>(self->actor->object);
    actor->motion.z = self->time * fabsf(self->gravity);
    actor->motion_c4 = self->parameter_b4;
    actor->gravity = self->gravity;
    actor->motion.x = (self->target.x - start.x) / ((self->time + self->time) * 60.0f);
    actor->motion.y = (self->target.y - start.y) / ((self->time + self->time) * 60.0f);
    if (self->face_target) {
        float target_x = self->target.x;
        Facing* facing = Get<Facing, kFacing>(Find<ActorObject, kActorObject>(actor->actor_object)->facing);
        if ((target_x < start.x) == (facing->faces_left == 0)) static_cast<Actor*>(self->actor->object)->TurnAround();
    }
    if (self->face_forward) {
        Facing* facing = Get<Facing, kFacing>(Find<ActorObject, kActorObject>(static_cast<Actor*>(self->actor->object)->actor_object)->facing);
        if (!facing->faces_left) static_cast<Actor*>(self->actor->object)->TurnAround();
    }
}

// Landing predicate (SPTG::AnimatedAiActor vtable slot 52, 0x9415b0, 264 bytes).
// With -fno-delete-null-pointer-checks this reaches the original size and control
// flow except the final epsilon test, which public Clang 7/8 fold branch-free (260 bytes).
struct LandingActor { char padding[0x78]; ComponentHandle* actor_object; char p80[0x144 - 0x80]; int32_t ground_height; char p148[0x1ac - 0x148]; float vertical_motion; };
extern "C" bool AnimatedAiActor_IsLanded(LandingActor* self) {
    ActorObject* object = Find<ActorObject, kActorObject>(self->actor_object);
    Transform* transform = Get<Transform, kTransform>(object->transform);
    if (self->ground_height < static_cast<int32_t>(transform->position.z)) return false;
    float motion = self->vertical_motion;
    if (__builtin_fabsf(motion) <= 0.000001f) return true;
    return motion < 0.0f;
}
