// The regular enemy classes: their own states after slot 233, each followed by
// its getter, and the overrides the sources define. Most derive from
// SPTG::Enemy; the RTTI (Onyx::Component::Compose<Base>) puts five under
// EnemyOneHitWonder and four under EnemyNormal, EnemyGiant and EnemyShooter.
// Names are provisional.
#pragma once
#include "Enemy.h"

namespace SPTG {

// vtable 0x187ce88, 240 slots
struct EnemyOneHitWonder : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239

    char padding_b79[0x17];
    EnemySensor sensor;          // +0xb90
    int32_t valueBb8;            // +0xbb8
    char padding_bbc[0x8];
    float timeLimitBc4;          // +0xbc4: state 238 returns to 96 after this long
    float timerBc8;              // +0xbc8
    uint8_t flagBcc;             // +0xbcc
};
// vtable 0x187fa08, 244 slots
struct EnemyZombie : Enemy {
    int State202(int event);
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243

    char padding_b79[0x17];
    AttackSlot attacks[5];       // +0xb90
};
// vtable 0x18801d0, 238 slots
struct EnemyWolverine : Enemy {
    void Update();
    void Approach();
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237

    char padding_b79[0x17];
    AttackSlot attacks[3];       // +0xb90
};
// vtable 0x1880968, 234 slots
struct EnemyThief : Enemy {
    void Update();
    void Slot166(int kind);
    int State194(int event);

    char padding_b79[0x17];
    AttackSlot attacks[1];       // +0xb90
};
// vtable 0x18810e0, 239 slots
struct EnemySpeedy : Enemy {
    void Approach();
    int State194(int event);
    int State196(int event);
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    int State9eb520(int event);   // 0x9eb520, not virtual
    virtual State State9eb520Ptr();   // slot 238: returns the state at 0x9eb520

    char padding_b79[0x17];
    AttackSlot attacks[5];       // +0xb90
};
// vtable 0x1881880, 238 slots
struct EnemyShooter : Enemy {
    void Update();
    void Slot166(int kind);
    void Slot19();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237

    char padding_b79[0x17];
    AttackSlot attacks[1];       // +0xb90
    char padding_c08[0x1c];
    int32_t valueC24;            // +0xc24
    char padding_c28[0x18];
    uint8_t flagC40;             // +0xc40
    char padding_c41[0x3];
    onyx::Vector3 vectorC44;     // +0xc44
    onyx::Vector3 vectorC50;     // +0xc50
    int32_t valueC5c;            // +0xc5c
};
// vtable 0x1882018, 238 slots
struct EnemyPaparazzi : Enemy {
    void Update();
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237

    char padding_b79[0x17];
    AttackSlot attacks[2];       // +0xb90
};
// vtable 0x18827b0, 250 slots
struct EnemyNormal : Enemy {
    int State96(int event);
    int State174(int event);
    int State194(int event);
    bool Slot34Check();
    int State196(int event);
    bool Slot33(void* data);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249

    char padding_b79[0x17];
    AttackSlot attacks[7];       // +0xb90
    char padding_ed8[0x168];
    uint8_t flag1040;            // +0x1040: enables the switch to slot 246 in slot 33
};
// vtable 0x1882fa8, 236 slots
struct EnemyMini : Enemy {
    void Update();
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235

    char padding_b79[0x17];
    AttackSlot attacks[2];       // +0xb90
};
// vtable 0x1883730, 237 slots
struct EnemyJetPackMatt : Enemy {
    void Update();
    void Slot166(int kind);
    int State200(int event);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    int State9f25b0(int event);   // 0x9f25b0, not virtual
    virtual State State9f25b0Ptr();   // slot 236: returns the state at 0x9f25b0

    char padding_b79[0x17];
    AttackSlot attacks[1];       // +0xb90
};
// vtable 0x1884700, 246 slots
struct EnemyHanzo : Enemy {
    bool Slot34Check();
    bool Slot33(void* data);
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    int State9f7ef0(int event);   // 0x9f7ef0, not virtual
    virtual State State9f7ef0Ptr();   // slot 244: returns the state at 0x9f7ef0
    int State9f7750(int event);   // 0x9f7750, not virtual
    virtual State State9f7750Ptr();   // slot 245: returns the state at 0x9f7750

    char padding_b79[0x17];
    AttackSlot attacks[8];       // +0xb90
};
// vtable 0x1884ed8, 240 slots
struct EnemyGodzilla : Enemy {
    void Update();
    void Approach();
    void Slot166(int kind);
    int State124(int event);
    bool Slot34Check();
    bool OnHit(BaseCharacter* other, void* hit);
    void ReactTo(BaseCharacter* other, int reaction, void* data);
    bool Slot33(void* data);
    int State100(int event);
    bool Slot82();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239

    char padding_b79[0x17];
    AttackSlot attacks[4];       // +0xb90
};
// vtable 0x1885680, 248 slots
struct EnemyGiant : Enemy {
    bool Slot34Check();
    int State196(int event);
    void ReactTo(BaseCharacter* other, int reaction, void* data);
    bool Slot33(void* data);
    int State96(int event);
    int State174(int event);
    bool Check9fd3e0();   // 0x9fd3e0
    void Slot166(int kind);
    bool Slot82();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247

    char padding_b79[0x10];
    uint8_t flagB89;             // +0xb89
    char padding_b8a[0x6];
    AttackSlot attacks[10];      // +0xb90
    int32_t value1040;           // +0x1040
};
// vtable 0x1886e20, 244 slots
struct EnemyChubby : Enemy {
    void Update();
    void Approach();
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243

    char padding_b79[0x17];
    AttackSlot attacks[3];       // +0xb90
    uint8_t flagCf8;             // +0xcf8
};
// vtable 0x18885a0, 240 slots
struct EnemyAerial : Enemy {
    void SetSolid(bool solid);
    int State108(int event);
    void Slot19();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    int Statea04af0(int event);   // 0xa04af0, not virtual
    virtual State Statea04af0Ptr();   // slot 238: returns the state at 0xa04af0
    int Statea04890(int event);   // 0xa04890, not virtual
    virtual State Statea04890Ptr();   // slot 239: returns the state at 0xa04890

    char padding_b79[0x207];
    EnemySensor sensor;          // +0xd80
    int32_t valueDa8;            // +0xda8
    uint8_t flagDac;             // +0xdac
    char padding_dad[0x3];
    onyx::Vector3 vectorDb0;     // +0xdb0
    int32_t valueDbc;            // +0xdbc
    uint8_t flagDc0;             // +0xdc0
};
// vtable 0x187c648, 241 slots
struct EnemyStuntman : EnemyOneHitWonder {
    int State108(int event);
    float TakeDamage(const void* hit, BaseCharacter* other);
    void Update();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyOneHitWonder
    int State9da590(int event);   // 0x9da590, not virtual
    virtual State State9da590Ptr();   // slot 240: returns the state at 0x9da590

    char padding_bcd[0x17];
    onyx::Vector3 reach;         // +0xbe4: how close a target must be on each axis
    float minX;                  // +0xbf0: the range of X positions state 234 acts in
    float maxX;                  // +0xbf4
    uint8_t flagBf8;             // +0xbf8
};
// vtable 0x187e2f8, 241 slots
struct EnemySasuke : EnemyOneHitWonder {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyOneHitWonder
    int State9e5360(int event);   // 0x9e5360, not virtual
    virtual State State9e5360Ptr();   // slot 240: returns the state at 0x9e5360
};
// vtable 0x187eaa8, 240 slots
struct EnemyGuyOnFire : EnemyOneHitWonder {
    int State96(int event);
    int State176(int event);

    char padding_bcd[0x3];
    AttackSlot attack;           // +0xbd0
    float attackDelay;           // +0xc48
    float attackTimer;           // +0xc4c
    uint8_t attackPending;       // +0xc50
};
// vtable 0x187f250, 242 slots
struct EnemyChargingCrowd : EnemyOneHitWonder {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyOneHitWonder
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
};
// vtable 0x1883ec0, 256 slots
struct EnemyJake : EnemyNormal {
    virtual int State250(int event); virtual State State250Ptr();   // slots 250, 251
    virtual int State252(int event); virtual State State252Ptr();   // slots 252, 253
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255
};
// vtable 0x1885e68, 248 slots
struct EnemyGeeOne : EnemyGiant {

};
// vtable 0x1886668, 242 slots
struct EnemyForestElves : EnemyOneHitWonder {
    float TakeDamage(const void* hit, BaseCharacter* other);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyOneHitWonder
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
};
// vtable 0x18875e8, 240 slots
struct EnemyArZee : EnemyShooter {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyShooter
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
};
// vtable 0x1887da8, 250 slots
struct EnemyAlberta : EnemyNormal {

};

}  // namespace SPTG
