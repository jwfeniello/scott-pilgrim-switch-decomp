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

extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_73fc40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>(((value_x1 + 0) + 0));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>(((value_x1 + 0) + 16));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 200));
    *reinterpret_cast<ByteVector16*>((field2 + 68)) = field1;
    *reinterpret_cast<ByteVector16*>((field2 + 52)) = field0;
    return 0;
}
}

extern "C" uint64_t RecoveredCall_a05f10_4(uint64_t);
extern "C" uint64_t RecoveredCall_a05f10_9(uint64_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a05f10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x2;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    *reinterpret_cast<uint32_t*>((value_x0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 4294967293)));
    const uint64_t field1 = RecoveredCall_a05f10_4((value_x0 + 88));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 144));
    value_x0 = field1;
    value_x2 = field2;
    if (field2 == 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 152));
    return RecoveredCall_a05f10_9(field3,uint32_t(0),value_x2);
}
block_10: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aab580(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 440));
    *reinterpret_cast<uint32_t*>((value_x0 + 436)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 456));
    const uint64_t field3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    *reinterpret_cast<uint64_t*>((value_x0 + 48)) = field4;
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field3 + 8));
    *reinterpret_cast<uint32_t*>((value_x0 + 56)) = uint32_t(uint32_t(field5));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((field3 + 12));
    *reinterpret_cast<uint32_t*>((value_x0 + 60)) = uint32_t(uint32_t(field6));
    const uint32_t field7 = *reinterpret_cast<const uint32_t*>((field3 + 16));
    *reinterpret_cast<uint32_t*>((value_x0 + 64)) = uint32_t(uint32_t(field7));
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((field3 + 20));
    *reinterpret_cast<uint32_t*>((value_x0 + 68)) = uint32_t(uint32_t(field8));
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((field3 + 24));
    *reinterpret_cast<uint32_t*>((value_x0 + 72)) = uint32_t(uint32_t(field9));
    const uint32_t field10 = *reinterpret_cast<const uint32_t*>((field3 + 28));
    *reinterpret_cast<uint32_t*>((value_x0 + 76)) = uint32_t(uint32_t(field10));
    const uint32_t field11 = *reinterpret_cast<const uint32_t*>((field3 + 32));
    *reinterpret_cast<uint32_t*>((value_x0 + 80)) = uint32_t(uint32_t(field11));
    const uint32_t field12 = *reinterpret_cast<const uint32_t*>((field3 + 36));
    *reinterpret_cast<uint32_t*>((value_x0 + 84)) = uint32_t(uint32_t(field12));
    const uint32_t field13 = *reinterpret_cast<const uint32_t*>((field3 + 40));
    *reinterpret_cast<uint32_t*>((value_x0 + 88)) = uint32_t(uint32_t(field13));
    const uint32_t field14 = *reinterpret_cast<const uint32_t*>((field3 + 44));
    *reinterpret_cast<uint32_t*>((value_x0 + 92)) = uint32_t(uint32_t(field14));
    const uint32_t field15 = *reinterpret_cast<const uint32_t*>((field3 + 48));
    *reinterpret_cast<uint32_t*>((value_x0 + 96)) = uint32_t(uint32_t(field15));
    const uint32_t field16 = *reinterpret_cast<const uint32_t*>((field3 + 52));
    *reinterpret_cast<uint32_t*>((value_x0 + 100)) = uint32_t(uint32_t(field16));
    const uint32_t field17 = *reinterpret_cast<const uint32_t*>((field3 + 56));
    *reinterpret_cast<uint32_t*>((value_x0 + 104)) = uint32_t(uint32_t(field17));
    const uint32_t field18 = *reinterpret_cast<const uint32_t*>((field3 + 60));
    *reinterpret_cast<uint32_t*>((value_x0 + 108)) = uint32_t(uint32_t(field18));
    const uint32_t field19 = *reinterpret_cast<const uint32_t*>((field3 + 64));
    *reinterpret_cast<uint32_t*>((value_x0 + 112)) = uint32_t(uint32_t(field19));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((field3 + 68));
    *reinterpret_cast<uint64_t*>((value_x0 + 116)) = field20;
    const uint32_t field21 = *reinterpret_cast<const uint32_t*>((field3 + 76));
    *reinterpret_cast<uint32_t*>((value_x0 + 124)) = uint32_t(uint32_t(field21));
    const uint32_t field22 = *reinterpret_cast<const uint32_t*>((field3 + 80));
    *reinterpret_cast<uint32_t*>((value_x0 + 128)) = uint32_t(uint32_t(field22));
    const uint32_t field23 = *reinterpret_cast<const uint32_t*>((field3 + 84));
    *reinterpret_cast<uint32_t*>((value_x0 + 132)) = uint32_t(uint32_t(field23));
    const uint32_t field24 = *reinterpret_cast<const uint32_t*>((field3 + 88));
    *reinterpret_cast<uint32_t*>((value_x0 + 136)) = uint32_t(uint32_t(field24));
    const uint32_t field25 = *reinterpret_cast<const uint32_t*>((field3 + 92));
    *reinterpret_cast<uint32_t*>((value_x0 + 140)) = uint32_t(uint32_t(field25));
    const uint32_t field26 = *reinterpret_cast<const uint32_t*>((field3 + 96));
    *reinterpret_cast<uint32_t*>((value_x0 + 144)) = uint32_t(uint32_t(field26));
    const uint32_t field27 = *reinterpret_cast<const uint32_t*>((field3 + 100));
    *reinterpret_cast<uint32_t*>((value_x0 + 148)) = uint32_t(uint32_t(field27));
    const uint32_t field28 = *reinterpret_cast<const uint32_t*>((field3 + 104));
    *reinterpret_cast<uint32_t*>((value_x0 + 152)) = uint32_t(uint32_t(field28));
    const uint32_t field29 = *reinterpret_cast<const uint32_t*>((field3 + 108));
    *reinterpret_cast<uint32_t*>((value_x0 + 156)) = uint32_t(uint32_t(field29));
    const uint32_t field30 = *reinterpret_cast<const uint32_t*>((field3 + 112));
    *reinterpret_cast<uint32_t*>((value_x0 + 160)) = uint32_t(uint32_t(field30));
    const uint32_t field31 = *reinterpret_cast<const uint32_t*>((field3 + 116));
    *reinterpret_cast<uint32_t*>((value_x0 + 164)) = uint32_t(uint32_t(field31));
    const uint32_t field32 = *reinterpret_cast<const uint32_t*>((field3 + 120));
    *reinterpret_cast<uint32_t*>((value_x0 + 168)) = uint32_t(uint32_t(field32));
    const uint32_t field33 = *reinterpret_cast<const uint32_t*>((field3 + 124));
    *reinterpret_cast<uint32_t*>((value_x0 + 172)) = uint32_t(uint32_t(field33));
    const uint32_t field34 = *reinterpret_cast<const uint32_t*>((field3 + 128));
    *reinterpret_cast<uint32_t*>((value_x0 + 176)) = uint32_t(uint32_t(field34));
    const uint32_t field35 = *reinterpret_cast<const uint32_t*>((field3 + 132));
    *reinterpret_cast<uint32_t*>((value_x0 + 180)) = uint32_t(uint32_t(field35));
    const uint32_t field36 = *reinterpret_cast<const uint32_t*>((field3 + 136));
    *reinterpret_cast<uint32_t*>((value_x0 + 184)) = uint32_t(uint32_t(field36));
    const uint32_t field37 = *reinterpret_cast<const uint32_t*>((field3 + 140));
    *reinterpret_cast<uint32_t*>((value_x0 + 188)) = uint32_t(uint32_t(field37));
    const uint32_t field38 = *reinterpret_cast<const uint32_t*>((field3 + 144));
    *reinterpret_cast<uint32_t*>((value_x0 + 192)) = uint32_t(uint32_t(field38));
    const uint32_t field39 = *reinterpret_cast<const uint32_t*>((field3 + 148));
    *reinterpret_cast<uint32_t*>((value_x0 + 196)) = uint32_t(uint32_t(field39));
    const uint32_t field40 = *reinterpret_cast<const uint32_t*>((field3 + 152));
    *reinterpret_cast<uint32_t*>((value_x0 + 200)) = uint32_t(uint32_t(field40));
    const uint32_t field41 = *reinterpret_cast<const uint32_t*>((field3 + 156));
    *reinterpret_cast<uint32_t*>((value_x0 + 204)) = uint32_t(uint32_t(field41));
    const uint32_t field42 = *reinterpret_cast<const uint32_t*>((field3 + 160));
    *reinterpret_cast<uint32_t*>((value_x0 + 208)) = uint32_t(uint32_t(field42));
    const ByteVector16 field43 = *reinterpret_cast<const ByteVector16*>((field3 + 164));
    const ByteVector16 field44 = *reinterpret_cast<const ByteVector16*>((field3 + 180));
    const ByteVector16 field45 = *reinterpret_cast<const ByteVector16*>((field3 + 196));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field3 + 212));
    *reinterpret_cast<uint64_t*>(((value_x0 + 260) + 0)) = field46;
    *reinterpret_cast<ByteVector16*>((value_x0 + 244)) = field45;
    *reinterpret_cast<ByteVector16*>((value_x0 + 228)) = field44;
    *reinterpret_cast<ByteVector16*>((value_x0 + 212)) = field43;
    const uint32_t field47 = *reinterpret_cast<const uint32_t*>((field3 + 220));
    *reinterpret_cast<uint32_t*>((value_x0 + 268)) = uint32_t(uint32_t(field47));
    const uint32_t field48 = *reinterpret_cast<const uint32_t*>((field3 + 224));
    *reinterpret_cast<uint32_t*>((value_x0 + 272)) = uint32_t(uint32_t(field48));
    const uint32_t field49 = *reinterpret_cast<const uint32_t*>((field3 + 228));
    *reinterpret_cast<uint32_t*>((value_x0 + 276)) = uint32_t(uint32_t(field49));
    const uint32_t field50 = *reinterpret_cast<const uint32_t*>((field3 + 232));
    *reinterpret_cast<uint32_t*>((value_x0 + 280)) = uint32_t(uint32_t(field50));
    const uint32_t field51 = *reinterpret_cast<const uint32_t*>((field3 + 236));
    *reinterpret_cast<uint32_t*>((value_x0 + 284)) = uint32_t(uint32_t(field51));
    const uint32_t field52 = *reinterpret_cast<const uint32_t*>((field3 + 240));
    *reinterpret_cast<uint32_t*>((value_x0 + 288)) = uint32_t(uint32_t(field52));
    const uint32_t field53 = *reinterpret_cast<const uint32_t*>((field3 + 244));
    *reinterpret_cast<uint32_t*>((value_x0 + 292)) = uint32_t(uint32_t(field53));
    const uint32_t field54 = *reinterpret_cast<const uint32_t*>((field3 + 248));
    *reinterpret_cast<uint32_t*>((value_x0 + 296)) = uint32_t(uint32_t(field54));
    const uint32_t field55 = *reinterpret_cast<const uint32_t*>((field3 + 252));
    *reinterpret_cast<uint32_t*>((value_x0 + 300)) = uint32_t(uint32_t(field55));
    const uint32_t field56 = *reinterpret_cast<const uint32_t*>((field3 + 256));
    *reinterpret_cast<uint32_t*>((value_x0 + 304)) = uint32_t(uint32_t(field56));
    const uint32_t field57 = *reinterpret_cast<const uint32_t*>((field3 + 260));
    *reinterpret_cast<uint32_t*>((value_x0 + 308)) = uint32_t(uint32_t(field57));
    const uint32_t field58 = *reinterpret_cast<const uint32_t*>((field3 + 264));
    *reinterpret_cast<uint32_t*>((value_x0 + 312)) = uint32_t(uint32_t(field58));
    const uint32_t field59 = *reinterpret_cast<const uint32_t*>((field3 + 268));
    *reinterpret_cast<uint32_t*>((value_x0 + 316)) = uint32_t(uint32_t(field59));
    const uint32_t field60 = *reinterpret_cast<const uint32_t*>((field3 + 272));
    *reinterpret_cast<uint32_t*>((value_x0 + 320)) = uint32_t(uint32_t(field60));
    const uint32_t field61 = *reinterpret_cast<const uint32_t*>((field3 + 276));
    const uint64_t field62 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    *reinterpret_cast<uint32_t*>((value_x0 + 324)) = uint32_t(uint32_t(field61));
    const uint64_t field63 = *reinterpret_cast<const uint64_t*>((field62 + 0));
    const uint64_t field64 = *reinterpret_cast<const uint64_t*>((field63 + 88));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field64)(field62,uint32_t(uint32_t(uint32_t(uint32_t(value_x1)))),field64);
    __builtin_unreachable();
}
}

extern "C" uint64_t RecoveredCall_aaf540_3(uint64_t,uint32_t);
extern "C" uint64_t RecoveredCall_aaf540_12(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aaf540(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
    uint32_t value_x21;
block_0: {
    const uint64_t field0 = RecoveredCall_aaf540_3(value_x0,uint32_t(uint32_t(value_x2)));
    value_x19 = value_x1;
    value_x20 = field0;
    value_x21 = uint32_t(uint32_t(value_x2));
    if (value_x1 == 0) goto block_13;
    goto block_6;
}
block_6: {

    if (value_x20 == 0) goto block_13;
    goto block_7;
}
block_7: {
    const uint64_t field1 = RecoveredCall_aaf540_12(value_x20,value_x19,uint32_t(((uint32_t(uint32_t((uint32_t(value_x20) - uint32_t(value_x19)))) > uint32_t(value_x21)) ? uint32_t(value_x21) : uint32_t(uint32_t((uint32_t(value_x20) - uint32_t(value_x19)))))));
    goto block_13;
}
block_13: {

    return value_x20;
}
}

extern "C" uint64_t RecoveredCall_aaf590_4(uint64_t,uint32_t,uint32_t);
extern "C" uint64_t RecoveredCall_aaf590_13(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aaf590(uint64_t arg0,uint64_t arg1,uint32_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
    uint32_t value_x21;
    uint32_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = RecoveredCall_aaf590_4(value_x0,uint32_t(uint32_t(value_x2)),uint32_t(uint32_t(value_x3)));
    value_x19 = value_x1;
    value_x20 = field0;
    value_x21 = uint32_t(uint32_t(value_x2));
    if (value_x1 == 0) goto block_14;
    goto block_7;
}
block_7: {

    if (value_x20 == 0) goto block_14;
    goto block_8;
}
block_8: {
    const uint64_t field1 = RecoveredCall_aaf590_13(value_x20,value_x19,uint32_t(((uint32_t(uint32_t((uint32_t(value_x20) - uint32_t(value_x19)))) > uint32_t(value_x21)) ? uint32_t(value_x21) : uint32_t(uint32_t((uint32_t(value_x20) - uint32_t(value_x19)))))));
    goto block_14;
}
block_14: {

    return value_x20;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dafb40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((value_x1 + 0));
    *reinterpret_cast<ByteVector16*>(((value_x0 + 900) + 0)) = field0;
    return uint32_t(1);
}
}

extern "C" uint64_t RecoveredCall_dafb70_60(uint32_t,uint32_t);
extern "C" uint64_t RecoveredCall_dafb70_68(uint32_t,uint32_t);
extern "C" uint64_t RecoveredCall_dafb70_75(uint32_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dafb70(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint32_t value_x10;
    uint32_t value_x11;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x8;
    uint32_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x2 + 0)) = field0;
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>((value_x1 + 20));
    *reinterpret_cast<ByteVector16*>((value_x2 + 8)) = field1;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 52));
    value_x19 = value_x2;
    value_x20 = value_x1;
    if (uint32_t(uint32_t(field2)) == 0) goto block_10;
    goto block_8;
}
block_8: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x20 + 104));
    value_x8 = uint32_t(field3);
    goto block_11;
}
block_10: {
    value_x8 = uint32_t(1);
    goto block_11;
}
block_11: {
    *reinterpret_cast<uint32_t*>((value_x19 + 112)) = uint32_t(value_x8);
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x20 + 40));
    *reinterpret_cast<uint32_t*>((value_x19 + 24)) = uint32_t(uint32_t(field4));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x20 + 64));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = uint32_t(uint32_t(field5));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x20 + 52));
    *reinterpret_cast<uint32_t*>((value_x19 + 32)) = uint32_t(uint32_t(field6));
    const uint32_t field7 = *reinterpret_cast<const uint32_t*>((value_x20 + 80));
    *reinterpret_cast<uint32_t*>((value_x19 + 56)) = uint32_t(uint32_t(field7));
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((value_x20 + 72));
    *reinterpret_cast<uint32_t*>((value_x19 + 60)) = uint32_t(uint32_t(field8));
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((value_x20 + 116));
    *reinterpret_cast<uint32_t*>((value_x19 + 128)) = uint32_t(uint32_t(field9));
    const uint32_t field10 = *reinterpret_cast<const uint32_t*>((value_x20 + 60));
    *reinterpret_cast<uint32_t*>((value_x19 + 36)) = uint32_t(uint32_t(field10));
    const uint32_t field11 = *reinterpret_cast<const uint32_t*>((value_x20 + 68));
    *reinterpret_cast<uint32_t*>((value_x19 + 52)) = uint32_t(uint32_t(field11));
    const uint32_t field12 = *reinterpret_cast<const uint32_t*>((value_x20 + 56));
    *reinterpret_cast<uint32_t*>((value_x19 + 28)) = uint32_t(uint32_t(field12));
    const uint32_t field13 = *reinterpret_cast<const uint32_t*>((value_x20 + 92));
    *reinterpret_cast<uint32_t*>((value_x19 + 44)) = uint32_t(uint32_t(field13));
    const uint32_t field14 = *reinterpret_cast<const uint32_t*>((value_x20 + 92));
    value_x10 = uint32_t(field13);
    value_x11 = uint32_t(field14);
    value_x8 = uint32_t(field8);
    value_x9 = uint32_t(field12);
    if (uint32_t(uint32_t(field12)) == 0) goto block_36;
    goto block_34;
}
block_34: {
    const uint32_t field15 = *reinterpret_cast<const uint32_t*>((value_x20 + 100));
    value_x11 = uint32_t((uint32_t(uint32_t(field15)) + uint32_t(value_x11)));
    goto block_36;
}
block_36: {
    *reinterpret_cast<uint32_t*>((value_x19 + 104)) = uint32_t(value_x11);
    const uint32_t field16 = *reinterpret_cast<const uint32_t*>((value_x20 + 52));
    if (uint32_t(uint32_t(field16)) == 0) goto block_46;
    goto block_39;
}
block_39: {
    const uint32_t field17 = *reinterpret_cast<const uint32_t*>((value_x20 + 88));
    *reinterpret_cast<uint32_t*>((value_x19 + 48)) = uint32_t(uint32_t(field17));
    const uint32_t field18 = *reinterpret_cast<const uint32_t*>((value_x20 + 88));
    value_x8 = uint32_t(field18);
    if (uint32_t(value_x9) == 0) goto block_49;
    goto block_43;
}
block_43: {
    const uint32_t field19 = *reinterpret_cast<const uint32_t*>((value_x20 + 96));
    value_x8 = uint32_t((uint32_t(uint32_t(field19)) + uint32_t(value_x8)));
    goto block_49;
}
block_46: {
    *reinterpret_cast<uint32_t*>((value_x19 + 48)) = uint32_t(uint32_t((uint32_t(value_x10) >> uint32_t(value_x8))));
    value_x8 = uint32_t((uint32_t(value_x11) >> uint32_t(value_x8)));
    goto block_49;
}
block_49: {
    *reinterpret_cast<uint32_t*>((value_x19 + 108)) = uint32_t(value_x8);
    const uint32_t field20 = *reinterpret_cast<const uint32_t*>((value_x20 + 44));
    *reinterpret_cast<uint32_t*>((value_x19 + 68)) = uint32_t(uint32_t(field20));
    const uint32_t field21 = *reinterpret_cast<const uint32_t*>((value_x20 + 84));
    *reinterpret_cast<uint32_t*>((value_x19 + 100)) = uint32_t(uint32_t(field21));
    const uint32_t field22 = *reinterpret_cast<const uint32_t*>((value_x20 + 44));
    if (uint32_t(uint32_t(field22)) == 0) goto block_73;
    goto block_56;
}
block_56: {
    const uint32_t field23 = *reinterpret_cast<const uint32_t*>((value_x20 + 48));
    *reinterpret_cast<uint32_t*>((value_x19 + 72)) = uint32_t(uint32_t(field23));
    const uint32_t field24 = *reinterpret_cast<const uint32_t*>((value_x20 + 36));
    const uint64_t field25 = RecoveredCall_dafb70_60(uint32_t(field24),uint32_t(1));
    *reinterpret_cast<uint64_t*>((value_x19 + 88)) = field25;
    *reinterpret_cast<uint32_t*>((value_x19 + 96)) = uint32_t(uint32_t(40));
    const uint32_t field26 = *reinterpret_cast<const uint32_t*>((value_x20 + 48));
    if (uint32_t(uint32_t(field26)) == 0) goto block_77;
    goto block_66;
}
block_66: {
    const uint32_t field27 = *reinterpret_cast<const uint32_t*>((value_x20 + 36));
    const uint64_t field28 = RecoveredCall_dafb70_68(uint32_t(field27),uint32_t(1));
    *reinterpret_cast<uint64_t*>((value_x19 + 76)) = field28;
    const uint32_t field29 = *reinterpret_cast<const uint32_t*>((value_x20 + 120));
    *reinterpret_cast<uint32_t*>((value_x19 + 84)) = uint32_t(uint32_t(field29));
    goto block_77;
}
block_73: {
    const uint32_t field30 = *reinterpret_cast<const uint32_t*>((value_x20 + 36));
    const uint64_t field31 = RecoveredCall_dafb70_75(uint32_t(field30),uint32_t(1));
    *reinterpret_cast<uint64_t*>((value_x19 + 72)) = field31;
    goto block_77;
}
block_77: {

    return uint32_t(1);
}
}

extern "C" uint64_t RecoveredCall_db05f0_3(uint64_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db05f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    return RecoveredCall_db05f0_3(field0,uint32_t(0),uint32_t(field1));
}
}
