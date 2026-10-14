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
extern "C" float RecoveredCall_51bc0_0();
extern "C" __attribute__((noinline)) float RecoveredLeaf_51bc0() {
    LEAF_CHECK
block_0: {
    const float field0 = RecoveredCall_51bc0_0();
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field0)));
}
}

extern "C" float RecoveredCall_95740_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_95740(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((value_x0 + 0)), __ATOMIC_ACQUIRE);
    const float field1 = RecoveredCall_95740_2(field0,(field0 + 80));
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field1)));
}
}

extern "C" float RecoveredCall_95760_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_95760(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((value_x0 + 0)), __ATOMIC_ACQUIRE);
    const float field1 = RecoveredCall_95760_2(field0,(field0 + 88));
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field1)));
}
}

extern "C" float RecoveredCall_95780_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_95780(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((value_x0 + 0)), __ATOMIC_ACQUIRE);
    const float field1 = RecoveredCall_95780_2(field0,(field0 + 96));
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field1)));
}
}

extern "C" float RecoveredCall_957b0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_957b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((value_x0 + 0)), __ATOMIC_ACQUIRE);
    const float field1 = RecoveredCall_957b0_2(field0,(field0 + 120));
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field1)));
}
}

extern "C" float RecoveredCall_957e0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_957e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((value_x0 + 0)), __ATOMIC_ACQUIRE);
    const float field1 = RecoveredCall_957e0_2(field0,(field0 + 136));
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field1)));
}
}

extern "C" float RecoveredCall_95800_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_95800(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((value_x0 + 0)), __ATOMIC_ACQUIRE);
    const float field1 = RecoveredCall_95800_2(field0,(field0 + 144));
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field1)));
}
}

extern "C" float RecoveredCall_95820_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) float RecoveredLeaf_95820(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((value_x0 + 0)), __ATOMIC_ACQUIRE);
    const float field1 = RecoveredCall_95820_2(field0,(field0 + 128));
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field1)));
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_5309c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const float field2 = reinterpret_cast<float (*)(uint64_t)>(field1)(value_x0);
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field2)));
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_576650(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 64));
    const float field2 = reinterpret_cast<float (*)(uint64_t)>(field1)(value_x0);
    return LeafBitView<float>(LeafBitView<ByteVector16>(float(field2)));
}
}
