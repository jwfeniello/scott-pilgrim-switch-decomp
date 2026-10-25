// Slot 4 of character classes whose serializers need the default stack
// layout: their temporaries share slots, unlike the class states' sources (see
// docs/GAME_CLASSES.md#serialization-slot-4). Names are provisional.
#include "BossClasses.h"
#include "EnemyClasses.h"

namespace SPTG {

// SPTG::NPC, a BaseCharacter, as far as its slot 4 shows. Names are
// provisional.
struct NPC : BaseCharacter {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);   // 0x9b7de0
    char padding_77c[0xc];
    EventSlot event788;          // +0x788
    uint8_t flag7a0;             // +0x7a0
    char padding_7a1[0x3];
    int32_t value7a4;            // +0x7a4
    uint8_t flag7a8;             // +0x7a8
    char padding_7a9[0x3];
    int32_t value7ac;            // +0x7ac
    uint8_t flag7b0;             // +0x7b0
    char padding_7b1[0x7];
    onyx::Array<int32_t> array7b8; // +0x7b8
    onyx::Array<int32_t> array7d8; // +0x7d8
};

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
    ReadEventSlot<10584544u, 996618444u>(archive, source, eventD30, this);
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
    TransferEventSlot<7914256u, 1961557269u>(archive, source, event1218, this);
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
    TransferEventSlot<10683568u, 314602280u>(archive, source, eventD88, this);
    ReadEventSlot<10686176u, 851865891u>(archive, source, eventDa0, this);
    ReadEventSlot<10686177u, 191482576u>(archive, source, eventDb8, this);
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
    ReadEventSlot<10493728u, 2113859555u>(archive, source, eventB90, this);
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

// ControllablePlayer 0x978660: BaseCharacter's, component slots from +0x788,
// four event slots (read in place), the settings, seven references from +0x1358
// and the settings after them.
void ControllablePlayer::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    BaseCharacter::Slot4(archive, source);
    AssignComponentSlot<7785648u, 484521086u>(&slot788, source);
    AssignComponentSlot<9042288u, 2024365970u>(&slot790, source);
    AssignComponentSlot<7999760u, 205210938u>(&slot798, source);
    AssignComponentSlot<7752160u, 1051727473u>(&slot7a0, source);
    AssignComponentSlot<7975184u, 521608489u>(&slot7a8, source);
    AssignComponentSlot<7750592u, 1558270838u>(&slot7b0, source);
    AssignComponentSlot<7960368u, 184116580u>(&slot7b8, source);
    AssignComponentSlot<7751376u, 2069148984u>(&slot7c0, source);
    AssignComponentSlot<7787216u, 840570882u>(&slot7c8, source);
    AssignComponentSlot<7784864u, 623346953u>(&slot7d0, source);
    onyx::TransferHandle(handle7d8, archive, source);
    onyx::TransferHandle(handle7e0, archive, source);
    ReadEventSlot<9930336u, 7735899u>(archive, source, event800, this);
    ReadEventSlot<9930337u, 1396383524u>(archive, source, event818, this);
    ReadEventSlot<9930338u, 516672096u>(archive, source, event830, this);
    ReadEventSlot<9930339u, 916073581u>(archive, source, event848, this);
    onyx::Transfer(archive, value860);
    onyx::Transfer(archive, value864);
    onyx::Transfer(archive, value868);
    onyx::Transfer(archive, value86c);
    onyx::Transfer(archive, value870);
    onyx::Transfer(archive, value874);
    onyx::Transfer(archive, value878);
    onyx::Transfer(archive, value87c);
    onyx::Transfer(archive, value880);
    onyx::Transfer(archive, value884);
    onyx::Transfer(archive, value888);
    onyx::Transfer(archive, value88c);
    onyx::Transfer(archive, value890);
    onyx::Transfer(archive, value894);
    onyx::Transfer(archive, value898);
    onyx::Transfer(archive, value89c);
    onyx::Transfer(archive, value8a0);
    onyx::Transfer(archive, value8a4);
    onyx::Transfer(archive, value8a8);
    onyx::Transfer(archive, value8ac);
    onyx::Transfer(archive, value8b0);
    onyx::Transfer(archive, value8b4);
    onyx::Transfer(archive, value8b8);
    onyx::Transfer(archive, value8bc);
    onyx::Transfer(archive, value8c0);
    onyx::Transfer(archive, value8c4);
    onyx::Transfer(archive, value8c8);
    onyx::Transfer(archive, value8cc);
    onyx::Transfer(archive, value8d0);
    onyx::Transfer(archive, value8d4);
    onyx::Transfer(archive, value8d8);
    attack8e0.Serialize(archive);
    attack938.Serialize(archive);
    attack990.Serialize(archive);
    attack9e8.Serialize(archive);
    attackA40.Serialize(archive);
    attackA98.Serialize(archive);
    attackAf0.Serialize(archive);
    attackB48.Serialize(archive);
    attackBa0.Serialize(archive);
    attackBf8.Serialize(archive);
    attackC50.Serialize(archive);
    attackCa8.Serialize(archive);
    attackD00.Serialize(archive);
    attackD58.Serialize(archive);
    attackDb0.Serialize(archive);
    attackE08.Serialize(archive);
    attackE60.Serialize(archive);
    attackEb8.Serialize(archive);
    attackF10.Serialize(archive);
    attackF68.Serialize(archive);
    attackFc0.Serialize(archive);
    attack1018.Serialize(archive);
    attack1070.Serialize(archive);
    attack10c8.Serialize(archive);
    attack1120.Serialize(archive);
    attack1178.Serialize(archive);
    onyx::Transfer(archive, flag11d0);
    onyx::TransferAs<uint32_t>(archive, value11d4);
    onyx::Transfer(archive, value11dc);
    onyx::Transfer(archive, flag11e0);
    value11d8 = value11dc;
    onyx::Transfer(archive, value11e4);
    onyx::Transfer(archive, value11e8);
    onyx::Transfer(archive, value11ec);
    onyx::Transfer(archive, flag11f0);
    onyx::Transfer(archive, value11f4);
    onyx::Transfer(archive, value11f8);
    onyx::Transfer(archive, value11fc);
    onyx::Transfer(archive, value1200);
    onyx::Transfer(archive, value1204);
    onyx::Transfer(archive, value1208);
    onyx::Transfer(archive, value120c);
    onyx::Transfer(archive, value1210);
    onyx::Transfer(archive, value1214);
    onyx::Transfer(archive, value1218);
    onyx::Transfer(archive, value121c);
    onyx::Transfer(archive, value1220);
    onyx::Transfer(archive, value1224);
    onyx::Transfer(archive, value1228);
    onyx::Transfer(archive, value122c);
    onyx::Transfer(archive, value1230);
    onyx::Transfer(archive, value1234);
    onyx::Transfer(archive, value1248);
    onyx::Transfer(archive, value1254);
    onyx::Transfer(archive, flag1258);
    value1250 = value1254;
    onyx::Transfer(archive, value1268);
    onyx::Transfer(archive, value126c);
    onyx::Transfer(archive, value1270);
    onyx::Transfer(archive, value1284);
    onyx::Transfer(archive, flag1288);
    value1280 = value1284;
    onyx::Transfer(archive, value128c);
    onyx::Transfer(archive, value1290);
    onyx::Transfer(archive, value1294);
    onyx::Transfer(archive, value1298);
    onyx::Transfer(archive, value129c);
    onyx::Transfer(archive, value12a0);
    onyx::Transfer(archive, value12a4);
    onyx::Transfer(archive, value12a8);
    onyx::Transfer(archive, value12ac);
    onyx::Transfer(archive, value12b0);
    onyx::Transfer(archive, value12b4);
    onyx::Transfer(archive, value12b8);
    onyx::Transfer(archive, value12c0);
    onyx::Transfer(archive, value12c4);
    onyx::Transfer(archive, value12c8);
    onyx::Transfer(archive, value12cc);
    onyx::Transfer(archive, value12d0);
    onyx::Transfer(archive, value12d4);
    onyx::Transfer(archive, value12dc);
    onyx::Transfer(archive, flag12e0);
    value12d8 = value12dc;
    onyx::Transfer(archive, value12e8);
    onyx::Transfer(archive, flag12ec);
    value12e4 = value12e8;
    onyx::Transfer(archive, value12f0);
    onyx::Transfer(archive, value12f4);
    onyx::Transfer(archive, value12f8);
    onyx::Transfer(archive, value12fc);
    onyx::Transfer(archive, value1304);
    onyx::Transfer(archive, flag1308);
    value1300 = value1304;
    onyx::TransferReference(archive, reference1358);
    onyx::TransferReference(archive, reference1360);
    onyx::TransferReference(archive, reference1368);
    onyx::TransferReference(archive, reference1370);
    onyx::TransferReference(archive, reference1378);
    onyx::TransferReference(archive, reference1380);
    onyx::TransferReference(archive, reference1388);
    onyx::Transfer(archive, value1390);
    onyx::Transfer(archive, value1394);
    onyx::Transfer(archive, value1398);
    onyx::Transfer(archive, value139c);
    onyx::Transfer(archive, value13a0);
    onyx::Transfer(archive, value13a4);
    onyx::Transfer(archive, value13a8);
    onyx::Transfer(archive, value13ac);
    onyx::Transfer(archive, value14cc);
    onyx::Transfer(archive, value14d0);
    onyx::Transfer(archive, value14d4);
    onyx::TransferAs<uint32_t>(archive, value14d8);
    onyx::Transfer(archive, value14dc);
    onyx::Transfer(archive, value14e0);
    onyx::Transfer(archive, value14e4);
    onyx::Transfer(archive, value14f0);
    onyx::Transfer(archive, value151c);
    onyx::Transfer(archive, flag1520);
    value1518 = value151c;
}

// NPC 0x9b7de0: BaseCharacter's, an event slot (read in place), the settings
// and two arrays.
void NPC::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    BaseCharacter::Slot4(archive, source);
    ReadEventSlot<10190304u, 848689310u>(archive, source, event788, this);
    onyx::Transfer(archive, flag7a0);
    onyx::Transfer(archive, value7a4);
    onyx::Transfer(archive, flag7a8);
    onyx::TransferAs<uint32_t>(archive, value7ac);
    onyx::Transfer(archive, flag7b0);
    onyx::TransferArray(archive, array7b8);
    onyx::TransferArray(archive, array7d8);
}

}  // namespace SPTG
