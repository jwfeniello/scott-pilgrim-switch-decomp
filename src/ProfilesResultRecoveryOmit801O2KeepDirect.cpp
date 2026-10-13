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


extern "C" uint64_t LeafData_4dfde0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4dfde0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4dfde0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    uint64_t merged4 = field1;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
        merged4 = result0;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    return merged4;
}
