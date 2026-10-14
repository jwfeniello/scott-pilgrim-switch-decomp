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
extern "C" uint32_t RecoveredCall_217870_15(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint32_t RecoveredCall_217870_22(uint64_t,uint64_t);
extern "C" uint32_t RecoveredCall_217870_29(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint32_t RecoveredCall_217870_36(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_217870(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    value_x19 = field0;
    if (uint32_t(value_x1) == 1) goto block_18;
    goto block_3;
}
block_3: {

    if (uint32_t(value_x1) == 12) goto block_32;
    goto block_5;
}
block_5: {

    if (uint32_t(value_x1) != 6) goto block_40;
    goto block_7;
}
block_7: {
    value_x0 = uint32_t(0);
    if ((uint32_t(value_x2) & 0x80000000ull) != 0) goto block_39;
    goto block_9;
}
block_9: {

    if (value_x3 == 0) goto block_39;
    goto block_10;
}
block_10: {
    const uint32_t field1 = RecoveredCall_217870_15(value_x19,value_x3,int32_t(uint32_t(value_x2)),0,0);
    value_x0 = uint32_t(field1);
    if (uint32_t(uint32_t(field1)) != 0) goto block_38;
    goto block_17;
}
block_17: {

    goto block_39;
}
block_18: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x8 = field2;
    if (field2 == 0) goto block_24;
    goto block_20;
}
block_20: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 32));
    const uint32_t field4 = RecoveredCall_217870_22(value_x19,field3);
    value_x0 = uint32_t(field4);
    if (uint32_t(uint32_t(field4)) == 0) goto block_39;
    goto block_24;
}
block_24: {
    const uint32_t field5 = RecoveredCall_217870_29(value_x19,0,0,0,0);
    value_x0 = uint32_t(field5);
    if (uint32_t(uint32_t(field5)) != 0) goto block_38;
    goto block_31;
}
block_31: {

    goto block_39;
}
block_32: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint32_t field7 = RecoveredCall_217870_36(value_x19,0,0,value_x3,field6);
    value_x0 = uint32_t(field7);
    if (uint32_t(uint32_t(field7)) == 0) goto block_39;
    goto block_38;
}
block_38: {
    value_x0 = uint32_t(1);
    goto block_39;
}
block_39: {

    return uint32_t(value_x0);
}
block_40: {

    return uint32_t(uint32_t(-2));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_2b8b20(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    value_x8 = uint32_t(field0);
    if ((uint32_t(uint32_t(field0)) + 1) == 0) goto block_7;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 4));
    return uint32_t(uint32_t((uint32_t(value_x8) == uint32_t(uint32_t(field1)))));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_35b390(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 20));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 254))) == 2) goto block_12;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    value_x8 = field1;
    if (field1 == 0) goto block_15;
    goto block_6;
}
block_6: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x8 + 8));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field2)) != uint32_t(uint32_t(field3))) goto block_17;
    goto block_10;
}
block_10: {
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((value_x8 + 12));
    *reinterpret_cast<uint8_t*>((value_x0 + 20)) = uint32_t(uint32_t(field4));
    value_x8 = uint32_t(field4);
    goto block_12;
}
block_12: {

    return uint32_t(uint32_t((uint32_t(value_x8) == (uint8_t(uint32_t(value_x1)) << 0))));
}
block_15: {

    return uint32_t(uint32_t(0));
}
block_17: {

    return uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(value_x1) & 255))) == 3)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3f4e80(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint32_t value_x8;
    uint32_t value_x9;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>(((value_x0 + 0) + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((value_x0 + 0) + 4));
    value_x8 = uint32_t(field0);
    value_x9 = uint32_t(field1);
    if (uint32_t(uint32_t(field0)) == uint32_t(uint32_t(field1))) goto block_12;
    goto block_3;
}
block_3: {

    if (uint32_t(value_x9) != uint32_t(value_x1)) goto block_7;
    goto block_5;
}
block_5: {

    return uint32_t(uint32_t(1));
}
block_7: {

    if (uint32_t(value_x8) != uint32_t(value_x1)) goto block_11;
    goto block_9;
}
block_9: {

    return uint32_t(uint32_t(0));
}
block_11: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    value_x8 = uint32_t(field2);
    goto block_12;
}
block_12: {

    return uint32_t(uint32_t((uint32_t(value_x8) != uint32_t(value_x1))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_577400(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x8;
block_0: {
    const uint16_t field0 = *reinterpret_cast<const uint16_t*>((value_x0 + 32));
    *reinterpret_cast<uint32_t*>((value_x0 + 0)) = 0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_10;
    goto block_3;
}
block_3: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 41));
    *reinterpret_cast<uint16_t*>((value_x0 + 32)) = 0;
    value_x8 = uint32_t(field1);
    if (uint32_t(uint32_t(field1)) == 28) goto block_9;
    goto block_7;
}
block_7: {

    if (uint32_t(value_x8) != 2) goto block_10;
    goto block_9;
}
block_9: {
    *reinterpret_cast<uint16_t*>((value_x0 + 42)) = 0;
    goto block_10;
}
block_10: {
    *reinterpret_cast<uint64_t*>((value_x0 + 8)) = 0;
    *reinterpret_cast<uint8_t*>((value_x0 + 168)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 152) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 152) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 136) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 136) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 120) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 120) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 104) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 104) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 88) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 88) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 72) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 72) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 56) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 56) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 40) + 8)) = 0;
    return uint32_t(value_x0);
}
}

extern "C" uint32_t RecoveredCall_998180_2(uint64_t,uint32_t);
extern "C" uint32_t RecoveredCall_998180_13(uint64_t,uint32_t);
extern "C" void RecoveredCall_998180_16(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_998180(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x20;
block_0: {
    const uint32_t field0 = RecoveredCall_998180_2(value_x0,value_x1);
    value_x19 = value_x0;
    value_x20 = uint32_t(uint32_t(value_x1));
    if (uint32_t(uint32_t(field0)) != 2) goto block_7;
    goto block_5;
}
block_5: {
    value_x20 = uint32_t(2);
    goto block_19;
}
block_7: {

    if (uint32_t(value_x20) != uint32_t(uint32_t(10002))) goto block_18;
    goto block_10;
}
block_10: {
    const uint32_t field1 = RecoveredCall_998180_13(value_x19,uint32_t(1));
    RecoveredCall_998180_16(value_x19,uint32_t(uint32_t(uint32_t(field1))));
    value_x20 = uint32_t(1);
    goto block_19;
}
block_18: {
    value_x20 = uint32_t(0);
    goto block_19;
}
block_19: {

    return uint32_t(uint32_t(uint32_t(value_x20)));
}
}

extern "C" uint32_t RecoveredCall_999800_2(uint64_t,uint32_t);
extern "C" uint32_t RecoveredCall_999800_13(uint64_t,uint32_t);
extern "C" void RecoveredCall_999800_16(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_999800(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x20;
block_0: {
    const uint32_t field0 = RecoveredCall_999800_2(value_x0,value_x1);
    value_x19 = value_x0;
    value_x20 = uint32_t(uint32_t(value_x1));
    if (uint32_t(uint32_t(field0)) != 2) goto block_7;
    goto block_5;
}
block_5: {
    value_x20 = uint32_t(2);
    goto block_19;
}
block_7: {

    if (uint32_t(value_x20) != uint32_t(uint32_t(10002))) goto block_18;
    goto block_10;
}
block_10: {
    const uint32_t field1 = RecoveredCall_999800_13(value_x19,uint32_t(1));
    RecoveredCall_999800_16(value_x19,uint32_t(uint32_t(uint32_t(field1))));
    value_x20 = uint32_t(1);
    goto block_19;
}
block_18: {
    value_x20 = uint32_t(0);
    goto block_19;
}
block_19: {

    return uint32_t(uint32_t(uint32_t(value_x20)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_9cde90(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 1280));
    const uint32_t field2 = reinterpret_cast<uint32_t (*)(uint64_t)>(field1)(value_x0);
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field2)) != 6) goto block_8;
    goto block_6;
}
block_6: {

    return uint32_t(uint32_t(2));
}
block_8: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 1280));
    const uint32_t field5 = reinterpret_cast<uint32_t (*)(uint64_t)>(field4)(value_x19);
    return uint32_t(uint32_t(((uint32_t(uint32_t(field5)) == 8) ? (uint32_t(uint32_t(1)) + 1) : uint32_t(uint32_t(1)))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aa4290(uint32_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint32_t value_x1 = arg1;
block_0: {

    return uint32_t(uint32_t(((uint32_t(value_x1) & 255) == 0)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_c41480(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 648));
    const uint32_t field2 = reinterpret_cast<uint32_t (*)(uint64_t)>(field1)(value_x0);
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) == uint32_t(uint32_t(uint32_t(value_x1))))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d14090(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 216));
    *reinterpret_cast<uint32_t*>((value_x0 + 32)) = 0;
    value_x8 = field0;
    if (field0 == 0) goto block_12;
    goto block_3;
}
block_3: {
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>(((value_x1 + 0) + 0));
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>(((value_x1 + 0) + 16));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>((value_x1 + 32));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x1 + 48));
    *reinterpret_cast<ByteVector16*>((value_x8 + 76)) = field2;
    *reinterpret_cast<uint32_t*>((value_x8 + 108)) = uint32_t(uint32_t(field4));
    *reinterpret_cast<ByteVector16*>((value_x8 + 92)) = field3;
    *reinterpret_cast<ByteVector16*>((value_x8 + 60)) = field1;
    return uint32_t(uint32_t(0));
}
block_12: {

    return uint32_t(uint32_t(((uint32_t(uint32_t(57353)) & 0xffffull) | (32768ull << 16))));
}
}

extern "C" uint64_t RecoveredCall_d1f010_47(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d1f010(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint32_t value_x21;
    uint64_t value_x8;
    uint32_t value_x9;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 1348));
    value_x19 = value_x0;
    value_x20 = value_x1;
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field0)) == 5) goto block_33;
    goto block_5;
}
block_5: {

    if (uint32_t(value_x8) != 3) goto block_35;
    goto block_7;
}
block_7: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x20 + 24));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field1)) & 4294967294))) == 2) goto block_35;
    goto block_11;
}
block_11: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 88));
    reinterpret_cast<void (*)(uint64_t)>(field3)(value_x20);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 120));
    const uint32_t field6 = reinterpret_cast<uint32_t (*)(uint64_t)>(field5)(value_x20);
    if (uint32_t(uint32_t(field6)) == 0) goto block_27;
    goto block_20;
}
block_20: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x20 + 8));
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((field7 + 20));
    value_x8 = field7;
    value_x9 = uint32_t(field8);
    if (uint32_t(uint32_t((uint32_t(uint32_t(field8)) & 4294967294))) == 2) goto block_27;
    goto block_25;
}
block_25: {
    *reinterpret_cast<uint32_t*>(((value_x8 + 20) + 0)) = uint32_t(uint32_t(2));
    *reinterpret_cast<uint32_t*>(((value_x8 + 20) + 4)) = uint32_t(value_x9);
    goto block_27;
}
block_27: {
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((value_x20 + 24));
    value_x8 = uint32_t(field9);
    if (uint32_t(uint32_t(field9)) == 2) goto block_35;
    goto block_30;
}
block_30: {
    *reinterpret_cast<uint32_t*>(((value_x20 + 24) + 0)) = uint32_t(uint32_t(2));
    *reinterpret_cast<uint32_t*>(((value_x20 + 24) + 4)) = uint32_t(value_x8);
    goto block_35;
}
block_33: {
    *reinterpret_cast<uint32_t*>((value_x19 + 1348)) = uint32_t(uint32_t(1));
    goto block_35;
}
block_35: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 48));
    const uint32_t field12 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t)>(field11)(value_x19,value_x20);
    value_x21 = uint32_t(uint32_t(uint32_t(field12)));
    if ((uint32_t(uint32_t(field12)) & 0x80000000ull) != 0) goto block_55;
    goto block_42;
}
block_42: {
    const uint32_t field13 = *reinterpret_cast<const uint32_t*>((value_x19 + 16));
    *reinterpret_cast<uint32_t*>((value_x20 + 80)) = uint32_t(uint32_t(field13));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    const uint64_t field15 = RecoveredCall_d1f010_47(uint32_t(24),uint32_t(0));
    *reinterpret_cast<uint64_t*>(((field15 + 0) + 0)) = field14;
    *reinterpret_cast<uint64_t*>(((field15 + 0) + 8)) = (value_x19 + 64);
    *reinterpret_cast<uint64_t*>((field14 + 8)) = field15;
    *reinterpret_cast<uint64_t*>(((value_x19 + 64) + 0)) = field15;
    *reinterpret_cast<uint64_t*>((field15 + 16)) = value_x20;
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((value_x19 + 64) + 16));
    *reinterpret_cast<uint64_t*>(((value_x19 + 64) + 16)) = (field16 + 1);
    goto block_55;
}
block_55: {

    return uint32_t(uint32_t(uint32_t(value_x21)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d3d890(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((value_x0 + 120));
    *reinterpret_cast<ByteVector16*>((value_x1 + 0)) = field0;
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d3e1a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((value_x0 + 80));
    *reinterpret_cast<ByteVector16*>((value_x1 + 0)) = field0;
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d71730(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2))) != 3) goto block_16;
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field2))) goto block_18;
    goto block_8;
}
block_8: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x1 + 12));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    if (uint32_t(uint32_t(field3)) != uint32_t(uint32_t(field4))) goto block_20;
    goto block_12;
}
block_12: {
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    return uint32_t(uint32_t((uint32_t(value_x8) == uint32_t(uint32_t(field5)))));
}
block_16: {

    return uint32_t(uint32_t(0));
}
block_18: {

    return uint32_t(uint32_t(0));
}
block_20: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d76600(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[16];
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x1 == 0) goto block_4;
    goto block_1;
}
block_1: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 12));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_6;
    goto block_4;
}
block_4: {
    value_x0 = uint32_t(-1);
    goto block_5;
}
block_5: {

    return uint32_t(value_x0);
}
block_6: {
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>((value_x1 + 16));
    *reinterpret_cast<ByteVector16*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 32));
    const uint32_t field4 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t)>(field3)(value_x19,(reinterpret_cast<uintptr_t>(stack_storage) + 0));
    value_x20 = value_x1;
    if (uint32_t(uint32_t(field4)) == 0) goto block_4;
    goto block_15;
}
block_15: {
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x19 + 12));
    *reinterpret_cast<uint64_t*>((value_x19 + 56)) = value_x20;
    *reinterpret_cast<uint32_t*>((value_x19 + 12)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) + 1)));
    value_x0 = uint32_t(0);
    goto block_5;
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_db1040(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    value_x19 = value_x1;
    value_x21 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_6;
    goto block_4;
}
block_4: {
    value_x20 = uint32_t(0);
    goto block_11;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t)>(field2)(value_x19);
    value_x20 = uint32_t(uint32_t(uint32_t(field3)));
    goto block_11;
}
block_11: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 56));
    const uint64_t field6 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x19);
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 24));
    reinterpret_cast<void (*)(uint64_t)>(field8)(value_x19);
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 56));
    const uint32_t field11 = reinterpret_cast<uint32_t (*)(uint64_t)>(field10)(value_x21);
    value_x22 = field6;
    if (uint32_t(uint32_t(field11)) != 1) goto block_28;
    goto block_26;
}
block_26: {
    reinterpret_cast<void (*)(uint64_t)>(value_x22)(value_x19);
    goto block_28;
}
block_28: {

    return uint32_t(uint32_t(uint32_t(value_x20)));
}
}

extern "C" void RecoveredCall_dc0f70_2(uint64_t);
extern "C" void RecoveredCall_dc0f70_9(uint64_t);
extern "C" void RecoveredCall_dc0f70_14(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dc0f70(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint32_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    RecoveredCall_dc0f70_2(field0);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 96));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field1)) != 2) goto block_12;
    goto block_6;
}
block_6: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x19 + 352));
    if (uint32_t(uint32_t(field2)) == 0) goto block_10;
    goto block_8;
}
block_8: {
    RecoveredCall_dc0f70_9((value_x19 + 376));
    goto block_10;
}
block_10: {
    value_x20 = uint32_t(1);
    goto block_13;
}
block_12: {
    value_x20 = uint32_t(0);
    goto block_13;
}
block_13: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 104));
    RecoveredCall_dc0f70_14(field3);
    return uint32_t(uint32_t(uint32_t(value_x20)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dcded0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x3 = arg3;
    uint32_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x3 + 12));
    *reinterpret_cast<uint32_t*>((value_x0 + 0)) = uint32_t(uint32_t(field0));
    const uint16_t field1 = *reinterpret_cast<const uint16_t*>((value_x3 + 0));
    if (uint32_t(uint32_t(field1)) < 20) goto block_9;
    goto block_5;
}
block_5: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x3 + 4));
    if (uint32_t(uint32_t(field2)) == 0) goto block_11;
    goto block_7;
}
block_7: {

    return uint32_t(uint32_t(0));
}
block_9: {

    return uint32_t(uint32_t(0));
}
block_11: {
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x3 + 5));
    if (uint32_t(uint32_t(field3)) == 0) goto block_15;
    goto block_13;
}
block_13: {

    return uint32_t(uint32_t(0));
}
block_15: {
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((value_x3 + 6));
    if (uint32_t(uint32_t(field4)) != 2) goto block_35;
    goto block_18;
}
block_18: {
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x3 + 8));
    if (uint32_t(uint32_t(field5)) != 82) goto block_37;
    goto block_21;
}
block_21: {
    const uint8_t field6 = *reinterpret_cast<const uint8_t*>((value_x3 + 9));
    if (uint32_t(uint32_t(field6)) != 101) goto block_39;
    goto block_24;
}
block_24: {
    const uint8_t field7 = *reinterpret_cast<const uint8_t*>((value_x3 + 10));
    if (uint32_t(uint32_t(field7)) != 115) goto block_41;
    goto block_27;
}
block_27: {
    const uint8_t field8 = *reinterpret_cast<const uint8_t*>((value_x3 + 11));
    if (uint32_t(uint32_t(field8)) != 66) goto block_43;
    goto block_30;
}
block_30: {
    const uint8_t field9 = *reinterpret_cast<const uint8_t*>((value_x3 + 12));
    value_x8 = uint32_t(field9);
    if (uint32_t(uint32_t(field9)) == 0) goto block_45;
    goto block_32;
}
block_32: {

    return uint32_t(uint32_t((uint32_t(value_x8) < 4)));
}
block_35: {

    return uint32_t(uint32_t(0));
}
block_37: {

    return uint32_t(uint32_t(0));
}
block_39: {

    return uint32_t(uint32_t(0));
}
block_41: {

    return uint32_t(uint32_t(0));
}
block_43: {

    return uint32_t(uint32_t(0));
}
block_45: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dd2ad0(uint64_t arg0,uint32_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint32_t value_x20;
block_0: {
    value_x19 = value_x0;
    value_x20 = uint32_t(uint32_t(value_x1));
    if (uint32_t(value_x2) == 0) goto block_17;
    goto block_3;
}
block_3: {

    if (uint32_t(value_x2) == 2) goto block_10;
    goto block_5;
}
block_5: {

    if (uint32_t(value_x2) != 1) goto block_16;
    goto block_7;
}
block_7: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x19 + 24));
    value_x20 = uint32_t((uint32_t(uint32_t(field0)) + uint32_t(value_x20)));
    goto block_17;
}
block_10: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 80));
    const uint32_t field4 = reinterpret_cast<uint32_t (*)(uint64_t)>(field3)(field1);
    value_x20 = uint32_t((uint32_t(uint32_t(field4)) - uint32_t(value_x20)));
    goto block_17;
}
block_16: {
    value_x20 = uint32_t(0);
    goto block_17;
}
block_17: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 80));
    const uint64_t field8 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    if (field8 >= (uint32_t(uint32_t(value_x20)) << 0)) goto block_25;
    goto block_23;
}
block_23: {
    value_x0 = uint32_t(0);
    goto block_27;
}
block_25: {
    *reinterpret_cast<uint32_t*>((value_x19 + 24)) = uint32_t(value_x20);
    value_x0 = uint32_t(1);
    goto block_27;
}
block_27: {

    return uint32_t(value_x0);
}
}

extern "C" void RecoveredCall_ddaff0_5(uint64_t);
extern "C" void RecoveredCall_ddaff0_22(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_ddaff0(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8;
block_0: {
    RecoveredCall_ddaff0_5((value_x0 + 64));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 144));
    value_x19 = (value_x0 + 64);
    value_x20 = value_x2;
    value_x21 = value_x0;
    value_x8 = uint32_t(uint32_t(uint32_t(uint32_t(value_x1))));
    if (field0 <= uint32_t(uint32_t(uint32_t(uint32_t(value_x1))))) goto block_20;
    goto block_10;
}
block_10: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 128));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x8 << 3)));
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = field2;
    const uint32_t field3 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field2 + 8) + 0)), 1, __ATOMIC_RELAXED);
    value_x20 = uint32_t(0);
    goto block_21;
}
block_20: {
    value_x20 = uint32_t(-2147483645);
    goto block_21;
}
block_21: {
    RecoveredCall_ddaff0_22(value_x19);
    return uint32_t(uint32_t(uint32_t(value_x20)));
}
}

extern "C" void RecoveredCall_ddb080_5(uint64_t);
extern "C" void RecoveredCall_ddb080_22(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_ddb080(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8;
block_0: {
    RecoveredCall_ddb080_5((value_x0 + 64));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 112));
    value_x19 = (value_x0 + 64);
    value_x20 = value_x2;
    value_x21 = value_x0;
    value_x8 = uint32_t(uint32_t(uint32_t(uint32_t(value_x1))));
    if (field0 <= uint32_t(uint32_t(uint32_t(uint32_t(value_x1))))) goto block_20;
    goto block_10;
}
block_10: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 96));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x8 << 3)));
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = field2;
    const uint32_t field3 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field2 + 8) + 0)), 1, __ATOMIC_RELAXED);
    value_x20 = uint32_t(0);
    goto block_21;
}
block_20: {
    value_x20 = uint32_t(-2147483645);
    goto block_21;
}
block_21: {
    RecoveredCall_ddb080_22(value_x19);
    return uint32_t(uint32_t(uint32_t(value_x20)));
}
}

extern "C" void RecoveredCall_de9fb0_3(uint64_t,uint32_t);
extern "C" void RecoveredCall_de9fb0_8(uint64_t,uint32_t);
extern "C" void RecoveredCall_de9fb0_13(uint64_t,uint32_t);
extern "C" void RecoveredCall_de9fb0_18(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_de9fb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 192));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 208));
    RecoveredCall_de9fb0_3(field0,uint32_t(field1));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 208));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 224));
    *reinterpret_cast<uint32_t*>((value_x0 + 60)) = uint32_t(field2);
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x0 + 240));
    RecoveredCall_de9fb0_8(field3,uint32_t(field4));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 240));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 256));
    *reinterpret_cast<uint32_t*>((value_x0 + 64)) = uint32_t(field5);
    const uint32_t field7 = *reinterpret_cast<const uint32_t*>((value_x0 + 272));
    RecoveredCall_de9fb0_13(field6,uint32_t(field7));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 272));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 288));
    *reinterpret_cast<uint32_t*>((value_x0 + 56)) = uint32_t(field8);
    const uint32_t field10 = *reinterpret_cast<const uint32_t*>((value_x0 + 304));
    RecoveredCall_de9fb0_18(field9,uint32_t(field10));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x0 + 304));
    *reinterpret_cast<uint32_t*>((value_x0 + 52)) = uint32_t(field11);
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_deb580(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_14;
    goto block_1;
}
block_1: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 32) + 0));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 32) + 16));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 0) + 0)) = field0;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 0) + 16)) = field1;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 64) + 0));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 64) + 16));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 96) + 0));
    const ByteVector16 field5 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 96) + 16));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 64) + 0)) = field4;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 64) + 16)) = field5;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 32) + 0)) = field2;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 32) + 16)) = field3;
    const ByteVector16 field6 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 128) + 0));
    const ByteVector16 field7 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 128) + 16));
    const ByteVector16 field8 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 160) + 0));
    const ByteVector16 field9 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 160) + 16));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 128) + 0)) = field8;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 128) + 16)) = field9;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 96) + 0)) = field6;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 96) + 16)) = field7;
    return uint32_t(uint32_t(0));
}
block_14: {

    return uint32_t(uint32_t(-2147483645));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_deb5c0(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {

    if (value_x2 == 0) goto block_14;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 208));
    value_x8 = value_x0;
    value_x9 = uint32_t(uint32_t(value_x1));
    if (field0 <= uint32_t(uint32_t(value_x1))) goto block_16;
    goto block_6;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 192));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x9 << 3)));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((field2 + 16) + 0));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>(((field2 + 16) + 16));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    *reinterpret_cast<uint64_t*>((value_x2 + 32)) = field5;
    *reinterpret_cast<ByteVector16*>(((value_x2 + 0) + 0)) = field3;
    *reinterpret_cast<ByteVector16*>(((value_x2 + 0) + 16)) = field4;
    return uint32_t(uint32_t(0));
}
block_14: {

    return uint32_t(uint32_t(-2147483645));
}
block_16: {

    return uint32_t(uint32_t(-2147483645));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_deb610(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {

    if (value_x2 == 0) goto block_14;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 240));
    value_x8 = value_x0;
    value_x9 = uint32_t(uint32_t(value_x1));
    if (field0 <= uint32_t(uint32_t(value_x1))) goto block_16;
    goto block_6;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 224));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x9 << 3)));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((field2 + 16) + 0));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>(((field2 + 16) + 16));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    *reinterpret_cast<uint64_t*>((value_x2 + 32)) = field5;
    *reinterpret_cast<ByteVector16*>(((value_x2 + 0) + 0)) = field3;
    *reinterpret_cast<ByteVector16*>(((value_x2 + 0) + 16)) = field4;
    return uint32_t(uint32_t(0));
}
block_14: {

    return uint32_t(uint32_t(-2147483645));
}
block_16: {

    return uint32_t(uint32_t(-2147483645));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_deb660(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {

    if (value_x2 == 0) goto block_14;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 272));
    value_x8 = value_x0;
    value_x9 = uint32_t(uint32_t(value_x1));
    if (field0 <= uint32_t(uint32_t(value_x1))) goto block_16;
    goto block_6;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 256));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x9 << 3)));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((field2 + 16) + 0));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>(((field2 + 16) + 16));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    *reinterpret_cast<uint64_t*>((value_x2 + 32)) = field5;
    *reinterpret_cast<ByteVector16*>(((value_x2 + 0) + 0)) = field3;
    *reinterpret_cast<ByteVector16*>(((value_x2 + 0) + 16)) = field4;
    return uint32_t(uint32_t(0));
}
block_14: {

    return uint32_t(uint32_t(-2147483645));
}
block_16: {

    return uint32_t(uint32_t(-2147483645));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_df0f20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((value_x0 + 24));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>((value_x0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    *reinterpret_cast<uint64_t*>((value_x1 + 32)) = field2;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 0) + 0)) = field0;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 0) + 16)) = field1;
    return uint32_t(uint32_t(0));
}
block_9: {

    return uint32_t(uint32_t(-2147483645));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_df1080(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((value_x0 + 8));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>((value_x0 + 24));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    *reinterpret_cast<uint64_t*>((value_x1 + 32)) = field2;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 0) + 0)) = field0;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 0) + 16)) = field1;
    return uint32_t(uint32_t(0));
}
block_9: {

    return uint32_t(uint32_t(-2147483645));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_df13c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_8;
    goto block_1;
}
block_1: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((value_x0 + 24));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    *reinterpret_cast<uint64_t*>((value_x1 + 16)) = field1;
    *reinterpret_cast<ByteVector16*>((value_x1 + 0)) = field0;
    return uint32_t(uint32_t(0));
}
block_8: {

    return uint32_t(uint32_t(-2147483645));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_df14c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_8;
    goto block_1;
}
block_1: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((value_x0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x1 + 16)) = field1;
    *reinterpret_cast<ByteVector16*>((value_x1 + 0)) = field0;
    return uint32_t(uint32_t(0));
}
block_8: {

    return uint32_t(uint32_t(-2147483645));
}
}

extern "C" void RecoveredCall_df72f0_5(uint64_t);
extern "C" void RecoveredCall_df72f0_22(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_df72f0(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8;
block_0: {
    RecoveredCall_df72f0_5((value_x0 + 48));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 136));
    value_x19 = (value_x0 + 48);
    value_x20 = value_x2;
    value_x21 = value_x0;
    value_x8 = uint32_t(uint32_t(uint32_t(uint32_t(value_x1))));
    if (field0 <= uint32_t(uint32_t(uint32_t(uint32_t(value_x1))))) goto block_20;
    goto block_10;
}
block_10: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 120));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x8 << 3)));
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = field2;
    const uint32_t field3 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field2 + 8) + 0)), 1, __ATOMIC_RELAXED);
    value_x20 = uint32_t(0);
    goto block_21;
}
block_20: {
    value_x20 = uint32_t(-2147483645);
    goto block_21;
}
block_21: {
    RecoveredCall_df72f0_22(value_x19);
    return uint32_t(uint32_t(uint32_t(value_x20)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e0d470(uint32_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint32_t value_x8;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x1 + 0));
    value_x1 = (value_x1 + 1);
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field0)) == 58) goto block_4;
    goto block_3;
}
block_3: {

    if (uint32_t(value_x8) != 0) goto block_0;
    goto block_4;
}
block_4: {

    return uint32_t(uint32_t((uint32_t(uint32_t((value_x1 != 1))) & uint32_t(uint32_t((uint32_t(value_x8) == 58))))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e17060(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    *reinterpret_cast<uint32_t*>((value_x1 + 144)) = uint32_t(uint32_t(((uint32_t(uint32_t(29804)) & 0xffffull) | (28533ull << 16))));
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((value_x0 + 40));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>((value_x0 + 56));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    *reinterpret_cast<uint64_t*>((value_x1 + 232)) = field2;
    *reinterpret_cast<ByteVector16*>((value_x1 + 216)) = field1;
    *reinterpret_cast<uint32_t*>((value_x1 + 232)) = uint32_t(uint32_t((uint32_t(field2) & 4294967294)));
    *reinterpret_cast<ByteVector16*>((value_x1 + 200)) = field0;
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e482b0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 132));
    value_x8 = field0;
    if (uint32_t(uint32_t(field1)) == 0) goto block_17;
    goto block_3;
}
block_3: {
    const int16_t field2 = *reinterpret_cast<const int16_t*>((value_x8 + 2));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((value_x8 + 8) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x8 + 8) + 8));
    *reinterpret_cast<uint64_t*>((((field3 + (field2 << 4)) + 0) + 0)) = (int64_t(((value_x1 + (int64_t(value_x1) >> 63)) + (8 << 12))) >> 16);
    *reinterpret_cast<uint64_t*>((((field3 + (field2 << 4)) + 0) + 8)) = (int64_t(((value_x2 + (int64_t(value_x2) >> 63)) + (8 << 12))) >> 16);
    *reinterpret_cast<uint8_t*>((field4 + field2)) = uint32_t(uint32_t((((uint32_t(value_x3) & 255) == 0) ? (uint32_t(uint32_t(1)) + 1) : uint32_t(uint32_t(1)))));
    goto block_17;
}
block_17: {
    const uint16_t field5 = *reinterpret_cast<const uint16_t*>((value_x8 + 2));
    *reinterpret_cast<uint16_t*>((value_x8 + 2)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) + 1)));
    return uint32_t(value_x0);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e4edc0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>(((field0 + 536) + 0));
    *reinterpret_cast<ByteVector16*>((value_x0 + 24)) = field1;
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e51d60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 248));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>((field0 + 8));
    *reinterpret_cast<ByteVector16*>((value_x1 + 0)) = field1;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((field0 + 24));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>((field0 + 40));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>((field0 + 56));
    const ByteVector16 field5 = *reinterpret_cast<const ByteVector16*>((field0 + 72));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 48) + 0)) = field4;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 48) + 16)) = field5;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 16) + 0)) = field2;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 16) + 16)) = field3;
    const ByteVector16 field6 = *reinterpret_cast<const ByteVector16*>((field0 + 88));
    const ByteVector16 field7 = *reinterpret_cast<const ByteVector16*>((field0 + 104));
    const ByteVector16 field8 = *reinterpret_cast<const ByteVector16*>((field0 + 120));
    const ByteVector16 field9 = *reinterpret_cast<const ByteVector16*>((field0 + 136));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 112) + 0)) = field8;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 112) + 16)) = field9;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 80) + 0)) = field6;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 80) + 16)) = field7;
    const ByteVector16 field10 = *reinterpret_cast<const ByteVector16*>((field0 + 152));
    const ByteVector16 field11 = *reinterpret_cast<const ByteVector16*>((field0 + 168));
    const ByteVector16 field12 = *reinterpret_cast<const ByteVector16*>((field0 + 184));
    const ByteVector16 field13 = *reinterpret_cast<const ByteVector16*>((field0 + 200));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 176) + 0)) = field12;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 176) + 16)) = field13;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 144) + 0)) = field10;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 144) + 16)) = field11;
    return uint32_t(uint32_t(0));
}
}

extern "C" void RecoveredCall_e53180_31(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e53180(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    value_x19 = value_x0;
    value_x20 = field0;
    value_x8 = field1;
    if (field1 == 0) goto block_9;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 0));
    value_x9 = field2;
    if (field2 == 0) goto block_9;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x9 + 176));
    if (field3 == 0) goto block_9;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint64_t*>((value_x9 + 160)) = value_x8;
    goto block_9;
}
block_9: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 808));
    value_x0 = field4;
    if (field4 == 0) goto block_13;
    goto block_11;
}
block_11: {
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x0 + 16));
    if ((uint32_t(uint32_t(field5)) & 0x2ull) != 0) goto block_15;
    goto block_13;
}
block_13: {
    value_x0 = uint32_t(35);
    goto block_43;
}
block_15: {

    if ((uint32_t(value_x1) & 0x80000000ull) != 0) goto block_28;
    goto block_16;
}
block_16: {
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    if (int32_t(uint32_t(uint32_t(field6))) <= int32_t(uint32_t(value_x1))) goto block_28;
    goto block_19;
}
block_19: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 176));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 24));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 184));
    value_x8 = field9;
    if (field9 == 0) goto block_30;
    goto block_23;
}
block_23: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 160));
    const uint32_t field11 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t)>(value_x8)(field10,int32_t(uint32_t(value_x1)));
    value_x0 = uint32_t(field11);
    if (uint32_t(uint32_t(field11)) != 0) goto block_43;
    goto block_27;
}
block_27: {

    goto block_32;
}
block_28: {
    value_x0 = uint32_t(6);
    goto block_43;
}
block_30: {
    RecoveredCall_e53180_31(value_x0,int32_t(uint32_t(value_x1)));
    goto block_32;
}
block_32: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x20 + 808));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 160));
    const ByteVector16 field14 = *reinterpret_cast<const ByteVector16*>((field13 + 24));
    const ByteVector16 field15 = *reinterpret_cast<const ByteVector16*>((field13 + 40));
    const ByteVector16 field16 = *reinterpret_cast<const ByteVector16*>((field13 + 56));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field13 + 72));
    *reinterpret_cast<uint64_t*>((value_x19 + 72)) = field17;
    *reinterpret_cast<ByteVector16*>((value_x19 + 56)) = field16;
    *reinterpret_cast<ByteVector16*>((value_x19 + 40)) = field15;
    *reinterpret_cast<ByteVector16*>((value_x19 + 24)) = field14;
    value_x0 = uint32_t(0);
    goto block_43;
}
block_43: {

    return uint32_t(value_x0);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e542e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 312) + 0));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 328) + 0));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 0) + 0)) = field0;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 0) + 16)) = field1;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 344) + 0));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 360) + 0));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 376) + 0));
    const ByteVector16 field5 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 392) + 0));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 32) + 0)) = field2;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 32) + 16)) = field3;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 64) + 0)) = field4;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 64) + 16)) = field5;
    const ByteVector16 field6 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 408) + 0));
    const ByteVector16 field7 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 424) + 0));
    const ByteVector16 field8 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 440) + 0));
    const ByteVector16 field9 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 456) + 0));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 96) + 0)) = field6;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 96) + 16)) = field7;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 128) + 0)) = field8;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 128) + 16)) = field9;
    const ByteVector16 field10 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 472) + 0));
    const ByteVector16 field11 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 488) + 0));
    const ByteVector16 field12 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 504) + 0));
    const ByteVector16 field13 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 520) + 0));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 160) + 0)) = field10;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 160) + 16)) = field11;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 192) + 0)) = field12;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 192) + 16)) = field13;
    return uint32_t(uint32_t(0));
}
}

extern "C" void RecoveredCall_e56e00_2(uint64_t,uint32_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e56e00(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x10;
    uint64_t value_x11;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {
    RecoveredCall_e56e00_2(value_x0,value_x1,value_x2,value_x3);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 424));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 428));
    value_x19 = value_x3;
    value_x8 = uint32_t(field0);
    value_x9 = uint32_t(field1);
    if (uint32_t(uint32_t(field0)) == uint32_t(uint32_t(field1))) goto block_33;
    goto block_7;
}
block_7: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    value_x10 = field2;
    if (field2 == 0) goto block_20;
    goto block_9;
}
block_9: {

    if (uint32_t(value_x9) == 0) goto block_16;
    goto block_10;
}
block_10: {
    value_x11 = (((((((uint64_t(value_x10 - 0) >> 63) != 0)) ? (-value_x10) : value_x10) * value_x8) + (value_x9 >> 1)) / value_x9);
    goto block_17;
}
block_16: {
    value_x11 = uint32_t(2147483647);
    goto block_17;
}
block_17: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = ((int64_t(value_x10) < int64_t(0)) ? (-value_x11) : value_x11);
    goto block_20;
}
block_20: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    value_x10 = field3;
    if (field3 == 0) goto block_33;
    goto block_22;
}
block_22: {

    if (uint32_t(value_x9) == 0) goto block_29;
    goto block_23;
}
block_23: {
    value_x8 = (((((((uint64_t(value_x10 - 0) >> 63) != 0)) ? (-value_x10) : value_x10) * value_x8) + (value_x9 >> 1)) / value_x9);
    goto block_30;
}
block_29: {
    value_x8 = uint32_t(2147483647);
    goto block_30;
}
block_30: {
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = ((int64_t(value_x10) < int64_t(0)) ? (-value_x8) : value_x8);
    goto block_33;
}
block_33: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e6d680(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 312) + 0));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 328) + 0));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 0) + 0)) = field0;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 0) + 16)) = field1;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 344) + 0));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 360) + 0));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 376) + 0));
    const ByteVector16 field5 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 392) + 0));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 32) + 0)) = field2;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 32) + 16)) = field3;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 64) + 0)) = field4;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 64) + 16)) = field5;
    const ByteVector16 field6 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 408) + 0));
    const ByteVector16 field7 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 424) + 0));
    const ByteVector16 field8 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 440) + 0));
    const ByteVector16 field9 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 456) + 0));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 96) + 0)) = field6;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 96) + 16)) = field7;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 128) + 0)) = field8;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 128) + 16)) = field9;
    const ByteVector16 field10 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 472) + 0));
    const ByteVector16 field11 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 488) + 0));
    const ByteVector16 field12 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 504) + 0));
    const ByteVector16 field13 = *reinterpret_cast<const ByteVector16*>(((value_x0 + 520) + 0));
    *reinterpret_cast<ByteVector16*>(((value_x1 + 160) + 0)) = field10;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 160) + 16)) = field11;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 192) + 0)) = field12;
    *reinterpret_cast<ByteVector16*>(((value_x1 + 192) + 16)) = field13;
    return uint32_t(uint32_t(0));
}
}

extern "C" unsigned char LeafData_e80df0_2[];
extern "C" uint32_t RecoveredCall_e80df0_6(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e80df0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = RecoveredCall_e80df0_6(value_x1,((reinterpret_cast<uintptr_t>(LeafData_e80df0_2) - 3881) + 3881));
    value_x19 = value_x0;
    value_x20 = value_x2;
    if (uint32_t(uint32_t(field0)) == 0) goto block_10;
    goto block_8;
}
block_8: {
    value_x0 = uint32_t(12);
    goto block_19;
}
block_10: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x20 + 0));
    value_x8 = uint32_t(field1);
    if (uint32_t(uint32_t(field1)) == 40) goto block_15;
    goto block_13;
}
block_13: {

    if (uint32_t(value_x8) != 35) goto block_18;
    goto block_15;
}
block_15: {
    *reinterpret_cast<uint32_t*>((value_x19 + 120)) = uint32_t(value_x8);
    value_x0 = uint32_t(0);
    goto block_19;
}
block_18: {
    value_x0 = uint32_t(7);
    goto block_19;
}
block_19: {

    return uint32_t(value_x0);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e8adb0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 5152)) = value_x1;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 52));
    *reinterpret_cast<uint32_t*>((value_x0 + 5144)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 16));
    *reinterpret_cast<uint64_t*>((value_x0 + 8)) = field1;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((value_x1 + 24));
    *reinterpret_cast<ByteVector16*>((value_x0 + 16)) = __builtin_shufflevector(field2,field2,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x1 + 40));
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = field3;
    return uint32_t(uint32_t(0));
}
}
