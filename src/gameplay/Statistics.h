#pragma once
// Reconstructed 64-bit ABI views. Padding represents unrecovered members.
// Names describe verified behavior, not recovered original declarations.
namespace gameplay {
using U32 = unsigned;
using U64 = unsigned long long;
template<class T> struct Handle { void* unknown; T* object; U32 references; };
struct StatisticsBureau;
struct Player {
    unsigned char unknown0[0x7a8];
    Handle<StatisticsBureau>* statistics;
    unsigned char unknown7b0[0xc0];
    U32 lives;
    unsigned char unknown874[0xc94];
    U32 index;
};
struct StatisticsMessage {
    U32 event;
    U32 unused;
    Player* subject;
    U32 amount;
    U32 extra;
    U64 reserved;
};
struct StatisticsHook {
    void* vtable;
    void (*invoke)(StatisticsHook*, const StatisticsMessage&);
};
struct StatisticsContext { unsigned char unknown0[0x182c]; U32 index; };
struct StatisticsBureau {
    unsigned char unknown0[0x88];
    Handle<StatisticsContext>* context;
    U64 unknown90;
    StatisticsHook* events[32];
    unsigned char unknown198[9];
    unsigned char playerMarked[4];
};
struct StatisticLabels { const char* key; const char* attribute; };
struct StatisticRecord { U32 kind, amount; StatisticLabels labels; bool dirty; };
struct StatisticStore { void* begin; void* end; };
static_assert(sizeof(void*) == 8, "Original ABI is 64-bit");
static_assert(__builtin_offsetof(Player, lives) == 0x870, "Player lives layout");
static_assert(__builtin_offsetof(Player, index) == 0x1508, "Player index layout");
static_assert(__builtin_offsetof(StatisticsBureau, events) == 0x98, "Event table layout");
static_assert(__builtin_offsetof(StatisticsBureau, playerMarked) == 0x1a1, "Player mark layout");
static_assert(__builtin_offsetof(StatisticRecord, dirty) == 0x18, "Record layout");
}
extern "C" {
extern gameplay::StatisticStore GameplayStatisticStore;
extern const gameplay::StatisticLabels DamageLabels, PurchaseLabels, LifeTakenByLabels,
    LifeTakenFromLabels, ThrownLabels, KilledLabels, ReanimatedLabels, TauntedLabels;
gameplay::StatisticsBureau* GetStatisticsBureau(gameplay::Handle<gameplay::StatisticsBureau>**);
gameplay::StatisticsContext* GetStatisticsContext(gameplay::Handle<gameplay::StatisticsContext>**);
void InitializeStatisticStore();
gameplay::StatisticRecord* FindStatistic(void*, const char*);
void DispatchPlayerStatistic(gameplay::Player*, const gameplay::StatisticsMessage&);
void MarkLifeEvent(gameplay::StatisticsBureau*, const gameplay::StatisticsMessage&);
void RecordDamage(gameplay::StatisticsBureau*, const gameplay::StatisticsMessage&);
void RecordPurchase(gameplay::StatisticsBureau*, const gameplay::StatisticsMessage&);
void RecordLifeTakenBy(gameplay::StatisticsBureau*, const gameplay::StatisticsMessage&);
void RecordLifeTakenFrom(gameplay::StatisticsBureau*, const gameplay::StatisticsMessage&);
void RecordThrown(gameplay::StatisticsBureau*, const gameplay::StatisticsMessage&);
void RecordKilled(gameplay::StatisticsBureau*, const gameplay::StatisticsMessage&);
void RecordReanimated(gameplay::StatisticsBureau*, const gameplay::StatisticsMessage&);
void RecordTaunted(gameplay::StatisticsBureau*, const gameplay::StatisticsMessage&);
}
