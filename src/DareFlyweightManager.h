// Working names and ABI views; complete original declarations remain unknown.
// Dare::FlyweightManager<T> deleting destructors: trim the slot array and return it to the Dare allocator.
#include <stdint.h>
struct DareAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void* pointer);
};
extern "C" DareAllocator* Dare_Allocator;
extern "C" uint32_t Dare_AllocatorEnabled;
__attribute__((always_inline)) inline void DareFree(void* pointer) { if (Dare_AllocatorEnabled) { if (DareAllocator* a = Dare_Allocator) a->Free(pointer); } }
namespace Dare {
template<unsigned Size> struct FlyweightSlot { char data[Size]; };
// Dare::FlyweightManager<T>: a slot array returned to the Dare allocator when active.
template<unsigned Key, unsigned SlotSize, unsigned CurrentOffset> struct FlyweightManager {
    uint32_t active, padding;
    FlyweightSlot<SlotSize>* begin; FlyweightSlot<SlotSize>* end;
    char gap[CurrentOffset - 0x20];
    void* current;
    virtual inline ~FlyweightManager() {
        if (active) {
            while (end > begin) --end;
            current = nullptr;
            DareFree(begin);
        }
    }
};
}
#define DARE_FLYWEIGHT_MANAGER(Key, Size, Offset) template struct Dare::FlyweightManager<Key, Size, Offset>;
