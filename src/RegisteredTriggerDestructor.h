// Working names and ABI views; complete original declarations remain unknown.
// Destructor of two registered owned objects: unregister if flagged, destroy, free.
#include <stdint.h>
struct Allocator {
    virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(uint32_t);
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*);
};
struct AllocatorManager { char padding[0x370]; Allocator* allocators[256]; };
extern "C" AllocatorManager* Accessor_Allocators;
extern "C" uint8_t Accessor_AllocatorIndex(AllocatorManager*, void*);
__attribute__((always_inline)) inline Allocator* AllocatorFor(void* object) {
    AllocatorManager* manager = Accessor_Allocators;
    return manager->allocators[Accessor_AllocatorIndex(manager, object)];
}
template<unsigned Key, unsigned Which> struct OwnedObject { virtual ~OwnedObject(); };
template<unsigned Key, unsigned Which> struct ObjectOwner {
    OwnedObject<Key, Which>* object;
    ~ObjectOwner() {
        if (OwnedObject<Key, Which>* o = object) {
            Allocator* a = AllocatorFor(o);
            o->~OwnedObject();
            a->Free(o);
        }
    }
};
template<unsigned Key, unsigned Which> struct Registration {
    ObjectOwner<Key, Which> owner; char padding[8]; bool registered;
    void Unregister();
    __attribute__((always_inline)) ~Registration() { if (registered) Unregister(); }
};
template<unsigned Key, unsigned A> struct TriggerBase { virtual ~TriggerBase(); char data[A - 8]; };
template<unsigned Key, unsigned A, unsigned B> struct Trigger : TriggerBase<Key, A> {
    Registration<Key, 0> first;
    char gap[B - A - 0x18];
    Registration<Key, 1> second;
    ~Trigger() override;
};
template<unsigned Key, unsigned A, unsigned B> Trigger<Key, A, B>::~Trigger() {}
#define REGISTERED_TRIGGER(Key, A, B) template struct Trigger<Key, A, B>;
