// The boss classes (RTTI: Onyx::Component::Compose<Boss>; Lynette and Envy derive
// from TagTeamMember): their own states, each followed by its getter, and the
// overrides the sources define. Names are provisional.
#pragma once
#include "Boss.h"

namespace SPTG {

// vtable 0x188c9c0, 268 slots
struct TagTeamMember : Boss {
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
    SPTG_SLOT(261)
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267

    char padding_d2b[0x21];
    float healthD4c;             // +0xd4c: copied to +0xd7c by Lynette's update
    float timeD50;               // +0xd50: copied to +0xd78 when hit in state 266
    int32_t valueD54;            // +0xd54
    uint8_t flagD58;             // +0xd58
    uint8_t flagD59;             // +0xd59
    uint8_t flagD5a;             // +0xd5a
    uint8_t flagD5b;             // +0xd5b
    char padding_d5c[0x18];
    uint32_t valueD74;           // +0xd74
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
    float Slot59();
    void Update();
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

    char padding_d2b[0x1d];
    onyx::ComponentHandle* handlesD48[8]; // +0xd48: moved by slot 4
    uint8_t flagD88;             // +0xd88: raised in states 98 and 248
    uint8_t flagD89;             // +0xd89
    char padding_d8a[0x2];
    float damageD8c;             // +0xd8c: all damage taken
    int32_t countD90;            // +0xd90
    int32_t valueD94;            // +0xd94
    char padding_d98[0x1c];
    int32_t hitsDb4;             // +0xdb4: hits taken in state 260
    float valueDb8;              // +0xdb8
    float damageDbc;             // +0xdbc: damage taken in state 270
    char padding_dc0[0x18];
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
    int32_t value11a8;           // +0x11a8
    int32_t value11ac;           // +0x11ac
    float limit11b0;             // +0x11b0: slot 237 accepts kind 11 once +0xdb8 reaches it
    int32_t value11b4;           // +0x11b4
    int32_t value11b8;           // +0x11b8
    int32_t value11bc;           // +0x11bc
    int32_t value11c0;           // +0x11c0
    int32_t value11c4;           // +0x11c4
    int32_t value11c8;           // +0x11c8
    int32_t value11cc;           // +0x11cc
    int32_t value11d0;           // +0x11d0
    int32_t value11d4;           // +0x11d4
    int32_t value11d8;           // +0x11d8
    int32_t value11dc;           // +0x11dc
    int32_t value11e0;           // +0x11e0
    int32_t value11e4;           // +0x11e4
    int32_t value11e8;           // +0x11e8
    int32_t value11ec;           // +0x11ec
    int32_t value11f0;           // +0x11f0
    int32_t value11f4;           // +0x11f4
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
struct GigaGideon : Boss {
    void SetSolid(bool solid);
    void Slot13();
    void Update();
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    int State106(int event); State State106Ptr();   // slots 106, 107, override Boss
    int State116(int event); State State116Ptr();   // slots 116, 117, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(241)   // overrides Boss
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

    char padding_d2b[0x29];
    float valueD54;              // +0xd54
    char padding_d58[0xd];
    uint8_t flagD65;             // +0xd65
    char padding_d66[0x12];
    AttackSlot attackD78;        // +0xd78: started in state 262
    char padding_df0[0x78];
    float limitE68;              // +0xe68
    char padding_e6c[0x38];
    float speedEa4;              // +0xea4: animation speed in state 262
    float limitEa8;              // +0xea8
    char padding_eac[0x4];
    AttackSlot attacks[2];       // +0xeb0: requested every update with kinds 20 and 21
    char padding_fa0[0x260];
    float value1200;             // +0x1200
    float value1204;             // +0x1204
    char padding_1208[0xb0];
    BossEffect* effect;          // +0x12b8
};
// vtable 0x18977d0, 260 slots
struct Gideon : Boss {
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

    char padding_d2b[0x1e];
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
    bool Slot73();
    void Slot13();
    bool Slot82();
    float TakeDamage(const void* hit, BaseCharacter* other);
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    int State122(int event); State State122Ptr();   // slots 122, 123, override Boss
    int State172(int event); State State172Ptr();   // slots 172, 173, override Boss
    int State186(int event); State State186Ptr();   // slots 186, 187, override Boss
    int State196(int event); State State196Ptr();   // slots 196, 197, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(243)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265

    char padding_d2b[0x1e];
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
    float TakeDamage(const void* hit, BaseCharacter* other);
    bool OnHit(BaseCharacter* other, void* hit);
    void Update();
    bool Slot82();
    void CallA506f0(int32_t value);   // 0xa506f0
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

    char padding_d2b[0x1e];
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
    int32_t value10e8;           // +0x10e8
    int32_t value10ec;           // +0x10ec
};
// vtable 0x18949c8, 268 slots
struct LucasLee : Boss {
    void ReactTo(BaseCharacter* other, int reaction, void* data);
    bool Slot82();
    void Update();
    void PlayAnimation(int animation, bool a, bool b, float speed);
    bool Slot162();
    int State108(int event); State State108Ptr();   // slots 108, 109, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual bool Slot237(const AttackSlot& request);                         // slot 237, overrides Boss
    virtual bool Slot239(int animation);                                     // slot 239, overrides Boss
    SPTG_SLOT(241)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267

    char padding_d2b[0x2d];
    AttackSlot attackD58;        // +0xd58: requested every update with kind 19
    AttackSlot attackDd0;        // +0xdd0: requested every update with kind 31
    AttackSlot attackE48;        // +0xe48: requested every update with kind 11
    AttackSlot attackEc0;        // +0xec0: requested every update with kind 174; started in state 266
    AttackSlot attackF38;        // +0xf38: requested every update with kind 178
    char padding_fb0[0x20];
    uint8_t flagFd0;             // +0xfd0: switches to the other animation set
    char padding_fd1[0x1f];
    int32_t countFf0;            // +0xff0
};
// vtable 0x1891ed8, 272 slots
struct Roxy : Boss {
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

    char padding_d2b[0xd5];
    AttackSlot attackE00;        // +0xe00: started in state 264
    AttackSlot attackE78;        // +0xe78: started in state 268
    AttackSlot attackEf0;        // +0xef0: started in state 266
};
// vtable 0x1890e58, 260 slots
struct RoxyMirror : Boss {
    void Slot13();
    int State96(int event); State State96Ptr();   // slots 96, 97, override Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
};
// vtable 0x1899b20, 266 slots
struct Chau : Boss {
    bool OnHit(BaseCharacter* other, void* hit);
    float TakeDamage(const void* hit, BaseCharacter* other);
    bool Slot73();
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

    char padding_d2b[0x89];
    uint32_t phaseDb4;           // +0xdb4: set from health by slot 69
    char padding_db8[0x408];
    float phaseStep;             // +0x11c0
    uint32_t phaseCount;         // +0x11c4
};
// vtable 0x1898018, 284 slots
struct Lynette : TagTeamMember {
    void Update();
    float TakeDamage(const void* hit, BaseCharacter* other);
    bool Slot82();
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual void Slot234(int kind);                                          // slot 234, overrides TagTeamMember
    virtual bool Slot237(const AttackSlot& request);                         // slot 237, overrides TagTeamMember
    virtual bool Slot238();                                                  // slot 238, overrides TagTeamMember
    SPTG_SLOT(241)   // overrides TagTeamMember
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
    char padding_d8c[0x3c];
    AttackSlot attackDc8;        // +0xdc8: requested every update with kind 20
    AttackSlot attack;           // +0xe40: requested every update with kind 11
    AttackSlot attackEb8;        // +0xeb8: requested every update with kind 180
    int32_t valueF30;            // +0xf30: serialized through a uint32_t
    int32_t valueF34;            // +0xf34
    float limitF38;              // +0xf38
    float limitF3c;              // +0xf3c
    float limitF40;              // +0xf40
    float limitF44;              // +0xf44
    int32_t valueF48;            // +0xf48
    int32_t valueF4c;            // +0xf4c
    int32_t valueF50;            // +0xf50
    int32_t valueF54;            // +0xf54
    float limitF58;              // +0xf58
    char padding_f5c[0x4];
    PairList listF60;            // +0xf60
};
// vtable 0x1892fb8, 269 slots
struct Patel : Boss {
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

    char padding_d2b[0x2d];
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
    bool Slot82();
    void Update();
    int State122(int event); State State122Ptr();   // slots 122, 123, override TagTeamMember
    int State186(int event); State State186Ptr();   // slots 186, 187, override TagTeamMember
    int State198(int event); State State198Ptr();   // slots 198, 199, override TagTeamMember
    virtual void Slot234(int kind);                                          // slot 234, overrides TagTeamMember
    SPTG_SLOT(241)   // overrides TagTeamMember
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
    char padding_f78[0xc];
    float limitF84;              // +0xf84
    float limitF88;              // +0xf88
    float limitF8c;              // +0xf8c
    float limitF90;              // +0xf90
    char padding_f94[0x8];
    float limitF9c;              // +0xf9c
};
// vtable 0x1894150, 266 slots
struct NegaScott : Boss {
    void Slot13();
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265

    char padding_d2b[0x1f];
    uint8_t flagD4a;             // +0xd4a
    char padding_d4b[0x5];
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

    char padding_d2b[0x25];
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
    void Slot13();
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

    char padding_d2b[0x3d];
    onyx::ComponentHandle* hand2; // +0xd68: SuperFightingRobotHand
    onyx::ComponentHandle* hand1; // +0xd70: SuperFightingRobotHand
};
// vtable 0x188eb08, 274 slots
struct SuperFightingRobotHand : Boss {
    float TakeDamage(const void* hit, BaseCharacter* other);
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
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

    char padding_d2b[0x1d];
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
    int32_t valueEfc;            // +0xefc
    int32_t valueF00;            // +0xf00
    int32_t valueF04;            // +0xf04
    int32_t valueF08;            // +0xf08
    int32_t valueF0c;            // +0xf0c
    int32_t valueF10;            // +0xf10
    int32_t valueF14;            // +0xf14
    int32_t valueF18;            // +0xf18
    int32_t valueF1c;            // +0xf1c
    int32_t valueF20;            // +0xf20
    int32_t valueF24;            // +0xf24
    int32_t valueF28;            // +0xf28
    int32_t valueF2c;            // +0xf2c
    int32_t valueF30;            // +0xf30
    int32_t valueF34;            // +0xf34
    int32_t valueF38;            // +0xf38
    int32_t valueF3c;            // +0xf3c
    int32_t valueF40;            // +0xf40
    int32_t valueF44;            // +0xf44: serialized through a uint32_t
    uint8_t flagF48;             // +0xf48
    uint8_t flagF49;             // +0xf49
    char padding_f4a[0x2];
    int32_t valueF4c;            // +0xf4c
    int32_t valueF50;            // +0xf50
    int32_t valueF54;            // +0xf54
    int32_t valueF58;            // +0xf58
    int32_t valueF5c;            // +0xf5c
    char padding_f60[0x40];
    int32_t hitsFa0;             // +0xfa0
    char padding_fa4[0xc];
    SuperFightingRobotAI* owner; // +0xfb0: set by the robot
    uint8_t flagFb8;             // +0xfb8
    char padding_fb9[0x2];
    uint8_t flagFbb;             // +0xfbb
};
// vtable 0x188d260, 258 slots
struct SuperFightingRobotTorso : Boss {

};
// vtable 0x188da98, 258 slots
struct SuperFightingRobotShoulder : Boss {

};
// vtable 0x188e2d0, 258 slots
struct SuperFightingRobotHead : Boss {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);

    char padding_d2b[0x25];
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
