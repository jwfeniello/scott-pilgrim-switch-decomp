// Small Dare classes (RTTI names): the virtual player and theme extensions, the schedulers, VirtualBus and
// DSPLib's static filter coefficients. Member names are provisional.
#include "DareCore.h"
#include <stddef.h>
#include <stdint.h>

extern "C" void* memcpy(void* destination, const void* source, size_t size);

namespace Dare {
namespace Private {

// What VirtualPlayerExt keeps at +0x8 (its class is unknown).
struct VirtualPlayerExtPart {
    void Clear();                // 0xcf77b0
    ~VirtualPlayerExtPart();     // 0xcf7930
};
// Dare::Private::VirtualPlayerExt.
struct VirtualPlayerExt {
    virtual ~VirtualPlayerExt();
    VirtualPlayerExtPart part;   // +0x8
};
// Slots 0 and 1 (0xd11c30, 0xd11c80; the deleting one has this inlined): empties the part before it goes.
__attribute__((always_inline)) VirtualPlayerExt::~VirtualPlayerExt() { part.Clear(); }

// A node of ThemeExt's list.
struct ThemeExtNode {
    ThemeExtNode* prev;   // +0x0
    ThemeExtNode* next;   // +0x8
};
// Dare::Private::ThemeExt: a list of blocks in the Dare allocator, around the node at +0x8.
struct ThemeExt {
    virtual ~ThemeExt();
    ThemeExtNode head;    // +0x8
    uint64_t count;       // +0x18
};
// Slot 0 (0xcf9210): frees every node and leaves the list empty.
ThemeExt::~ThemeExt() {
    ThemeExtNode* node = head.next;
    while (node != &head) {
        ThemeExtNode* next = node->next;
        if (node) DareFree(node);
        node = next;
    }
    count = 0;
    head.next = &head;
    head.prev = &head;
}

// What DareDualScheduler owns at +0x10: destroyed through its slot 0 and freed through Dare.
struct DualSchedulerPart {
    virtual ~DualSchedulerPart();
};
// Dare::Private::DareDualScheduler.
struct DareDualScheduler {
    virtual ~DareDualScheduler();
    char padding_8[0x8];
    DualSchedulerPart* part;   // +0x10
};
// Slots 0 and 1 (0xd32470, 0xd324d0; the deleting one has this inlined): destroys and frees the part.
__attribute__((always_inline)) DareDualScheduler::~DareDualScheduler() {
    if (DualSchedulerPart* owned = part) {
        owned->~DualSchedulerPart();
        DareFree(owned);
    }
}

// What DareAsyncScheduler holds at +0x8 (its class is unknown): slot 8 is told whether the mode changed.
struct AsyncSchedulerPart {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual bool Slot8(bool changed);   // slot 8
    char padding_8[0x13c];
    int32_t value144;    // +0x144
    int32_t value148;    // +0x148
    int32_t mode;        // +0x14c
};
// Dare::Private::DareAsyncScheduler.
struct DareAsyncScheduler {
    virtual void Slot0(); virtual void Slot1();
    virtual int32_t Slot2();
    AsyncSchedulerPart part;   // +0x8
};
// Slot 2 (0xd3bbd0): resets the part's +0x144/+0x148 to 3 and -1, puts it in mode 0x3000 and hands its slot 8 whether
// that changed the mode.
int32_t DareAsyncScheduler::Slot2() {
    AsyncSchedulerPart& p = part;   // through a reference: only the match supports it (it loads the part's vtable first)
    p.value144 = 3;
    p.value148 = -1;
    bool changed = p.mode != 0x3000;
    p.mode = 0x3000;
    return p.Slot8(changed);
}

// What VirtualBus's slot 5 is handed (its class is unknown): slot 9 fills in eight bytes and fails negative.
struct VirtualBusSource {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8();
    virtual int32_t Slot9(uint64_t* out);   // slot 9
    char padding_8[0x10];
    int32_t value18;     // +0x18
};
// Dare::Private::VirtualBus.
struct VirtualBus {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual int32_t Slot5(VirtualBusSource* source);
    char padding_8[0x10];
    int32_t value18;     // +0x18
};
// Slot 5 (0xd25b00): the source's slot 9 result when it fails; else takes the source's +0x18 unless it has one.
int32_t VirtualBus::Slot5(VirtualBusSource* source) {
    uint64_t out;
    int32_t result = source->Slot9(&out);
    if (result < 0) return result;
    if (value18) return 0;
    value18 = source->value18;
    return 0;
}

}  // namespace Private
}  // namespace Dare

namespace DSPLib {

// DSPLib::FilterCoeffStatic<3, 3>: a filter's coefficients in arrays it doesn't own.
template<unsigned A, unsigned B> struct FilterCoeffStatic {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual void Slot5(); virtual void Slot6(); virtual void Slot7(); virtual void Slot8();
    virtual bool CopyFrom(const FilterCoeffStatic& other);   // slot 9
    float* second;        // +0x8
    float* first;         // +0x10
    char padding_18[0x10];
    uint32_t firstCount;  // +0x28
    uint32_t secondCount; // +0x2c
};
// Slot 9 (0xd08cc0): copies the other's coefficients over this one's, as many as this one holds. Not yet matched: the
// original loads this one's first array before its count; with the builtin memcpy the count comes first here.
template<unsigned A, unsigned B> bool FilterCoeffStatic<A, B>::CopyFrom(const FilterCoeffStatic& other) {
    memcpy(first, other.first, firstCount * sizeof(float));
    memcpy(second, other.second, secondCount * sizeof(float));
    return true;
}
template bool FilterCoeffStatic<3, 3>::CopyFrom(const FilterCoeffStatic&);

}  // namespace DSPLib
