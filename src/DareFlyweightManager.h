// Working names and ABI views; complete original declarations remain unknown.
// Dare::FlyweightManager<T>: the destructors (the deleting one drops the clearing stores as dead) and slot 0's Remove.
#include <stdint.h>
struct DareAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void* pointer);
};
extern "C" DareAllocator* Dare_Allocator;
extern "C" uint32_t Dare_AllocatorEnabled;
__attribute__((always_inline)) inline void DareFree(void* pointer) { if (Dare_AllocatorEnabled) { if (DareAllocator* a = Dare_Allocator) a->Free(pointer); } }
namespace Dare {
// The pair a flyweight entry is found by: two pointers at +0x38 of the object it is looked up for.
struct FlyweightId {
    const void* first;
    const void* second;
    bool operator==(const FlyweightId& other) const { return first == other.first && second == other.second; }
    bool operator!=(const FlyweightId& other) const { return first != other.first || second != other.second; }
};
// What it is looked up for: the id, and in the 0x20-byte entries also the 32-bit value at +0x8c.
struct FlyweightSource {
    char padding_0[0x38];
    FlyweightId id;        // +0x38
    char padding_48[0x44];
    uint32_t extra;        // +0x8c
};
// The key of an entry: the id, plus the extra value in the 0x20-byte entries. Copied field by field: the original
// copies no padding.
template<unsigned SlotSize> struct FlyweightKey;
template<> struct FlyweightKey<0x18u> {
    FlyweightId id;
    void Read(const FlyweightSource* source) { id = source->id; }
    bool operator==(const FlyweightKey& other) const { return id == other.id; }
    bool operator!=(const FlyweightKey& other) const { return id != other.id; }
    void CopyFrom(const FlyweightKey& other) { id = other.id; }
};
template<> struct FlyweightKey<0x20u> {
    FlyweightId id;
    uint32_t extra;
    void Read(const FlyweightSource* source) { id = source->id; extra = source->extra; }
    bool operator==(const FlyweightKey& other) const { return id == other.id && extra == other.extra; }
    bool operator!=(const FlyweightKey& other) const { return id != other.id || extra != other.extra; }
    void CopyFrom(const FlyweightKey& other) { id = other.id; extra = other.extra; }
};
template<unsigned SlotSize> struct FlyweightEntry {
    FlyweightKey<SlotSize> key;
    void* object;
    void CopyFrom(const FlyweightEntry& other) { key.CopyFrom(other.key); object = other.object; }
};
// Dare::FlyweightManager<T>: an array of entries, returned to the Dare allocator when active, with the last key looked
// up and where that lookup's object sits.
template<unsigned Key, unsigned SlotSize, unsigned CurrentOffset> struct FlyweightManager {
    typedef FlyweightEntry<SlotSize> Entry;
    uint32_t active, padding;
    Entry* begin; Entry* end;
    FlyweightKey<SlotSize> lastKey;
    void* current;   // the object field of the entry the last lookup found
    // Slot 0: drops the entry for `source` by moving the last entry over it. A lookup that just found it is reused;
    // otherwise the array is searched from both ends at once. Not credited: with pointer keys the layout and the loop
    // match, but the original addresses the moved entry from the old end and takes other registers; the 0x20-byte
    // entries also load the id as one vector.
    virtual void Remove(const FlyweightSource* source) {
        uint32_t size = end - begin;
        if (!size) return;
        FlyweightKey<SlotSize> key;
        key.Read(source);
        Entry* last = end - 1;
        end = last;
        if (!(lastKey == key) || !current) {
            lastKey.CopyFrom(key);
            current = nullptr;
            for (Entry *low = begin, *high = last; low <= high; ++low, --high) {
                if (low->key == key) {
                    low->CopyFrom(*last);
                    return;
                }
                if (high->key == key) {
                    high->CopyFrom(*last);
                    return;
                }
            }
            end = last + 1;
            return;
        }
        Entry* found = reinterpret_cast<Entry*>(static_cast<char*>(current) - __builtin_offsetof(Entry, object));
        found->CopyFrom(*last);
        current = nullptr;
    }
    virtual inline ~FlyweightManager() {
        if (active) {
            while (end > begin) --end;
            current = nullptr;
            DareFree(begin);
            active = 0;
            begin = end = nullptr;
        }
    }
};
}
#define DARE_FLYWEIGHT_MANAGER(Key, Size, Offset) template struct Dare::FlyweightManager<Key, Size, Offset>;
