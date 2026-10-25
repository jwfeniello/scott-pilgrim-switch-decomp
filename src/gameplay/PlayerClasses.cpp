// Slot 4 of the playable characters: ControllablePlayer's serialization, then
// the class's own fields (see Archive.h and docs/GAME_CLASSES.md).
#include "PlayerClasses.h"

namespace SPTG {

// ControllableScott 0x999a80.
void ControllableScott::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1560);
}

// ControllableKim 0x99e500.
void ControllableKim::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1564);
    onyx::Transfer(archive, flag1568);
    value1560 = value1564;
    onyx::Transfer(archive, value156c);
    onyx::Transfer(archive, value1574);
    onyx::Transfer(archive, flag1578);
    value1570 = value1574;
}

// ControllableKnives 0x99c7a0.
void ControllableKnives::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1564);
    onyx::Transfer(archive, value1568);
    onyx::Transfer(archive, value156c);
    onyx::Transfer(archive, value1570);
    onyx::Transfer(archive, value1574);
    onyx::Transfer(archive, value1578);
}

// ControllableRamona 0x99a120.
void ControllableRamona::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1564);
    onyx::Transfer(archive, value1568);
    onyx::Transfer(archive, value1570);
    onyx::Transfer(archive, value1574);
    onyx::Transfer(archive, value157c);
    onyx::Transfer(archive, flag1580);
    value1578 = value157c;
    onyx::Transfer(archive, value1588);
    onyx::Transfer(archive, value158c);
}

// ControllableWallace 0x997930 and ControllableStephen 0x999060.
void ControllableWallace::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1560);
    onyx::Transfer(archive, value1564);
    onyx::Transfer(archive, value1568);
    attack1570.Serialize(archive);
    attack15c8.Serialize(archive);
    onyx::Transfer(archive, value1624);
    onyx::Transfer(archive, flag1628);
    value1620 = value1624;
    attack1630.Serialize(archive);
    attack1688.Serialize(archive);
    onyx::Transfer(archive, value16e4);
    onyx::Transfer(archive, flag16e8);
    value16e0 = value16e4;
}
void ControllableStephen::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1560);
    onyx::Transfer(archive, value1564);
    onyx::Transfer(archive, value1568);
    attack1570.Serialize(archive);
    attack15c8.Serialize(archive);
    onyx::Transfer(archive, value1624);
    onyx::Transfer(archive, flag1628);
    value1620 = value1624;
    attack1630.Serialize(archive);
    attack1688.Serialize(archive);
    onyx::Transfer(archive, value16e4);
    onyx::Transfer(archive, flag16e8);
    value16e0 = value16e4;
}

// ControllableNegaScott 0x99b350.
void ControllableNegaScott::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    for (int i = 0; i < 12; ++i) onyx::Transfer(archive, values1560[i]);
}

}  // namespace SPTG
