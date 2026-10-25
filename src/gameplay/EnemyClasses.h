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
    int32_t valueBbc;            // +0xbbc
    uint8_t flagBc0;             // +0xbc0
    char padding_bc1[0x3];
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
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237

    char padding_b79[0x13];
    int32_t valueB8c;            // +0xb8c: serialized through a uint32_t
    AttackSlot attacks[1];       // +0xb90
    int32_t valueC08;            // +0xc08
    int32_t valueC0c;            // +0xc0c
    int32_t valueC10;            // +0xc10
    int32_t valueC14;            // +0xc14
    int32_t valueC18;            // +0xc18
    int32_t valueC1c;            // +0xc1c
    int32_t valueC20;            // +0xc20
    int32_t valueC24;            // +0xc24: serialized through a uint32_t
    int32_t valueC28;            // +0xc28
    int32_t valueC2c;            // +0xc2c
    int32_t valueC30;            // +0xc30
    int32_t valueC34;            // +0xc34
    int32_t valueC38;            // +0xc38
    int32_t valueC3c;            // +0xc3c
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
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249

    char padding_b79[0x17];
    AttackSlot attacks[10];      // +0xb90
    uint8_t flag1040;            // +0x1040: enables the switch to slot 246 in slot 33
    char padding_1041[0x7];
    AttackSlot attack1048;       // +0x1048
    AttackSlot attack10c0;       // +0x10c0
};
// vtable 0x1882fa8, 236 slots
struct EnemyMini : Enemy {
    void Update();
    void Slot166(int kind);
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235

    char padding_b79[0x17];
    AttackSlot attacks[2];       // +0xb90
    uint8_t flagC80;             // +0xc80
    char padding_c81[0x3];
    int32_t valueC84;            // +0xc84: serialized through a uint32_t
    int32_t valueC88;            // +0xc88
    int32_t valueC8c;            // +0xc8c
    int32_t valueC90;            // +0xc90
    uint8_t flagC94;             // +0xc94
};
// vtable 0x1883730, 237 slots
struct EnemyJetPackMatt : Enemy {
    void Update();
    void Slot166(int kind);
    int State200(int event);
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    int State9f25b0(int event);   // 0x9f25b0, not virtual
    virtual State State9f25b0Ptr();   // slot 236: returns the state at 0x9f25b0

    char padding_b79[0x13];
    int32_t valueB8c;            // +0xb8c: serialized through a uint32_t
    AttackSlot attacks[1];       // +0xb90
    int32_t valueC08;            // +0xc08
    int32_t valueC0c;            // +0xc0c
    int32_t valueC10;            // +0xc10
    int32_t valueC14;            // +0xc14
    int32_t valueC18;            // +0xc18
    int32_t valueC1c;            // +0xc1c
    int32_t valueC20;            // +0xc20
    int32_t valueC24;            // +0xc24
    int32_t valueC28;            // +0xc28
    int32_t valueC2c;            // +0xc2c
    int32_t valueC30;            // +0xc30
    int32_t valueC34;            // +0xc34
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
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
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
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    void SetSolid(bool solid);
    int State108(int event);
    void Slot19();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    int Statea04af0(int event);   // 0xa04af0, not virtual
    virtual State Statea04af0Ptr();   // slot 238: returns the state at 0xa04af0
    int Statea04890(int event);   // 0xa04890, not virtual
    virtual State Statea04890Ptr();   // slot 239: returns the state at 0xa04890

    char padding_b79[0x17];
    EventSlot eventB90;          // +0xb90
    int32_t valueBa8;            // +0xba8: serialized through a uint32_t
    int32_t valueBac;            // +0xbac
    int32_t valueBb0;            // +0xbb0
    int32_t valueBb4;            // +0xbb4
    int32_t valueBb8;            // +0xbb8
    char padding_bbc[0x4];
    AttackSlot attackBc0;        // +0xbc0
    uint8_t flagC38;             // +0xc38
    char padding_c39[0x7];
    AttackSlot attackC40;        // +0xc40
    int32_t valueCb8;            // +0xcb8
    uint8_t flagCbc;             // +0xcbc
    char padding_cbd[0x3];
    int32_t valueCc0;            // +0xcc0
    uint8_t flagCc4;             // +0xcc4
    uint8_t flagCc5;             // +0xcc5
    uint8_t flagCc6;             // +0xcc6
    char padding_cc7[0x1];
    AttackSlot attackCc8;        // +0xcc8
    int32_t valueD40;            // +0xd40
    int32_t valueD44;            // +0xd44
    int32_t valueD48;            // +0xd48
    int32_t valueD4c;            // +0xd4c
    int32_t valueD50;            // +0xd50: serialized through a uint32_t
    int32_t valueD54;            // +0xd54
    int32_t valueD58;            // +0xd58
    int32_t valueD5c;            // +0xd5c
    uint8_t flagD60;             // +0xd60
    char padding_d61[0x3];
    int32_t valueD64;            // +0xd64: serialized through a uint32_t
    uint8_t flagD68;             // +0xd68
    char padding_d69[0x3];
    int32_t valueD6c;            // +0xd6c: serialized through a uint32_t
    int32_t valueD70;            // +0xd70
    int32_t valueD74;            // +0xd74
    int32_t valueD78;            // +0xd78
    char padding_d7c[0x4];
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
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyOneHitWonder
    int State9da590(int event);   // 0x9da590, not virtual
    virtual State State9da590Ptr();   // slot 240: returns the state at 0x9da590

    char padding_bcd[0x3];
    int32_t valueBd0;            // +0xbd0: slot 4 moves these, +0xbd4 through a uint32_t
    int32_t valueBd4;            // +0xbd4
    int32_t valueBd8;            // +0xbd8
    int32_t valueBdc;            // +0xbdc
    int32_t valueBe0;            // +0xbe0
    onyx::Vector3 reach;         // +0xbe4: how close a target must be on each axis
    float minX;                  // +0xbf0: the range of X positions state 234 acts in
    float maxX;                  // +0xbf4
    uint8_t flagBf8;             // +0xbf8
};
// vtable 0x187e2f8, 241 slots
struct EnemySasuke : EnemyOneHitWonder {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyOneHitWonder
    int State9e5360(int event);   // 0x9e5360, not virtual
    virtual State State9e5360Ptr();   // slot 240: returns the state at 0x9e5360

    char padding_bcd[0x3];
    int32_t valueBd0;            // +0xbd0: slot 4 moves these, +0xbd4 through a uint32_t
    int32_t valueBd4;            // +0xbd4
    int32_t valueBd8;            // +0xbd8
    int32_t valueBdc;            // +0xbdc
    int32_t valueBe0;            // +0xbe0
    int32_t valueBe4;            // +0xbe4
    int32_t valueBe8;            // +0xbe8
    int32_t valueBec;            // +0xbec
    int32_t valueBf0;            // +0xbf0
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
    void Slot19();
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State250(int event); virtual State State250Ptr();   // slots 250, 251
    virtual int State252(int event); virtual State State252Ptr();   // slots 252, 253
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255

    char padding_1138[0x8];
    AttackSlot attack1140;       // +0x1140: started in state 252
    float limit11b8;             // +0x11b8: how long state 254 lasts
    int32_t value11bc;           // +0x11bc
    uint8_t flag11c0;            // +0x11c0
    uint8_t flag11c1;            // +0x11c1
    char padding_11c2[0x6];
    EnemySensor sensor;          // +0x11c8
    int32_t value11f0;           // +0x11f0
    float timer11f4;             // +0x11f4
    uint8_t flag11f8;            // +0x11f8
};
// vtable 0x1885e68, 248 slots
struct EnemyGeeOne : EnemyGiant {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);

    char padding_1044[0x4];
    int32_t value1048;           // +0x1048: serialized through a uint32_t
    int32_t value104c;           // +0x104c
    int32_t value1050;           // +0x1050
    int32_t value1054;           // +0x1054
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
