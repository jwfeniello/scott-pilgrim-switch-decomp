// Slot 4 of character classes whose serializers need the default stack
// layout: their temporaries share slots, unlike the class states' sources (see
// docs/GAME_CLASSES.md#serialization-slot-4). Names are provisional.
#include "BossClasses.h"
#include "EnemyClasses.h"

namespace SPTG {

// Boss 0xa181e0: Enemy's, the component slots and handles, the two attack
// slots, the settings from +0xca8, the points, a reference and the callbacks
// (read in place).
void Boss::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Enemy::Slot4(archive, source);
    AssignComponentSlot<7787216u, 840570882u>(&slotB88, source);
    AssignComponentSlot<7961152u, 1447053823u>(&slotB90, source);
    onyx::TransferHandle(handleB98, archive, source);
    AssignComponentSlot<8168064u, 1233810745u>(&slotBa0, source);
    onyx::TransferHandle(handleBa8, archive, source);
    AssignComponentSlot<8049456u, 1954509136u>(&slotBb0, source);
    attacks[0].Serialize(archive);
    attacks[1].Serialize(archive);
    onyx::Transfer(archive, valueCa8);
    onyx::Transfer(archive, valueCac);
    onyx::Transfer(archive, valueCb0);
    onyx::Transfer(archive, limitCb4);
    onyx::Transfer(archive, limitCb8);
    onyx::Transfer(archive, valueCbc);
    onyx::Transfer(archive, valueCc0);
    onyx::Transfer(archive, valueCc4);
    onyx::Transfer(archive, valueCc8);
    onyx::Transfer(archive, chanceCcc);
    onyx::Transfer(archive, flagCd0);
    onyx::Transfer(archive, flagCd1);
    // The reference goes through the archive the points return.
    onyx::TransferReference(onyx::TransferPoints(archive, pointsCd8), referenceD00);
    ReadCallbackList<10584544u, 996618444u>(archive, source, callbacksD30, this);
}

// Chau 0xa6a050: Boss's, two component slots, two reference lists, eight
// attack slots, the settings from +0x1198, two vectors and the callbacks.
void Chau::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Boss::Slot4(archive, source);
    AssignComponentSlot<7960368u, 184116580u>(&slotD48, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slotD50, source);
    referencesD58.Serialize(archive, source);
    referencesD80.Serialize(archive, source);
    attackDd8.Serialize(archive);
    attackE50.Serialize(archive);
    attackEc8.Serialize(archive);
    attackF40.Serialize(archive);
    attackFb8.Serialize(archive);
    attack1030.Serialize(archive);
    attack10a8.Serialize(archive);
    attack1120.Serialize(archive);
    onyx::Transfer(archive, value1198);
    onyx::Transfer(archive, value119c);
    onyx::Transfer(archive, value11a0);
    onyx::Transfer(archive, value11a4);
    onyx::Transfer(archive, value11a8);
    onyx::Transfer(archive, value11ac);
    onyx::Transfer(archive, value11b0);
    onyx::Transfer(archive, value11b4);
    onyx::Transfer(archive, value11b8);
    onyx::Transfer(archive, value11bc);
    onyx::Transfer(archive, phaseStep);
    onyx::Transfer(archive, phaseCount);
    onyx::TransferVector(archive, vector11c8);
    onyx::TransferVector(archive, vector11f0);
    TransferCallbackList<7914256u, 1961557269u>(archive, source, callbacks1218, this);
}

// SuperFightingRobotAI 0xa30ee0: Boss's, six handles, three callback lists (two
// read in place) and the settings from +0xe00.
void SuperFightingRobotAI::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Boss::Slot4(archive, source);
    onyx::TransferHandle(handleD48, archive, source);
    onyx::TransferHandle(handleD50, archive, source);
    onyx::TransferHandle(handleD58, archive, source);
    onyx::TransferHandle(handleD60, archive, source);
    onyx::TransferHandle(hand2, archive, source);
    onyx::TransferHandle(hand1, archive, source);
    onyx::TransferHandle(handleD78, archive, source);
    onyx::TransferHandle(handleD80, archive, source);
    TransferCallbackList<10683568u, 314602280u>(archive, source, callbacksD88, this);
    ReadCallbackList<10686176u, 851865891u>(archive, source, callbacksDa0, this);
    ReadCallbackList<10686177u, 191482576u>(archive, source, callbacksDb8, this);
    onyx::Transfer(archive, valueE00);
    onyx::Transfer(archive, valueE04);
    onyx::Transfer(archive, valueE08);
    onyx::Transfer(archive, valueE0c);
    onyx::Transfer(archive, valueE10);
    onyx::Transfer(archive, valueE14);
    onyx::Transfer(archive, valueE18);
    onyx::Transfer(archive, valueE1c);
    onyx::Transfer(archive, valueE20);
    onyx::Transfer(archive, valueE24);
    onyx::Transfer(archive, valueE28);
    onyx::Transfer(archive, valueE2c);
    onyx::Transfer(archive, valueE30);
    onyx::Transfer(archive, valueE34);
    onyx::Transfer(archive, valueE38);
    onyx::Transfer(archive, valueE3c);
    onyx::Transfer(archive, valueE40);
    onyx::Transfer(archive, valueE44);
    onyx::Transfer(archive, valueE48);
    onyx::Transfer(archive, valueE4c);
    onyx::Transfer(archive, valueE50);
    onyx::Transfer(archive, valueE54);
    onyx::Transfer(archive, valueE58);
    onyx::Transfer(archive, valueE5c);
    onyx::Transfer(archive, valueE60);
}

// EnemyAerial 0xa01f20: Enemy's, the callbacks (read in place), three attack
// slots and the settings.
void EnemyAerial::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    Enemy::Slot4(archive, source);
    ReadCallbackList<10493728u, 2113859555u>(archive, source, callbacksB90, this);
    onyx::TransferAs<uint32_t>(archive, valueBa8);
    onyx::Transfer(archive, valueBac);
    onyx::Transfer(archive, valueBb0);
    onyx::Transfer(archive, valueBb4);
    onyx::Transfer(archive, valueBb8);
    attackBc0.Serialize(archive);
    onyx::Transfer(archive, flagC38);
    attackC40.Serialize(archive);
    onyx::Transfer(archive, valueCb8);
    onyx::Transfer(archive, flagCbc);
    onyx::Transfer(archive, valueCc0);
    onyx::Transfer(archive, flagCc4);
    onyx::Transfer(archive, flagCc5);
    onyx::Transfer(archive, flagCc6);
    attackCc8.Serialize(archive);
    onyx::Transfer(archive, valueD40);
    onyx::Transfer(archive, valueD44);
    onyx::Transfer(archive, valueD48);
    onyx::Transfer(archive, valueD4c);
    onyx::TransferAs<uint32_t>(archive, valueD50);
    onyx::Transfer(archive, valueD54);
    onyx::Transfer(archive, valueD58);
    onyx::Transfer(archive, valueD5c);
    onyx::Transfer(archive, flagD60);
    onyx::TransferAs<uint32_t>(archive, valueD64);
    onyx::Transfer(archive, flagD68);
    onyx::TransferAs<uint32_t>(archive, valueD6c);
    onyx::Transfer(archive, valueD70);
    onyx::Transfer(archive, valueD74);
    onyx::Transfer(archive, valueD78);
}

}  // namespace SPTG
