// Recovered copied-field and polymorphic-construction ABI views.
// Original class identities, complete signatures, field types and untouched fields remain unknown.
#include <stdint.h>
#include <stddef.h>
typedef unsigned char CloneVector __attribute__((vector_size(16),aligned(1)));
inline void* operator new(size_t,void* address) noexcept {return address;}
#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define LEAF_CHECK LeafAddedSideEffect();
#else
#define LEAF_CHECK
#endif
extern "C" void* CloneAllocate_28f460(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneDerived_28f460 {
    virtual ~CloneDerived_28f460();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    __attribute__((always_inline)) CloneDerived_28f460(const CloneDerived_28f460& source):field_8(source.field_8),field_16(source.field_16){}
};
static_assert(sizeof(CloneDerived_28f460)==24,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_28f460* RecoveredClone_28f460(const CloneDerived_28f460* self) {LEAF_CHECK return new(CloneAllocate_28f460(24,8,0x41202000u,nullptr,"",0))CloneDerived_28f460(*self);}

extern "C" void* CloneAllocate_292140(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneDerived_292140 {
    virtual ~CloneDerived_292140();
    uint64_t field_8;
    uint64_t field_16;
    uint32_t field_24;
    unsigned char unknown_28[4];
    __attribute__((always_inline)) CloneDerived_292140(const CloneDerived_292140& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
static_assert(sizeof(CloneDerived_292140)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_292140* RecoveredClone_292140(const CloneDerived_292140* self) {LEAF_CHECK return new(CloneAllocate_292140(32,8,0x41202000u,nullptr,"",0))CloneDerived_292140(*self);}

extern "C" void* CloneAllocate_2f8150(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneDerived_2f8150 {
    virtual ~CloneDerived_2f8150();
    uint64_t field_8;
    __attribute__((always_inline)) CloneDerived_2f8150(const CloneDerived_2f8150& source):field_8(source.field_8){}
};
static_assert(sizeof(CloneDerived_2f8150)==16,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_2f8150* RecoveredClone_2f8150(const CloneDerived_2f8150* self) {LEAF_CHECK return new(CloneAllocate_2f8150(16,8,0x41202000u,nullptr,"",0))CloneDerived_2f8150(*self);}

extern "C" void* CloneAllocate_2f8cb0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneDerived_2f8cb0 {
    virtual ~CloneDerived_2f8cb0();
    uint64_t field_8;
    __attribute__((always_inline)) CloneDerived_2f8cb0(const CloneDerived_2f8cb0& source):field_8(source.field_8){}
};
static_assert(sizeof(CloneDerived_2f8cb0)==16,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_2f8cb0* RecoveredClone_2f8cb0(const CloneDerived_2f8cb0* self) {LEAF_CHECK return new(CloneAllocate_2f8cb0(16,8,0x41202000u,nullptr,"",0))CloneDerived_2f8cb0(*self);}

extern "C" void* CloneAllocate_43b3a0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneDerived_43b3a0 {
    virtual ~CloneDerived_43b3a0();
    uint64_t field_8;
    __attribute__((always_inline)) CloneDerived_43b3a0(const CloneDerived_43b3a0& source):field_8(source.field_8){}
};
static_assert(sizeof(CloneDerived_43b3a0)==16,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_43b3a0* RecoveredClone_43b3a0(const CloneDerived_43b3a0* self) {LEAF_CHECK return new(CloneAllocate_43b3a0(16,8,0x41202000u,nullptr,"",0))CloneDerived_43b3a0(*self);}

extern "C" void* CloneAllocate_43e620(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneDerived_43e620 {
    virtual ~CloneDerived_43e620();
    uint32_t field_8;
    unsigned char unknown_12[4];
    __attribute__((always_inline)) CloneDerived_43e620(const CloneDerived_43e620& source):field_8(source.field_8){}
};
static_assert(sizeof(CloneDerived_43e620)==16,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_43e620* RecoveredClone_43e620(const CloneDerived_43e620* self) {LEAF_CHECK return new(CloneAllocate_43e620(16,8,0x41202000u,nullptr,"",0))CloneDerived_43e620(*self);}
