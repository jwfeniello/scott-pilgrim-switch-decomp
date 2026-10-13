// Reconstructed _INIT_33 (original 0x63a970, 96,172-byte FDE).
// Factory class names come from separate RTTI evidence; field names are inferred.
#include <stdint.h>
#include <stddef.h>

namespace RegistryReconstruction {
using Factory = void* (*)();
struct Entry { uint32_t id; uint32_t padding; Factory create; Entry* next; };
struct Vector { void* begin; void* end; void* capacity; };
struct Endpoint { uint32_t address; uint16_t port; uint16_t padding; };
struct PendingObject {
    uint64_t a, b;
    const void* text;
    int32_t index;
    uint8_t active;
    uint8_t pad1[3];
    uint32_t count;
    uint32_t pad2;
    uint64_t pointer;
    uint32_t state;
};
static_assert(sizeof(Entry) == 24, "registry entry");
static_assert(offsetof(PendingObject, pointer) == 0x28, "pending layout");

extern "C" {
extern Entry** Registry_Table;
extern uint64_t Registry_TableGuard;
extern Entry* Registry_Buckets[100];
extern Entry** Registry_TableB;
extern uint64_t Registry_TableGuardB;
extern Entry* Registry_BucketsB[100];
extern Entry** Registry_TableC;
extern uint64_t Registry_TableGuardC;
extern Entry* Registry_BucketsC[100];
extern Entry** Registry_TableD;
extern uint64_t Registry_TableGuardD;
extern Entry* Registry_BucketsD[100];
extern uint64_t Registry_ScalarGuardA, Registry_ScalarGuardB;
extern uint64_t Registry_ScalarA, Registry_ScalarB;
alignas(8) extern unsigned char Registry_ZeroBuffer[2048];
alignas(8) extern float Registry_MaxPair[2];
extern uint32_t Registry_SourceWord, Registry_CopiedWord;
extern uint32_t Registry_SourceCount, Registry_LastIndex;
extern Factory Registry_Hooks[4];
void* Registry_HookA(); void* Registry_HookB();
void* Registry_HookC(); void* Registry_HookD();
extern Vector Registry_FlagVector;
extern const uint32_t Registry_FlagDefaults[23];
extern uint64_t Registry_NetworkInvalidA, Registry_NetworkZero, Registry_NetworkInvalidB;
extern uint32_t Registry_Loopback, Registry_Broadcast, Registry_AnyAddress;
extern Endpoint Registry_EmptyEndpoint, Registry_InvalidEndpoint;
extern uint64_t Registry_NetworkSize;
extern unsigned char Registry_DeferredObject[24];
extern PendingObject Registry_PendingObject;
extern const unsigned char Registry_EmptyText[];
extern unsigned char Registry_DefaultValue[44], Registry_CopiedValue[44];
alignas(8) extern unsigned char Registry_MutexA[32], Registry_MutexB[32];
extern Vector Registry_EmptyVector;
extern unsigned char Registry_DsoHandle;
__attribute__((malloc)) void* Registry_Allocate(size_t);
int Registry_AtExit(void (*)(void*), void*, void*);
int __cxa_guard_acquire(uint64_t*);
void __cxa_guard_release(uint64_t*);
uint32_t Registry_MakeIpv4(uint8_t, uint8_t, uint8_t, uint8_t);
void Registry_InitializeMutex(void*, bool, int);
void Registry_DestroyFlagVector(void*);
void Registry_DestroyDeferred(void*);
void Registry_DestroyPending(void*);
void Registry_DestroyValue(void*);
void Registry_DestroyMutex(void*);
void Registry_DestroyEmptyVector(void*);
}

static __attribute__((always_inline)) inline void register_component(
        Entry**& registry, uint64_t& table_guard, Entry** buckets,
        uint64_t& guard, Entry& entry, uint32_t id, Factory create) {
    Entry** table = registry;
    if (!table) {
        if (__builtin_expect(!(__atomic_load_n(reinterpret_cast<uint8_t*>(&table_guard), __ATOMIC_ACQUIRE) & 1), 0)) {
            if (__cxa_guard_acquire(&table_guard)) {
                __builtin_memset(buckets, 0, 800);
                __cxa_guard_release(&table_guard);
            }
        }
        table = buckets;
        registry = table;
    }
    if (__builtin_expect(!(__atomic_load_n(reinterpret_cast<uint8_t*>(&guard), __ATOMIC_ACQUIRE) & 1), 0)) {
        if (__cxa_guard_acquire(&guard)) {
            entry.id = id;
            entry.create = create;
            entry.next = nullptr;
            __cxa_guard_release(&guard);
        }
    }
    uint32_t bucket = entry.id % 100;
    entry.next = table[bucket];
    table[bucket] = &entry;
}

static __attribute__((always_inline)) inline void initialize_scalar(
        uint64_t& guard, uint64_t& value, uint64_t initial) {
    if (!(__atomic_load_n(reinterpret_cast<uint8_t*>(&guard), __ATOMIC_ACQUIRE) & 1)) {
        if (__cxa_guard_acquire(&guard)) {
            value = initial;
            __cxa_guard_release(&guard);
        }
    }
}

static __attribute__((always_inline)) inline void initialize_network_constants() {
    Registry_NetworkInvalidA = ~uint64_t(0);
    Registry_NetworkZero = 0;
    Registry_NetworkInvalidB = ~uint64_t(0);
    Registry_Loopback = Registry_MakeIpv4(127, 0, 0, 1);
    Registry_Broadcast = Registry_MakeIpv4(255, 255, 255, 255);
    Registry_AnyAddress = Registry_MakeIpv4(0, 0, 0, 0);
    Registry_EmptyEndpoint.port = 0;
    Registry_EmptyEndpoint.address = 0;
    Registry_InvalidEndpoint.port = 0xffff;
    Registry_InvalidEndpoint.address = ~uint32_t(0);
    Registry_NetworkSize = 56;
}

static __attribute__((always_inline)) inline void initialize_pending_object() {
    Registry_PendingObject.active = 0;
    Registry_PendingObject.count = 0;
    Registry_PendingObject.pointer = 0;
    Registry_PendingObject.state = 0;
    Registry_PendingObject.a = 0;
    Registry_PendingObject.b = 0;
    Registry_PendingObject.text = Registry_EmptyText;
    Registry_PendingObject.index = -1;
    Registry_AtExit(Registry_DestroyPending, &Registry_PendingObject, &Registry_DsoHandle);
}

static __attribute__((always_inline)) inline void initialize_shared_value() {
    __builtin_memcpy(Registry_CopiedValue, Registry_DefaultValue, 0x15);
    typedef uint64_t Payload __attribute__((vector_size(16)));
    Payload payload;
    uint32_t tag = *reinterpret_cast<uint32_t*>(Registry_DefaultValue + 0x28);
    __builtin_memcpy(&payload, Registry_DefaultValue + 0x18, sizeof(payload));
    __builtin_memcpy(Registry_CopiedValue + 0x18, &payload, sizeof(payload));
    *reinterpret_cast<uint32_t*>(Registry_CopiedValue + 0x28) = tag;
    if (tag == 2) {
        uint32_t* references = reinterpret_cast<uint32_t*>(payload[0]);
        __atomic_fetch_add(references, 1, __ATOMIC_RELAXED);
    }
    Registry_AtExit(Registry_DestroyValue, Registry_CopiedValue, &Registry_DsoHandle);
}

static __attribute__((always_inline)) inline void initialize_mutexes() {
    Registry_InitializeMutex(Registry_MutexA, true, 0);
    Registry_AtExit(Registry_DestroyMutex, Registry_MutexA, &Registry_DsoHandle);
    Registry_InitializeMutex(Registry_MutexB, true, 0);
    Registry_AtExit(Registry_DestroyMutex, Registry_MutexB, &Registry_DsoHandle);
    Registry_EmptyVector.begin = nullptr;
    Registry_EmptyVector.end = nullptr;
    Registry_EmptyVector.capacity = nullptr;
    Registry_AtExit(Registry_DestroyEmptyVector, &Registry_EmptyVector, &Registry_DsoHandle);
}

// The inventory is recovered from the original's guarded records. No machine
// code bytes are embedded in this source; each line names an actual registration.
#include "component_registry_declarations.inc"

extern "C" void InitializeComponentRegistryCandidate() {
    Registry_FlagVector.begin = nullptr;
    Registry_FlagVector.end = nullptr;
    Registry_FlagVector.capacity = nullptr;
    void* values = Registry_Allocate(sizeof(Registry_FlagDefaults));
    Registry_FlagVector.begin = values;
    Registry_FlagVector.end = values;
    Registry_FlagVector.capacity = static_cast<char*>(values) + sizeof(Registry_FlagDefaults);
    __builtin_memcpy(values, Registry_FlagDefaults, sizeof(Registry_FlagDefaults));
    Registry_FlagVector.end = static_cast<char*>(values) + sizeof(Registry_FlagDefaults);
    Registry_AtExit(Registry_DestroyFlagVector, &Registry_FlagVector, &Registry_DsoHandle);
#include "component_registry_calls.inc"
}
}
