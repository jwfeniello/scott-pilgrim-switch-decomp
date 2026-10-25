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
    virtual bool Slot238();                                                  // slot 238, overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    SPTG_SLOT(258)
    SPTG_SLOT(259)
    SPTG_SLOT(260)
    SPTG_SLOT(261)
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
    virtual int State266(int event); virtual State State266Ptr();   // slots 266, 267

    char padding_d4b[0xe];
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

    char padding_d4b[0x3d];
    uint8_t flagD88;             // +0xd88: raised in states 98 and 248
    uint8_t flagD89;             // +0xd89
    char padding_d8a[0xa];
    int32_t valueD94;            // +0xd94
    char padding_d98[0x40];
    char dataDd8[0x10];          // +0xdd8: passed to 0xa255e0
    char padding_de8[0x3b0];
    float value1198;             // +0x1198: returned by slot 59
    char padding_119c[0x4];
    float limit11a0;             // +0x11a0
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

    char padding_d4b[0x165];
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
    int State98(int event); State State98Ptr();   // slots 98, 99, override Boss
    int State196(int event); State State196Ptr();   // slots 196, 197, override Boss
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual bool Slot237(const AttackSlot& request);                         // slot 237, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259

    char padding_d4b[0x2d5];
    AttackSlot attack;           // +0x1020
};
// vtable 0x1896478, 266 slots
struct SuperGideon : Boss {
    bool Slot73();
    void Slot13();
    bool Slot82();
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

    char padding_d4b[0x445];
    BossEffect* effect;          // +0x1190
};
// vtable 0x1895a88, 272 slots
struct KenKyle : Boss {
    float TakeDamage(const void* hit, BaseCharacter* other);
    bool OnHit(BaseCharacter* other, void* hit);
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

    uint8_t flagD4b;             // +0xd4b: the twins take turns: one has it set
    char padding_d4c[0x2];
    uint8_t flagD4e;             // +0xd4e
    char padding_d4f[0x5];
    int32_t valueD54;            // +0xd54
    onyx::ComponentHandle* twin; // +0xd58: the other of Ken and Kyle
    char padding_d60[0x358];
    float limit10b8;             // +0x10b8
    char padding_10bc[0x8];
    float value10c4;             // +0x10c4
    float value10c8;             // +0x10c8
    char padding_10cc[0x8];
    float chance10d4;            // +0x10d4: percent
};
// vtable 0x18949c8, 268 slots
struct LucasLee : Boss {
    void ReactTo(BaseCharacter* other, int reaction, void* data);
    bool Slot82();
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

    char padding_d4b[0x69];
    uint32_t phaseDb4;           // +0xdb4: set from health by slot 69
    char padding_db8[0x408];
    float phaseStep;             // +0x11c0
    uint32_t phaseCount;         // +0x11c4
};
// vtable 0x1898018, 284 slots
struct Lynette : TagTeamMember {
    virtual void Slot234(int kind);                                          // slot 234, overrides TagTeamMember
    virtual bool Slot237(const AttackSlot& request);                         // slot 237, overrides TagTeamMember
    virtual bool Slot238();                                                  // slot 238, overrides TagTeamMember
    SPTG_SLOT(241)   // overrides TagTeamMember
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides TagTeamMember
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides TagTeamMember
    SPTG_SLOT(259)   // overrides TagTeamMember
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

    char padding_d85[0xbb];
    AttackSlot attack;           // +0xe40
};
// vtable 0x1892fb8, 269 slots
struct Patel : Boss {
    bool OnHit(BaseCharacter* other, void* hit);
    float TakeDamage(const void* hit, BaseCharacter* other);
    float Slot170();
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

    char padding_d4b[0xd];
    uint32_t chickCount;         // +0xd58
    char padding_d5c[0x4];
    onyx::ComponentHandle** chicks; // +0xd60: HipsterChick handles
    char padding_d68[0xc];
    float healthStep;            // +0xd74: health fraction lost before the next mode
    float scaleD78;              // +0xd78: scales slot 170 in mode 4
    char padding_d7c[0x280];
    int32_t modeFfc;             // +0xffc
    uint8_t modeChanged;         // +0x1000
};
// vtable 0x1898a48, 274 slots
struct Envy : TagTeamMember {
    bool Slot82();
    int State122(int event); State State122Ptr();   // slots 122, 123, override TagTeamMember
    int State186(int event); State State186Ptr();   // slots 186, 187, override TagTeamMember
    int State198(int event); State State198Ptr();   // slots 198, 199, override TagTeamMember
    virtual void Slot234(int kind);                                          // slot 234, overrides TagTeamMember
    SPTG_SLOT(241)   // overrides TagTeamMember
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides TagTeamMember
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides TagTeamMember
    SPTG_SLOT(259)   // overrides TagTeamMember
    SPTG_SLOT(260)   // overrides TagTeamMember
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263, overrides TagTeamMember
    virtual int State268(int event); virtual State State268Ptr();   // slots 268, 269
    virtual int State270(int event); virtual State State270Ptr();   // slots 270, 271
    virtual int State272(int event); virtual State State272Ptr();   // slots 272, 273

    char padding_d85[0x13];
    AttackSlot attack;           // +0xd98
    char padding_e10[0x174];
    float limitF84;              // +0xf84
    char padding_f88[0x8];
    float limitF90;              // +0xf90
    char padding_f94[0x8];
    float limitF9c;              // +0xf9c
};
// vtable 0x1894150, 266 slots
struct NegaScott : Boss {
    void Slot13();
    virtual void Slot234(int kind);                                          // slot 234, overrides Boss
    SPTG_SLOT(235)   // overrides Boss
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245, overrides Boss
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255, overrides Boss
    virtual int State258(int event); virtual State State258Ptr();   // slots 258, 259
    virtual int State260(int event); virtual State State260Ptr();   // slots 260, 261
    virtual int State262(int event); virtual State State262Ptr();   // slots 262, 263
    virtual int State264(int event); virtual State State264Ptr();   // slots 264, 265
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

    char padding_d4b[0x5];
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

    char padding_d4b[0x1d];
    onyx::ComponentHandle* hand2; // +0xd68: SuperFightingRobotHand
    onyx::ComponentHandle* hand1; // +0xd70: SuperFightingRobotHand
};
// vtable 0x188eb08, 274 slots
struct SuperFightingRobotHand : Boss {
    float TakeDamage(const void* hit, BaseCharacter* other);
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

    char padding_d4b[0x255];
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

};

}  // namespace SPTG
