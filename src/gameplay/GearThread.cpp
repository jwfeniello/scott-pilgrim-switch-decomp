// Gear::Thread's constant slots.
#include "GearCore.h"

namespace Gear {

// Slot 4 (0xa7f000), shared by Gear's threads and the Onyx threads built on them: 7.
int32_t Thread::ThreadSlot4() {
    TouchSharedStatic();
    return 7;
}

// What 0x1926bc0 points to: the table of running threads (names provisional).
struct ThreadTable {
    void Remove(uint32_t id);          // 0xa7fb10
};
extern ThreadTable* Threads;           // 0x1926bc0

// Gear::LeechThread (vtable 0x189f370): a thread that leaves the table when it goes.
struct LeechThread : Thread {
    ~LeechThread() override;
};
// Slot 0 (0xab5e00; the deleting destructor 0xab5e50 inlines it): clears +0x60 and takes its id out of the table.
LeechThread::~LeechThread() {
    value60 = 0;
    Threads->Remove(id);
}

}  // namespace Gear
