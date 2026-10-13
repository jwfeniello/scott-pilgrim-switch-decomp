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

extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_599c80(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 460));
    if (uint32_t(uint32_t(field0)) != 0) goto block_14;
    goto block_2;
}
block_2: {
    const float field1 = *reinterpret_cast<const float*>((value_x0 + 404));
    value_v0 = field1;
    if (field1 > 0.0) goto block_14;
    goto block_5;
}
block_5: {
    const float field2 = *reinterpret_cast<const float*>((value_x0 + 408));
    value_v0 = field2;
    if (field2 > 0.0) goto block_14;
    goto block_8;
}
block_8: {
    const float field3 = *reinterpret_cast<const float*>((value_x0 + 424));
    value_v0 = field3;
    if (field3 > 0.0) goto block_14;
    goto block_11;
}
block_11: {
    const float field4 = *reinterpret_cast<const float*>((value_x0 + 444));
    value_v0 = field4;
    if (!(field4 > 0.0)) goto block_19;
    goto block_14;
}
block_14: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x1 + 176));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 856));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,float)>(field8)(value_x0,value_x1,(field5 + 8),field6,field8,value_v0);
    __builtin_unreachable();
}
block_19: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 392));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 72));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,float)>(field11)(field9,value_x1,field11,value_x3,value_x4,value_v0);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9c20d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    value_x8 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x8 = field1;
    if (field1 == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 360));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x8,field3);
    __builtin_unreachable();
}
block_8: {
    const float field4 = *reinterpret_cast<const float*>((value_x0 + 420));
    const float field5 = *reinterpret_cast<const float*>((value_x0 + 1068));
    if (__builtin_fabsf(field4) >= field5) goto block_20;
    goto block_13;
}
block_13: {
    const float field6 = *reinterpret_cast<const float*>((value_x0 + 428));
    const float field7 = *reinterpret_cast<const float*>((value_x0 + 1072));
    if (__builtin_fabsf(field6) >= field7) goto block_20;
    goto block_18;
}
block_18: {

    return uint32_t(3);
}
block_20: {

    return uint32_t(2);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a134e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const float field1 = *reinterpret_cast<const float*>((value_x0 + 352));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 512));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,float)>(field2)(value_x0,field2,field1);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c2f380(uint64_t arg0) {
    LEAF_CHECK
    float value_v0;
    uint64_t value_x0 = arg0;
block_0: {
    const float field0 = *reinterpret_cast<const float*>((value_x0 + 28));
    value_v0 = field0;
    if (field0 == 0.0) goto block_4;
    goto block_3;
}
block_3: {
    *reinterpret_cast<uint32_t*>((value_x0 + 28)) = 0;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 128));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,float)>(field2)(value_x0,field2,value_v0);
    __builtin_unreachable();
}
}

extern "C" float RecoveredCall_d81610_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d81610(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const float field0 = RecoveredCall_d81610_1(value_x0);
    *reinterpret_cast<float*>((value_x1 + 0)) = field0;
    return uint32_t(1);
}
}

extern "C" float RecoveredCall_d81660_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d81660(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const float field0 = RecoveredCall_d81660_2((value_x0 - 8));
    *reinterpret_cast<float*>((value_x1 + 0)) = field0;
    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfc8f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 760));
    const float field1 = *reinterpret_cast<const float*>((value_x0 + 776));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const float field3 = *reinterpret_cast<const float*>((value_x0 + 780));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 32));
    const uint32_t field5 = reinterpret_cast<uint32_t (*)(uint64_t,float,float)>(field4)(field0,field1,field3);
    value_x19 = value_x0;
    if ((uint32_t(uint32_t(field5)) & 0x1ull) != 0) goto block_11;
    goto block_8;
}
block_8: {
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x19 + 728));
    *reinterpret_cast<uint32_t*>((value_x19 + 728)) = uint32_t(uint32_t((uint32_t(uint32_t(field6)) | 32)));
    goto block_11;
}
block_11: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 760));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 0));
    const float field9 = *reinterpret_cast<const float*>((value_x19 + 776));
    const float field10 = *reinterpret_cast<const float*>((value_x19 + 780));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field8 + 40));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,float,float)>(field11)(field7,field11,field9,field10);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfc940(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 752));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const float field2 = *reinterpret_cast<const float*>((value_x0 + 776));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,float)>(field3)(field0,field3,field2);
    __builtin_unreachable();
}
}
