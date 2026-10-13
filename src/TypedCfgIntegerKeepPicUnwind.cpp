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
extern "C" uint64_t RecoveredCall_ff400_5(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" void RecoveredCall_ff400_8(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ff400(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_ff400_5(uint32_t(168),uint32_t(4),uint32_t(0),uint32_t(1086324736));
    RecoveredCall_ff400_8(field0,value_x0);
    return field0;
}
}

extern "C" uint64_t RecoveredCall_504560_3(uint64_t);
extern "C" uint32_t RecoveredCall_504560_6(uint64_t);
extern "C" void RecoveredCall_504560_11(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_504560(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = RecoveredCall_504560_3(value_x1);
    const uint32_t field1 = RecoveredCall_504560_6(value_x1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    RecoveredCall_504560_11(field2,field0,uint32_t(uint32_t(uint32_t(field1))),uint32_t(-1));
    return value_x0;
}
}

extern "C" void RecoveredCall_50e3a0_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_50e3a0(uint64_t arg0) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[8];
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((value_x0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 48) + 8));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x0 + 64) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((value_x0 + 64) + 8));
    RecoveredCall_50e3a0_3(value_x0);
    value_x0 = (field2 + (int64_t(field1) >> 1));
    value_x19 = field3;
    if ((uint32_t(field1) & 0x1ull) != 0) goto block_8;
    goto block_6;
}
block_6: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    value_x2 = field4;
    goto block_11;
}
block_8: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field5 + field6));
    value_x2 = field7;
    goto block_11;
}
block_11: {
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x2)(value_x0,value_x19,value_x2);
    __builtin_unreachable();
}
}

extern "C" void RecoveredCall_5263f0_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5263f0(uint64_t arg0) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[8];
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((value_x0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 48) + 8));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x0 + 64) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((value_x0 + 64) + 8));
    RecoveredCall_5263f0_3(value_x0);
    value_x0 = (field2 + (int64_t(field1) >> 1));
    value_x19 = field3;
    if ((uint32_t(field1) & 0x1ull) != 0) goto block_8;
    goto block_6;
}
block_6: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    value_x2 = field4;
    goto block_11;
}
block_8: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field5 + field6));
    value_x2 = field7;
    goto block_11;
}
block_11: {
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x2)(value_x0,value_x19,value_x2);
    __builtin_unreachable();
}
}

extern "C" uint64_t RecoveredCall_56e970_6(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" void RecoveredCall_56e970_9(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_56e970(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_56e970_6(uint32_t(72),uint32_t(8),uint32_t(0),uint32_t(((uint32_t(uint32_t(8195)) & 0xffffull) | (16672ull << 16))));
    RecoveredCall_56e970_9(field0,value_x0);
    return field0;
}
}
