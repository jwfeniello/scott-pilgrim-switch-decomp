// The handle machinery (provisional names): the destructors release their slot in the handle table under the table's
// lock; a slot can also be read and assigned under it.
#include <stdint.h>

namespace nn { namespace os {
struct MutexType;
void LockMutex(MutexType* mutex) noexcept;
void UnlockMutex(MutexType* mutex) noexcept;
} }  // namespace nn::os

// The lock over the handle table (the global at 0x1939b38; its name is provisional).
extern "C" nn::os::MutexType* Dare_HandleMutex;
struct HandleLock {
    HandleLock() { nn::os::LockMutex(Dare_HandleMutex); }
    ~HandleLock() { nn::os::UnlockMutex(Dare_HandleMutex); }
};
// An entry of the handle table: the value a handle stands for and a 24-bit count of the slots that hold it.
struct HandleEntry {
    uint32_t value;
    char padding_4[0x4];
    void* object;               // +0x8
    uint64_t references : 24;   // +0x10 (read and written as the whole word with the fields after it)
    uint64_t locks : 8;         // the rest of the low word: the entry is in use while either is set
    uint64_t extra : 32;        // +0x14
    bool InUse() const { return references || locks; }
};
// The table's index by value: sixteen buckets of (value, entry index) pairs, each remembering its last lookup.
struct HandleKey {
    uint32_t value;
    uint64_t index;             // +0x4
} __attribute__((packed, aligned(4)));
struct HandleBucket {
    HandleKey* begin;
    HandleKey* end;             // +0x8
    uint32_t lastValue;         // +0x10
    uint64_t* last;             // +0x18: the index the last lookup found
    char padding_20[0x8];
};
struct HandleTableData {
    char padding_0[0x10];
    HandleEntry* entries;       // +0x10
    char padding_18[0x30];
    HandleBucket buckets[16];   // +0x48
    HandleEntry& Entry(uint64_t index) { return entries[index]; }
    // The index of the entry for `value` (always there), searched from both ends of its bucket.
    uint64_t Find(uint32_t value) {
        HandleBucket& bucket = buckets[value & 0xf];
        if (bucket.lastValue != value) {
            HandleKey* low = bucket.begin;
            HandleKey* high = bucket.end;
            bucket.lastValue = value;
            for (;;) {
                if (low->value == value) {
                    bucket.last = &low->index;
                    break;
                }
                --high;
                if (high->value == value) {
                    bucket.last = &high->index;
                    break;
                }
                ++low;
            }
        }
        return *bucket.last;
    }
};
struct HandleTable {
    HandleTableData* data;
    static HandleTable* Get();  // 0xd29af0
    void Remove(uint32_t value);   // 0xd2aa10
    uint64_t Find(uint32_t value) { return data->Find(value); }
};
// What a released entry's object is handed to (0xd29e70; provisional name and argument names).
void DetachHandleObject(uint32_t value, void* object, uint32_t extra, int32_t flag);
struct HandleSlot {
    uint64_t index;
    void Release();   // 0xd29990
    uint32_t Value() {
        HandleLock lock;
        return HandleTable::Get()->data->entries[index].value;
    }
    HandleSlot& operator=(const HandleSlot& other);
};
inline void ReleaseHandle(HandleSlot* slot) {
    HandleLock lock;
    slot->Release();
}

// The part at +0x4 of SNDObjectHandlePriv (see DareRepository.cpp).
struct SNDObjectHandleState {
    char padding_0[0x8];
    HandleSlot slot;   // +0x8
    char padding_10[0x8];
    ~SNDObjectHandleState();
};

// 0xd29920: releases the handle's slot under the table lock. The original takes the lock three times, one of them
// through a guard (only that one is undone when the release throws); the two plain locks are a guess at that shape.
SNDObjectHandleState::~SNDObjectHandleState() {
    nn::os::LockMutex(Dare_HandleMutex);
    nn::os::LockMutex(Dare_HandleMutex);
    ReleaseHandle(&slot);
    nn::os::UnlockMutex(Dare_HandleMutex);
    nn::os::UnlockMutex(Dare_HandleMutex);
}

// Two more handle types with the same destructor (provisional names): the one the paths, voices and effect chains hold
// (0xd31160) and one the associations use (0xd59970).
#define DARE_HANDLE(Name)                           \
    struct Name {                                   \
        void* value;                                \
        HandleSlot slot;   /* +0x8 */               \
        ~Name();                                    \
    };                                              \
    Name::~Name() {                                 \
        nn::os::LockMutex(Dare_HandleMutex);        \
        nn::os::LockMutex(Dare_HandleMutex);        \
        ReleaseHandle(&slot);                       \
        nn::os::UnlockMutex(Dare_HandleMutex);      \
        nn::os::UnlockMutex(Dare_HandleMutex);      \
    }
DARE_HANDLE(DareObjectHandle)   // 0xd31160
DARE_HANDLE(AssoHandle)         // 0xd59970
// Four more handle types with this destructor; which classes they belong to isn't known yet, so they're named by address.
DARE_HANDLE(Handle_d30ee0)      // 0xd30ee0
DARE_HANDLE(Handle_d448c0)      // 0xd448c0
DARE_HANDLE(Handle_d96c90)      // 0xd96c90
DARE_HANDLE(Handle_d9f470)      // 0xd9f470

// Takes the other slot's entry, counting one more holder of it (under the table's lock). A second slot type has its own
// copy of this (0xd4f100; DareVoices.cpp calls it ThemeSettings::Assign).
#define DARE_SLOT_ASSIGN(Slot)                                                          Slot& Slot::operator=(const Slot& other) {                                              HandleLock lock;                                                                    if (this != &other && index != other.index) {                                           Release();                                                                          index = other.index;                                                                if (index) ++HandleTable::Get()->data->Entry(index).references;                 }                                                                                   return *this;                                                                   }
DARE_SLOT_ASSIGN(HandleSlot)   // 0xd323d0
struct HandleSlot_d4f100 {
    uint64_t index;
    void Release();   // 0xd29990
    HandleSlot_d4f100& operator=(const HandleSlot_d4f100& other);
};
DARE_SLOT_ASSIGN(HandleSlot_d4f100)   // 0xd4f100

namespace Dare {
namespace Private {
struct ThemeEntry;
// What a theme voice's handle (+0xa8 of ManagerThemeVoice, see DareVoices.cpp) stands for: the entry's object.
struct ThemeHandle {
    void* value;
    HandleSlot slot;   // +0x8
    ThemeEntry* Get();
};
// 0xd359b0: the theme entry its slot stands for, under the table's lock. The table is fetched three times; the two
// unused fetches are kept as statements here (perhaps checks that compile to nothing else).
ThemeEntry* ThemeHandle::Get() {
    HandleLock outer;
    HandleLock lock;
    HandleTable::Get();
    HandleTable::Get();
    return static_cast<ThemeEntry*>(HandleTable::Get()->data->Entry(slot.index).object);
}
}  // namespace Private
}  // namespace Dare

// What a handle at 0xd325c0 reads (its class isn't known; the slot is at +0x8 as in the handles above).
struct Handle_d325c0 {
    void* value;
    HandleSlot slot;   // +0x8
    uint32_t Value();
};
// 0xd325c0: the value its entry stands for, under the table's lock.
uint32_t Handle_d325c0::Value() {
    HandleLock lock;
    return slot.Value();
}

// Lets go of a slot's entry: one holder fewer, and once nothing holds or locks it, its value's object is detached and
// the value is removed (all under the table's lock). Five slot types have their own copy (0xd2adf0, 0xd2af80, 0xd2b110,
// 0xd2b670, 0xd2b800); which classes they belong to isn't known, so they're named by address. Not yet matched: when
// nothing is detached the original tests the count it just stored, and reloads it only after a detach; here the
// three paths meet before the reload.
// Detaches the object of the entry that owns `entry`'s value, if it has one.
inline void DetachOwner(const HandleEntry& entry) {
    HandleTable* table = HandleTable::Get();
    uint64_t at = table->Find(entry.value);
    HandleEntry& owner = table->data->Entry(at);
    if (owner.object) {
        DetachHandleObject(entry.value, owner.object, owner.extra, 0);
        table->data->Entry(at).object = nullptr;
    }
}
#define DARE_SLOT_RELEASE(Slot)                                                         \
    struct Slot {                                                                       \
        uint64_t index;                                                                 \
        HandleEntry& Entry() {                                                          \
            HandleLock lock;                                                            \
            return HandleTable::Get()->data->Entry(index);                              \
        }                                                                               \
        void Release();                                                                 \
    };                                                                                  \
    void Slot::Release() {                                                              \
        HandleLock lock;                                                                \
        if (!index) return;                                                             \
        HandleEntry& entry = Entry();                                                   \
        --entry.references;                                                             \
        if (entry.object && !entry.InUse()) DetachOwner(entry);                         \
        if (!entry.InUse()) HandleTable::Get()->Remove(entry.value);                    \
    }
DARE_SLOT_RELEASE(HandleSlot_d2adf0)
DARE_SLOT_RELEASE(HandleSlot_d2af80)
DARE_SLOT_RELEASE(HandleSlot_d2b110)
DARE_SLOT_RELEASE(HandleSlot_d2b670)
DARE_SLOT_RELEASE(HandleSlot_d2b800)
