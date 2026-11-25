// Onyx::Component::Bucket's constant slots. Slot names are provisional.
#include "GearCore.h"

namespace Onyx {
namespace Component {

// Onyx::Component::Bucket (vtable 0x1842000).
struct Bucket {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6();
    virtual int32_t Slot7();           // slot 7
};

// Slot 7 (0x67b930): 0, after Gear's shared static (the same guard as Gear::Thread's slot 4).
int32_t Bucket::Slot7() {
    Gear::TouchSharedStatic();
    return 0;
}

}  // namespace Component
}  // namespace Onyx
