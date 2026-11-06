// The boss classes (RTTI: Onyx::Component::Compose<Boss>; Lynette and Envy derive
// from TagTeamMember): their own states, each followed by its getter, and the
// overrides the sources define. Names are provisional.
#pragma once
#include "Boss.h"
#include "InteractiveObject.h"

namespace SPTG {

// vtable 0x188c9c0, 268 slots
struct TagTeamMember : Boss {
    SPTG_TYPE(Boss, 0x53b1eadcu)
    bool IsA(uint32_t type) override;   // slot 12 (0xa259c0)
    void Slot13();
    bool Slot168();
    bool Slot82();
    float TakeDamage(const void* hit, BaseCharacter* other);
    // Slot 69's body, which Lynette inlines (see TagTeamMember::TakeDamage).
    __attribute__((always_inline)) float TakeTagTeamDamage(const void* hit, BaseCharacter* other) {
        float damage = TakeBossDamage(hit, other);
        healthD7c -= damage;
        flagD80 = !flagD5a & (healthD7c <= 0.0f);
        return damage;
    }
    virtual bool Slot238();                                                  // slot 238, overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    SPTG_SLOT(258)
    virtual bool Slot259();                                                  // slot 259
    SPTG_SLOT(260)
    virtual void Slot261(TagTeamMember* partner);                            // slot 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267

    char padding_d48[0x4];
    float healthD4c;             // +0xd4c: copied to +0xd7c by Lynette's update
    float timeD50;               // +0xd50: copied to +0xd78 when hit in state 266
    float retreatDistance;       // +0xd54: how far along x from where slot 261 starts the retreat position
    uint8_t flagD58;             // +0xd58
    uint8_t flagD59;             // +0xd59
    uint8_t flagD5a;             // +0xd5a
    uint8_t flagD5b;             // +0xd5b
    onyx::Vector3 returnPosition; // +0xd5c: where Lynette reappears in state 264
    onyx::Vector3 retreatPosition; // +0xd68: and in state 262
    uint32_t valueD74;           // +0xd74: the facing mode slot 261 picks, 1 when it moves the point left
    float timerD78;              // +0xd78: counted down by slot 13
    float healthD7c;             // +0xd7c: lowered by every hit
    uint8_t flagD80;             // +0xd80: set once +0xd7c runs out
    uint8_t flagD81;             // +0xd81
    char padding_d82[0x1];
    uint8_t flagD83;             // +0xd83
    uint8_t flagD84;             // +0xd84
};
// vtable 0x188a8a0, 272 slots
struct Todd : Boss {
    SPTG_TYPE(Boss, 0x4aedc535u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa20240)
    static void CallA251e0(onyx::Vector2* out, Todd* self);   // 0xa251e0
    void AttackLanded(AnimatedAiActor* target) override;
    float Slot59();
    void Update();
    bool OnHit(BaseCharacter* other, void* hit);
    float TakeDamage(const void* hit, BaseCharacter* other);
    bool Slot82();
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    int State98(int event); State State98Ptr();   // slots 98, 99, override Boss
    int State106(int event); State State106Ptr();   // slots 106, 107, override Boss
    int State122(int event); State State122Ptr();   // slots 122, 123, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    int State186(int event); State State186Ptr();   // slots 186, 187, override Boss
    int State200(int event); State State200Ptr();   // slots 200, 201, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual bool Slot237(const AttackSlot& request);                         // slot 237, overrides Boss
    virtual void Slot240();                                                  // slot 240, overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249, overrides Boss
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271

    onyx::ComponentHandle* handlesD48[8]; // +0xd48: moved by slot 4
    uint8_t flagD88;             // +0xd88: raised in states 98 and 248
    uint8_t flagD89;             // +0xd89
    char padding_d8a[0x1];
    uint8_t flagD8b;             // +0xd8b: set by a landed attack in animation 141
    float damageD8c;             // +0xd8c: all damage taken
    int32_t countD90;            // +0xd90
    int32_t valueD94;            // +0xd94
    char padding_d98[0x14];
    uint32_t shotsFired;         // +0xdac: state 258's attacks so far
    float loopsDone;             // +0xdb0: state 258's loops of animation 21
    int32_t hitsDb4;             // +0xdb4: hits taken in state 260
    float valueDb8;              // +0xdb8
    float damageDbc;             // +0xdbc: damage taken in state 270
    float pointOffset;           // +0xdc0: CallA251e0's x offset from the middle of the screen
    float shotDuration;          // +0xdc4: state 258's loops of animation 21 at this speed
    char padding_dc8[0x10];
    AttackSlot attackDd8;        // +0xdd8: requested every update with kind 20; passed to 0xa255e0
    AttackSlot attackE50;        // +0xe50: requested every update with kind 11
    AttackSlot attackEc8;        // +0xec8
    AttackSlot attackF40;        // +0xf40
    AttackSlot attackFb8;        // +0xfb8: requested every update with kind 28
    AttackSlot attack1030;       // +0x1030
    AttackSlot attack10a8;       // +0x10a8
    ProjectileSpawnInfo projectile; // +0x1120
    int32_t value1190;           // +0x1190
    int32_t value1194;           // +0x1194
    float value1198;             // +0x1198: returned by slot 59
    float limit119c;             // +0x119c
    float limit11a0;             // +0x11a0
    int32_t value11a4;           // +0x11a4
    float liftHeight11a8;        // +0x11a8: how high state 28's objects go
    int32_t value11ac;           // +0x11ac
    float limit11b0;             // +0x11b0: slot 237 accepts kind 11 once +0xdb8 reaches it
    float loopCount;             // +0x11b4: how many loops of animation 21 state 258 plays
    uint32_t shotCount;          // +0x11b8: attacks spread over them
    int32_t value11bc;           // +0x11bc
    int32_t value11c0;           // +0x11c0
    int32_t value11c4;           // +0x11c4
    int32_t value11c8;           // +0x11c8
    int32_t value11cc;           // +0x11cc
    float value11d0;             // +0x11d0: the heights CallA251e0 picks from
    float value11d4;             // +0x11d4
    float value11d8;             // +0x11d8
    float value11dc;             // +0x11dc: CallA251e0's x offsets, taken by side
    float value11e0;             // +0x11e0
    int32_t value11e4;           // +0x11e4
    float chargeTimeLimit;       // +0x11e8: state 270 leaves after this long
    int32_t value11ec;           // +0x11ec
    int32_t value11f0;           // +0x11f0
    float chargeDamageLimit;     // +0x11f4: or after this much damage
    int32_t value11f8;           // +0x11f8
    int32_t value11fc;           // +0x11fc
    int32_t value1200;           // +0x1200
    int32_t value1204;           // +0x1204
    int32_t value1208;           // +0x1208
    int32_t value120c;           // +0x120c
    int32_t value1210;           // +0x1210
    int32_t value1214;           // +0x1214
    int32_t value1218;           // +0x1218
    int32_t value121c;           // +0x121c
    uint8_t flag1220;            // +0x1220
};
// vtable 0x1896e38, 284 slots
// An object with its own animation, as GigaGideon's +0xba8 holds.
struct AnimatedAttachment {
    char padding_0[0x58];
    onyx::ComponentHandle* modifiers;        // +0x58: what GigaGideon's slot 242 gives the effect at +0x88
    onyx::ComponentHandle* animatedObject;   // +0x60, SPTG::AnimatedObject
    onyx::ComponentHandle* animationHandle;  // +0x68
    bool loop;                               // +0x70: whether the animation PlayAttachmentAnimation started loops
    char padding_71[0x3];
    int32_t animation;                       // +0x74: that animation
    char padding_78[0x10];
    struct ActorEffect* effect;              // +0x88: run alongside the boss's low-health effect
};
// What an attachment's animated object needs here.
struct AttachmentVisual : onyx::Component {
    char padding_8[0x30];
    uint8_t componentFlags;  // +0x38
    char padding_39[0x17];
    onyx::ComponentHandle* handle50;  // +0x50: the target GigaGideon's slot 242 gives the attachment's effect
    char padding_58[0x20];
    uint8_t visible;         // +0x78
};
// Plays an animation on the attachment a handle holds, if it holds one (0xa5ec80).
void PlayAttachmentAnimation(onyx::ComponentHandle* handle, int animation, bool loop);

struct GigaGideon : Boss {
    SPTG_TYPE(Boss, 0x3c09f4bdu)
    bool IsA(uint32_t type) override;   // slot 12 (0xa58380)
    static void CallA5edb0(onyx::Vector3* out, GigaGideon* self);   // 0xa5edb0: picks state 270's arrival point
    void Spawn(const EnemySpawnInfo* info) override;
    void Slot19();
    void SetAnimationSpeed(float speed) override;
    float LoseHealth(float amount) override;
    // Hides the attachment's animated object if it's showing.
    __attribute__((always_inline)) void HideAttachment() {
        if (handleBa8 && handleBa8->object) {
            AnimatedAttachment* attachment = reinterpret_cast<AnimatedAttachment*>(handleBa8->object);
            AttachmentVisual* visual = onyx::Find<AttachmentVisual, onyx_types::type_6448f1af>(attachment->animatedObject);
            if (visual->visible && (visual->componentFlags & 1)) {
                onyx::Get<AttachmentVisual, onyx_types::type_6448f1af>(attachment->animatedObject)->visible = 0;
            }
        }
    }
    onyx::Vector2 Slot147();
    void SetSolid(bool solid);
    void Slot13();
    void Update();
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    int State106(int event); State State106Ptr();   // slots 106, 107, override Boss
    int State116(int event); State State116Ptr();   // slots 116, 117, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    virtual onyx::Vector3 ArrivalPoint();                                    // slot 241, overrides Boss
    virtual void Slot242();                                                  // slot 242, overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273
    virtual int State274(int event); virtual State State274Ptr();   // slots 274, 275
    virtual int State276(int event); virtual State State276Ptr();   // slots 276, 277
    virtual int State278(int event); virtual State State278Ptr();   // slots 278, 279
    virtual int State280(int event); virtual State State280Ptr();   // slots 280, 281
    virtual int State282(int event); virtual State State282Ptr();   // slots 282, 283

    char padding_d48[0x4];
    int32_t armorMode;           // +0xd4c: in 1 the armor takes the hits, in 2 the core does while exposed
    int32_t valueD50;            // +0xd50
    float armorHealth;           // +0xd54: state 258 leaves for 264 when it's used up
    int32_t valueD58;            // +0xd58
    float armorTally;            // +0xd5c: taken since the armor last staggered him
    float coreHealth;            // +0xd60
    char padding_d64[0x1];
    uint8_t armorStagger;        // +0xd65: raised when the tally reaches its limit; state 258 goes to 262
    uint8_t coreExposed;         // +0xd66
    uint8_t coreBroken;          // +0xd67: raised when the core is used up
    bool ragedD68;               // +0xd68: watched by GigaGideonAI, which reports its first rise
    char padding_d69[0xf];
    AttackSlot attackD78;        // +0xd78: started in state 262
    char padding_df0[0x70];
    float armorHealthStart;      // +0xe60
    char padding_e64[0x4];
    float limitE68;              // +0xe68
    char padding_e6c[0x34];
    float armorTallyLimit;       // +0xea0
    float speedEa4;              // +0xea4: animation speed in state 262
    float limitEa8;              // +0xea8
    char padding_eac[0x4];
    AttackSlot attacks[2];       // +0xeb0: requested every update with kinds 20 and 21
    char padding_fa0[0x240];
    float value11e0;             // +0x11e0
    float value11e4;             // +0x11e4: the height state 266 lands him at and slot 241 puts him at
    float sinkSpeed;             // +0x11e8: how fast state 266 lowers him to it
    float coreHealthStart;       // +0x11ec
    float chargeTime;            // +0x11f0: how long state 272 charges before state 282
    char padding_11f4[0x8];
    float arrivalOffset;         // +0x11fc: added to ArrivalPoint's x
    float value1200;             // +0x1200
    float value1204;             // +0x1204
    char padding_1208[0x58];
    PairList list1260;           // +0x1260
    char padding_12b0[0x8];
    BossEffect* effect;          // +0x12b8
};
// vtable 0x18977d0, 260 slots
struct Gideon : Boss {
    SPTG_TYPE(Boss, 0x3038d415u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa600a0)
    bool Slot168();
    bool OnHit(BaseCharacter* other, void* hit);
    void Update();
    int State98(int event); State State98Ptr();   // slots 98, 99, override Boss
    int State196(int event); State State196Ptr();   // slots 196, 197, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual bool Slot237(const AttackSlot& request);                         // slot 237, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259

    char padding_d48[0x1];
    uint8_t flagD49;             // +0xd49
    char padding_d4a[0x6];
    AttackSlot attackD50;        // +0xd50: requested every update with kind 20
    AttackSlot attackDc8;        // +0xdc8: requested every update with kind 11
    AttackSlot attackE40;        // +0xe40: requested every update with kind 31
    AttackSlot attackEb8;        // +0xeb8: requested every update with kind 79
    AttackSlot attackF30;        // +0xf30: requested every update with kind 28
    char padding_fa8[0x78];
    AttackSlot attack;           // +0x1020
};
// vtable 0x1896478, 266 slots
struct SuperGideon : Boss {
    SPTG_TYPE(Boss, 0x7eebcd6au)
    bool IsA(uint32_t type) override;   // slot 12 (0xa52a60)
    bool Slot73();
    void Slot13();
    void Update();
    bool Slot82();
    float TakeDamage(const void* hit, BaseCharacter* other);
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    int State122(int event); State State122Ptr();   // slots 122, 123, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    int State186(int event); State State186Ptr();   // slots 186, 187, override Boss
    int State196(int event); State State196Ptr();   // slots 196, 197, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    virtual bool Slot243();                                                  // slot 243, overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265

    char padding_d48[0x1];
    uint8_t flagD49;             // +0xd49
    uint8_t flagD4a;             // +0xd4a
    char padding_d4b[0x1];
    float damageD4c;             // +0xd4c: damage since the last roll
    char padding_d50[0x8];
    AttackSlot attacksD58[6];    // +0xd58
    ProjectileSpawnInfo projectiles[2]; // +0x1028
    int32_t value1108;           // +0x1108
    int32_t value110c;           // +0x110c
    int32_t value1110;           // +0x1110
    int32_t value1114;           // +0x1114
    float limit1118;             // +0x1118
    float chance111c;            // +0x111c: percent
    int32_t value1120;           // +0x1120
    int32_t value1124;           // +0x1124
    int32_t value1128;           // +0x1128
    int32_t value112c;           // +0x112c
    float value1130;             // +0x1130: scales slot 57 in state 244
    int32_t value1134;           // +0x1134
    int32_t value1138;           // +0x1138
    char padding_113c[0x4];
    PairList list1140;           // +0x1140
    BossEffect* effect;          // +0x1190
    int32_t value1198;           // +0x1198
    int32_t value119c;           // +0x119c
    int32_t value11a0;           // +0x11a0
    uint8_t flag11a4;            // +0x11a4
};
// vtable 0x1895a88, 272 slots
struct KenKyle : Boss {
    SPTG_TYPE(Boss, 0x70d627b3u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa4b900)
    float TakeDamage(const void* hit, BaseCharacter* other);
    bool OnHit(BaseCharacter* other, void* hit);
    void Update();
    bool Slot82();
    void CallA506f0(uint32_t index);   // 0xa506f0
    void CallA501d0();                 // 0xa501d0
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    int State114(int event); State State114Ptr();   // slots 114, 115, override Boss
    int State122(int event); State State122Ptr();   // slots 122, 123, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    int State186(int event); State State186Ptr();   // slots 186, 187, override Boss
    int State196(int event); State State196Ptr();   // slots 196, 197, override Boss
    int State198(int event); State State198Ptr();   // slots 198, 199, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual void Slot240();                                                  // slot 240, overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247, overrides Boss
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271

    char padding_d48[0x1];
    uint8_t flagD49;             // +0xd49
    char padding_d4a[0x1];
    uint8_t flagD4b;             // +0xd4b: the twins take turns: one has it set
    char padding_d4c[0x1];
    uint8_t flagD4d;             // +0xd4d: raised while in state 260
    uint8_t flagD4e;             // +0xd4e
    char padding_d4f[0x1];
    float timeD50;               // +0xd50: reset in state 198
    float valueD54;              // +0xd54
    onyx::ComponentHandle* twin; // +0xd58: the other of Ken and Kyle
    char padding_d60[0x8];
    AttackSlot attackD68;        // +0xd68: requested every update with kind 20
    AttackSlot attackDe0;        // +0xde0: requested every update with kind 11
    AttackSlot attackE58;        // +0xe58: requested every update with kind 31
    AttackSlot attackEd0;        // +0xed0: requested every update with kind 32
    AttackSlot attackF48;        // +0xf48: requested every update with kind 79
    AttackSlot attackFc0;        // +0xfc0
    AttackSlot attack1038;       // +0x1038
    int32_t value10b0;           // +0x10b0
    int32_t value10b4;           // +0x10b4
    float limit10b8;             // +0x10b8
    float range10bc;             // +0x10bc: how close the twins meet in state 260
    int32_t value10c0;           // +0x10c0
    float value10c4;             // +0x10c4
    float value10c8;             // +0x10c8
    int32_t value10cc;           // +0x10cc
    int32_t value10d0;           // +0x10d0
    float chance10d4;            // +0x10d4: percent
    int32_t value10d8;           // +0x10d8
    float range10dc;             // +0x10dc: the twin joins states 246 and 248 within this distance
    float value10e0;             // +0x10e0: passed to 0x996c30 by slot 240
    float limit10e4;             // +0x10e4
    float stepX;                 // +0x10e8: how far 0xa501d0 moves him the way he faces
    float stepY;                 // +0x10ec: and in y
};
// vtable 0x18949c8, 268 slots
struct LucasLee : Boss {
    SPTG_TYPE(Boss, 0x4e00c44au)
    bool IsA(uint32_t type) override;   // slot 12 (0xa478f0)
    void Slot13();
    void ReactTo(BaseCharacter* other, int reaction, void* data);
    bool Slot82();
    void Update();
    void PlayAnimation(int animation, bool a, bool b, float speed);
    bool CollectSpecialAttacks(onyx::Vector<uint32_t>* out);
    int State108(int event); State State108Ptr();   // slots 108, 109, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual bool Slot237(const AttackSlot& request);                         // slot 237, overrides Boss
    virtual bool IsPlaying(int animation);                                   // slot 239, overrides Boss
    virtual onyx::Vector3 ArrivalPoint();                                    // slot 241, overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267

    char padding_d48[0x8];
    onyx::ComponentHandle* heldAction;  // +0xd50: runs once he's been held for +0xfb0 seconds
    AttackSlot attackD58;        // +0xd58: requested every update with kind 19
    AttackSlot attackDd0;        // +0xdd0: requested every update with kind 31
    AttackSlot attackE48;        // +0xe48: requested every update with kind 11
    AttackSlot attackEc0;        // +0xec0: requested every update with kind 174; started in state 266
    AttackSlot attackF38;        // +0xf38: requested every update with kind 178
    float heldLimit;             // +0xfb0
    char padding_fb4[0x1c];
    uint8_t flagFd0;             // +0xfd0: switches to the other animation set
    uint8_t flagFd1;             // +0xfd1: drops what he carries once it reaches the ground
    char padding_fd2[0x1a];
    float heldTime;              // +0xfec
    int32_t countFf0;            // +0xff0
    uint32_t arrivalIndex;       // +0xff4: the point slot 241 picked
    InteractiveObject* carried;  // +0xff8: what he drops when he falls (state 262 tests its state 78)
};
// vtable 0x1891ed8, 272 slots
struct Roxy : Boss {
    SPTG_TYPE(Boss, 0x55ad8d4du)
    bool IsA(uint32_t type) override;   // slot 12 (0xa3c320)
    void Slot13();
    void Update();
    float TakeDamage(const void* hit, BaseCharacter* other);
    int State122(int event); State State122Ptr();   // slots 122, 123, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271

    char padding_d48[0x3c];
    float valueD84;              // +0xd84: the share of slot 57 above which state 122 doesn't roll
    AttackSlot attackD88;        // +0xd88: started shotCount times in state 262
    AttackSlot attackE00;        // +0xe00: started in state 264
    AttackSlot attackE78;        // +0xe78: started in state 268
    AttackSlot attackEf0;        // +0xef0: started in state 266
    AttackSlot attackF68;        // +0xf68: requested every update with kind 79
    AttackSlot attackFe0;        // +0xfe0: requested every update with kind 177
    char padding_1058[0xc8];
    float shotDuration;          // +0x1120: state 262's animation length at this speed
    float shotCount;             // +0x1124: attacks spread over state 262
    uint32_t shotsFired;         // +0x1128: state 262's attacks so far
};
// vtable 0x1890e58, 260 slots
struct RoxyMirror : Boss {
    SPTG_TYPE(Boss, 0x4e41bcb8u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa3a810)
    void Slot7();
    void Slot13();
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
};
// vtable 0x1899b20, 266 slots
struct Chau : Boss {
    SPTG_TYPE(Boss, 0x0ee894c1u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa6a440)
    void Update();
    bool OnHit(BaseCharacter* other, void* hit);
    float TakeDamage(const void* hit, BaseCharacter* other);
    bool Slot73();
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    int State116(int event); State State116Ptr();   // slots 116, 117, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    int State196(int event); State State196Ptr();   // slots 196, 197, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual bool Slot237(const AttackSlot& request);                         // slot 237, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265

    void* slotD48;               // +0xd48: filled by AssignComponentSlot
    void* slotD50;               // +0xd50
    ReferenceList referencesD58; // +0xd58
    ReferenceList referencesD80; // +0xd80
    char padding_da8[0x4];
    float shotDuration;          // +0xdac: state 258's animation length at this speed
    uint32_t shotsFired;         // +0xdb0: state 258's attacks so far
    uint32_t phaseDb4;           // +0xdb4: set from health by slot 69
    char padding_db8[0x20];
    AttackSlot attackDd8;        // +0xdd8
    AttackSlot attackE50;        // +0xe50
    AttackSlot attackEc8;        // +0xec8
    AttackSlot attackF40;        // +0xf40
    AttackSlot attackFb8;        // +0xfb8
    AttackSlot attack1030;       // +0x1030
    AttackSlot attack10a8;       // +0x10a8
    AttackSlot attack1120;       // +0x1120
    uint32_t shotCount;          // +0x1198: attacks spread over state 258
    int32_t value119c;           // +0x119c
    int32_t value11a0;           // +0x11a0
    int32_t value11a4;           // +0x11a4
    int32_t value11a8;           // +0x11a8
    int32_t value11ac;           // +0x11ac
    int32_t value11b0;           // +0x11b0
    int32_t value11b4;           // +0x11b4
    int32_t value11b8;           // +0x11b8
    int32_t value11bc;           // +0x11bc
    float phaseStep;             // +0x11c0
    uint32_t phaseCount;         // +0x11c4
    onyx::Vector<int32_t> vector11c8; // +0x11c8
    char padding_11e8[0x8];
    onyx::Vector<int32_t> vector11f0; // +0x11f0
    char padding_1210[0x8];
    EventSlot event1218;         // +0x1218
};
// vtable 0x1898018, 284 slots
struct Lynette : TagTeamMember {
    SPTG_TYPE(TagTeamMember, 0x6c1efe14u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa62250)
    bool Slot46(BaseCharacter* other);
    void Update();
    float TakeDamage(const void* hit, BaseCharacter* other);
    bool Slot82();
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual void Slot234(int kind);                                          // slot 234, overrides TagTeamMember
    virtual bool Slot237(const AttackSlot& request);                         // slot 237, overrides TagTeamMember
    virtual bool Slot238();                                                  // slot 238, overrides TagTeamMember
    virtual onyx::Vector3 ArrivalPoint();                                    // slot 241, overrides TagTeamMember
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides TagTeamMember
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides TagTeamMember
    virtual bool Slot259();                                                  // slot 259, overrides TagTeamMember
    SPTG_SLOT(260)   // overrides TagTeamMember
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263, overrides TagTeamMember
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265, overrides TagTeamMember
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273
    virtual int State274(int event); virtual State State274Ptr();   // slots 274, 275
    virtual int State276(int event); virtual State State276Ptr();   // slots 276, 277
    virtual int State278(int event); virtual State State278Ptr();   // slots 278, 279
    virtual int State280(int event); virtual State State280Ptr();   // slots 280, 281
    virtual int State282(int event); virtual State State282Ptr();   // slots 282, 283

    uint8_t flagD85;             // +0xd85: raised when state 280 ends
    char padding_d86[0x2];
    float damageTaken;           // +0xd88: hit values (+0x0) taken in states 274, 278 and 280
    char padding_d8c[0x8];
    uint32_t shotsFired;         // +0xd94: state 270's attacks so far
    float shotDuration;          // +0xd98: state 270's animation length at this speed
    char padding_d9c[0x2c];
    AttackSlot attackDc8;        // +0xdc8: requested every update with kind 20
    AttackSlot attack;           // +0xe40: requested every update with kind 11
    AttackSlot attackEb8;        // +0xeb8: requested every update with kind 180
    int32_t valueF30;            // +0xf30: serialized through a uint32_t
    float sideOffset;            // +0xf34: how far beside the target ArrivalPoint aims
    float limitF38;              // +0xf38
    float limitF3c;              // +0xf3c
    float limitF40;              // +0xf40
    float limitF44;              // +0xf44
    int32_t valueF48;            // +0xf48
    int32_t valueF4c;            // +0xf4c
    uint32_t shotCount;          // +0xf50: attacks spread over state 270
    float closeRange;            // +0xf54: kind 180 is refused with a target this close
    float limitF58;              // +0xf58
    char padding_f5c[0x4];
    PairList listF60;            // +0xf60
};
// vtable 0x1892fb8, 269 slots
struct Patel : Boss {
    SPTG_TYPE(Boss, 0x2307dac3u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa3fa40)
    bool OnHit(BaseCharacter* other, void* hit);
    float TakeDamage(const void* hit, BaseCharacter* other);
    float Slot170();
    void Update();
    void CallA41ca0();   // 0xa41ca0
    void Slot13();
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual bool Slot237(const AttackSlot& request);                         // slot 237, overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247, overrides Boss
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    SPTG_SLOT(268)

    char padding_d48[0x10];
    uint32_t chickCount;         // +0xd58
    char padding_d5c[0x4];
    onyx::ComponentHandle** chicks; // +0xd60: HipsterChick handles
    char padding_d68[0x8];
    uint32_t attackCount;        // +0xd70: attacks in state 264
    float healthStep;            // +0xd74: health fraction lost before the next mode
    float scaleD78;              // +0xd78: scales slot 170 in mode 4
    char padding_d7c[0xc];
    float periodD88;             // +0xd88
    char padding_d8c[0x4];
    AttackSlot attackD90;        // +0xd90: requested every update with kind 20
    AttackSlot attackE08;        // +0xe08: requested every update with kind 32
    AttackSlot attackE80;        // +0xe80: requested every update with kind 11
    AttackSlot attackEf8;        // +0xef8: requested every update with kind 79
    AttackSlot attackF70;        // +0xf70: started every +0xd88 seconds in state 262
    char padding_fe8[0x10];
    float attacksDone;           // +0xff8: counted in state 264
    int32_t modeFfc;             // +0xffc
    uint8_t modeChanged;         // +0x1000
};
// vtable 0x1898a48, 274 slots
struct Envy : TagTeamMember {
    SPTG_TYPE(TagTeamMember, 0x7d97ec86u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa66e30)
    float TakeDamage(const void* hit, BaseCharacter* other);
    bool Slot82();
    void Update();
    int State122(int event); State State122Ptr();   // slots 122, 123, override TagTeamMember
    int State186(int event); State State186Ptr();   // slots 186, 187, override TagTeamMember
    int State198(int event); State State198Ptr();   // slots 198, 199, override TagTeamMember
    virtual void Slot234(int kind);                                          // slot 234, overrides TagTeamMember
    virtual onyx::Vector3 ArrivalPoint();                                    // slot 241, overrides TagTeamMember
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides TagTeamMember
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides TagTeamMember
    virtual bool Slot259();                                                  // slot 259, overrides TagTeamMember
    SPTG_SLOT(260)   // overrides TagTeamMember
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263, overrides TagTeamMember
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273

    char padding_d85[0xb];
    float damageTaken;           // +0xd90: reset in state 268
    char padding_d94[0x4];
    AttackSlot attack;           // +0xd98: requested every update with kind 11
    AttackSlot attackE10;        // +0xe10: requested every update with kind 32
    AttackSlot attackE88;        // +0xe88: requested every update with kind 25
    AttackSlot attackF00;        // +0xf00: requested every update with kind 79
    float arrivalHeight;         // +0xf78: how far above her ground height ArrivalPoint puts her
    char padding_f7c[0x8];
    float limitF84;              // +0xf84
    float limitF88;              // +0xf88
    float limitF8c;              // +0xf8c
    float limitF90;              // +0xf90
    char padding_f94[0x8];
    float limitF9c;              // +0xf9c
};
// vtable 0x1894150, 266 slots
struct NegaScott : Boss {
    SPTG_TYPE(Boss, 0x71a465b8u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa44fd0)
    void Spawn(const EnemySpawnInfo* info) override;
    void Slot13();
    void Update();
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265

    char padding_d48[0x2];
    uint8_t flagD4a;             // +0xd4a
    char padding_d4b[0x1];
    float valueD4c;              // +0xd4c: passed to 0xa254a0 on landing in state 264
    AttackSlot attacksD50[9];    // +0xd50
    ProjectileSpawnInfo projectile; // +0x1188
    float value11f8;             // +0x11f8
    float value11fc;             // +0x11fc
    float value1200;             // +0x1200
    float value1204;             // +0x1204
    float value1208;             // +0x1208
    float value120c;             // +0x120c
    float value1210;             // +0x1210
    float value1214;             // +0x1214
    float value1218;             // +0x1218
};
// vtable 0x1893860, 272 slots
struct HipsterChick : Boss {
    SPTG_TYPE(Boss, 0x4a52c0d7u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa42860)
    void Slot7();
    void Slot19();
    bool IsOut();
    void Update();
    void Slot94();
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    int State106(int event); State State106Ptr();   // slots 106, 107, override Boss
    int State108(int event); State State108Ptr();   // slots 108, 109, override Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271

    char padding_d48[0x8];
    AttackSlot attack;           // +0xd50: requested every update with kind 0
    char padding_dc8[0x9c];
    float attackPeriod;          // +0xe64
    char padding_e68[0x1c];
    int32_t valueE84;            // +0xe84
    int32_t valueE88;            // +0xe88
    uint8_t flagE8c;             // +0xe8c
    uint8_t flagE8d;             // +0xe8d
};
// vtable 0x188fc40, 284 slots
struct SuperFightingRobotAI : Boss {
    SPTG_TYPE(Boss, 0x349d69f0u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa318a0)
    void CallA2f1e0();   // 0xa2f1e0
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    void Slot13();
    void Update();
    void SetSolid(bool solid);
    void CallA38af0();   // 0xa38af0
    void Slot7();
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273
    virtual int State274(int event); virtual State State274Ptr();   // slots 274, 275
    virtual int State276(int event); virtual State State276Ptr();   // slots 276, 277
    virtual int State278(int event); virtual State State278Ptr();   // slots 278, 279
    virtual int State280(int event); virtual State State280Ptr();   // slots 280, 281
    virtual int State282(int event); virtual State State282Ptr();   // slots 282, 283

    onyx::ComponentHandle* handleD48; // +0xd48
    onyx::ComponentHandle* handleD50; // +0xd50
    onyx::ComponentHandle* handleD58; // +0xd58
    onyx::ComponentHandle* handleD60; // +0xd60
    onyx::ComponentHandle* hand2; // +0xd68: SuperFightingRobotHand
    onyx::ComponentHandle* hand1; // +0xd70: SuperFightingRobotHand
    onyx::ComponentHandle* handleD78; // +0xd78
    onyx::ComponentHandle* handleD80; // +0xd80
    EventSlot eventD88;          // +0xd88
    EventSlot eventDa0;          // +0xda0
    EventSlot eventDb8;          // +0xdb8
    onyx::Vector3 hand1Point;    // +0xdd0: where state 264 sends hand 1: the +0xd48 transform's position plus +0xe34
    onyx::Vector3 hand2Point;    // +0xddc: and hand 2, plus +0xe40
    char padding_de8[0x8];
    float headTimer;             // +0xdf0: time in state 260
    uint32_t handHits;           // +0xdf4: at +0xe08 a hand's state 264 sends the robot to state 262
    uint8_t hand1Ready;          // +0xdf8: state 264 has sent hand 1 to its state 260
    uint8_t hand2Ready;          // +0xdf9: and hand 2
    char padding_dfa[0x6];
    float valueE00;              // +0xe00: while not zero the update ends with 0xa38af0
    float valueE04;              // +0xe04: how long state 260 lasts
    uint32_t valueE08;           // +0xe08
    int32_t valueE0c;            // +0xe0c
    float handSpeed;             // +0xe10: the speed state 264 moves the hands to their points at
    int32_t valueE14;            // +0xe14
    int32_t valueE18;            // +0xe18
    int32_t valueE1c;            // +0xe1c
    int32_t valueE20;            // +0xe20
    int32_t valueE24;            // +0xe24
    int32_t valueE28;            // +0xe28
    int32_t valueE2c;            // +0xe2c
    int32_t valueE30;            // +0xe30
    onyx::Vector3 hand1Offset;   // +0xe34
    onyx::Vector3 hand2Offset;   // +0xe40
    onyx::Vector3 hand1Rest;     // +0xe4c: where the update keeps hand 1, from the +0xd48 transform's position
    onyx::Vector3 hand2Rest;     // +0xe58: and hand 2
};
// vtable 0x188eb08, 274 slots
struct SuperFightingRobotHand : Boss {
    SPTG_TYPE(Boss, 0x37bd3ac0u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa29140)
    float TakeDamage(const void* hit, BaseCharacter* other);
    void Slot13();
    bool CheckA30210();                     // 0xa30210
    bool CallA2ed40(const onyx::Vector3& point, bool flag, float speed);   // 0xa2ed40: moves toward the point
    bool CallA2fae0(bool flag, float speed);   // 0xa2fae0
    bool CallA2f300(float a, float b, float c);   // 0xa2f300
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    void Slot7();
    void FollowPlayfield() override;                                         // slot 76
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    int State106(int event); State State106Ptr();   // slots 106, 107, override Boss
    int State108(int event); State State108Ptr();   // slots 108, 109, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247, overrides Boss
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273

    onyx::ComponentHandle* handleD48; // +0xd48: state 270 plays animation 38 on this and +0xd50
    onyx::ComponentHandle* handleD50; // +0xd50
    onyx::ComponentHandle* handleD58; // +0xd58
    onyx::ComponentHandle* handleD60; // +0xd60
    onyx::ComponentHandle* handleD68; // +0xd68
    HandCallbacks callbacks;     // +0xd70
    AttackSlot attackD88;        // +0xd88
    AttackSlot attackE00;        // +0xe00
    AttackSlot attackE78;        // +0xe78
    int32_t valueEf0;            // +0xef0
    int32_t valueEf4;            // +0xef4
    int32_t valueEf8;            // +0xef8
    float boxWidth;              // +0xefc: the box 0xa2fae0 keeps the hand's goal in, around +0xf80
    float boxHeight;             // +0xf00
    float speedF04;              // +0xf04: times +0xf10 in state 246
    int32_t valueF08;            // +0xf08
    int32_t valueF0c;            // +0xf0c
    float speedF10;              // +0xf10
    int32_t valueF14;            // +0xf14
    float heightF18;             // +0xf18: how far above its ground height slot 7 puts the hand
    int32_t valueF1c;            // +0xf1c
    float valueF20;              // +0xf20: how long state 270 waits
    int32_t valueF24;            // +0xf24
    int32_t valueF28;            // +0xf28
    int32_t valueF2c;            // +0xf2c
    int32_t valueF30;            // +0xf30
    int32_t valueF34;            // +0xf34
    float groundF38;             // +0xf38: the hand's own ground height, read as a float by slot 76
    int32_t valueF3c;            // +0xf3c
    int32_t valueF40;            // +0xf40
    int32_t valueF44;            // +0xf44: serialized through a uint32_t
    uint8_t flagF48;             // +0xf48
    bool flagF49;                // +0xf49: passed to the move at 0xa2fae0
    char padding_f4a[0x2];
    int32_t valueF4c;            // +0xf4c
    int32_t valueF50;            // +0xf50
    int32_t valueF54;            // +0xf54
    int32_t valueF58;            // +0xf58
    float sideOffset;            // +0xf5c: how far beside the target the hand aims; its sign picks the side
    char padding_f60[0x20];
    onyx::Vector3 boxCenter;     // +0xf80: where slot 7 found the hand
    char padding_f8c[0x14];
    int32_t hitsFa0;             // +0xfa0
    char padding_fa4[0xc];
    SuperFightingRobotAI* owner; // +0xfb0: set by the robot
    uint8_t flagFb8;             // +0xfb8
    uint8_t flagFb9;             // +0xfb9: makes state 270 tell the robot through 0xa2f1e0
    uint8_t halfHealthDone;      // +0xfba: the robot has been told it's at half health
    uint8_t flagFbb;             // +0xfbb
};
// vtable 0x188d260, 258 slots
struct SuperFightingRobotTorso : Boss {
    SPTG_TYPE(Boss, 0x15d09a06u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa26990)

};
// vtable 0x188da98, 258 slots
struct SuperFightingRobotShoulder : Boss {
    SPTG_TYPE(Boss, 0x19ac00b3u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa26ba0)

};
// vtable 0x188e2d0, 258 slots
struct SuperFightingRobotHead : Boss {
    SPTG_TYPE(Boss, 0x2bc021adu)
    bool IsA(uint32_t type) override;   // slot 12 (0xa270f0)
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);

    char padding_d48[0x8];
    PairList listD50;            // +0xd50
    int32_t valueDa0;            // +0xda0: serialized through a uint32_t
    int32_t valueDa4;            // +0xda4
    int32_t valueDa8;            // +0xda8
    char padding_dac[0x4];
    ProjectileSpawnInfo projectile; // +0xdb0
    int32_t valueE20;            // +0xe20
    int32_t valueE24;            // +0xe24
    int32_t valueE28;            // +0xe28
    int32_t valueE2c;            // +0xe2c
    int32_t valueE30;            // +0xe30
    int32_t valueE34;            // +0xe34
    int32_t valueE38;            // +0xe38
    int32_t valueE3c;            // +0xe3c
};

}  // namespace SPTG
