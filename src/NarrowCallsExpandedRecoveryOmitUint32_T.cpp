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


extern "C" uint32_t RecoveredCall_252410_0(uint64_t);
extern "C" uint64_t RecoveredCall_252410_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_252410(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t result0 = RecoveredCall_252410_0(arg0);
    const uint64_t result1 = RecoveredCall_252410_1(field0,uint32_t(uint32_t(result0)),arg1);
    return uint32_t(1);
}
