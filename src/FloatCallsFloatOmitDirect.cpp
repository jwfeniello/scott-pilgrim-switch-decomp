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

extern "C" __attribute__((noinline)) float RecoveredLeaf_9c1fe0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    value_x8 = field0;
    if (field0 == 0) goto block_7;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field1;
    if (field1 == 0) goto block_7;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 320));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    __builtin_unreachable();
}
block_7: {

    return LeafBitsFloat(0);
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_9c2650(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    value_x8 = field0;
    if (field0 == 0) goto block_7;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field1;
    if (field1 == 0) goto block_7;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 480));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    __builtin_unreachable();
}
block_7: {

    return float(1.00000000);
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_aabf10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 184));
    const float field2 = reinterpret_cast<float (*)(uint64_t)>(field1)(value_x0);
    const float field3 = *reinterpret_cast<const float*>((value_x0 + 120));
    return (field2 - field3);
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d41380(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    value_x8 = field0;
    if (field0 == 0) goto block_10;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 0));
    value_x8 = field1;
    if (field1 == 0) goto block_10;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 160));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field2)) == 0) goto block_11;
    goto block_7;
}
block_7: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 164));
    *reinterpret_cast<uint32_t*>((value_x19 + 144)) = uint32_t(uint32_t(field3));
    goto block_15;
}
block_10: {

    return value_v0;
}
block_11: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 8));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x19 + 140));
    const float field7 = reinterpret_cast<float (*)(uint64_t,uint64_t,uint64_t)>(value_x8)(field4,field5,uint32_t(field6));
    *reinterpret_cast<float*>((value_x19 + 144)) = field7;
    goto block_15;
}
block_15: {
    *reinterpret_cast<uint32_t*>((value_x19 + 148)) = uint32_t(uint32_t(1));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 64));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field9)(value_x19,field9);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d568c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 448));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_10;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const float field3 = reinterpret_cast<float (*)(uint64_t)>(field2)(value_x19);
    *reinterpret_cast<uint32_t*>((value_x19 + 448)) = 0;
    *reinterpret_cast<float*>((value_x19 + 444)) = field3;
    return field3;
}
block_10: {
    const float field4 = *reinterpret_cast<const float*>((value_x19 + 444));
    return field4;
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d5adc0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 608));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field2)(value_x0,field2);
    __builtin_unreachable();
}
block_5: {

    return LeafBitsFloat(0);
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d5cd70(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 616));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field2)(value_x0,field2);
    __builtin_unreachable();
}
block_5: {

    return float(-1.00000000);
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d6aae0(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 144));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 88));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field2)(value_x0,field2);
    __builtin_unreachable();
}
block_5: {

    return float(-1.00000000);
}
}

extern "C" float RecoveredCall_d6e280_4(uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_d6e280(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 136));
    value_x8 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 0));
    value_x0 = field1;
    if (field1 == 0) goto block_5;
    goto block_4;
}
block_4: {

    return RecoveredCall_d6e280_4(value_x0);
}
block_5: {

    return float(-1.00000000);
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d72170(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 64));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 88));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field2)(value_x0,field2);
    __builtin_unreachable();
}
block_5: {

    return float(-1.00000000);
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d72bd0(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 88));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field2)(value_x0,field2);
    __builtin_unreachable();
}
block_5: {

    return float(-1.00000000);
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d74dd0(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 88));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field2)(value_x0,field2);
    __builtin_unreachable();
}
block_5: {

    return float(-1.00000000);
}
}

extern "C" float RecoveredCall_d781c0_2(uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_d781c0(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 120));
    value_x0 = field0;
    if (field0 == 0) goto block_3;
    goto block_2;
}
block_2: {

    return RecoveredCall_d781c0_2(value_x0);
}
block_3: {

    return float(-1.00000000);
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d84ad0(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 176));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 88));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    __builtin_unreachable();
}
block_6: {

    return float(-1.00000000);
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d8f880(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 128));
    value_x0 = field1;
    if (field1 == 0) goto block_6;
    goto block_3;
}
block_3: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 88));
    return reinterpret_cast<float (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    __builtin_unreachable();
}
block_6: {

    return float(-1.00000000);
}
}
