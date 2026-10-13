// Recovered field operations and forwarding ABI views. Original complete signatures remain unknown.
#include <stdint.h>
typedef unsigned char ByteVector16 __attribute__((vector_size(16),aligned(1)));
typedef unsigned char ByteVector8 __attribute__((vector_size(8),aligned(1)));
#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define LEAF_CHECK LeafAddedSideEffect();
#else
#define LEAF_CHECK
#endif


extern "C" uint64_t RecoveredCall_220ac0_0(uint64_t);
extern "C" uint64_t RecoveredCall_220ac0_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_220ac0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field1 != field0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = field2;
    *reinterpret_cast<uint64_t*>((field0 + 56)) = 0;
    }
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field3 == 0)) {
    if (!(field3 == arg1)) {
    const uint64_t result0 = RecoveredCall_220ac0_0(field3);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    uint64_t merged8 = field4;
    if (!(field4 == 0)) {
    uint64_t merged7 = field4;
    if (!(field4 == arg2)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    uint64_t merged6 = field4;
    if (!(field5 == field4)) {
    const uint64_t result1 = RecoveredCall_220ac0_1(field4);
        merged6 = result1;
    }
        merged7 = merged6;
    }
        merged8 = merged7;
    }
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)) = arg1;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 8)) = arg2;
    return merged8;
}
