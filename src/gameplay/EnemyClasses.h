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
    SPTG_TYPE(Enemy, 0x0324f771u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9e4010)
    int State108(int event);                                  // slot 108, shared by all one-hit enemies
    float TakeDamage(const void* hit, BaseCharacter* other);  // slot 69, shared
    void Update();                                            // slot 16, shared
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239

    char padding_b7a[0x16];
    EnemySensor sensor;          // +0xb90
    int32_t valueBb8;            // +0xbb8
    uint32_t valueBbc;           // +0xbbc: how far state 96 places the range origin
    uint8_t flagBc0;             // +0xbc0
    char padding_bc1[0x3];
    float timeLimitBc4;          // +0xbc4: state 238 returns to 96 after this long
    float timerBc8;              // +0xbc8
    uint8_t flagBcc;             // +0xbcc: state 96 has found a target
};
// vtable 0x187fa08, 244 slots
struct EnemyZombie : Enemy {
    SPTG_TYPE(Enemy, 0x6addc293u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9e7dd0)
    void Update();
    int State174(int event);
    int State202(int event);
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243

    char padding_b7a[0x16];
    AttackSlot attacks[5];       // +0xb90
    uint8_t flagDe8;             // +0xde8: state 174 waits in animation 210 after 7
    char padding_de9[0x3];
    float waitDec;               // +0xdec
    float waitTimer;             // +0xdf0
};
// vtable 0x18801d0, 238 slots
struct EnemyWolverine : Enemy {
    SPTG_TYPE(Enemy, 0x228c3181u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9e9340)
    void Update();
    void Approach();
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237

    char padding_b7a[0x16];
    AttackSlot attacks[3];       // +0xb90
};
// vtable 0x1880968, 234 slots
struct EnemyThief : Enemy {
    SPTG_TYPE(Enemy, 0x74a9ef02u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9ea020)
    void Update();
    void Slot166(int kind);
    int State194(int event);
    void AttackLanded(AnimatedAiActor* target) override;

    char padding_b7a[0x16];
    AttackSlot attacks[1];       // +0xb90
    float moneyStolen;           // +0xc08: what a landed attack takes from a player
    char stealEffect[0x4];       // +0xc0c: passed along with the amount
};
// vtable 0x18810e0, 239 slots
struct EnemySpeedy : Enemy {
    SPTG_TYPE(Enemy, 0x1c3d9e50u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9eaba0)
    void Update();
    void Approach();
    bool OnHit(BaseCharacter* other, void* hit) override;
    int State194(int event);
    int State196(int event);
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    int State9eb520(int event);   // 0x9eb520, not virtual
    virtual State State9eb520Ptr();   // slot 238: returns the state at 0x9eb520

    char padding_b7a[0x12];
    float dodgeDirection;        // +0xb8c: which way the last dodge went
    AttackSlot attacks[5];       // +0xb90
    float runSpeed;              // +0xde8: the speed along x of the state at 0x9eb520
};
// vtable 0x1881880, 238 slots
struct EnemyShooter : Enemy {
    SPTG_TYPE(Enemy, 0x1d528948u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9ebb80)
    void Fire();   // 0x9ec540
    void Update();
    void Slot166(int kind);
    void Slot19();
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237

    char padding_b7a[0x12];
    int32_t valueB8c;            // +0xb8c: serialized through a uint32_t
    AttackSlot attacks[1];       // +0xb90
    float valueC08;              // +0xc08: with +0xc0c and +0xc10, the shot's velocity
    float valueC0c;              // +0xc0c
    float valueC10;              // +0xc10
    float valueC14;              // +0xc14: with +0xc18 and +0xc1c, the muzzle of a straight shot
    float valueC18;              // +0xc18
    float valueC1c;              // +0xc1c
    float valueC20;              // +0xc20: when a straight shot leaves
    int32_t valueC24;            // +0xc24: serialized through a uint32_t
    float valueC28;              // +0xc28: percent chance of aiming up at a target in the air
    float valueC2c;              // +0xc2c: that shot's angle, in degrees
    float valueC30;              // +0xc30: with +0xc34 and +0xc38, its muzzle
    float valueC34;              // +0xc34
    float valueC38;              // +0xc38
    float valueC3c;              // +0xc3c: when it leaves
    uint8_t flagC40;             // +0xc40: the shot has left
    char padding_c41[0x3];
    onyx::Vector3 vectorC44;     // +0xc44: the muzzle of this shot
    onyx::Vector3 vectorC50;     // +0xc50: its velocity
    int32_t valueC5c;            // +0xc5c
};
// vtable 0x1882018, 238 slots
struct EnemyPaparazzi : Enemy {
    SPTG_TYPE(Enemy, 0x130fc851u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9ecc80)
    void Update();
    void Approach();
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237

    char padding_b7a[0x16];
    AttackSlot attacks[2];       // +0xb90
};
// vtable 0x18827b0, 250 slots
struct EnemyNormal : Enemy {
    SPTG_TYPE(Enemy, 0x65c38d59u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9ee800)
    void Update();
    void Approach();
    void Slot166(int kind);
    int State96(int event);
    int State174(int event);
    int State194(int event);
    bool CanMount();
    int State196(int event);
    bool OnMount(void* data);
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249

    char padding_b7a[0x16];
    AttackSlot attacks[10];      // +0xb90
    uint8_t flag1040;            // +0x1040: enables the switch to slot 246 in slot 33
    char padding_1041[0x7];
    AttackSlot attack1048;       // +0x1048
    AttackSlot attack10c0;       // +0x10c0
};
// vtable 0x1882fa8, 236 slots
struct EnemyMini : Enemy {
    SPTG_TYPE(Enemy, 0x01d4338fu)
    bool IsA(uint32_t type) override;   // slot 12 (0x9f0120)
    void Remove(bool respawn);
    int State196(int event);
    void Update();
    void Slot166(int kind);
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235

    char padding_b7a[0x16];
    AttackSlot attacks[2];       // +0xb90
    uint8_t projectileOnRemove;  // +0xc80: Remove fires a projectile
    char padding_c81[0x3];
    uint32_t projectileSpawner;  // +0xc84: from that spawner
    onyx::Vector3 projectileOffset; // +0xc88: from the enemy's position moved by this
    uint8_t flagC94;             // +0xc94
};
// vtable 0x1883730, 237 slots
struct EnemyJetPackMatt : Enemy {
    SPTG_TYPE(Enemy, 0x4a38882eu)
    bool IsA(uint32_t type) override;   // slot 12 (0x9f0eb0)
    void Slot13();
    int State106(int event);
    void Spawn(const EnemySpawnInfo* info) override;
    void FollowPlayfield() override;
    void Update();
    bool IsOnGround() override;
    void Slot166(int kind);
    int State200(int event);
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    int State9f25b0(int event);   // 0x9f25b0, not virtual
    virtual State State9f25b0Ptr();   // slot 236: returns the state at 0x9f25b0

    char padding_b7a[0x12];
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
    float liftSpeed;             // +0xc34: how fast the jet pack takes it up
    uint8_t flying;              // +0xc38
    char padding_c39[0x3];
    float spawnHeight;           // +0xc3c: where it was placed
};
// vtable 0x1884700, 246 slots
struct EnemyHanzo : Enemy {
    SPTG_TYPE(Enemy, 0x0f4fe01fu)
    bool IsA(uint32_t type) override;   // slot 12 (0x9f5cc0)
    void Update();
    void Remove(bool respawn);
    void Approach();
    bool CanMount();
    bool OnMount(void* data);
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

    char padding_b7a[0x16];
    AttackSlot attacks[8];       // +0xb90
};
// vtable 0x1884ed8, 240 slots
struct EnemyGodzilla : Enemy {
    SPTG_TYPE(Enemy, 0x5a0b2941u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9f8cf0)
    void Update();
    int State122(int event) override;
    void Approach();
    void Slot166(int kind);
    int State124(int event);
    bool CanMount();
    bool OnHit(BaseCharacter* other, void* hit);
    void ReactTo(BaseCharacter* other, int reaction, void* data);
    bool OnMount(void* data);
    int State100(int event);
    int State194(int event);
    bool Slot82();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239

    char padding_b7a[0x16];
    AttackSlot attacks[4];       // +0xb90
    uint8_t dashing;             // +0xd70: state 194 waits out the delay before its dash
};
// vtable 0x1885680, 248 slots
struct EnemyGiant : Enemy {
    SPTG_TYPE(Enemy, 0x15b0cbd1u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9fadf0)
    void Update();
    void Approach();
    bool CanMount();
    int State196(int event);
    void ReactTo(BaseCharacter* other, int reaction, void* data);
    bool OnMount(void* data);
    int State96(int event);
    int State174(int event);
    bool Check9fd3e0();   // 0x9fd3e0
    bool Check9fd120();   // 0x9fd120: a range test Check9fd3e0 makes before its roll
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

    char padding_b7a[0xf];
    uint8_t flagB89;             // +0xb89
    char padding_b8a[0x6];
    AttackSlot attacks[10];      // +0xb90
    float waitTimer;             // +0x1040: how long Check9fd3e0 has waited
};
// vtable 0x1886e20, 244 slots
struct EnemyChubby : Enemy {
    SPTG_TYPE(Enemy, 0x49d67b25u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9fede0)
    void Update();
    int State136(int event) override;
    void Approach();
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243

    char padding_b7a[0x16];
    AttackSlot attacks[3];       // +0xb90
    uint8_t flagCf8;             // +0xcf8
};
// vtable 0x18885a0, 240 slots
struct EnemyAerial : Enemy {
    SPTG_TYPE(Enemy, 0x513449e0u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa02600)
    void FollowPlayfield() override;
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

    char padding_b7a[0x16];
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
    float timeLimitCc0;          // +0xcc0: how long the state at 0xa04890 lasts
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
    float timerDbc;              // +0xdbc: time spent in the state at 0xa04890
    uint8_t flagDc0;             // +0xdc0
};
// vtable 0x187c648, 241 slots
struct EnemyStuntman : EnemyOneHitWonder {
    SPTG_TYPE(EnemyOneHitWonder, 0x119b895fu)
    bool IsA(uint32_t type) override;   // slot 12 (0x9cc290)
    int State96(int event);
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyOneHitWonder
    int State9da590(int event);   // 0x9da590, not virtual
    virtual State State9da590Ptr();   // slot 240: returns the state at 0x9da590

    char padding_bcd[0x3];
    uint32_t valueBd0;           // +0xbd0: slot 4 moves these, +0xbd4 through a uint32_t
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
    SPTG_TYPE(EnemyOneHitWonder, 0x640c2724u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9e4ce0)
    int State96(int event);
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyOneHitWonder
    int State9e5360(int event);   // 0x9e5360, not virtual
    virtual State State9e5360Ptr();   // slot 240: returns the state at 0x9e5360

    char padding_bcd[0x3];
    uint32_t valueBd0;           // +0xbd0: slot 4 moves these, +0xbd4 through a uint32_t
    int32_t valueBd4;            // +0xbd4
    int32_t valueBd8;            // +0xbd8
    int32_t valueBdc;            // +0xbdc
    int32_t valueBe0;            // +0xbe0
    int32_t valueBe4;            // +0xbe4
    int32_t valueBe8;            // +0xbe8
    int32_t valueBec;            // +0xbec
    int32_t valueBf0;            // +0xbf0
    float targetX;               // +0xbf4: the screen edge it faces, less +0xbd0
    uint8_t flagBf8;             // +0xbf8
};
// vtable 0x187eaa8, 240 slots
struct EnemyGuyOnFire : EnemyOneHitWonder {
    SPTG_TYPE(EnemyOneHitWonder, 0x1e5611d4u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9e5fc0)
    int State96(int event);
    int State176(int event);
    void AttackLanded(AnimatedAiActor* target) override;

    char padding_bcd[0x3];
    AttackSlot attack;           // +0xbd0
    float attackDelay;           // +0xc48
    float attackTimer;           // +0xc4c
    uint8_t attackPending;       // +0xc50
};
// vtable 0x187f250, 242 slots
struct EnemyChargingCrowd : EnemyOneHitWonder {
    SPTG_TYPE(EnemyOneHitWonder, 0x379bc97fu)
    bool IsA(uint32_t type) override;   // slot 12 (0x9e68e0)
    void AttackLanded(AnimatedAiActor* target) override;
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyOneHitWonder
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241

    char padding_bcd[0x103];
    float attackTimer;           // +0xcd0
    uint8_t attackPending;       // +0xcd4
};
// vtable 0x1883ec0, 256 slots
struct EnemyJake : EnemyNormal {
    // Its type test leaves out EnemyNormal's type (0x65c38d59): the type names Enemy as its base.
    SPTG_TYPE(Enemy, 0x3b005f5du)
    bool IsA(uint32_t type) override;   // slot 12 (0x9f2aa0)
    int State108(int event);
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
    SPTG_TYPE(EnemyGiant, 0x3fd82782u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9fd700)
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);

    char padding_1044[0x4];
    int32_t value1048;           // +0x1048: serialized through a uint32_t
    int32_t value104c;           // +0x104c
    int32_t value1050;           // +0x1050
    int32_t value1054;           // +0x1054
};
// vtable 0x1886668, 242 slots
struct EnemyForestElves : EnemyOneHitWonder {
    SPTG_TYPE(EnemyOneHitWonder, 0x4617209cu)
    bool IsA(uint32_t type) override;   // slot 12 (0x9fdd50)
    int State96(int event);
    float TakeDamage(const void* hit, BaseCharacter* other);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyOneHitWonder
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241

    char padding_bcd[0x3];
    float waitTime;              // +0xbd0
    char padding_bd4[0x8];
    uint8_t waiting;             // +0xbdc
};
// vtable 0x18875e8, 240 slots
struct EnemyArZee : EnemyShooter {
    SPTG_TYPE(EnemyShooter, 0x5c68c411u)
    bool IsA(uint32_t type) override;   // slot 12 (0x9ffe80)
    void Slot19() override;
    int State122(int event) override;
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235, overrides EnemyShooter
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239

    char padding_c60[0x24];
    onyx::Vector3 vectorC84;     // +0xc84
    uint8_t flagC90;             // +0xc90
    char padding_c91[0x3];
    int32_t valuesC94[4];        // +0xc94
    uint8_t flagCa4;             // +0xca4
    char padding_ca5[0x3];
    onyx::Vector3 vectorCa8;     // +0xca8
    onyx::Vector3 vectorCb4;     // +0xcb4
};
// vtable 0x1887da8, 250 slots
struct EnemyAlberta : EnemyNormal {
    SPTG_TYPE(EnemyNormal, 0x6387d624u)
    bool IsA(uint32_t type) override;   // slot 12 (0xa01050)
    void Remove(bool respawn);

};

}  // namespace SPTG
