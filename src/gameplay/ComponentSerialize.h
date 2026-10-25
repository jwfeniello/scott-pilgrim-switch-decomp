// ABI views of components whose slot 4 (serialization, see Archive.h) is
// matched. Their other fields and functions are not recovered, so each view
// places the serialized fields at their offsets with padding between; the
// field names are provisional. The views derive from empty stand-ins for the
// bases their slot 4 chains to, named after the RTTI.
#pragma once
#include "Archive.h"
#include "BaseCharacter.h"

// Onyx::Component::Base's slot 4 (0x6782a0) and Onyx::ActionComponent's
// (0xbcaa30).
struct OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};
struct OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

namespace SPTG {

// SPTG::FlashMenu's slot 4 (0x7ffe10), SPTG::SPTG_Phase's (0x76b760) and
// SPTG::BreakableObject's (0xa10790).
struct FlashMenuBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};
struct PhaseBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};
struct BreakableObjectBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
};

// The actions derive from Onyx::ActionComponent, the others from
// Onyx::Component::Base. PlayfieldCollisionView is SPTG::PlayfieldCollision
// (named apart from the gameplay headers' declaration).
// SetGameModeAction
struct SetGameModeAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x906ea0
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    int32_t valueA8;             // +0xa8
};
// DLCSentry
struct DLCSentry : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x92c5c0
    char padding_0[0x50];
    void* slot50;                // +0x50
    int32_t value58;             // +0x58
};
// WorldClearAction
struct WorldClearAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8f1370
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    void* slotA8;                // +0xa8
    int32_t valueB0;             // +0xb0
};
// SetLayerVisibilityAction
struct SetLayerVisibilityAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x90a730
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    uint32_t idA8;               // +0xa8
    int32_t valueAc;             // +0xac
};
// WaitForAllPickupsCollected
struct WaitForAllPickupsCollected : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8f3ce0
    char padding_0[0xa0];
    onyx::ComponentHandle* handleA0; // +0xa0
    int32_t valueA8;             // +0xa8
    uint8_t flagAc;              // +0xac
};
// SectionZOffsetAdjust
struct SectionZOffsetAdjust : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x7ae820
    char padding_0[0x4c];
    int32_t value4c;             // +0x4c
    int32_t value50;             // +0x50
    int32_t value54;             // +0x54
};
// ActorPlayEmoteAction
struct ActorPlayEmoteAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8e52b0
    char padding_0[0xa8];
    uint8_t flagA8;              // +0xa8
    uint8_t flagA9;              // +0xa9
    char padding_aa[0x2];
    int32_t valueAc;             // +0xac
};
// SetFlashMenuVisibilityAction
struct SetFlashMenuVisibilityAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x912a10
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    uint32_t idA8;               // +0xa8
    int32_t valueAc;             // +0xac
    uint8_t flagB0;              // +0xb0
};
// PlayfieldCollisionView
struct PlayfieldCollisionView : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x7ae610
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    char padding_58[0xc];
    int32_t value64;             // +0x64
    uint8_t flag68;              // +0x68
    char padding_69[0x7];
    PairList list70;             // +0x70
};
// SPTG_MaterialModifier
struct SPTG_MaterialModifier : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8beab0
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    int32_t value58;             // +0x58
    char padding_5c[0x4];
    int32_t value60;             // +0x60
};
// UnblockCameraAction
struct UnblockCameraAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8f4aa0
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    void* slotA8;                // +0xa8
    int32_t valueB0;             // +0xb0
    uint8_t flagB4;              // +0xb4
    char padding_b5[0x3];
    int32_t valueB8;             // +0xb8
};
// SetHudEnableAction
struct SetHudEnableAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x90edb0
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    char padding_a8[0x4];
    int32_t valueAc;             // +0xac
    uint8_t flagB0;              // +0xb0
    uint8_t flagB1;              // +0xb1
    uint8_t flagB2;              // +0xb2
};
// VisitItemShopAction
struct VisitItemShopAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x90b140
    char padding_0[0xa8];
    uint8_t flagA8;              // +0xa8
    uint8_t flagA9;              // +0xa9
    char padding_aa[0x6];
    onyx::ComponentHandle* handleB0; // +0xb0
    uint8_t flagB8;              // +0xb8
    char padding_b9[0x3];
    int32_t valueBc;             // +0xbc
};
// WaitForButtonPress
struct WaitForButtonPress : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8f3590
    char padding_0[0xa8];
    uint8_t flagA8;              // +0xa8
    uint8_t flagA9;              // +0xa9
    char padding_aa[0x2];
    int32_t valueAc;             // +0xac
    uint8_t flagB0;              // +0xb0
    uint8_t flagB1;              // +0xb1
};
// PlayfieldActor
struct PlayfieldActor : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x7b9170
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    char padding_58[0xc];
    int32_t value64;             // +0x64
    uint8_t flag68;              // +0x68
    char padding_69[0x7];
    PairList list70;             // +0x70
    char padding_c0[0x51];
    uint8_t flag111;             // +0x111
    uint8_t flag112;             // +0x112
};
// FixPlayerRespawnAction
struct FixPlayerRespawnAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x912c50
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    char padding_a8[0xc];
    int32_t valueB4;             // +0xb4
    int32_t valueB8;             // +0xb8
    int32_t valueBc;             // +0xbc
    int32_t valueC0;             // +0xc0
    uint8_t flagC4;              // +0xc4
};
// StartPadVibrationAction
struct StartPadVibrationAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8fa7a0
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    void* slotA8;                // +0xa8
    int32_t valueB0;             // +0xb0
    int32_t valueB4;             // +0xb4
    int32_t valueB8;             // +0xb8
    int32_t valueBc;             // +0xbc
    uint8_t flagC0;              // +0xc0
};
// ActorAnimationAction
struct ActorAnimationAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8ec7c0
    char padding_0[0xa8];
    uint8_t flagA8;              // +0xa8
    uint8_t flagA9;              // +0xa9
    char padding_aa[0x1];
    uint8_t flagAb;              // +0xab
    uint8_t flagAc;              // +0xac
    uint8_t flagAd;              // +0xad
    uint8_t flagAe;              // +0xae
    char padding_af[0x1];
    int32_t valueB0;             // +0xb0
};
// SpawnInteractiveObjectAction
struct SpawnInteractiveObjectAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x90d8d0
    char padding_0[0xa0];
    onyx::ComponentHandle* handleA0; // +0xa0
    void* slotA8;                // +0xa8
    int32_t valueB0;             // +0xb0
    uint8_t flagB4;              // +0xb4
    char padding_b5[0x3];
    int32_t valueB8;             // +0xb8
    int32_t valueBc;             // +0xbc
    int32_t valueC0;             // +0xc0
    uint8_t flagC4;              // +0xc4
    uint8_t flagC5;              // +0xc5
};
// ControllableUiSpawner
struct ControllableUiSpawner : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xa05f50
    char padding_0[0x58];
    void* slot58;                // +0x58
    void* slot60;                // +0x60
    char padding_68[0xc];
    int32_t value74;             // +0x74
    int32_t value78;             // +0x78
    int32_t value7c;             // +0x7c
    int32_t value80;             // +0x80
    int32_t value84;             // +0x84
    int32_t value88;             // +0x88
    char padding_8c[0x4];
    uint8_t flag90;              // +0x90
};
// StartCameraShakeAction
struct StartCameraShakeAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8faea0
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    uint8_t flagA8;              // +0xa8
    char padding_a9[0x3];
    int32_t valueAc;             // +0xac
    int32_t valueB0;             // +0xb0
    int32_t valueB4;             // +0xb4
    int32_t valueB8;             // +0xb8
    int32_t valueBc;             // +0xbc
    int32_t valueC0;             // +0xc0
    int32_t valueC4;             // +0xc4
};
// ActorMoveFromBehindAction
struct ActorMoveFromBehindAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8e6970
    char padding_0[0xa8];
    uint8_t flagA8;              // +0xa8
    uint8_t flagA9;              // +0xa9
    char padding_aa[0x6];
    onyx::ComponentHandle* handleB0; // +0xb0
    int32_t valueB8;             // +0xb8
    int32_t valueBc;             // +0xbc
    int32_t valueC0;             // +0xc0
    int32_t valueC4;             // +0xc4
    int32_t valueC8;             // +0xc8
    uint8_t flagCc;              // +0xcc
};
// ControllableTriggerSpawner
struct ControllableTriggerSpawner : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xa08be0
    char padding_0[0x58];
    void* slot58;                // +0x58
    char padding_60[0xc];
    int32_t value6c;             // +0x6c
    int32_t value70;             // +0x70
    int32_t value74;             // +0x74
    int32_t value78;             // +0x78
    int32_t value7c;             // +0x7c
    int32_t value80;             // +0x80
    char padding_84[0x4];
    int32_t value88;             // +0x88
    int32_t value8c;             // +0x8c
    int32_t value90;             // +0x90
};

// GamePurchaseMenu
struct GamePurchaseMenu : FlashMenuBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x85be10
    char padding_0[0x2b0];
    void* slot2b0;               // +0x2b0
    void* slot2b8;               // +0x2b8
    void* slot2c0;               // +0x2c0
    void* slot2c8;               // +0x2c8
    void* slot2d0;               // +0x2d0
    char padding_2d8[0x8];
    int32_t value2e0;            // +0x2e0
};
// ExModeResultExtra
struct ExModeResultExtra : FlashMenuBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x86a6f0
    char padding_0[0x2b0];
    void* slot2b0;               // +0x2b0
    void* slot2b8;               // +0x2b8
    onyx::ComponentHandle* handle2c0; // +0x2c0
    onyx::ComponentHandle* handle2c8; // +0x2c8
    char padding_2d0[0x8];
    int32_t value2d8;            // +0x2d8
    int32_t value2dc;            // +0x2dc
};
// ExModeGameOver
struct ExModeGameOver : FlashMenuBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x86c750
    char padding_0[0x2b0];
    void* slot2b0;               // +0x2b0
    void* slot2b8;               // +0x2b8
    void* slot2c0;               // +0x2c0
    void* slot2c8;               // +0x2c8
    char padding_2d0[0x8];
    int32_t value2d8;            // +0x2d8
    int32_t value2dc;            // +0x2dc
    uint8_t flag2e0;             // +0x2e0
};
// LevelCamera
struct LevelCamera : PhaseBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x88ab80
    char padding_0[0x60];
    onyx::ComponentHandle* handle60; // +0x60
    onyx::ComponentHandle* handle68; // +0x68
    onyx::ComponentHandle* handle70; // +0x70
    onyx::ComponentHandle* handle78; // +0x78
    onyx::ComponentHandle* handle80; // +0x80
    onyx::ComponentHandle* handle88; // +0x88
    onyx::ComponentHandle* handle90; // +0x90
    onyx::ComponentHandle* handle98; // +0x98
    onyx::ComponentHandle* handleA0; // +0xa0
    void* slotA8;                // +0xa8
    char padding_b0[0xc];
    int32_t valueBc;             // +0xbc
};
// SetPopupBoxVisibilityAction
struct SetPopupBoxVisibilityAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x910c00
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    uint32_t idA8;               // +0xa8
    int32_t valueAc;             // +0xac
    uint8_t flagB0;              // +0xb0
    char padding_b1[0x7];
    void* slotB8;                // +0xb8
    void* slotC0;                // +0xc0
    onyx::ComponentHandle* handleC8; // +0xc8
    int32_t valueD0;             // +0xd0
    int32_t valueD4;             // +0xd4
    int32_t valueD8;             // +0xd8
};
// GunTurrets
struct GunTurrets : BreakableObjectBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xa135d0
    char padding_0[0x2b0];
    int32_t value2b0;            // +0x2b0
    int32_t value2b4;            // +0x2b4
    int32_t value2b8;            // +0x2b8
    int32_t value2bc;            // +0x2bc
    int32_t value2c0;            // +0x2c0
    int32_t value2c4;            // +0x2c4
    int32_t value2c8;            // +0x2c8
    int32_t value2cc;            // +0x2cc
    int32_t value2d0;            // +0x2d0
};
// SectionActorPresenceLogic
struct SectionActorPresenceLogic : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x7ae990
    char padding_0[0x50];
    void* slot50;                // +0x50
    onyx::ComponentHandle* handle58; // +0x58
    onyx::ComponentHandle* handle60; // +0x60
    onyx::ComponentHandle* handle68; // +0x68
    onyx::ComponentHandle* handle70; // +0x70
    onyx::ComponentHandle* handle78; // +0x78
    int32_t value80;             // +0x80
    uint8_t flag84;              // +0x84
    char padding_85[0x3];
    int32_t value88;             // +0x88
    uint8_t flag8c;              // +0x8c
    char padding_8d[0x3];
    int32_t value90;             // +0x90
    uint8_t flag94;              // +0x94
    uint8_t flag95;              // +0x95
    char padding_96[0x2];
    int32_t value98;             // +0x98
    uint8_t flag9c;              // +0x9c
    uint8_t flag9d;              // +0x9d
};

// SPTG::AnimatedAiActor (named apart from Pickup.cpp's stand-in), which the
// characters, projectiles, pickups and interactive objects derive from. Its
// block at +0x58 (five component handles and a reference-counted resource) has
// a serializer of its own, not matched; BaseCharacter's header names some of
// these fields (effect, partner and animation handles, the actor object, the
// services).
struct ActorHandleBlock {
    onyx::ComponentHandle* handles[5];
    void* resource;                   // +0x28
    void Serialize(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x946580
};
struct AnimatedAiActorView : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x945fe0
    char padding_0[0x58];
    ActorHandleBlock block58;    // +0x58
    void* slot88;                // +0x88
    void* slot90;                // +0x90
    int32_t value98;             // +0x98
    char padding_9c[0x4];
    int32_t valueA0;             // +0xa0
    int32_t valueA4;             // +0xa4
    int32_t valueA8;             // +0xa8
    int32_t valueAc;             // +0xac
    int32_t valueB0;             // +0xb0
    int32_t valueB4;             // +0xb4
    int32_t valueB8;             // +0xb8
    int32_t valueBc;             // +0xbc
    int32_t valueC0;             // +0xc0
    int32_t valueC4;             // +0xc4
    int32_t valueC8;             // +0xc8
    int32_t valueCc;             // +0xcc
    int32_t valueD0;             // +0xd0
    int32_t valueD4;             // +0xd4
    int32_t valueD8;             // +0xd8
    int32_t valueDc;             // +0xdc
    int32_t valueE0;             // +0xe0
    int32_t valueE4;             // +0xe4
    int32_t valueE8;             // +0xe8
    int32_t valueEc;             // +0xec
    int32_t valueF0;             // +0xf0
    int32_t valueF4;             // +0xf4
    int32_t valueF8;             // +0xf8
    int32_t valueFc;             // +0xfc
    uint8_t flag100;             // +0x100
    char padding_101[0x3];
    int32_t value104;            // +0x104
    int32_t value108;            // +0x108
    int32_t value10c;            // +0x10c
    int32_t value110;            // +0x110
    int32_t value114;            // +0x114
    int32_t value118;            // +0x118
    int32_t value11c;            // +0x11c
    int32_t value120;            // +0x120
    int32_t value124;            // +0x124
    int32_t value128;            // +0x128
    char padding_12c[0x54];
    int32_t value180;            // +0x180
};
// InteractiveObject
struct InteractiveObject : AnimatedAiActorView {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x9c4890
    char padding_184[0x64];
    void* slot1e8;               // +0x1e8
    CallbackList callbacks1f0;   // +0x1f0
    CallbackList callbacks208;   // +0x208
    CallbackList callbacks220;   // +0x220
    CallbackList callbacks238;   // +0x238
    char padding_250[0x30];
    Attack attack280;            // +0x280
    Attack attack2d8;            // +0x2d8
    Attack attack330;            // +0x330
    Attack attack388;            // +0x388
    int32_t value3e0;            // +0x3e0
    int32_t value3e4;            // +0x3e4
    int32_t value3e8;            // +0x3e8
    int32_t value3ec;            // +0x3ec
    int32_t value3f0;            // +0x3f0
    uint8_t flag3f4;             // +0x3f4
    uint8_t flag3f5;             // +0x3f5
    uint8_t flag3f6;             // +0x3f6
    char padding_3f7[0x1];
    int32_t value3f8;            // +0x3f8
    int32_t value3fc;            // +0x3fc
    int32_t value400;            // +0x400
    int32_t value404;            // +0x404
    int32_t value408;            // +0x408
    int32_t value40c;            // +0x40c
    int32_t value410;            // +0x410
    uint8_t flag414;             // +0x414
    char padding_415[0x3];
    int32_t value418;            // +0x418
    int32_t value41c;            // +0x41c
    int32_t value420;            // +0x420
    int32_t value424;            // +0x424
    int32_t value428;            // +0x428
    int32_t value42c;            // +0x42c
    int32_t value430;            // +0x430
    int32_t value434;            // +0x434
    uint8_t flag438;             // +0x438
    uint8_t flag439;             // +0x439
    uint8_t flag43a;             // +0x43a
    uint8_t flag43b;             // +0x43b
    uint8_t flag43c;             // +0x43c
};

// LeaderboardMenu
struct LeaderboardMenu : FlashMenuBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x84fe10
    char padding_0[0x2b0];
    void* slot2b0;               // +0x2b0
    void* slot2b8;               // +0x2b8
    void* slot2c0;               // +0x2c0
    onyx::ComponentHandle* handle2c8; // +0x2c8
    onyx::ComponentHandle* handle2d0; // +0x2d0
    char padding_2d8[0x18];
    CallbackList callbacks2f0;   // +0x2f0
    char padding_308[0x14];
    int32_t value31c;            // +0x31c
};
// HudObject
struct HudObject : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8ad400
    char padding_0[0x50];
    void* slot50;                // +0x50
    ReferenceList references58;  // +0x58
    ReferenceList references80;  // +0x80
    onyx::ComponentHandle* handleA8; // +0xa8
    onyx::ComponentHandle* handleB0; // +0xb0
    int32_t valueB8;             // +0xb8
};
// BaseBossAI
struct BaseBossAI : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0xa15710
    char padding_0[0x58];
    void* slot58;                // +0x58
    char padding_60[0x60];
    CallbackList callbacksC0;    // +0xc0
};
// ActionStep (named apart from another declaration)
struct ActionStepView : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x928230
    char padding_0[0xa0];
    ReferenceList referencesA0;  // +0xa0
    void* slotC8;                // +0xc8
    void* slotD0;                // +0xd0
    CallbackList callbacksD8;    // +0xd8
};
// NotificationFilterEvent
struct NotificationFilterEvent : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x933a80
    char padding_0[0x50];
    onyx::ComponentHandle* handle50; // +0x50
    char padding_58[0x18];
    CallbackList callbacks70;    // +0x70
    int32_t value88;             // +0x88
};
// WaitForEventCount
struct WaitForEventCount : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8f2470
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    CallbackList callbacksA8;    // +0xa8
    uint8_t flagC0;              // +0xc0
    char padding_c1[0x3];
    int32_t valueC4;             // +0xc4
    uint8_t flagC8;              // +0xc8
};
// StatisticsNotifier
struct StatisticsNotifier : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x79b950
    char padding_0[0x50];
    void* slot50;                // +0x50
    void* slot58;                // +0x58
    CallbackList callbacks60;    // +0x60
    int32_t value78;             // +0x78
    char padding_7c[0xc];
    int32_t value88;             // +0x88
    int32_t value8c;             // +0x8c
};
// ChaseModeAction
struct ChaseModeAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x921860
    char padding_0[0xa0];
    onyx::ComponentHandle* handleA0; // +0xa0
    void* slotA8;                // +0xa8
    CallbackList callbacksB0;    // +0xb0
    char padding_c8[0x8];
    int32_t valueD0;             // +0xd0
    char padding_d4[0x4];
    onyx::Vector<onyx::Vector3> pointsD8; // +0xd8
    char padding_f8[0x8];
    uint8_t flag100;             // +0x100
    uint8_t flag101;             // +0x101
};
// MechanismObject
struct MechanismObject : AnimatedAiActorView {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x9ba2b0
    char padding_184[0x64];
    onyx::ComponentHandle* handle1e8; // +0x1e8
    onyx::ComponentHandle* handle1f0; // +0x1f0
    onyx::ComponentHandle* handle1f8; // +0x1f8
    CallbackList callbacks200;   // +0x200
    CallbackList callbacks218;   // +0x218
    uint8_t flag230;             // +0x230
    char padding_231[0x3];
    int32_t value234;            // +0x234
};
// TimerAction
struct TimerAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8f6540
    char padding_0[0xa0];
    onyx::ComponentHandle* handleA0; // +0xa0
    CallbackList callbacksA8;    // +0xa8
    CallbackList callbacksC0;    // +0xc0
    uint8_t flagD8;              // +0xd8
    uint8_t flagD9;              // +0xd9
    char padding_da[0x2];
    int32_t valueDc;             // +0xdc
    int32_t valueE0;             // +0xe0
    uint8_t flagE4;              // +0xe4
    char padding_e5[0x3];
    int32_t valueE8;             // +0xe8
};
// ActionTrigger
struct ActionTrigger : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8ef9a0
    char padding_0[0x50];
    ReferenceList references50;  // +0x50
    onyx::ComponentHandle* handle78; // +0x78
    onyx::ComponentHandle* handle80; // +0x80
    void* slot88;                // +0x88
    void* slot90;                // +0x90
    void* slot98;                // +0x98
    char padding_a0[0x8];
    CallbackList callbacksA8;    // +0xa8
    CallbackList callbacksC0;    // +0xc0
    CallbackList callbacksD8;    // +0xd8
    char padding_f0[0x34];
    int32_t value124;            // +0x124
    uint8_t flag128;             // +0x128
    char padding_129[0x3];
    int32_t value12c;            // +0x12c
    uint8_t flag130;             // +0x130
};
// ActorTrapAction
struct ActorTrapAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8e2e30
    char padding_0[0xa8];
    uint8_t flagA8;              // +0xa8
    uint8_t flagA9;              // +0xa9
    char padding_aa[0x6];
    void* slotB0;                // +0xb0
    void* slotB8;                // +0xb8
    CallbackList callbacksC0;    // +0xc0
    int32_t valueD8;             // +0xd8
    int32_t valueDc;             // +0xdc
    int32_t valueE0;             // +0xe0
    int32_t valueE4;             // +0xe4
    int32_t valueE8;             // +0xe8
    int32_t valueEc;             // +0xec
    uint8_t flagF0;              // +0xf0
    uint8_t flagF1;              // +0xf1
    char padding_f2[0x2];
    int32_t valueF4;             // +0xf4
    int32_t valueF8;             // +0xf8
    char padding_fc[0x4];
    Attack attack100;            // +0x100
    int32_t value158;            // +0x158
};
// PublisherScreen
struct PublisherScreen : FlashMenuBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x824b50
    char padding_0[0x2b8];
    CallbackList callbacks2b8;   // +0x2b8
    CallbackList callbacks2d0;   // +0x2d0
};
// LoadingNotifier
struct LoadingNotifier : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8497b0
    char padding_0[0x50];
    void* slot50;                // +0x50
    CallbackList callbacks58;    // +0x58
    CallbackList callbacks70;    // +0x70
};
// GamePauseMonitor
struct GamePauseMonitor : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x934f90
    char padding_0[0x50];
    void* slot50;                // +0x50
    CallbackList callbacks58;    // +0x58
    CallbackList callbacks70;    // +0x70
};
// NetworkPhase
struct NetworkPhase : PhaseBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x7cb660
    char padding_0[0x60];
    void* slot60;                // +0x60
    void* slot68;                // +0x68
    void* slot70;                // +0x70
    CallbackList callbacks78;    // +0x78
    CallbackList callbacks90;    // +0x90
};
// CheckLevelUnlokcedAction
struct CheckLevelUnlokcedAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x909290
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    CallbackList callbacksA8;    // +0xa8
    CallbackList callbacksC0;    // +0xc0
    int32_t valueD8;             // +0xd8
};
// GamePurchaser
struct GamePurchaser : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x79a3f0
    char padding_0[0x50];
    void* slot50;                // +0x50
    void* slot58;                // +0x58
    void* slot60;                // +0x60
    void* slot68;                // +0x68
    void* slot70;                // +0x70
    void* slot78;                // +0x78
    CallbackList callbacks80;    // +0x80
    CallbackList callbacks98;    // +0x98
};
// CameraTrigger
struct CameraTrigger : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8870c0
    char padding_0[0x50];
    ReferenceList references50;  // +0x50
    ReferenceList references78;  // +0x78
    void* slotA0;                // +0xa0
    CallbackList callbacksA8;    // +0xa8
    CallbackList callbacksC0;    // +0xc0
    uint8_t flagD8;              // +0xd8
    char padding_d9[0x3];
    int32_t valueDc;             // +0xdc
    int32_t valueE0;             // +0xe0
    int32_t valueE4;             // +0xe4
    int32_t valueE8;             // +0xe8
    int32_t valueEc;             // +0xec
};
// Pickup (named apart from another declaration)
struct PickupView : AnimatedAiActorView {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x9a36f0
    char padding_184[0x9c];
    int32_t value220;            // +0x220
    int32_t value224;            // +0x224
    int32_t value228;            // +0x228
    int32_t value22c;            // +0x22c
    int32_t value230;            // +0x230
    int32_t value234;            // +0x234
    uint8_t flag238;             // +0x238
    uint8_t flag239;             // +0x239
    uint8_t flag23a;             // +0x23a
    char padding_23b[0x1];
    int32_t value23c;            // +0x23c
    CallbackList callbacks240;   // +0x240
    CallbackList callbacks258;   // +0x258
};
// ExtraModeScoringAction
struct ExtraModeScoringAction : OnyxActionComponent {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x915880
    char padding_0[0xa0];
    void* slotA0;                // +0xa0
    void* slotA8;                // +0xa8
    void* slotB0;                // +0xb0
    onyx::ComponentHandle* handleB8; // +0xb8
    onyx::ComponentHandle* handleC0; // +0xc0
    onyx::ComponentHandle* handleC8; // +0xc8
    onyx::ComponentHandle* handleD0; // +0xd0
    void* slotD8;                // +0xd8
    void* slotE0;                // +0xe0
    void* slotE8;                // +0xe8
    void* slotF0;                // +0xf0
    CallbackList callbacksF8;    // +0xf8
    CallbackList callbacks110;   // +0x110
    CallbackList callbacks128;   // +0x128
    int32_t value140;            // +0x140
    int32_t value144;            // +0x144
    int32_t value148;            // +0x148
    int32_t value14c;            // +0x14c
    int32_t value150;            // +0x150
    int32_t value154;            // +0x154
    int32_t value158;            // +0x158
    int32_t value15c;            // +0x15c
    int32_t value160;            // +0x160
    uint8_t flag164;             // +0x164
};
// LaserBeams
struct LaserBeams : AnimatedAiActorView {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x9bc5e0
    char padding_184[0x6c];
    CallbackList callbacks1f0;   // +0x1f0
    CallbackList callbacks208;   // +0x208
    CallbackList callbacks220;   // +0x220
    char padding_238[0x8];
    int32_t value240;            // +0x240
    uint8_t flag244;             // +0x244
    char padding_245[0x3];
    Attack attack248;            // +0x248
    int32_t value2a0;            // +0x2a0
};
// Projectile
struct Projectile : AnimatedAiActorView {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x958dd0
    char padding_184[0x6c];
    CallbackList callbacks1f0;   // +0x1f0
    CallbackList callbacks208;   // +0x208
    CallbackList callbacks220;   // +0x220
    CallbackList callbacks238;   // +0x238
    CallbackList callbacks250;   // +0x250
    CallbackList callbacks268;   // +0x268
    char padding_280[0x30];
    int32_t value2b0;            // +0x2b0
    int32_t value2b4;            // +0x2b4
    uint8_t flag2b8;             // +0x2b8
    uint8_t flag2b9;             // +0x2b9
    uint8_t flag2ba;             // +0x2ba
    uint8_t flag2bb;             // +0x2bb
    uint8_t flag2bc;             // +0x2bc
    uint8_t flag2bd;             // +0x2bd
    uint8_t flag2be;             // +0x2be
    uint8_t flag2bf;             // +0x2bf
    int32_t value2c0;            // +0x2c0
    int32_t value2c4;            // +0x2c4
    int32_t value2c8;            // +0x2c8
    int32_t value2cc;            // +0x2cc
    Attack attack2d0;            // +0x2d0
    int32_t value328;            // +0x328
    int32_t value32c;            // +0x32c
    uint8_t flag330;             // +0x330
    char padding_331[0x3];
    int32_t value334;            // +0x334
    int32_t value338;            // +0x338
    uint8_t flag33c;             // +0x33c
    uint8_t flag33d;             // +0x33d
    char padding_33e[0x2];
    int32_t value340;            // +0x340
    uint8_t flag344;             // +0x344
};
// WorldMapNavigator
struct WorldMapNavigator : PhaseBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x77b7b0
    char padding_0[0x60];
    onyx::ComponentHandle* handle60; // +0x60
    onyx::ComponentHandle* handle68; // +0x68
    onyx::ComponentHandle* handle70; // +0x70
    onyx::ComponentHandle* handle78; // +0x78
    void* slot80;                // +0x80
    void* slot88;                // +0x88
    void* slot90;                // +0x90
    void* slot98;                // +0x98
    void* slotA0;                // +0xa0
    void* slotA8;                // +0xa8
    void* slotB0;                // +0xb0
    CallbackList callbacksB8;    // +0xb8
    CallbackList callbacksD0;    // +0xd0
    CallbackList callbacksE8;    // +0xe8
    CallbackList callbacks100;   // +0x100
    CallbackList callbacks118;   // +0x118
    CallbackList callbacks130;   // +0x130
    CallbackList callbacks148;   // +0x148
    CallbackList callbacks160;   // +0x160
    CallbackList callbacks178;   // +0x178
    CallbackList callbacks190;   // +0x190
    CallbackList callbacks1a8;   // +0x1a8
    CallbackList callbacks1c0;   // +0x1c0
    CallbackList callbacks1d8;   // +0x1d8
    CallbackList callbacks1f0;   // +0x1f0
    CallbackList callbacks208;   // +0x208
    CallbackList callbacks220;   // +0x220
    CallbackList callbacks238;   // +0x238
    char padding_250[0x30];
    int32_t value280;            // +0x280
};
// Network::MatchmakingDiscoverer
struct MatchmakingDiscoverer : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x7df4d0
    char padding_0[0x50];
    void* slot50;                // +0x50
    void* slot58;                // +0x58
    void* slot60;                // +0x60
    void* slot68;                // +0x68
    void* slot70;                // +0x70
    void* slot78;                // +0x78
    void* slot80;                // +0x80
    void* slot88;                // +0x88
    CallbackList callbacks90;    // +0x90
    CallbackList callbacksA8;    // +0xa8
    CallbackList callbacksC0;    // +0xc0
    CallbackList callbacksD8;    // +0xd8
    CallbackList callbacksF0;    // +0xf0
    CallbackList callbacks108;   // +0x108
    CallbackList callbacks120;   // +0x120
    CallbackList callbacks138;   // +0x138
    CallbackList callbacks150;   // +0x150
    CallbackList callbacks168;   // +0x168
    char padding_180[0x28];
    CallbackList callbacks1a8;   // +0x1a8
    CallbackList callbacks1c0;   // +0x1c0
    CallbackList callbacks1d8;   // +0x1d8
    CallbackList callbacks1f0;   // +0x1f0
};

// EventTrigger
struct EventTrigger : OnyxComponentBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x8e0760
    char padding_0[0x4a];
    uint8_t flag4a;              // +0x4a
    char padding_4b[0x5];
    CallbackList callbacks50;    // +0x50
    CallbackList callbacks68;    // +0x68
};
// DialogBox
struct DialogBox : FlashMenuBase {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x86e760
    char padding_0[0x2b0];
    void* slot2b0;               // +0x2b0
    CallbackList callbacks2b8;   // +0x2b8
    CallbackList callbacks2d0;   // +0x2d0
    int32_t value2e8;            // +0x2e8
};

}  // namespace SPTG
