// SPTG::BaseCharacter (vtable 0x1874998, 159 slots) as far as its subclasses'
// states use it. Slots 96-145 are its states, each followed by a getter that
// returns it; slot 96 handles the four state events and does nothing else.
// Names are provisional.
#pragma once
#include "Animation.h"
#include "Archive.h"
#include "Level.h"
#include "OnyxComponents.h"
#include "OnyxEvents.h"
#include "StateMachine.h"

extern "C" float Move_FrameDelta;   // seconds since the last frame (0x1924d70)

namespace SPTG {

// An attack descriptor, as StartAttack receives it (0x58 bytes). A copy starts
// with +0x2c clear and no shared handle, then assigns.
struct BaseCharacter;
struct AnimatedAiActor;
struct Attack {
    float damage;                     // +0x0: scaled by the attacker when it starts
    char data_4[0xc];
    float rangeY;                     // +0x10
    char data_14[0x8];
    float hitStopTime;                // +0x1c: how long the animation is held on a hit
    float hitStopSpeed;               // +0x20: the animation speed while it is held
    char data_24[0x8];
    int32_t value2c;                  // +0x2c
    char data_30[0x10];
    float value40;                    // +0x40: from the attacker's slot 40
    int32_t id;                       // +0x44: unique per attack started
    int32_t kind;                     // +0x48: 2 also holds the attacker's animation
    char data_4c[0x4];
    onyx::ComponentHandle* shared;    // +0x50: reference-counted
    Attack(const Attack& other) : value2c(0), shared(nullptr) { *this = other; }
    Attack& operator=(const Attack& other);   // 0x8e4450
    void Serialize(onyx::Archive& archive);   // 0x8e4630
    void SetSource(int source, BaseCharacter* attacker);   // 0x8e24f0
};
static_assert(sizeof(Attack) == 0x58, "Attack size");
// An attack an enemy can request (0x78 bytes): the attack states start its
// attack, and Enemy's attack list (+0x7e8) holds copies. The kind is the hit
// kind the class's slot 166 answers; the special attack's state plays it as an
// animation.
struct AttackSlot {
    float rangeMinX;     // +0x0: how far along x a target must be
    float rangeMaxX;     // +0x4
    float rangeMinZ;     // +0x8: and how far in z
    float rangeMaxZ;     // +0xc
    uint8_t flag10;      // +0x10
    Attack attack;       // +0x18
    int32_t kind;        // +0x70
    uint8_t flag74;      // +0x74
    void Serialize(onyx::Archive& archive);   // 0x9e6310
    // Whether a target at this offset is in the attack's range.
    __attribute__((always_inline)) bool InRange(const onyx::Vector3& offset) const {
        float x = __builtin_fabsf(offset.x);
        bool inX = rangeMinX <= x && rangeMaxX >= x;
        float half = attack.rangeY * 0.5f;
        float y = __builtin_fabsf(offset.y);
        float z = offset.z;
        bool inZ = rangeMinZ <= z && rangeMaxZ >= z;
        return inX && inZ && half > y;
    }
};
static_assert(sizeof(AttackSlot) == 0x78, "AttackSlot size");
struct BaseCharacter;
// The record a hit passes to OnHit. Its fields are named as the code that reads them uses them.
struct HitRecord {
    char padding_0[0xc];
    int32_t source;          // +0xc
    char padding_10[0x23];
    uint8_t unstoppable;     // +0x33: gets through what slot 79 would otherwise dodge
    char padding_34[0x10];
    int32_t id;              // +0x44
    char padding_48[0x10];
    uint8_t flags;           // +0x58
    char padding_59[0x3];
    int32_t fromRight;       // +0x5c
};
// A message one character sends another (see ControllablePlayer::OnMessage).
struct CharacterMessage {
    int32_t kind;
    BaseCharacter* receiver;
    union {
        void* data;
        int32_t dataValue;
    };
    BaseCharacter* sender;
    CharacterMessage() {}
    // A message of `kind` from `from`; the receiver is filled in when sending.
    __attribute__((always_inline)) CharacterMessage(int32_t messageKind, BaseCharacter* from) {
        receiver = nullptr;
        data = nullptr;
        sender = from;
        kind = messageKind;
    }
};

#define SPTG_SLOT(n) virtual void Slot##n();
// A class's type and the type test behind its IsA (slot 12): SPTG_TYPE(Base, type) declares kType, and IsType
// accepts it or any type of the base's. The test is inlined, so each IsA compares the whole chain.
#define SPTG_TYPE(Base, type) \
    static const uint32_t kType = type; \
    static bool IsType(uint32_t t) { return t == kType || Base::IsType(t); }
// SPTG::ActorObject (component type 0x6492d61d).
struct ActorObject : onyx::Component {
    onyx::EventCallback* readyCallback; // +0x8: event 0x255c0afe, sent when the actor is activated
    onyx::EventTarget* readyTarget;     // +0x10
    char padding_18[0x38];
    onyx::ComponentHandle* playfield;   // +0x50
    onyx::ComponentHandle* flags;       // +0x58, component type 0x2eae5813
    onyx::ComponentHandle* transform;   // +0x60, Onyx::Transform
    void MoveTo(const onyx::Vector3& position);   // 0x85fd70
};
struct ShadowAnimatedObject;
// A base that actors and their parts share for slot 15 (0x862680). It's reached as inherited, so its real name isn't known.
struct FlaggedComponent : onyx::Component {
    SPTG_SLOT(3) SPTG_SLOT(4) SPTG_SLOT(5) SPTG_SLOT(6) SPTG_SLOT(7) SPTG_SLOT(8) SPTG_SLOT(9) SPTG_SLOT(10) SPTG_SLOT(11)
    SPTG_SLOT(12) SPTG_SLOT(13) SPTG_SLOT(14)
    virtual bool IsActive();
    char padding_8[0x30];
    uint8_t componentFlags;  // +0x38
    char padding_39[0x17];
    uint8_t flag50;          // +0x50
};
struct TypedComponent : onyx::Component {
    SPTG_SLOT(3) SPTG_SLOT(4) SPTG_SLOT(5) SPTG_SLOT(6) SPTG_SLOT(7) SPTG_SLOT(8) SPTG_SLOT(9) SPTG_SLOT(10) SPTG_SLOT(11)
    virtual bool IsA(uint32_t type);   // slot 12
};
// SPTG::PlayfieldCollision (component type 0x21350526), behind ActorObject::playfield.
struct PlayfieldCollision : TypedComponent {
    static const uint32_t kType = 0x21350526u;
    char padding_8[0x30];
    uint8_t componentFlags;  // +0x38
    char padding_39[0xdb];
    uint8_t hasGround;       // +0x114
    char padding_115[0x7];
    int32_t groundHeight;    // +0x11c
    char padding_120[0x4];
    uint8_t snapsToGround;   // +0x124
    char padding_125[0x3];
    uint8_t flag128;   // +0x128
    char padding_129[0x7];
    uint32_t flags130; // +0x130
    void Place(const int32_t* cell);   // 0x85fea0: ActorObject::MoveTo hands it the rounded x, y and z
};
// The component behind ActorObject::flags.
struct ActorFlags : onyx::Component {
    onyx::EventCallback* blinkOffCallback;   // +0x8, event 0x255c0afe
    onyx::EventTarget* blinkOffTarget;       // +0x10
    char padding_18[0x8];
    onyx::EventCallback* blinkOnCallback;    // +0x20, event 0x44174b43
    onyx::EventTarget* blinkOnTarget;        // +0x28
    char padding_30[0x8];
    uint8_t componentFlags;   // +0x38
    char padding_39[0x17];
    onyx::ComponentHandle* handle50;  // +0x50
    char padding_58[0x20];
    uint8_t visible;      // +0x78
    uint8_t facingLeft;   // +0x79
    uint8_t flag7a;       // +0x7a
    char padding_7b[0x1];
    onyx::Vector2 value7c;        // +0x7c
    char padding_84[0x78];
    float valueFc;        // +0xfc: how high it stands, as Striker tests it
    char padding_100[0x18];
    uint8_t flag118;      // +0x118
    void SetShadow(ShadowAnimatedObject* shadow, bool flag);   // 0x811870
};
// SPTG::LevelAIManager (type 0x2b951b8a), reached through the singleton at +0x80 (getter 0x992bf0).
// What the singleton at AnimatedAiActor +0x88 gives (getter 0x774b50).
struct CameraAccessor {
    char padding[0x50];
    onyx::ComponentHandle* levelCamera;  // +0x50, LevelCamera
    char padding_58[0x18];
    void* value70;                       // +0x70: while set, a player can't start what slot 82 asks about
};
struct GameDifficulty { char padding[0x108]; float value108; };   // +0x108
struct NpcAccessor { char padding[0x60]; onyx::ComponentHandle* catalog; };   // +0x60, Catalog<NPC>
struct LevelAIManager {
    char padding[0x50];
    Singleton<GameDifficulty> difficulty;   // +0x50 (getter 0x992f30)
    Singleton<NpcAccessor> npcs;            // +0x58 (getter 0x7725e0)
};
// Onyx::Catalog<SPTG::NPC> (component type 0x3fb2ecb4).
struct NpcCatalog : onyx::Component {
    char padding_8[0x78];
    uint64_t count;          // +0x80
    char padding_88[0x8];
    BaseCharacter** npcs;    // +0x90
};

// SPTG::InteractiveObject as a character getting on it sees it. It is not a BaseCharacter, but both share
// AnimatedAiActor's first virtual slots.
struct MountObject : onyx::Component {
    SPTG_SLOT(3) SPTG_SLOT(4) SPTG_SLOT(5) SPTG_SLOT(6) SPTG_SLOT(7) SPTG_SLOT(8) SPTG_SLOT(9) SPTG_SLOT(10)
    SPTG_SLOT(11) SPTG_SLOT(12) SPTG_SLOT(13) SPTG_SLOT(14) SPTG_SLOT(15) SPTG_SLOT(16) SPTG_SLOT(17)
    SPTG_SLOT(18) SPTG_SLOT(19) SPTG_SLOT(20) SPTG_SLOT(21) SPTG_SLOT(22) SPTG_SLOT(23) SPTG_SLOT(24)
    SPTG_SLOT(25) SPTG_SLOT(26) SPTG_SLOT(27) SPTG_SLOT(28) SPTG_SLOT(29) SPTG_SLOT(30) SPTG_SLOT(31)
    SPTG_SLOT(32) SPTG_SLOT(33)
    virtual bool CanMount();                 // slot 34
    char padding_8[0x38];
    onyx::ComponentHandle* self;             // +0x40
    char padding_48[0x30];
    onyx::ComponentHandle* actorObject;      // +0x78
    char padding_80[0x378];
    float mountRange;                        // +0x3f8: how far off in x and y a rider can be
    char padding_3fc[0x10];
    float mountDepth;                        // +0x40c: and in z
};
// Onyx::Catalog<SPTG::InteractiveObject> (component type 0x7a93a527).
struct InteractiveCatalog : onyx::Component {
    char padding_8[0x80];
    uint64_t count;          // +0x88
    char padding_90[0x8];
    MountObject** objects;   // +0x98
    MountObject* FindMount(const onyx::Vector3& position);   // 0x9769a0
};

// Reached through the singleton at +0x1f8 (getter 0x78c910).
struct LevelSecretManager { char padding[0x5ad]; uint8_t flag5ad; };   // +0x5ad
// The hit TakeDamage receives; only +0x14 is known so far.
struct DamageHit { char padding_0[0x14]; int32_t value14; };
// What slot 93 receives; only the amount at +0x4 is known.
struct HitValue { uint32_t value0; float amount; };
struct SwitchLevelGateAccess;   // Enemy.h
// The object behind the global at 0x1924bc0; slot 158 fails while +0xe0 is set.
struct GameState { char padding[0xe0]; uint8_t flagE0; };
extern "C" GameState* Game_State;   // 0x1924bc0

// SPTG::ShadowAnimatedObject: the actor's shadow, a weak dependency. It follows the actor, and states hide it.
struct ShadowAnimatedObject : onyx::Component {
    char padding_8[0x50];
    onyx::ComponentHandle* transform;   // +0x58
    char padding_60[0x18];
    uint8_t visible;   // +0x78
    char padding_79[0xc7];
    onyx::ComponentHandle* graphics;    // +0x140, component type 0x771ba2ee
    int32_t groundHeight;               // +0x148
    void SetGroundHeight(int height, float z);   // 0x85fc20
};
// The shadow's graphics (component type 0x771ba2ee); slot 16 gives the part whose +0x4 SetGroundHeight sets.
struct ShadowPart { uint32_t value0; float value4; };
struct ShadowGraphics : onyx::Component {
    SPTG_SLOT(3) SPTG_SLOT(4) SPTG_SLOT(5) SPTG_SLOT(6) SPTG_SLOT(7) SPTG_SLOT(8) SPTG_SLOT(9) SPTG_SLOT(10) SPTG_SLOT(11)
    SPTG_SLOT(12) SPTG_SLOT(13) SPTG_SLOT(14) SPTG_SLOT(15)
    virtual ShadowPart* Slot16();   // slot 16
};

// What the screen covers: the camera block's edges when one is active, otherwise the camera position and a 384 by 216 view.
struct ScreenRect { float left, top, right, bottom; };
// SPTG::SPTG_AIComponent (type 0x1486d4e8): the base of AnimatedAiActor, the boss AIs and other game components,
// which the factories allocate from its pool. Its own IsA (slot 12, 0x862630, shared by 15 vtables) is still
// credited to a placeholder.
struct SPTG_AIComponent : onyx::Component {
    // The types of its two bases, which aren't written out: 0x386d550d (also the pool of many Onyx components)
    // and 0x07b73c94, which every component passes (menus too). The test has to be a level of its own: written
    // into IsType's chain, the two compares become branches instead of the original's `cset`/`orr`.
    static bool BaseIsType(uint32_t type) { return type == 0x386d550du || type == 0x07b73c94u; }
    static const uint32_t kType = 0x1486d4e8u;
    static bool IsType(uint32_t type) { return type == kType || BaseIsType(type); }
};

// SPTG::AnimatedAiActor (vtable 0x1870698, 78 slots), the base of BaseCharacter, InteractiveObject, Striker,
// Projectile, Pickup and BreakableObject (their type tests include its type). Its own functions are the ones
// BaseCharacter's vtable keeps; the rest BaseCharacter overrides. The first fields not in here are
// BaseCharacter's and InteractiveObject's, both from +0x1e8.
struct AnimatedAiActor : SPTG_AIComponent {
    SPTG_TYPE(SPTG_AIComponent, 0x1cfd89c7u)
    virtual ~AnimatedAiActor();                                                  // slots 0, 1
    void EnsureReady() override;                                             // slot 2 (0x93f1f0)
    SPTG_SLOT(3)
    virtual void Slot4(onyx::Archive& archive, ComponentSlot::Source* source); // slot 4
    SPTG_SLOT(5) SPTG_SLOT(6) SPTG_SLOT(7) SPTG_SLOT(8) SPTG_SLOT(9) SPTG_SLOT(10) SPTG_SLOT(11)
    virtual bool IsA(uint32_t type);                                         // slot 12 (0x948080)
    SPTG_SLOT(13) SPTG_SLOT(14) SPTG_SLOT(15)
    virtual void Update();                                                   // slot 16
    SPTG_SLOT(17) SPTG_SLOT(18)
    virtual void Slot19();                                                   // slot 19
    SPTG_SLOT(20)
    virtual void ReactTo(BaseCharacter* other, int reaction, void* data);    // slot 21
    virtual void PlayAnimation(int animation, bool loop, bool scaled, float speed); // slot 22
    virtual void PlayMountedAnimation(int animation, bool a, bool b);        // slot 23
    virtual void PlayFacingAnimation(int animation, uint8_t flags);          // slot 24
    virtual void SetAnimationSpeed(float speed);                             // slot 25
    virtual void SetAnimationPaused(bool paused);                            // slot 26
    virtual bool AnimationDone();                                            // slot 27
    virtual void SetFacing(int left);                                          // slot 28
    SPTG_SLOT(29)
    virtual void TurnAround();                                               // slot 30
    virtual void Dismount();                                             // slot 31
    virtual void OnDismount();                                                   // slot 32
    virtual bool OnMount(void* data);                                         // slot 33
    virtual bool CanMount();                                              // slot 34
    virtual void Slot35(bool flag, BaseCharacter* other);                    // slot 35
    virtual bool IsMounted();      // flag +0x338 and a live mount at +0x238 // slot 36
    virtual bool Slot37();                                                   // slot 37
    virtual bool OnHit(BaseCharacter* other, void* hit);                     // slot 38
    virtual void AttackLanded(AnimatedAiActor* target);                      // slot 39
    virtual float Slot40();                                                  // slot 40
    virtual int Slot41(bool a, bool b, bool c, void* data, BaseCharacter* other, float scale, float f1, float f2, float f3); // slot 41
    SPTG_SLOT(42)
    virtual void Slot43(float value);                                        // slot 43
    virtual int StartAttack(Attack* attack, bool flag, int source, BaseCharacter* attacker); // slot 44
    virtual int Slot45();                                                    // slot 45
    virtual bool Slot46(BaseCharacter* other);  /* slot 46 */ SPTG_SLOT(47) SPTG_SLOT(48)
    virtual int Slot49();                                                    // slot 49
    virtual int Slot50();                                                    // slot 50
    virtual bool IsOut();             // checked before targeting a player   // slot 51
    virtual bool IsOnGround();                                               // slot 52
    virtual void Slot53();                                                   // slot 53
    SPTG_SLOT(54)
    virtual bool IsHeld();                                                   // slot 55
    virtual void SetSolid(bool solid);                                       // slot 56
    virtual float MaxHealth();                                                  // slot 57
    virtual float Slot58(bool flag);                                         // slot 58
    virtual float Slot59();                                                  // slot 59
    virtual float SpeedScale();                                                  // slot 60
    SPTG_SLOT(61) SPTG_SLOT(62) SPTG_SLOT(63)
    virtual float LoseHealth(float amount);                                  // slot 64
    virtual void GainHealth(float amount);                                   // slot 65
    virtual void RestoreHealth();                                            // slot 66
    SPTG_SLOT(67)
    virtual void Slot68();                                                   // slot 68
    virtual float TakeDamage(const void* hit, BaseCharacter* other);         // slot 69
    virtual void Remove(bool flag);                                          // slot 70
    virtual void Release();                                                  // slot 71
    SPTG_SLOT(72)
    virtual bool Slot73();                                                   // slot 73
    virtual void Slot74(const float* point, bool flag, float value);         // slot 74
    virtual bool ApplyKnockback(void* data, BaseCharacter* other);                            // slot 75
    virtual void FollowPlayfield();                                                   // slot 76
    virtual float Slot77();                                                  // slot 77

    char padding_8[0x30];
    uint32_t componentFlags;     // +0x38: bit 0 enabled
    char padding_3c[0x4];
    Holder* attachment;          // +0x40: what the actor is attached to
    char padding_48[0x8];
    uint8_t flag50;              // +0x50
    uint8_t flag51;              // +0x51
    char padding_52[0x2];
    int32_t value54;             // +0x54: copied to +0x230 by slot 13
    onyx::ComponentHandle* shadowHandle; // +0x58
    char padding_60[0x8];
    onyx::ComponentHandle* partnerHandle; // +0x68
    onyx::ComponentHandle* animationHandle; // +0x70: AnimationController (type 0x29fbe438)
    onyx::ComponentHandle* actorObject; // +0x78
    Singleton<LevelAIManager> levelAI; // +0x80
    Singleton<CameraAccessor> camera;  // +0x88
    Singleton<LevelItemAccessor> level; // +0x90
    float base98;                // +0x98: scaled into +0x9c
    float scaled9c;              // +0x9c
    onyx::Vector3 throwOffset;   // +0xa0: where being thrown moves it
    float throwSpeed;            // +0xac: horizontal speed after landing from a throw
    float throwY;                // +0xb0
    float throwZ;                // +0xb4
    float pushBack;              // +0xb8: Enemy::Slot228's push, against the way it faces
    float pushY;                 // +0xbc
    float pushZ;                 // +0xc0
    char padding_c4[0x34];
    float groundZ;               // +0xf8
    float groundC4;              // +0xfc
    uint8_t flag100;             // +0x100
    char padding_101[0x3];
    float brakeForce;            // +0x104: how hard it slows down
    char padding_108[0x4];
    onyx::Vector3 dismountOffset; // +0x10c: where a rider getting off moves it
    char padding_118[0x8];
    onyx::Vector2 value120;      // +0x120: copied to ActorFlags +0x7c by slot 16
    char padding_128[0x4];
    int32_t value12c;            // +0x12c
    bool flag130;                // +0x130: what the knockback handler returns
    char padding_131[0x7];
    Attack* currentAttack;       // +0x138: the character's own copy of the attack it is making
    uint8_t attackLanded;        // +0x140: cleared when an attack starts, set on a hit
    uint8_t flag141;             // +0x141
    char padding_142[0x2];
    int32_t groundHeight;        // +0x144: the height that counts as on the ground
    int32_t lastGroundHeight;    // +0x148: groundHeight when it was last on the ground
    float hitStopLeft;           // +0x14c: the animation speed applies while not positive
    float hitStopSpeed;          // +0x150
    float liftHeight;            // +0x154: how high InteractiveObject's state 88 lifts it
    char padding_158[0x4];
    uint32_t sentEvents;         // +0x15c: one bit for each one-shot event already sent
    float health;              // +0x160
    char padding_164[0x1];
    uint8_t flag165;             // +0x165
    char padding_166[0x2];
    onyx::Vector3 point168;      // +0x168: set by slot 74
    float value174;              // +0x174
    float value178;              // +0x178
    uint8_t flag17c;             // +0x17c
    char padding_17d[0xb];
    float animationSpeed;        // +0x188
    float value18c;              // +0x18c: set on the mount by state 130
    int32_t recentHits[4];       // +0x190: IDs of the last hits taken (see RecordHit)
    int32_t animation;           // +0x1a0: the animation playing
    onyx::Vector3 motion;        // +0x1a4
    onyx::Vector3 motionTarget;  // +0x1b0
    float value1bc;              // +0x1bc
    char padding_1c0[0x4];
    float motionC4;              // +0x1c4
    char padding_1c8[0x18];
    onyx::ComponentHandle* handle1e0; // +0x1e0
    void Call944010();           // 0x944010
    void GetScreenRect(ScreenRect* out);  // 0x95c040
    bool IsOnScreen();                    // 0x994610
    // An attack landed: its hit stop holds this actor's animation, and with kind 2 the attack's owner's too.
    __attribute__((always_inline)) void HoldForLandedAttack() {
        Attack* landed = currentAttack;
        attackLanded = 1;
        float speed = landed->hitStopSpeed;
        uint32_t kind = landed->kind;
        float time = landed->hitStopTime;
        if (kind <= 3 && time > 0.0f && hitStopLeft <= 0.0f) {
            hitStopSpeed = speed;
            float saved = animationSpeed;
            SetAnimationSpeed(speed);
            animationSpeed = saved;
            hitStopLeft = time;
        }
        if (kind == 2) {
            AnimatedAiActor* other = landed->shared ? static_cast<AnimatedAiActor*>(landed->shared->object) : nullptr;
            other->HoldAnimation(time, speed);
        }
    }
    // Holds the animation for a moment, unless it is being held already.
    __attribute__((always_inline)) void HoldAnimation(float time, float speed) {
        if (time > 0.0f && hitStopLeft <= 0.0f) {
            hitStopSpeed = speed;
            float saved = animationSpeed;
            SetAnimationSpeed(speed);
            animationSpeed = saved;
            hitStopLeft = time;
        }
    }
    // -1 facing left, 1 facing right.
    __attribute__((always_inline)) float FacingSign() {
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags);
        return flags->facingLeft ? -1.0f : 1.0f;
    }
};

struct BaseCharacter : AnimatedAiActor {
    SPTG_TYPE(AnimatedAiActor, 0x1cfe99c7u)
    typedef StateMachine<BaseCharacter>::State State;
    virtual ~BaseCharacter();                                                    // slots 0, 1
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source) override; // slot 4
    void Slot7() override;                                               // slot 7
    void Slot8() override;                                               // slot 8
    void Slot11() override;                                              // slot 11
    bool IsA(uint32_t type) override;                                    // slot 12 (0x96bf20)
    void Slot13() override;                                              // slot 13
    // Moves the character and makes that height its ground. The position is worked out before the actor object is looked up.
    __attribute__((always_inline)) void PlaceAt(const onyx::Vector3& position) {
        onyx::Find<ActorObject, 0x6492d61du>(actorObject)->MoveTo(position);
        groundHeight = static_cast<int>(position.z);
    }
    void Slot14() override;                                              // slot 14
    void Slot19() override;                                              // slot 19
    void PlayMountedAnimation(int animation, bool a, bool b) override;   // slot 23
    void SetAnimationSpeed(float speed) override;                        // slot 25
    void SetAnimationPaused(bool paused) override;                       // slot 26
    void TurnAround() override;                                          // slot 30
    void Dismount() override;                                            // slot 31
    void OnDismount() override;                                          // slot 32
    bool OnMount(void* data) override;                                   // slot 33
    bool CanMount() override;                                            // slot 34
    void Slot35(bool flag, BaseCharacter* other) override;               // slot 35
    bool IsMounted() override;                                           // slot 36
    bool OnHit(BaseCharacter* other, void* hit) override;                // slot 38
    int Slot41(bool a, bool b, bool c, void* data, BaseCharacter* other, float scale, float f1, float f2, float f3) override; // slot 41
    void Slot42() override;                                              // slot 42
    int StartAttack(Attack* attack, bool flag, int source, BaseCharacter* attacker) override; // slot 44
    void Slot47() override;                                              // slot 47
    bool IsOut() override;                                               // slot 51
    void Slot53() override;                                              // slot 53
    void Slot54() override;                                              // slot 54
    void Slot61() override;                                              // slot 61
    void Slot62() override;                                              // slot 62
    void Slot63() override;                                              // slot 63
    float LoseHealth(float amount) override;                             // slot 64
    void Slot67() override;                                              // slot 67
    float TakeDamage(const void* hit, BaseCharacter* other) override;    // slot 69
    void Slot74(const float* point, bool flag, float value) override;    // slot 74
    bool ApplyKnockback(void* data, BaseCharacter* other) override;                       // slot 75
    void FollowPlayfield() override;                                              // slot 76
    float Slot77() override;                                             // slot 77
    virtual void MountNearby();                                              // slot 78
    virtual bool Slot79();                                                   // slot 79
    virtual bool Slot80();                                                   // slot 80
    virtual float Slot81();                                                  // slot 81
    virtual bool Slot82();                                                   // slot 82
    virtual bool Slot83();                                                   // slot 83
    virtual bool Slot84();                                                   // slot 84
    virtual bool Slot85();                                                   // slot 85
    virtual void Slot86();                                                   // slot 86
    virtual void PlayAnimationOn(int animation, bool loop, bool flag, BaseCharacter* other, float speed); // slot 87
    virtual bool Slot88(float amount);                                       // slot 88
    virtual void AddGuts(float amount);                                      // slot 89
    virtual void LoseGuts(float value);                                        // slot 90
    virtual void FaceX(float x);                                            // slot 91
    virtual void Slot92(void* data);                                         // slot 92
    virtual void Slot93(const HitValue* hit);                                // slot 93
    virtual void Slot94();                                                   // slot 94
    virtual bool Slot95();                                                   // slot 95
    virtual int State96(int event); virtual State State96Ptr();              // slots 96, 97
    virtual int State98(int event); virtual State State98Ptr();              // slots 98, 99
    virtual int State100(int event); virtual State State100Ptr();            // slots 100, 101
    virtual int State102(int event); virtual State State102Ptr();            // slots 102, 103
    virtual int State104(int event); virtual State State104Ptr();            // slots 104, 105
    virtual int State106(int event); virtual State State106Ptr();            // slots 106, 107
    virtual int State108(int event); virtual State State108Ptr();            // slots 108, 109
    virtual int State110(int event); virtual State State110Ptr();            // slots 110, 111
    virtual int State112(int event); virtual State State112Ptr();            // slots 112, 113
    virtual int State114(int event); virtual State State114Ptr();            // slots 114, 115
    virtual int State116(int event); virtual State State116Ptr();            // slots 116, 117
    virtual int State118(int event); virtual State State118Ptr();            // slots 118, 119
    virtual int State120(int event); virtual State State120Ptr();            // slots 120, 121
    virtual int State122(int event); virtual State State122Ptr();            // slots 122, 123
    virtual int State124(int event); virtual State State124Ptr();            // slots 124, 125
    virtual int State126(int event); virtual State State126Ptr();            // slots 126, 127
    virtual int State128(int event); virtual State State128Ptr();            // slots 128, 129
    virtual int State130(int event); virtual State State130Ptr();            // slots 130, 131
    virtual int State132(int event); virtual State State132Ptr();            // slots 132, 133
    virtual int State134(int event); virtual State State134Ptr();            // slots 134, 135
    virtual int State136(int event); virtual State State136Ptr();            // slots 136, 137
    virtual int State138(int event); virtual State State138Ptr();            // slots 138, 139
    virtual int State140(int event); virtual State State140Ptr();            // slots 140, 141
    virtual int State142(int event); virtual State State142Ptr();            // slots 142, 143
    virtual int State144(int event); virtual State State144Ptr();            // slots 144, 145
    SPTG_SLOT(146)
    virtual onyx::Vector2 Slot147();                                         // slot 147
    virtual bool HealWithGuts(bool* out);                                         // slot 148
    virtual float Slot149();                                                 // slot 149
    virtual float MaxGuts();                                                 // slot 150
    virtual float GutsCostScale();                                                 // slot 151
    virtual float Slot152();                                                 // slot 152
    virtual void Slot153(uint32_t* flags);                                   // slot 153
    SPTG_SLOT(154) SPTG_SLOT(155)
    virtual bool Slot156();                                                  // slot 156
    SPTG_SLOT(157)
    virtual bool Slot158();                                                  // slot 158

    onyx::ComponentHandle* spritePrinter; // +0x1e8
    void* textureLoader;               // +0x1f0: filled by AssignComponentSlot
    Singleton<LevelSecretManager> settings; // +0x1f8
    void* hudStatus;               // +0x200: filled by AssignComponentSlot
    StateMachine<BaseCharacter> states; // +0x208
    int32_t value230;            // +0x230
    char padding_234[0x4];
    onyx::ComponentHandle* mountHandle; // +0x238
    onyx::ComponentHandle* held; // +0x240: owned reference, dropped by ReleaseHeld
    char padding_248[0x10];
    Attack attack258;            // +0x258: started by Enemy's slot 41
    float value2b0;              // +0x2b0: with +0x2b4, the upward speed of EnemyChubby's jump
    float value2b4;              // +0x2b4
    float value2b8;              // +0x2b8: ReleaseHeld speeds a slow x motion up by 1 + this
    float savedZ;                // +0x2bc: restored into motionTarget.z
    float savedC4;               // +0x2c0: restored into motionC4
    float value2c4;              // +0x2c4
    int32_t value2c8;            // +0x2c8
    float value2cc;              // +0x2cc: ReleaseHeld's y speed for a throw, times its y
    float value2d0;              // +0x2d0: ReleaseHeld's upward speed for a throw (+0x2b0 otherwise)
    int32_t value2d4;            // +0x2d4
    int32_t value2d8;            // +0x2d8
    int32_t value2dc;            // +0x2dc
    float jumpBackSpeed;         // +0x2e0
    float slideThreshold;        // +0x2e4
    int32_t value2e8;            // +0x2e8
    float slideSpeed;            // +0x2ec
    int32_t value2f0;            // +0x2f0
    float base2f4;               // +0x2f4: scaled into +0x2f8
    float scaled2f8;             // +0x2f8
    float value2fc;              // +0x2fc
    int32_t value300;            // +0x300
    int32_t value304;            // +0x304
    int32_t value308;            // +0x308
    float value30c;              // +0x30c
    float value310;              // +0x310
    float chargeGain;            // +0x314: the most an attack is scaled by a full charge
    float chargeTime;            // +0x318: the time a full charge takes
    int32_t value31c;            // +0x31c
    onyx::Vector2 value320;      // +0x320
    float value328;              // +0x328
    float guts;              // +0x32c
    float timer330;              // +0x330
    float value334;              // +0x334
    uint8_t mounted;             // +0x338
    uint8_t flag339;             // +0x339
    char padding_33a[0x6];
    char block340[0x64];         // +0x340: passed to slot 69
    float positionX;             // +0x3a4
    float positionYZ;            // +0x3a8: position Y plus Z
    char padding_3ac[0x4];
    float restitution;           // +0x3b0
    int32_t value3b4;            // +0x3b4
    char padding_3b8[0x1];
    uint8_t skipFrame;           // +0x3b9: set on entry; the first update is skipped
    uint8_t flag3ba;             // +0x3ba
    uint8_t flag3bb;             // +0x3bb
    char padding_3bc[0x4];
    EventSlot event3c0;          // +0x3c0: sent when Enemy state 98 starts
    EventSlot event3d8;          // +0x3d8
    EventSlot event3f0;          // +0x3f0
    EventSlot event408;          // +0x408
    EventSlot event420;          // +0x420
    EventSlot event438;          // +0x438
    EventSlot event450;          // +0x450
    EventSlot event468;          // +0x468
    onyx::ComponentHandle* handle480; // +0x480
    onyx::ComponentHandle* holder; // +0x488
    char padding_490[0x48];
    int32_t holderMode;          // +0x4d8
    char padding_4dc[0x4];
    onyx::ComponentHandle* holder2; // +0x4e0: used unless holderMode is 1
    char padding_4e8[0x18];
    int32_t actionMode;          // +0x500
    uint32_t flags504;           // +0x504: bit flags
    char padding_508[0x4];
    int32_t value50c;            // +0x50c
    char padding_510[0x1];
    uint8_t flag511;             // +0x511
    char padding_512[0x2];
    float value514;              // +0x514: slot 93 switches state at or below this
    float rate518;               // +0x518: +0x328 regained per second (slot 13)
    float stunDuration;          // +0x51c
    float stunDuration2;         // +0x520
    float value524;              // +0x524
    float value528;              // +0x528
    char padding_52c[0x4];
    Attack attack530;            // +0x530: started by slot 35
    Attack attack588;            // +0x588: started by slot 35 with its flag set
    int32_t value5e0;            // +0x5e0
    int32_t value5e4;            // +0x5e4
    int32_t value5e8;            // +0x5e8
    int32_t value5ec;            // +0x5ec
    char padding_5f0[0x158];
    uint8_t flag748;             // +0x748
    char padding_749[0x7];
    EventSlot event750;          // +0x750: sent when state 116 starts
    char padding_768[0x8];
    float timer770;              // +0x770: counted down by slot 154
    uint8_t flag774;             // +0x774
    uint8_t flag775;             // +0x775
    char padding_776[0x2];
    int32_t value778;            // +0x778

    void SetMount(onyx::ComponentHandle* mount);       // 0x976b10
    void ReleaseHeld(bool flag, float x, float y);   // 0x976fb0: drops the reference at +0x240
    void RecordHit(void* hit);                         // 0x977190
    void Call94fde0();                                 // 0x94fde0
    void Call9500f0();                                 // 0x9500f0
    void Update976670(float time);                     // 0x976670

    // Slot 82's test, shared with overrides that inline it: held, not slot 85,
    // on the ground, no +0x141, and outside action modes 3, 5, 6, 8 and 11.
    __attribute__((always_inline)) bool CanSlot82() {
        if (!IsHeld()) return false;
        if (Slot85()) return false;
        if (!IsOnGround()) return false;
        if (flag141) return false;
        switch (actionMode) {
        case 3:
        case 5:
        case 6:
        case 8:
        case 11:
            return false;
        }
        return true;
    }
    void Apply8e5750(int value);                       // 0x8e5750
    void HoldAnimation(float time, float speed);
    // Slot 148's body, which the player's override inlines.
    __attribute__((always_inline)) bool BuyHealth(bool* out) {
        bool healed = false;
        if (flag511 || __builtin_fabsf(guts) <= 0.000001f) {
            healed = false;
        } else {
            float amount = value310;
            float limit = MaxHealth();
            amount = amount < limit ? amount : limit;
            float cost = __builtin_ceilf(value30c * amount * GutsCostScale());
            float available = guts;
            if (cost > available || __builtin_fabsf(cost - available) <= 0.000002f) {
                float rate = value30c;
                if (__builtin_fabsf(rate) <= 0.000001f) amount = value310;
                else amount = __builtin_ceilf(available / rate);
                cost = available;
            }
            if (cost < available || __builtin_fabsf(cost - available) <= 0.000002f) {
                GainHealth(amount);
                LoseGuts(cost);
            }
            healed = true;
        }
        if (out) *out = healed;
        return healed;
    }
    BaseCharacter* Mount() { return mountHandle ? static_cast<BaseCharacter*>(mountHandle->object) : nullptr; }
    ShadowAnimatedObject* Shadow() { return shadowHandle ? static_cast<ShadowAnimatedObject*>(shadowHandle->object) : nullptr; }
};
static_assert(__builtin_offsetof(BaseCharacter, states) == 0x208, "BaseCharacter states");
static_assert(__builtin_offsetof(BaseCharacter, actionMode) == 0x500, "BaseCharacter action mode");

// What ControllablePlayer +0x1500 points to. Held lets the player read its bits by
// index; the other names are provisional.
struct PlayerInputOwner {
    char padding_0[0x8];
    int32_t value8;      // +0x8
};
struct PlayerInputSource {
    char padding_0[0x18];
    PlayerInputOwner* owner;  // +0x18
};
// The part of SPTG::InGameHUD that shows each player's status.
struct HudPlayerPanel {
    char padding_0[0x2c1];
    uint8_t showingStatus[4];        // +0x2c1
    void SetStatus(int status, int player);   // 0x7b5cf0
};
struct LevelWindowAccessor;
// One player's saved settings (0x5b4 bytes), reached through the singleton at +0x7d0.
struct PersistentPlayerRecord {
    char padding_0[0x154];
    int32_t value154;        // +0x154: picks how dash input is read in state 237
    char padding_158[0x45c];
};
static_assert(sizeof(PersistentPlayerRecord) == 0x5b4, "PersistentPlayerRecord size");
struct PersistentData {
    PersistentPlayerRecord players[4];
    char padding_16d0[0x108];
    bool friendlyFire;       // +0x17d8: lets a player act on anyone (ControllablePlayer slot 46); the name is a guess
};
// An effect a character keeps as a reference. Slot 2 starts it with these two filled in, and slot 4 stops it. +0x18 is
// clear while it's stopped or not yet running, as Boss's slot 242 reads it.
struct ActorEffect : onyx::Component {
    SPTG_SLOT(3)
    virtual void Stop();
    SPTG_SLOT(5)
    virtual void SetRate(float rate);
    void* target;            // +0x8
    void* modifiers;         // +0x10
    uint8_t flag18;          // +0x18
};
struct InGameHUD {
    char padding_0[0x60];
    Singleton<LevelWindowAccessor> window;    // +0x60
    char padding_68[0x8];
    HudPlayerPanel* panel;                    // +0x70
    char padding_78[0x8];
    struct PlayerEntry { uint8_t flag0; uint8_t downed; char padding_2[0xe]; } players[4];  // +0x80
};
struct PlayerInput {
    char padding_0[0x8];
    uint8_t flag8;       // +0x8
    char padding_9[0x197];
    PlayerInputSource* source;  // +0x1a0
    char padding_1a8[0x8];
    uint64_t value1b0;   // +0x1b0
    char padding_1b8[0x8];
    uint64_t held;       // +0x1c0
    char padding_1c8[0x8];
    uint64_t value1d0;   // +0x1d0
    char padding_1d8[0xc];
    uint8_t flag1e4;     // +0x1e4
    char padding_1e5[0x3];
    int32_t value1e8;    // +0x1e8
    char padding_1ec[0x4];
    uint16_t value1f0;   // +0x1f0
    bool JustPressed(uint64_t button) { return (held & button) && !(value1d0 & button); }
    void Call8f80d0();   // 0x8f80d0
    void Call8fabf0(int32_t value);   // 0x8fabf0
};
// SPTG::ControllablePlayer: its first own virtual (slot 159) receives messages.
// What a player's attack input reads as (0x991a20).
struct AttackInput {
    int32_t value0;
    union {
        uint16_t bits;
        struct {
            uint8_t pressed;   // +0x4
            uint8_t value5;    // +0x5
        };
    };
    AttackInput() { bits = 0; value0 = 0; }
};
// SPTG::PlayerInfo (type 0x466135fe) as the player classes use it: a player's saved progress, with the moves
// learned and the worlds cleared. ComponentSerialize.h has the serialized view of the same class.
struct PlayerInfoView : onyx::Component {
    char padding_8[0x58];
    uint32_t moves;              // +0x60: one bit for each move learned
    char padding_64[0x30];
    uint8_t allMoves;            // +0x94
};
enum PlayerMove {
    kMoveAirKick = 0x400,
    kMoveAirAttack = 0x1000,
    kMoveStrikerA = 0x8000,      // bit 15: Knives' first special
    kMoveStrikerB = 0x10000,     // bit 16: Knives' air special
};
struct Item;
struct ItemRegistryNode {
    ItemRegistryNode* children[2];
    char padding_10[0x10];
    uint32_t id;             // +0x20
    Item* item;              // +0x28
};
// SPTG::ItemRegistry: the game's items, in a binary tree by id.
struct ItemRegistry {
    char padding_0[0x50];
    ItemRegistryNode end;    // +0x50, the tree's end marker; its root is at +0x60
    __attribute__((always_inline)) ItemRegistryNode* Root() { return *reinterpret_cast<ItemRegistryNode**>(reinterpret_cast<char*>(this) + 0x60); }
};
// One thing an item does when used.
enum ItemEffectKind {
    kItemHealth,
    kItemGuts,
    kItemExperience,
    kItemLives,
    kItemDefense,
    kItemSpeed,
    kItemWill,
    kItemStrength,
    kItemFlag,
    kItemLearnMove,
    kItemEffect10,
};
struct Item;
struct ItemEffect {
    int32_t kind;
    int32_t amount;
    int32_t move;       // kItemLearnMove's move
};
struct Item {
    char padding_0[0x60];
    int32_t id;              // +0x60
    char padding_64[0x34];
    uint64_t effectCount;    // +0x98
    ItemEffect* effects;     // +0xa0
};
struct ControllablePlayer : BaseCharacter {
    SPTG_TYPE(BaseCharacter, 0x2f2bf4aau)
    bool IsA(uint32_t type) override;   // slot 12 (0x97aec0)
    bool UseItem(Item* item);                            // 0x80e9a0
    void GainExperience(float amount);                   // 0x80ecc0
    bool Effect10();                                     // 0x80f6e0
    PlayerInfoView* Info() { return onyx::Get<PlayerInfoView, 1180775934u>(playerInfo); }
    bool KnowsMove(int move) {
        PlayerInfoView* record = Info();
        return (record->moves & move) || record->allMoves;
    }
    void ReadAttackInput(AttackInput* out);              // 0x991a20
    bool ReadMoveInput(PlayerInput* from, onyx::Vector3* out);  // 0x9913a0
    bool Slot82() override;                                     // slot 82
    void Call996c30(float amount, int a, int b, void* effect);  // 0x996c30
    // Takes `amount` from the player's money. A negative amount is money earned, and counts towards the total.
    __attribute__((always_inline)) void SpendMoney(float amount) {
        money -= amount;
        money = RoundMoney(money, 9999.95f);
        if (amount < 0.0f) {
            moneyEarned -= amount;
            moneyEarned = RoundMoney(moneyEarned, 1000000000.0f);
        }
    }
    // Keeps a sum between 0 and `limit`, in whole multiples of 0.05.
    __attribute__((always_inline)) static float RoundMoney(float value, float limit) {
        if (value < 0.0f) value = 0.0f;
        else if (value > limit) value = limit;
        float cents = value / 0.05f;
        return static_cast<int>(cents + (cents > 0.0f ? 0.5f : -0.5f)) * 0.05f;
    }
    int Call9983e0(int theme);                                  // 0x9983e0
    void Call994b40(int theme);                                 // 0x994b40
    // Pays for a striker: guts, and health for what the guts don't cover.
    __attribute__((always_inline)) void PayStrikerCost() {
        float cost = __builtin_ceilf(strikerCost * GutsCostScale());
        float paid = guts;
        if (cost > paid) {
            LoseHealth(cost - paid);
            paid = guts;
        }
        if (cost < paid) paid = cost;
        LoseGuts(paid);
    }
    bool AnyInputPressed();                              // 0x993270
    // The HUD prompt to mash buttons, for players on this machine. The panel is read before the player test and the two
    // tests are one condition: the original keeps a single result constant for both early exits, which separate ifs
    // don't give.
    __attribute__((always_inline)) void ShowMashPrompt() {
        if (!Game_State || !Game_State->flagE0 || input->value1e8 == 1) {
            InGameHUD* screen = hud.Get();
            uint32_t player = playerIndex;
            screen->window.Get();
            HudPlayerPanel* panel = screen->panel;
            if (player <= 3 && panel) {
                panel->showingStatus[player] = 1;
                panel->SetStatus(6, player);
            }
        }
    }
    __attribute__((always_inline)) void HideMashPrompt() {
        if (!Game_State || !Game_State->flagE0 || input->value1e8 == 1) {
            InGameHUD* screen = hud.Get();
            uint32_t player = playerIndex;
            HudPlayerPanel* panel = screen->panel;
            if (player <= 3 && panel) {
                panel->showingStatus[player] = 0;
                panel->SetStatus(-1, player);
            }
        }
    }
    void TurnToMoveInput();                              // 0x993550
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // slot 4 (0x978660)
    virtual void OnMessage(CharacterMessage* message);   // slot 159
    void Notify995d50();                                 // 0x995d50
    bool LearnMove(int move);                        // 0x80f430
    void OnHealthLost(float amount);                     // 0x995a30
    void OnHealthChanged(float amount);                  // 0x995700
    float Slot40() override;
    int Slot45() override;
    bool Slot46(BaseCharacter* other) override;
    // Whether this player's team is not `other`. A member taking the caller's team: the original loads the caller's team
    // before this one's, in 0x97f960 and 0x9936a0 alike, which a plain comparison doesn't do. The name is a guess.
    bool OnOtherTeam(int32_t other) const { return team != other; }
    float MaxHealth() override;
    float Slot58(bool flag) override;
    float Slot59() override;
    float SpeedScale() override;
    float LoseHealth(float amount) override;
    void GainHealth(float amount) override;
    void RestoreHealth() override;
    float Slot149() override;
    float MaxGuts() override;
    bool HealWithGuts(bool* out) override;
    float GutsCostScale() override;
    float Slot152() override;
    void ReactTo(BaseCharacter* other, int reaction, void* data) override;   // slot 21
    void Slot20() override;
    void FollowPlayfield() override;
    void PlayAnimationOn(int animation, bool loop, bool flag, BaseCharacter* other, float speed) override;
    bool Slot88(float amount) override;
    int State96(int event) override;
    int State100(int event) override;
    int State102(int event) override;
    int State104(int event) override;
    int State114(int event) override;
    int State122(int event) override;
    int Call993350();                    // 0x993350: returns 2 when it has changed state
    int Call9936a0();                    // 0x9936a0: the same
    void Slot94() override;
    int State136(int event) override;
    void Slot68() override;
    bool Slot156() override;
    // Unless +0x13f0 is set, moves along y by the stick.
    __attribute__((always_inline)) void SteerAlongY() {
        if (!flag13f0) {
            onyx::Vector3 depth;
            ReadMoveInput(input, &depth);
            motion.y = depth.y * jumpBackSpeed * SpeedScale();
        }
    }
    // Each frame on foot or in the air: turns to the stick and sets the target speed along x from it. Pushing against
    // the motion clears +0x1bc, otherwise it keeps the speed.
    __attribute__((always_inline)) void SteerFromInput() {
        TurnToMoveInput();
        onyx::Vector3 move;
        ReadMoveInput(input, &move);
        if (move.x == 0.0f) {
            motionTarget.x = 0.0f;
        } else {
            motionTarget.x = move.x * value8d4;
            float speed = motion.x;
            if ((move.x > 0.0f) == (speed > 0.0f)) value1bc = speed;
            else value1bc = 0.0f;
        }
        SteerAlongY();
    }
    void TurnAround() override;
    bool CanMount() override;
    void Slot43(float value) override;
    void FaceX(float x) override;
    int State120(int event) override;
    int State126(int event) override;
    int State138(int event) override;
    virtual void Slot160(const int* move, int* value);                       // slot 160
    virtual int State161(int event); virtual State State161Ptr();              // slots 161, 162
    virtual int State163(int event); virtual State State163Ptr();              // slots 163, 164
    virtual int State165(int event); virtual State State165Ptr();              // slots 165, 166
    virtual int State167(int event); virtual State State167Ptr();              // slots 167, 168
    virtual int State169(int event); virtual State State169Ptr();              // slots 169, 170
    virtual int State171(int event); virtual State State171Ptr();              // slots 171, 172
    virtual int State173(int event); virtual State State173Ptr();              // slots 173, 174
    virtual int State175(int event); virtual State State175Ptr();              // slots 175, 176
    virtual int State177(int event); virtual State State177Ptr();              // slots 177, 178
    virtual int State179(int event); virtual State State179Ptr();              // slots 179, 180
    virtual int State181(int event); virtual State State181Ptr();              // slots 181, 182
    virtual int State183(int event); virtual State State183Ptr();              // slots 183, 184
    virtual int State185(int event); virtual State State185Ptr();              // slots 185, 186
    virtual int State187(int event); virtual State State187Ptr();              // slots 187, 188
    virtual int State189(int event); virtual State State189Ptr();              // slots 189, 190
    virtual int State191(int event); virtual State State191Ptr();              // slots 191, 192
    virtual int State193(int event); virtual State State193Ptr();              // slots 193, 194
    virtual int State195(int event); virtual State State195Ptr();              // slots 195, 196
    virtual int State197(int event); virtual State State197Ptr();              // slots 197, 198
    virtual int State199(int event); virtual State State199Ptr();              // slots 199, 200
    virtual int State201(int event); virtual State State201Ptr();              // slots 201, 202
    virtual int State203(int event); virtual State State203Ptr();              // slots 203, 204
    virtual int State205(int event); virtual State State205Ptr();              // slots 205, 206
    virtual int State207(int event); virtual State State207Ptr();              // slots 207, 208
    virtual int State209(int event); virtual State State209Ptr();              // slots 209, 210
    virtual int State211(int event); virtual State State211Ptr();              // slots 211, 212
    virtual int State213(int event); virtual State State213Ptr();              // slots 213, 214
    virtual int State215(int event); virtual State State215Ptr();              // slots 215, 216
    virtual int State217(int event); virtual State State217Ptr();              // slots 217, 218
    virtual int State219(int event); virtual State State219Ptr();              // slots 219, 220
    virtual int State221(int event); virtual State State221Ptr();              // slots 221, 222
    virtual int State223(int event); virtual State State223Ptr();              // slots 223, 224
    virtual int State225(int event); virtual State State225Ptr();              // slots 225, 226
    virtual int State227(int event); virtual State State227Ptr();              // slots 227, 228
    virtual int State229(int event); virtual State State229Ptr();              // slots 229, 230
    virtual int State231(int event); virtual State State231Ptr();              // slots 231, 232
    virtual int State233(int event); virtual State State233Ptr();              // slots 233, 234
    virtual int State235(int event); virtual State State235Ptr();              // slots 235, 236
    virtual int State237(int event); virtual State State237Ptr();              // slots 237, 238
    virtual int State239(int event); virtual State State239Ptr();              // slots 239, 240
    virtual int State241(int event); virtual State State241Ptr();              // slots 241, 242
    virtual int State243(int event); virtual State State243Ptr();              // slots 243, 244
    virtual int State245(int event); virtual State State245Ptr();              // slots 245, 246
    virtual int State247(int event); virtual State State247Ptr();              // slots 247, 248
    virtual int State249(int event); virtual State State249Ptr();              // slots 249, 250
    virtual int State251(int event); virtual State State251Ptr();              // slots 251, 252
    virtual int State253(int event); virtual State State253Ptr();              // slots 253, 254
    virtual int Slot255(int event);                          // slot 255
    int CheckGroundInput();      // 0x990800: slot 255's code, called directly with no event by the overrides
    virtual int AirInput(int event);                         // slot 256
    int CheckAirInput();         // 0x991150: slot 256's code, called directly with no event by the overrides
    virtual void Slot257();                                  // slot 257

    char padding_77c[0xc];
    void* worldMapBroker;               // +0x788
    Singleton<InGameHUD> hud;    // +0x790
    Singleton<ItemRegistry> itemRegistry;               // +0x798
    Singleton<SwitchLevelGateAccess> levelGate; // +0x7a0: getter 0x770d70
    void* statistics;               // +0x7a8
    void* localization;               // +0x7b0
    void* pauseHandler;               // +0x7b8
    void* flashMenuPhase;               // +0x7c0
    void* selectedActors;               // +0x7c8
    Singleton<PersistentData> persistentData; // +0x7d0: getter 0x777710
    onyx::ComponentHandle* playerInfo; // +0x7d8
    onyx::ComponentHandle* materialModifiers; // +0x7e0
    uint8_t flag7e8;             // +0x7e8
    char padding_7e9[0x17];
    EventSlot event800;          // +0x800
    EventSlot event818;          // +0x818
    EventSlot event830;          // +0x830
    EventSlot event848;          // +0x848
    float statDefense;              // +0x860
    float statSpeed;              // +0x864
    float statWill;              // +0x868
    float statStrength;              // +0x86c
    uint32_t value870;           // +0x870
    float value874;              // +0x874
    float value878;              // +0x878
    float value87c;              // +0x87c
    float value880;              // +0x880
    float value884;              // +0x884
    float value888;              // +0x888
    float value88c;              // +0x88c
    float value890;              // +0x890
    float value894;              // +0x894
    float value898;              // +0x898
    int32_t value89c;            // +0x89c
    int32_t value8a0;            // +0x8a0
    int32_t value8a4;            // +0x8a4
    int32_t value8a8;            // +0x8a8
    int32_t value8ac;            // +0x8ac
    int32_t value8b0;            // +0x8b0
    int32_t value8b4;            // +0x8b4
    int32_t value8b8;            // +0x8b8
    int32_t value8bc;            // +0x8bc
    int32_t value8c0;            // +0x8c0
    int32_t value8c4;            // +0x8c4
    int32_t value8c8;            // +0x8c8
    int32_t value8cc;            // +0x8cc
    float value8d0;              // +0x8d0
    float value8d4;              // +0x8d4
    float mashStep;              // +0x8d8: what a press takes off the stun timer (State120)
    char padding_8dc[0x4];
    Attack attack8e0;            // +0x8e0
    Attack attack938;            // +0x938
    Attack attack990;            // +0x990
    Attack attack9e8;            // +0x9e8
    Attack attackA40;            // +0xa40
    Attack attackA98;            // +0xa98
    Attack attackAf0;            // +0xaf0
    Attack attackB48;            // +0xb48
    Attack attackBa0;            // +0xba0
    Attack attackBf8;            // +0xbf8
    Attack attackC50;            // +0xc50
    Attack attackCa8;            // +0xca8
    Attack attackD00;            // +0xd00
    Attack attackD58;            // +0xd58
    Attack attackDb0;            // +0xdb0
    Attack attackE08;            // +0xe08
    Attack attackE60;            // +0xe60
    Attack attackEb8;            // +0xeb8
    Attack attackF10;            // +0xf10
    Attack attackF68;            // +0xf68
    Attack attackFc0;            // +0xfc0
    Attack attack1018;           // +0x1018
    Attack attack1070;           // +0x1070
    Attack attack10c8;           // +0x10c8
    Attack attack1120;           // +0x1120
    Attack attack1178;           // +0x1178
    uint8_t flag11d0;            // +0x11d0
    char padding_11d1[0x3];
    int32_t value11d4;           // +0x11d4
    int32_t value11d8;           // +0x11d8
    int32_t value11dc;           // +0x11dc
    uint8_t flag11e0;            // +0x11e0
    char padding_11e1[0x3];
    float specialCost;           // +0x11e4: guts a special attack costs, before GutsCostScale's scaling
    int32_t value11e8;           // +0x11e8
    int32_t value11ec;           // +0x11ec
    uint8_t flag11f0;            // +0x11f0
    char padding_11f1[0x3];
    int32_t value11f4;           // +0x11f4
    float slideStopSpeed;        // +0x11f8
    float slideAttackSpeed;      // +0x11fc
    float kickSpeed;              // +0x1200
    float kickY;                  // +0x1204
    float kickZ;                  // +0x1208
    float dashSpeed;              // +0x120c
    float dashY;                  // +0x1210
    float dashZ;                  // +0x1214
    int32_t value1218;           // +0x1218
    int32_t value121c;           // +0x121c
    int32_t value1220;           // +0x1220
    int32_t value1224;           // +0x1224
    int32_t value1228;           // +0x1228
    int32_t value122c;           // +0x122c
    int32_t value1230;           // +0x1230
    int32_t value1234;           // +0x1234
    char padding_1238[0x10];
    int32_t value1248;           // +0x1248
    char padding_124c[0x4];
    int32_t value1250;           // +0x1250
    int32_t value1254;           // +0x1254
    uint8_t flag1258;            // +0x1258
    char padding_1259[0xf];
    float value1268;             // +0x1268
    int32_t value126c;           // +0x126c
    int32_t value1270;           // +0x1270
    char padding_1274[0xc];
    float airTimer;              // +0x1280: with +0x1288 raised, state 102 takes input when it runs out
    float airTimerStart;         // +0x1284
    uint8_t flag1288;            // +0x1288
    char padding_1289[0x3];
    int32_t value128c;           // +0x128c
    int32_t value1290;           // +0x1290
    int32_t value1294;           // +0x1294
    int32_t value1298;           // +0x1298
    float partnerDelay;          // +0x129c: how long state 136 holds the partner
    int32_t value12a0;           // +0x12a0
    int32_t value12a4;           // +0x12a4
    float effect10Time;          // +0x12a8: how long Effect10 lasts (it sets +0x13d8 from it)
    int32_t value12ac;           // +0x12ac
    int32_t value12b0;           // +0x12b0
    float value12b4;             // +0x12b4
    int32_t value12b8;           // +0x12b8
    char padding_12bc[0x4];
    int32_t value12c0;           // +0x12c0
    int32_t value12c4;           // +0x12c4
    int32_t value12c8;           // +0x12c8
    int32_t value12cc;           // +0x12cc
    int32_t value12d0;           // +0x12d0
    int32_t value12d4;           // +0x12d4
    int32_t value12d8;           // +0x12d8
    int32_t value12dc;           // +0x12dc
    uint8_t flag12e0;            // +0x12e0
    char padding_12e1[0x3];
    int32_t value12e4;           // +0x12e4
    int32_t value12e8;           // +0x12e8
    uint8_t flag12ec;            // +0x12ec
    char padding_12ed[0x3];
    int32_t value12f0;           // +0x12f0
    int32_t value12f4;           // +0x12f4
    int32_t value12f8;           // +0x12f8
    int32_t value12fc;           // +0x12fc
    int32_t value1300;           // +0x1300
    int32_t value1304;           // +0x1304
    uint8_t flag1308;            // +0x1308
    char padding_1309[0x4f];
    void* reference1358;         // +0x1358
    void* reference1360;         // +0x1360
    void* reference1368;         // +0x1368
    void* reference1370;         // +0x1370
    void* reference1378;         // +0x1378
    void* reference1380;         // +0x1380
    void* reference1388;         // +0x1388
    uint32_t mashNeeded;         // +0x1390: presses it takes to break free (State245)
    float strikerCost;           // +0x1394: guts it takes to call a striker
    uint32_t strikerChance;      // +0x1398: the percentage at which Call9983e0 picks a striker theme of its own
    uint32_t theme5Chance;       // +0x139c: then the percentage above which it is theme 5 (else 6)
    int32_t value13a0;           // +0x13a0
    int32_t value13a4;           // +0x13a4
    int32_t value13a8;           // +0x13a8
    int32_t value13ac;           // +0x13ac
    uint8_t flag13b0;            // +0x13b0
    uint8_t flag13b1;            // +0x13b1
    char padding_13b2[0x6];
    int32_t value13b8;           // +0x13b8: +0x11f4 while in state 163, else 0
    char padding_13bc[0x4];
    uint8_t flag13c0;            // +0x13c0
    uint8_t flag13c1;            // +0x13c1
    char padding_13c2[0x2];
    onyx::Vector3 lastMove;      // +0x13c4: the directions AnyInputPressed saw
    uint32_t pressCount;         // +0x13d0: buttons pressed in state 205
    uint8_t flag13d4;            // +0x13d4: state 205 counts towards +0x8b8 while it's set
    char padding_13d5[0x3];
    float value13d8;             // +0x13d8
    int32_t effectCounter;       // +0x13dc: slot 68's calls since it last ran 0x80f6e0
    char padding_13e0[0x8];
    float money;                 // +0x13e8: kept in whole multiples of 0.05
    char padding_13ec[0x4];
    uint8_t flag13f0;            // +0x13f0
    uint8_t flag13f1;            // +0x13f1
    char padding_13f2[0x2];
    int32_t pendingItem;         // +0x13f4: the item to use next, or -1
    uint8_t flag13f8;            // +0x13f8
    char padding_13f9[0x1];
    uint8_t flag13fa;            // +0x13fa: raised when the idle timer sends states 96 and 163 to state 229
    char padding_13fb[0x1];
    float idleTime;              // +0x13fc: past 3 s, states 96 and 163 go to state 229
    char padding_1400[0xc];
    uint8_t flag140c;            // +0x140c
    char padding_140d[0x3];
    float value1410;             // +0x1410
    int32_t value1414;           // +0x1414
    int32_t value1418;           // +0x1418
    int32_t value141c;           // +0x141c
    char padding_1420[0xc];
    float value142c[6];          // +0x142c
    char padding_1444[0xc];
    int32_t value1450;           // +0x1450: counts slot 68's calls
    char padding_1454[0x4];
    float moneyEarned;           // +0x1458
    uint32_t mashCount;          // +0x145c: presses so far
    char padding_1460[0x28];
    void* activeStriker;              // +0x1488: the striker this player has called in, cleared as it leaves
    char padding_1490[0x30];
    int32_t airAttackCount;      // +0x14c0: since the last landing
    char padding_14c4[0x8];
    int32_t value14cc;           // +0x14cc
    int32_t value14d0;           // +0x14d0
    int32_t value14d4;           // +0x14d4
    int32_t value14d8;           // +0x14d8
    int32_t value14dc;           // +0x14dc
    int32_t value14e0;           // +0x14e0
    int32_t value14e4;           // +0x14e4
    int32_t team;                // +0x14e8: a player acts on players whose team differs (slot 46)
    char padding_14ec[0x4];
    int32_t value14f0;           // +0x14f0
    int32_t value14f4;           // +0x14f4
    uint8_t flag14f8;            // +0x14f8: EnemyGiant's charge passes over a player with it set
    uint8_t flag14f9;            // +0x14f9
    char padding_14fa[0x6];
    PlayerInput* input;          // +0x1500
    uint32_t playerIndex;        // +0x1508
    uint8_t flag150c;            // +0x150c
    uint8_t flag150d;            // +0x150d
    char padding_150e[0x2];
    uint8_t flag1510;            // +0x1510: sends state 205 to state 102
    char padding_1511[0x7];
    int32_t value1518;           // +0x1518
    int32_t value151c;           // +0x151c
    uint8_t flag1520;            // +0x1520
    char padding_1521[0x4];
    uint8_t flag1525;            // +0x1525
    char padding_1526[0x3a];     // up to +0x1560, where the playable classes' fields begin
};
static_assert(sizeof(ControllablePlayer) == 0x1560, "ControllablePlayer size");
// A checked cast: the character if it is non-null and passes IsA(T::kType).
template<class T> __attribute__((always_inline)) inline T* Cast(BaseCharacter* character) {
    return character && character->IsA(T::kType) ? static_cast<T*>(character) : nullptr;
}
// Onyx::Catalog<ControllablePlayer> (component type 0x0bf4a9b7).
struct PlayerCatalog : onyx::Component {
    char padding_8[0x78];
    uint64_t count;                   // +0x80
    char padding_88[0x8];
    ControllablePlayer** players;     // +0x90
};

}  // namespace SPTG
