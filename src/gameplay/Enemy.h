// SPTG::Enemy (vtable 0x187d618, 234 slots) as far as the enemy states use it.
// Every regular enemy class derives from it and appends its own states after
// slot 233, each followed by a getter that returns it. Fields below are placed
// in Enemy even where they may belong to BaseCharacter. Names are provisional.
#pragma once
#include "BaseCharacter.h"

namespace SPTG {

// A player the enemy may target, with its distance (0x18 bytes).
struct TargetEntry {
    char padding_0[0xc];
    float distance;                   // +0xc
    onyx::ComponentHandle* actor;     // +0x10
};

struct Enemy : BaseCharacter {
    int State96(int event);                                          // slot 96, overrides BaseCharacter
    int State100(int event);                                         // slot 100, overrides BaseCharacter
    int State102(int event);                                         // slot 102, overrides BaseCharacter
    int State108(int event);                                         // slot 108, overrides BaseCharacter
    int State116(int event);                                         // slot 116, overrides BaseCharacter
    int State126(int event);                                         // slot 126, overrides BaseCharacter
    int State136(int event);                                         // slot 136, overrides BaseCharacter
    SPTG_SLOT(159) SPTG_SLOT(160) SPTG_SLOT(161) SPTG_SLOT(162) SPTG_SLOT(163) SPTG_SLOT(164) SPTG_SLOT(165) SPTG_SLOT(166)
    virtual void Approach();             // runs while the approach state continues // slot 167
    SPTG_SLOT(168) SPTG_SLOT(169)
    virtual float Slot170();                                                 // slot 170
    SPTG_SLOT(171)
    virtual int State172(int event); virtual State State172Ptr();            // slots 172, 173
    virtual int State174(int event); virtual State State174Ptr();            // slots 174, 175
    virtual int State176(int event); virtual State State176Ptr();            // slots 176, 177
    virtual int State178(int event); virtual State State178Ptr();            // slots 178, 179
    virtual int State180(int event); virtual State State180Ptr();            // slots 180, 181
    virtual int State182(int event); virtual State State182Ptr();            // slots 182, 183
    virtual int State184(int event); virtual State State184Ptr();            // slots 184, 185
    virtual int State186(int event); virtual State State186Ptr();            // slots 186, 187
    virtual int State188(int event); virtual State State188Ptr();            // slots 188, 189
    virtual int State190(int event); virtual State State190Ptr();            // slots 190, 191
    virtual int State192(int event); virtual State State192Ptr();            // slots 192, 193
    virtual int State194(int event); virtual State State194Ptr();            // slots 194, 195
    virtual int State196(int event); virtual State State196Ptr();            // slots 196, 197
    virtual int State198(int event); virtual State State198Ptr();            // slots 198, 199
    virtual int State200(int event); virtual State State200Ptr();            // slots 200, 201
    virtual int State202(int event); virtual State State202Ptr();            // slots 202, 203
    virtual int State204(int event); virtual State State204Ptr();            // slots 204, 205
    virtual int State206(int event); virtual State State206Ptr();            // slots 206, 207
    virtual int State208(int event); virtual State State208Ptr();            // slots 208, 209
    virtual int State210(int event); virtual State State210Ptr();            // slots 210, 211
    virtual int State212(int event); virtual State State212Ptr();            // slots 212, 213
    virtual int State214(int event); virtual State State214Ptr();            // slots 214, 215
    virtual int State216(int event); virtual State State216Ptr();            // slots 216, 217
    virtual int State218(int event); virtual State State218Ptr();            // slots 218, 219
    virtual int State220(int event); virtual State State220Ptr();            // slots 220, 221
    virtual int State222(int event); virtual State State222Ptr();            // slots 222, 223
    virtual int State224(int event); virtual State State224Ptr();            // slots 224, 225
    virtual int State226(int event); virtual State State226Ptr();            // slots 226, 227
    SPTG_SLOT(228) SPTG_SLOT(229) SPTG_SLOT(230) SPTG_SLOT(231) SPTG_SLOT(232) SPTG_SLOT(233)

    char padding_749[0x63];
    float value7ac;              // +0x7ac
    float stateTime;             // +0x7b0: time spent in the current state
    char padding_7b4[0x4];
    uint8_t flag7b8;             // +0x7b8
    uint8_t flag7b9;             // +0x7b9
    char padding_7ba[0x59];
    uint8_t flag813;             // +0x813
    char padding_814[0x8];
    uint8_t approachCountdown;   // +0x81c: frames left in the approach state
    char padding_81d[0x3];
    uint32_t targetIndex;        // +0x820: index into targets
    int32_t aiMode;              // +0x824
    char padding_828[0x20];
    uint64_t targetCount;        // +0x848
    TargetEntry* targets;        // +0x850
    char padding_858[0x8];
    onyx::ComponentHandle* target; // +0x860: the player being attacked
    char padding_868[0x8];
    uint8_t chanceResult;        // +0x870: set by RollChance
    char padding_871[0x3];
    int32_t value874;            // +0x874
    char padding_878[0x4];
    int32_t mode87c;             // +0x87c
    char padding_880[0x18];
    AttackSlot specialAttack;    // +0x898
    char padding_910[0xc];
    float attackRange;           // +0x91c
    float chance;                // +0x920: percent, compared with a random roll
    char padding_924[0x54];
    uint8_t flags978;            // +0x978
    char padding_979[0x7];
    float value980;              // +0x980
    float delay984;              // +0x984
    char padding_988[0x20];
    float assistChance;          // +0x9a8: percent
    float delay9ac;              // +0x9ac
    char padding_9b0[0x18];
    int32_t value9c8;            // +0x9c8
    float partnerDelay;          // +0x9cc
    char padding_9d0[0x2];
    uint8_t flag9d2;             // +0x9d2
    char padding_9d3[0x116];
    uint8_t flagAe9;             // +0xae9
    char padding_aea[0xbe];
    AttackSlot attacks[7];       // +0xba8

    bool LeaveCheck();   // 0x9dcb90: lets state 172 hand over to state 96
    void RollChance();   // 0x9dd6b0: when slot 36 holds, rolls the random chance at +0x920
    void Update9dc4c0(); // 0x9dc4c0: runs each update of state 186
    void Update9db820(float time, float value);   // 0x9db820
    void Enter9db480();  // 0x9db480
};
static_assert(__builtin_offsetof(Enemy, stateTime) == 0x7b0, "Enemy state time");
static_assert(__builtin_offsetof(Enemy, aiMode) == 0x824, "Enemy AI mode");
static_assert(__builtin_offsetof(Enemy, attacks) == 0xba8, "Enemy attacks");

// Onyx::Catalog<Enemy> (component type 0x5f5cdd73).
struct EnemyCatalog : onyx::Component {
    char padding_8[0x78];
    uint64_t count;     // +0x80
    char padding_88[0x8];
    Enemy** enemies;    // +0x90
};

}  // namespace SPTG
