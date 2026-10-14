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
extern "C" ByteVector16 RecoveredCall_9ce650_3(uint64_t,uint64_t,uint32_t,uint32_t,uint64_t,float);
extern "C" __attribute__((noinline)) ByteVector16 RecoveredLeaf_9ce650(uint64_t arg0,uint64_t arg1,uint32_t arg2,uint32_t arg3,uint64_t arg4,ByteVector16 float_arg0) {
    LEAF_CHECK
    ByteVector16 value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
block_0: {
    const ByteVector16 field0 = RecoveredCall_9ce650_3(value_x0,value_x1,uint32_t((uint32_t(value_x2) & 1)),uint32_t((uint32_t(value_x3) & 1)),value_x4,LeafBitView<float>(value_v0));
    *reinterpret_cast<uint32_t*>((value_x0 + 2172)) = uint32_t(uint32_t(3));
    return field0;
}
}
