// SPTG::NPC (vtable 0x1879a98, 162 slots): a character the player doesn't fight. ClassSerialize.cpp has a view of the
// same class that only serialization uses. Names are provisional.
#pragma once
#include "BaseCharacter.h"

namespace SPTG {

struct NPC : BaseCharacter {
    void Slot13() override;                                                  // slot 13
    void ReactTo(BaseCharacter* other, int reaction, void* data) override;   // slot 21
    bool OnHit(BaseCharacter* other, void* hit) override;                    // slot 38
    int State96(int event) override;                                         // slot 96
    int State106(int event) override;                                        // slot 106
    virtual State ReactionState1();                                          // slot 159
    virtual State ReactionState2();                                          // slot 160
    virtual State ReactionState3();                                          // slot 161

    char padding_77c[0xc];
    EventSlot event788;              // +0x788
    uint8_t reactsToReaction0;       // +0x7a0
    char padding_7a1[0x3];
    int32_t value7a4;                // +0x7a4
    uint8_t flag7a8;                 // +0x7a8
    char padding_7a9[0x3];
    int32_t value7ac;                // +0x7ac
    uint8_t reactsToReaction7;       // +0x7b0
};
static_assert(__builtin_offsetof(NPC, reactsToReaction7) == 0x7b0, "NPC reactsToReaction7");

}  // namespace SPTG
