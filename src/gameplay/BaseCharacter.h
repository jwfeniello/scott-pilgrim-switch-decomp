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
struct Attack {
    char data_0[0x2c];
    int32_t value2c;                  // +0x2c
    char data_30[0x20];
    onyx::ComponentHandle* shared;    // +0x50: reference-counted
    Attack(const Attack& other) : value2c(0), shared(nullptr) { *this = other; }
    Attack& operator=(const Attack& other);   // 0x8e4450
    void Serialize(onyx::Archive& archive);   // 0x8e4630
};
static_assert(sizeof(Attack) == 0x58, "Attack size");
// An attack an enemy can request (0x78 bytes): the attack states start its
// attack, and Enemy's attack list (+0x7e8) holds copies. The kind is the hit
// kind the class's slot 166 answers; the special attack's state plays it as an
// animation.
struct AttackSlot {
    uint64_t header[2];  // +0x0: contents unknown, copied whole
    uint8_t flag10;      // +0x10
    Attack attack;       // +0x18
    int32_t kind;        // +0x70
    uint8_t flag74;      // +0x74
    void Serialize(onyx::Archive& archive);   // 0x9e6310
};
static_assert(sizeof(AttackSlot) == 0x78, "AttackSlot size");
struct BaseCharacter;
// A message one character sends another (see ControllablePlayer::OnMessage).
struct CharacterMessage {
    int32_t kind;
    BaseCharacter* receiver;
    void* data;
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
// SPTG::ActorObject (component type 0x6492d61d).
struct ActorObject : onyx::Component {
    char padding_8[0x48];
    onyx::ComponentHandle* playfield;   // +0x50
    onyx::ComponentHandle* flags;       // +0x58, component type 0x2eae5813
    onyx::ComponentHandle* transform;   // +0x60, Onyx::Transform
};
// The component behind ActorObject::flags.
struct ActorFlags : onyx::Component {
    onyx::EventCallback* blinkOffCallback;   // +0x8, event 0x255c0afe
    onyx::EventTarget* blinkOffTarget;       // +0x10
    char padding_18[0x8];
    onyx::EventCallback* blinkOnCallback;    // +0x20, event 0x44174b43
    onyx::EventTarget* blinkOnTarget;        // +0x28
    char padding_30[0x49];
    uint8_t facingLeft;   // +0x79
    char padding_7a[0x9e];
    uint8_t flag118;      // +0x118
};
// Game services reached through the singleton at +0x80 (getter 0x992bf0).
struct GameDifficulty { char padding[0x108]; float value108; };   // +0x108
struct NpcAccessor { char padding[0x60]; onyx::ComponentHandle* catalog; };   // +0x60, Catalog<NPC>
struct GameServices {
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

// Reached through the singleton at +0x1f8 (getter 0x78c910).
struct CharacterSettings { char padding[0x5ad]; uint8_t flag5ad; };   // +0x5ad
// The hit TakeDamage receives; only +0x14 is known so far.
struct DamageHit { char padding_0[0x14]; int32_t value14; };
// What slot 93 receives; only the amount at +0x4 is known.
struct HitValue { uint32_t value0; float amount; };
// The object behind the global at 0x1924bc0; slot 158 fails while +0xe0 is set.
struct GameState { char padding[0xe0]; uint8_t flagE0; };
extern "C" GameState* Game_State;   // 0x1924bc0

// A visual effect component whose visibility flag the states toggle.
struct CharacterEffect : onyx::Component {
    char padding_8[0x70];
    uint8_t visible;   // +0x78
};

struct BaseCharacter : onyx::Component {
    typedef StateMachine<BaseCharacter>::State State;
    virtual ~BaseCharacter();                                                    // slots 0, 1
    SPTG_SLOT(3)
    virtual void Slot4(onyx::Archive& archive, ComponentSlot::Source* source); // slot 4
    SPTG_SLOT(5) SPTG_SLOT(6) SPTG_SLOT(7) SPTG_SLOT(8) SPTG_SLOT(9) SPTG_SLOT(10) SPTG_SLOT(11)
    virtual bool IsA(uint32_t type);                                         // slot 12
    SPTG_SLOT(13) SPTG_SLOT(14) SPTG_SLOT(15)
    virtual void Update();                                                   // slot 16
    SPTG_SLOT(17) SPTG_SLOT(18)
    virtual void Slot19();                                                   // slot 19
    SPTG_SLOT(20)
    virtual void ReactTo(BaseCharacter* other, int reaction, void* data);    // slot 21
    virtual void PlayAnimation(int animation, bool a, bool b, float speed);  // slot 22
    SPTG_SLOT(23) SPTG_SLOT(24)
    virtual void SetAnimationSpeed(float speed);                             // slot 25
    virtual void SetAnimationPaused(bool paused);                            // slot 26
    virtual bool AnimationDone();                                            // slot 27
    virtual void Slot28(bool flag);                                          // slot 28
    SPTG_SLOT(29)
    virtual void TurnAround();                                               // slot 30
    virtual void Slot31Action();                                             // slot 31
    virtual void Slot32();                                                   // slot 32
    virtual bool Slot33(void* data);                                         // slot 33
    virtual bool Slot34Check();                                              // slot 34
    virtual void Slot35(bool flag, BaseCharacter* other);                    // slot 35
    virtual bool Slot36Check();      // flag +0x338 and a live mount at +0x238 // slot 36
    SPTG_SLOT(37)
    virtual bool OnHit(BaseCharacter* other, void* hit);                     // slot 38
    SPTG_SLOT(39) SPTG_SLOT(40)
    virtual void Slot41(bool a, bool b, bool c, void* data, BaseCharacter* other, float scale, float f1, float f2, float f3); // slot 41
    SPTG_SLOT(42)
    virtual void Slot43(float value);                                        // slot 43
    virtual void StartAttack(Attack* attack, bool flag, int source, BaseCharacter* attacker); // slot 44
    virtual int Slot45();                                                    // slot 45
    SPTG_SLOT(46) SPTG_SLOT(47) SPTG_SLOT(48)
    virtual int Slot49();                                                    // slot 49
    virtual int Slot50();                                                    // slot 50
    virtual bool IsOut();             // checked before targeting a player   // slot 51
    virtual bool IsOnGround();                                               // slot 52
    virtual void Slot53();                                                   // slot 53
    SPTG_SLOT(54)
    virtual bool IsHeld();                                                   // slot 55
    virtual void SetSolid(bool solid);                                       // slot 56
    virtual float Slot57();                                                  // slot 57
    SPTG_SLOT(58)
    virtual float Slot59();                                                  // slot 59
    SPTG_SLOT(60) SPTG_SLOT(61) SPTG_SLOT(62) SPTG_SLOT(63)
    virtual float Slot64(float amount);                                      // slot 64
    virtual void Slot65(float amount);                                       // slot 65
    SPTG_SLOT(66) SPTG_SLOT(67)
    virtual void Slot68();                                                   // slot 68
    virtual float TakeDamage(const void* hit, BaseCharacter* other);         // slot 69
    virtual void Remove(bool flag);                                          // slot 70
    virtual void Release();                                                  // slot 71
    SPTG_SLOT(72)
    virtual bool Slot73();                                                   // slot 73
    virtual void Slot74(const float* point, bool flag, float value);         // slot 74
    virtual void Slot75(void* data, void* extra);                            // slot 75
    SPTG_SLOT(76)
    virtual float Slot77();                                                  // slot 77
    SPTG_SLOT(78)
    virtual bool Slot79();                                                   // slot 79
    virtual bool Slot80();                                                   // slot 80
    virtual float Slot81();                                                  // slot 81
    virtual bool Slot82();                                                   // slot 82
    virtual bool Slot83();                                                   // slot 83
    SPTG_SLOT(84)
    virtual bool Slot85();                                                   // slot 85
    virtual void Slot86();                                                   // slot 86
    SPTG_SLOT(87) SPTG_SLOT(88)
    virtual void Slot89(float amount);                                       // slot 89
    virtual void Slot90(float value);                                        // slot 90
    virtual void Slot91(float x);                                            // slot 91
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
    SPTG_SLOT(146) SPTG_SLOT(147)
    virtual bool Slot148(bool* out);                                         // slot 148
    virtual float Slot149();                                                 // slot 149
    virtual float Slot150();                                                 // slot 150
    SPTG_SLOT(151) SPTG_SLOT(152)
    virtual void Slot153(uint32_t* flags);                                   // slot 153
    SPTG_SLOT(154) SPTG_SLOT(155)
    virtual bool Slot156();                                                  // slot 156
    SPTG_SLOT(157)
    virtual bool Slot158();                                                  // slot 158

    char padding_8[0x38];
    Holder* attachment;          // +0x40: what the actor is attached to
    char padding_48[0x8];
    uint8_t flag50;              // +0x50
    char padding_51[0x3];
    int32_t value54;             // +0x54: copied to +0x230 by slot 13
    onyx::ComponentHandle* effectHandle; // +0x58
    char padding_60[0x8];
    onyx::ComponentHandle* partnerHandle; // +0x68
    onyx::ComponentHandle* animationHandle; // +0x70: AnimationControl (type 0x29fbe438)
    onyx::ComponentHandle* actorObject; // +0x78
    Singleton<GameServices> services; // +0x80
    char padding_88[0x8];
    Singleton<LevelItemAccessor> level; // +0x90
    float base98;                // +0x98: scaled into +0x9c
    float scaled9c;              // +0x9c
    char padding_a0[0xc];
    float throwSpeed;            // +0xac: horizontal speed after landing from a throw
    char padding_b0[0x48];
    float groundZ;               // +0xf8
    float groundC4;              // +0xfc
    uint8_t flag100;             // +0x100
    char padding_101[0x2b];
    int32_t value12c;            // +0x12c
    uint8_t flag130;             // +0x130
    char padding_131[0x10];
    uint8_t flag141;             // +0x141
    char padding_142[0xa];
    float value14c;              // +0x14c: the animation speed applies while not positive
    char padding_150[0xc];
    float value15c;              // +0x15c
    float value160;              // +0x160
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
    char padding_1bc[0x8];
    float motionC4;              // +0x1c4
    char padding_1c8[0x20];
    onyx::ComponentHandle* handle1e8; // +0x1e8
    void* slot1f0;               // +0x1f0: filled by AssignComponentSlot
    Singleton<CharacterSettings> settings; // +0x1f8
    void* slot200;               // +0x200: filled by AssignComponentSlot
    StateMachine<BaseCharacter> states; // +0x208
    int32_t value230;            // +0x230
    char padding_234[0x4];
    onyx::ComponentHandle* mountHandle; // +0x238
    onyx::ComponentHandle* held; // +0x240: owned reference, dropped by ReleaseHeld
    char padding_248[0x10];
    Attack attack258;            // +0x258: started by Enemy's slot 41
    int32_t value2b0;            // +0x2b0
    int32_t value2b4;            // +0x2b4
    int32_t value2b8;            // +0x2b8
    float savedZ;                // +0x2bc: restored into motionTarget.z
    float savedC4;               // +0x2c0: restored into motionC4
    float value2c4;              // +0x2c4
    int32_t value2c8;            // +0x2c8
    int32_t value2cc;            // +0x2cc
    int32_t value2d0;            // +0x2d0
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
    int32_t value2fc;            // +0x2fc
    int32_t value300;            // +0x300
    int32_t value304;            // +0x304
    int32_t value308;            // +0x308
    int32_t value30c;            // +0x30c
    int32_t value310;            // +0x310
    int32_t value314;            // +0x314
    int32_t value318;            // +0x318
    int32_t value31c;            // +0x31c
    int32_t value320;            // +0x320
    int32_t value324;            // +0x324
    float value328;              // +0x328
    float value32c;              // +0x32c
    float timer330;              // +0x330
    float value334;              // +0x334
    uint8_t flag338;             // +0x338
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
    char padding_480[0x8];
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
    char padding_510[0x4];
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

    void ReleaseHeld(bool flag, float x, float y);   // 0x976fb0: drops the reference at +0x240
    void RecordHit(void* hit);                         // 0x977190
    void ActorSlot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x945fe0: AnimatedAiActor's slot 4
    void ActorSlot32();                                // 0x93fec0: AnimatedAiActor's slot 32
    void ActorSlot33(void* data);                      // 0x940170: AnimatedAiActor's slot 33
    void ActorSlot13();                                // 0x945670: AnimatedAiActor's slot 13
    void Call945c40();                                 // 0x945c40
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
    BaseCharacter* Mount() { return mountHandle ? static_cast<BaseCharacter*>(mountHandle->object) : nullptr; }
    CharacterEffect* Effect() { return effectHandle ? static_cast<CharacterEffect*>(effectHandle->object) : nullptr; }
};
static_assert(__builtin_offsetof(BaseCharacter, states) == 0x208, "BaseCharacter states");
static_assert(__builtin_offsetof(BaseCharacter, actionMode) == 0x500, "BaseCharacter action mode");

// SPTG::ControllablePlayer: its first own virtual (slot 159) receives messages.
struct ControllablePlayer : BaseCharacter {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // slot 4 (0x978660)
    virtual void OnMessage(CharacterMessage* message);   // slot 159
    void Notify80f430(int value);                        // 0x80f430

    char padding_77c[0xc];
    void* slot788;               // +0x788
    void* slot790;               // +0x790
    void* slot798;               // +0x798
    void* slot7a0;               // +0x7a0
    void* slot7a8;               // +0x7a8
    void* slot7b0;               // +0x7b0
    void* slot7b8;               // +0x7b8
    void* slot7c0;               // +0x7c0
    void* slot7c8;               // +0x7c8
    void* slot7d0;               // +0x7d0
    onyx::ComponentHandle* handle7d8; // +0x7d8
    onyx::ComponentHandle* handle7e0; // +0x7e0
    char padding_7e8[0x18];
    EventSlot event800;          // +0x800
    EventSlot event818;          // +0x818
    EventSlot event830;          // +0x830
    EventSlot event848;          // +0x848
    int32_t value860;            // +0x860
    int32_t value864;            // +0x864
    int32_t value868;            // +0x868
    int32_t value86c;            // +0x86c
    int32_t value870;            // +0x870
    int32_t value874;            // +0x874
    int32_t value878;            // +0x878
    int32_t value87c;            // +0x87c
    int32_t value880;            // +0x880
    int32_t value884;            // +0x884
    int32_t value888;            // +0x888
    int32_t value88c;            // +0x88c
    int32_t value890;            // +0x890
    int32_t value894;            // +0x894
    int32_t value898;            // +0x898
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
    int32_t value8d0;            // +0x8d0
    int32_t value8d4;            // +0x8d4
    int32_t value8d8;            // +0x8d8
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
    int32_t value11e4;           // +0x11e4
    int32_t value11e8;           // +0x11e8
    int32_t value11ec;           // +0x11ec
    uint8_t flag11f0;            // +0x11f0
    char padding_11f1[0x3];
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
    int32_t value1268;           // +0x1268
    int32_t value126c;           // +0x126c
    int32_t value1270;           // +0x1270
    char padding_1274[0xc];
    int32_t value1280;           // +0x1280
    int32_t value1284;           // +0x1284
    uint8_t flag1288;            // +0x1288
    char padding_1289[0x3];
    int32_t value128c;           // +0x128c
    int32_t value1290;           // +0x1290
    int32_t value1294;           // +0x1294
    int32_t value1298;           // +0x1298
    int32_t value129c;           // +0x129c
    int32_t value12a0;           // +0x12a0
    int32_t value12a4;           // +0x12a4
    int32_t value12a8;           // +0x12a8
    int32_t value12ac;           // +0x12ac
    int32_t value12b0;           // +0x12b0
    int32_t value12b4;           // +0x12b4
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
    int32_t value1390;           // +0x1390
    int32_t value1394;           // +0x1394
    int32_t value1398;           // +0x1398
    int32_t value139c;           // +0x139c
    int32_t value13a0;           // +0x13a0
    int32_t value13a4;           // +0x13a4
    int32_t value13a8;           // +0x13a8
    int32_t value13ac;           // +0x13ac
    char padding_13b0[0x11c];
    int32_t value14cc;           // +0x14cc
    int32_t value14d0;           // +0x14d0
    int32_t value14d4;           // +0x14d4
    int32_t value14d8;           // +0x14d8
    int32_t value14dc;           // +0x14dc
    int32_t value14e0;           // +0x14e0
    int32_t value14e4;           // +0x14e4
    char padding_14e8[0x8];
    int32_t value14f0;           // +0x14f0
    char padding_14f4[0x24];
    int32_t value1518;           // +0x1518
    int32_t value151c;           // +0x151c
    uint8_t flag1520;            // +0x1520
    char padding_1521[0x3f];     // up to +0x1560, where the playable classes' fields begin
};
static_assert(sizeof(ControllablePlayer) == 0x1560, "ControllablePlayer size");
// A character that passes IsA(0x2f2bf4aa) (registered as Onyx::Component::Bucket)
// also receives messages at slot 159.
struct MessageReceiver : BaseCharacter {
    static const uint32_t kType = 0x2f2bf4aau;
    virtual void OnMessage(CharacterMessage* message);   // slot 159
};
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
