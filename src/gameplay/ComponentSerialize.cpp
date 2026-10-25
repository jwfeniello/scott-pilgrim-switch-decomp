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

// 0x85be10
void GamePurchaseMenu::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    FlashMenuBase::Slot4(archive, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot2b0, source);
    AssignComponentSlot<7750592u, 1558270838u>(&slot2b8, source);
    AssignComponentSlot<7752160u, 1051727473u>(&slot2c0, source);
    AssignComponentSlot<7961936u, 1836584131u>(&slot2c8, source);
    AssignComponentSlot<7961152u, 1447053823u>(&slot2d0, source);
    onyx::TransferAs<uint32_t>(archive, value2e0);
}

// 0x86a6f0
void ExModeResultExtra::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    FlashMenuBase::Slot4(archive, source);
    AssignComponentSlot<7960368u, 184116580u>(&slot2b0, source);
    AssignComponentSlot<7750592u, 1558270838u>(&slot2b8, source);
    onyx::TransferHandle(handle2c0, archive, source);
    onyx::TransferHandle(handle2c8, archive, source);
    onyx::Transfer(archive, value2d8);
    onyx::TransferAs<uint32_t>(archive, value2dc);
}

// 0x86c750
void ExModeGameOver::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    FlashMenuBase::Slot4(archive, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot2b0, source);
    AssignComponentSlot<7961152u, 1447053823u>(&slot2b8, source);
    AssignComponentSlot<7752160u, 1051727473u>(&slot2c0, source);
    AssignComponentSlot<7960368u, 184116580u>(&slot2c8, source);
    onyx::Transfer(archive, value2d8);
    onyx::Transfer(archive, value2dc);
    onyx::Transfer(archive, flag2e0);
}

// 0x88ab80
void LevelCamera::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    PhaseBase::Slot4(archive, source);
    onyx::TransferHandle(handle60, archive, source);
    onyx::TransferHandle(handle68, archive, source);
    onyx::TransferHandle(handle70, archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::TransferHandle(handle80, archive, source);
    onyx::TransferHandle(handle88, archive, source);
    onyx::TransferHandle(handle90, archive, source);
    onyx::TransferHandle(handle98, archive, source);
    onyx::TransferHandle(handleA0, archive, source);
    AssignComponentSlot<7960368u, 184116580u>(&slotA8, source);
    onyx::TransferAs<uint32_t>(archive, valueBc);
}

// 0x910c00
void SetPopupBoxVisibilityAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slotA0, source);
    onyx::TransferId(idA8, archive);
    onyx::TransferAs<uint32_t>(archive, valueAc);
    onyx::Transfer(archive, flagB0);
    AssignComponentSlot<7750592u, 1558270838u>(&slotB8, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotC0, source);
    onyx::TransferHandle(handleC8, archive, source);
    onyx::Transfer(archive, valueD0);
    onyx::Transfer(archive, valueD4);
    onyx::Transfer(archive, valueD8);
}

// 0xa135d0
void GunTurrets::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    BreakableObjectBase::Slot4(archive, source);
    onyx::Transfer(archive, value2b0);
    onyx::Transfer(archive, value2b4);
    onyx::TransferAs<uint32_t>(archive, value2b8);
    onyx::Transfer(archive, value2bc);
    onyx::Transfer(archive, value2c0);
    onyx::Transfer(archive, value2c4);
    onyx::Transfer(archive, value2c8);
    onyx::Transfer(archive, value2cc);
    onyx::Transfer(archive, value2d0);
}

// 0x7ae990
void SectionActorPresenceLogic::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<8049456u, 1954509136u>(&slot50, source);
    onyx::TransferHandle(handle58, archive, source);
    onyx::TransferHandle(handle60, archive, source);
    onyx::TransferHandle(handle68, archive, source);
    onyx::TransferHandle(handle70, archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::TransferAs<uint32_t>(archive, value80);
    onyx::Transfer(archive, flag84);
    onyx::TransferAs<uint32_t>(archive, value88);
    onyx::Transfer(archive, flag8c);
    onyx::TransferAs<uint32_t>(archive, value90);
    onyx::Transfer(archive, flag94);
    onyx::Transfer(archive, flag95);
    onyx::TransferAs<uint32_t>(archive, value98);
    onyx::Transfer(archive, flag9c);
    onyx::Transfer(archive, flag9d);
}

// 0x945fe0
void AnimatedAiActorView::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    block58.Serialize(archive, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slot88, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot90, source);
    onyx::Transfer(archive, value98);
    onyx::Transfer(archive, valueA0);
    onyx::Transfer(archive, valueA4);
    onyx::Transfer(archive, valueA8);
    onyx::Transfer(archive, valueAc);
    onyx::Transfer(archive, valueB0);
    onyx::Transfer(archive, valueB4);
    onyx::Transfer(archive, valueB8);
    onyx::Transfer(archive, valueBc);
    onyx::Transfer(archive, valueC0);
    onyx::Transfer(archive, valueC4);
    onyx::Transfer(archive, valueC8);
    onyx::Transfer(archive, valueCc);
    onyx::Transfer(archive, valueD0);
    onyx::Transfer(archive, valueD4);
    onyx::Transfer(archive, valueD8);
    onyx::Transfer(archive, valueDc);
    onyx::Transfer(archive, valueE0);
    onyx::Transfer(archive, valueE4);
    onyx::Transfer(archive, valueE8);
    onyx::Transfer(archive, valueEc);
    onyx::Transfer(archive, valueF0);
    onyx::Transfer(archive, valueF4);
    onyx::Transfer(archive, valueF8);
    onyx::Transfer(archive, valueFc);
    onyx::Transfer(archive, flag100);
    onyx::Transfer(archive, value104);
    onyx::Transfer(archive, value108);
    onyx::Transfer(archive, value10c);
    onyx::Transfer(archive, value110);
    onyx::Transfer(archive, value114);
    onyx::Transfer(archive, value118);
    onyx::Transfer(archive, value11c);
    onyx::Transfer(archive, value120);
    onyx::Transfer(archive, value124);
    onyx::Transfer(archive, value128);
    onyx::TransferAs<uint32_t>(archive, value180);
}

// 0x9c4890
void InteractiveObject::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    AnimatedAiActorView::Slot4(archive, source);
    AssignComponentSlot<8990432u, 1141032170u>(&slot1e8, source);
    TransferEventSlot<9814480u, 977138339u>(archive, source, event1f0, this);
    TransferEventSlot<9815136u, 525437237u>(archive, source, event208, this);
    TransferEventSlot<9815792u, 2145151923u>(archive, source, event220, this);
    TransferEventSlot<9816448u, 1223436034u>(archive, source, event238, this);
    attack280.Serialize(archive);
    attack2d8.Serialize(archive);
    attack330.Serialize(archive);
    attack388.Serialize(archive);
    onyx::Transfer(archive, value3e0);
    onyx::Transfer(archive, value3e4);
    onyx::Transfer(archive, value3e8);
    onyx::Transfer(archive, value3ec);
    onyx::Transfer(archive, value3f0);
    onyx::Transfer(archive, flag3f4);
    onyx::Transfer(archive, flag3f5);
    onyx::Transfer(archive, flag3f6);
    onyx::Transfer(archive, value3f8);
    onyx::Transfer(archive, value3fc);
    onyx::TransferAs<uint32_t>(archive, value400);
    onyx::Transfer(archive, value404);
    onyx::Transfer(archive, value408);
    onyx::Transfer(archive, value40c);
    onyx::Transfer(archive, value410);
    onyx::Transfer(archive, flag414);
    onyx::Transfer(archive, value418);
    onyx::Transfer(archive, value41c);
    onyx::Transfer(archive, value420);
    onyx::Transfer(archive, value424);
    onyx::Transfer(archive, value428);
    onyx::Transfer(archive, value42c);
    onyx::Transfer(archive, value430);
    onyx::TransferAs<uint32_t>(archive, value434);
    onyx::Transfer(archive, flag438);
    onyx::Transfer(archive, flag439);
    onyx::Transfer(archive, flag43a);
    onyx::Transfer(archive, flag43b);
    onyx::Transfer(archive, flag43c);
}

// 0x84fe10
void LeaderboardMenu::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    FlashMenuBase::Slot4(archive, source);
    AssignComponentSlot<7752160u, 1051727473u>(&slot2b0, source);
    AssignComponentSlot<7750592u, 1558270838u>(&slot2b8, source);
    AssignComponentSlot<7961152u, 1447053823u>(&slot2c0, source);
    onyx::TransferHandle(handle2c8, archive, source);
    onyx::TransferHandle(handle2d0, archive, source);
    TransferEventSlot<7914256u, 1961557269u>(archive, source, event2f0, this);
    onyx::Transfer(archive, value31c);
}

// 0x8ad400
void HudObject::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slot50, source);
    references58.Serialize(archive, source);
    references80.Serialize(archive, source);
    onyx::TransferHandle(handleA8, archive, source);
    onyx::TransferHandle(handleB0, archive, source);
    onyx::TransferAs<uint32_t>(archive, valueB8);
}

// 0xa15710
void BaseBossAI::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot58, source);
    ReadEventSlot<10573584u, 817469290u>(archive, source, eventC0, this);
}

// 0x928230
void ActionStepView::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    referencesA0.Serialize(archive, source);
    AssignComponentSlot<8049456u, 1954509136u>(&slotC8, source);
    AssignComponentSlot<7786432u, 569228434u>(&slotD0, source);
    ReadEventSlot<9601584u, 1610208407u>(archive, source, eventD8, this);
}

// 0x933a80
void NotificationFilterEvent::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    ReadEventSlot<9648768u, 1398044915u>(archive, source, event70, this);
    onyx::Transfer(archive, value88);
}

// 0x8f2470
void WaitForEventCount::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7786432u, 569228434u>(&slotA0, source);
    ReadEventSlot<9380976u, 961447673u>(archive, source, eventA8, this);
    onyx::Transfer(archive, flagC0);
    onyx::Transfer(archive, valueC4);
    onyx::Transfer(archive, flagC8);
}

// 0x79b950
void StatisticsNotifier::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot50, source);
    AssignComponentSlot<7975184u, 521608489u>(&slot58, source);
    ReadEventSlot<7977296u, 1041959824u>(archive, source, event60, this);
    onyx::TransferAs<uint32_t>(archive, value78);
    onyx::Transfer(archive, value88);
    onyx::Transfer(archive, value8c);
}

// 0x921860
void ChaseModeAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::TransferHandle(handleA0, archive, source);
    AssignComponentSlot<7786432u, 569228434u>(&slotA8, source);
    ReadEventSlot<9574496u, 1365801958u>(archive, source, eventB0, this);
    onyx::Transfer(archive, valueD0);
    onyx::TransferPoints(archive, pointsD8);
    onyx::Transfer(archive, flag100);
    onyx::Transfer(archive, flag101);
}

// 0x9ba2b0
void MechanismObject::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    AnimatedAiActorView::Slot4(archive, source);
    onyx::TransferHandle(handle1e8, archive, source);
    onyx::TransferHandle(handle1f0, archive, source);
    onyx::TransferHandle(handle1f8, archive, source);
    TransferEventSlot<10201728u, 1409658169u>(archive, source, event200, this);
    ReadEventSlot<10199728u, 605302477u>(archive, source, event218, this);
    onyx::Transfer(archive, flag230);
    onyx::TransferAs<uint32_t>(archive, value234);
}

// 0x8f6540
void TimerAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::TransferHandle(handleA0, archive, source);
    TransferEventSlot<7755584u, 497209192u>(archive, source, eventA8, this);
    ReadEventSlot<9397568u, 865905804u>(archive, source, eventC0, this);
    onyx::Transfer(archive, flagD8);
    onyx::Transfer(archive, flagD9);
    onyx::TransferAs<uint32_t>(archive, valueDc);
    onyx::Transfer(archive, valueE0);
    onyx::Transfer(archive, flagE4);
    onyx::Transfer(archive, valueE8);
}

// 0x8ef9a0
void ActionTrigger::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::TransferHandle(handle80, archive, source);
    AssignComponentSlot<7960368u, 184116580u>(&slot88, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot90, source);
    AssignComponentSlot<8049456u, 1954509136u>(&slot98, source);
    TransferEventSlot<7755584u, 497209192u>(archive, source, eventA8, this);
    ReadEventSlot<9370016u, 1268207738u>(archive, source, eventC0, this);
    TransferEventSlot<8972784u, 1392422097u>(archive, source, eventD8, this);
    onyx::TransferAs<uint32_t>(archive, value124);
    onyx::Transfer(archive, flag128);
    onyx::TransferAs<uint32_t>(archive, value12c);
    onyx::Transfer(archive, flag130);
}

// 0x8e2e30
void ActorTrapAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::Transfer(archive, flagA8);
    onyx::Transfer(archive, flagA9);
    AssignComponentSlot<8990432u, 1141032170u>(&slotB0, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotB8, source);
    ReadEventSlot<9317936u, 1559097766u>(archive, source, eventC0, this);
    onyx::TransferAs<uint32_t>(archive, valueD8);
    onyx::Transfer(archive, valueDc);
    onyx::Transfer(archive, valueE0);
    onyx::Transfer(archive, valueE4);
    onyx::Transfer(archive, valueE8);
    onyx::TransferAs<uint32_t>(archive, valueEc);
    onyx::Transfer(archive, flagF0);
    onyx::Transfer(archive, flagF1);
    onyx::TransferAs<uint32_t>(archive, valueF4);
    onyx::TransferAs<uint32_t>(archive, valueF8);
    attack100.Serialize(archive);
    onyx::Transfer(archive, value158);
}

// 0x824b50
void PublisherScreen::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    FlashMenuBase::Slot4(archive, source);
    ReadEventSlot<8538960u, 1415881008u>(archive, source, event2b8, this);
    ReadEventSlot<8538961u, 972712643u>(archive, source, event2d0, this);
}

// 0x8497b0
void LoadingNotifier::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slot50, source);
    ReadEventSlot<8689584u, 1556176369u>(archive, source, event58, this);
    ReadEventSlot<8689585u, 1028106914u>(archive, source, event70, this);
}

// 0x934f90
void GamePauseMonitor::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<7960368u, 184116580u>(&slot50, source);
    ReadEventSlot<9654160u, 1121389207u>(archive, source, event58, this);
    ReadEventSlot<9654161u, 1280632713u>(archive, source, event70, this);
}

// 0x7cb660
void NetworkPhase::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    PhaseBase::Slot4(archive, source);
    AssignComponentSlot<8168064u, 1233810745u>(&slot60, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slot68, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot70, source);
    ReadEventSlot<8173152u, 54615259u>(archive, source, event78, this);
    ReadEventSlot<8173153u, 1817378438u>(archive, source, event90, this);
}

// 0x909290
void CheckLevelUnlokcedAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7785648u, 484521086u>(&slotA0, source);
    ReadEventSlot<9474704u, 568581114u>(archive, source, eventA8, this);
    ReadEventSlot<9474705u, 1067635171u>(archive, source, eventC0, this);
    onyx::TransferAs<uint32_t>(archive, valueD8);
}

// 0x79a3f0
void GamePurchaser::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<7961936u, 1836584131u>(&slot50, source);
    AssignComponentSlot<7784864u, 623346953u>(&slot58, source);
    AssignComponentSlot<7960368u, 184116580u>(&slot60, source);
    AssignComponentSlot<7752160u, 1051727473u>(&slot68, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slot70, source);
    AssignComponentSlot<7961152u, 1447053823u>(&slot78, source);
    ReadEventSlot<7971824u, 1751228548u>(archive, source, event80, this);
    ReadEventSlot<7971825u, 1826253220u>(archive, source, event98, this);
}

// 0x8870c0
void CameraTrigger::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    references78.Serialize(archive, source);
    AssignComponentSlot<8049456u, 1954509136u>(&slotA0, source);
    ReadEventSlot<8941760u, 384712501u>(archive, source, eventA8, this);
    ReadEventSlot<8941761u, 136412464u>(archive, source, eventC0, this);
    onyx::Transfer(archive, flagD8);
    onyx::TransferAs<uint32_t>(archive, valueDc);
    onyx::TransferAs<uint32_t>(archive, valueE0);
    onyx::Transfer(archive, valueE4);
    onyx::Transfer(archive, valueE8);
    onyx::Transfer(archive, valueEc);
}

// 0x9a36f0
void PickupView::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    AnimatedAiActorView::Slot4(archive, source);
    onyx::TransferAs<uint32_t>(archive, value220);
    onyx::Transfer(archive, value224);
    onyx::Transfer(archive, value228);
    onyx::Transfer(archive, value22c);
    onyx::Transfer(archive, value230);
    onyx::Transfer(archive, value234);
    onyx::Transfer(archive, flag238);
    onyx::Transfer(archive, flag239);
    onyx::Transfer(archive, flag23a);
    onyx::TransferAs<uint32_t>(archive, value23c);
    ReadEventSlot<10106608u, 1707325712u>(archive, source, event240, this);
    ReadEventSlot<10106609u, 1407128491u>(archive, source, event258, this);
}

// 0x915880
void ExtraModeScoringAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    AssignComponentSlot<7784864u, 623346953u>(&slotA0, source);
    AssignComponentSlot<7961152u, 1447053823u>(&slotA8, source);
    AssignComponentSlot<7752160u, 1051727473u>(&slotB0, source);
    onyx::TransferHandle(handleB8, archive, source);
    onyx::TransferHandle(handleC0, archive, source);
    onyx::TransferHandle(handleC8, archive, source);
    onyx::TransferHandle(handleD0, archive, source);
    AssignComponentSlot<7998976u, 1330418336u>(&slotD8, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slotE0, source);
    AssignComponentSlot<7786432u, 569228434u>(&slotE8, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotF0, source);
    ReadEventSlot<9525376u, 525022405u>(archive, source, eventF8, this);
    ReadEventSlot<9525377u, 759912897u>(archive, source, event110, this);
    TransferEventSlot<7910320u, 1219292172u>(archive, source, event128, this);
    onyx::TransferAs<uint32_t>(archive, value140);
    onyx::Transfer(archive, value144);
    onyx::Transfer(archive, value148);
    onyx::Transfer(archive, value14c);
    onyx::Transfer(archive, value150);
    onyx::Transfer(archive, value154);
    onyx::Transfer(archive, value158);
    onyx::Transfer(archive, value15c);
    onyx::Transfer(archive, value160);
    onyx::Transfer(archive, flag164);
}

// 0x9bc5e0
void LaserBeams::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    AnimatedAiActorView::Slot4(archive, source);
    ReadEventSlot<10208736u, 865841734u>(archive, source, event1f0, this);
    ReadEventSlot<10208737u, 1163560383u>(archive, source, event208, this);
    ReadEventSlot<10208738u, 1512849600u>(archive, source, event220, this);
    onyx::Transfer(archive, value240);
    onyx::Transfer(archive, flag244);
    attack248.Serialize(archive);
    onyx::TransferAs<uint32_t>(archive, value2a0);
}

// 0x958dd0
void Projectile::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    AnimatedAiActorView::Slot4(archive, source);
    TransferEventSlot<9814480u, 977138339u>(archive, source, event1f0, this);
    TransferEventSlot<9815136u, 525437237u>(archive, source, event208, this);
    TransferEventSlot<9815792u, 2145151923u>(archive, source, event220, this);
    TransferEventSlot<9816448u, 1223436034u>(archive, source, event238, this);
    ReadEventSlot<9801168u, 1212750988u>(archive, source, event250, this);
    ReadEventSlot<9801169u, 362302269u>(archive, source, event268, this);
    onyx::Transfer(archive, value2b0);
    onyx::Transfer(archive, value2b4);
    onyx::Transfer(archive, flag2b8);
    onyx::Transfer(archive, flag2b9);
    onyx::Transfer(archive, flag2ba);
    onyx::Transfer(archive, flag2bb);
    onyx::Transfer(archive, flag2bc);
    onyx::Transfer(archive, flag2bd);
    onyx::Transfer(archive, flag2be);
    onyx::Transfer(archive, flag2bf);
    onyx::TransferAs<uint32_t>(archive, value2c0);
    onyx::Transfer(archive, value2c4);
    onyx::Transfer(archive, value2c8);
    onyx::Transfer(archive, value2cc);
    attack2d0.Serialize(archive);
    onyx::TransferAs<uint32_t>(archive, value328);
    onyx::TransferAs<uint32_t>(archive, value32c);
    onyx::Transfer(archive, flag330);
    onyx::Transfer(archive, value334);
    onyx::Transfer(archive, value338);
    onyx::Transfer(archive, flag33c);
    onyx::Transfer(archive, flag33d);
    onyx::TransferAs<uint32_t>(archive, value340);
    onyx::Transfer(archive, flag344);
}

// 0x77b7b0
void WorldMapNavigator::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    PhaseBase::Slot4(archive, source);
    onyx::TransferHandle(handle60, archive, source);
    onyx::TransferHandle(handle68, archive, source);
    onyx::TransferHandle(handle70, archive, source);
    onyx::TransferHandle(handle78, archive, source);
    AssignComponentSlot<7752160u, 1051727473u>(&slot80, source);
    AssignComponentSlot<7785648u, 484521086u>(&slot88, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slot90, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot98, source);
    AssignComponentSlot<7787216u, 840570882u>(&slotA0, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotA8, source);
    AssignComponentSlot<7784864u, 623346953u>(&slotB0, source);
    TransferEventSlot<7755584u, 497209192u>(archive, source, eventB8, this);
    TransferEventSlot<7756240u, 979710136u>(archive, source, eventD0, this);
    TransferEventSlot<7910320u, 1219292172u>(archive, source, eventE8, this);
    ReadEventSlot<7845808u, 1299720492u>(archive, source, event100, this);
    TransferEventSlot<7910976u, 1219292173u>(archive, source, event118, this);
    ReadEventSlot<7845809u, 1416370927u>(archive, source, event130, this);
    ReadEventSlot<7845810u, 451892332u>(archive, source, event148, this);
    TransferEventSlot<7911632u, 1611789091u>(archive, source, event160, this);
    TransferEventSlot<7912288u, 1611789096u>(archive, source, event178, this);
    TransferEventSlot<7912944u, 747518037u>(archive, source, event190, this);
    TransferEventSlot<7913600u, 708121210u>(archive, source, event1a8, this);
    TransferEventSlot<7914256u, 1961557269u>(archive, source, event1c0, this);
    TransferEventSlot<7914912u, 1088585585u>(archive, source, event1d8, this);
    TransferEventSlot<7914256u, 1961557269u>(archive, source, event1f0, this);
    TransferEventSlot<7914912u, 1088585585u>(archive, source, event208, this);
    TransferEventSlot<7914256u, 1961557269u>(archive, source, event220, this);
    TransferEventSlot<7914912u, 1088585585u>(archive, source, event238, this);
    onyx::Transfer(archive, value280);
}

// 0x7df4d0
void MatchmakingDiscoverer::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<7998976u, 1330418336u>(&slot50, source);
    AssignComponentSlot<7786432u, 569228434u>(&slot58, source);
    AssignComponentSlot<7784864u, 623346953u>(&slot60, source);
    AssignComponentSlot<7750592u, 1558270838u>(&slot68, source);
    AssignComponentSlot<7961152u, 1447053823u>(&slot70, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slot78, source);
    AssignComponentSlot<7752160u, 1051727473u>(&slot80, source);
    AssignComponentSlot<7961936u, 1836584131u>(&slot88, source);
    ReadEventSlot<8254672u, 683257529u>(archive, source, event90, this);
    ReadEventSlot<8254673u, 1191414401u>(archive, source, eventA8, this);
    ReadEventSlot<8254674u, 1852788095u>(archive, source, eventC0, this);
    ReadEventSlot<8254675u, 1050573974u>(archive, source, eventD8, this);
    ReadEventSlot<8254676u, 1179039918u>(archive, source, eventF0, this);
    TransferEventSlot<8258576u, 1637873838u>(archive, source, event108, this);
    ReadEventSlot<8254677u, 354979524u>(archive, source, event120, this);
    TransferEventSlot<7913600u, 708121210u>(archive, source, event138, this);
    TransferEventSlot<8259232u, 382012037u>(archive, source, event150, this);
    TransferEventSlot<8259888u, 2123455150u>(archive, source, event168, this);
    TransferEventSlot<7912944u, 747518037u>(archive, source, event1a8, this);
    TransferEventSlot<8260544u, 1407320313u>(archive, source, event1c0, this);
    TransferEventSlot<8261200u, 812874154u>(archive, source, event1d8, this);
    TransferEventSlot<8261856u, 1611788584u>(archive, source, event1f0, this);
}

// 0x8e0760
void EventTrigger::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    onyx::Transfer(archive, flag4a);
    ReadEventSlot<9308000u, 796465125u>(archive, source, event50, this);
    ReadEventSlot<9308001u, 796465032u>(archive, source, event68, this);
}

// 0x86e760
void DialogBox::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    FlashMenuBase::Slot4(archive, source);
    AssignComponentSlot<7750592u, 1558270838u>(&slot2b0, source);
    ReadEventSlot<8841056u, 3135025122u>(archive, source, event2b8, this);
    ReadEventSlot<8841057u, 3135025121u>(archive, source, event2d0, this);
    onyx::Transfer(archive, value2e8);
}

// 0x936320
void AudioListPlayer::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::Transfer(archive, value58);
    onyx::TransferVector(archive, vector60);
}

// 0x8f0a20
void MoveIconInWorldMapAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::TransferHandle(handleA0, archive, source);
    onyx::TransferHandle(handleA8, archive, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotB0, source);
    onyx::TransferAs<uint32_t>(archive, valueB8);
    onyx::Transfer(archive, valueBc);
    archive << stringC0 << stringD0;
    onyx::Transfer(archive, flagE0);
}

// 0x8ceb90
void AnimationInfoHolderBank::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    onyx::TransferArray(archive, array60);
}

// 0x8e98a0
void ActorEdgeNavigationAction::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxActionComponent::Slot4(archive, source);
    onyx::Transfer(archive, flagA8);
    onyx::Transfer(archive, flagA9);
    onyx::TransferHandle(handleB0, archive, source);
    onyx::TransferArray(archive, arrayB8);
}

// 0x95d090
void PlayerInfo::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    onyx::TransferHandle(handle50, archive, source);
    onyx::TransferHandle(handle58, archive, source);
    onyx::TransferArray(archive, array70);
    onyx::Transfer(archive, value90);
    onyx::Transfer(archive, flag94);
}

// 0x7655b0
void WorldMapWaypoint::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    AssignComponentSlot<7750592u, 1558270838u>(&slot50, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slot58, source);
    onyx::TransferHandle(handle60, archive, source);
    AssignComponentSlot<7752160u, 1051727473u>(&slot68, source);
    onyx::TransferHandle(handle70, archive, source);
    onyx::TransferHandle(handle78, archive, source);
    onyx::TransferHandle(handle80, archive, source);
    onyx::TransferHandle(handle88, archive, source);
    onyx::TransferHandle(handle90, archive, source);
    onyx::TransferHandle(handle98, archive, source);
    TransferEventSlot<7755584u, 497209192u>(archive, source, eventA0, this);
    TransferEventSlot<7756240u, 979710136u>(archive, source, eventB8, this);
    onyx::TransferAs<uint32_t>(archive, valueD0);
    onyx::Transfer(archive, valueD4);
    archive << stringD8;
}

// 0x892550
void ItemShop::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    OnyxComponentBase::Slot4(archive, source);
    references50.Serialize(archive, source);
    references78.Serialize(archive, source);
    AssignComponentSlot<8990432u, 1141032170u>(&slotA0, source);
    AssignComponentSlot<8991216u, 58874147u>(&slotA8, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slotB0, source);
    AssignComponentSlot<7786432u, 569228434u>(&slotB8, source);
    AssignComponentSlot<7788000u, 1742971629u>(&slotC0, source);
    AssignComponentSlot<7999760u, 205210938u>(&slotC8, source);
    AssignComponentSlot<7960368u, 184116580u>(&slotD0, source);
    onyx::TransferVector(archive, vectorD8);
    onyx::TransferVector(archive, vector100);
    onyx::Transfer(archive, value128);
    onyx::Transfer(archive, value12c);
    onyx::Transfer(archive, value130);
    onyx::Transfer(archive, value134);
    onyx::Transfer(archive, value138);
    onyx::Transfer(archive, value13c);
    onyx::Transfer(archive, value140);
    onyx::Transfer(archive, value144);
    onyx::Transfer(archive, value148);
    onyx::Transfer(archive, value14c);
    onyx::Transfer(archive, value150);
    onyx::Transfer(archive, value154);
    onyx::Transfer(archive, value158);
    onyx::TransferAs<uint32_t>(archive, value15c);
}

}  // namespace SPTG
