// SPTG::BaseCharacter (vtable 0x1874998, 159 slots) as far as its subclasses'
// states use it. Slots 96-145 are its states, each followed by a getter that
// returns it; slot 96 handles the four state events and does nothing else.
// Names are provisional.
#pragma once
#include "Level.h"
#include "OnyxComponents.h"
#include "StateMachine.h"

extern "C" float Move_FrameDelta;   // seconds since the last frame (0x1924d70)

namespace SPTG {

// One of a character's attack descriptors (0x78 bytes).
struct Attack { char data[0x78]; };
struct BaseCharacter;
// A message one character sends another (see ControllablePlayer::OnMessage).
struct CharacterMessage {
    int32_t kind;
    BaseCharacter* receiver;
    void* data;
    BaseCharacter* sender;
};

#define SPTG_SLOT(n) virtual void Slot##n();
// A visual effect component whose visibility flag the states toggle.
struct CharacterEffect : onyx::Component {
    char padding_8[0x70];
    uint8_t visible;   // +0x78
};

struct BaseCharacter : onyx::Component {
    typedef StateMachine<BaseCharacter>::State State;
    virtual ~BaseCharacter();                                                    // slots 0, 1
    SPTG_SLOT(3) SPTG_SLOT(4) SPTG_SLOT(5) SPTG_SLOT(6) SPTG_SLOT(7) SPTG_SLOT(8) SPTG_SLOT(9) SPTG_SLOT(10)
    SPTG_SLOT(11) SPTG_SLOT(12) SPTG_SLOT(13) SPTG_SLOT(14) SPTG_SLOT(15) SPTG_SLOT(16) SPTG_SLOT(17) SPTG_SLOT(18)
    SPTG_SLOT(19) SPTG_SLOT(20)
    virtual void ReactTo(BaseCharacter* other, int reaction, void* data);    // slot 21
    virtual void PlayAnimation(int animation, int a, int b, float speed);    // slot 22
    SPTG_SLOT(23) SPTG_SLOT(24) SPTG_SLOT(25) SPTG_SLOT(26)
    virtual bool AnimationDone();                                            // slot 27
    SPTG_SLOT(28) SPTG_SLOT(29) SPTG_SLOT(30)
    virtual void Slot31Action();                                             // slot 31
    SPTG_SLOT(32) SPTG_SLOT(33) SPTG_SLOT(34)
    virtual void Slot35(bool flag, BaseCharacter* other);                    // slot 35
    virtual bool Slot36Check();      // flag +0x338 and a live mount at +0x238 // slot 36
    SPTG_SLOT(37) SPTG_SLOT(38) SPTG_SLOT(39) SPTG_SLOT(40) SPTG_SLOT(41) SPTG_SLOT(42) SPTG_SLOT(43)
    virtual void StartAttack(Attack* attack, bool flag, int source, BaseCharacter* attacker); // slot 44
    SPTG_SLOT(45) SPTG_SLOT(46) SPTG_SLOT(47) SPTG_SLOT(48)
    virtual int Slot49();                                                    // slot 49
    SPTG_SLOT(50)
    virtual bool IsOut();             // checked before targeting a player   // slot 51
    virtual bool IsOnGround();                                               // slot 52
    SPTG_SLOT(53) SPTG_SLOT(54) SPTG_SLOT(55) SPTG_SLOT(56) SPTG_SLOT(57) SPTG_SLOT(58) SPTG_SLOT(59) SPTG_SLOT(60)
    SPTG_SLOT(61) SPTG_SLOT(62) SPTG_SLOT(63) SPTG_SLOT(64) SPTG_SLOT(65) SPTG_SLOT(66) SPTG_SLOT(67) SPTG_SLOT(68)
    SPTG_SLOT(69) SPTG_SLOT(70) SPTG_SLOT(71) SPTG_SLOT(72) SPTG_SLOT(73) SPTG_SLOT(74) SPTG_SLOT(75) SPTG_SLOT(76)
    SPTG_SLOT(77) SPTG_SLOT(78) SPTG_SLOT(79) SPTG_SLOT(80) SPTG_SLOT(81) SPTG_SLOT(82) SPTG_SLOT(83) SPTG_SLOT(84)
    SPTG_SLOT(85) SPTG_SLOT(86) SPTG_SLOT(87) SPTG_SLOT(88) SPTG_SLOT(89)
    virtual void Slot90(float value);                                        // slot 90
    SPTG_SLOT(91) SPTG_SLOT(92) SPTG_SLOT(93) SPTG_SLOT(94) SPTG_SLOT(95)
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
    SPTG_SLOT(146) SPTG_SLOT(147) SPTG_SLOT(148) SPTG_SLOT(149) SPTG_SLOT(150) SPTG_SLOT(151) SPTG_SLOT(152) SPTG_SLOT(153)
    SPTG_SLOT(154) SPTG_SLOT(155) SPTG_SLOT(156) SPTG_SLOT(157) SPTG_SLOT(158)

    char padding_8[0x50];
    onyx::ComponentHandle* effectHandle; // +0x58
    char padding_60[0x8];
    onyx::ComponentHandle* partnerHandle; // +0x68
    char padding_70[0x20];
    Singleton<LevelItemAccessor> level; // +0x90
    char padding_98[0x98];
    uint8_t flag130;             // +0x130
    char padding_131[0x6f];
    int32_t animation;           // +0x1a0: the animation playing
    onyx::Vector3 motion;        // +0x1a4
    onyx::Vector3 motionTarget;  // +0x1b0
    char padding_1bc[0x4c];
    StateMachine<BaseCharacter> states; // +0x208
    char padding_230[0x8];
    onyx::ComponentHandle* mountHandle; // +0x238
    onyx::ComponentHandle* held; // +0x240: owned reference, dropped by ReleaseHeld
    char padding_248[0xe8];
    float timer330;              // +0x330
    char padding_334[0x4];
    uint8_t flag338;             // +0x338
    char padding_339[0x81];
    uint8_t flag3ba;             // +0x3ba
    char padding_3bb[0x145];
    int32_t actionMode;          // +0x500
    char padding_504[0x244];
    uint8_t flag748;             // +0x748

    void ReleaseHeld(bool flag, float x, float y);   // 0x976fb0: drops the reference at +0x240
    BaseCharacter* Mount() { return mountHandle ? static_cast<BaseCharacter*>(mountHandle->object) : nullptr; }
};
static_assert(__builtin_offsetof(BaseCharacter, states) == 0x208, "BaseCharacter states");
static_assert(__builtin_offsetof(BaseCharacter, actionMode) == 0x500, "BaseCharacter action mode");

// SPTG::ControllablePlayer: its first own virtual (slot 159) receives messages.
struct ControllablePlayer : BaseCharacter {
    virtual void OnMessage(CharacterMessage* message);   // slot 159
};
// Onyx::Catalog<ControllablePlayer> (component type 0x0bf4a9b7).
struct PlayerCatalog : onyx::Component {
    char padding_8[0x78];
    uint64_t count;                   // +0x80
    char padding_88[0x8];
    ControllablePlayer** players;     // +0x90
};

}  // namespace SPTG
