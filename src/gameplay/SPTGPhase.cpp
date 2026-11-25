// SPTG::SPTG_Phase: the base of the game's update phases (the press, animate, AI director, HUD director, collision
// and other phases). Slot names are provisional.
#include <stdint.h>

// The game state (0x1924bc0): +0xe0 while the game is paused, +0xe2 for the phases that run anyway (names provisional).
struct GameState {
    char padding_0[0xe0];
    uint8_t paused;                    // +0xe0
    uint8_t padding_e1;
    uint8_t runWhilePaused;            // +0xe2
};
extern "C" GameState* Game_State;     // 0x1924bc0

namespace SPTG {

struct SPTG_Phase {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8(); virtual void Slot9();
    virtual void Slot10(); virtual void Slot11(); virtual void Slot12(); virtual void Slot13(); virtual void Slot14();
    virtual bool Runs();               // slot 15
    char padding_8[0x30];
    uint32_t flags;                    // +0x38: bit 0 while enabled
};

// Slot 15 (0x76bbf0, shared by every phase): an enabled phase runs, while the game is paused only if the game state says
// phases run anyway.
bool SPTG_Phase::Runs() {
    if (!Game_State) return flags & 1;
    bool paused = Game_State->paused;
    bool enabled = flags & 1;
    bool result = !paused && enabled;
    if (paused && enabled) result = Game_State->runWhilePaused != 0;
    return result;
}

}  // namespace SPTG
