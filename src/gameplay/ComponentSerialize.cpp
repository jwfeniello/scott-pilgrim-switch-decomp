// Slot 4 of components outside the character classes (see
// ComponentSerialize.h and docs/GAME_CLASSES.md).
#include "ComponentSerialize.h"

namespace SPTG {

// 0x906ea0
void SetGameModeAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotA0, source);
    onyx::TransferAs<uint32_t>(archive, valueA8);
}

// 0x92c5c0
void DLCSentry::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<8491792u, 368592075u>(&slot50, source);
    onyx::TransferAs<uint32_t>(archive, value58);
}

// 0x8f1370
void WorldClearAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7784864u, 623346953u>(&slotA0, source);
    AssignComponentSlot<7786432u, 569228434u>(&slotA8, source);
    onyx::TransferAs<uint32_t>(archive, valueB0);
}

// 0x90a730
void SetLayerVisibilityAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotA0, source);
    onyx::TransferId(idA8, archive);
    onyx::TransferAs<uint32_t>(archive, valueAc);
}

// 0x8f3ce0
void WaitForAllPickupsCollected::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::TransferHandle(handleA0, archive, source);
    onyx::TransferAs<uint32_t>(archive, valueA8);
    onyx::Transfer(archive, flagAc);
}

// 0x7ae820
void SectionZOffsetAdjust::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    onyx::Transfer(archive, value4c);
    onyx::Transfer(archive, value50);
    onyx::TransferAs<uint32_t>(archive, value54);
}

// 0x8e52b0
void ActorPlayEmoteAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::Transfer(archive, flagA8);
    onyx::Transfer(archive, flagA9);
    onyx::TransferAs<uint32_t>(archive, valueAc);
}

// 0x912a10
void SetFlashMenuVisibilityAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slotA0, source);
    onyx::TransferId(idA8, archive);
    onyx::TransferAs<uint32_t>(archive, valueAc);
    onyx::Transfer(archive, flagB0);
}

// 0x7ae610
void PlayfieldCollisionView::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferAs<uint32_t>(archive, value64);
    onyx::Transfer(archive, flag68);
    list70.Serialize(archive);
}

// 0x8beab0
void SPTG_MaterialModifier::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    {
        uint32_t value = value58;
        onyx::Transfer(archive, value);
        value58 = value;
    }
    {
        uint32_t value = value60;
        onyx::Transfer(archive, value);
        value60 = value;
    }
}

// 0x8f4aa0
void UnblockCameraAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<8990432u, 1141032170u>(&slotA0, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotA8, source);
    onyx::Transfer(archive, valueB0);
    onyx::Transfer(archive, flagB4);
    onyx::TransferAs<uint32_t>(archive, valueB8);
}

// 0x90edb0
void SetHudEnableAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<8990432u, 1141032170u>(&slotA0, source);
    onyx::TransferAs<uint32_t>(archive, valueAc);
    onyx::Transfer(archive, flagB0);
    onyx::Transfer(archive, flagB1);
    onyx::Transfer(archive, flagB2);
}

// 0x90b140
void VisitItemShopAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::Transfer(archive, flagA8);
    onyx::Transfer(archive, flagA9);
    onyx::TransferHandle(handleB0, archive, source);
    onyx::Transfer(archive, flagB8);
    onyx::TransferAs<uint32_t>(archive, valueBc);
}

// 0x8f3590
void WaitForButtonPress::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::Transfer(archive, flagA8);
    onyx::Transfer(archive, flagA9);
    onyx::TransferAs<uint32_t>(archive, valueAc);
    onyx::Transfer(archive, flagB0);
    onyx::Transfer(archive, flagB1);
}

// 0x7b9170
void PlayfieldActor::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferAs<uint32_t>(archive, value64);
    onyx::Transfer(archive, flag68);
    list70.Serialize(archive);
    onyx::Transfer(archive, flag111);
    onyx::Transfer(archive, flag112);
}

// 0x912c50
void FixPlayerRespawnAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7786432u, 569228434u>(&slotA0, source);
    onyx::TransferAs<uint32_t>(archive, valueB4);
    onyx::Transfer(archive, valueB8);
    onyx::Transfer(archive, valueBc);
    onyx::Transfer(archive, valueC0);
    onyx::Transfer(archive, flagC4);
}

// 0x8fa7a0
void StartPadVibrationAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7787216u, 840570882u>(&slotA0, source);
    AssignComponentSlot<7786432u, 569228434u>(&slotA8, source);
    onyx::Transfer(archive, valueB0);
    onyx::Transfer(archive, valueB4);
    onyx::Transfer(archive, valueB8);
    onyx::TransferAs<uint32_t>(archive, valueBc);
    onyx::Transfer(archive, flagC0);
}

// 0x8ec7c0
void ActorAnimationAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::Transfer(archive, flagA8);
    onyx::Transfer(archive, flagA9);
    onyx::Transfer(archive, flagAb);
    onyx::Transfer(archive, flagAc);
    onyx::Transfer(archive, flagAd);
    onyx::Transfer(archive, flagAe);
    onyx::TransferAs<uint32_t>(archive, valueB0);
}

// 0x90d8d0
void SpawnInteractiveObjectAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::TransferHandle(handleA0, archive, source);
    AssignComponentSlot<7786432u, 569228434u>(&slotA8, source);
    onyx::TransferAs<uint32_t>(archive, valueB0);
    onyx::Transfer(archive, flagB4);
    onyx::Transfer(archive, valueB8);
    onyx::Transfer(archive, valueBc);
    onyx::Transfer(archive, valueC0);
    onyx::Transfer(archive, flagC4);
    onyx::Transfer(archive, flagC5);
}

// 0xa05f50
void ControllableUiSpawner::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<7787216u, 840570882u>(&slot58, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot60, source);
    onyx::TransferAs<uint32_t>(archive, value74);
    onyx::Transfer(archive, value78);
    onyx::Transfer(archive, value7c);
    onyx::Transfer(archive, value80);
    onyx::TransferAs<uint32_t>(archive, value84);
    onyx::Transfer(archive, value88);
    onyx::Transfer(archive, flag90);
}

// 0x8faea0
void StartCameraShakeAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotA0, source);
    onyx::Transfer(archive, flagA8);
    onyx::Transfer(archive, valueAc);
    onyx::Transfer(archive, valueB0);
    onyx::Transfer(archive, valueB4);
    onyx::Transfer(archive, valueB8);
    onyx::Transfer(archive, valueBc);
    onyx::Transfer(archive, valueC0);
    onyx::TransferAs<uint32_t>(archive, valueC4);
}

// 0x8e6970
void ActorMoveFromBehindAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::Transfer(archive, flagA8);
    onyx::Transfer(archive, flagA9);
    onyx::TransferHandle(handleB0, archive, source);
    onyx::Transfer(archive, valueB8);
    onyx::Transfer(archive, valueBc);
    onyx::Transfer(archive, valueC0);
    onyx::Transfer(archive, valueC4);
    onyx::TransferAs<uint32_t>(archive, valueC8);
    onyx::Transfer(archive, flagCc);
}

// 0xa08be0
void ControllableTriggerSpawner::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot58, source);
    onyx::TransferAs<uint32_t>(archive, value6c);
    onyx::Transfer(archive, value70);
    onyx::Transfer(archive, value74);
    onyx::Transfer(archive, value78);
    onyx::TransferAs<uint32_t>(archive, value7c);
    onyx::Transfer(archive, value80);
    onyx::Transfer(archive, value88);
    onyx::Transfer(archive, value8c);
    onyx::Transfer(archive, value90);
}

}  // namespace SPTG
