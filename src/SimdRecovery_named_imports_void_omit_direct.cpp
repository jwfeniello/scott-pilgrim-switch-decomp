// Isolated machine ABI views; original class identities and complete declarations remain provisional.
// Recovered field operations and forwarding ABI views. Original complete signatures remain unknown.
#include <stdint.h>
typedef unsigned char ByteVector16 __attribute__((vector_size(16),aligned(1)));
typedef unsigned char ByteVector8 __attribute__((vector_size(8),aligned(1)));
static __attribute__((always_inline)) inline ByteVector16 LeafSet64(ByteVector16 input,uint64_t value,unsigned lane) { union {ByteVector16 vector;uint64_t words[2];} bits;bits.vector=input;bits.words[lane]=value;return bits.vector; }
static __attribute__((always_inline)) inline uint64_t LeafDoubleBits(double input) { uint64_t value;__builtin_memcpy(&value,&input,8);return value; }
static __attribute__((always_inline)) inline uint32_t LeafFloatBits(float input) { uint32_t value;__builtin_memcpy(&value,&input,4);return value; }
static __attribute__((always_inline)) inline double LeafBitsDouble(uint64_t input) { double value;__builtin_memcpy(&value,&input,8);return value; }
static __attribute__((always_inline)) inline float LeafBitsFloat(uint32_t input) { float value;__builtin_memcpy(&value,&input,4);return value; }
#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define LEAF_CHECK LeafAddedSideEffect();
#else
#define LEAF_CHECK
#endif

typedef float FloatVector4 __attribute__((vector_size(16),aligned(1)));
typedef float FloatVector2 __attribute__((vector_size(8),aligned(1)));
typedef double DoubleVector2 __attribute__((vector_size(16),aligned(1)));
typedef uint32_t UnsignedVector4 __attribute__((vector_size(16),aligned(1)));
typedef uint32_t UnsignedVector2 __attribute__((vector_size(8),aligned(1)));
typedef uint64_t UnsignedVector64x2 __attribute__((vector_size(16),aligned(1)));
typedef uint16_t UnsignedVector16x8 __attribute__((vector_size(16),aligned(1)));
typedef uint16_t UnsignedVector16x4 __attribute__((vector_size(8),aligned(1)));
template<class Out,class In> __attribute__((always_inline)) inline Out LeafBitView(In value) {
    Out result={};__builtin_memcpy(&result,&value,sizeof(Out)<sizeof(In)?sizeof(Out):sizeof(In));return result;
}
extern "C" unsigned char LeafData_639610_0[];
extern "C" void RecoveredCall_639610_5(uint64_t,uint32_t,uint32_t);
extern "C" unsigned char LeafData_639610_6[];
extern "C" unsigned char LeafData_639610_8[];
extern "C" void RecoveredCall_639610_11(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_639610() {
    LEAF_CHECK
block_0: {
    RecoveredCall_639610_5(((reinterpret_cast<uintptr_t>(LeafData_639610_0) - 2256) + 2256),uint32_t(1),uint32_t(0));
    return RecoveredCall_639610_11(((reinterpret_cast<uintptr_t>(LeafData_639610_6) - 1392) + 1392),((reinterpret_cast<uintptr_t>(LeafData_639610_0) - 2256) + 2256),((reinterpret_cast<uintptr_t>(LeafData_639610_8) - 0) + 0));
}
}

extern "C" unsigned char LeafData_673280_0[];
extern "C" uint64_t RecoveredCall_673280_5(uint64_t,uint32_t,uint64_t);
extern "C" unsigned char LeafData_673280_6[];
extern "C" unsigned char LeafData_673280_8[];
extern "C" void RecoveredCall_673280_12(uint64_t,uint64_t,uint64_t);
extern "C" unsigned char LeafData_673280_13[];
extern "C" unsigned char LeafData_673280_15[];
extern "C" void RecoveredCall_673280_22(uint64_t,uint64_t,uint64_t);
extern "C" unsigned char LeafData_673280_23[];
extern "C" unsigned char LeafData_673280_25[];
extern "C" void RecoveredCall_673280_32(uint64_t,uint64_t,uint64_t);
extern "C" unsigned char LeafData_673280_33[];
extern "C" unsigned char LeafData_673280_36[];
extern "C" unsigned char LeafData_673280_41[];
extern "C" void RecoveredCall_673280_44(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_673280() {
    LEAF_CHECK
block_0: {
    const uint64_t field0 = RecoveredCall_673280_5((((reinterpret_cast<uintptr_t>(LeafData_673280_0) - 3576) + 3576) + 4),uint32_t(0),uint32_t(8196));
    RecoveredCall_673280_12(((reinterpret_cast<uintptr_t>(LeafData_673280_8) - 144) + 144),((reinterpret_cast<uintptr_t>(LeafData_673280_0) - 3576) + 3576),((reinterpret_cast<uintptr_t>(LeafData_673280_6) - 0) + 0));
    *reinterpret_cast<uint64_t*>(((((reinterpret_cast<uintptr_t>(LeafData_673280_13) - 3584) + 3584) + 24) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((((reinterpret_cast<uintptr_t>(LeafData_673280_13) - 3584) + 3584) + 24) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((((reinterpret_cast<uintptr_t>(LeafData_673280_13) - 3584) + 3584) + 16)) = 0;
    *reinterpret_cast<ByteVector16*>((((reinterpret_cast<uintptr_t>(LeafData_673280_13) - 3584) + 3584) + 0)) = LeafBitView<ByteVector16>(UnsignedVector64x2(UnsignedVector64x2{((reinterpret_cast<uintptr_t>(LeafData_673280_13) - 3584) + 3584),((reinterpret_cast<uintptr_t>(LeafData_673280_13) - 3584) + 3584)}));
    RecoveredCall_673280_22(((reinterpret_cast<uintptr_t>(LeafData_673280_15) - 320) + 320),((reinterpret_cast<uintptr_t>(LeafData_673280_13) - 3584) + 3584),((reinterpret_cast<uintptr_t>(LeafData_673280_6) - 0) + 0));
    *reinterpret_cast<uint64_t*>(((((reinterpret_cast<uintptr_t>(LeafData_673280_23) - 3632) + 3632) + 24) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((((reinterpret_cast<uintptr_t>(LeafData_673280_23) - 3632) + 3632) + 24) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((((reinterpret_cast<uintptr_t>(LeafData_673280_23) - 3632) + 3632) + 16)) = 0;
    *reinterpret_cast<ByteVector16*>((((reinterpret_cast<uintptr_t>(LeafData_673280_23) - 3632) + 3632) + 0)) = LeafBitView<ByteVector16>(UnsignedVector64x2(UnsignedVector64x2{((reinterpret_cast<uintptr_t>(LeafData_673280_23) - 3632) + 3632),((reinterpret_cast<uintptr_t>(LeafData_673280_23) - 3632) + 3632)}));
    RecoveredCall_673280_32(((reinterpret_cast<uintptr_t>(LeafData_673280_25) - 352) + 352),((reinterpret_cast<uintptr_t>(LeafData_673280_23) - 3632) + 3632),((reinterpret_cast<uintptr_t>(LeafData_673280_6) - 0) + 0));
    *reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(LeafData_673280_33) - 3672) + 3672) + 16)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>(((((reinterpret_cast<uintptr_t>(LeafData_673280_33) - 3672) + 3672) + 0) + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_673280_36) - 15) + 15);
    *reinterpret_cast<uint64_t*>(((((reinterpret_cast<uintptr_t>(LeafData_673280_33) - 3672) + 3672) + 0) + 8)) = uint32_t(2);
    return RecoveredCall_673280_44(((reinterpret_cast<uintptr_t>(LeafData_673280_41) - 384) + 384),((reinterpret_cast<uintptr_t>(LeafData_673280_33) - 3672) + 3672),((reinterpret_cast<uintptr_t>(LeafData_673280_6) - 0) + 0));
}
}

extern "C" unsigned char LeafData_673660_0[];
extern "C" void RecoveredCall_673660_5(uint64_t,uint32_t,uint32_t);
extern "C" unsigned char LeafData_673660_6[];
extern "C" unsigned char LeafData_673660_8[];
extern "C" void RecoveredCall_673660_11(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_673660() {
    LEAF_CHECK
block_0: {
    RecoveredCall_673660_5(((reinterpret_cast<uintptr_t>(LeafData_673660_0) - 584) + 584),uint32_t(1),uint32_t(0));
    return RecoveredCall_673660_11(((reinterpret_cast<uintptr_t>(LeafData_673660_6) - 1392) + 1392),((reinterpret_cast<uintptr_t>(LeafData_673660_0) - 584) + 584),((reinterpret_cast<uintptr_t>(LeafData_673660_8) - 0) + 0));
}
}

extern "C" void RecoveredCall_97f910_6(uint64_t,uint64_t,uint32_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_97f910(uint64_t arg0,uint64_t arg1,uint32_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + uint32_t(5180))) = 0;
    *reinterpret_cast<ByteVector16*>((value_x0 + uint32_t(5164))) = LeafBitView<ByteVector16>(UnsignedVector64x2(UnsignedVector64x2{0,0}));
    return RecoveredCall_97f910_6(value_x0,value_x1,uint32_t((uint32_t(value_x2) & 1)),value_x3,value_x4);
}
}

extern "C" void RecoveredCall_a7f3e0_10(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a7f3e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 344));
    if (uint32_t(uint32_t(field0)) == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 316));
    return RecoveredCall_a7f3e0_10((value_x0 + 368),uint32_t(((uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1))) < 5) ? uint32_t(uint32_t((uint32_t(uint32_t(19)) - uint32_t(uint32_t(field1))))) : uint32_t(uint32_t(16)))));
}
block_11: {

    return;
}
}

extern "C" void RecoveredCall_a7f430_6(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a7f430(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 136));
    value_x1 = (value_x0 + 136);
    if (uint32_t(uint32_t(field0)) == 0) goto block_7;
    goto block_3;
}
block_3: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 344));
    if (uint32_t(uint32_t(field1)) == 0) goto block_7;
    goto block_5;
}
block_5: {

    return RecoveredCall_a7f430_6((value_x0 + 368),value_x1);
}
block_7: {

    return;
}
}

extern "C" unsigned char LeafData_cfd610_0[];
extern "C" void RecoveredCall_cfd610_7();
extern "C" void RecoveredCall_cfd610_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfd610(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfd610_0) - 1392) + 1392);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 1) goto block_8;
    goto block_7;
}
block_7: {
    RecoveredCall_cfd610_7();
    goto block_8;
}
block_8: {

    return RecoveredCall_cfd610_9(value_x19);
}
}

extern "C" unsigned char LeafData_cfd910_0[];
extern "C" unsigned char LeafData_cfd910_3[];
extern "C" void RecoveredCall_cfd910_10();
extern "C" void RecoveredCall_cfd910_12(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfd910(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfd910_0) - 1360) + 1360);
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = ((reinterpret_cast<uintptr_t>(LeafData_cfd910_3) - 1392) + 1392);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 1) goto block_11;
    goto block_10;
}
block_10: {
    RecoveredCall_cfd910_10();
    goto block_11;
}
block_11: {

    return RecoveredCall_cfd910_12(value_x19);
}
}

extern "C" unsigned char LeafData_cfe880_3[];
extern "C" void RecoveredCall_cfe880_8(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_cfe880_12(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_cfe880_14(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfe880(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfe880_3) - 1792) + 1792);
    RecoveredCall_cfe880_8(value_x0,(value_x0 + 112),uint32_t(uint32_t(uint32_t(-1))));
    RecoveredCall_cfe880_12(value_x0,(value_x0 + 16),uint32_t(uint32_t(uint32_t(-1))));
    return RecoveredCall_cfe880_14(value_x0);
}
}

extern "C" unsigned char LeafData_cfebb0_3[];
extern "C" void RecoveredCall_cfebb0_8(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_cfebb0_12(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_cfebb0_14(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfebb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfebb0_3) - 1936) + 1936);
    RecoveredCall_cfebb0_8(value_x0,(value_x0 + 112),uint32_t(uint32_t(uint32_t(-1))));
    RecoveredCall_cfebb0_12(value_x0,(value_x0 + 16),uint32_t(uint32_t(uint32_t(-1))));
    return RecoveredCall_cfebb0_14(value_x0);
}
}

extern "C" unsigned char LeafData_d00570_0[];
extern "C" void RecoveredCall_d00570_7();
extern "C" void RecoveredCall_d00570_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d00570(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d00570_0) - 2256) + 2256);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 1) goto block_8;
    goto block_7;
}
block_7: {
    RecoveredCall_d00570_7();
    goto block_8;
}
block_8: {

    return RecoveredCall_d00570_9(value_x19);
}
}

extern "C" unsigned char LeafData_d00850_0[];
extern "C" unsigned char LeafData_d00850_3[];
extern "C" void RecoveredCall_d00850_10();
extern "C" void RecoveredCall_d00850_12(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d00850(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d00850_0) - 2224) + 2224);
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = ((reinterpret_cast<uintptr_t>(LeafData_d00850_3) - 2256) + 2256);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 1) goto block_11;
    goto block_10;
}
block_10: {
    RecoveredCall_d00850_10();
    goto block_11;
}
block_11: {

    return RecoveredCall_d00850_12(value_x19);
}
}

extern "C" unsigned char LeafData_d1a3f0_0[];
extern "C" void RecoveredCall_d1a3f0_7();
extern "C" void RecoveredCall_d1a3f0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1a3f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1a3f0_0) - 752) + 752);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 1) goto block_8;
    goto block_7;
}
block_7: {
    RecoveredCall_d1a3f0_7();
    goto block_8;
}
block_8: {

    return RecoveredCall_d1a3f0_9(value_x19);
}
}

extern "C" unsigned char LeafData_d1a610_0[];
extern "C" unsigned char LeafData_d1a610_2[];
extern "C" unsigned char LeafData_d1a610_19[];
extern "C" void RecoveredCall_d1a610_24();
extern "C" void RecoveredCall_d1a610_26(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1a610(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1a610_0) - 720) + 720);
    *reinterpret_cast<uint64_t*>((value_x0 + 416)) = ((reinterpret_cast<uintptr_t>(LeafData_d1a610_2) - 1856) + 1856);
    *reinterpret_cast<uint64_t*>((value_x0 + 456)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 364) + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1a610_2) - 1856) + 1856);
    *reinterpret_cast<uint64_t*>(((value_x0 + 404) + 0)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 312)) = ((reinterpret_cast<uintptr_t>(LeafData_d1a610_2) - 1856) + 1856);
    *reinterpret_cast<uint64_t*>((value_x0 + 352)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 260) + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1a610_2) - 1856) + 1856);
    *reinterpret_cast<uint64_t*>(((value_x0 + 300) + 0)) = 0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = ((reinterpret_cast<uintptr_t>(LeafData_d1a610_19) - 752) + 752);
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 1) goto block_25;
    goto block_24;
}
block_24: {
    RecoveredCall_d1a610_24();
    goto block_25;
}
block_25: {

    return RecoveredCall_d1a610_26(value_x19);
}
}

extern "C" unsigned char LeafData_d1ac30_0[];
extern "C" unsigned char LeafData_d1ac30_3[];
extern "C" void RecoveredCall_d1ac30_10();
extern "C" void RecoveredCall_d1ac30_12(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1ac30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1ac30_0) - 944) + 944);
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = ((reinterpret_cast<uintptr_t>(LeafData_d1ac30_3) - 1392) + 1392);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 1) goto block_11;
    goto block_10;
}
block_10: {
    RecoveredCall_d1ac30_10();
    goto block_11;
}
block_11: {

    return RecoveredCall_d1ac30_12(value_x19);
}
}

extern "C" unsigned char LeafData_d1b210_0[];
extern "C" unsigned char LeafData_d1b210_3[];
extern "C" void RecoveredCall_d1b210_10();
extern "C" void RecoveredCall_d1b210_12(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1b210(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1b210_0) - 992) + 992);
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = ((reinterpret_cast<uintptr_t>(LeafData_d1b210_3) - 1392) + 1392);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 1) goto block_11;
    goto block_10;
}
block_10: {
    RecoveredCall_d1b210_10();
    goto block_11;
}
block_11: {

    return RecoveredCall_d1b210_12(value_x19);
}
}

extern "C" unsigned char LeafData_d1b420_3[];
extern "C" void RecoveredCall_d1b420_8(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_d1b420_12(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_d1b420_14(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1b420(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1b420_3) - 504) + 504);
    RecoveredCall_d1b420_8(value_x0,(value_x0 + 112),uint32_t(uint32_t(uint32_t(-1))));
    RecoveredCall_d1b420_12(value_x0,(value_x0 + 16),uint32_t(uint32_t(uint32_t(-1))));
    return RecoveredCall_d1b420_14(value_x0);
}
}

extern "C" unsigned char LeafData_d1b4f0_3[];
extern "C" void RecoveredCall_d1b4f0_8(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_d1b4f0_12(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_d1b4f0_14(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1b4f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1b4f0_3) - 376) + 376);
    RecoveredCall_d1b4f0_8(value_x0,(value_x0 + 112),uint32_t(uint32_t(uint32_t(-1))));
    RecoveredCall_d1b4f0_12(value_x0,(value_x0 + 16),uint32_t(uint32_t(uint32_t(-1))));
    return RecoveredCall_d1b4f0_14(value_x0);
}
}

extern "C" unsigned char LeafData_d1b5b0_3[];
extern "C" void RecoveredCall_d1b5b0_8(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_d1b5b0_12(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_d1b5b0_14(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1b5b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1b5b0_3) - 248) + 248);
    RecoveredCall_d1b5b0_8(value_x0,(value_x0 + 112),uint32_t(uint32_t(uint32_t(-1))));
    RecoveredCall_d1b5b0_12(value_x0,(value_x0 + 16),uint32_t(uint32_t(uint32_t(-1))));
    return RecoveredCall_d1b5b0_14(value_x0);
}
}

extern "C" unsigned char LeafData_d1d760_0[];
extern "C" unsigned char LeafData_d1d760_3[];
extern "C" void RecoveredCall_d1d760_10();
extern "C" void RecoveredCall_d1d760_12(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1d760(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1d760_0) - 1600) + 1600);
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = ((reinterpret_cast<uintptr_t>(LeafData_d1d760_3) - 2256) + 2256);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 1) goto block_11;
    goto block_10;
}
block_10: {
    RecoveredCall_d1d760_10();
    goto block_11;
}
block_11: {

    return RecoveredCall_d1d760_12(value_x19);
}
}

extern "C" unsigned char LeafData_d1d800_0[];
extern "C" unsigned char LeafData_d1d800_3[];
extern "C" void RecoveredCall_d1d800_10();
extern "C" void RecoveredCall_d1d800_12(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1d800(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d1d800_0) - 1648) + 1648);
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = ((reinterpret_cast<uintptr_t>(LeafData_d1d800_3) - 2256) + 2256);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 1) goto block_11;
    goto block_10;
}
block_10: {
    RecoveredCall_d1d800_10();
    goto block_11;
}
block_11: {

    return RecoveredCall_d1d800_12(value_x19);
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_d6ac70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 144));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 20));
    *reinterpret_cast<uint32_t*>((field0 + 56)) = uint32_t(uint32_t(field1));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    *reinterpret_cast<uint32_t*>((field0 + 80)) = uint32_t(uint32_t(field2));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>((value_x1 + 4));
    *reinterpret_cast<ByteVector16*>((field0 + 60)) = __builtin_shufflevector(__builtin_shufflevector(field3,field3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19),__builtin_shufflevector(field3,__builtin_shufflevector(field3,field3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19),12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27),12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27);
    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_e47ef0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x19 = value_x0;
    value_x20 = field0;
    value_x8 = field1;
    if (field1 == 0) goto block_10;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((field2 + 0) + 0));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>(((field2 + 0) + 16));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field2 + 32));
    *reinterpret_cast<ByteVector16*>((value_x8 + 216)) = field4;
    *reinterpret_cast<uint64_t*>((value_x8 + 232)) = field5;
    *reinterpret_cast<ByteVector16*>((value_x8 + 200)) = field3;
    goto block_10;
}
block_10: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 2992));
    value_x8 = field6;
    if (field6 == 0) goto block_20;
    goto block_12;
}
block_12: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 2984));
    reinterpret_cast<void (*)(uint64_t)>(value_x8)(field7);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 2984));
    value_x1 = field8;
    if (field8 == 0) goto block_19;
    goto block_16;
}
block_16: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field9)(value_x20,value_x1);
    goto block_19;
}
block_19: {
    *reinterpret_cast<uint64_t*>((value_x19 + 2984)) = 0;
    goto block_20;
}
block_20: {

    return;
}
}

extern "C" unsigned char LeafData_e48670_2[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_e48670(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {
    *reinterpret_cast<uint32_t*>((value_x0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 0) + 0)) = value_x1;
    *reinterpret_cast<uint64_t*>(((value_x0 + 0) + 8)) = value_x1;
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = value_x2;
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = value_x3;
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>(((((reinterpret_cast<uintptr_t>(LeafData_e48670_2) - 1896) + 1896) + 32) + 0));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>(((((reinterpret_cast<uintptr_t>(LeafData_e48670_2) - 1896) + 1896) + 32) + 16));
    *reinterpret_cast<ByteVector16*>((value_x0 + 72)) = field0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>(((((reinterpret_cast<uintptr_t>(LeafData_e48670_2) - 1896) + 1896) + 0) + 0));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((((reinterpret_cast<uintptr_t>(LeafData_e48670_2) - 1896) + 1896) + 0) + 16));
    *reinterpret_cast<ByteVector16*>((value_x0 + 56)) = field3;
    *reinterpret_cast<ByteVector16*>((value_x0 + 40)) = field2;
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>(((((reinterpret_cast<uintptr_t>(LeafData_e48670_2) - 1896) + 1896) + 64) + 0));
    const ByteVector16 field5 = *reinterpret_cast<const ByteVector16*>(((((reinterpret_cast<uintptr_t>(LeafData_e48670_2) - 1896) + 1896) + 64) + 16));
    *reinterpret_cast<ByteVector16*>((value_x0 + 120)) = field5;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(LeafData_e48670_2) - 1896) + 1896) + 96));
    *reinterpret_cast<ByteVector16*>((value_x0 + 104)) = field4;
    *reinterpret_cast<uint64_t*>((value_x0 + 136)) = field6;
    *reinterpret_cast<ByteVector16*>((value_x0 + 88)) = field1;
    return;
}
}

extern "C" void RecoveredCall_e50050_5(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e50050(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x19 = value_x0;
    value_x20 = field1;
    value_x21 = field0;
    if (field0 == 0) goto block_18;
    goto block_4;
}
block_4: {
    RecoveredCall_e50050_5((value_x21 + 24));
    *reinterpret_cast<uint64_t*>((value_x21 + 48)) = 0;
    *reinterpret_cast<uint32_t*>((value_x21 + 56)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x21 + 96) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x21 + 96) + 8)) = 0;
    *reinterpret_cast<uint32_t*>((value_x21 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((value_x21 + 88)) = 0;
    *reinterpret_cast<ByteVector16*>(((value_x21 + 0) + 0)) = LeafBitView<ByteVector16>(UnsignedVector64x2(UnsignedVector64x2{0,0}));
    *reinterpret_cast<ByteVector16*>(((value_x21 + 0) + 16)) = LeafBitView<ByteVector16>(UnsignedVector64x2(UnsignedVector64x2{0,0}));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field2)(value_x20,value_x21);
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    goto block_18;
}
block_18: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    if (field3 != 0) goto block_26;
    goto block_20;
}
block_20: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    value_x1 = field4;
    if (field4 == 0) goto block_25;
    goto block_22;
}
block_22: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field5)(value_x20,value_x1);
    goto block_25;
}
block_25: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    goto block_26;
}
block_26: {

    return;
}
}
