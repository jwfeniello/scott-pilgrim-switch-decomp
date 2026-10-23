#include "Statistics.h"
using namespace gameplay;

// Original 0x6f3c30 receives the event payload as float (S0), and kind as U32
// (W0). The meaning and units of this payload remain unrecovered.
extern "C" void RecordStatisticDetail(float detail, U32 kind);

template<U32 Kind> static inline void RecordDetail(StatisticsBureau* bureau,
        const StatisticsMessage& message) {
    U32 index = message.subject->index;
    if (GetStatisticsContext(&bureau->context)->index == index) {
        float detail;
        // The event envelope stores raw bits; preserve them rather than convert.
        __builtin_memcpy(&detail, &message.extra, sizeof(detail));
        RecordStatisticDetail(detail, Kind);
    }
}
extern "C" void RecordDetail5(StatisticsBureau* b, const StatisticsMessage& m) {
    RecordDetail<5>(b, m);
}
extern "C" void RecordDetail6(StatisticsBureau* b, const StatisticsMessage& m) {
    RecordDetail<6>(b, m);
}
extern "C" void RecordDetail7(StatisticsBureau* b, const StatisticsMessage& m) {
    RecordDetail<7>(b, m);
}
extern "C" void RecordDetail8(StatisticsBureau* b, const StatisticsMessage& m) {
    RecordDetail<8>(b, m);
}
