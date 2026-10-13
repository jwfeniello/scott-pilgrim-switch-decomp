// Complete small factory bodies recovered from the three original registries.
// Allocation sizes and type IDs are C++ constants; addresses use ELF relocations.
#include <stddef.h>
#include <stdint.h>

namespace GenericFactoryReconstruction {
struct Allocator;
struct AllocatorVtable {
    void* reserved[2];
    void* (*allocate)(Allocator*, size_t);
};
struct Allocator { AllocatorVtable* vtable; };
struct Context { unsigned char reserved[0x558]; Allocator* primary; };
struct Header { const void** vtable; };
struct HeaderWithValue { const void** vtable; uintptr_t value; };
static_assert(offsetof(Context, primary)==0x558, "allocator context layout");
static_assert(offsetof(AllocatorVtable, allocate)==0x10, "allocator virtual slot");

extern "C" {
extern Context* GenericFactoryContext;
extern void* GenericFactoryManager;
Allocator* GenericFactoryResolve(void*, uint32_t);
}

template<size_t Size, bool ClearValue>
static __attribute__((always_inline)) inline void* direct_factory(const void** vtable) {
    static_assert(Size >= (ClearValue ? sizeof(HeaderWithValue) : sizeof(Header)), "allocated header fits");
    Allocator* allocator=GenericFactoryContext->primary;
    Header* result=static_cast<Header*>(allocator->vtable->allocate(allocator, Size));
    result->vtable=vtable;
    if (ClearValue) static_cast<HeaderWithValue*>(static_cast<void*>(result))->value=0;
    return result;
}

#define DIRECT_FACTORY(Name, Vtable, Size, ClearValue) \
    extern "C" const void* Vtable[]; \
    extern "C" void* Name() { return direct_factory<Size, ClearValue>(Vtable); }

#define CONSTRUCTOR_FACTORY(Name, Construct, TypeId, Size) \
    extern "C" void Construct(void*); \
    extern "C" void* Name() { \
        Allocator* allocator=GenericFactoryResolve(GenericFactoryManager, TypeId); \
        void* result=allocator->vtable->allocate(allocator, Size); \
        Construct(result); \
        return result; \
    }

#include "generic_factory_definitions.inc"
}
