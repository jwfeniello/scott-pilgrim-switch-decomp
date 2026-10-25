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

}  // namespace SPTG
