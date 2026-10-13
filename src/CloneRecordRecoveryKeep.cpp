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
extern "C" void* CloneAllocate_26ed80(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_26ed80 {
    virtual ~CloneBase_26ed80();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_26ed80(const CloneBase_26ed80& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_26ed80 : CloneBase_26ed80 {virtual ~CloneDerived_26ed80();__attribute__((always_inline)) CloneDerived_26ed80(const CloneDerived_26ed80& source):CloneBase_26ed80(source){}};
static_assert(sizeof(CloneDerived_26ed80)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_26ed80* RecoveredClone_26ed80(const CloneDerived_26ed80* self) {LEAF_CHECK return new(CloneAllocate_26ed80(32,8,0x41202003u,nullptr,"",0))CloneDerived_26ed80(*self);}

extern "C" void* CloneAllocate_26f0e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_26f0e0 {
    virtual ~CloneBase_26f0e0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_26f0e0(const CloneBase_26f0e0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_26f0e0 : CloneBase_26f0e0 {virtual ~CloneDerived_26f0e0();__attribute__((always_inline)) CloneDerived_26f0e0(const CloneDerived_26f0e0& source):CloneBase_26f0e0(source){}};
static_assert(sizeof(CloneDerived_26f0e0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_26f0e0* RecoveredClone_26f0e0(const CloneDerived_26f0e0* self) {LEAF_CHECK return new(CloneAllocate_26f0e0(32,8,0x41202003u,nullptr,"",0))CloneDerived_26f0e0(*self);}

extern "C" void* CloneAllocate_2702d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_2702d0 {
    virtual ~CloneBase_2702d0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_2702d0(const CloneBase_2702d0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_2702d0 : CloneBase_2702d0 {virtual ~CloneDerived_2702d0();__attribute__((always_inline)) CloneDerived_2702d0(const CloneDerived_2702d0& source):CloneBase_2702d0(source){}};
static_assert(sizeof(CloneDerived_2702d0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_2702d0* RecoveredClone_2702d0(const CloneDerived_2702d0* self) {LEAF_CHECK return new(CloneAllocate_2702d0(32,8,0x41202003u,nullptr,"",0))CloneDerived_2702d0(*self);}

extern "C" void* CloneAllocate_28cc20(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_28cc20 {
    virtual ~CloneBase_28cc20();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_28cc20(const CloneBase_28cc20& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_28cc20 : CloneBase_28cc20 {virtual ~CloneDerived_28cc20();__attribute__((always_inline)) CloneDerived_28cc20(const CloneDerived_28cc20& source):CloneBase_28cc20(source){}};
static_assert(sizeof(CloneDerived_28cc20)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_28cc20* RecoveredClone_28cc20(const CloneDerived_28cc20* self) {LEAF_CHECK return new(CloneAllocate_28cc20(32,8,0x41202003u,nullptr,"",0))CloneDerived_28cc20(*self);}

extern "C" void* CloneAllocate_2f87e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_2f87e0 {
    virtual ~CloneBase_2f87e0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    __attribute__((always_inline)) CloneBase_2f87e0(const CloneBase_2f87e0& source):field_8(source.field_8),field_16(source.field_16){}
};
struct CloneDerived_2f87e0 : CloneBase_2f87e0 {virtual ~CloneDerived_2f87e0();__attribute__((always_inline)) CloneDerived_2f87e0(const CloneDerived_2f87e0& source):CloneBase_2f87e0(source){}};
static_assert(sizeof(CloneDerived_2f87e0)==24,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_2f87e0* RecoveredClone_2f87e0(const CloneDerived_2f87e0* self) {LEAF_CHECK return new(CloneAllocate_2f87e0(24,8,0x41202000u,nullptr,"",0))CloneDerived_2f87e0(*self);}

extern "C" void* CloneAllocate_36b7d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_36b7d0 {
    virtual ~CloneBase_36b7d0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_36b7d0(const CloneBase_36b7d0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_36b7d0 : CloneBase_36b7d0 {virtual ~CloneDerived_36b7d0();__attribute__((always_inline)) CloneDerived_36b7d0(const CloneDerived_36b7d0& source):CloneBase_36b7d0(source){}};
static_assert(sizeof(CloneDerived_36b7d0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_36b7d0* RecoveredClone_36b7d0(const CloneDerived_36b7d0* self) {LEAF_CHECK return new(CloneAllocate_36b7d0(32,8,0x41202003u,nullptr,"",0))CloneDerived_36b7d0(*self);}

extern "C" void* CloneAllocate_43dd70(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_43dd70 {
    virtual ~CloneBase_43dd70();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_43dd70(const CloneBase_43dd70& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_43dd70 : CloneBase_43dd70 {virtual ~CloneDerived_43dd70();__attribute__((always_inline)) CloneDerived_43dd70(const CloneDerived_43dd70& source):CloneBase_43dd70(source){}};
static_assert(sizeof(CloneDerived_43dd70)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_43dd70* RecoveredClone_43dd70(const CloneDerived_43dd70* self) {LEAF_CHECK return new(CloneAllocate_43dd70(32,8,0x41202003u,nullptr,"",0))CloneDerived_43dd70(*self);}

extern "C" void* CloneAllocate_47f350(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_47f350 {
    virtual ~CloneBase_47f350();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_47f350(const CloneBase_47f350& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_47f350 : CloneBase_47f350 {virtual ~CloneDerived_47f350();__attribute__((always_inline)) CloneDerived_47f350(const CloneDerived_47f350& source):CloneBase_47f350(source){}};
static_assert(sizeof(CloneDerived_47f350)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_47f350* RecoveredClone_47f350(const CloneDerived_47f350* self) {LEAF_CHECK return new(CloneAllocate_47f350(32,8,0x41202003u,nullptr,"",0))CloneDerived_47f350(*self);}

extern "C" void* CloneAllocate_4bab20(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bab20 {
    virtual ~CloneBase_4bab20();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bab20(const CloneBase_4bab20& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bab20 : CloneBase_4bab20 {virtual ~CloneDerived_4bab20();__attribute__((always_inline)) CloneDerived_4bab20(const CloneDerived_4bab20& source):CloneBase_4bab20(source){}};
static_assert(sizeof(CloneDerived_4bab20)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bab20* RecoveredClone_4bab20(const CloneDerived_4bab20* self) {LEAF_CHECK return new(CloneAllocate_4bab20(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bab20(*self);}

extern "C" void* CloneAllocate_4bb010(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bb010 {
    virtual ~CloneBase_4bb010();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bb010(const CloneBase_4bb010& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bb010 : CloneBase_4bb010 {virtual ~CloneDerived_4bb010();__attribute__((always_inline)) CloneDerived_4bb010(const CloneDerived_4bb010& source):CloneBase_4bb010(source){}};
static_assert(sizeof(CloneDerived_4bb010)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bb010* RecoveredClone_4bb010(const CloneDerived_4bb010* self) {LEAF_CHECK return new(CloneAllocate_4bb010(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bb010(*self);}

extern "C" void* CloneAllocate_4bb500(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bb500 {
    virtual ~CloneBase_4bb500();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bb500(const CloneBase_4bb500& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bb500 : CloneBase_4bb500 {virtual ~CloneDerived_4bb500();__attribute__((always_inline)) CloneDerived_4bb500(const CloneDerived_4bb500& source):CloneBase_4bb500(source){}};
static_assert(sizeof(CloneDerived_4bb500)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bb500* RecoveredClone_4bb500(const CloneDerived_4bb500* self) {LEAF_CHECK return new(CloneAllocate_4bb500(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bb500(*self);}

extern "C" void* CloneAllocate_4bb9f0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bb9f0 {
    virtual ~CloneBase_4bb9f0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bb9f0(const CloneBase_4bb9f0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bb9f0 : CloneBase_4bb9f0 {virtual ~CloneDerived_4bb9f0();__attribute__((always_inline)) CloneDerived_4bb9f0(const CloneDerived_4bb9f0& source):CloneBase_4bb9f0(source){}};
static_assert(sizeof(CloneDerived_4bb9f0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bb9f0* RecoveredClone_4bb9f0(const CloneDerived_4bb9f0* self) {LEAF_CHECK return new(CloneAllocate_4bb9f0(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bb9f0(*self);}

extern "C" void* CloneAllocate_4bbee0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bbee0 {
    virtual ~CloneBase_4bbee0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bbee0(const CloneBase_4bbee0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bbee0 : CloneBase_4bbee0 {virtual ~CloneDerived_4bbee0();__attribute__((always_inline)) CloneDerived_4bbee0(const CloneDerived_4bbee0& source):CloneBase_4bbee0(source){}};
static_assert(sizeof(CloneDerived_4bbee0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bbee0* RecoveredClone_4bbee0(const CloneDerived_4bbee0* self) {LEAF_CHECK return new(CloneAllocate_4bbee0(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bbee0(*self);}

extern "C" void* CloneAllocate_4bc3d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bc3d0 {
    virtual ~CloneBase_4bc3d0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bc3d0(const CloneBase_4bc3d0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bc3d0 : CloneBase_4bc3d0 {virtual ~CloneDerived_4bc3d0();__attribute__((always_inline)) CloneDerived_4bc3d0(const CloneDerived_4bc3d0& source):CloneBase_4bc3d0(source){}};
static_assert(sizeof(CloneDerived_4bc3d0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bc3d0* RecoveredClone_4bc3d0(const CloneDerived_4bc3d0* self) {LEAF_CHECK return new(CloneAllocate_4bc3d0(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bc3d0(*self);}

extern "C" void* CloneAllocate_4bc8c0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bc8c0 {
    virtual ~CloneBase_4bc8c0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bc8c0(const CloneBase_4bc8c0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bc8c0 : CloneBase_4bc8c0 {virtual ~CloneDerived_4bc8c0();__attribute__((always_inline)) CloneDerived_4bc8c0(const CloneDerived_4bc8c0& source):CloneBase_4bc8c0(source){}};
static_assert(sizeof(CloneDerived_4bc8c0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bc8c0* RecoveredClone_4bc8c0(const CloneDerived_4bc8c0* self) {LEAF_CHECK return new(CloneAllocate_4bc8c0(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bc8c0(*self);}

extern "C" void* CloneAllocate_4bcdb0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bcdb0 {
    virtual ~CloneBase_4bcdb0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bcdb0(const CloneBase_4bcdb0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bcdb0 : CloneBase_4bcdb0 {virtual ~CloneDerived_4bcdb0();__attribute__((always_inline)) CloneDerived_4bcdb0(const CloneDerived_4bcdb0& source):CloneBase_4bcdb0(source){}};
static_assert(sizeof(CloneDerived_4bcdb0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bcdb0* RecoveredClone_4bcdb0(const CloneDerived_4bcdb0* self) {LEAF_CHECK return new(CloneAllocate_4bcdb0(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bcdb0(*self);}

extern "C" void* CloneAllocate_4bd2a0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bd2a0 {
    virtual ~CloneBase_4bd2a0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bd2a0(const CloneBase_4bd2a0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bd2a0 : CloneBase_4bd2a0 {virtual ~CloneDerived_4bd2a0();__attribute__((always_inline)) CloneDerived_4bd2a0(const CloneDerived_4bd2a0& source):CloneBase_4bd2a0(source){}};
static_assert(sizeof(CloneDerived_4bd2a0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bd2a0* RecoveredClone_4bd2a0(const CloneDerived_4bd2a0* self) {LEAF_CHECK return new(CloneAllocate_4bd2a0(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bd2a0(*self);}

extern "C" void* CloneAllocate_4bd790(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bd790 {
    virtual ~CloneBase_4bd790();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bd790(const CloneBase_4bd790& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bd790 : CloneBase_4bd790 {virtual ~CloneDerived_4bd790();__attribute__((always_inline)) CloneDerived_4bd790(const CloneDerived_4bd790& source):CloneBase_4bd790(source){}};
static_assert(sizeof(CloneDerived_4bd790)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bd790* RecoveredClone_4bd790(const CloneDerived_4bd790* self) {LEAF_CHECK return new(CloneAllocate_4bd790(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bd790(*self);}

extern "C" void* CloneAllocate_4bdc80(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bdc80 {
    virtual ~CloneBase_4bdc80();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bdc80(const CloneBase_4bdc80& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bdc80 : CloneBase_4bdc80 {virtual ~CloneDerived_4bdc80();__attribute__((always_inline)) CloneDerived_4bdc80(const CloneDerived_4bdc80& source):CloneBase_4bdc80(source){}};
static_assert(sizeof(CloneDerived_4bdc80)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bdc80* RecoveredClone_4bdc80(const CloneDerived_4bdc80* self) {LEAF_CHECK return new(CloneAllocate_4bdc80(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bdc80(*self);}

extern "C" void* CloneAllocate_4be170(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4be170 {
    virtual ~CloneBase_4be170();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4be170(const CloneBase_4be170& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4be170 : CloneBase_4be170 {virtual ~CloneDerived_4be170();__attribute__((always_inline)) CloneDerived_4be170(const CloneDerived_4be170& source):CloneBase_4be170(source){}};
static_assert(sizeof(CloneDerived_4be170)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4be170* RecoveredClone_4be170(const CloneDerived_4be170* self) {LEAF_CHECK return new(CloneAllocate_4be170(32,8,0x41202003u,nullptr,"",0))CloneDerived_4be170(*self);}

extern "C" void* CloneAllocate_4be660(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4be660 {
    virtual ~CloneBase_4be660();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4be660(const CloneBase_4be660& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4be660 : CloneBase_4be660 {virtual ~CloneDerived_4be660();__attribute__((always_inline)) CloneDerived_4be660(const CloneDerived_4be660& source):CloneBase_4be660(source){}};
static_assert(sizeof(CloneDerived_4be660)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4be660* RecoveredClone_4be660(const CloneDerived_4be660* self) {LEAF_CHECK return new(CloneAllocate_4be660(32,8,0x41202003u,nullptr,"",0))CloneDerived_4be660(*self);}

extern "C" void* CloneAllocate_4beb50(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4beb50 {
    virtual ~CloneBase_4beb50();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4beb50(const CloneBase_4beb50& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4beb50 : CloneBase_4beb50 {virtual ~CloneDerived_4beb50();__attribute__((always_inline)) CloneDerived_4beb50(const CloneDerived_4beb50& source):CloneBase_4beb50(source){}};
static_assert(sizeof(CloneDerived_4beb50)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4beb50* RecoveredClone_4beb50(const CloneDerived_4beb50* self) {LEAF_CHECK return new(CloneAllocate_4beb50(32,8,0x41202003u,nullptr,"",0))CloneDerived_4beb50(*self);}

extern "C" void* CloneAllocate_4bf060(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bf060 {
    virtual ~CloneBase_4bf060();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bf060(const CloneBase_4bf060& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bf060 : CloneBase_4bf060 {virtual ~CloneDerived_4bf060();__attribute__((always_inline)) CloneDerived_4bf060(const CloneDerived_4bf060& source):CloneBase_4bf060(source){}};
static_assert(sizeof(CloneDerived_4bf060)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bf060* RecoveredClone_4bf060(const CloneDerived_4bf060* self) {LEAF_CHECK return new(CloneAllocate_4bf060(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bf060(*self);}

extern "C" void* CloneAllocate_4bf550(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_4bf550 {
    virtual ~CloneBase_4bf550();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_4bf550(const CloneBase_4bf550& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_4bf550 : CloneBase_4bf550 {virtual ~CloneDerived_4bf550();__attribute__((always_inline)) CloneDerived_4bf550(const CloneDerived_4bf550& source):CloneBase_4bf550(source){}};
static_assert(sizeof(CloneDerived_4bf550)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_4bf550* RecoveredClone_4bf550(const CloneDerived_4bf550* self) {LEAF_CHECK return new(CloneAllocate_4bf550(32,8,0x41202003u,nullptr,"",0))CloneDerived_4bf550(*self);}

extern "C" void* CloneAllocate_60d0f0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_60d0f0 {
    virtual ~CloneBase_60d0f0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_60d0f0(const CloneBase_60d0f0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_60d0f0 : CloneBase_60d0f0 {virtual ~CloneDerived_60d0f0();__attribute__((always_inline)) CloneDerived_60d0f0(const CloneDerived_60d0f0& source):CloneBase_60d0f0(source){}};
static_assert(sizeof(CloneDerived_60d0f0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_60d0f0* RecoveredClone_60d0f0(const CloneDerived_60d0f0* self) {LEAF_CHECK return new(CloneAllocate_60d0f0(32,8,0x41202003u,nullptr,"",0))CloneDerived_60d0f0(*self);}

extern "C" void* CloneAllocate_60d3e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_60d3e0 {
    virtual ~CloneBase_60d3e0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_60d3e0(const CloneBase_60d3e0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_60d3e0 : CloneBase_60d3e0 {virtual ~CloneDerived_60d3e0();__attribute__((always_inline)) CloneDerived_60d3e0(const CloneDerived_60d3e0& source):CloneBase_60d3e0(source){}};
static_assert(sizeof(CloneDerived_60d3e0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_60d3e0* RecoveredClone_60d3e0(const CloneDerived_60d3e0* self) {LEAF_CHECK return new(CloneAllocate_60d3e0(32,8,0x41202003u,nullptr,"",0))CloneDerived_60d3e0(*self);}

extern "C" void* CloneAllocate_60d6d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_60d6d0 {
    virtual ~CloneBase_60d6d0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_60d6d0(const CloneBase_60d6d0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_60d6d0 : CloneBase_60d6d0 {virtual ~CloneDerived_60d6d0();__attribute__((always_inline)) CloneDerived_60d6d0(const CloneDerived_60d6d0& source):CloneBase_60d6d0(source){}};
static_assert(sizeof(CloneDerived_60d6d0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_60d6d0* RecoveredClone_60d6d0(const CloneDerived_60d6d0* self) {LEAF_CHECK return new(CloneAllocate_60d6d0(32,8,0x41202003u,nullptr,"",0))CloneDerived_60d6d0(*self);}

extern "C" void* CloneAllocate_60d9c0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_60d9c0 {
    virtual ~CloneBase_60d9c0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_60d9c0(const CloneBase_60d9c0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_60d9c0 : CloneBase_60d9c0 {virtual ~CloneDerived_60d9c0();__attribute__((always_inline)) CloneDerived_60d9c0(const CloneDerived_60d9c0& source):CloneBase_60d9c0(source){}};
static_assert(sizeof(CloneDerived_60d9c0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_60d9c0* RecoveredClone_60d9c0(const CloneDerived_60d9c0* self) {LEAF_CHECK return new(CloneAllocate_60d9c0(32,8,0x41202003u,nullptr,"",0))CloneDerived_60d9c0(*self);}

extern "C" void* CloneAllocate_60dcb0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_60dcb0 {
    virtual ~CloneBase_60dcb0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_60dcb0(const CloneBase_60dcb0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_60dcb0 : CloneBase_60dcb0 {virtual ~CloneDerived_60dcb0();__attribute__((always_inline)) CloneDerived_60dcb0(const CloneDerived_60dcb0& source):CloneBase_60dcb0(source){}};
static_assert(sizeof(CloneDerived_60dcb0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_60dcb0* RecoveredClone_60dcb0(const CloneDerived_60dcb0* self) {LEAF_CHECK return new(CloneAllocate_60dcb0(32,8,0x41202003u,nullptr,"",0))CloneDerived_60dcb0(*self);}

extern "C" void* CloneAllocate_60dfa0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_60dfa0 {
    virtual ~CloneBase_60dfa0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_60dfa0(const CloneBase_60dfa0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_60dfa0 : CloneBase_60dfa0 {virtual ~CloneDerived_60dfa0();__attribute__((always_inline)) CloneDerived_60dfa0(const CloneDerived_60dfa0& source):CloneBase_60dfa0(source){}};
static_assert(sizeof(CloneDerived_60dfa0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_60dfa0* RecoveredClone_60dfa0(const CloneDerived_60dfa0* self) {LEAF_CHECK return new(CloneAllocate_60dfa0(32,8,0x41202003u,nullptr,"",0))CloneDerived_60dfa0(*self);}

extern "C" void* CloneAllocate_60fff0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_60fff0 {
    virtual ~CloneBase_60fff0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_60fff0(const CloneBase_60fff0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_60fff0 : CloneBase_60fff0 {virtual ~CloneDerived_60fff0();__attribute__((always_inline)) CloneDerived_60fff0(const CloneDerived_60fff0& source):CloneBase_60fff0(source){}};
static_assert(sizeof(CloneDerived_60fff0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_60fff0* RecoveredClone_60fff0(const CloneDerived_60fff0* self) {LEAF_CHECK return new(CloneAllocate_60fff0(32,8,0x41202003u,nullptr,"",0))CloneDerived_60fff0(*self);}

extern "C" void* CloneAllocate_6102e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_6102e0 {
    virtual ~CloneBase_6102e0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_6102e0(const CloneBase_6102e0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_6102e0 : CloneBase_6102e0 {virtual ~CloneDerived_6102e0();__attribute__((always_inline)) CloneDerived_6102e0(const CloneDerived_6102e0& source):CloneBase_6102e0(source){}};
static_assert(sizeof(CloneDerived_6102e0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_6102e0* RecoveredClone_6102e0(const CloneDerived_6102e0* self) {LEAF_CHECK return new(CloneAllocate_6102e0(32,8,0x41202003u,nullptr,"",0))CloneDerived_6102e0(*self);}

extern "C" void* CloneAllocate_615ee0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_615ee0 {
    virtual ~CloneBase_615ee0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_615ee0(const CloneBase_615ee0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_615ee0 : CloneBase_615ee0 {virtual ~CloneDerived_615ee0();__attribute__((always_inline)) CloneDerived_615ee0(const CloneDerived_615ee0& source):CloneBase_615ee0(source){}};
static_assert(sizeof(CloneDerived_615ee0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_615ee0* RecoveredClone_615ee0(const CloneDerived_615ee0* self) {LEAF_CHECK return new(CloneAllocate_615ee0(32,8,0x41202003u,nullptr,"",0))CloneDerived_615ee0(*self);}

extern "C" void* CloneAllocate_616390(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_616390 {
    virtual ~CloneBase_616390();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_616390(const CloneBase_616390& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_616390 : CloneBase_616390 {virtual ~CloneDerived_616390();__attribute__((always_inline)) CloneDerived_616390(const CloneDerived_616390& source):CloneBase_616390(source){}};
static_assert(sizeof(CloneDerived_616390)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_616390* RecoveredClone_616390(const CloneDerived_616390* self) {LEAF_CHECK return new(CloneAllocate_616390(32,8,0x41202003u,nullptr,"",0))CloneDerived_616390(*self);}

extern "C" void* CloneAllocate_619b40(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_619b40 {
    virtual ~CloneBase_619b40();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_619b40(const CloneBase_619b40& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_619b40 : CloneBase_619b40 {virtual ~CloneDerived_619b40();__attribute__((always_inline)) CloneDerived_619b40(const CloneDerived_619b40& source):CloneBase_619b40(source){}};
static_assert(sizeof(CloneDerived_619b40)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_619b40* RecoveredClone_619b40(const CloneDerived_619b40* self) {LEAF_CHECK return new(CloneAllocate_619b40(32,8,0x41202003u,nullptr,"",0))CloneDerived_619b40(*self);}

extern "C" void* CloneAllocate_619e30(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_619e30 {
    virtual ~CloneBase_619e30();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_619e30(const CloneBase_619e30& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_619e30 : CloneBase_619e30 {virtual ~CloneDerived_619e30();__attribute__((always_inline)) CloneDerived_619e30(const CloneDerived_619e30& source):CloneBase_619e30(source){}};
static_assert(sizeof(CloneDerived_619e30)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_619e30* RecoveredClone_619e30(const CloneDerived_619e30* self) {LEAF_CHECK return new(CloneAllocate_619e30(32,8,0x41202003u,nullptr,"",0))CloneDerived_619e30(*self);}

extern "C" void* CloneAllocate_61a120(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61a120 {
    virtual ~CloneBase_61a120();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61a120(const CloneBase_61a120& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61a120 : CloneBase_61a120 {virtual ~CloneDerived_61a120();__attribute__((always_inline)) CloneDerived_61a120(const CloneDerived_61a120& source):CloneBase_61a120(source){}};
static_assert(sizeof(CloneDerived_61a120)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61a120* RecoveredClone_61a120(const CloneDerived_61a120* self) {LEAF_CHECK return new(CloneAllocate_61a120(32,8,0x41202003u,nullptr,"",0))CloneDerived_61a120(*self);}

extern "C" void* CloneAllocate_61a410(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61a410 {
    virtual ~CloneBase_61a410();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61a410(const CloneBase_61a410& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61a410 : CloneBase_61a410 {virtual ~CloneDerived_61a410();__attribute__((always_inline)) CloneDerived_61a410(const CloneDerived_61a410& source):CloneBase_61a410(source){}};
static_assert(sizeof(CloneDerived_61a410)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61a410* RecoveredClone_61a410(const CloneDerived_61a410* self) {LEAF_CHECK return new(CloneAllocate_61a410(32,8,0x41202003u,nullptr,"",0))CloneDerived_61a410(*self);}

extern "C" void* CloneAllocate_61a700(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61a700 {
    virtual ~CloneBase_61a700();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61a700(const CloneBase_61a700& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61a700 : CloneBase_61a700 {virtual ~CloneDerived_61a700();__attribute__((always_inline)) CloneDerived_61a700(const CloneDerived_61a700& source):CloneBase_61a700(source){}};
static_assert(sizeof(CloneDerived_61a700)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61a700* RecoveredClone_61a700(const CloneDerived_61a700* self) {LEAF_CHECK return new(CloneAllocate_61a700(32,8,0x41202003u,nullptr,"",0))CloneDerived_61a700(*self);}

extern "C" void* CloneAllocate_61a9f0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61a9f0 {
    virtual ~CloneBase_61a9f0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61a9f0(const CloneBase_61a9f0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61a9f0 : CloneBase_61a9f0 {virtual ~CloneDerived_61a9f0();__attribute__((always_inline)) CloneDerived_61a9f0(const CloneDerived_61a9f0& source):CloneBase_61a9f0(source){}};
static_assert(sizeof(CloneDerived_61a9f0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61a9f0* RecoveredClone_61a9f0(const CloneDerived_61a9f0* self) {LEAF_CHECK return new(CloneAllocate_61a9f0(32,8,0x41202003u,nullptr,"",0))CloneDerived_61a9f0(*self);}

extern "C" void* CloneAllocate_61ace0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61ace0 {
    virtual ~CloneBase_61ace0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61ace0(const CloneBase_61ace0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61ace0 : CloneBase_61ace0 {virtual ~CloneDerived_61ace0();__attribute__((always_inline)) CloneDerived_61ace0(const CloneDerived_61ace0& source):CloneBase_61ace0(source){}};
static_assert(sizeof(CloneDerived_61ace0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61ace0* RecoveredClone_61ace0(const CloneDerived_61ace0* self) {LEAF_CHECK return new(CloneAllocate_61ace0(32,8,0x41202003u,nullptr,"",0))CloneDerived_61ace0(*self);}

extern "C" void* CloneAllocate_61b3d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61b3d0 {
    virtual ~CloneBase_61b3d0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61b3d0(const CloneBase_61b3d0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61b3d0 : CloneBase_61b3d0 {virtual ~CloneDerived_61b3d0();__attribute__((always_inline)) CloneDerived_61b3d0(const CloneDerived_61b3d0& source):CloneBase_61b3d0(source){}};
static_assert(sizeof(CloneDerived_61b3d0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61b3d0* RecoveredClone_61b3d0(const CloneDerived_61b3d0* self) {LEAF_CHECK return new(CloneAllocate_61b3d0(32,8,0x41202003u,nullptr,"",0))CloneDerived_61b3d0(*self);}

extern "C" void* CloneAllocate_61b6c0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61b6c0 {
    virtual ~CloneBase_61b6c0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61b6c0(const CloneBase_61b6c0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61b6c0 : CloneBase_61b6c0 {virtual ~CloneDerived_61b6c0();__attribute__((always_inline)) CloneDerived_61b6c0(const CloneDerived_61b6c0& source):CloneBase_61b6c0(source){}};
static_assert(sizeof(CloneDerived_61b6c0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61b6c0* RecoveredClone_61b6c0(const CloneDerived_61b6c0* self) {LEAF_CHECK return new(CloneAllocate_61b6c0(32,8,0x41202003u,nullptr,"",0))CloneDerived_61b6c0(*self);}

extern "C" void* CloneAllocate_61d7e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61d7e0 {
    virtual ~CloneBase_61d7e0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61d7e0(const CloneBase_61d7e0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61d7e0 : CloneBase_61d7e0 {virtual ~CloneDerived_61d7e0();__attribute__((always_inline)) CloneDerived_61d7e0(const CloneDerived_61d7e0& source):CloneBase_61d7e0(source){}};
static_assert(sizeof(CloneDerived_61d7e0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61d7e0* RecoveredClone_61d7e0(const CloneDerived_61d7e0* self) {LEAF_CHECK return new(CloneAllocate_61d7e0(32,8,0x41202003u,nullptr,"",0))CloneDerived_61d7e0(*self);}

extern "C" void* CloneAllocate_61dfb0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61dfb0 {
    virtual ~CloneBase_61dfb0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61dfb0(const CloneBase_61dfb0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61dfb0 : CloneBase_61dfb0 {virtual ~CloneDerived_61dfb0();__attribute__((always_inline)) CloneDerived_61dfb0(const CloneDerived_61dfb0& source):CloneBase_61dfb0(source){}};
static_assert(sizeof(CloneDerived_61dfb0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61dfb0* RecoveredClone_61dfb0(const CloneDerived_61dfb0* self) {LEAF_CHECK return new(CloneAllocate_61dfb0(32,8,0x41202003u,nullptr,"",0))CloneDerived_61dfb0(*self);}

extern "C" void* CloneAllocate_61e2a0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61e2a0 {
    virtual ~CloneBase_61e2a0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61e2a0(const CloneBase_61e2a0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61e2a0 : CloneBase_61e2a0 {virtual ~CloneDerived_61e2a0();__attribute__((always_inline)) CloneDerived_61e2a0(const CloneDerived_61e2a0& source):CloneBase_61e2a0(source){}};
static_assert(sizeof(CloneDerived_61e2a0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61e2a0* RecoveredClone_61e2a0(const CloneDerived_61e2a0* self) {LEAF_CHECK return new(CloneAllocate_61e2a0(32,8,0x41202003u,nullptr,"",0))CloneDerived_61e2a0(*self);}

extern "C" void* CloneAllocate_61f040(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61f040 {
    virtual ~CloneBase_61f040();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61f040(const CloneBase_61f040& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61f040 : CloneBase_61f040 {virtual ~CloneDerived_61f040();__attribute__((always_inline)) CloneDerived_61f040(const CloneDerived_61f040& source):CloneBase_61f040(source){}};
static_assert(sizeof(CloneDerived_61f040)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61f040* RecoveredClone_61f040(const CloneDerived_61f040* self) {LEAF_CHECK return new(CloneAllocate_61f040(32,8,0x41202003u,nullptr,"",0))CloneDerived_61f040(*self);}

extern "C" void* CloneAllocate_61f330(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61f330 {
    virtual ~CloneBase_61f330();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61f330(const CloneBase_61f330& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61f330 : CloneBase_61f330 {virtual ~CloneDerived_61f330();__attribute__((always_inline)) CloneDerived_61f330(const CloneDerived_61f330& source):CloneBase_61f330(source){}};
static_assert(sizeof(CloneDerived_61f330)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61f330* RecoveredClone_61f330(const CloneDerived_61f330* self) {LEAF_CHECK return new(CloneAllocate_61f330(32,8,0x41202003u,nullptr,"",0))CloneDerived_61f330(*self);}

extern "C" void* CloneAllocate_61f620(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61f620 {
    virtual ~CloneBase_61f620();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61f620(const CloneBase_61f620& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61f620 : CloneBase_61f620 {virtual ~CloneDerived_61f620();__attribute__((always_inline)) CloneDerived_61f620(const CloneDerived_61f620& source):CloneBase_61f620(source){}};
static_assert(sizeof(CloneDerived_61f620)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61f620* RecoveredClone_61f620(const CloneDerived_61f620* self) {LEAF_CHECK return new(CloneAllocate_61f620(32,8,0x41202003u,nullptr,"",0))CloneDerived_61f620(*self);}

extern "C" void* CloneAllocate_61f910(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61f910 {
    virtual ~CloneBase_61f910();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61f910(const CloneBase_61f910& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61f910 : CloneBase_61f910 {virtual ~CloneDerived_61f910();__attribute__((always_inline)) CloneDerived_61f910(const CloneDerived_61f910& source):CloneBase_61f910(source){}};
static_assert(sizeof(CloneDerived_61f910)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61f910* RecoveredClone_61f910(const CloneDerived_61f910* self) {LEAF_CHECK return new(CloneAllocate_61f910(32,8,0x41202003u,nullptr,"",0))CloneDerived_61f910(*self);}

extern "C" void* CloneAllocate_61fcb0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_61fcb0 {
    virtual ~CloneBase_61fcb0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_61fcb0(const CloneBase_61fcb0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_61fcb0 : CloneBase_61fcb0 {virtual ~CloneDerived_61fcb0();__attribute__((always_inline)) CloneDerived_61fcb0(const CloneDerived_61fcb0& source):CloneBase_61fcb0(source){}};
static_assert(sizeof(CloneDerived_61fcb0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_61fcb0* RecoveredClone_61fcb0(const CloneDerived_61fcb0* self) {LEAF_CHECK return new(CloneAllocate_61fcb0(32,8,0x41202003u,nullptr,"",0))CloneDerived_61fcb0(*self);}

extern "C" void* CloneAllocate_6201a0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneBase_6201a0 {
    virtual ~CloneBase_6201a0();
    uint32_t field_8;
    unsigned char unknown_12[4];
    uint64_t field_16;
    uint64_t field_24;
    __attribute__((always_inline)) CloneBase_6201a0(const CloneBase_6201a0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}
};
struct CloneDerived_6201a0 : CloneBase_6201a0 {virtual ~CloneDerived_6201a0();__attribute__((always_inline)) CloneDerived_6201a0(const CloneDerived_6201a0& source):CloneBase_6201a0(source){}};
static_assert(sizeof(CloneDerived_6201a0)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneDerived_6201a0* RecoveredClone_6201a0(const CloneDerived_6201a0* self) {LEAF_CHECK return new(CloneAllocate_6201a0(32,8,0x41202003u,nullptr,"",0))CloneDerived_6201a0(*self);}
