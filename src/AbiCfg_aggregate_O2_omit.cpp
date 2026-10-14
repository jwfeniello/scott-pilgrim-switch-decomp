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
struct alignas(8) RecoveredReturn_788fa0 { unsigned char abi_bytes[24]; };
extern "C" uint32_t RecoveredCall_788fa0_6(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) RecoveredReturn_788fa0 RecoveredLeaf_788fa0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_788fa0 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint32_t field0 = RecoveredCall_788fa0_6(value_x1,(value_x0 + 26),uint32_t(1),uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t((((uint32_t(uint32_t(field0)) & 1) == 0) ? uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)))) : (0 + 1))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_78a0d0 { unsigned char abi_bytes[24]; };
extern "C" uint32_t RecoveredCall_78a0d0_4(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) RecoveredReturn_78a0d0 RecoveredLeaf_78a0d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_78a0d0 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 26));
    const uint32_t field1 = RecoveredCall_78a0d0_4(value_x1,uint32_t(field0));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t((((uint32_t(uint32_t(field1)) & 1) == 0) ? uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)))) : (0 + 1))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_78a110 { unsigned char abi_bytes[24]; };
extern "C" uint32_t RecoveredCall_78a110_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) RecoveredReturn_78a110 RecoveredLeaf_78a110(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredReturn_78a110 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint32_t field0 = RecoveredCall_78a110_4(value_x1,(value_x0 + 26));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t((((uint32_t(uint32_t(field0)) & 1) == 0) ? uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)))) : (0 + 1))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_aabe90 { unsigned char abi_bytes[24]; };
extern "C" __attribute__((noinline)) RecoveredReturn_aabe90 RecoveredLeaf_aabe90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredReturn_aabe90 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 200));
    const uint64_t field2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(value_x0);
    const double field3 = *reinterpret_cast<const double*>((field2 + 0));
    const double field4 = *reinterpret_cast<const double*>((value_x0 + 124));
    *reinterpret_cast<double*>((value_x8 + 0)) = LeafBitView<double>(LeafBitView<ByteVector16>(FloatVector2((LeafBitView<FloatVector2>(LeafBitView<ByteVector16>(double(field3)))-LeafBitView<FloatVector2>(LeafBitView<ByteVector16>(double(field4)))))));
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_aabed0 { unsigned char abi_bytes[24]; };
extern "C" __attribute__((noinline)) RecoveredReturn_aabed0 RecoveredLeaf_aabed0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredReturn_aabed0 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 176));
    const uint64_t field2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(value_x0);
    const double field3 = *reinterpret_cast<const double*>((field2 + 0));
    const double field4 = *reinterpret_cast<const double*>((value_x0 + 92));
    *reinterpret_cast<double*>((value_x8 + 0)) = LeafBitView<double>(LeafBitView<ByteVector16>(FloatVector2((LeafBitView<FloatVector2>(LeafBitView<ByteVector16>(double(field3)))-LeafBitView<FloatVector2>(LeafBitView<ByteVector16>(double(field4)))))));
    return recovered_result;
}
}

struct alignas(8) RecoveredReturn_aabf40 { unsigned char abi_bytes[24]; };
extern "C" __attribute__((noinline)) RecoveredReturn_aabf40 RecoveredLeaf_aabf40(uint64_t arg0) {
    LEAF_CHECK
    RecoveredReturn_aabf40 recovered_result;
    uint64_t value_x0 = arg0;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&recovered_result);
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 208));
    const uint64_t field2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(value_x0);
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>((field2 + 0));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>((value_x0 + 100));
    *reinterpret_cast<ByteVector16*>((value_x8 + 0)) = LeafBitView<ByteVector16>(FloatVector4((LeafBitView<FloatVector4>(field3)-LeafBitView<FloatVector4>(field4))));
    return recovered_result;
}
}
