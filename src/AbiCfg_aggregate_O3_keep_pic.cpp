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
struct alignas(8) RecoveredReturn_25e040 { unsigned char abi_bytes[24]; };
extern "C" uint64_t RecoveredCall_25e040_1();
extern "C" void RecoveredCall_25e040_3();
extern "C" __attribute__((noinline)) RecoveredReturn_25e040 RecoveredLeaf_25e040() {
    LEAF_CHECK
    RecoveredReturn_25e040 recovered_result;
    uint64_t value_x19;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint64_t field0 = RecoveredCall_25e040_1();
    value_x19 = value_x8;
    if (field0 == 0) goto block_7;
    goto block_3;
}
block_3: {
    RecoveredCall_25e040_3();
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
block_7: {
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48625)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_26e840 { unsigned char abi_bytes[24]; };
extern "C" uint64_t RecoveredCall_26e840_2();
extern "C" uint64_t RecoveredCall_26e840_4();
extern "C" uint64_t RecoveredCall_26e840_10();
extern "C" __attribute__((noinline)) RecoveredReturn_26e840 RecoveredLeaf_26e840(uint64_t arg0) {
    LEAF_CHECK
    RecoveredReturn_26e840 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint64_t field0 = RecoveredCall_26e840_2();
    value_x19 = value_x0;
    value_x20 = value_x8;
    if (field0 == 0) goto block_16;
    goto block_4;
}
block_4: {
    const uint64_t field1 = RecoveredCall_26e840_4();
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 32));
    if (field3 == 0) goto block_16;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = uint32_t(1);
    const uint64_t field4 = RecoveredCall_26e840_10();
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 2208));
    const uint32_t field7 = *reinterpret_cast<const uint32_t*>((field6 + 108));
    *reinterpret_cast<uint32_t*>((value_x19 + 0)) = uint32_t(uint32_t(field7));
    return recovered_result;
}
block_16: {
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = uint32_t(((uint32_t(uint32_t(48625)) & 0xffffull) | (65520ull << 16)));
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_26e8b0 { unsigned char abi_bytes[24]; };
extern "C" uint64_t RecoveredCall_26e8b0_5();
extern "C" uint64_t RecoveredCall_26e8b0_7();
extern "C" uint64_t RecoveredCall_26e8b0_11();
extern "C" uint64_t RecoveredCall_26e8b0_17(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) RecoveredReturn_26e8b0 RecoveredLeaf_26e8b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_26e8b0 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
    uint32_t value_x23;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint64_t field0 = RecoveredCall_26e8b0_5();
    value_x19 = value_x8;
    value_x20 = value_x1;
    value_x21 = value_x0;
    value_x23 = uint32_t(((uint32_t(uint32_t(48625)) & 0xffffull) | (65520ull << 16)));
    if (field0 == 0) goto block_30;
    goto block_7;
}
block_7: {
    const uint64_t field1 = RecoveredCall_26e8b0_7();
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 32));
    if (field3 == 0) goto block_30;
    goto block_11;
}
block_11: {
    const uint64_t field4 = RecoveredCall_26e8b0_11();
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 2208));
    *reinterpret_cast<uint32_t*>((value_x20 + 0)) = 0;
    const uint64_t field7 = RecoveredCall_26e8b0_17(field6,value_x21);
    value_x0 = field7;
    value_x22 = field6;
    if (field7 == 0) goto block_27;
    goto block_19;
}
block_19: {
    const uint8_t field8 = *reinterpret_cast<const uint8_t*>((value_x0 + 72));
    if (uint32_t(uint32_t(field8)) == 0) goto block_29;
    goto block_21;
}
block_21: {
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((value_x0 + 76));
    const uint32_t field10 = *reinterpret_cast<const uint32_t*>((value_x22 + 108));
    *reinterpret_cast<uint32_t*>((value_x20 + 0)) = uint32_t(uint32_t((uint32_t(uint32_t(field10)) + uint32_t(uint32_t(field9)))));
    value_x23 = uint32_t(1);
    goto block_30;
}
block_27: {
    value_x23 = uint32_t((uint32_t(value_x23) + 113));
    goto block_30;
}
block_29: {
    value_x23 = uint32_t((uint32_t(value_x23) + 115));
    goto block_30;
}
block_30: {
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(value_x23);
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_287610 { unsigned char abi_bytes[24]; };
extern "C" uint32_t RecoveredCall_287610_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) RecoveredReturn_287610 RecoveredLeaf_287610(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_287610 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint32_t field0 = RecoveredCall_287610_2((value_x0 + 17),value_x1);
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t((((uint32_t(uint32_t(field0)) & 1) == 0) ? uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)))) : (0 + 1))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_2b5df0 { unsigned char abi_bytes[24]; };
extern "C" uint32_t RecoveredCall_2b5df0_6(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) RecoveredReturn_2b5df0 RecoveredLeaf_2b5df0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_2b5df0 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint32_t field0 = RecoveredCall_2b5df0_6(value_x1,(value_x0 + 17),uint32_t(1),uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t((((uint32_t(uint32_t(field0)) & 1) == 0) ? uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)))) : (0 + 1))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_2b6360 { unsigned char abi_bytes[24]; };
extern "C" uint32_t RecoveredCall_2b6360_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) RecoveredReturn_2b6360 RecoveredLeaf_2b6360(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_2b6360 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint32_t field0 = RecoveredCall_2b6360_2((value_x0 + 26),value_x1);
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t((((uint32_t(uint32_t(field0)) & 1) == 0) ? uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)))) : (0 + 1))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_2c5800 { unsigned char abi_bytes[24]; };
extern "C" __attribute__((noinline)) RecoveredReturn_2c5800 RecoveredLeaf_2c5800(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    RecoveredReturn_2c5800 recovered_result;
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    value_x19 = value_x8;
    if (uint32_t(uint32_t(field0)) != uint32_t(value_x1)) goto block_11;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 40));
    reinterpret_cast<void (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
block_11: {
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_2c5860 { unsigned char abi_bytes[24]; };
extern "C" void RecoveredCall_2c5860_10(uint64_t);
extern "C" __attribute__((noinline)) RecoveredReturn_2c5860 RecoveredLeaf_2c5860(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    RecoveredReturn_2c5860 recovered_result;
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    value_x19 = value_x8;
    if (uint32_t(uint32_t(field0)) != uint32_t(value_x1)) goto block_16;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    reinterpret_cast<void (*)(uint64_t)>(field3)(field1);
    RecoveredCall_2c5860_10(value_x0);
    *reinterpret_cast<uint32_t*>((value_x0 + 24)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
block_16: {
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_2e3dc0 { unsigned char abi_bytes[24]; };
extern "C" uint64_t RecoveredCall_2e3dc0_4(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) RecoveredReturn_2e3dc0 RecoveredLeaf_2e3dc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_2e3dc0 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 52));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 56));
    const uint64_t field2 = RecoveredCall_2e3dc0_4(value_x0,uint32_t(uint32_t(uint32_t(field0))));
    value_x0 = field2;
    value_x19 = value_x8;
    value_x20 = field1;
    if (field2 == 0) goto block_11;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 130));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 138));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x20 + 145));
    *reinterpret_cast<uint32_t*>((value_x0 + 47)) = uint32_t(uint32_t(field5));
    *reinterpret_cast<uint64_t*>(((value_x0 + 32) + 0)) = field3;
    *reinterpret_cast<uint64_t*>(((value_x0 + 32) + 8)) = field4;
    goto block_11;
}
block_11: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = uint32_t(1);
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_2fadd0 { unsigned char abi_bytes[24]; };
extern "C" void RecoveredCall_2fadd0_7(uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) RecoveredReturn_2fadd0 RecoveredLeaf_2fadd0(uint64_t arg0,uint32_t arg1,uint32_t arg2) {
    LEAF_CHECK
    RecoveredReturn_2fadd0 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    value_x19 = value_x8;
    if (uint32_t(uint32_t((uint32_t(value_x2) & 255))) != 1) goto block_8;
    goto block_4;
}
block_4: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((value_x0 + 24) + 0));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>(((value_x0 + 24) + 4));
    RecoveredCall_2fadd0_7(field0,uint32_t(field1),uint32_t(field2));
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = uint32_t(1);
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_412140 { unsigned char abi_bytes[24]; };
extern "C" __attribute__((noinline)) RecoveredReturn_412140 RecoveredLeaf_412140(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_412140 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 96));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x1 + 32) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((value_x1 + 32) + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field1 + 40));
    reinterpret_cast<void (*)(uint64_t,uint64_t,uint64_t)>(field4)(field0,field2,field3);
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = uint32_t(1);
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_43beb0 { unsigned char abi_bytes[24]; };
extern "C" __attribute__((noinline)) RecoveredReturn_43beb0 RecoveredLeaf_43beb0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    RecoveredReturn_43beb0 recovered_result;
    uint64_t value_x2 = arg2;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x2 + 80));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(field0)) == 0) ? uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)))) : (0 + 1))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_554ad0 { unsigned char abi_bytes[24]; };
extern "C" void RecoveredCall_554ad0_8(uint64_t);
extern "C" __attribute__((noinline)) RecoveredReturn_554ad0 RecoveredLeaf_554ad0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_554ad0 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    value_x19 = value_x8;
    if (value_x1 == 0) goto block_12;
    goto block_2;
}
block_2: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    *reinterpret_cast<uint32_t*>((value_x0 + 48)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 16));
    *reinterpret_cast<uint64_t*>((value_x0 + 40)) = field1;
    value_x8 = field1;
    if (field1 == 0) goto block_9;
    goto block_7;
}
block_7: {
    RecoveredCall_554ad0_8(value_x8);
    goto block_9;
}
block_9: {
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
block_12: {
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_554b30 { unsigned char abi_bytes[24]; };
extern "C" void RecoveredCall_554b30_8(uint64_t);
extern "C" __attribute__((noinline)) RecoveredReturn_554b30 RecoveredLeaf_554b30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_554b30 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    value_x19 = value_x8;
    if (value_x1 == 0) goto block_12;
    goto block_2;
}
block_2: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    *reinterpret_cast<uint32_t*>((value_x0 + 32)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 16));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = field1;
    value_x8 = field1;
    if (field1 == 0) goto block_9;
    goto block_7;
}
block_7: {
    RecoveredCall_554b30_8(value_x8);
    goto block_9;
}
block_9: {
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
block_12: {
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_5615a0 { unsigned char abi_bytes[24]; };
extern "C" void RecoveredCall_5615a0_6(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) RecoveredReturn_5615a0 RecoveredLeaf_5615a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_5615a0 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 304));
    value_x19 = value_x8;
    if (uint32_t(uint32_t(field0)) == 0) goto block_10;
    goto block_3;
}
block_3: {
    RecoveredCall_5615a0_6(value_x1,value_x0);
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
block_10: {
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_5a82a0 { unsigned char abi_bytes[24]; };
extern "C" __attribute__((noinline)) RecoveredReturn_5a82a0 RecoveredLeaf_5a82a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_5a82a0 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 144));
    if ((field0 != 0) ? (field0 != value_x1) : false) goto block_8;
    goto block_4;
}
block_4: {
    *reinterpret_cast<uint64_t*>((value_x0 + 144)) = value_x1;
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return recovered_result;
}
block_8: {
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_5ace90 { unsigned char abi_bytes[24]; };
extern "C" __attribute__((noinline)) RecoveredReturn_5ace90 RecoveredLeaf_5ace90(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    RecoveredReturn_5ace90 recovered_result;
    uint64_t value_x1 = arg1;
    uint64_t value_x10;
    uint32_t value_x2 = arg2;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
    uint32_t value_x9;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = uint32_t(1);
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x1 + 0));
    value_x10 = uint32_t(field0);
    value_x9 = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    if (uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field0)) + 3))) & 255))) > 1) goto block_10;
    goto block_9;
}
block_9: {
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(value_x9);
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    goto block_10;
}
block_10: {

    if (uint32_t(value_x2) != 0) goto block_14;
    goto block_11;
}
block_11: {

    if (uint32_t(value_x10) == 117) goto block_14;
    goto block_13;
}
block_13: {
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(value_x9);
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    goto block_14;
}
block_14: {

    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_5c8860 { unsigned char abi_bytes[24]; };
extern "C" uint32_t RecoveredCall_5c8860_6(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) RecoveredReturn_5c8860 RecoveredLeaf_5c8860(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_5c8860 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint32_t field0 = RecoveredCall_5c8860_6(value_x1,(value_x0 + 26),uint32_t(128),uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t((((uint32_t(uint32_t(field0)) & 1) == 0) ? uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)))) : (0 + 1))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return recovered_result;
}
}
