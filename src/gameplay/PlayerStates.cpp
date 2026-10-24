// Player action-state handlers selected through member-function-pointer state slots.
// Behavior is documented in docs/PLAYER_ACTION_STATES.md; method and field names
// are provisional. Event codes 10001/10002 are state entry/exit.
#include "OnyxComponents.h"
using namespace onyx;

struct Player;
using ActionState = int (Player::*)(int event);

struct ControlComponent : Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Slot13(); virtual void Slot14(); virtual void Slot15(); virtual void Slot16(); virtual void Slot17();
    virtual void Slot18(); virtual void Slot19(); virtual void Slot20(); virtual void Slot21(); virtual void Slot22();
    virtual void Slot23(); virtual void Slot24(); virtual void Slot25(); virtual void Slot26(); virtual void Slot27();
    virtual void Slot28(); virtual void Slot29(); virtual void Slot30(); virtual void Slot31(); virtual void Slot32();
    virtual void Slot33(); virtual void Slot34(); virtual void Slot35(); virtual void Slot36(); virtual void Slot37();
    virtual void Slot38(); virtual void Slot39(); virtual void Slot40(); virtual void Slot41(); virtual void Slot42();
    virtual void Slot43(); virtual void Slot44(); virtual void Slot45(); virtual void Slot46(); virtual void Slot47();
    virtual void Slot48(); virtual void Slot49();
    virtual int IsLocked();  // +0x190
};
// Object reached through ActorObject +0x50 and checked against class ID 0x21350526.
struct Playfield : Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual bool IsA(uint32_t id);  // +0x60
    char padding[0x199 - 8];
    uint8_t player_flag;            // +0x199
};
struct ActorObject : Component { char padding[0x48]; ComponentHandle* playfield; };
static_assert(__builtin_offsetof(ActorObject, playfield) == 0x50, "ActorObject playfield");
static_assert(__builtin_offsetof(Playfield, player_flag) == 0x199, "Playfield flag");

struct Player {
    virtual void Slot0();
    virtual void Slot1();
    virtual void Slot2();
    virtual void Slot3();
    virtual void Slot4();
    virtual void Slot5();
    virtual void Slot6();
    virtual void Slot7();
    virtual void Slot8();
    virtual void Slot9();
    virtual void Slot10();
    virtual void Slot11();
    virtual void Slot12();
    virtual void Slot13();
    virtual void Slot14();
    virtual void Slot15();
    virtual void Slot16();
    virtual void Slot17();
    virtual void Slot18();
    virtual void Slot19();
    virtual void Slot20();
    virtual void Slot21();
    virtual void Slot22();
    virtual void Slot23();
    virtual void Slot24();
    virtual void Slot25();
    virtual void Slot26();
    virtual void Slot27();
    virtual void Slot28();
    virtual void Slot29();
    virtual void Slot30();
    virtual void ResumeControl();
    virtual void Slot32();
    virtual void Slot33();
    virtual void Slot34();
    virtual void Slot35();
    virtual bool IsControlled();
    virtual void Slot37();
    virtual void Slot38();
    virtual void Slot39();
    virtual void Slot40();
    virtual void Slot41();
    virtual void Slot42();
    virtual void Slot43();
    virtual void Slot44();
    virtual void Slot45();
    virtual void Slot46();
    virtual void Slot47();
    virtual void Slot48();
    virtual void Slot49();
    virtual void Slot50();
    virtual void Slot51();
    virtual bool KeepsAnchor();
    virtual void Slot53();
    virtual void Slot54();
    virtual void Slot55();
    virtual void Slot56();
    virtual void Slot57();
    virtual void Slot58();
    virtual void Slot59();
    virtual void Slot60();
    virtual void Slot61();
    virtual void Slot62();
    virtual void Slot63();
    virtual void Slot64();
    virtual void Slot65();
    virtual void Slot66();
    virtual void Slot67();
    virtual void Slot68();
    virtual void Slot69();
    virtual void Slot70();
    virtual void EnterGameOver();
    virtual void LeaveGameOver();
    virtual void Slot73();
    virtual void Slot74();
    virtual void Slot75();
    virtual void Slot76();
    virtual void Slot77();
    virtual void Slot78();
    virtual void Slot79();
    virtual void Slot80();
    virtual void Slot81();
    virtual void Slot82();
    virtual void Slot83();
    virtual void Slot84();
    virtual void Slot85();
    virtual void Slot86();
    virtual void Slot87();
    virtual void Slot88();
    virtual void Slot89();
    virtual void Slot90();
    virtual void Slot91();
    virtual void Slot92();
    virtual void Slot93();
    virtual void Slot94();
    virtual void Slot95();
    virtual void Slot96();
    virtual void Slot97();
    virtual void Slot98();
    virtual void Slot99();
    virtual void Slot100();
    virtual void Slot101();
    virtual void Slot102();
    virtual void Slot103();
    virtual void Slot104();
    virtual void Slot105();
    virtual void Slot106();
    virtual void Slot107();
    virtual void Slot108();
    virtual void Slot109();
    virtual void Slot110();
    virtual void Slot111();
    virtual void Slot112();
    virtual void Slot113();
    virtual void Slot114();
    virtual void Slot115();
    virtual void Slot116();
    virtual void Slot117();
    virtual void Slot118();
    virtual void Slot119();
    virtual void Slot120();
    virtual void Slot121();
    virtual void Slot122();
    virtual void Slot123();
    virtual void Slot124();
    virtual void Slot125();
    virtual void Slot126();
    virtual void Slot127();
    virtual void Slot128();
    virtual void Slot129();
    virtual void Slot130();
    virtual void Slot131();
    virtual void Slot132();
    virtual void Slot133();
    virtual void Slot134();
    virtual void Slot135();
    virtual void Slot136();
    virtual void Slot137();
    virtual void Slot138();
    virtual void Slot139();
    virtual void Slot140();
    virtual void Slot141();
    virtual void Slot142();
    virtual void Slot143();
    virtual void Slot144();
    virtual void Slot145();
    virtual void Slot146();
    virtual void Slot147();
    virtual void Slot148();
    virtual void Slot149();
    virtual void Slot150();
    virtual void Slot151();
    virtual void Slot152();
    virtual void Slot153();
    virtual void Slot154();
    virtual void Slot155();
    virtual void Slot156();
    virtual void Slot157();
    virtual void Slot158();
    virtual void Slot159();
    virtual void Slot160();
    virtual void Slot161();
    virtual void Slot162();
    virtual void Slot163();
    virtual void Slot164();
    virtual void Slot165();
    virtual void Slot166();
    virtual void Slot167();
    virtual void Slot168();
    virtual void Slot169();
    virtual void Slot170();
    virtual void Slot171();
    virtual void Slot172();
    virtual void Slot173();
    virtual void Slot174();
    virtual void Slot175();
    virtual void Slot176();
    virtual void Slot177();
    virtual void Slot178();
    virtual void Slot179();
    virtual void Slot180();
    virtual void Slot181();
    virtual void Slot182();
    virtual void Slot183();
    virtual void Slot184();
    virtual void Slot185();
    virtual void Slot186();
    virtual void Slot187();
    virtual void Slot188();
    virtual void Slot189();
    virtual void Slot190();
    virtual void Slot191();
    virtual void Slot192();
    virtual void Slot193();
    virtual void Slot194();
    virtual void Slot195();
    virtual void Slot196();
    virtual void Slot197();
    virtual void Slot198();
    virtual void Slot199();
    virtual void Slot200();
    virtual void Slot201();
    virtual void Slot202();
    virtual void Slot203();
    virtual void Slot204();
    virtual void Slot205();
    virtual void Slot206();
    virtual void Slot207();
    virtual void Slot208();
    virtual void Slot209();
    virtual void Slot210();
    virtual void Slot211();
    virtual void Slot212();
    virtual void Slot213();
    virtual void Slot214();
    virtual void Slot215();
    virtual void Slot216();
    virtual void Slot217();
    virtual void Slot218();
    virtual void Slot219();
    virtual void Slot220();
    virtual void Slot221();
    virtual void Slot222();
    virtual void Slot223();
    virtual void Slot224();
    virtual void Slot225();
    virtual void Slot226();
    virtual void Slot227();
    virtual void Slot228();
    virtual void Slot229();
    virtual void Slot230();
    virtual void Slot231();
    virtual void Slot232();
    virtual void Slot233();
    virtual ActionState GameOverState();
    char header[0x70];
    ComponentHandle* actor_object;  // 0x078
    char p080[0x1a4 - 0x80];
    Vector3 motion;                 // 0x1a4
    Vector3 motion_target;          // 0x1b0
    float stored_c4;                // 0x1bc (unused here)
    float p1c0;
    float motion_c4;                // 0x1c4
    char p1c8[0x210 - 0x1c8];
    ActionState current;            // 0x210
    char p220[0x238 - 0x220];
    ComponentHandle* control;       // 0x238
    ComponentHandle* owned;         // 0x240
    char p248[0x2bc - 0x248];
    float saved_z;                  // 0x2bc
    float saved_c4;                 // 0x2c0
    char p2c4[0x3ba - 0x2c4];
    uint8_t game_over_flag;         // 0x3ba
    char p3bb[0x500 - 0x3bb];
    int32_t action_mode;            // 0x500
    char p504[0x1525 - 0x504];
    uint8_t game_over_input;        // 0x1525
};
static_assert(__builtin_offsetof(Player, actor_object) == 0x78, "Player actor object");
static_assert(__builtin_offsetof(Player, motion) == 0x1a4, "Player motion");
static_assert(__builtin_offsetof(Player, motion_c4) == 0x1c4, "Player motion c4");
static_assert(__builtin_offsetof(Player, current) == 0x210, "Player state");
static_assert(__builtin_offsetof(Player, control) == 0x238, "Player control");
static_assert(__builtin_offsetof(Player, saved_z) == 0x2bc, "Player saved");
static_assert(__builtin_offsetof(Player, game_over_flag) == 0x3ba, "Player game-over flag");
static_assert(__builtin_offsetof(Player, action_mode) == 0x500, "Player mode");
static_assert(__builtin_offsetof(Player, game_over_input) == 0x1525, "Player input flag");

// SPTG::ControllablePlayer catalog (component 0x0bf4a9b7).
struct PlayerCatalog : Component { char padding[0x78]; uint64_t count; uint64_t reserved; Player** players; };
static_assert(__builtin_offsetof(PlayerCatalog, count) == 0x80, "catalog count");
static_assert(__builtin_offsetof(PlayerCatalog, players) == 0x90, "catalog players");
struct LevelItem { char padding[0xa0]; ComponentHandle* catalog; };
struct GameMode : Component { char padding[0x110]; int32_t value; };
struct GameContext { char padding[0xa8]; ComponentHandle* mode; };
struct ScriptRunner;
struct ScriptEventId { uint32_t hash, reserved; };
extern "C" LevelItem* Level_Item(void* reference);
extern "C" GameContext* Game_Context(void* reference);
extern "C" ScriptRunner* Script_Runner(void* reference);
extern "C" void Script_Prepare(ScriptRunner*);
extern "C" uint32_t Script_Hash(const char*);
extern "C" void Script_Request(ScriptRunner*, const uint32_t*, uint32_t, uint32_t);

const uint32_t kPlayerCatalog = onyx_types::type_0bf4a9b7;
const uint32_t kActorObject = onyx_types::type_6492d61d;
const uint32_t kPlayfieldClass = 0x21350526u;

// State at virtual +0x750: coordinates the game-over movie across all players.
extern "C" int Player_GameOverState(Player* self, int event) {
    switch (event) {
    case 10000:
    case 10003:
        return 1;
    case 10001: {
        self->game_over_flag = 1;
        self->action_mode = 5;
        self->game_over_input = 1;
        self->EnterGameOver();
        char* base = reinterpret_cast<char*>(self);
        PlayerCatalog* catalog = Find<PlayerCatalog, kPlayerCatalog>(Level_Item(base + 0x90)->catalog);
        int mismatches = 0;
        for (Player** it = catalog->players; it != catalog->players + catalog->count; ++it) {
            Player* player = *it;
            ActionState state = player->GameOverState();
            mismatches += player->current != state;
        }
        if (mismatches) return 1;
        GameMode* mode = static_cast<GameMode*>(Game_Context(base + 0x7a0)->mode->object);
        if (static_cast<uint32_t>(mode->value - 8) >= 5) {
            Script_Prepare(Script_Runner(base + 0x7c0));
            ScriptRunner* runner = Script_Runner(base + 0x7c0);
            ScriptEventId movie;
            movie.hash = Script_Hash("GameOverMovie");
            Script_Request(runner, &movie.hash, 32, 0);
        }
        return 1;
    }
    case 10002:
        self->game_over_flag = 0;
        self->action_mode = 0;
        self->game_over_input = 0;
        self->LeaveGameOver();
        return 1;
    default:
        return 0;
    }
}

__attribute__((always_inline)) inline Playfield* PlayerPlayfield(Player* self) {
    ActorObject* object = Get<ActorObject, kActorObject>(self->actor_object);
    Playfield* playfield = static_cast<Playfield*>(object->playfield->object);
    return playfield->IsA(kPlayfieldClass) ? playfield : nullptr;
}

// State at virtual +0x790: stops motion while active and marks the playfield.
// Not credited: 1,047 of 1,048 instruction words match; the original's empty
// tracking-bucket branch skips the tracking-map null check that this source keeps.
extern "C" int Player_HeldState(Player* self, int event) {
    switch (event) {
    case 10000:
    case 10003:
        return 1;
    case 10001:
        self->motion = Vector3::Zero();
        self->motion_target = Vector3::Zero();
        if (self->IsControlled() && !static_cast<ControlComponent*>(self->control->object)->IsLocked())
            self->ResumeControl();
        self->action_mode = 13;
        if (!self->KeepsAnchor()) {
            self->motion_target.z = self->saved_z;
            self->motion_c4 = self->saved_c4;
        }
        PlayerPlayfield(self)->player_flag = 1;
        return 1;
    case 10002:
        self->motion = Vector3::Zero();
        self->motion_target = Vector3::Zero();
        self->action_mode = 0;
        ResetHandle(self->owned);
        PlayerPlayfield(self)->player_flag = 0;
        return 1;
    default:
        return 0;
    }
}
