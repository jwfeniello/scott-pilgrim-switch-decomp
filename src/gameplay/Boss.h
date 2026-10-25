// SPTG::Boss (vtable 0x188b950, 258 slots): the base of the bosses. It derives
// from Enemy and adds slots 234-257, ending with seven states and their getters.
// Names are provisional.
#pragma once
#include "Enemy.h"

namespace SPTG {

// A component that answers IsA at slot 12, as SPTG components do.
struct TypedComponent : onyx::Component {
    SPTG_SLOT(3) SPTG_SLOT(4) SPTG_SLOT(5) SPTG_SLOT(6) SPTG_SLOT(7) SPTG_SLOT(8) SPTG_SLOT(9) SPTG_SLOT(10) SPTG_SLOT(11)
    virtual bool IsA(uint32_t type);   // slot 12
};
// SPTG::PlayfieldCollision (component type 0x21350526), behind ActorObject::playfield.
struct PlayfieldCollision : TypedComponent {
    static const uint32_t kType = 0x21350526u;
    char padding_8[0x120];
    uint8_t flag128;   // +0x128
};

// vtable 0x188b950, 258 slots
struct Boss : Enemy {
    void Update();
    void Slot13();
    bool Slot33(void* data);
    float TakeDamage(const void* hit, BaseCharacter* other);
    bool Slot82();
    void Slot86();
    void Slot233(const uint8_t* trigger);
    bool CheckA1e720();   // 0xa1e720
    bool CheckA1e820();   // 0xa1e820
    int State96(int event); State State96Ptr();   // slots 96, 97, override Enemy
    int State98(int event); State State98Ptr();   // slots 98, 99, override Enemy
    int State106(int event); State State106Ptr();   // slots 106, 107, override Enemy
    int State108(int event); State State108Ptr();   // slots 108, 109, override Enemy
    int State112(int event); State State112Ptr();   // slots 112, 113, override Enemy
    int State116(int event); State State116Ptr();   // slots 116, 117, override Enemy
    int State122(int event); State State122Ptr();   // slots 122, 123, override Enemy
    int State198(int event); State State198Ptr();   // slots 198, 199, override Enemy
    int State200(int event); State State200Ptr();   // slots 200, 201, override Enemy
    virtual void Slot234(int kind);                                          // slot 234
    SPTG_SLOT(235)
    SPTG_SLOT(236)
    virtual bool Slot237(const AttackSlot& request);                         // slot 237
    virtual bool Slot238();                                                  // slot 238
    SPTG_SLOT(239)
    virtual void Slot240();                                                  // slot 240
    SPTG_SLOT(241)
    virtual void Slot242();                                                  // slot 242
    SPTG_SLOT(243)
    virtual int State244(int event); virtual State State244Ptr();   // slots 244, 245
    virtual int State246(int event); virtual State State246Ptr();   // slots 246, 247
    virtual int State248(int event); virtual State State248Ptr();   // slots 248, 249
    virtual int State250(int event); virtual State State250Ptr();   // slots 250, 251
    virtual int State252(int event); virtual State State252Ptr();   // slots 252, 253
    virtual int State254(int event); virtual State State254Ptr();   // slots 254, 255
    virtual int State256(int event); virtual State State256Ptr();   // slots 256, 257

    char padding_b79[0x3f];
    AttackSlot attacks[2];       // +0xbb8: the second is requested every update with kind 1
    char padding_ca8[0x10];
    float limitCb8;              // +0xcb8
    char padding_cbc[0x10];
    float chanceCcc;             // +0xccc: percent, rolled by slot 233
    uint8_t flagCd0;             // +0xcd0
    uint8_t flagCd1;             // +0xcd1
    char padding_cd2[0x36];
    int32_t valueD08;            // +0xd08
    float timerD0c;              // +0xd0c
    char padding_d10[0x16];
    uint8_t flagD26;             // +0xd26
    uint8_t flagD27;             // +0xd27
    uint8_t flagD28;             // +0xd28
    uint8_t flagD29;             // +0xd29
    uint8_t flagD2a;             // +0xd2a
};

}  // namespace SPTG
