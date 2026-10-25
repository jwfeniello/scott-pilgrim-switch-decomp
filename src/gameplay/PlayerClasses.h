// The playable characters (RTTI: Onyx::Component::Compose<ControllablePlayer>
// for each). ControllablePlayer's own fields are not declared yet, so each
// class pads up to its first field from sizeof(ControllablePlayer). The fields
// so far are the ones slot 4 serializes; names are provisional.
#pragma once
#include "BaseCharacter.h"

namespace SPTG {

#define SPTG_PLAYER_PAD(offset) char padding_own[offset - sizeof(ControllablePlayer)];

struct ControllableScott : ControllablePlayer {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    SPTG_PLAYER_PAD(0x1560)
    int32_t value1560;           // +0x1560
};

struct ControllableKim : ControllablePlayer {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    SPTG_PLAYER_PAD(0x1560)
    int32_t value1560;           // +0x1560: set from +0x1564 when loading
    int32_t value1564;           // +0x1564
    uint8_t flag1568;            // +0x1568
    int32_t value156c;           // +0x156c
    int32_t value1570;           // +0x1570: set from +0x1574 when loading
    int32_t value1574;           // +0x1574
    uint8_t flag1578;            // +0x1578
};

struct ControllableKnives : ControllablePlayer {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    SPTG_PLAYER_PAD(0x1564)
    int32_t value1564;           // +0x1564
    int32_t value1568;           // +0x1568
    int32_t value156c;           // +0x156c
    int32_t value1570;           // +0x1570
    int32_t value1574;           // +0x1574
    int32_t value1578;           // +0x1578
};

struct ControllableRamona : ControllablePlayer {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    SPTG_PLAYER_PAD(0x1564)
    int32_t value1564;           // +0x1564
    int32_t value1568;           // +0x1568
    char padding_156c[0x4];
    int32_t value1570;           // +0x1570
    int32_t value1574;           // +0x1574
    int32_t value1578;           // +0x1578: set from +0x157c when loading
    int32_t value157c;           // +0x157c
    uint8_t flag1580;            // +0x1580
    char padding_1581[0x7];
    int32_t value1588;           // +0x1588
    int32_t value158c;           // +0x158c
};

// Wallace and Stephen share one layout: two attacks with a value and a flag
// after them, twice.
struct ControllableWallace : ControllablePlayer {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    SPTG_PLAYER_PAD(0x1560)
    int32_t value1560;           // +0x1560
    int32_t value1564;           // +0x1564
    int32_t value1568;           // +0x1568
    char padding_156c[0x4];
    Attack attack1570;           // +0x1570
    Attack attack15c8;           // +0x15c8
    int32_t value1620;           // +0x1620: set from +0x1624 when loading
    int32_t value1624;           // +0x1624
    uint8_t flag1628;            // +0x1628
    char padding_1629[0x7];
    Attack attack1630;           // +0x1630
    Attack attack1688;           // +0x1688
    int32_t value16e0;           // +0x16e0: set from +0x16e4 when loading
    int32_t value16e4;           // +0x16e4
    uint8_t flag16e8;            // +0x16e8
};
struct ControllableStephen : ControllablePlayer {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    SPTG_PLAYER_PAD(0x1560)
    int32_t value1560;           // +0x1560
    int32_t value1564;           // +0x1564
    int32_t value1568;           // +0x1568
    char padding_156c[0x4];
    Attack attack1570;           // +0x1570
    Attack attack15c8;           // +0x15c8
    int32_t value1620;           // +0x1620: set from +0x1624 when loading
    int32_t value1624;           // +0x1624
    uint8_t flag1628;            // +0x1628
    char padding_1629[0x7];
    Attack attack1630;           // +0x1630
    Attack attack1688;           // +0x1688
    int32_t value16e0;           // +0x16e0: set from +0x16e4 when loading
    int32_t value16e4;           // +0x16e4
    uint8_t flag16e8;            // +0x16e8
};

struct ControllableNegaScott : ControllablePlayer {
    void Slot4(onyx::Archive& archive, ComponentSlot::Source* source);
    SPTG_PLAYER_PAD(0x1560)
    int32_t values1560[12];      // +0x1560
};

#undef SPTG_PLAYER_PAD

static_assert(__builtin_offsetof(ControllableWallace, flag16e8) == 0x16e8, "ControllableWallace layout");
static_assert(__builtin_offsetof(ControllableRamona, value158c) == 0x158c, "ControllableRamona layout");

}  // namespace SPTG
