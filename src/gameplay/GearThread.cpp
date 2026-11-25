// Gear::Thread's constant slots.
#include "GearCore.h"

namespace Gear {

// Slot 4 (0xa7f000), shared by Gear's threads and the Onyx threads built on them: 7.
int32_t Thread::ThreadSlot4() {
    TouchSharedStatic();
    return 7;
}

}  // namespace Gear
