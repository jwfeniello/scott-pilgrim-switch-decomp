// Working names and ABI views; complete original declarations remain unknown.
// Component factory: allocator from the service registry, base constructor, array and service members.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t, void* place) noexcept { return place; }
struct Allocator {
    virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(uint32_t size);
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*);
};
struct AllocatorManager { char padding[0x370]; Allocator* allocators[256]; };
extern "C" AllocatorManager* Accessor_Allocators;
extern "C" uint8_t Accessor_AllocatorIndex(AllocatorManager*, void*);
__attribute__((always_inline)) inline Allocator* AllocatorFor(void* object) {
    AllocatorManager* manager = Accessor_Allocators;
    return manager->allocators[Accessor_AllocatorIndex(manager, object)];
}
extern "C" void* Component_Registry;
template<unsigned Key> struct PoolBinding { static unsigned char* context; };
extern "C" void* Registry_Get(void* registry, uint32_t type);
struct ComponentBase { ComponentBase(); virtual ~ComponentBase(); char data[0x68]; };
template<unsigned Key> struct PoolArray {
    void* allocator; uint64_t capacity; uint64_t size; uint64_t reserved; void** data;
    __attribute__((always_inline)) PoolArray() : capacity(0), size(0), data(nullptr) { allocator = PoolBinding<Key>::context + 0x50; }
    __attribute__((always_inline)) ~PoolArray() {
        void** buffer = data;
        size = 0;
        if (buffer) AllocatorFor(buffer)->Free(buffer);
        data = nullptr; capacity = 0; size = 0;
    }
};
template<unsigned Key, uint32_t TypeId> struct ServiceComponent : ComponentBase {
    PoolArray<Key> items; void* service;
    __attribute__((always_inline)) ServiceComponent() : service(Registry_Get(Component_Registry, TypeId)) {}
    ~ServiceComponent() override;
};
template<unsigned Key, uint32_t TypeId> struct LeafComponent : ServiceComponent<Key, TypeId> { __attribute__((always_inline)) LeafComponent() {} ~LeafComponent() override; };
template<unsigned Key, uint32_t TypeId> struct ComponentFactory { static ComponentBase* Create(); };
template<unsigned Key, uint32_t TypeId> ComponentBase* ComponentFactory<Key, TypeId>::Create() {
    Allocator* allocator = static_cast<Allocator*>(Registry_Get(Component_Registry, 0x07b73c94u));
    return new (allocator->Allocate(sizeof(LeafComponent<Key, TypeId>))) LeafComponent<Key, TypeId>;
}
#define SERVICE_COMPONENT_FACTORY(Key, TypeId) template struct ComponentFactory<Key, TypeId>;
