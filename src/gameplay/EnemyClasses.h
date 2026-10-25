// The regular enemy classes (all derive from SPTG::Enemy): their own states
// after slot 233, each followed by its getter, and the overrides the sources
// define. Names are provisional.
#pragma once
#include "Enemy.h"

namespace SPTG {

// vtable 0x187c648, 241 slots
struct EnemyStuntman : Enemy {
    int State108(int event);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    SPTG_SLOT(240)
};
// vtable 0x187ce88, 240 slots
struct EnemyOneHitWonder : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
};
// vtable 0x187e2f8, 241 slots
struct EnemySasuke : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    SPTG_SLOT(240)
};
// vtable 0x187eaa8, 240 slots
struct EnemyGuyOnFire : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
};
// vtable 0x187f250, 242 slots
struct EnemyChargingCrowd : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
};
// vtable 0x187fa08, 244 slots
struct EnemyZombie : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
};
// vtable 0x18801d0, 238 slots
struct EnemyWolverine : Enemy {
    void Approach();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
};
// vtable 0x1880968, 234 slots
struct EnemyThief : Enemy {
    void Slot166(int kind);
    int State194(int event);
};
// vtable 0x18810e0, 239 slots
struct EnemySpeedy : Enemy {
    void Approach();
    int State194(int event);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    SPTG_SLOT(238)
};
// vtable 0x1881880, 238 slots
struct EnemyShooter : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
};
// vtable 0x1882018, 238 slots
struct EnemyPaparazzi : Enemy {
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
};
// vtable 0x18827b0, 250 slots
struct EnemyNormal : Enemy {
    int State96(int event);
    int State174(int event);
    int State194(int event);
    bool Slot34Check();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249
};
// vtable 0x1882fa8, 236 slots
struct EnemyMini : Enemy {
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
};
// vtable 0x1883730, 237 slots
struct EnemyJetPackMatt : Enemy {
    void Slot166(int kind);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    SPTG_SLOT(236)
};
// vtable 0x1883ec0, 256 slots
struct EnemyJake : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249
    virtual int State250(int event); virtual State State250Ptr();   // slots 250, 251
    virtual int State252(int event); virtual State State252Ptr();   // slots 252, 253
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255
};
// vtable 0x1884700, 246 slots
struct EnemyHanzo : Enemy {
    bool Slot34Check();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    SPTG_SLOT(244)
    SPTG_SLOT(245)
};
// vtable 0x1884ed8, 240 slots
struct EnemyGodzilla : Enemy {
    void Approach();
    void Slot166(int kind);
    int State124(int event);
    bool Slot34Check();
    bool OnHit(BaseCharacter* other, void* hit);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
};
// vtable 0x1885680, 248 slots
struct EnemyGiant : Enemy {
    bool Slot34Check();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247
};
// vtable 0x1885e68, 248 slots
struct EnemyGeeOne : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247
};
// vtable 0x1886668, 242 slots
struct EnemyForestElves : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
};
// vtable 0x1886e20, 244 slots
struct EnemyChubby : Enemy {
    void Approach();
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
};
// vtable 0x18875e8, 240 slots
struct EnemyArZee : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
};
// vtable 0x1887da8, 250 slots
struct EnemyAlberta : Enemy {
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    virtual int State238(int event); virtual State State238Ptr();   // slots 238, 239
    virtual int State240(int event); virtual State State240Ptr();   // slots 240, 241
    virtual int State242(int event); virtual State State242Ptr();   // slots 242, 243
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249
};
// vtable 0x18885a0, 240 slots
struct EnemyAerial : Enemy {
    void SetSolid(bool solid);
    int State108(int event);
    virtual int State234(int event); virtual State State234Ptr();   // slots 234, 235
    virtual int State236(int event); virtual State State236Ptr();   // slots 236, 237
    SPTG_SLOT(238)
    SPTG_SLOT(239)
};

}  // namespace SPTG
