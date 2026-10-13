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

extern "C" __attribute__((noinline)) float RecoveredLeaf_941720(uint64_t arg0) {
    LEAF_CHECK
    return LeafBitsFloat(0);
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_941740(uint64_t arg0) {
    LEAF_CHECK
    return LeafBitsFloat(0);
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_941750(uint64_t arg0) {
    LEAF_CHECK
    return LeafBitsFloat(0);
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_a31f10(uint64_t arg0) {
    LEAF_CHECK
    return LeafBitsFloat(0);
}


extern "C" __attribute__((noinline)) ByteVector16 RecoveredLeaf_aa3b00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<ByteVector16*>((arg0 + 248)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 232)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 216)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 200)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 184)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 168)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 152)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 136)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 120)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 104)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 88)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 72)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 56)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 40)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 24)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 264) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    return ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
}


extern "C" __attribute__((noinline)) ByteVector16 RecoveredLeaf_aa3d90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<ByteVector16*>(((arg0 + 240) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 240) + 16)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 208) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 208) + 16)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 176) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 176) + 16)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 144) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 144) + 16)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 112) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 112) + 16)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 80) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 80) + 16)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 48) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 48) + 16)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 16) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 16) + 16)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    return ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
}


extern "C" __attribute__((noinline)) ByteVector16 RecoveredLeaf_aad0c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    uint64_t merged3 = field0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
        merged3 = result0;
    }
    *reinterpret_cast<ByteVector16*>(((arg0 + 292) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 244)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 276) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 228)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 212)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 196)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 180)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 164)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 148)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 132)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 116)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 100)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 84)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 68)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>((arg0 + 52)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    *reinterpret_cast<ByteVector16*>(((arg0 + 260) + 0)) = ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    return ByteVector16{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_b947f0(uint64_t arg0) {
    LEAF_CHECK
    return LeafBitsFloat(0);
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d1b4e0(uint64_t arg0) {
    LEAF_CHECK
    return LeafBitsFloat(0);
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d6a6c0(uint64_t arg0) {
    LEAF_CHECK
    return LeafBitsFloat(0);
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d757d0(uint64_t arg0) {
    LEAF_CHECK
    return LeafBitsFloat(0);
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_dacec0(uint64_t arg0) {
    LEAF_CHECK
    return LeafBitsFloat(0);
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_de3360(uint64_t arg0) {
    LEAF_CHECK
    return LeafBitsFloat(0);
}
