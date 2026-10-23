#include "Statistics.h"
using namespace gameplay;

extern "C" void DispatchPlayerStatistic(Player* player, const StatisticsMessage& message) {
    StatisticsBureau* bureau = GetStatisticsBureau(&player->statistics);
    StatisticsHook* hook = bureau->events[message.event];
    hook->invoke(hook, message);
}
extern "C" void MarkLifeEvent(StatisticsBureau* bureau, const StatisticsMessage& message) {
    bureau->playerMarked[message.subject->index] = 1;
}

template<U32 Kind> static inline void Record(StatisticsBureau* bureau,
        const StatisticsMessage& message, const char* key, const StatisticLabels& labels) {
    U32 index = message.subject->index;
    if (GetStatisticsContext(&bureau->context)->index != index) return;
    U32 increment = Kind == 0 ? message.amount : 1;
    if (GameplayStatisticStore.end == GameplayStatisticStore.begin) InitializeStatisticStore();
    StatisticRecord* record = FindStatistic(GameplayStatisticStore.begin, key);
    record->kind = Kind;
    record->dirty = 1;
    const char* name = labels.key;
    const char* attribute = labels.attribute;
    record->labels.key = name;
    record->labels.attribute = attribute;
    record->amount += increment;
}
extern "C" void RecordDamage(StatisticsBureau* b, const StatisticsMessage& m) {
    Record<0>(b, m, "damagedealt", DamageLabels);
}
extern "C" void RecordPurchase(StatisticsBureau* b, const StatisticsMessage& m) {
    Record<2>(b, m, "itemsbought", PurchaseLabels);
}
extern "C" void RecordLifeTakenBy(StatisticsBureau* b, const StatisticsMessage& m) {
    Record<3>(b, m, "lifetakenbyplayer", LifeTakenByLabels);
}
extern "C" void RecordLifeTakenFrom(StatisticsBureau* b, const StatisticsMessage& m) {
    Record<4>(b, m, "lifetakenfromplayer", LifeTakenFromLabels);
}
extern "C" void RecordThrown(StatisticsBureau* b, const StatisticsMessage& m) {
    Record<10>(b, m, "objectsthrown", ThrownLabels);
}
extern "C" void RecordKilled(StatisticsBureau* b, const StatisticsMessage& m) {
    Record<11>(b, m, "timesgotkilled", KilledLabels);
}
extern "C" void RecordReanimated(StatisticsBureau* b, const StatisticsMessage& m) {
    Record<12>(b, m, "timesreanimatedbyplayer", ReanimatedLabels);
}
extern "C" void RecordTaunted(StatisticsBureau* b, const StatisticsMessage& m) {
    Record<14>(b, m, "timestaunted", TauntedLabels);
}
