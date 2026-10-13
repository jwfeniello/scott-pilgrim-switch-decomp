// Working names and touched-field ABI views; original complete declarations remain unknown.
// Reconstructed family; names and complete original ABI declarations are unknown.
#include <stdint.h>
inline void* operator new(__SIZE_TYPE__,void* place) noexcept { return place; }
struct FactoryResult { uint64_t first,second,third; };
struct ConstructionBase { virtual ~ConstructionBase() noexcept; };
template<unsigned Key> struct ConstructedType : ConstructionBase { ~ConstructedType() noexcept override {} };
struct ConstructionContext {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Slot6(); virtual void Slot7(); virtual void Slot8();
    virtual void* GetContext() noexcept;
};
struct ConstructionFactory {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3();
    virtual FactoryResult Construct(void*,ConstructionBase**);
};
extern void* AllocateConstruction(uint32_t,void*,const char*,uint32_t);
extern void FreeConstruction(void*,void*,const char*,uint32_t) noexcept;

template<unsigned Key> struct FactoryBinding { static ConstructionFactory* factory; };
struct ConstructionOwner {
    ConstructionBase* object;
    ~ConstructionOwner() noexcept {
        ConstructionBase* old=object;
        object=nullptr;
        if (old) {
            auto vtable=*reinterpret_cast<intptr_t**>(old);
            void* allocation=reinterpret_cast<char*>(old)+vtable[-2];
            old->~ConstructionBase();
            FreeConstruction(allocation,nullptr,"",0);
        }
    }
};
template<unsigned Key>
__attribute__((noinline)) FactoryResult ConstructThroughFactoryOmit(ConstructionContext* context) {
    ConstructionFactory* factory=FactoryBinding<Key>::factory;
    void* resolved=context->GetContext();
    auto storage=AllocateConstruction(sizeof(ConstructedType<Key>),nullptr,"",0);
    ConstructionOwner owner={new(storage) ConstructedType<Key>};
    return factory->Construct(resolved,&owner.object);
}
#define FACTORY_CONSTRUCTION_OMIT(Key) template FactoryResult ConstructThroughFactoryOmit<Key>(ConstructionContext*);
#include "factory_construction_omit_instances.inc"
#undef FACTORY_CONSTRUCTION_OMIT
