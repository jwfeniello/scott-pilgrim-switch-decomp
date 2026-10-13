// Working names and touched-field ABI views; original complete declarations remain unknown.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t,void* address) noexcept{return address;}
struct ConstructSharedControl {virtual ~ConstructSharedControl();virtual void OnZero() noexcept;uint64_t references;};
extern void ConstructSharedDelete(void*) noexcept;
inline __attribute__((always_inline)) void ConstructSharedRelease(ConstructSharedControl* control) noexcept {
    if(control && __atomic_fetch_sub(&control->references,1,__ATOMIC_ACQ_REL)==0){control->OnZero();ConstructSharedDelete(control);}
}
struct ConstructSharedPair {
    void* data;ConstructSharedControl* control;
    ConstructSharedPair() noexcept:data(nullptr),control(nullptr){}
    __attribute__((always_inline)) ConstructSharedPair(const ConstructSharedPair& source) noexcept:data(source.data),control(source.control){if(control)__atomic_fetch_add(&control->references,1,__ATOMIC_RELAXED);}
    __attribute__((always_inline)) ~ConstructSharedPair() noexcept {ConstructSharedRelease(control);}
    __attribute__((always_inline)) ConstructSharedPair& operator=(const ConstructSharedPair& source) noexcept {
        ConstructSharedPair temporary(source);
        void* saved_data=data;auto saved_control=control;data=temporary.data;control=temporary.control;temporary.data=saved_data;temporary.control=saved_control;return *this;
    }
};
template<unsigned Key> struct SharedConstructionBase {virtual ~SharedConstructionBase();char unknown[0x28];SharedConstructionBase(const void*,const uint64_t*) noexcept;};
template<unsigned Key> struct SharedConstructionA : SharedConstructionBase<Key> {
    ConstructSharedPair member;virtual ~SharedConstructionA();
    __attribute__((always_inline)) SharedConstructionA(const void* key,uint64_t context,ConstructSharedPair owner) noexcept:SharedConstructionBase<Key>(key,&context){member=owner;}
};
template<unsigned Key> struct SharedConstructionB : SharedConstructionA<Key> {
    virtual ~SharedConstructionB();
    __attribute__((always_inline)) SharedConstructionB(const void* key,uint64_t context,ConstructSharedPair owner) noexcept:SharedConstructionA<Key>(key,context,owner){}
};
template<unsigned Key> struct SharedConstructionFinal : SharedConstructionB<Key> {
    virtual ~SharedConstructionFinal();
    __attribute__((always_inline)) SharedConstructionFinal(const void* key,uint64_t context,const ConstructSharedPair& owner) noexcept:SharedConstructionB<Key>(key,context,owner){}
};
template<unsigned Key> __attribute__((noinline)) void ConstructSharedCallback(void* self,const void* key,const uint64_t* context,const ConstructSharedPair& owner) noexcept {
    new(self)SharedConstructionFinal<Key>(key,*context,owner);
}
#define SHARED_CALLBACK_CONSTRUCTION(Key) template void ConstructSharedCallback<Key>(void*,const void*,const uint64_t*,const ConstructSharedPair&) noexcept;
#include "shared_callback_construction_instances.inc"
#undef SHARED_CALLBACK_CONSTRUCTION
