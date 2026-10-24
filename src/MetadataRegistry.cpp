// Original 0x667260: circuit factories and member-property reflection metadata.
// Class/property identities are backed by original RTTI and string references.
#include <stdint.h>
#include <stddef.h>

namespace MetadataReconstruction {
using Factory = void* (*)();
struct Entry { uint32_t id, padding; Factory create; Entry* next; };
struct Vector { void* begin; void* end; void* capacity; };
struct PackedProperty { uint32_t flags, member_offset; };
struct Property { const void** vtable; Property* next; const char* name; };
struct VariableProperty : Property { PackedProperty flags_and_offset; };
#include "metadata_accessors.inc"
// Opaque owner: the original accessor signatures are not yet reconstructed.
// A real nonvirtual C++ member pointer retains the function/adjustment ABI.
using Accessor = void (AccessorHost::*)();
using MemberFunction = Accessor;
struct FunctionProperty : Property {
    uint32_t flags, padding;
    MemberFunction getter, setter;
};
static_assert(sizeof(Entry)==24 && sizeof(VariableProperty)==32 && sizeof(FunctionProperty)==64, "original records");
extern "C" {
extern Vector Metadata_FlagVector;
extern const uint32_t Metadata_FlagDefaults[23];
extern unsigned char Metadata_DsoHandle;
__attribute__((malloc)) void* Metadata_Allocate(size_t);
int Metadata_AtExit(void (*)(void*), void*, void*);
void Metadata_DestroyFlagVector(void*);
int __cxa_guard_acquire(uint64_t*);
void __cxa_guard_release(uint64_t*);
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

static __attribute__((always_inline)) inline void link_property(
        uint64_t& guard, Property*& list, Property& property) {
    if (__builtin_expect(!(__atomic_load_n(reinterpret_cast<uint8_t*>(&guard), __ATOMIC_ACQUIRE) & 1), 0)) {
        if (__cxa_guard_acquire(&guard)) {
            list = nullptr;
            __cxa_guard_release(&guard);
        }
    }
    property.next = list;
    list = &property;
}

static __attribute__((always_inline)) inline void register_variable_property(
        uint64_t& guard, Property*& list, VariableProperty& property,
        const void** vtable, const char* name, uint32_t flags, uint32_t member_offset) {
    property.next = nullptr;
    property.name = name;
    property.vtable = vtable;
    property.flags_and_offset = {flags, member_offset};
    link_property(guard, list, property);
}

static __attribute__((always_inline)) inline void register_function_property(
        uint64_t& guard, Property*& list, FunctionProperty& property,
        const void** vtable, const char* name, uint32_t flags, Accessor getter, Accessor setter) {
    property.next = nullptr;
    property.name = name;
    property.flags = flags;
    property.vtable = vtable;
    property.getter = getter;
    property.setter = setter;
    link_property(guard, list, property);
}

#include "metadata_declarations.inc"

extern "C" void InitializeMetadataRegistryCandidate() {
    Metadata_FlagVector.begin = nullptr;
    Metadata_FlagVector.end = nullptr;
    Metadata_FlagVector.capacity = nullptr;
    void* values = Metadata_Allocate(sizeof(Metadata_FlagDefaults));
    Metadata_FlagVector.begin = values;
    Metadata_FlagVector.end = values;
    Metadata_FlagVector.capacity = static_cast<char*>(values) + sizeof(Metadata_FlagDefaults);
    __builtin_memcpy(values, Metadata_FlagDefaults, sizeof(Metadata_FlagDefaults));
    Metadata_FlagVector.end = static_cast<char*>(values) + sizeof(Metadata_FlagDefaults);
    Metadata_AtExit(Metadata_DestroyFlagVector, &Metadata_FlagVector, &Metadata_DsoHandle);
#include "metadata_calls.inc"
}
}
