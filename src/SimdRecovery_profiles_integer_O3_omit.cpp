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
extern "C" unsigned char LeafData_233c80_0[];
extern "C" uint64_t RecoveredCall_233c80_4(uint64_t,uint64_t,uint32_t);
extern "C" uint64_t RecoveredCall_233c80_10(uint64_t,uint32_t,uint64_t);
extern "C" unsigned char LeafData_233c80_17[];
extern "C" void RecoveredCall_233c80_23(uint32_t,uint32_t,uint32_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_233c80() {
    LEAF_CHECK
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = RecoveredCall_233c80_4(uint32_t(504),((reinterpret_cast<uintptr_t>(LeafData_233c80_0) - 2761) + 2761),uint32_t(639));
    value_x19 = field0;
    if (field0 == 0) goto block_17;
    goto block_7;
}
block_7: {
    const uint64_t field1 = RecoveredCall_233c80_10(value_x19,uint32_t(0),uint32_t(504));
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = (value_x19 + 24);
    *reinterpret_cast<uint32_t*>((value_x19 + 496)) = uint32_t(uint32_t(1));
    return value_x19;
}
block_17: {
    RecoveredCall_233c80_23(uint32_t(20),uint32_t(225),uint32_t(65),((reinterpret_cast<uintptr_t>(LeafData_233c80_17) - 2761) + 2761),uint32_t(641));
    return value_x19;
}
}
