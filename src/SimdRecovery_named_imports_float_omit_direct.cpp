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
extern "C" float RecoveredCall_1c7480_2(uint32_t,uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_1c7480(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const float field0 = RecoveredCall_1c7480_2(value_x0,value_x1,int32_t(uint32_t(value_x2)),uint32_t(0));
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field0)));
}
}

extern "C" unsigned char LeafData_6e3010_0[];
extern "C" float RecoveredCall_6e3010_3(uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_6e3010(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6e3010_0) - 1936) + 1936);
    const float field0 = RecoveredCall_6e3010_3(value_x0);
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field0)));
}
}

extern "C" void RecoveredCall_d2bc70_2(uint64_t);
extern "C" void RecoveredCall_d2bc70_7(uint64_t);
extern "C" float RecoveredCall_d2bc70_13(uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_d2bc70(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    RecoveredCall_d2bc70_2(field0);
    value_x19 = value_x0;
    goto block_8;
}
block_4: {
    *reinterpret_cast<uint64_t*>((value_x19 + 72)) = (value_x8 - 28);
    RecoveredCall_d2bc70_7((value_x8 - 24));
    goto block_8;
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x19 + 64) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x19 + 64) + 8));
    value_x8 = field2;
    if (field2 > field1) goto block_4;
    goto block_11;
}
block_11: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    *reinterpret_cast<uint64_t*>((value_x19 + 88)) = 0;
    const float field4 = RecoveredCall_d2bc70_13(field3);
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field4)));
}
}

extern "C" unsigned char LeafData_dba700_0[];
extern "C" void RecoveredCall_dba700_4(uint64_t);
extern "C" unsigned char LeafData_dba700_6[];
extern "C" float RecoveredCall_dba700_9(uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_dba700(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dba700_0) - 840) + 840);
    RecoveredCall_dba700_4((value_x0 + 96));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dba700_6) - 1472) + 1472);
    const float field1 = RecoveredCall_dba700_9(field0);
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field1)));
}
}

extern "C" unsigned char LeafData_dbd760_0[];
extern "C" float RecoveredCall_dbd760_4(uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_dbd760(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dbd760_0) - 1472) + 1472);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    const float field1 = RecoveredCall_dbd760_4(field0);
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field1)));
}
}
