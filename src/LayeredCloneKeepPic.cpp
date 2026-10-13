// Copied-field, inheritance and reference-count ABI views.
// Original complete declarations, class identities and untouched field meanings remain unknown.
#include <stdint.h>
#include <stddef.h>
typedef unsigned char CloneVector __attribute__((vector_size(16),aligned(1)));
typedef uint64_t CloneUnaligned64 __attribute__((aligned(1)));
typedef uint32_t CloneUnaligned32 __attribute__((aligned(1)));
typedef uint16_t CloneUnaligned16 __attribute__((aligned(1)));
inline void* operator new(size_t,void* address) noexcept {return address;}
#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define LEAF_CHECK LeafAddedSideEffect();
#else
#define LEAF_CHECK
#endif
struct CloneControl64 {uint64_t unknown, references;};
struct CloneControl32 {char unknown[16];uint32_t references;};
extern "C" void* CloneAllocate_26f530(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_26f530_0 {virtual ~CloneLayer_26f530_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_26f530_0(const CloneLayer_26f530_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_26f530_1 : CloneLayer_26f530_0 {virtual ~CloneLayer_26f530_1();uint64_t field_32;__attribute__((always_inline)) CloneLayer_26f530_1(const CloneLayer_26f530_1& source):CloneLayer_26f530_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_26f530_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_26f530_1* RecoveredClone_26f530(const CloneLayer_26f530_1* self) {LEAF_CHECK return new(CloneAllocate_26f530(40,8,0x41202003u,nullptr,"",0))CloneLayer_26f530_1(*self);}

extern "C" void* CloneAllocate_26fc00(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_26fc00_0 {virtual ~CloneLayer_26fc00_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_26fc00_0(const CloneLayer_26fc00_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_26fc00_1 : CloneLayer_26fc00_0 {virtual ~CloneLayer_26fc00_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_26fc00_1(const CloneLayer_26fc00_1& source):CloneLayer_26fc00_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_26fc00_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_26fc00_1* RecoveredClone_26fc00(const CloneLayer_26fc00_1* self) {LEAF_CHECK return new(CloneAllocate_26fc00(40,8,0x41202003u,nullptr,"",0))CloneLayer_26fc00_1(*self);}

extern "C" void* CloneAllocate_26ff60(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_26ff60_0 {virtual ~CloneLayer_26ff60_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_26ff60_0(const CloneLayer_26ff60_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_26ff60_1 : CloneLayer_26ff60_0 {virtual ~CloneLayer_26ff60_1();uint32_t field_32;uint32_t field_36;uint16_t field_40;unsigned char unknown_42[6];__attribute__((always_inline)) CloneLayer_26ff60_1(const CloneLayer_26ff60_1& source):CloneLayer_26ff60_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
static_assert(sizeof(CloneLayer_26ff60_1)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_26ff60_1* RecoveredClone_26ff60(const CloneLayer_26ff60_1* self) {LEAF_CHECK return new(CloneAllocate_26ff60(48,8,0x41202003u,nullptr,"",0))CloneLayer_26ff60_1(*self);}

extern "C" void* CloneAllocate_270d40(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_270d40_0 {virtual ~CloneLayer_270d40_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_270d40_0(const CloneLayer_270d40_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_270d40_1 : CloneLayer_270d40_0 {virtual ~CloneLayer_270d40_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_270d40_1(const CloneLayer_270d40_1& source):CloneLayer_270d40_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_270d40_2 : CloneLayer_270d40_1 {virtual ~CloneLayer_270d40_2();uint32_t field_48;unsigned char unknown_52[4];__attribute__((always_inline)) CloneLayer_270d40_2(const CloneLayer_270d40_2& source):CloneLayer_270d40_1(source),field_48(source.field_48){}};
static_assert(sizeof(CloneLayer_270d40_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_270d40_2* RecoveredClone_270d40(const CloneLayer_270d40_2* self) {LEAF_CHECK return new(CloneAllocate_270d40(56,8,0x41202003u,nullptr,"",0))CloneLayer_270d40_2(*self);}

extern "C" void* CloneAllocate_271660(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_271660_0 {virtual ~CloneLayer_271660_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_271660_0(const CloneLayer_271660_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_271660_1 : CloneLayer_271660_0 {virtual ~CloneLayer_271660_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_271660_1(const CloneLayer_271660_1& source):CloneLayer_271660_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_271660_2 : CloneLayer_271660_1 {virtual ~CloneLayer_271660_2();__attribute__((always_inline)) CloneLayer_271660_2(const CloneLayer_271660_2& source):CloneLayer_271660_1(source){}};
static_assert(sizeof(CloneLayer_271660_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_271660_2* RecoveredClone_271660(const CloneLayer_271660_2* self) {LEAF_CHECK return new(CloneAllocate_271660(56,8,0x41202003u,nullptr,"",0))CloneLayer_271660_2(*self);}

extern "C" void* CloneAllocate_271ce0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_271ce0_0 {virtual ~CloneLayer_271ce0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_271ce0_0(const CloneLayer_271ce0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_271ce0_1 : CloneLayer_271ce0_0 {virtual ~CloneLayer_271ce0_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_271ce0_1(const CloneLayer_271ce0_1& source):CloneLayer_271ce0_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_271ce0_2 : CloneLayer_271ce0_1 {virtual ~CloneLayer_271ce0_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_271ce0_2(const CloneLayer_271ce0_2& source):CloneLayer_271ce0_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_271ce0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_271ce0_2* RecoveredClone_271ce0(const CloneLayer_271ce0_2* self) {LEAF_CHECK return new(CloneAllocate_271ce0(64,8,0x41202003u,nullptr,"",0))CloneLayer_271ce0_2(*self);}

extern "C" void* CloneAllocate_272190(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_272190_0 {virtual ~CloneLayer_272190_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_272190_0(const CloneLayer_272190_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_272190_1 : CloneLayer_272190_0 {virtual ~CloneLayer_272190_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_272190_1(const CloneLayer_272190_1& source):CloneLayer_272190_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_272190_2 : CloneLayer_272190_1 {virtual ~CloneLayer_272190_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_272190_2(const CloneLayer_272190_2& source):CloneLayer_272190_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_272190_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_272190_2* RecoveredClone_272190(const CloneLayer_272190_2* self) {LEAF_CHECK return new(CloneAllocate_272190(64,8,0x41202003u,nullptr,"",0))CloneLayer_272190_2(*self);}

extern "C" void* CloneAllocate_2725a0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2725a0_0 {virtual ~CloneLayer_2725a0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2725a0_0(const CloneLayer_2725a0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2725a0_1 : CloneLayer_2725a0_0 {virtual ~CloneLayer_2725a0_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_2725a0_1(const CloneLayer_2725a0_1& source):CloneLayer_2725a0_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_2725a0_2 : CloneLayer_2725a0_1 {virtual ~CloneLayer_2725a0_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_2725a0_2(const CloneLayer_2725a0_2& source):CloneLayer_2725a0_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_2725a0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2725a0_2* RecoveredClone_2725a0(const CloneLayer_2725a0_2* self) {LEAF_CHECK return new(CloneAllocate_2725a0(64,8,0x41202003u,nullptr,"",0))CloneLayer_2725a0_2(*self);}

extern "C" void* CloneAllocate_2729b0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2729b0_0 {virtual ~CloneLayer_2729b0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2729b0_0(const CloneLayer_2729b0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2729b0_1 : CloneLayer_2729b0_0 {virtual ~CloneLayer_2729b0_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_2729b0_1(const CloneLayer_2729b0_1& source):CloneLayer_2729b0_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_2729b0_2 : CloneLayer_2729b0_1 {virtual ~CloneLayer_2729b0_2();__attribute__((always_inline)) CloneLayer_2729b0_2(const CloneLayer_2729b0_2& source):CloneLayer_2729b0_1(source){}};
static_assert(sizeof(CloneLayer_2729b0_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2729b0_2* RecoveredClone_2729b0(const CloneLayer_2729b0_2* self) {LEAF_CHECK return new(CloneAllocate_2729b0(56,8,0x41202003u,nullptr,"",0))CloneLayer_2729b0_2(*self);}

extern "C" void* CloneAllocate_272e30(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_272e30_0 {virtual ~CloneLayer_272e30_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_272e30_0(const CloneLayer_272e30_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_272e30_1 : CloneLayer_272e30_0 {virtual ~CloneLayer_272e30_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_272e30_1(const CloneLayer_272e30_1& source):CloneLayer_272e30_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_272e30_2 : CloneLayer_272e30_1 {virtual ~CloneLayer_272e30_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_272e30_2(const CloneLayer_272e30_2& source):CloneLayer_272e30_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_272e30_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_272e30_2* RecoveredClone_272e30(const CloneLayer_272e30_2* self) {LEAF_CHECK return new(CloneAllocate_272e30(64,8,0x41202003u,nullptr,"",0))CloneLayer_272e30_2(*self);}

extern "C" void* CloneAllocate_273240(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_273240_0 {virtual ~CloneLayer_273240_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_273240_0(const CloneLayer_273240_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_273240_1 : CloneLayer_273240_0 {virtual ~CloneLayer_273240_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_273240_1(const CloneLayer_273240_1& source):CloneLayer_273240_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_273240_2 : CloneLayer_273240_1 {virtual ~CloneLayer_273240_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_273240_2(const CloneLayer_273240_2& source):CloneLayer_273240_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_273240_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_273240_2* RecoveredClone_273240(const CloneLayer_273240_2* self) {LEAF_CHECK return new(CloneAllocate_273240(64,8,0x41202003u,nullptr,"",0))CloneLayer_273240_2(*self);}

extern "C" void* CloneAllocate_273710(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_273710_0 {virtual ~CloneLayer_273710_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_273710_0(const CloneLayer_273710_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_273710_1 : CloneLayer_273710_0 {virtual ~CloneLayer_273710_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_273710_1(const CloneLayer_273710_1& source):CloneLayer_273710_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_273710_2 : CloneLayer_273710_1 {virtual ~CloneLayer_273710_2();__attribute__((always_inline)) CloneLayer_273710_2(const CloneLayer_273710_2& source):CloneLayer_273710_1(source){}};
static_assert(sizeof(CloneLayer_273710_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_273710_2* RecoveredClone_273710(const CloneLayer_273710_2* self) {LEAF_CHECK return new(CloneAllocate_273710(56,8,0x41202003u,nullptr,"",0))CloneLayer_273710_2(*self);}

extern "C" void* CloneAllocate_273b20(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_273b20_0 {virtual ~CloneLayer_273b20_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_273b20_0(const CloneLayer_273b20_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_273b20_1 : CloneLayer_273b20_0 {virtual ~CloneLayer_273b20_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_273b20_1(const CloneLayer_273b20_1& source):CloneLayer_273b20_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_273b20_2 : CloneLayer_273b20_1 {virtual ~CloneLayer_273b20_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_273b20_2(const CloneLayer_273b20_2& source):CloneLayer_273b20_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_273b20_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_273b20_2* RecoveredClone_273b20(const CloneLayer_273b20_2* self) {LEAF_CHECK return new(CloneAllocate_273b20(64,8,0x41202003u,nullptr,"",0))CloneLayer_273b20_2(*self);}

extern "C" void* CloneAllocate_273f30(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_273f30_0 {virtual ~CloneLayer_273f30_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_273f30_0(const CloneLayer_273f30_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_273f30_1 : CloneLayer_273f30_0 {virtual ~CloneLayer_273f30_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_273f30_1(const CloneLayer_273f30_1& source):CloneLayer_273f30_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_273f30_2 : CloneLayer_273f30_1 {virtual ~CloneLayer_273f30_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_273f30_2(const CloneLayer_273f30_2& source):CloneLayer_273f30_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_273f30_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_273f30_2* RecoveredClone_273f30(const CloneLayer_273f30_2* self) {LEAF_CHECK return new(CloneAllocate_273f30(64,8,0x41202003u,nullptr,"",0))CloneLayer_273f30_2(*self);}

extern "C" void* CloneAllocate_274400(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_274400_0 {virtual ~CloneLayer_274400_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_274400_0(const CloneLayer_274400_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_274400_1 : CloneLayer_274400_0 {virtual ~CloneLayer_274400_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_274400_1(const CloneLayer_274400_1& source):CloneLayer_274400_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_274400_2 : CloneLayer_274400_1 {virtual ~CloneLayer_274400_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_274400_2(const CloneLayer_274400_2& source):CloneLayer_274400_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_274400_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_274400_2* RecoveredClone_274400(const CloneLayer_274400_2* self) {LEAF_CHECK return new(CloneAllocate_274400(64,8,0x41202003u,nullptr,"",0))CloneLayer_274400_2(*self);}

extern "C" void* CloneAllocate_276000(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_276000_0 {virtual ~CloneLayer_276000_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_276000_0(const CloneLayer_276000_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_276000_1 : CloneLayer_276000_0 {virtual ~CloneLayer_276000_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_276000_1(const CloneLayer_276000_1& source):CloneLayer_276000_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_276000_2 : CloneLayer_276000_1 {virtual ~CloneLayer_276000_2();uint8_t field_56;unsigned char unknown_57[7];__attribute__((always_inline)) CloneLayer_276000_2(const CloneLayer_276000_2& source):CloneLayer_276000_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_276000_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_276000_2* RecoveredClone_276000(const CloneLayer_276000_2* self) {LEAF_CHECK return new(CloneAllocate_276000(64,8,0x41202003u,nullptr,"",0))CloneLayer_276000_2(*self);}

extern "C" void* CloneAllocate_276410(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_276410_0 {virtual ~CloneLayer_276410_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_276410_0(const CloneLayer_276410_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_276410_1 : CloneLayer_276410_0 {virtual ~CloneLayer_276410_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_276410_1(const CloneLayer_276410_1& source):CloneLayer_276410_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_276410_2 : CloneLayer_276410_1 {virtual ~CloneLayer_276410_2();uint64_t field_56;__attribute__((always_inline)) CloneLayer_276410_2(const CloneLayer_276410_2& source):CloneLayer_276410_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_276410_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_276410_2* RecoveredClone_276410(const CloneLayer_276410_2* self) {LEAF_CHECK return new(CloneAllocate_276410(64,8,0x41202003u,nullptr,"",0))CloneLayer_276410_2(*self);}

extern "C" void* CloneAllocate_276820(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_276820_0 {virtual ~CloneLayer_276820_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_276820_0(const CloneLayer_276820_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_276820_1 : CloneLayer_276820_0 {virtual ~CloneLayer_276820_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_276820_1(const CloneLayer_276820_1& source):CloneLayer_276820_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_276820_2 : CloneLayer_276820_1 {virtual ~CloneLayer_276820_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_276820_2(const CloneLayer_276820_2& source):CloneLayer_276820_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_276820_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_276820_2* RecoveredClone_276820(const CloneLayer_276820_2* self) {LEAF_CHECK return new(CloneAllocate_276820(64,8,0x41202003u,nullptr,"",0))CloneLayer_276820_2(*self);}

extern "C" void* CloneAllocate_276c30(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_276c30_0 {virtual ~CloneLayer_276c30_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_276c30_0(const CloneLayer_276c30_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_276c30_1 : CloneLayer_276c30_0 {virtual ~CloneLayer_276c30_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_276c30_1(const CloneLayer_276c30_1& source):CloneLayer_276c30_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_276c30_2 : CloneLayer_276c30_1 {virtual ~CloneLayer_276c30_2();uint32_t field_56;uint32_t field_60;__attribute__((always_inline)) CloneLayer_276c30_2(const CloneLayer_276c30_2& source):CloneLayer_276c30_1(source),field_56(source.field_56),field_60(source.field_60){}};
static_assert(sizeof(CloneLayer_276c30_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_276c30_2* RecoveredClone_276c30(const CloneLayer_276c30_2* self) {LEAF_CHECK return new(CloneAllocate_276c30(64,8,0x41202003u,nullptr,"",0))CloneLayer_276c30_2(*self);}

extern "C" void* CloneAllocate_277050(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_277050_0 {virtual ~CloneLayer_277050_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_277050_0(const CloneLayer_277050_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_277050_1 : CloneLayer_277050_0 {virtual ~CloneLayer_277050_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_277050_1(const CloneLayer_277050_1& source):CloneLayer_277050_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_277050_2 : CloneLayer_277050_1 {virtual ~CloneLayer_277050_2();uint32_t field_56;uint32_t field_60;uint32_t field_64;unsigned char unknown_68[4];__attribute__((always_inline)) CloneLayer_277050_2(const CloneLayer_277050_2& source):CloneLayer_277050_1(source),field_56(source.field_56),field_60(source.field_60),field_64(source.field_64){}};
static_assert(sizeof(CloneLayer_277050_2)==72,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_277050_2* RecoveredClone_277050(const CloneLayer_277050_2* self) {LEAF_CHECK return new(CloneAllocate_277050(72,8,0x41202003u,nullptr,"",0))CloneLayer_277050_2(*self);}

extern "C" void* CloneAllocate_277470(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_277470_0 {virtual ~CloneLayer_277470_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_277470_0(const CloneLayer_277470_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_277470_1 : CloneLayer_277470_0 {virtual ~CloneLayer_277470_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_277470_1(const CloneLayer_277470_1& source):CloneLayer_277470_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_277470_2 : CloneLayer_277470_1 {virtual ~CloneLayer_277470_2();__attribute__((always_inline)) CloneLayer_277470_2(const CloneLayer_277470_2& source):CloneLayer_277470_1(source){}};
static_assert(sizeof(CloneLayer_277470_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_277470_2* RecoveredClone_277470(const CloneLayer_277470_2* self) {LEAF_CHECK return new(CloneAllocate_277470(56,8,0x41202003u,nullptr,"",0))CloneLayer_277470_2(*self);}

extern "C" void* CloneAllocate_277880(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_277880_0 {virtual ~CloneLayer_277880_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_277880_0(const CloneLayer_277880_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_277880_1 : CloneLayer_277880_0 {virtual ~CloneLayer_277880_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_277880_1(const CloneLayer_277880_1& source):CloneLayer_277880_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_277880_2 : CloneLayer_277880_1 {virtual ~CloneLayer_277880_2();uint32_t field_56;uint32_t field_60;__attribute__((always_inline)) CloneLayer_277880_2(const CloneLayer_277880_2& source):CloneLayer_277880_1(source),field_56(source.field_56),field_60(source.field_60){}};
static_assert(sizeof(CloneLayer_277880_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_277880_2* RecoveredClone_277880(const CloneLayer_277880_2* self) {LEAF_CHECK return new(CloneAllocate_277880(64,8,0x41202003u,nullptr,"",0))CloneLayer_277880_2(*self);}

extern "C" void* CloneAllocate_277ca0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_277ca0_0 {virtual ~CloneLayer_277ca0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_277ca0_0(const CloneLayer_277ca0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_277ca0_1 : CloneLayer_277ca0_0 {virtual ~CloneLayer_277ca0_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_277ca0_1(const CloneLayer_277ca0_1& source):CloneLayer_277ca0_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_277ca0_2 : CloneLayer_277ca0_1 {virtual ~CloneLayer_277ca0_2();__attribute__((always_inline)) CloneLayer_277ca0_2(const CloneLayer_277ca0_2& source):CloneLayer_277ca0_1(source){}};
static_assert(sizeof(CloneLayer_277ca0_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_277ca0_2* RecoveredClone_277ca0(const CloneLayer_277ca0_2* self) {LEAF_CHECK return new(CloneAllocate_277ca0(56,8,0x41202003u,nullptr,"",0))CloneLayer_277ca0_2(*self);}

extern "C" void* CloneAllocate_2780b0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2780b0_0 {virtual ~CloneLayer_2780b0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2780b0_0(const CloneLayer_2780b0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2780b0_1 : CloneLayer_2780b0_0 {virtual ~CloneLayer_2780b0_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_2780b0_1(const CloneLayer_2780b0_1& source):CloneLayer_2780b0_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_2780b0_2 : CloneLayer_2780b0_1 {virtual ~CloneLayer_2780b0_2();__attribute__((always_inline)) CloneLayer_2780b0_2(const CloneLayer_2780b0_2& source):CloneLayer_2780b0_1(source){}};
static_assert(sizeof(CloneLayer_2780b0_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2780b0_2* RecoveredClone_2780b0(const CloneLayer_2780b0_2* self) {LEAF_CHECK return new(CloneAllocate_2780b0(56,8,0x41202003u,nullptr,"",0))CloneLayer_2780b0_2(*self);}

extern "C" void* CloneAllocate_2784c0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2784c0_0 {virtual ~CloneLayer_2784c0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2784c0_0(const CloneLayer_2784c0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2784c0_1 : CloneLayer_2784c0_0 {virtual ~CloneLayer_2784c0_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_2784c0_1(const CloneLayer_2784c0_1& source):CloneLayer_2784c0_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_2784c0_2 : CloneLayer_2784c0_1 {virtual ~CloneLayer_2784c0_2();uint32_t field_56;uint32_t field_60;__attribute__((always_inline)) CloneLayer_2784c0_2(const CloneLayer_2784c0_2& source):CloneLayer_2784c0_1(source),field_56(source.field_56),field_60(source.field_60){}};
static_assert(sizeof(CloneLayer_2784c0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2784c0_2* RecoveredClone_2784c0(const CloneLayer_2784c0_2* self) {LEAF_CHECK return new(CloneAllocate_2784c0(64,8,0x41202003u,nullptr,"",0))CloneLayer_2784c0_2(*self);}

extern "C" void* CloneAllocate_2788e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2788e0_0 {virtual ~CloneLayer_2788e0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2788e0_0(const CloneLayer_2788e0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2788e0_1 : CloneLayer_2788e0_0 {virtual ~CloneLayer_2788e0_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_2788e0_1(const CloneLayer_2788e0_1& source):CloneLayer_2788e0_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_2788e0_2 : CloneLayer_2788e0_1 {virtual ~CloneLayer_2788e0_2();uint32_t field_56;uint32_t field_60;__attribute__((always_inline)) CloneLayer_2788e0_2(const CloneLayer_2788e0_2& source):CloneLayer_2788e0_1(source),field_56(source.field_56),field_60(source.field_60){}};
static_assert(sizeof(CloneLayer_2788e0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2788e0_2* RecoveredClone_2788e0(const CloneLayer_2788e0_2* self) {LEAF_CHECK return new(CloneAllocate_2788e0(64,8,0x41202003u,nullptr,"",0))CloneLayer_2788e0_2(*self);}

extern "C" void* CloneAllocate_278d00(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_278d00_0 {virtual ~CloneLayer_278d00_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_278d00_0(const CloneLayer_278d00_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_278d00_1 : CloneLayer_278d00_0 {virtual ~CloneLayer_278d00_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_278d00_1(const CloneLayer_278d00_1& source):CloneLayer_278d00_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_278d00_2 : CloneLayer_278d00_1 {virtual ~CloneLayer_278d00_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_278d00_2(const CloneLayer_278d00_2& source):CloneLayer_278d00_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_278d00_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_278d00_2* RecoveredClone_278d00(const CloneLayer_278d00_2* self) {LEAF_CHECK return new(CloneAllocate_278d00(64,8,0x41202003u,nullptr,"",0))CloneLayer_278d00_2(*self);}

extern "C" void* CloneAllocate_279110(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_279110_0 {virtual ~CloneLayer_279110_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_279110_0(const CloneLayer_279110_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_279110_1 : CloneLayer_279110_0 {virtual ~CloneLayer_279110_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_279110_1(const CloneLayer_279110_1& source):CloneLayer_279110_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_279110_2 : CloneLayer_279110_1 {virtual ~CloneLayer_279110_2();uint32_t field_56;unsigned char unknown_60[4];__attribute__((always_inline)) CloneLayer_279110_2(const CloneLayer_279110_2& source):CloneLayer_279110_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_279110_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_279110_2* RecoveredClone_279110(const CloneLayer_279110_2* self) {LEAF_CHECK return new(CloneAllocate_279110(64,8,0x41202003u,nullptr,"",0))CloneLayer_279110_2(*self);}

extern "C" void* CloneAllocate_279b00(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_279b00_0 {virtual ~CloneLayer_279b00_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_279b00_0(const CloneLayer_279b00_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_279b00_1 : CloneLayer_279b00_0 {virtual ~CloneLayer_279b00_1();uint32_t field_32;unsigned char unknown_36[4];uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_279b00_1(const CloneLayer_279b00_1& source):CloneLayer_279b00_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_279b00_2 : CloneLayer_279b00_1 {virtual ~CloneLayer_279b00_2();uint64_t field_56;__attribute__((always_inline)) CloneLayer_279b00_2(const CloneLayer_279b00_2& source):CloneLayer_279b00_1(source),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_279b00_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_279b00_2* RecoveredClone_279b00(const CloneLayer_279b00_2* self) {LEAF_CHECK return new(CloneAllocate_279b00(64,8,0x41202003u,nullptr,"",0))CloneLayer_279b00_2(*self);}

extern "C" void* CloneAllocate_2811f0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2811f0_0 {virtual ~CloneLayer_2811f0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2811f0_0(const CloneLayer_2811f0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2811f0_1 : CloneLayer_2811f0_0 {virtual ~CloneLayer_2811f0_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_2811f0_1(const CloneLayer_2811f0_1& source):CloneLayer_2811f0_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_2811f0_2 : CloneLayer_2811f0_1 {virtual ~CloneLayer_2811f0_2();uint32_t field_56;uint32_t field_60;uint64_t field_64;__attribute__((always_inline)) CloneLayer_2811f0_2(const CloneLayer_2811f0_2& source):CloneLayer_2811f0_1(source),field_56(source.field_56),field_60(source.field_60),field_64(source.field_64){}};
struct CloneLayer_2811f0_3 : CloneLayer_2811f0_2 {virtual ~CloneLayer_2811f0_3();uint8_t field_72;uint8_t field_73;unsigned char unknown_74[6];uint64_t field_80;CloneControl64* field_88;__attribute__((always_inline)) CloneLayer_2811f0_3(const CloneLayer_2811f0_3& source):CloneLayer_2811f0_2(source),field_72(source.field_72),field_73(source.field_73),field_80(source.field_80),field_88(source.field_88){if(field_88)__atomic_fetch_add(&field_88->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_2811f0_3)==96,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2811f0_3* RecoveredClone_2811f0(const CloneLayer_2811f0_3* self) {LEAF_CHECK return new(CloneAllocate_2811f0(96,8,0x41202003u,nullptr,"",0))CloneLayer_2811f0_3(*self);}

extern "C" void* CloneAllocate_283d90(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_283d90_0 {virtual ~CloneLayer_283d90_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_283d90_0(const CloneLayer_283d90_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_283d90_1 : CloneLayer_283d90_0 {virtual ~CloneLayer_283d90_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_283d90_1(const CloneLayer_283d90_1& source):CloneLayer_283d90_0(source),field_32(source.field_32){}};
struct CloneLayer_283d90_2 : CloneLayer_283d90_1 {virtual ~CloneLayer_283d90_2();uint32_t field_36;uint32_t field_40;uint32_t field_44;__attribute__((always_inline)) CloneLayer_283d90_2(const CloneLayer_283d90_2& source):CloneLayer_283d90_1(source),field_36(source.field_36),field_40(source.field_40),field_44(source.field_44){}};
static_assert(sizeof(CloneLayer_283d90_2)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_283d90_2* RecoveredClone_283d90(const CloneLayer_283d90_2* self) {LEAF_CHECK return new(CloneAllocate_283d90(48,8,0x41202003u,nullptr,"",0))CloneLayer_283d90_2(*self);}

extern "C" void* CloneAllocate_284120(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_284120_0 {virtual ~CloneLayer_284120_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_284120_0(const CloneLayer_284120_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_284120_1 : CloneLayer_284120_0 {virtual ~CloneLayer_284120_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_284120_1(const CloneLayer_284120_1& source):CloneLayer_284120_0(source),field_32(source.field_32){}};
struct CloneLayer_284120_2 : CloneLayer_284120_1 {virtual ~CloneLayer_284120_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_284120_2(const CloneLayer_284120_2& source):CloneLayer_284120_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_284120_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_284120_2* RecoveredClone_284120(const CloneLayer_284120_2* self) {LEAF_CHECK return new(CloneAllocate_284120(40,8,0x41202003u,nullptr,"",0))CloneLayer_284120_2(*self);}

extern "C" void* CloneAllocate_2844a0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2844a0_0 {virtual ~CloneLayer_2844a0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2844a0_0(const CloneLayer_2844a0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2844a0_1 : CloneLayer_2844a0_0 {virtual ~CloneLayer_2844a0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_2844a0_1(const CloneLayer_2844a0_1& source):CloneLayer_2844a0_0(source),field_32(source.field_32){}};
struct CloneLayer_2844a0_2 : CloneLayer_2844a0_1 {virtual ~CloneLayer_2844a0_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_2844a0_2(const CloneLayer_2844a0_2& source):CloneLayer_2844a0_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_2844a0_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2844a0_2* RecoveredClone_2844a0(const CloneLayer_2844a0_2* self) {LEAF_CHECK return new(CloneAllocate_2844a0(40,8,0x41202003u,nullptr,"",0))CloneLayer_2844a0_2(*self);}

extern "C" void* CloneAllocate_2857d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2857d0_0 {virtual ~CloneLayer_2857d0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2857d0_0(const CloneLayer_2857d0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2857d0_1 : CloneLayer_2857d0_0 {virtual ~CloneLayer_2857d0_1();uint64_t field_32;uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_2857d0_1(const CloneLayer_2857d0_1& source):CloneLayer_2857d0_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_2857d0_2 : CloneLayer_2857d0_1 {virtual ~CloneLayer_2857d0_2();__attribute__((always_inline)) CloneLayer_2857d0_2(const CloneLayer_2857d0_2& source):CloneLayer_2857d0_1(source){}};
static_assert(sizeof(CloneLayer_2857d0_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2857d0_2* RecoveredClone_2857d0(const CloneLayer_2857d0_2* self) {LEAF_CHECK return new(CloneAllocate_2857d0(56,8,0x41202003u,nullptr,"",0))CloneLayer_2857d0_2(*self);}

extern "C" void* CloneAllocate_28e5d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_28e5d0_0 {virtual ~CloneLayer_28e5d0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_28e5d0_0(const CloneLayer_28e5d0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_28e5d0_1 : CloneLayer_28e5d0_0 {virtual ~CloneLayer_28e5d0_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_28e5d0_1(const CloneLayer_28e5d0_1& source):CloneLayer_28e5d0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_28e5d0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_28e5d0_1* RecoveredClone_28e5d0(const CloneLayer_28e5d0_1* self) {LEAF_CHECK return new(CloneAllocate_28e5d0(40,8,0x41202003u,nullptr,"",0))CloneLayer_28e5d0_1(*self);}

extern "C" void* CloneAllocate_28ed50(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_28ed50_0 {virtual ~CloneLayer_28ed50_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_28ed50_0(const CloneLayer_28ed50_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_28ed50_1 : CloneLayer_28ed50_0 {virtual ~CloneLayer_28ed50_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_28ed50_1(const CloneLayer_28ed50_1& source):CloneLayer_28ed50_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_28ed50_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_28ed50_1* RecoveredClone_28ed50(const CloneLayer_28ed50_1* self) {LEAF_CHECK return new(CloneAllocate_28ed50(40,8,0x41202003u,nullptr,"",0))CloneLayer_28ed50_1(*self);}

extern "C" void* CloneAllocate_293fe0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_293fe0_0 {virtual ~CloneLayer_293fe0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_293fe0_0(const CloneLayer_293fe0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_293fe0_1 : CloneLayer_293fe0_0 {virtual ~CloneLayer_293fe0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_293fe0_1(const CloneLayer_293fe0_1& source):CloneLayer_293fe0_0(source),field_32(source.field_32){}};
struct CloneLayer_293fe0_2 : CloneLayer_293fe0_1 {virtual ~CloneLayer_293fe0_2();uint32_t field_36;uint32_t field_40;unsigned char unknown_44[4];__attribute__((always_inline)) CloneLayer_293fe0_2(const CloneLayer_293fe0_2& source):CloneLayer_293fe0_1(source),field_36(source.field_36),field_40(source.field_40){}};
static_assert(sizeof(CloneLayer_293fe0_2)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_293fe0_2* RecoveredClone_293fe0(const CloneLayer_293fe0_2* self) {LEAF_CHECK return new(CloneAllocate_293fe0(48,8,0x41202003u,nullptr,"",0))CloneLayer_293fe0_2(*self);}

extern "C" void* CloneAllocate_294570(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_294570_0 {virtual ~CloneLayer_294570_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_294570_0(const CloneLayer_294570_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_294570_1 : CloneLayer_294570_0 {virtual ~CloneLayer_294570_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_294570_1(const CloneLayer_294570_1& source):CloneLayer_294570_0(source),field_32(source.field_32){}};
struct CloneLayer_294570_2 : CloneLayer_294570_1 {virtual ~CloneLayer_294570_2();uint32_t field_36;uint32_t field_40;uint32_t field_44;uint32_t field_48;uint16_t field_52;unsigned char unknown_54[2];__attribute__((always_inline)) CloneLayer_294570_2(const CloneLayer_294570_2& source):CloneLayer_294570_1(source),field_36(source.field_36),field_40(source.field_40),field_44(source.field_44),field_48(source.field_48),field_52(source.field_52){}};
static_assert(sizeof(CloneLayer_294570_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_294570_2* RecoveredClone_294570(const CloneLayer_294570_2* self) {LEAF_CHECK return new(CloneAllocate_294570(56,8,0x41202003u,nullptr,"",0))CloneLayer_294570_2(*self);}

extern "C" void* CloneAllocate_295720(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_295720_0 {virtual ~CloneLayer_295720_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_295720_0(const CloneLayer_295720_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_295720_1 : CloneLayer_295720_0 {virtual ~CloneLayer_295720_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_295720_1(const CloneLayer_295720_1& source):CloneLayer_295720_0(source),field_32(source.field_32){}};
struct CloneLayer_295720_2 : CloneLayer_295720_1 {virtual ~CloneLayer_295720_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_295720_2(const CloneLayer_295720_2& source):CloneLayer_295720_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_295720_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_295720_2* RecoveredClone_295720(const CloneLayer_295720_2* self) {LEAF_CHECK return new(CloneAllocate_295720(40,8,0x41202003u,nullptr,"",0))CloneLayer_295720_2(*self);}

extern "C" void* CloneAllocate_296e00(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_296e00_0 {virtual ~CloneLayer_296e00_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_296e00_0(const CloneLayer_296e00_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_296e00_1 : CloneLayer_296e00_0 {virtual ~CloneLayer_296e00_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_296e00_1(const CloneLayer_296e00_1& source):CloneLayer_296e00_0(source),field_32(source.field_32){}};
struct CloneLayer_296e00_2 : CloneLayer_296e00_1 {virtual ~CloneLayer_296e00_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_296e00_2(const CloneLayer_296e00_2& source):CloneLayer_296e00_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_296e00_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_296e00_2* RecoveredClone_296e00(const CloneLayer_296e00_2* self) {LEAF_CHECK return new(CloneAllocate_296e00(40,8,0x41202003u,nullptr,"",0))CloneLayer_296e00_2(*self);}

extern "C" void* CloneAllocate_297ad0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_297ad0_0 {virtual ~CloneLayer_297ad0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_297ad0_0(const CloneLayer_297ad0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_297ad0_1 : CloneLayer_297ad0_0 {virtual ~CloneLayer_297ad0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_297ad0_1(const CloneLayer_297ad0_1& source):CloneLayer_297ad0_0(source),field_32(source.field_32){}};
struct CloneLayer_297ad0_2 : CloneLayer_297ad0_1 {virtual ~CloneLayer_297ad0_2();CloneUnaligned64 field_36;unsigned char unknown_44[4];__attribute__((always_inline)) CloneLayer_297ad0_2(const CloneLayer_297ad0_2& source):CloneLayer_297ad0_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_297ad0_2)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_297ad0_2* RecoveredClone_297ad0(const CloneLayer_297ad0_2* self) {LEAF_CHECK return new(CloneAllocate_297ad0(48,8,0x41202003u,nullptr,"",0))CloneLayer_297ad0_2(*self);}

extern "C" void* CloneAllocate_29d350(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_29d350_0 {virtual ~CloneLayer_29d350_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_29d350_0(const CloneLayer_29d350_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_29d350_1 : CloneLayer_29d350_0 {virtual ~CloneLayer_29d350_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_29d350_1(const CloneLayer_29d350_1& source):CloneLayer_29d350_0(source),field_32(source.field_32){}};
struct CloneLayer_29d350_2 : CloneLayer_29d350_1 {virtual ~CloneLayer_29d350_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_29d350_2(const CloneLayer_29d350_2& source):CloneLayer_29d350_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_29d350_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_29d350_2* RecoveredClone_29d350(const CloneLayer_29d350_2* self) {LEAF_CHECK return new(CloneAllocate_29d350(40,8,0x41202003u,nullptr,"",0))CloneLayer_29d350_2(*self);}

extern "C" void* CloneAllocate_29d8b0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_29d8b0_0 {virtual ~CloneLayer_29d8b0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_29d8b0_0(const CloneLayer_29d8b0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_29d8b0_1 : CloneLayer_29d8b0_0 {virtual ~CloneLayer_29d8b0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_29d8b0_1(const CloneLayer_29d8b0_1& source):CloneLayer_29d8b0_0(source),field_32(source.field_32){}};
struct CloneLayer_29d8b0_2 : CloneLayer_29d8b0_1 {virtual ~CloneLayer_29d8b0_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_29d8b0_2(const CloneLayer_29d8b0_2& source):CloneLayer_29d8b0_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_29d8b0_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_29d8b0_2* RecoveredClone_29d8b0(const CloneLayer_29d8b0_2* self) {LEAF_CHECK return new(CloneAllocate_29d8b0(40,8,0x41202003u,nullptr,"",0))CloneLayer_29d8b0_2(*self);}

extern "C" void* CloneAllocate_29e8c0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_29e8c0_0 {virtual ~CloneLayer_29e8c0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_29e8c0_0(const CloneLayer_29e8c0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_29e8c0_1 : CloneLayer_29e8c0_0 {virtual ~CloneLayer_29e8c0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_29e8c0_1(const CloneLayer_29e8c0_1& source):CloneLayer_29e8c0_0(source),field_32(source.field_32){}};
struct CloneLayer_29e8c0_2 : CloneLayer_29e8c0_1 {virtual ~CloneLayer_29e8c0_2();CloneUnaligned64 field_36;unsigned char unknown_44[4];__attribute__((always_inline)) CloneLayer_29e8c0_2(const CloneLayer_29e8c0_2& source):CloneLayer_29e8c0_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_29e8c0_2)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_29e8c0_2* RecoveredClone_29e8c0(const CloneLayer_29e8c0_2* self) {LEAF_CHECK return new(CloneAllocate_29e8c0(48,8,0x41202003u,nullptr,"",0))CloneLayer_29e8c0_2(*self);}

extern "C" void* CloneAllocate_29f5f0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_29f5f0_0 {virtual ~CloneLayer_29f5f0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_29f5f0_0(const CloneLayer_29f5f0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_29f5f0_1 : CloneLayer_29f5f0_0 {virtual ~CloneLayer_29f5f0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_29f5f0_1(const CloneLayer_29f5f0_1& source):CloneLayer_29f5f0_0(source),field_32(source.field_32){}};
struct CloneLayer_29f5f0_2 : CloneLayer_29f5f0_1 {virtual ~CloneLayer_29f5f0_2();uint32_t field_36;uint32_t field_40;unsigned char unknown_44[4];__attribute__((always_inline)) CloneLayer_29f5f0_2(const CloneLayer_29f5f0_2& source):CloneLayer_29f5f0_1(source),field_36(source.field_36),field_40(source.field_40){}};
static_assert(sizeof(CloneLayer_29f5f0_2)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_29f5f0_2* RecoveredClone_29f5f0(const CloneLayer_29f5f0_2* self) {LEAF_CHECK return new(CloneAllocate_29f5f0(48,8,0x41202003u,nullptr,"",0))CloneLayer_29f5f0_2(*self);}

extern "C" void* CloneAllocate_2a0ad0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2a0ad0_0 {virtual ~CloneLayer_2a0ad0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2a0ad0_0(const CloneLayer_2a0ad0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2a0ad0_1 : CloneLayer_2a0ad0_0 {virtual ~CloneLayer_2a0ad0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_2a0ad0_1(const CloneLayer_2a0ad0_1& source):CloneLayer_2a0ad0_0(source),field_32(source.field_32){}};
struct CloneLayer_2a0ad0_2 : CloneLayer_2a0ad0_1 {virtual ~CloneLayer_2a0ad0_2();uint32_t field_36;uint32_t field_40;unsigned char unknown_44[4];__attribute__((always_inline)) CloneLayer_2a0ad0_2(const CloneLayer_2a0ad0_2& source):CloneLayer_2a0ad0_1(source),field_36(source.field_36),field_40(source.field_40){}};
static_assert(sizeof(CloneLayer_2a0ad0_2)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2a0ad0_2* RecoveredClone_2a0ad0(const CloneLayer_2a0ad0_2* self) {LEAF_CHECK return new(CloneAllocate_2a0ad0(48,8,0x41202003u,nullptr,"",0))CloneLayer_2a0ad0_2(*self);}

extern "C" void* CloneAllocate_2a47f0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2a47f0_0 {virtual ~CloneLayer_2a47f0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2a47f0_0(const CloneLayer_2a47f0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2a47f0_1 : CloneLayer_2a47f0_0 {virtual ~CloneLayer_2a47f0_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_2a47f0_1(const CloneLayer_2a47f0_1& source):CloneLayer_2a47f0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_2a47f0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2a47f0_1* RecoveredClone_2a47f0(const CloneLayer_2a47f0_1* self) {LEAF_CHECK return new(CloneAllocate_2a47f0(40,8,0x41202003u,nullptr,"",0))CloneLayer_2a47f0_1(*self);}

extern "C" void* CloneAllocate_2a5d30(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2a5d30_0 {virtual ~CloneLayer_2a5d30_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2a5d30_0(const CloneLayer_2a5d30_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2a5d30_1 : CloneLayer_2a5d30_0 {virtual ~CloneLayer_2a5d30_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_2a5d30_1(const CloneLayer_2a5d30_1& source):CloneLayer_2a5d30_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_2a5d30_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2a5d30_1* RecoveredClone_2a5d30(const CloneLayer_2a5d30_1* self) {LEAF_CHECK return new(CloneAllocate_2a5d30(40,8,0x41202003u,nullptr,"",0))CloneLayer_2a5d30_1(*self);}

extern "C" void* CloneAllocate_2a6560(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2a6560_0 {virtual ~CloneLayer_2a6560_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2a6560_0(const CloneLayer_2a6560_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2a6560_1 : CloneLayer_2a6560_0 {virtual ~CloneLayer_2a6560_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_2a6560_1(const CloneLayer_2a6560_1& source):CloneLayer_2a6560_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_2a6560_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2a6560_1* RecoveredClone_2a6560(const CloneLayer_2a6560_1* self) {LEAF_CHECK return new(CloneAllocate_2a6560(40,8,0x41202003u,nullptr,"",0))CloneLayer_2a6560_1(*self);}

extern "C" void* CloneAllocate_2a6b90(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2a6b90_0 {virtual ~CloneLayer_2a6b90_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2a6b90_0(const CloneLayer_2a6b90_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2a6b90_1 : CloneLayer_2a6b90_0 {virtual ~CloneLayer_2a6b90_1();uint32_t field_32;uint32_t field_36;uint32_t field_40;unsigned char unknown_44[4];__attribute__((always_inline)) CloneLayer_2a6b90_1(const CloneLayer_2a6b90_1& source):CloneLayer_2a6b90_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
static_assert(sizeof(CloneLayer_2a6b90_1)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2a6b90_1* RecoveredClone_2a6b90(const CloneLayer_2a6b90_1* self) {LEAF_CHECK return new(CloneAllocate_2a6b90(48,8,0x41202003u,nullptr,"",0))CloneLayer_2a6b90_1(*self);}

extern "C" void* CloneAllocate_2a7780(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2a7780_0 {virtual ~CloneLayer_2a7780_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2a7780_0(const CloneLayer_2a7780_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2a7780_1 : CloneLayer_2a7780_0 {virtual ~CloneLayer_2a7780_1();uint32_t field_32;uint32_t field_36;uint32_t field_40;unsigned char unknown_44[4];__attribute__((always_inline)) CloneLayer_2a7780_1(const CloneLayer_2a7780_1& source):CloneLayer_2a7780_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
static_assert(sizeof(CloneLayer_2a7780_1)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2a7780_1* RecoveredClone_2a7780(const CloneLayer_2a7780_1* self) {LEAF_CHECK return new(CloneAllocate_2a7780(48,8,0x41202003u,nullptr,"",0))CloneLayer_2a7780_1(*self);}

extern "C" void* CloneAllocate_2a8770(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2a8770_0 {virtual ~CloneLayer_2a8770_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2a8770_0(const CloneLayer_2a8770_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2a8770_1 : CloneLayer_2a8770_0 {virtual ~CloneLayer_2a8770_1();uint32_t field_32;uint32_t field_36;uint32_t field_40;uint32_t field_44;uint32_t field_48;uint8_t field_52;unsigned char unknown_53[3];__attribute__((always_inline)) CloneLayer_2a8770_1(const CloneLayer_2a8770_1& source):CloneLayer_2a8770_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40),field_44(source.field_44),field_48(source.field_48),field_52(source.field_52){}};
static_assert(sizeof(CloneLayer_2a8770_1)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2a8770_1* RecoveredClone_2a8770(const CloneLayer_2a8770_1* self) {LEAF_CHECK return new(CloneAllocate_2a8770(56,8,0x41202003u,nullptr,"",0))CloneLayer_2a8770_1(*self);}

extern "C" void* CloneAllocate_2a9040(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2a9040_0 {virtual ~CloneLayer_2a9040_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2a9040_0(const CloneLayer_2a9040_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2a9040_1 : CloneLayer_2a9040_0 {virtual ~CloneLayer_2a9040_1();uint32_t field_32;uint8_t field_36;unsigned char unknown_37[3];__attribute__((always_inline)) CloneLayer_2a9040_1(const CloneLayer_2a9040_1& source):CloneLayer_2a9040_0(source),field_32(source.field_32),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_2a9040_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2a9040_1* RecoveredClone_2a9040(const CloneLayer_2a9040_1* self) {LEAF_CHECK return new(CloneAllocate_2a9040(40,8,0x41202003u,nullptr,"",0))CloneLayer_2a9040_1(*self);}

extern "C" void* CloneAllocate_2a9590(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2a9590_0 {virtual ~CloneLayer_2a9590_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2a9590_0(const CloneLayer_2a9590_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2a9590_1 : CloneLayer_2a9590_0 {virtual ~CloneLayer_2a9590_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_2a9590_1(const CloneLayer_2a9590_1& source):CloneLayer_2a9590_0(source),field_32(source.field_32){}};
struct CloneLayer_2a9590_2 : CloneLayer_2a9590_1 {virtual ~CloneLayer_2a9590_2();uint32_t field_36;uint8_t field_40;unsigned char unknown_41[7];__attribute__((always_inline)) CloneLayer_2a9590_2(const CloneLayer_2a9590_2& source):CloneLayer_2a9590_1(source),field_36(source.field_36),field_40(source.field_40){}};
static_assert(sizeof(CloneLayer_2a9590_2)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2a9590_2* RecoveredClone_2a9590(const CloneLayer_2a9590_2* self) {LEAF_CHECK return new(CloneAllocate_2a9590(48,8,0x41202003u,nullptr,"",0))CloneLayer_2a9590_2(*self);}

extern "C" void* CloneAllocate_2a9b80(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2a9b80_0 {virtual ~CloneLayer_2a9b80_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2a9b80_0(const CloneLayer_2a9b80_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2a9b80_1 : CloneLayer_2a9b80_0 {virtual ~CloneLayer_2a9b80_1();uint32_t field_32;uint32_t field_36;uint32_t field_40;uint32_t field_44;uint32_t field_48;uint8_t field_52;unsigned char unknown_53[3];__attribute__((always_inline)) CloneLayer_2a9b80_1(const CloneLayer_2a9b80_1& source):CloneLayer_2a9b80_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40),field_44(source.field_44),field_48(source.field_48),field_52(source.field_52){}};
static_assert(sizeof(CloneLayer_2a9b80_1)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2a9b80_1* RecoveredClone_2a9b80(const CloneLayer_2a9b80_1* self) {LEAF_CHECK return new(CloneAllocate_2a9b80(56,8,0x41202003u,nullptr,"",0))CloneLayer_2a9b80_1(*self);}

extern "C" void* CloneAllocate_2aa2e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2aa2e0_0 {virtual ~CloneLayer_2aa2e0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2aa2e0_0(const CloneLayer_2aa2e0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2aa2e0_1 : CloneLayer_2aa2e0_0 {virtual ~CloneLayer_2aa2e0_1();uint32_t field_32;uint32_t field_36;uint32_t field_40;uint32_t field_44;uint32_t field_48;uint8_t field_52;unsigned char unknown_53[3];__attribute__((always_inline)) CloneLayer_2aa2e0_1(const CloneLayer_2aa2e0_1& source):CloneLayer_2aa2e0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40),field_44(source.field_44),field_48(source.field_48),field_52(source.field_52){}};
static_assert(sizeof(CloneLayer_2aa2e0_1)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2aa2e0_1* RecoveredClone_2aa2e0(const CloneLayer_2aa2e0_1* self) {LEAF_CHECK return new(CloneAllocate_2aa2e0(56,8,0x41202003u,nullptr,"",0))CloneLayer_2aa2e0_1(*self);}

extern "C" void* CloneAllocate_2aacc0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2aacc0_0 {virtual ~CloneLayer_2aacc0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2aacc0_0(const CloneLayer_2aacc0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2aacc0_1 : CloneLayer_2aacc0_0 {virtual ~CloneLayer_2aacc0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_2aacc0_1(const CloneLayer_2aacc0_1& source):CloneLayer_2aacc0_0(source),field_32(source.field_32){}};
struct CloneLayer_2aacc0_2 : CloneLayer_2aacc0_1 {virtual ~CloneLayer_2aacc0_2();uint32_t field_36;uint32_t field_40;uint32_t field_44;uint32_t field_48;uint32_t field_52;uint8_t field_56;unsigned char unknown_57[7];__attribute__((always_inline)) CloneLayer_2aacc0_2(const CloneLayer_2aacc0_2& source):CloneLayer_2aacc0_1(source),field_36(source.field_36),field_40(source.field_40),field_44(source.field_44),field_48(source.field_48),field_52(source.field_52),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_2aacc0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2aacc0_2* RecoveredClone_2aacc0(const CloneLayer_2aacc0_2* self) {LEAF_CHECK return new(CloneAllocate_2aacc0(64,8,0x41202003u,nullptr,"",0))CloneLayer_2aacc0_2(*self);}

extern "C" void* CloneAllocate_2f71a0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2f71a0_0 {virtual ~CloneLayer_2f71a0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_2f71a0_0(const CloneLayer_2f71a0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_2f71a0_1 : CloneLayer_2f71a0_0 {virtual ~CloneLayer_2f71a0_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_2f71a0_1(const CloneLayer_2f71a0_1& source):CloneLayer_2f71a0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_2f71a0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2f71a0_1* RecoveredClone_2f71a0(const CloneLayer_2f71a0_1* self) {LEAF_CHECK return new(CloneAllocate_2f71a0(40,8,0x41202003u,nullptr,"",0))CloneLayer_2f71a0_1(*self);}

extern "C" void* CloneAllocate_2f7ab0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_2f7ab0_0 {virtual ~CloneLayer_2f7ab0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;__attribute__((always_inline)) CloneLayer_2f7ab0_0(const CloneLayer_2f7ab0_0& source):field_8(source.field_8),field_16(source.field_16){}};
struct CloneLayer_2f7ab0_1 : CloneLayer_2f7ab0_0 {virtual ~CloneLayer_2f7ab0_1();uint32_t field_24;unsigned char unknown_28[4];__attribute__((always_inline)) CloneLayer_2f7ab0_1(const CloneLayer_2f7ab0_1& source):CloneLayer_2f7ab0_0(source),field_24(source.field_24){}};
static_assert(sizeof(CloneLayer_2f7ab0_1)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_2f7ab0_1* RecoveredClone_2f7ab0(const CloneLayer_2f7ab0_1* self) {LEAF_CHECK return new(CloneAllocate_2f7ab0(32,8,0x41202000u,nullptr,"",0))CloneLayer_2f7ab0_1(*self);}

extern "C" void* CloneAllocate_376740(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_376740_0 {virtual ~CloneLayer_376740_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_376740_0(const CloneLayer_376740_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_376740_1 : CloneLayer_376740_0 {virtual ~CloneLayer_376740_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_376740_1(const CloneLayer_376740_1& source):CloneLayer_376740_0(source),field_32(source.field_32){}};
struct CloneLayer_376740_2 : CloneLayer_376740_1 {virtual ~CloneLayer_376740_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_376740_2(const CloneLayer_376740_2& source):CloneLayer_376740_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_376740_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_376740_2* RecoveredClone_376740(const CloneLayer_376740_2* self) {LEAF_CHECK return new(CloneAllocate_376740(40,8,0x41202003u,nullptr,"",0))CloneLayer_376740_2(*self);}

extern "C" void* CloneAllocate_377aa0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_377aa0_0 {virtual ~CloneLayer_377aa0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_377aa0_0(const CloneLayer_377aa0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_377aa0_1 : CloneLayer_377aa0_0 {virtual ~CloneLayer_377aa0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_377aa0_1(const CloneLayer_377aa0_1& source):CloneLayer_377aa0_0(source),field_32(source.field_32){}};
struct CloneLayer_377aa0_2 : CloneLayer_377aa0_1 {virtual ~CloneLayer_377aa0_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_377aa0_2(const CloneLayer_377aa0_2& source):CloneLayer_377aa0_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_377aa0_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_377aa0_2* RecoveredClone_377aa0(const CloneLayer_377aa0_2* self) {LEAF_CHECK return new(CloneAllocate_377aa0(40,8,0x41202003u,nullptr,"",0))CloneLayer_377aa0_2(*self);}

extern "C" void* CloneAllocate_378030(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_378030_0 {virtual ~CloneLayer_378030_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_378030_0(const CloneLayer_378030_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_378030_1 : CloneLayer_378030_0 {virtual ~CloneLayer_378030_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_378030_1(const CloneLayer_378030_1& source):CloneLayer_378030_0(source),field_32(source.field_32){}};
struct CloneLayer_378030_2 : CloneLayer_378030_1 {virtual ~CloneLayer_378030_2();uint8_t field_36;unsigned char unknown_37[3];__attribute__((always_inline)) CloneLayer_378030_2(const CloneLayer_378030_2& source):CloneLayer_378030_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_378030_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_378030_2* RecoveredClone_378030(const CloneLayer_378030_2* self) {LEAF_CHECK return new(CloneAllocate_378030(40,8,0x41202003u,nullptr,"",0))CloneLayer_378030_2(*self);}

extern "C" void* CloneAllocate_3c28e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_3c28e0_0 {virtual ~CloneLayer_3c28e0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_3c28e0_0(const CloneLayer_3c28e0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_3c28e0_1 : CloneLayer_3c28e0_0 {virtual ~CloneLayer_3c28e0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_3c28e0_1(const CloneLayer_3c28e0_1& source):CloneLayer_3c28e0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_3c28e0_2 : CloneLayer_3c28e0_1 {virtual ~CloneLayer_3c28e0_2();uint32_t field_48;unsigned char unknown_52[4];__attribute__((always_inline)) CloneLayer_3c28e0_2(const CloneLayer_3c28e0_2& source):CloneLayer_3c28e0_1(source),field_48(source.field_48){}};
static_assert(sizeof(CloneLayer_3c28e0_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_3c28e0_2* RecoveredClone_3c28e0(const CloneLayer_3c28e0_2* self) {LEAF_CHECK return new(CloneAllocate_3c28e0(56,8,0x41202003u,nullptr,"",0))CloneLayer_3c28e0_2(*self);}

extern "C" void* CloneAllocate_3c7c80(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_3c7c80_0 {virtual ~CloneLayer_3c7c80_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_3c7c80_0(const CloneLayer_3c7c80_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_3c7c80_1 : CloneLayer_3c7c80_0 {virtual ~CloneLayer_3c7c80_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_3c7c80_1(const CloneLayer_3c7c80_1& source):CloneLayer_3c7c80_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_3c7c80_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_3c7c80_1* RecoveredClone_3c7c80(const CloneLayer_3c7c80_1* self) {LEAF_CHECK return new(CloneAllocate_3c7c80(40,8,0x41202003u,nullptr,"",0))CloneLayer_3c7c80_1(*self);}

extern "C" void* CloneAllocate_3caf30(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_3caf30_0 {virtual ~CloneLayer_3caf30_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_3caf30_0(const CloneLayer_3caf30_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_3caf30_1 : CloneLayer_3caf30_0 {virtual ~CloneLayer_3caf30_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_3caf30_1(const CloneLayer_3caf30_1& source):CloneLayer_3caf30_0(source),field_32(source.field_32){}};
struct CloneLayer_3caf30_2 : CloneLayer_3caf30_1 {virtual ~CloneLayer_3caf30_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_3caf30_2(const CloneLayer_3caf30_2& source):CloneLayer_3caf30_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_3caf30_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_3caf30_2* RecoveredClone_3caf30(const CloneLayer_3caf30_2* self) {LEAF_CHECK return new(CloneAllocate_3caf30(40,8,0x41202003u,nullptr,"",0))CloneLayer_3caf30_2(*self);}

extern "C" void* CloneAllocate_3cb680(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_3cb680_0 {virtual ~CloneLayer_3cb680_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_3cb680_0(const CloneLayer_3cb680_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_3cb680_1 : CloneLayer_3cb680_0 {virtual ~CloneLayer_3cb680_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_3cb680_1(const CloneLayer_3cb680_1& source):CloneLayer_3cb680_0(source),field_32(source.field_32){}};
struct CloneLayer_3cb680_2 : CloneLayer_3cb680_1 {virtual ~CloneLayer_3cb680_2();uint32_t field_36;uint32_t field_40;unsigned char unknown_44[4];__attribute__((always_inline)) CloneLayer_3cb680_2(const CloneLayer_3cb680_2& source):CloneLayer_3cb680_1(source),field_36(source.field_36),field_40(source.field_40){}};
static_assert(sizeof(CloneLayer_3cb680_2)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_3cb680_2* RecoveredClone_3cb680(const CloneLayer_3cb680_2* self) {LEAF_CHECK return new(CloneAllocate_3cb680(48,8,0x41202003u,nullptr,"",0))CloneLayer_3cb680_2(*self);}

extern "C" void* CloneAllocate_3ce5e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_3ce5e0_0 {virtual ~CloneLayer_3ce5e0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_3ce5e0_0(const CloneLayer_3ce5e0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_3ce5e0_1 : CloneLayer_3ce5e0_0 {virtual ~CloneLayer_3ce5e0_1();uint16_t field_32;unsigned char unknown_34[6];__attribute__((always_inline)) CloneLayer_3ce5e0_1(const CloneLayer_3ce5e0_1& source):CloneLayer_3ce5e0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_3ce5e0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_3ce5e0_1* RecoveredClone_3ce5e0(const CloneLayer_3ce5e0_1* self) {LEAF_CHECK return new(CloneAllocate_3ce5e0(40,8,0x41202003u,nullptr,"",0))CloneLayer_3ce5e0_1(*self);}

extern "C" void* CloneAllocate_3d7530(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_3d7530_0 {virtual ~CloneLayer_3d7530_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_3d7530_0(const CloneLayer_3d7530_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_3d7530_1 : CloneLayer_3d7530_0 {virtual ~CloneLayer_3d7530_1();uint32_t field_32;uint16_t field_36;uint8_t field_38;unsigned char unknown_39[1];__attribute__((always_inline)) CloneLayer_3d7530_1(const CloneLayer_3d7530_1& source):CloneLayer_3d7530_0(source),field_32(source.field_32),field_36(source.field_36),field_38(source.field_38){}};
static_assert(sizeof(CloneLayer_3d7530_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_3d7530_1* RecoveredClone_3d7530(const CloneLayer_3d7530_1* self) {LEAF_CHECK return new(CloneAllocate_3d7530(40,8,0x41202003u,nullptr,"",0))CloneLayer_3d7530_1(*self);}

extern "C" void* CloneAllocate_3d8220(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_3d8220_0 {virtual ~CloneLayer_3d8220_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_3d8220_0(const CloneLayer_3d8220_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_3d8220_1 : CloneLayer_3d8220_0 {virtual ~CloneLayer_3d8220_1();uint32_t field_32;uint16_t field_36;uint8_t field_38;__attribute__((always_inline)) CloneLayer_3d8220_1(const CloneLayer_3d8220_1& source):CloneLayer_3d8220_0(source),field_32(source.field_32),field_36(source.field_36),field_38(source.field_38){}};
struct CloneLayer_3d8220_2 : CloneLayer_3d8220_1 {virtual ~CloneLayer_3d8220_2();unsigned char unknown_39[1];uint32_t field_40;uint32_t field_44;uint32_t field_48;unsigned char unknown_52[4];__attribute__((always_inline)) CloneLayer_3d8220_2(const CloneLayer_3d8220_2& source):CloneLayer_3d8220_1(source),field_40(source.field_40),field_44(source.field_44),field_48(source.field_48){}};
static_assert(sizeof(CloneLayer_3d8220_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_3d8220_2* RecoveredClone_3d8220(const CloneLayer_3d8220_2* self) {LEAF_CHECK return new(CloneAllocate_3d8220(56,8,0x41202003u,nullptr,"",0))CloneLayer_3d8220_2(*self);}

extern "C" void* CloneAllocate_3f3350(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_3f3350_0 {virtual ~CloneLayer_3f3350_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;__attribute__((always_inline)) CloneLayer_3f3350_0(const CloneLayer_3f3350_0& source):field_8(source.field_8),field_16(source.field_16){}};
struct CloneLayer_3f3350_1 : CloneLayer_3f3350_0 {virtual ~CloneLayer_3f3350_1();uint64_t field_24;__attribute__((always_inline)) CloneLayer_3f3350_1(const CloneLayer_3f3350_1& source):CloneLayer_3f3350_0(source),field_24(source.field_24){}};
struct CloneLayer_3f3350_2 : CloneLayer_3f3350_1 {virtual ~CloneLayer_3f3350_2();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_3f3350_2(const CloneLayer_3f3350_2& source):CloneLayer_3f3350_1(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_3f3350_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_3f3350_2* RecoveredClone_3f3350(const CloneLayer_3f3350_2* self) {LEAF_CHECK return new(CloneAllocate_3f3350(40,8,0x41202000u,nullptr,"",0))CloneLayer_3f3350_2(*self);}

extern "C" void* CloneAllocate_3f35b0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_3f35b0_0 {virtual ~CloneLayer_3f35b0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;__attribute__((always_inline)) CloneLayer_3f35b0_0(const CloneLayer_3f35b0_0& source):field_8(source.field_8),field_16(source.field_16){}};
struct CloneLayer_3f35b0_1 : CloneLayer_3f35b0_0 {virtual ~CloneLayer_3f35b0_1();uint64_t field_24;__attribute__((always_inline)) CloneLayer_3f35b0_1(const CloneLayer_3f35b0_1& source):CloneLayer_3f35b0_0(source),field_24(source.field_24){}};
static_assert(sizeof(CloneLayer_3f35b0_1)==32,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_3f35b0_1* RecoveredClone_3f35b0(const CloneLayer_3f35b0_1* self) {LEAF_CHECK return new(CloneAllocate_3f35b0(32,8,0x41202000u,nullptr,"",0))CloneLayer_3f35b0_1(*self);}

extern "C" void* CloneAllocate_42f0e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_42f0e0_0 {virtual ~CloneLayer_42f0e0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_42f0e0_0(const CloneLayer_42f0e0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_42f0e0_1 : CloneLayer_42f0e0_0 {virtual ~CloneLayer_42f0e0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_42f0e0_1(const CloneLayer_42f0e0_1& source):CloneLayer_42f0e0_0(source),field_32(source.field_32){}};
struct CloneLayer_42f0e0_2 : CloneLayer_42f0e0_1 {virtual ~CloneLayer_42f0e0_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_42f0e0_2(const CloneLayer_42f0e0_2& source):CloneLayer_42f0e0_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_42f0e0_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_42f0e0_2* RecoveredClone_42f0e0(const CloneLayer_42f0e0_2* self) {LEAF_CHECK return new(CloneAllocate_42f0e0(40,8,0x41202003u,nullptr,"",0))CloneLayer_42f0e0_2(*self);}

extern "C" void* CloneAllocate_438f50(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_438f50_0 {virtual ~CloneLayer_438f50_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_438f50_0(const CloneLayer_438f50_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_438f50_1 : CloneLayer_438f50_0 {virtual ~CloneLayer_438f50_1();uint64_t field_32;__attribute__((always_inline)) CloneLayer_438f50_1(const CloneLayer_438f50_1& source):CloneLayer_438f50_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_438f50_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_438f50_1* RecoveredClone_438f50(const CloneLayer_438f50_1* self) {LEAF_CHECK return new(CloneAllocate_438f50(40,8,0x41202003u,nullptr,"",0))CloneLayer_438f50_1(*self);}

extern "C" void* CloneAllocate_43dac0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_43dac0_0 {virtual ~CloneLayer_43dac0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_43dac0_0(const CloneLayer_43dac0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_43dac0_1 : CloneLayer_43dac0_0 {virtual ~CloneLayer_43dac0_1();uint64_t field_32;__attribute__((always_inline)) CloneLayer_43dac0_1(const CloneLayer_43dac0_1& source):CloneLayer_43dac0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_43dac0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_43dac0_1* RecoveredClone_43dac0(const CloneLayer_43dac0_1* self) {LEAF_CHECK return new(CloneAllocate_43dac0(40,8,0x41202003u,nullptr,"",0))CloneLayer_43dac0_1(*self);}

extern "C" void* CloneAllocate_47d5d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_47d5d0_0 {virtual ~CloneLayer_47d5d0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_47d5d0_0(const CloneLayer_47d5d0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_47d5d0_1 : CloneLayer_47d5d0_0 {virtual ~CloneLayer_47d5d0_1();uint64_t field_32;__attribute__((always_inline)) CloneLayer_47d5d0_1(const CloneLayer_47d5d0_1& source):CloneLayer_47d5d0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_47d5d0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_47d5d0_1* RecoveredClone_47d5d0(const CloneLayer_47d5d0_1* self) {LEAF_CHECK return new(CloneAllocate_47d5d0(40,8,0x41202003u,nullptr,"",0))CloneLayer_47d5d0_1(*self);}

extern "C" void* CloneAllocate_47dd10(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_47dd10_0 {virtual ~CloneLayer_47dd10_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_47dd10_0(const CloneLayer_47dd10_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_47dd10_1 : CloneLayer_47dd10_0 {virtual ~CloneLayer_47dd10_1();uint64_t field_32;uint64_t field_40;uint32_t field_48;unsigned char unknown_52[4];__attribute__((always_inline)) CloneLayer_47dd10_1(const CloneLayer_47dd10_1& source):CloneLayer_47dd10_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){}};
static_assert(sizeof(CloneLayer_47dd10_1)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_47dd10_1* RecoveredClone_47dd10(const CloneLayer_47dd10_1* self) {LEAF_CHECK return new(CloneAllocate_47dd10(56,8,0x41202003u,nullptr,"",0))CloneLayer_47dd10_1(*self);}

extern "C" void* CloneAllocate_47e080(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_47e080_0 {virtual ~CloneLayer_47e080_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_47e080_0(const CloneLayer_47e080_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_47e080_1 : CloneLayer_47e080_0 {virtual ~CloneLayer_47e080_1();uint64_t field_32;uint64_t field_40;uint32_t field_48;unsigned char unknown_52[4];__attribute__((always_inline)) CloneLayer_47e080_1(const CloneLayer_47e080_1& source):CloneLayer_47e080_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){}};
static_assert(sizeof(CloneLayer_47e080_1)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_47e080_1* RecoveredClone_47e080(const CloneLayer_47e080_1* self) {LEAF_CHECK return new(CloneAllocate_47e080(56,8,0x41202003u,nullptr,"",0))CloneLayer_47e080_1(*self);}

extern "C" void* CloneAllocate_47e3f0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_47e3f0_0 {virtual ~CloneLayer_47e3f0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_47e3f0_0(const CloneLayer_47e3f0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_47e3f0_1 : CloneLayer_47e3f0_0 {virtual ~CloneLayer_47e3f0_1();uint64_t field_32;uint64_t field_40;uint32_t field_48;unsigned char unknown_52[4];__attribute__((always_inline)) CloneLayer_47e3f0_1(const CloneLayer_47e3f0_1& source):CloneLayer_47e3f0_0(source),field_32(source.field_32),field_40(source.field_40),field_48(source.field_48){}};
static_assert(sizeof(CloneLayer_47e3f0_1)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_47e3f0_1* RecoveredClone_47e3f0(const CloneLayer_47e3f0_1* self) {LEAF_CHECK return new(CloneAllocate_47e3f0(56,8,0x41202003u,nullptr,"",0))CloneLayer_47e3f0_1(*self);}

extern "C" void* CloneAllocate_480330(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_480330_0 {virtual ~CloneLayer_480330_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_480330_0(const CloneLayer_480330_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_480330_1 : CloneLayer_480330_0 {virtual ~CloneLayer_480330_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_480330_1(const CloneLayer_480330_1& source):CloneLayer_480330_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_480330_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_480330_1* RecoveredClone_480330(const CloneLayer_480330_1* self) {LEAF_CHECK return new(CloneAllocate_480330(40,8,0x41202003u,nullptr,"",0))CloneLayer_480330_1(*self);}

extern "C" void* CloneAllocate_480a50(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_480a50_0 {virtual ~CloneLayer_480a50_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_480a50_0(const CloneLayer_480a50_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_480a50_1 : CloneLayer_480a50_0 {virtual ~CloneLayer_480a50_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_480a50_1(const CloneLayer_480a50_1& source):CloneLayer_480a50_0(source),field_32(source.field_32){}};
struct CloneLayer_480a50_2 : CloneLayer_480a50_1 {virtual ~CloneLayer_480a50_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_480a50_2(const CloneLayer_480a50_2& source):CloneLayer_480a50_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_480a50_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_480a50_2* RecoveredClone_480a50(const CloneLayer_480a50_2* self) {LEAF_CHECK return new(CloneAllocate_480a50(40,8,0x41202003u,nullptr,"",0))CloneLayer_480a50_2(*self);}

extern "C" void* CloneAllocate_4835c0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4835c0_0 {virtual ~CloneLayer_4835c0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4835c0_0(const CloneLayer_4835c0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4835c0_1 : CloneLayer_4835c0_0 {virtual ~CloneLayer_4835c0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4835c0_1(const CloneLayer_4835c0_1& source):CloneLayer_4835c0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4835c0_2 : CloneLayer_4835c0_1 {virtual ~CloneLayer_4835c0_2();uint64_t field_48;__attribute__((always_inline)) CloneLayer_4835c0_2(const CloneLayer_4835c0_2& source):CloneLayer_4835c0_1(source),field_48(source.field_48){}};
static_assert(sizeof(CloneLayer_4835c0_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4835c0_2* RecoveredClone_4835c0(const CloneLayer_4835c0_2* self) {LEAF_CHECK return new(CloneAllocate_4835c0(56,8,0x41202003u,nullptr,"",0))CloneLayer_4835c0_2(*self);}

extern "C" void* CloneAllocate_484680(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_484680_0 {virtual ~CloneLayer_484680_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_484680_0(const CloneLayer_484680_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_484680_1 : CloneLayer_484680_0 {virtual ~CloneLayer_484680_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_484680_1(const CloneLayer_484680_1& source):CloneLayer_484680_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_484680_2 : CloneLayer_484680_1 {virtual ~CloneLayer_484680_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_484680_2(const CloneLayer_484680_2& source):CloneLayer_484680_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_484680_3 : CloneLayer_484680_2 {virtual ~CloneLayer_484680_3();__attribute__((always_inline)) CloneLayer_484680_3(const CloneLayer_484680_3& source):CloneLayer_484680_2(source){}};
static_assert(sizeof(CloneLayer_484680_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_484680_3* RecoveredClone_484680(const CloneLayer_484680_3* self) {LEAF_CHECK return new(CloneAllocate_484680(64,8,0x41202003u,nullptr,"",0))CloneLayer_484680_3(*self);}

extern "C" void* CloneAllocate_484b20(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_484b20_0 {virtual ~CloneLayer_484b20_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_484b20_0(const CloneLayer_484b20_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_484b20_1 : CloneLayer_484b20_0 {virtual ~CloneLayer_484b20_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_484b20_1(const CloneLayer_484b20_1& source):CloneLayer_484b20_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_484b20_2 : CloneLayer_484b20_1 {virtual ~CloneLayer_484b20_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_484b20_2(const CloneLayer_484b20_2& source):CloneLayer_484b20_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_484b20_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_484b20_2* RecoveredClone_484b20(const CloneLayer_484b20_2* self) {LEAF_CHECK return new(CloneAllocate_484b20(64,8,0x41202003u,nullptr,"",0))CloneLayer_484b20_2(*self);}

extern "C" void* CloneAllocate_486940(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_486940_0 {virtual ~CloneLayer_486940_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_486940_0(const CloneLayer_486940_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_486940_1 : CloneLayer_486940_0 {virtual ~CloneLayer_486940_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_486940_1(const CloneLayer_486940_1& source):CloneLayer_486940_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_486940_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_486940_1* RecoveredClone_486940(const CloneLayer_486940_1* self) {LEAF_CHECK return new(CloneAllocate_486940(40,8,0x41202003u,nullptr,"",0))CloneLayer_486940_1(*self);}

extern "C" void* CloneAllocate_486e20(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_486e20_0 {virtual ~CloneLayer_486e20_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_486e20_0(const CloneLayer_486e20_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_486e20_1 : CloneLayer_486e20_0 {virtual ~CloneLayer_486e20_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_486e20_1(const CloneLayer_486e20_1& source):CloneLayer_486e20_0(source),field_32(source.field_32){}};
struct CloneLayer_486e20_2 : CloneLayer_486e20_1 {virtual ~CloneLayer_486e20_2();uint32_t field_36;__attribute__((always_inline)) CloneLayer_486e20_2(const CloneLayer_486e20_2& source):CloneLayer_486e20_1(source),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_486e20_2)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_486e20_2* RecoveredClone_486e20(const CloneLayer_486e20_2* self) {LEAF_CHECK return new(CloneAllocate_486e20(40,8,0x41202003u,nullptr,"",0))CloneLayer_486e20_2(*self);}

extern "C" void* CloneAllocate_487ab0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_487ab0_0 {virtual ~CloneLayer_487ab0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_487ab0_0(const CloneLayer_487ab0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_487ab0_1 : CloneLayer_487ab0_0 {virtual ~CloneLayer_487ab0_1();uint32_t field_32;__attribute__((always_inline)) CloneLayer_487ab0_1(const CloneLayer_487ab0_1& source):CloneLayer_487ab0_0(source),field_32(source.field_32){}};
struct CloneLayer_487ab0_2 : CloneLayer_487ab0_1 {virtual ~CloneLayer_487ab0_2();unsigned char unknown_36[4];uint64_t field_40;CloneControl64* field_48;__attribute__((always_inline)) CloneLayer_487ab0_2(const CloneLayer_487ab0_2& source):CloneLayer_487ab0_1(source),field_40(source.field_40),field_48(source.field_48){if(field_48)__atomic_fetch_add(&field_48->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_487ab0_2)==56,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_487ab0_2* RecoveredClone_487ab0(const CloneLayer_487ab0_2* self) {LEAF_CHECK return new(CloneAllocate_487ab0(56,8,0x41202003u,nullptr,"",0))CloneLayer_487ab0_2(*self);}

extern "C" void* CloneAllocate_4b6600(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4b6600_0 {virtual ~CloneLayer_4b6600_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4b6600_0(const CloneLayer_4b6600_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4b6600_1 : CloneLayer_4b6600_0 {virtual ~CloneLayer_4b6600_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4b6600_1(const CloneLayer_4b6600_1& source):CloneLayer_4b6600_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4b6600_2 : CloneLayer_4b6600_1 {virtual ~CloneLayer_4b6600_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4b6600_2(const CloneLayer_4b6600_2& source):CloneLayer_4b6600_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4b6600_3 : CloneLayer_4b6600_2 {virtual ~CloneLayer_4b6600_3();__attribute__((always_inline)) CloneLayer_4b6600_3(const CloneLayer_4b6600_3& source):CloneLayer_4b6600_2(source){}};
static_assert(sizeof(CloneLayer_4b6600_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4b6600_3* RecoveredClone_4b6600(const CloneLayer_4b6600_3* self) {LEAF_CHECK return new(CloneAllocate_4b6600(64,8,0x41202003u,nullptr,"",0))CloneLayer_4b6600_3(*self);}

extern "C" void* CloneAllocate_4b6a30(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4b6a30_0 {virtual ~CloneLayer_4b6a30_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4b6a30_0(const CloneLayer_4b6a30_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4b6a30_1 : CloneLayer_4b6a30_0 {virtual ~CloneLayer_4b6a30_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4b6a30_1(const CloneLayer_4b6a30_1& source):CloneLayer_4b6a30_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4b6a30_2 : CloneLayer_4b6a30_1 {virtual ~CloneLayer_4b6a30_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4b6a30_2(const CloneLayer_4b6a30_2& source):CloneLayer_4b6a30_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4b6a30_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4b6a30_2* RecoveredClone_4b6a30(const CloneLayer_4b6a30_2* self) {LEAF_CHECK return new(CloneAllocate_4b6a30(64,8,0x41202003u,nullptr,"",0))CloneLayer_4b6a30_2(*self);}

extern "C" void* CloneAllocate_4b7150(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4b7150_0 {virtual ~CloneLayer_4b7150_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4b7150_0(const CloneLayer_4b7150_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4b7150_1 : CloneLayer_4b7150_0 {virtual ~CloneLayer_4b7150_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4b7150_1(const CloneLayer_4b7150_1& source):CloneLayer_4b7150_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4b7150_2 : CloneLayer_4b7150_1 {virtual ~CloneLayer_4b7150_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4b7150_2(const CloneLayer_4b7150_2& source):CloneLayer_4b7150_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4b7150_3 : CloneLayer_4b7150_2 {virtual ~CloneLayer_4b7150_3();__attribute__((always_inline)) CloneLayer_4b7150_3(const CloneLayer_4b7150_3& source):CloneLayer_4b7150_2(source){}};
static_assert(sizeof(CloneLayer_4b7150_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4b7150_3* RecoveredClone_4b7150(const CloneLayer_4b7150_3* self) {LEAF_CHECK return new(CloneAllocate_4b7150(64,8,0x41202003u,nullptr,"",0))CloneLayer_4b7150_3(*self);}

extern "C" void* CloneAllocate_4b7580(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4b7580_0 {virtual ~CloneLayer_4b7580_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4b7580_0(const CloneLayer_4b7580_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4b7580_1 : CloneLayer_4b7580_0 {virtual ~CloneLayer_4b7580_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4b7580_1(const CloneLayer_4b7580_1& source):CloneLayer_4b7580_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4b7580_2 : CloneLayer_4b7580_1 {virtual ~CloneLayer_4b7580_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4b7580_2(const CloneLayer_4b7580_2& source):CloneLayer_4b7580_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4b7580_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4b7580_2* RecoveredClone_4b7580(const CloneLayer_4b7580_2* self) {LEAF_CHECK return new(CloneAllocate_4b7580(64,8,0x41202003u,nullptr,"",0))CloneLayer_4b7580_2(*self);}

extern "C" void* CloneAllocate_4b7cb0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4b7cb0_0 {virtual ~CloneLayer_4b7cb0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4b7cb0_0(const CloneLayer_4b7cb0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4b7cb0_1 : CloneLayer_4b7cb0_0 {virtual ~CloneLayer_4b7cb0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4b7cb0_1(const CloneLayer_4b7cb0_1& source):CloneLayer_4b7cb0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4b7cb0_2 : CloneLayer_4b7cb0_1 {virtual ~CloneLayer_4b7cb0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4b7cb0_2(const CloneLayer_4b7cb0_2& source):CloneLayer_4b7cb0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4b7cb0_3 : CloneLayer_4b7cb0_2 {virtual ~CloneLayer_4b7cb0_3();__attribute__((always_inline)) CloneLayer_4b7cb0_3(const CloneLayer_4b7cb0_3& source):CloneLayer_4b7cb0_2(source){}};
static_assert(sizeof(CloneLayer_4b7cb0_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4b7cb0_3* RecoveredClone_4b7cb0(const CloneLayer_4b7cb0_3* self) {LEAF_CHECK return new(CloneAllocate_4b7cb0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4b7cb0_3(*self);}

extern "C" void* CloneAllocate_4b80e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4b80e0_0 {virtual ~CloneLayer_4b80e0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4b80e0_0(const CloneLayer_4b80e0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4b80e0_1 : CloneLayer_4b80e0_0 {virtual ~CloneLayer_4b80e0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4b80e0_1(const CloneLayer_4b80e0_1& source):CloneLayer_4b80e0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4b80e0_2 : CloneLayer_4b80e0_1 {virtual ~CloneLayer_4b80e0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4b80e0_2(const CloneLayer_4b80e0_2& source):CloneLayer_4b80e0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4b80e0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4b80e0_2* RecoveredClone_4b80e0(const CloneLayer_4b80e0_2* self) {LEAF_CHECK return new(CloneAllocate_4b80e0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4b80e0_2(*self);}

extern "C" void* CloneAllocate_4b8800(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4b8800_0 {virtual ~CloneLayer_4b8800_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4b8800_0(const CloneLayer_4b8800_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4b8800_1 : CloneLayer_4b8800_0 {virtual ~CloneLayer_4b8800_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4b8800_1(const CloneLayer_4b8800_1& source):CloneLayer_4b8800_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4b8800_2 : CloneLayer_4b8800_1 {virtual ~CloneLayer_4b8800_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4b8800_2(const CloneLayer_4b8800_2& source):CloneLayer_4b8800_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4b8800_3 : CloneLayer_4b8800_2 {virtual ~CloneLayer_4b8800_3();__attribute__((always_inline)) CloneLayer_4b8800_3(const CloneLayer_4b8800_3& source):CloneLayer_4b8800_2(source){}};
static_assert(sizeof(CloneLayer_4b8800_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4b8800_3* RecoveredClone_4b8800(const CloneLayer_4b8800_3* self) {LEAF_CHECK return new(CloneAllocate_4b8800(64,8,0x41202003u,nullptr,"",0))CloneLayer_4b8800_3(*self);}

extern "C" void* CloneAllocate_4b9fd0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4b9fd0_0 {virtual ~CloneLayer_4b9fd0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4b9fd0_0(const CloneLayer_4b9fd0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4b9fd0_1 : CloneLayer_4b9fd0_0 {virtual ~CloneLayer_4b9fd0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4b9fd0_1(const CloneLayer_4b9fd0_1& source):CloneLayer_4b9fd0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4b9fd0_2 : CloneLayer_4b9fd0_1 {virtual ~CloneLayer_4b9fd0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4b9fd0_2(const CloneLayer_4b9fd0_2& source):CloneLayer_4b9fd0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4b9fd0_3 : CloneLayer_4b9fd0_2 {virtual ~CloneLayer_4b9fd0_3();__attribute__((always_inline)) CloneLayer_4b9fd0_3(const CloneLayer_4b9fd0_3& source):CloneLayer_4b9fd0_2(source){}};
static_assert(sizeof(CloneLayer_4b9fd0_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4b9fd0_3* RecoveredClone_4b9fd0(const CloneLayer_4b9fd0_3* self) {LEAF_CHECK return new(CloneAllocate_4b9fd0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4b9fd0_3(*self);}

extern "C" void* CloneAllocate_4ba400(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4ba400_0 {virtual ~CloneLayer_4ba400_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4ba400_0(const CloneLayer_4ba400_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4ba400_1 : CloneLayer_4ba400_0 {virtual ~CloneLayer_4ba400_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4ba400_1(const CloneLayer_4ba400_1& source):CloneLayer_4ba400_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4ba400_2 : CloneLayer_4ba400_1 {virtual ~CloneLayer_4ba400_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4ba400_2(const CloneLayer_4ba400_2& source):CloneLayer_4ba400_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4ba400_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4ba400_2* RecoveredClone_4ba400(const CloneLayer_4ba400_2* self) {LEAF_CHECK return new(CloneAllocate_4ba400(64,8,0x41202003u,nullptr,"",0))CloneLayer_4ba400_2(*self);}

extern "C" void* CloneAllocate_4d46b0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d46b0_0 {virtual ~CloneLayer_4d46b0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d46b0_0(const CloneLayer_4d46b0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d46b0_1 : CloneLayer_4d46b0_0 {virtual ~CloneLayer_4d46b0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d46b0_1(const CloneLayer_4d46b0_1& source):CloneLayer_4d46b0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d46b0_2 : CloneLayer_4d46b0_1 {virtual ~CloneLayer_4d46b0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d46b0_2(const CloneLayer_4d46b0_2& source):CloneLayer_4d46b0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4d46b0_3 : CloneLayer_4d46b0_2 {virtual ~CloneLayer_4d46b0_3();__attribute__((always_inline)) CloneLayer_4d46b0_3(const CloneLayer_4d46b0_3& source):CloneLayer_4d46b0_2(source){}};
static_assert(sizeof(CloneLayer_4d46b0_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d46b0_3* RecoveredClone_4d46b0(const CloneLayer_4d46b0_3* self) {LEAF_CHECK return new(CloneAllocate_4d46b0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d46b0_3(*self);}

extern "C" void* CloneAllocate_4d4ae0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d4ae0_0 {virtual ~CloneLayer_4d4ae0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d4ae0_0(const CloneLayer_4d4ae0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d4ae0_1 : CloneLayer_4d4ae0_0 {virtual ~CloneLayer_4d4ae0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d4ae0_1(const CloneLayer_4d4ae0_1& source):CloneLayer_4d4ae0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d4ae0_2 : CloneLayer_4d4ae0_1 {virtual ~CloneLayer_4d4ae0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d4ae0_2(const CloneLayer_4d4ae0_2& source):CloneLayer_4d4ae0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4d4ae0_3 : CloneLayer_4d4ae0_2 {virtual ~CloneLayer_4d4ae0_3();__attribute__((always_inline)) CloneLayer_4d4ae0_3(const CloneLayer_4d4ae0_3& source):CloneLayer_4d4ae0_2(source){}};
static_assert(sizeof(CloneLayer_4d4ae0_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d4ae0_3* RecoveredClone_4d4ae0(const CloneLayer_4d4ae0_3* self) {LEAF_CHECK return new(CloneAllocate_4d4ae0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d4ae0_3(*self);}

extern "C" void* CloneAllocate_4d4e70(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d4e70_0 {virtual ~CloneLayer_4d4e70_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d4e70_0(const CloneLayer_4d4e70_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d4e70_1 : CloneLayer_4d4e70_0 {virtual ~CloneLayer_4d4e70_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d4e70_1(const CloneLayer_4d4e70_1& source):CloneLayer_4d4e70_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d4e70_2 : CloneLayer_4d4e70_1 {virtual ~CloneLayer_4d4e70_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d4e70_2(const CloneLayer_4d4e70_2& source):CloneLayer_4d4e70_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4d4e70_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d4e70_2* RecoveredClone_4d4e70(const CloneLayer_4d4e70_2* self) {LEAF_CHECK return new(CloneAllocate_4d4e70(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d4e70_2(*self);}

extern "C" void* CloneAllocate_4d5410(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d5410_0 {virtual ~CloneLayer_4d5410_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d5410_0(const CloneLayer_4d5410_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d5410_1 : CloneLayer_4d5410_0 {virtual ~CloneLayer_4d5410_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d5410_1(const CloneLayer_4d5410_1& source):CloneLayer_4d5410_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d5410_2 : CloneLayer_4d5410_1 {virtual ~CloneLayer_4d5410_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d5410_2(const CloneLayer_4d5410_2& source):CloneLayer_4d5410_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4d5410_3 : CloneLayer_4d5410_2 {virtual ~CloneLayer_4d5410_3();__attribute__((always_inline)) CloneLayer_4d5410_3(const CloneLayer_4d5410_3& source):CloneLayer_4d5410_2(source){}};
static_assert(sizeof(CloneLayer_4d5410_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d5410_3* RecoveredClone_4d5410(const CloneLayer_4d5410_3* self) {LEAF_CHECK return new(CloneAllocate_4d5410(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d5410_3(*self);}

extern "C" void* CloneAllocate_4d5840(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d5840_0 {virtual ~CloneLayer_4d5840_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d5840_0(const CloneLayer_4d5840_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d5840_1 : CloneLayer_4d5840_0 {virtual ~CloneLayer_4d5840_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d5840_1(const CloneLayer_4d5840_1& source):CloneLayer_4d5840_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d5840_2 : CloneLayer_4d5840_1 {virtual ~CloneLayer_4d5840_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d5840_2(const CloneLayer_4d5840_2& source):CloneLayer_4d5840_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4d5840_3 : CloneLayer_4d5840_2 {virtual ~CloneLayer_4d5840_3();__attribute__((always_inline)) CloneLayer_4d5840_3(const CloneLayer_4d5840_3& source):CloneLayer_4d5840_2(source){}};
static_assert(sizeof(CloneLayer_4d5840_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d5840_3* RecoveredClone_4d5840(const CloneLayer_4d5840_3* self) {LEAF_CHECK return new(CloneAllocate_4d5840(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d5840_3(*self);}

extern "C" void* CloneAllocate_4d5cd0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d5cd0_0 {virtual ~CloneLayer_4d5cd0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d5cd0_0(const CloneLayer_4d5cd0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d5cd0_1 : CloneLayer_4d5cd0_0 {virtual ~CloneLayer_4d5cd0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d5cd0_1(const CloneLayer_4d5cd0_1& source):CloneLayer_4d5cd0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d5cd0_2 : CloneLayer_4d5cd0_1 {virtual ~CloneLayer_4d5cd0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d5cd0_2(const CloneLayer_4d5cd0_2& source):CloneLayer_4d5cd0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4d5cd0_3 : CloneLayer_4d5cd0_2 {virtual ~CloneLayer_4d5cd0_3();__attribute__((always_inline)) CloneLayer_4d5cd0_3(const CloneLayer_4d5cd0_3& source):CloneLayer_4d5cd0_2(source){}};
static_assert(sizeof(CloneLayer_4d5cd0_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d5cd0_3* RecoveredClone_4d5cd0(const CloneLayer_4d5cd0_3* self) {LEAF_CHECK return new(CloneAllocate_4d5cd0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d5cd0_3(*self);}

extern "C" void* CloneAllocate_4d6170(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d6170_0 {virtual ~CloneLayer_4d6170_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d6170_0(const CloneLayer_4d6170_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d6170_1 : CloneLayer_4d6170_0 {virtual ~CloneLayer_4d6170_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d6170_1(const CloneLayer_4d6170_1& source):CloneLayer_4d6170_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d6170_2 : CloneLayer_4d6170_1 {virtual ~CloneLayer_4d6170_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d6170_2(const CloneLayer_4d6170_2& source):CloneLayer_4d6170_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4d6170_3 : CloneLayer_4d6170_2 {virtual ~CloneLayer_4d6170_3();__attribute__((always_inline)) CloneLayer_4d6170_3(const CloneLayer_4d6170_3& source):CloneLayer_4d6170_2(source){}};
static_assert(sizeof(CloneLayer_4d6170_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d6170_3* RecoveredClone_4d6170(const CloneLayer_4d6170_3* self) {LEAF_CHECK return new(CloneAllocate_4d6170(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d6170_3(*self);}

extern "C" void* CloneAllocate_4d6490(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d6490_0 {virtual ~CloneLayer_4d6490_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d6490_0(const CloneLayer_4d6490_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d6490_1 : CloneLayer_4d6490_0 {virtual ~CloneLayer_4d6490_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d6490_1(const CloneLayer_4d6490_1& source):CloneLayer_4d6490_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d6490_2 : CloneLayer_4d6490_1 {virtual ~CloneLayer_4d6490_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d6490_2(const CloneLayer_4d6490_2& source):CloneLayer_4d6490_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4d6490_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d6490_2* RecoveredClone_4d6490(const CloneLayer_4d6490_2* self) {LEAF_CHECK return new(CloneAllocate_4d6490(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d6490_2(*self);}

extern "C" void* CloneAllocate_4d9800(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d9800_0 {virtual ~CloneLayer_4d9800_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d9800_0(const CloneLayer_4d9800_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d9800_1 : CloneLayer_4d9800_0 {virtual ~CloneLayer_4d9800_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d9800_1(const CloneLayer_4d9800_1& source):CloneLayer_4d9800_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d9800_2 : CloneLayer_4d9800_1 {virtual ~CloneLayer_4d9800_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d9800_2(const CloneLayer_4d9800_2& source):CloneLayer_4d9800_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4d9800_3 : CloneLayer_4d9800_2 {virtual ~CloneLayer_4d9800_3();__attribute__((always_inline)) CloneLayer_4d9800_3(const CloneLayer_4d9800_3& source):CloneLayer_4d9800_2(source){}};
static_assert(sizeof(CloneLayer_4d9800_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d9800_3* RecoveredClone_4d9800(const CloneLayer_4d9800_3* self) {LEAF_CHECK return new(CloneAllocate_4d9800(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d9800_3(*self);}

extern "C" void* CloneAllocate_4d9c30(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d9c30_0 {virtual ~CloneLayer_4d9c30_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d9c30_0(const CloneLayer_4d9c30_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d9c30_1 : CloneLayer_4d9c30_0 {virtual ~CloneLayer_4d9c30_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d9c30_1(const CloneLayer_4d9c30_1& source):CloneLayer_4d9c30_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d9c30_2 : CloneLayer_4d9c30_1 {virtual ~CloneLayer_4d9c30_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d9c30_2(const CloneLayer_4d9c30_2& source):CloneLayer_4d9c30_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4d9c30_3 : CloneLayer_4d9c30_2 {virtual ~CloneLayer_4d9c30_3();__attribute__((always_inline)) CloneLayer_4d9c30_3(const CloneLayer_4d9c30_3& source):CloneLayer_4d9c30_2(source){}};
static_assert(sizeof(CloneLayer_4d9c30_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d9c30_3* RecoveredClone_4d9c30(const CloneLayer_4d9c30_3* self) {LEAF_CHECK return new(CloneAllocate_4d9c30(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d9c30_3(*self);}

extern "C" void* CloneAllocate_4d9f50(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4d9f50_0 {virtual ~CloneLayer_4d9f50_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4d9f50_0(const CloneLayer_4d9f50_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4d9f50_1 : CloneLayer_4d9f50_0 {virtual ~CloneLayer_4d9f50_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4d9f50_1(const CloneLayer_4d9f50_1& source):CloneLayer_4d9f50_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4d9f50_2 : CloneLayer_4d9f50_1 {virtual ~CloneLayer_4d9f50_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4d9f50_2(const CloneLayer_4d9f50_2& source):CloneLayer_4d9f50_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4d9f50_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4d9f50_2* RecoveredClone_4d9f50(const CloneLayer_4d9f50_2* self) {LEAF_CHECK return new(CloneAllocate_4d9f50(64,8,0x41202003u,nullptr,"",0))CloneLayer_4d9f50_2(*self);}

extern "C" void* CloneAllocate_4db3b0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4db3b0_0 {virtual ~CloneLayer_4db3b0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4db3b0_0(const CloneLayer_4db3b0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4db3b0_1 : CloneLayer_4db3b0_0 {virtual ~CloneLayer_4db3b0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4db3b0_1(const CloneLayer_4db3b0_1& source):CloneLayer_4db3b0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4db3b0_2 : CloneLayer_4db3b0_1 {virtual ~CloneLayer_4db3b0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4db3b0_2(const CloneLayer_4db3b0_2& source):CloneLayer_4db3b0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4db3b0_3 : CloneLayer_4db3b0_2 {virtual ~CloneLayer_4db3b0_3();__attribute__((always_inline)) CloneLayer_4db3b0_3(const CloneLayer_4db3b0_3& source):CloneLayer_4db3b0_2(source){}};
static_assert(sizeof(CloneLayer_4db3b0_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4db3b0_3* RecoveredClone_4db3b0(const CloneLayer_4db3b0_3* self) {LEAF_CHECK return new(CloneAllocate_4db3b0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4db3b0_3(*self);}

extern "C" void* CloneAllocate_4db850(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4db850_0 {virtual ~CloneLayer_4db850_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4db850_0(const CloneLayer_4db850_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4db850_1 : CloneLayer_4db850_0 {virtual ~CloneLayer_4db850_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4db850_1(const CloneLayer_4db850_1& source):CloneLayer_4db850_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4db850_2 : CloneLayer_4db850_1 {virtual ~CloneLayer_4db850_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4db850_2(const CloneLayer_4db850_2& source):CloneLayer_4db850_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4db850_3 : CloneLayer_4db850_2 {virtual ~CloneLayer_4db850_3();__attribute__((always_inline)) CloneLayer_4db850_3(const CloneLayer_4db850_3& source):CloneLayer_4db850_2(source){}};
static_assert(sizeof(CloneLayer_4db850_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4db850_3* RecoveredClone_4db850(const CloneLayer_4db850_3* self) {LEAF_CHECK return new(CloneAllocate_4db850(64,8,0x41202003u,nullptr,"",0))CloneLayer_4db850_3(*self);}

extern "C" void* CloneAllocate_4dbb70(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4dbb70_0 {virtual ~CloneLayer_4dbb70_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4dbb70_0(const CloneLayer_4dbb70_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4dbb70_1 : CloneLayer_4dbb70_0 {virtual ~CloneLayer_4dbb70_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4dbb70_1(const CloneLayer_4dbb70_1& source):CloneLayer_4dbb70_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4dbb70_2 : CloneLayer_4dbb70_1 {virtual ~CloneLayer_4dbb70_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4dbb70_2(const CloneLayer_4dbb70_2& source):CloneLayer_4dbb70_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4dbb70_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4dbb70_2* RecoveredClone_4dbb70(const CloneLayer_4dbb70_2* self) {LEAF_CHECK return new(CloneAllocate_4dbb70(64,8,0x41202003u,nullptr,"",0))CloneLayer_4dbb70_2(*self);}

extern "C" void* CloneAllocate_4dce10(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4dce10_0 {virtual ~CloneLayer_4dce10_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4dce10_0(const CloneLayer_4dce10_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4dce10_1 : CloneLayer_4dce10_0 {virtual ~CloneLayer_4dce10_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4dce10_1(const CloneLayer_4dce10_1& source):CloneLayer_4dce10_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4dce10_2 : CloneLayer_4dce10_1 {virtual ~CloneLayer_4dce10_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4dce10_2(const CloneLayer_4dce10_2& source):CloneLayer_4dce10_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4dce10_3 : CloneLayer_4dce10_2 {virtual ~CloneLayer_4dce10_3();__attribute__((always_inline)) CloneLayer_4dce10_3(const CloneLayer_4dce10_3& source):CloneLayer_4dce10_2(source){}};
static_assert(sizeof(CloneLayer_4dce10_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4dce10_3* RecoveredClone_4dce10(const CloneLayer_4dce10_3* self) {LEAF_CHECK return new(CloneAllocate_4dce10(64,8,0x41202003u,nullptr,"",0))CloneLayer_4dce10_3(*self);}

extern "C" void* CloneAllocate_4dd240(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4dd240_0 {virtual ~CloneLayer_4dd240_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4dd240_0(const CloneLayer_4dd240_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4dd240_1 : CloneLayer_4dd240_0 {virtual ~CloneLayer_4dd240_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4dd240_1(const CloneLayer_4dd240_1& source):CloneLayer_4dd240_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4dd240_2 : CloneLayer_4dd240_1 {virtual ~CloneLayer_4dd240_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4dd240_2(const CloneLayer_4dd240_2& source):CloneLayer_4dd240_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4dd240_3 : CloneLayer_4dd240_2 {virtual ~CloneLayer_4dd240_3();__attribute__((always_inline)) CloneLayer_4dd240_3(const CloneLayer_4dd240_3& source):CloneLayer_4dd240_2(source){}};
static_assert(sizeof(CloneLayer_4dd240_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4dd240_3* RecoveredClone_4dd240(const CloneLayer_4dd240_3* self) {LEAF_CHECK return new(CloneAllocate_4dd240(64,8,0x41202003u,nullptr,"",0))CloneLayer_4dd240_3(*self);}

extern "C" void* CloneAllocate_4dd560(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4dd560_0 {virtual ~CloneLayer_4dd560_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4dd560_0(const CloneLayer_4dd560_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4dd560_1 : CloneLayer_4dd560_0 {virtual ~CloneLayer_4dd560_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4dd560_1(const CloneLayer_4dd560_1& source):CloneLayer_4dd560_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4dd560_2 : CloneLayer_4dd560_1 {virtual ~CloneLayer_4dd560_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4dd560_2(const CloneLayer_4dd560_2& source):CloneLayer_4dd560_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4dd560_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4dd560_2* RecoveredClone_4dd560(const CloneLayer_4dd560_2* self) {LEAF_CHECK return new(CloneAllocate_4dd560(64,8,0x41202003u,nullptr,"",0))CloneLayer_4dd560_2(*self);}

extern "C" void* CloneAllocate_4de910(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4de910_0 {virtual ~CloneLayer_4de910_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4de910_0(const CloneLayer_4de910_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4de910_1 : CloneLayer_4de910_0 {virtual ~CloneLayer_4de910_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4de910_1(const CloneLayer_4de910_1& source):CloneLayer_4de910_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4de910_2 : CloneLayer_4de910_1 {virtual ~CloneLayer_4de910_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4de910_2(const CloneLayer_4de910_2& source):CloneLayer_4de910_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4de910_3 : CloneLayer_4de910_2 {virtual ~CloneLayer_4de910_3();__attribute__((always_inline)) CloneLayer_4de910_3(const CloneLayer_4de910_3& source):CloneLayer_4de910_2(source){}};
static_assert(sizeof(CloneLayer_4de910_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4de910_3* RecoveredClone_4de910(const CloneLayer_4de910_3* self) {LEAF_CHECK return new(CloneAllocate_4de910(64,8,0x41202003u,nullptr,"",0))CloneLayer_4de910_3(*self);}

extern "C" void* CloneAllocate_4dedb0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4dedb0_0 {virtual ~CloneLayer_4dedb0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4dedb0_0(const CloneLayer_4dedb0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4dedb0_1 : CloneLayer_4dedb0_0 {virtual ~CloneLayer_4dedb0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4dedb0_1(const CloneLayer_4dedb0_1& source):CloneLayer_4dedb0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4dedb0_2 : CloneLayer_4dedb0_1 {virtual ~CloneLayer_4dedb0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4dedb0_2(const CloneLayer_4dedb0_2& source):CloneLayer_4dedb0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4dedb0_3 : CloneLayer_4dedb0_2 {virtual ~CloneLayer_4dedb0_3();__attribute__((always_inline)) CloneLayer_4dedb0_3(const CloneLayer_4dedb0_3& source):CloneLayer_4dedb0_2(source){}};
static_assert(sizeof(CloneLayer_4dedb0_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4dedb0_3* RecoveredClone_4dedb0(const CloneLayer_4dedb0_3* self) {LEAF_CHECK return new(CloneAllocate_4dedb0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4dedb0_3(*self);}

extern "C" void* CloneAllocate_4df0d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4df0d0_0 {virtual ~CloneLayer_4df0d0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4df0d0_0(const CloneLayer_4df0d0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4df0d0_1 : CloneLayer_4df0d0_0 {virtual ~CloneLayer_4df0d0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4df0d0_1(const CloneLayer_4df0d0_1& source):CloneLayer_4df0d0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4df0d0_2 : CloneLayer_4df0d0_1 {virtual ~CloneLayer_4df0d0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4df0d0_2(const CloneLayer_4df0d0_2& source):CloneLayer_4df0d0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4df0d0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4df0d0_2* RecoveredClone_4df0d0(const CloneLayer_4df0d0_2* self) {LEAF_CHECK return new(CloneAllocate_4df0d0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4df0d0_2(*self);}

extern "C" void* CloneAllocate_4e0500(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e0500_0 {virtual ~CloneLayer_4e0500_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e0500_0(const CloneLayer_4e0500_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e0500_1 : CloneLayer_4e0500_0 {virtual ~CloneLayer_4e0500_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e0500_1(const CloneLayer_4e0500_1& source):CloneLayer_4e0500_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e0500_2 : CloneLayer_4e0500_1 {virtual ~CloneLayer_4e0500_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e0500_2(const CloneLayer_4e0500_2& source):CloneLayer_4e0500_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e0500_3 : CloneLayer_4e0500_2 {virtual ~CloneLayer_4e0500_3();__attribute__((always_inline)) CloneLayer_4e0500_3(const CloneLayer_4e0500_3& source):CloneLayer_4e0500_2(source){}};
static_assert(sizeof(CloneLayer_4e0500_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e0500_3* RecoveredClone_4e0500(const CloneLayer_4e0500_3* self) {LEAF_CHECK return new(CloneAllocate_4e0500(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e0500_3(*self);}

extern "C" void* CloneAllocate_4e0930(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e0930_0 {virtual ~CloneLayer_4e0930_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e0930_0(const CloneLayer_4e0930_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e0930_1 : CloneLayer_4e0930_0 {virtual ~CloneLayer_4e0930_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e0930_1(const CloneLayer_4e0930_1& source):CloneLayer_4e0930_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e0930_2 : CloneLayer_4e0930_1 {virtual ~CloneLayer_4e0930_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e0930_2(const CloneLayer_4e0930_2& source):CloneLayer_4e0930_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e0930_3 : CloneLayer_4e0930_2 {virtual ~CloneLayer_4e0930_3();__attribute__((always_inline)) CloneLayer_4e0930_3(const CloneLayer_4e0930_3& source):CloneLayer_4e0930_2(source){}};
static_assert(sizeof(CloneLayer_4e0930_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e0930_3* RecoveredClone_4e0930(const CloneLayer_4e0930_3* self) {LEAF_CHECK return new(CloneAllocate_4e0930(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e0930_3(*self);}

extern "C" void* CloneAllocate_4e0cc0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e0cc0_0 {virtual ~CloneLayer_4e0cc0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e0cc0_0(const CloneLayer_4e0cc0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e0cc0_1 : CloneLayer_4e0cc0_0 {virtual ~CloneLayer_4e0cc0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e0cc0_1(const CloneLayer_4e0cc0_1& source):CloneLayer_4e0cc0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e0cc0_2 : CloneLayer_4e0cc0_1 {virtual ~CloneLayer_4e0cc0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e0cc0_2(const CloneLayer_4e0cc0_2& source):CloneLayer_4e0cc0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4e0cc0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e0cc0_2* RecoveredClone_4e0cc0(const CloneLayer_4e0cc0_2* self) {LEAF_CHECK return new(CloneAllocate_4e0cc0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e0cc0_2(*self);}

extern "C" void* CloneAllocate_4e2170(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e2170_0 {virtual ~CloneLayer_4e2170_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e2170_0(const CloneLayer_4e2170_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e2170_1 : CloneLayer_4e2170_0 {virtual ~CloneLayer_4e2170_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e2170_1(const CloneLayer_4e2170_1& source):CloneLayer_4e2170_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e2170_2 : CloneLayer_4e2170_1 {virtual ~CloneLayer_4e2170_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e2170_2(const CloneLayer_4e2170_2& source):CloneLayer_4e2170_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e2170_3 : CloneLayer_4e2170_2 {virtual ~CloneLayer_4e2170_3();__attribute__((always_inline)) CloneLayer_4e2170_3(const CloneLayer_4e2170_3& source):CloneLayer_4e2170_2(source){}};
static_assert(sizeof(CloneLayer_4e2170_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e2170_3* RecoveredClone_4e2170(const CloneLayer_4e2170_3* self) {LEAF_CHECK return new(CloneAllocate_4e2170(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e2170_3(*self);}

extern "C" void* CloneAllocate_4e25a0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e25a0_0 {virtual ~CloneLayer_4e25a0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e25a0_0(const CloneLayer_4e25a0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e25a0_1 : CloneLayer_4e25a0_0 {virtual ~CloneLayer_4e25a0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e25a0_1(const CloneLayer_4e25a0_1& source):CloneLayer_4e25a0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e25a0_2 : CloneLayer_4e25a0_1 {virtual ~CloneLayer_4e25a0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e25a0_2(const CloneLayer_4e25a0_2& source):CloneLayer_4e25a0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e25a0_3 : CloneLayer_4e25a0_2 {virtual ~CloneLayer_4e25a0_3();__attribute__((always_inline)) CloneLayer_4e25a0_3(const CloneLayer_4e25a0_3& source):CloneLayer_4e25a0_2(source){}};
static_assert(sizeof(CloneLayer_4e25a0_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e25a0_3* RecoveredClone_4e25a0(const CloneLayer_4e25a0_3* self) {LEAF_CHECK return new(CloneAllocate_4e25a0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e25a0_3(*self);}

extern "C" void* CloneAllocate_4e28c0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e28c0_0 {virtual ~CloneLayer_4e28c0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e28c0_0(const CloneLayer_4e28c0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e28c0_1 : CloneLayer_4e28c0_0 {virtual ~CloneLayer_4e28c0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e28c0_1(const CloneLayer_4e28c0_1& source):CloneLayer_4e28c0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e28c0_2 : CloneLayer_4e28c0_1 {virtual ~CloneLayer_4e28c0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e28c0_2(const CloneLayer_4e28c0_2& source):CloneLayer_4e28c0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4e28c0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e28c0_2* RecoveredClone_4e28c0(const CloneLayer_4e28c0_2* self) {LEAF_CHECK return new(CloneAllocate_4e28c0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e28c0_2(*self);}

extern "C" void* CloneAllocate_4e3ad0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e3ad0_0 {virtual ~CloneLayer_4e3ad0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e3ad0_0(const CloneLayer_4e3ad0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e3ad0_1 : CloneLayer_4e3ad0_0 {virtual ~CloneLayer_4e3ad0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e3ad0_1(const CloneLayer_4e3ad0_1& source):CloneLayer_4e3ad0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e3ad0_2 : CloneLayer_4e3ad0_1 {virtual ~CloneLayer_4e3ad0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e3ad0_2(const CloneLayer_4e3ad0_2& source):CloneLayer_4e3ad0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e3ad0_3 : CloneLayer_4e3ad0_2 {virtual ~CloneLayer_4e3ad0_3();__attribute__((always_inline)) CloneLayer_4e3ad0_3(const CloneLayer_4e3ad0_3& source):CloneLayer_4e3ad0_2(source){}};
static_assert(sizeof(CloneLayer_4e3ad0_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e3ad0_3* RecoveredClone_4e3ad0(const CloneLayer_4e3ad0_3* self) {LEAF_CHECK return new(CloneAllocate_4e3ad0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e3ad0_3(*self);}

extern "C" void* CloneAllocate_4e3f00(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e3f00_0 {virtual ~CloneLayer_4e3f00_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e3f00_0(const CloneLayer_4e3f00_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e3f00_1 : CloneLayer_4e3f00_0 {virtual ~CloneLayer_4e3f00_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e3f00_1(const CloneLayer_4e3f00_1& source):CloneLayer_4e3f00_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e3f00_2 : CloneLayer_4e3f00_1 {virtual ~CloneLayer_4e3f00_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e3f00_2(const CloneLayer_4e3f00_2& source):CloneLayer_4e3f00_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e3f00_3 : CloneLayer_4e3f00_2 {virtual ~CloneLayer_4e3f00_3();__attribute__((always_inline)) CloneLayer_4e3f00_3(const CloneLayer_4e3f00_3& source):CloneLayer_4e3f00_2(source){}};
static_assert(sizeof(CloneLayer_4e3f00_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e3f00_3* RecoveredClone_4e3f00(const CloneLayer_4e3f00_3* self) {LEAF_CHECK return new(CloneAllocate_4e3f00(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e3f00_3(*self);}

extern "C" void* CloneAllocate_4e4220(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e4220_0 {virtual ~CloneLayer_4e4220_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e4220_0(const CloneLayer_4e4220_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e4220_1 : CloneLayer_4e4220_0 {virtual ~CloneLayer_4e4220_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e4220_1(const CloneLayer_4e4220_1& source):CloneLayer_4e4220_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e4220_2 : CloneLayer_4e4220_1 {virtual ~CloneLayer_4e4220_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e4220_2(const CloneLayer_4e4220_2& source):CloneLayer_4e4220_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4e4220_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e4220_2* RecoveredClone_4e4220(const CloneLayer_4e4220_2* self) {LEAF_CHECK return new(CloneAllocate_4e4220(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e4220_2(*self);}

extern "C" void* CloneAllocate_4e55e0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e55e0_0 {virtual ~CloneLayer_4e55e0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e55e0_0(const CloneLayer_4e55e0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e55e0_1 : CloneLayer_4e55e0_0 {virtual ~CloneLayer_4e55e0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e55e0_1(const CloneLayer_4e55e0_1& source):CloneLayer_4e55e0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e55e0_2 : CloneLayer_4e55e0_1 {virtual ~CloneLayer_4e55e0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e55e0_2(const CloneLayer_4e55e0_2& source):CloneLayer_4e55e0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e55e0_3 : CloneLayer_4e55e0_2 {virtual ~CloneLayer_4e55e0_3();__attribute__((always_inline)) CloneLayer_4e55e0_3(const CloneLayer_4e55e0_3& source):CloneLayer_4e55e0_2(source){}};
static_assert(sizeof(CloneLayer_4e55e0_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e55e0_3* RecoveredClone_4e55e0(const CloneLayer_4e55e0_3* self) {LEAF_CHECK return new(CloneAllocate_4e55e0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e55e0_3(*self);}

extern "C" void* CloneAllocate_4e5a10(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e5a10_0 {virtual ~CloneLayer_4e5a10_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e5a10_0(const CloneLayer_4e5a10_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e5a10_1 : CloneLayer_4e5a10_0 {virtual ~CloneLayer_4e5a10_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e5a10_1(const CloneLayer_4e5a10_1& source):CloneLayer_4e5a10_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e5a10_2 : CloneLayer_4e5a10_1 {virtual ~CloneLayer_4e5a10_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e5a10_2(const CloneLayer_4e5a10_2& source):CloneLayer_4e5a10_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e5a10_3 : CloneLayer_4e5a10_2 {virtual ~CloneLayer_4e5a10_3();__attribute__((always_inline)) CloneLayer_4e5a10_3(const CloneLayer_4e5a10_3& source):CloneLayer_4e5a10_2(source){}};
static_assert(sizeof(CloneLayer_4e5a10_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e5a10_3* RecoveredClone_4e5a10(const CloneLayer_4e5a10_3* self) {LEAF_CHECK return new(CloneAllocate_4e5a10(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e5a10_3(*self);}

extern "C" void* CloneAllocate_4e5da0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e5da0_0 {virtual ~CloneLayer_4e5da0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e5da0_0(const CloneLayer_4e5da0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e5da0_1 : CloneLayer_4e5da0_0 {virtual ~CloneLayer_4e5da0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e5da0_1(const CloneLayer_4e5da0_1& source):CloneLayer_4e5da0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e5da0_2 : CloneLayer_4e5da0_1 {virtual ~CloneLayer_4e5da0_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e5da0_2(const CloneLayer_4e5da0_2& source):CloneLayer_4e5da0_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4e5da0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e5da0_2* RecoveredClone_4e5da0(const CloneLayer_4e5da0_2* self) {LEAF_CHECK return new(CloneAllocate_4e5da0(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e5da0_2(*self);}

extern "C" void* CloneAllocate_4e8090(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e8090_0 {virtual ~CloneLayer_4e8090_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e8090_0(const CloneLayer_4e8090_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e8090_1 : CloneLayer_4e8090_0 {virtual ~CloneLayer_4e8090_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e8090_1(const CloneLayer_4e8090_1& source):CloneLayer_4e8090_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e8090_2 : CloneLayer_4e8090_1 {virtual ~CloneLayer_4e8090_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e8090_2(const CloneLayer_4e8090_2& source):CloneLayer_4e8090_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e8090_3 : CloneLayer_4e8090_2 {virtual ~CloneLayer_4e8090_3();__attribute__((always_inline)) CloneLayer_4e8090_3(const CloneLayer_4e8090_3& source):CloneLayer_4e8090_2(source){}};
static_assert(sizeof(CloneLayer_4e8090_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e8090_3* RecoveredClone_4e8090(const CloneLayer_4e8090_3* self) {LEAF_CHECK return new(CloneAllocate_4e8090(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e8090_3(*self);}

extern "C" void* CloneAllocate_4e8530(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e8530_0 {virtual ~CloneLayer_4e8530_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e8530_0(const CloneLayer_4e8530_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e8530_1 : CloneLayer_4e8530_0 {virtual ~CloneLayer_4e8530_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e8530_1(const CloneLayer_4e8530_1& source):CloneLayer_4e8530_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e8530_2 : CloneLayer_4e8530_1 {virtual ~CloneLayer_4e8530_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e8530_2(const CloneLayer_4e8530_2& source):CloneLayer_4e8530_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e8530_3 : CloneLayer_4e8530_2 {virtual ~CloneLayer_4e8530_3();__attribute__((always_inline)) CloneLayer_4e8530_3(const CloneLayer_4e8530_3& source):CloneLayer_4e8530_2(source){}};
static_assert(sizeof(CloneLayer_4e8530_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e8530_3* RecoveredClone_4e8530(const CloneLayer_4e8530_3* self) {LEAF_CHECK return new(CloneAllocate_4e8530(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e8530_3(*self);}

extern "C" void* CloneAllocate_4e8850(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e8850_0 {virtual ~CloneLayer_4e8850_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e8850_0(const CloneLayer_4e8850_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e8850_1 : CloneLayer_4e8850_0 {virtual ~CloneLayer_4e8850_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e8850_1(const CloneLayer_4e8850_1& source):CloneLayer_4e8850_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e8850_2 : CloneLayer_4e8850_1 {virtual ~CloneLayer_4e8850_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e8850_2(const CloneLayer_4e8850_2& source):CloneLayer_4e8850_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4e8850_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e8850_2* RecoveredClone_4e8850(const CloneLayer_4e8850_2* self) {LEAF_CHECK return new(CloneAllocate_4e8850(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e8850_2(*self);}

extern "C" void* CloneAllocate_4e9a20(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e9a20_0 {virtual ~CloneLayer_4e9a20_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e9a20_0(const CloneLayer_4e9a20_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e9a20_1 : CloneLayer_4e9a20_0 {virtual ~CloneLayer_4e9a20_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e9a20_1(const CloneLayer_4e9a20_1& source):CloneLayer_4e9a20_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e9a20_2 : CloneLayer_4e9a20_1 {virtual ~CloneLayer_4e9a20_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e9a20_2(const CloneLayer_4e9a20_2& source):CloneLayer_4e9a20_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e9a20_3 : CloneLayer_4e9a20_2 {virtual ~CloneLayer_4e9a20_3();__attribute__((always_inline)) CloneLayer_4e9a20_3(const CloneLayer_4e9a20_3& source):CloneLayer_4e9a20_2(source){}};
static_assert(sizeof(CloneLayer_4e9a20_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e9a20_3* RecoveredClone_4e9a20(const CloneLayer_4e9a20_3* self) {LEAF_CHECK return new(CloneAllocate_4e9a20(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e9a20_3(*self);}

extern "C" void* CloneAllocate_4e9e50(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4e9e50_0 {virtual ~CloneLayer_4e9e50_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4e9e50_0(const CloneLayer_4e9e50_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4e9e50_1 : CloneLayer_4e9e50_0 {virtual ~CloneLayer_4e9e50_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4e9e50_1(const CloneLayer_4e9e50_1& source):CloneLayer_4e9e50_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4e9e50_2 : CloneLayer_4e9e50_1 {virtual ~CloneLayer_4e9e50_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4e9e50_2(const CloneLayer_4e9e50_2& source):CloneLayer_4e9e50_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
struct CloneLayer_4e9e50_3 : CloneLayer_4e9e50_2 {virtual ~CloneLayer_4e9e50_3();__attribute__((always_inline)) CloneLayer_4e9e50_3(const CloneLayer_4e9e50_3& source):CloneLayer_4e9e50_2(source){}};
static_assert(sizeof(CloneLayer_4e9e50_3)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4e9e50_3* RecoveredClone_4e9e50(const CloneLayer_4e9e50_3* self) {LEAF_CHECK return new(CloneAllocate_4e9e50(64,8,0x41202003u,nullptr,"",0))CloneLayer_4e9e50_3(*self);}

extern "C" void* CloneAllocate_4ea170(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_4ea170_0 {virtual ~CloneLayer_4ea170_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_4ea170_0(const CloneLayer_4ea170_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_4ea170_1 : CloneLayer_4ea170_0 {virtual ~CloneLayer_4ea170_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_4ea170_1(const CloneLayer_4ea170_1& source):CloneLayer_4ea170_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_4ea170_2 : CloneLayer_4ea170_1 {virtual ~CloneLayer_4ea170_2();uint64_t field_48;CloneControl64* field_56;__attribute__((always_inline)) CloneLayer_4ea170_2(const CloneLayer_4ea170_2& source):CloneLayer_4ea170_1(source),field_48(source.field_48),field_56(source.field_56){if(field_56)__atomic_fetch_add(&field_56->references,1,__ATOMIC_RELAXED);}};
static_assert(sizeof(CloneLayer_4ea170_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_4ea170_2* RecoveredClone_4ea170(const CloneLayer_4ea170_2* self) {LEAF_CHECK return new(CloneAllocate_4ea170(64,8,0x41202003u,nullptr,"",0))CloneLayer_4ea170_2(*self);}

extern "C" void* CloneAllocate_56f170(uint32_t,uint32_t,uint32_t,uint32_t);
struct CloneLayer_56f170_0 {virtual ~CloneLayer_56f170_0();uint32_t field_8;__attribute__((always_inline)) CloneLayer_56f170_0(const CloneLayer_56f170_0& source):field_8(source.field_8){}};
struct CloneLayer_56f170_1 : CloneLayer_56f170_0 {virtual ~CloneLayer_56f170_1();uint32_t field_12;__attribute__((always_inline)) CloneLayer_56f170_1(const CloneLayer_56f170_1& source):CloneLayer_56f170_0(source),field_12(source.field_12){}};
static_assert(sizeof(CloneLayer_56f170_1)==16,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_56f170_1* RecoveredClone_56f170(const CloneLayer_56f170_1* self) {LEAF_CHECK return new(CloneAllocate_56f170(16,8,0,0x41202000u))CloneLayer_56f170_1(*self);}

extern "C" void* CloneAllocate_58d7c0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_58d7c0_0 {virtual ~CloneLayer_58d7c0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_58d7c0_0(const CloneLayer_58d7c0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_58d7c0_1 : CloneLayer_58d7c0_0 {virtual ~CloneLayer_58d7c0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_58d7c0_1(const CloneLayer_58d7c0_1& source):CloneLayer_58d7c0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
static_assert(sizeof(CloneLayer_58d7c0_1)==48,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_58d7c0_1* RecoveredClone_58d7c0(const CloneLayer_58d7c0_1* self) {LEAF_CHECK return new(CloneAllocate_58d7c0(48,8,0x41202003u,nullptr,"",0))CloneLayer_58d7c0_1(*self);}

extern "C" void* CloneAllocate_58efe0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_58efe0_0 {virtual ~CloneLayer_58efe0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_58efe0_0(const CloneLayer_58efe0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_58efe0_1 : CloneLayer_58efe0_0 {virtual ~CloneLayer_58efe0_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_58efe0_1(const CloneLayer_58efe0_1& source):CloneLayer_58efe0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_58efe0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_58efe0_1* RecoveredClone_58efe0(const CloneLayer_58efe0_1* self) {LEAF_CHECK return new(CloneAllocate_58efe0(40,8,0x41202003u,nullptr,"",0))CloneLayer_58efe0_1(*self);}

extern "C" void* CloneAllocate_5c2ba0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_5c2ba0_0 {virtual ~CloneLayer_5c2ba0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_5c2ba0_0(const CloneLayer_5c2ba0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_5c2ba0_1 : CloneLayer_5c2ba0_0 {virtual ~CloneLayer_5c2ba0_1();uint64_t field_32;__attribute__((always_inline)) CloneLayer_5c2ba0_1(const CloneLayer_5c2ba0_1& source):CloneLayer_5c2ba0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_5c2ba0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_5c2ba0_1* RecoveredClone_5c2ba0(const CloneLayer_5c2ba0_1* self) {LEAF_CHECK return new(CloneAllocate_5c2ba0(40,8,0x41202003u,nullptr,"",0))CloneLayer_5c2ba0_1(*self);}

extern "C" void* CloneAllocate_602ae0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_602ae0_0 {virtual ~CloneLayer_602ae0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_602ae0_0(const CloneLayer_602ae0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_602ae0_1 : CloneLayer_602ae0_0 {virtual ~CloneLayer_602ae0_1();uint64_t field_32;__attribute__((always_inline)) CloneLayer_602ae0_1(const CloneLayer_602ae0_1& source):CloneLayer_602ae0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_602ae0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_602ae0_1* RecoveredClone_602ae0(const CloneLayer_602ae0_1* self) {LEAF_CHECK return new(CloneAllocate_602ae0(40,8,0x41202003u,nullptr,"",0))CloneLayer_602ae0_1(*self);}

extern "C" void* CloneAllocate_603d20(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_603d20_0 {virtual ~CloneLayer_603d20_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_603d20_0(const CloneLayer_603d20_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_603d20_1 : CloneLayer_603d20_0 {virtual ~CloneLayer_603d20_1();uint32_t field_32;uint32_t field_36;__attribute__((always_inline)) CloneLayer_603d20_1(const CloneLayer_603d20_1& source):CloneLayer_603d20_0(source),field_32(source.field_32),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_603d20_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_603d20_1* RecoveredClone_603d20(const CloneLayer_603d20_1* self) {LEAF_CHECK return new(CloneAllocate_603d20(40,8,0x41202003u,nullptr,"",0))CloneLayer_603d20_1(*self);}

extern "C" void* CloneAllocate_603fa0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_603fa0_0 {virtual ~CloneLayer_603fa0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_603fa0_0(const CloneLayer_603fa0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_603fa0_1 : CloneLayer_603fa0_0 {virtual ~CloneLayer_603fa0_1();uint32_t field_32;uint32_t field_36;__attribute__((always_inline)) CloneLayer_603fa0_1(const CloneLayer_603fa0_1& source):CloneLayer_603fa0_0(source),field_32(source.field_32),field_36(source.field_36){}};
static_assert(sizeof(CloneLayer_603fa0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_603fa0_1* RecoveredClone_603fa0(const CloneLayer_603fa0_1* self) {LEAF_CHECK return new(CloneAllocate_603fa0(40,8,0x41202003u,nullptr,"",0))CloneLayer_603fa0_1(*self);}

extern "C" void* CloneAllocate_604220(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_604220_0 {virtual ~CloneLayer_604220_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_604220_0(const CloneLayer_604220_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_604220_1 : CloneLayer_604220_0 {virtual ~CloneLayer_604220_1();uint16_t field_32;unsigned char unknown_34[6];__attribute__((always_inline)) CloneLayer_604220_1(const CloneLayer_604220_1& source):CloneLayer_604220_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_604220_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_604220_1* RecoveredClone_604220(const CloneLayer_604220_1* self) {LEAF_CHECK return new(CloneAllocate_604220(40,8,0x41202003u,nullptr,"",0))CloneLayer_604220_1(*self);}

extern "C" void* CloneAllocate_606ee0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_606ee0_0 {virtual ~CloneLayer_606ee0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_606ee0_0(const CloneLayer_606ee0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_606ee0_1 : CloneLayer_606ee0_0 {virtual ~CloneLayer_606ee0_1();uint32_t field_32;uint32_t field_36;uint64_t field_40;__attribute__((always_inline)) CloneLayer_606ee0_1(const CloneLayer_606ee0_1& source):CloneLayer_606ee0_0(source),field_32(source.field_32),field_36(source.field_36),field_40(source.field_40){}};
struct CloneLayer_606ee0_2 : CloneLayer_606ee0_1 {virtual ~CloneLayer_606ee0_2();uint32_t field_48;unsigned char unknown_52[4];uint64_t field_56;__attribute__((always_inline)) CloneLayer_606ee0_2(const CloneLayer_606ee0_2& source):CloneLayer_606ee0_1(source),field_48(source.field_48),field_56(source.field_56){}};
static_assert(sizeof(CloneLayer_606ee0_2)==64,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_606ee0_2* RecoveredClone_606ee0(const CloneLayer_606ee0_2* self) {LEAF_CHECK return new(CloneAllocate_606ee0(64,8,0x41202003u,nullptr,"",0))CloneLayer_606ee0_2(*self);}

extern "C" void* CloneAllocate_6105d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_6105d0_0 {virtual ~CloneLayer_6105d0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_6105d0_0(const CloneLayer_6105d0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_6105d0_1 : CloneLayer_6105d0_0 {virtual ~CloneLayer_6105d0_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_6105d0_1(const CloneLayer_6105d0_1& source):CloneLayer_6105d0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_6105d0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_6105d0_1* RecoveredClone_6105d0(const CloneLayer_6105d0_1* self) {LEAF_CHECK return new(CloneAllocate_6105d0(40,8,0x41202003u,nullptr,"",0))CloneLayer_6105d0_1(*self);}

extern "C" void* CloneAllocate_610ae0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_610ae0_0 {virtual ~CloneLayer_610ae0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_610ae0_0(const CloneLayer_610ae0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_610ae0_1 : CloneLayer_610ae0_0 {virtual ~CloneLayer_610ae0_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_610ae0_1(const CloneLayer_610ae0_1& source):CloneLayer_610ae0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_610ae0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_610ae0_1* RecoveredClone_610ae0(const CloneLayer_610ae0_1* self) {LEAF_CHECK return new(CloneAllocate_610ae0(40,8,0x41202003u,nullptr,"",0))CloneLayer_610ae0_1(*self);}

extern "C" void* CloneAllocate_611680(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_611680_0 {virtual ~CloneLayer_611680_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_611680_0(const CloneLayer_611680_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_611680_1 : CloneLayer_611680_0 {virtual ~CloneLayer_611680_1();uint32_t field_32;unsigned char unknown_36[4];__attribute__((always_inline)) CloneLayer_611680_1(const CloneLayer_611680_1& source):CloneLayer_611680_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_611680_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_611680_1* RecoveredClone_611680(const CloneLayer_611680_1* self) {LEAF_CHECK return new(CloneAllocate_611680(40,8,0x41202003u,nullptr,"",0))CloneLayer_611680_1(*self);}

extern "C" void* CloneAllocate_613610(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_613610_0 {virtual ~CloneLayer_613610_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_613610_0(const CloneLayer_613610_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_613610_1 : CloneLayer_613610_0 {virtual ~CloneLayer_613610_1();uint16_t field_32;unsigned char unknown_34[6];__attribute__((always_inline)) CloneLayer_613610_1(const CloneLayer_613610_1& source):CloneLayer_613610_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_613610_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_613610_1* RecoveredClone_613610(const CloneLayer_613610_1* self) {LEAF_CHECK return new(CloneAllocate_613610(40,8,0x41202003u,nullptr,"",0))CloneLayer_613610_1(*self);}

extern "C" void* CloneAllocate_6168a0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_6168a0_0 {virtual ~CloneLayer_6168a0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_6168a0_0(const CloneLayer_6168a0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_6168a0_1 : CloneLayer_6168a0_0 {virtual ~CloneLayer_6168a0_1();uint8_t field_32;unsigned char unknown_33[7];__attribute__((always_inline)) CloneLayer_6168a0_1(const CloneLayer_6168a0_1& source):CloneLayer_6168a0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_6168a0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_6168a0_1* RecoveredClone_6168a0(const CloneLayer_6168a0_1* self) {LEAF_CHECK return new(CloneAllocate_6168a0(40,8,0x41202003u,nullptr,"",0))CloneLayer_6168a0_1(*self);}

extern "C" void* CloneAllocate_6175d0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_6175d0_0 {virtual ~CloneLayer_6175d0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_6175d0_0(const CloneLayer_6175d0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_6175d0_1 : CloneLayer_6175d0_0 {virtual ~CloneLayer_6175d0_1();uint16_t field_32;unsigned char unknown_34[6];__attribute__((always_inline)) CloneLayer_6175d0_1(const CloneLayer_6175d0_1& source):CloneLayer_6175d0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_6175d0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_6175d0_1* RecoveredClone_6175d0(const CloneLayer_6175d0_1* self) {LEAF_CHECK return new(CloneAllocate_6175d0(40,8,0x41202003u,nullptr,"",0))CloneLayer_6175d0_1(*self);}

extern "C" void* CloneAllocate_6210a0(size_t,size_t,uint32_t,void*,const char*,uint32_t);
struct CloneLayer_6210a0_0 {virtual ~CloneLayer_6210a0_0();uint32_t field_8;unsigned char unknown_12[4];uint64_t field_16;uint64_t field_24;__attribute__((always_inline)) CloneLayer_6210a0_0(const CloneLayer_6210a0_0& source):field_8(source.field_8),field_16(source.field_16),field_24(source.field_24){}};
struct CloneLayer_6210a0_1 : CloneLayer_6210a0_0 {virtual ~CloneLayer_6210a0_1();uint16_t field_32;unsigned char unknown_34[6];__attribute__((always_inline)) CloneLayer_6210a0_1(const CloneLayer_6210a0_1& source):CloneLayer_6210a0_0(source),field_32(source.field_32){}};
static_assert(sizeof(CloneLayer_6210a0_1)==40,"provisional allocation layout");
extern "C" __attribute__((noinline)) CloneLayer_6210a0_1* RecoveredClone_6210a0(const CloneLayer_6210a0_1* self) {LEAF_CHECK return new(CloneAllocate_6210a0(40,8,0x41202003u,nullptr,"",0))CloneLayer_6210a0_1(*self);}
