// The menu screens' own functions (SPTG::FlashMenu and the screens built on it, FlashMenu.h).
#include <stddef.h>
#include "FlashMenu.h"

// The allocator context (0x1935058); plain objects come from the allocator in its slot at +0x558.
extern unsigned char* AllocatorContext;
inline void* operator new(size_t, void* address) noexcept { return address; }

namespace SPTG {

// What the message boxes leave behind: a flag and a 0x50-byte block. Names unknown.
extern "C" uint8_t Global_1924bc9;
struct MessageBoxBlock { uint64_t data[10]; };
extern "C" MessageBoxBlock Global_1924cc0;

// Not yet matched (not credited): the original materializes the zero vector after the flag's store, ours before it.
// The game state at 0x1924bc0 as the menus read it (BaseCharacter.h has the gameplay view): online (+0xe0), and
// while online, +0xe2 and the shared clock at +0x128.
struct GameStateView {
    char padding_0[0xe0];
    uint8_t online;              // +0xe0
    char padding_e1[0x1];
    uint8_t flagE2;              // +0xe2
    char padding_e3[0x45];
    int64_t clock;               // +0x128
};
extern "C" GameStateView* Game_State;   // 0x1924bc0
extern "C" uint8_t Global_1925158;      // takes the online clock when 1
// The system clock: ticks (0xfa3b00) since the start tick (0x195b648) at the frequency at 0x195b670.
extern "C" int64_t Clock_GetTick();
extern "C" int64_t Clock_StartTick;
extern "C" int64_t Clock_Frequency;

// Each frame: advances the movie by the time since the last update (33 us a frame while the online game is paused),
// then once the director shows the movie, runs slot 43.
void FlashMenu::Slot29() {
    GameStateView* state = Game_State;
    if (state && state->online && !state->flagE2) {
        if (movie && movie->loaded) player.Advance(0x21, 2, flagsBa ? flagsBa : -1);
    } else {
        int64_t now;
        if (Global_1925158 == 1) now = state ? state->clock : 0;
        else now = (Clock_GetTick() - Clock_StartTick) * 1000000 / Clock_Frequency;
        int64_t last = lastTime;
        lastTime = now;
        if (movie && movie->loaded) {
            int64_t elapsed = now - last;
            int mode = playModeBc == 2 ? playModeBc : playModeBc != 1;
            int flags = flagsBa ? flagsBa : -1;
            if (!(Global_1925158 & 1)) Clock_GetTick();
            player.Advance(elapsed, mode, flags);
        }
    }
    if (waitingToShow && director.Get()->IsShowing(&id228)) {
        Shown();
        waitingToShow = 0;
    }
}

void MultiplayerGameMenu::Slot29() noexcept {
    FlashMenu::Slot29();
    network.Get();
    if (Global_191e540->pending) OnlineSession_Flush(Global_191e540);
    if (!OnlineSession_Connected(Global_191e540)) OnlineSession_Drop(true);
}

void SelectDifficulty::Slot29() noexcept {
    FlashMenu::Slot29();
    if (Global_1924cb0 != 1) return;
    network.Get();
    if (Global_191e540->pending) OnlineSession_Flush(Global_191e540);
    if (!OnlineSession_Connected(Global_191e540)) OnlineSession_Drop(true);
}

void ServerSettingMenu::Slot29() noexcept {
    FlashMenu::Slot29();
    if (Global_1924cb0 != 1) return;
    network.Get();
    if (Global_191e540->pending) OnlineSession_Flush(Global_191e540);
    if (!OnlineSession_Connected(Global_191e540)) OnlineSession_Drop(true);
}

void AreaClear::Slot29() {
    FlashMenu::Slot29();
    if (!counting || !flag2e8) return;
    timer -= Move_FrameDelta;
    timer = 0.0f < timer ? timer : 0.0f;
    if (__builtin_fabsf(timer) <= 1e-6f) {
        Global_1924d6f = 0;
        stopped = 1;
    }
}

// Not yet matched (not credited): the original keeps the two movie names in separate stack slots and shares only
// the Open call's tail; here the slots merge and the branch folder shares the hash call too.
void ExModeResultExtra::Slot29() {
    FlashMenu::Slot29();
    elapsed += Move_FrameDelta;
    if (done || !(elapsed >= delay)) return;
    done = 1;
    bool success;
    if (mode == 1) success = static_cast<ExModeOutcomeB*>(static_cast<void*>(outcomeB->object))->success;
    else if (mode == 2) success = static_cast<ExModeOutcomeA*>(static_cast<void*>(outcomeA->object))->success;
    else success = true;
    MenuDirector* menus = director.Get();
    if (success) {
        MovieName name;
        name.hash = HashName("ExModeSuccessGameOverMovie");
        menus->Open(&name.hash, 0x20);
    } else {
        MovieName name;
        name.hash = HashName("ExModeFaultGameOverMovie");
        menus->Open(&name.hash, 0x20);
    }
}

void TitleScreen::Slot8() {
    LevelSecretState* state = secrets.Get();
    if (!state->count) return;
    for (int i = 0; i < 0x20; ++i) state->seen[i] = 0;
    state->count = 0;
    for (int i = 0; i < 0x100; ++i) state->found[i] = 0;
}

// Slot 26 (0x7fc6f0): moves the menu's transform to the x and y of the transform at 0x19251c8, at depth 510.
// The original calls the transform's invalidate and then returns instead of branching to it (0x8547a0 and
// 0xbf1810 end the same way). The closing assumption reproduces that and emits no code, as a stand-in for a
// release-mode assertion (docs/GAME_CLASSES.md); nothing here shows which check the original had.
void FlashMenu::Slot26() {
    onyx::Vector3 origin = Global_19251c8->position;
    onyx::Transform* place = onyx::Find<onyx::Transform, onyx::kTransform>(transform);
    place->SetPosition(onyx::Vector3(origin.x, origin.y, 510.0f));
    __builtin_assume(place != nullptr);
}

// Slot 44 (0x848200): the PS3 trial's main menu opens the difficulty select for story mode and the help and options
// movie for its button. "UnlockFullGame" is compared too, but nothing follows in this build.
void MainMenu_PS3_Trail::SelectInMainMenu(const wchar_t* name, uint32_t player) {
    if (SameName(name, StoryModeName)) OpenMovie(HashName("SelectDifficultyMovie"), player);
    else if (SameName(name, HelpAndOpitionName)) OpenMovie(HashName("HelpAndOptionsMovie"), player);
    else if (SameName(name, UnlockFullGameName)) {}
}

// Slot 44 (0x83d3a0): the Xbox trial's main menu. Story mode and help and options open their movies as on the PS3
// trial and "UnlockFullGame" does nothing; "ExitGame" opens the exit confirmation box.
void MainMenu_XBOX_Trail::SelectInMainMenu(const wchar_t* name, uint32_t player) {
    if (SameName(name, StoryModeName)) OpenMovie(HashName("SelectDifficultyMovie"), player);
    else if (SameName(name, HelpAndOpitionName)) OpenMovie(HashName("HelpAndOptionsMovie"), player);
    else if (SameName(name, UnlockFullGameName)) {}
    else if (SameName(name, ExitGameName)) {
        MenuDirector* menus = director.Get();
        MovieName box;
        box.hash = HashName("ExitGameConfirmBoxMovie");
        menus->OpenModal(&box.hash, 0x20, 0);
    }
}

// Slot 44 (0x8483b0): the full PS3 main menu runs the base selection first, then opens the movie for its own
// buttons. For "LeaderBoard" the movie's hash is worked out and dropped, and "DownLoadContent" does nothing.
// Not yet matched (not credited): this and name trade x20 and x21. Here name's live range runs through the last
// compare and comes out longer than this's, so it is allocated first; the original allocates this first.
void MainMenu_PS3_Full::SelectInMainMenu(const wchar_t* name, uint32_t player) {
    MainMenuBase::SelectInMainMenu(name, player);
    if (SameName(name, StoryModeName)) OpenMovie(HashName("SelectDifficultyMovie"), player);
    else if (SameName(name, ExtraGameName)) OpenMovie(HashName("ExtraGameModeMovie"), player);
    else if (SameName(name, LeaderBoardName)) HashName("LeaderboardMenuMovie");
    else if (SameName(name, HelpAndOpitionName)) OpenMovie(HashName("HelpAndOptionsMovie"), player);
    else if (SameName(name, DownLoadContentName)) {}
}

// Slot 40 (0x7fd150): in online play, the id of the pad in player slot index + 1, preferring pads without +0x20e
// set; otherwise, or with no such pad, the index itself. Not yet matched (not credited): in the first search the
// iterator and the element trade x11 and x12, so the two `ldr w19, [x11, #0x1e0]` tails no longer merge.
uint32_t FlashMenu::Slot40(uint32_t index) {
    GameStateView* state = Game_State;
    if (state && state->online) {
        PadControllerRepository* repository = onyx::Get<PadControllerRepository, 0x2f54d3d2u>(data.Get()->pads.Get()->repository);
        if (repository->begin != repository->end) {
            for (PadController** it = repository->begin; it != repository->end; ++it)
                if (!(*it)->flag20e && (*it)->slot == index + 1) return (*it)->id;
            PadController* pad = nullptr;
            for (PadController** it = repository->begin; it != repository->end; ++it)
                if ((*it)->slot == index + 1) { pad = *it; break; }
            if (pad) return pad->id;
        }
    }
    return index;
}

// Slot 29 (0x878d30): once, after the base update, passes on the character chosen with the menu's pad (6 when
// there is no such pad) together with the current state.
void CharacterData::Slot29() {
    FlashMenu::Slot29();
    if (state2c0 == 8) return;
    PadController* pad = data.Get()->FindPad(pad234);
    Call877840(pad ? pad->character : 6, state2c0);
    state2c0 = 8;
}

// Slot 29 (0x8547a0): after the base update, pins the HUD's transform to the x and y of the level camera's second
// transform, at depth 510. It ends like FlashMenu slot 26, with the same closing assumption.
void InGameHUDMovie::Slot29() {
    FlashMenu::Slot29();
    MenuCamera* levelCamera = onyx::Find<MenuCamera, 0x67f2aa4du>(camera.Get()->levelCamera);
    onyx::Vector3 origin = onyx::Get<onyx::Transform, onyx::kTransform>(levelCamera->transform98)->position;
    onyx::Transform* place = onyx::Find<onyx::Transform, onyx::kTransform>(transform);
    place->SetPosition(onyx::Vector3(origin.x, origin.y, 510.0f));
    __builtin_assume(place != nullptr);
}

void ConfirmBox::Slot30() {
    if (HashName("LoadingMessageBoxMovie") == id228 || HashName("LobbyClientMessageBoxMovie") == id228) return;
    Global_1924bc9 = 0;
    Global_1924cc0 = MessageBoxBlock();
}

uint64_t FlashMenuBridge::Call(void* movie, void* object, ScriptCall* call) {
    // Only the low half of slot 5's result is passed on (the original masks it).
    if (SameName(call->name, UpdateTexturesCall)) return static_cast<uint32_t>(UpdateTextures(call->arguments));
    return 1;
}

uint64_t ExModeGameOver::ExModeGameOverBridge::Call(void* movie, void* object, ScriptCall* call) {
    if (SameName(call->name, UpdateTexturesCall)) UpdateTextures(call->arguments);
    return 0;
}

uint64_t BossFightVS::BossFightVSBridge::Call(void* movie, void* object, ScriptCall* call) {
    if (!FlashMenuBridge::Call(movie, object, call)) return 0;
    char name[12];
    NarrowName(name, call->name);
    if (SameName(name, "Stop")) menu->stopped = 1;
    return 0;
}

void AttractMode::Slot42() {
    onyx::Allocator* allocator = *reinterpret_cast<onyx::Allocator**>(AllocatorContext + 0x558);
    bridge = new (allocator->Allocate(sizeof(AttractModeBridge))) AttractModeBridge(this);
}

}  // namespace SPTG
