// SPTG::FlashMenu: a menu screen played as a Flash movie through Onyx::Fire. The screens (TitleScreen, ConfirmBox,
// AttractMode, ...) derive from it through Onyx::Component::Compose<FlashMenu, ...>; the vtables have 44 slots. Slot
// names are provisional unless a comment says what they do.
#pragma once
#include "OnyxComponents.h"

namespace SPTG {

// A name hashed to an id (0xbfbce0); see SaveData.cpp.
uint32_t HashName(const char* name);

// An ActionScript call as the bridges receive it: the function's name (4-byte characters) and its arguments.
struct ScriptCall {
    const wchar_t* name;         // +0x0
    void* arguments;             // +0x8
};
// The call names the bridges compare against. In the original they are most likely plain wide literals (they sit among
// other wide strings); they are declared as arrays here because the match checker binds 4-byte-character literals only
// through a symbol.
extern const wchar_t UpdateTexturesCall[];   // L"$UpdTexBefDraw" (0x13951c0)
// Whether two names are the same, compared the way the bridges do it inline. A do-while: as a plain loop LLVM rotates
// it and folds a literal's first character, which the original doesn't.
template<class Char> __attribute__((always_inline)) inline bool SameName(const Char* a, const Char* b) {
    Char ca, cb;
    do {
        ca = *a;
        cb = *b;
        if (!ca && !cb) return true;
        ++a;
        ++b;
    } while (ca == cb);
    return false;
}

// Onyx::Fire::FireActionScriptBridge (vtable 0x184a698, 5 slots): what a movie's ActionScript calls back into. Slot 2
// takes each call; the meaning of its first two arguments is unknown.
struct FireActionScriptBridge {
    virtual ~FireActionScriptBridge();      // slots 0, 1
    virtual uint64_t Call(void* movie, void* object, ScriptCall* call);   // slot 2
    virtual void Slot3();
    virtual void Slot4();
    FireActionScriptBridge() : value8(0), value10(0), value18(0) {}
    void* value8;                // +0x8
    void* value10;               // +0x10
    void* value18;               // +0x18
    void* value20;               // +0x20: left as allocated
};

struct FlashMenu;
// SPTG::FlashMenu::FlashMenuBridge (vtable 0x1852a00, 6 slots): each screen's bridge derives from it.
// Its call handler takes "$UpdTexBefDraw" (slot 5) and leaves the rest to the screen: each screen's bridge runs it
// first and stops when it returns 0.
struct FlashMenuBridge : FireActionScriptBridge {
    uint64_t Call(void* movie, void* object, ScriptCall* call) override;   // 0x7fd310
    virtual uint64_t UpdateTextures(void* arguments);                    // slot 5 (0x7fd390)
    FlashMenuBridge(FlashMenu* menu) : value28(0), menu(menu) {}
    void* value28;               // +0x28
    FlashMenu* menu;             // +0x30
};

// The Fire player a visual plays its movie with (embedded at +0xa0 of the visual). 0xf988b0 advances it by `micros`.
struct FirePlayer {
    void Advance(int64_t micros, int mode, int flags);   // 0xf988b0
};
// What the visual's movie handle (+0xd8) points to: +0x18 is set once the movie is loaded.
struct FireMovieState {
    char padding_0[0x18];
    uint8_t loaded;              // +0x18
};
// The menu director (a singleton the menus keep at +0x170): 0x7755c0 tells whether a movie is showing.
struct MenuDirector;
// SPTG::LevelCamera (type 0x67f2aa4d) and what reaches it, as the HUD uses them. Camera.h and BaseCharacter.h have
// the full classes (CameraAccessor, getter 0x774b50), but including them here clashes with this header's views.
struct MenuCamera : onyx::Component { char padding_8[0x90]; onyx::ComponentHandle* transform98; };  // +0x98: a second Transform; name provisional
struct MenuCameraAccessor { char padding[0x50]; onyx::ComponentHandle* levelCamera; };          // +0x50, MenuCamera
struct MenuCameraAccess { onyx::ComponentHandle* handle; MenuCameraAccessor* Get(); };          // getter 0x774b50
// SPTG::PadControllerRepository (type 0x2f54d3d2): the pad controllers, each carrying the id menus look it up by
// (+0x1e0), its player slot counted from 1 (+0x1f0) and the character chosen with it (+0x208). Field names provisional.
struct PadController {
    char padding[0x1e0];
    uint32_t id;           // +0x1e0
    char padding_1e4[0xc];
    uint16_t slot;         // +0x1f0
    char padding_1f2[0x16];
    int32_t character;     // +0x208
    char padding_20c[0x2];
    uint8_t flag20e;       // +0x20e: passed over in the first search of FlashMenu slot 40
};
struct PadControllerRepository : onyx::Component { char padding_8[0x90]; PadController** begin; PadController** end; };
// What the singleton at FlashMenu +0x168 gives (getter 0x777710; BaseCharacter.h has it as PersistentData), as far as
// the menus use it: the singleton at +0x78 (getter 0x7725e0) holds the pad controller repository.
struct PadRepositoryHolder { char padding[0x50]; onyx::ComponentHandle* repository; };   // +0x50
struct PadRepositoryAccess { onyx::ComponentHandle* handle; PadRepositoryHolder* Get(); };   // getter 0x7725e0
struct MenuPersistentData {
    char padding[0x78];
    PadRepositoryAccess pads;   // +0x78
    // The controller with this id, or null.
    PadController* FindPad(uint32_t id) {
        PadControllerRepository* repository = onyx::Get<PadControllerRepository, 0x2f54d3d2u>(pads.Get()->repository);
        for (PadController** it = repository->begin; it != repository->end; ++it)
            if ((*it)->id == id) return *it;
        return nullptr;
    }
};
struct MenuPersistentAccess { onyx::ComponentHandle* handle; MenuPersistentData* Get(); };   // getter 0x777710
struct MenuDirectorAccess { onyx::ComponentHandle* handle; MenuDirector* Get(); };   // getter 0x6ea720
struct MenuDirector {
    bool IsShowing(const uint32_t* movie);                // 0x7755c0
    void Open(const uint32_t* movie, int flags);          // 0x7710b0
    void OpenModal(const uint32_t* movie, int flags, int mode);   // 0x778670; name provisional (opens confirm boxes)
};
// A movie name as the director takes it: the hash, in an 8-byte object.
struct MovieName { uint32_t hash; uint32_t unused; };

// The transform the menus' screen space follows (0x19251c8): slot 26 puts a menu at its x and y.
extern "C" onyx::Transform* Global_19251c8;

#define FLASH_SLOT(n) virtual void Slot##n();
struct FlashMenu : onyx::Component {
    FLASH_SLOT(3) FLASH_SLOT(4) FLASH_SLOT(5) FLASH_SLOT(6) FLASH_SLOT(7) FLASH_SLOT(8) FLASH_SLOT(9) FLASH_SLOT(10)
    FLASH_SLOT(11) FLASH_SLOT(12) FLASH_SLOT(13) FLASH_SLOT(14) FLASH_SLOT(15) FLASH_SLOT(16) FLASH_SLOT(17)
    FLASH_SLOT(18) FLASH_SLOT(19) FLASH_SLOT(20) FLASH_SLOT(21) FLASH_SLOT(22) FLASH_SLOT(23) FLASH_SLOT(24)
    FLASH_SLOT(25) FLASH_SLOT(26) FLASH_SLOT(27) FLASH_SLOT(28) FLASH_SLOT(29) FLASH_SLOT(30) FLASH_SLOT(31)
    FLASH_SLOT(32) FLASH_SLOT(33) FLASH_SLOT(34) FLASH_SLOT(35) FLASH_SLOT(36) FLASH_SLOT(37) FLASH_SLOT(38)
    FLASH_SLOT(39)
    virtual uint32_t Slot40(uint32_t index);   // the pad id behind a player index in online play
    FLASH_SLOT(41) FLASH_SLOT(42)
    virtual void Shown();                         // slot 43: run by slot 29 once the director shows the movie
    char padding_8[0x50];
    onyx::ComponentHandle* transform;   // +0x58: the visual's transform
    char padding_60[0x40];
    FirePlayer player;           // +0xa0
    char padding_a1[0x19];
    uint8_t flagsBa;             // +0xba: passed on to the player, or -1 when clear
    char padding_bb[0x1];
    int32_t playModeBc;          // +0xbc: 2 plays in mode 2, 1 in mode 0, anything else in mode 1
    char padding_c0[0x18];
    FireMovieState* movie;       // +0xd8
    char padding_e0[0x88];
    MenuPersistentAccess data;   // +0x168
    MenuDirectorAccess director; // +0x170
    MenuCameraAccess camera;     // +0x178
    char padding_180[0xa8];
    uint32_t id228;              // +0x228: the hash of the movie's name
    uint8_t flag22c;             // +0x22c
    uint8_t flag22d;             // +0x22d
    uint8_t flag22e;             // +0x22e
    uint8_t flag22f;             // +0x22f
    uint8_t flag230;             // +0x230
    char padding_231[0x3];
    uint32_t pad234;             // +0x234: the id of the pad the menu answers to; name provisional
    char padding_238[0x8];
    int64_t lastTime;            // +0x240: the clock in microseconds at the last update
    FlashMenuBridge* bridge;     // +0x248: made by slot 42
    char padding_250[0x20];
    uint8_t stopped;             // +0x270: raised by the movie's "Stop" (BossFightVS, BootupFlash)
    char padding_271[0x1];
    uint8_t waitingToShow;       // +0x272: slot 29 (the update, 0x7ff7c0) waits for the director to show the movie
};

// A confirmation box. Slot 30 (0x875ef0), unless it is the loading or lobby message box, clears the flag at 0x1924bc9
// and the 0x50 bytes at 0x1924cc0 that the message boxes share.
struct ConfirmBox : FlashMenu {
    void Slot30() override;
};

// A call name narrowed to one byte a character, as the screens compare most of their calls.
__attribute__((always_inline)) inline void NarrowName(char* out, const wchar_t* in, uint32_t size = 0xffffffffu) {
    while (*in && size) {
        *out++ = static_cast<char>(*in++);
        --size;
    }
    *out = 0;
}

// The versus screen before a boss fight. Its movie's "Stop" raises +0x270.
struct BossFightVS : FlashMenu {
    struct BossFightVSBridge : FlashMenuBridge {
        uint64_t Call(void* movie, void* object, ScriptCall* call) override;   // 0x87a250
    };
};

// The online session object behind the global at 0x191e540, as the network menus poll it. Names are provisional.
struct OnlineSession {
    char padding_0[0x5f8];
    void* pending;               // +0x5f8: flushed through 0xfa4a90 when set
};
extern "C" OnlineSession* Global_191e540;
extern "C" void OnlineSession_Flush(OnlineSession* session);     // 0xfa4a90
extern "C" bool OnlineSession_Connected(OnlineSession* session); // 0x6e9340
extern "C" void OnlineSession_Drop(bool flag) noexcept;          // 0x6f0170: the menus tail-call it inside noexcept
extern "C" uint8_t Global_1924cb0;                                // see EventSenders.cpp
// A component the network menus keep at +0x2b0 and resolve every update (getter 0x680a00); what it is is unknown.
struct NetworkComponentAccess { onyx::ComponentHandle* handle; void* Get(); };

// The network screens' updates (slot 29): FlashMenu's, then, while online (MultiplayerGameMenu always, the other two
// with the global at 0x1924cb0 at 1), resolve +0x2b0, flush the session and drop the game when it is not connected.
struct MultiplayerGameMenu : FlashMenu {
    void Slot29() noexcept override;   // 0x830570
    char padding_273[0x3d];
    NetworkComponentAccess network;   // +0x2b0
};
struct SelectDifficulty : FlashMenu {
    void Slot29() noexcept override;   // 0x817a80
    char padding_273[0x3d];
    NetworkComponentAccess network;   // +0x2b0
};
struct ServerSettingMenu : FlashMenu {
    void Slot29() noexcept override;   // 0x82e1a0
    char padding_273[0x3d];
    NetworkComponentAccess network;   // +0x2b0
};

extern "C" float Move_FrameDelta;          // seconds since the last frame (0x1924d70)
extern "C" uint8_t Global_1924d6f;         // cleared when the area clear screen's timer runs out

// The area clear screen. Slot 29 (0x87c710) counts +0x2e0 down while +0x2e8 and +0x2ec are set, and at zero clears
// the global at 0x1924d6f and stops the movie.
struct AreaClear : FlashMenu {
    void Slot29() override;
    char padding_273[0x6d];
    float timer;                 // +0x2e0
    char padding_2e4[0x4];
    uint8_t flag2e8;             // +0x2e8
    char padding_2e9[0x3];
    uint8_t counting;            // +0x2ec
};

// What ExModeResultExtra's two handles (+0x2c0, +0x2c8) hold; only the bytes it reads are known.
struct ExModeOutcomeA { char padding_0[0xf0]; uint8_t success; };    // +0xf0
struct ExModeOutcomeB { char padding_0[0x13a]; uint8_t success; };   // +0x13a

// The extra modes' result screen. Slot 29 (0x86abd0) waits +0x2d8 seconds, then opens the success or the fault game
// over movie by the outcome its mode (+0x2dc) reads (always success for modes other than 1 and 2).
struct ExModeResultExtra : FlashMenu {
    void Slot29() override;
    char padding_273[0x4d];
    onyx::ComponentHandle* outcomeA;   // +0x2c0: read in mode 2
    onyx::ComponentHandle* outcomeB;   // +0x2c8: read in mode 1
    float elapsed;               // +0x2d0
    uint8_t done;                // +0x2d4
    char padding_2d5[0x3];
    float delay;                 // +0x2d8
    int32_t mode;                // +0x2dc
};

// SPTG::LevelSecretManager as the title screen clears it (BaseCharacter.h has the gameplay view): a count at +0xa8
// with 0x400 bytes after it, and 0x80 bytes at +0x5b4.
struct LevelSecretState {
    char padding_0[0xa8];
    uint32_t count;              // +0xa8
    uint32_t found[0x100];       // +0xac
    char padding_4ac[0x108];
    uint32_t seen[0x20];         // +0x5b4
};
struct LevelSecretAccess { onyx::ComponentHandle* handle; LevelSecretState* Get(); };   // getter 0x78c910

// The title screen. Slot 8 (0x804bd0) forgets the secrets found so far, if any.
struct TitleScreen : FlashMenu {
    void Slot8() override;
    char padding_273[0x55];
    LevelSecretAccess secrets;   // +0x2c8
};

// The extra modes' game over screen.
struct ExModeGameOver : FlashMenu {
    struct ExModeGameOverBridge : FlashMenuBridge {
        uint64_t Call(void* movie, void* object, ScriptCall* call) override;   // 0x86d340
    };
};

// The attract mode (the demo the title screen falls into). Slot 42 (0x87ac70) makes its bridge.
struct AttractMode : FlashMenu {
    // SPTG::AttractMode::AttractModeBridge (vtable 0x185e5c8, 0x40 bytes).
    struct AttractModeBridge : FlashMenuBridge {
        ~AttractModeBridge();
        uint64_t Call(void* movie, void* object, ScriptCall* call) override;   // 0x87ad00
        AttractModeBridge(AttractMode* mode);
        AttractMode* mode;           // +0x38
    };
    void Slot42() override;
};
inline AttractMode::AttractModeBridge::AttractModeBridge(AttractMode* mode) : FlashMenuBridge(mode), mode(mode) {}

// SPTG::MainMenuBase (vtable 0x1857758), which the four platform and trial main menus derive from. The slot 44 name
// and parameters come from the RTTI of the lambdas inside it (SelectInMainMenu(const wchar_t*, unsigned int)).
struct MainMenuBase : FlashMenu {
    virtual void SelectInMainMenu(const wchar_t* name, uint32_t player);   // slot 44 (0x845e40)
    void OpenMovie(uint32_t movie, uint32_t player);   // 0x83d4d0; name provisional
};
// SPTG::MainMenu_PS3_Trail (vtable 0x1858110).
struct MainMenu_PS3_Trail : MainMenuBase {
    void SelectInMainMenu(const wchar_t* name, uint32_t player) override;
};
// The main menu's button names. Declared as arrays because the checker only handles 1-byte literals.
extern const wchar_t StoryModeName[];        // L"StoryMode" (0x1393e10)
extern const wchar_t HelpAndOpitionName[];   // L"HelpAndOpition" (0x139472c), the movie's own spelling
extern const wchar_t UnlockFullGameName[];   // L"UnlockFullGame" (0x1396560)
extern const wchar_t ExitGameName[];         // L"ExitGame" (0x139659c)
extern const wchar_t ExtraGameName[];        // L"ExtraGame" (0x1395e60)
extern const wchar_t LeaderBoardName[];      // L"LeaderBoard" (0x1395ac0)
extern const wchar_t DownLoadContentName[];  // L"DownLoadContent" (0x1394768)
// SPTG::MainMenu_PS3_Full (vtable 0x18582a0).
struct MainMenu_PS3_Full : MainMenuBase {
    void SelectInMainMenu(const wchar_t* name, uint32_t player) override;
};
// SPTG::MainMenu_XBOX_Trail (vtable 0x18571f0).
struct MainMenu_XBOX_Trail : MainMenuBase {
    void SelectInMainMenu(const wchar_t* name, uint32_t player) override;
};

// SPTG::CharacterData (vtable 0x185dab8).
struct CharacterData : FlashMenu {
    char padding_273[0x4d];
    int32_t state2c0;   // +0x2c0: 8 once slot 29 has passed the character on
    void Slot29() override;
    void Call877840(int character, int state);   // 0x877840; name provisional
};

// SPTG::InGameHUDMovie (vtable 0x1859308).
struct InGameHUDMovie : FlashMenu {
    void Slot29() override;
};

}  // namespace SPTG
