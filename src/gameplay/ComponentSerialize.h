// ABI views of components whose slot 4 (serialization, see Archive.h) is
// matched. Their other fields and functions are not recovered, so each view
// places the serialized fields at their offsets with padding between; the
// field names are provisional. The views derive from empty stand-ins for the
// bases their slot 4 chains to, named after the RTTI.
#pragma once
#include "Archive.h"

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

}  // namespace SPTG
