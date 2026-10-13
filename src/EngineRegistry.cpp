// Reconstructed complete initializer at original 0x652490 (78,712 bytes).
// Names describe observed behavior; factory types are tracked separately.
#include <stdint.h>
#include <stddef.h>
namespace EngineRegistryReconstruction {
using Factory = void* (*)();
struct Entry { uint32_t id, padding; Factory create; Entry* next; };
struct Vector { void* begin; void* end; void* capacity; };
struct Vec3 { float x, y, z; };
struct Endpoint { uint32_t address; uint16_t port, padding; };
using Vec4 = float __attribute__((vector_size(16)));
extern "C" {
__attribute__((malloc)) void* Engine_Allocate(size_t);
int Engine_AtExit(void (*)(void*), void*, void*);
int __cxa_guard_acquire(uint64_t*);
void __cxa_guard_release(uint64_t*);
void Engine_DestroyFlags(void*);
extern unsigned char Engine_DsoHandle;
extern Vector Engine_FlagVector;
extern const uint32_t Engine_FlagDefaults[23];
extern uint64_t Engine_SpecialConstant;
extern uint64_t Engine_VectorGuard;
extern Vec3 Engine_DefaultVector, Engine_VectorCopyA, Engine_VectorCopyB;
extern uint32_t Engine_ColorA, Engine_ColorB, Engine_ColorC;
extern Vec3 Engine_SixVector;
extern uint32_t Engine_SourceWord;
using Vec2 = float __attribute__((vector_size(8)));
struct __attribute__((packed)) UnitDefaults { float first; Vec2 pair; uint32_t last; };
static_assert(sizeof(UnitDefaults) == 16 && offsetof(UnitDefaults, pair) == 4,
              "unaligned middle pair in four-component defaults");
extern UnitDefaults Engine_UnitVector;
alignas(8) extern float Engine_EightPair[2];
extern Vec4 Engine_Quad[6], Engine_Cube[27];
extern const Vec4 Engine_C0, Engine_C1, Engine_C2, Engine_C3;
extern const Vec4 Engine_C4, Engine_C5, Engine_C6, Engine_C7;
extern const Vec4 Engine_C8, Engine_C9, Engine_C10, Engine_C11, Engine_C12;
extern uint64_t Engine_NetworkInvalidA, Engine_NetworkZero, Engine_NetworkInvalidB;
extern uint32_t Engine_Loopback, Engine_Broadcast, Engine_AnyAddress;
extern Endpoint Engine_EmptyEndpoint, Engine_InvalidEndpoint;
extern uint64_t Engine_NetworkSize;
uint32_t Engine_MakeIpv4(uint8_t, uint8_t, uint8_t, uint8_t);
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


static __attribute__((always_inline)) inline void copy_default_vector(Vec3& destination) {
    if (__builtin_expect(!(__atomic_load_n(reinterpret_cast<uint8_t*>(&Engine_VectorGuard), __ATOMIC_ACQUIRE) & 1), 0)) {
        if (__cxa_guard_acquire(&Engine_VectorGuard)) {
            Engine_DefaultVector = {0, 0, 0};
            __cxa_guard_release(&Engine_VectorGuard);
        }
    }
    __builtin_memcpy(&destination, &Engine_DefaultVector, 8);
    __builtin_memcpy(reinterpret_cast<char*>(&destination) + 8,
                     reinterpret_cast<char*>(&Engine_DefaultVector) + 8, 4);
}
static __attribute__((always_inline)) inline void initialize_network() {
    Engine_NetworkInvalidA = ~uint64_t(0);
    Engine_NetworkZero = 0;
    Engine_NetworkInvalidB = ~uint64_t(0);
    Engine_Loopback = Engine_MakeIpv4(127,0,0,1);
    Engine_Broadcast = Engine_MakeIpv4(255,255,255,255);
    Engine_AnyAddress = Engine_MakeIpv4(0,0,0,0);
    Engine_EmptyEndpoint.port = 0;
    Engine_EmptyEndpoint.address = 0;
    Engine_InvalidEndpoint.port = 0xffff;
    Engine_InvalidEndpoint.address = ~uint32_t(0);
    Engine_NetworkSize = 56;
}
#include "engine_registry_declarations.inc"
extern "C" void InitializeEngineRegistryCandidate() {
    Engine_FlagVector.begin = nullptr;
    Engine_FlagVector.end = nullptr;
    Engine_FlagVector.capacity = nullptr;
    void* values = Engine_Allocate(sizeof(Engine_FlagDefaults));
    Engine_FlagVector.begin = values;
    Engine_FlagVector.end = values;
    Engine_FlagVector.capacity = static_cast<char*>(values) + sizeof(Engine_FlagDefaults);
    __builtin_memcpy(values, Engine_FlagDefaults, sizeof(Engine_FlagDefaults));
    Engine_FlagVector.end = static_cast<char*>(values) + sizeof(Engine_FlagDefaults);
    Engine_AtExit(Engine_DestroyFlags, &Engine_FlagVector, &Engine_DsoHandle);
#include "engine_registry_calls.inc"
}
}
