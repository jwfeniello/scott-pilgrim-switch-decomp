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
// Recovered leaf bodies that completely match these original functions; RecoveredLeaf_2bb790 also matches 0x58c9f0.
extern "C" uint64_t LeafData_2bb790_0;
extern "C" void LeafTarget_2bb790(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2bb790(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2bb790_0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = (field0 + 16);
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = (field0 + 192);
    LeafTarget_2bb790((arg0 + 32));
}

extern "C" void LeafTarget_ea7b90(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ea7b90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    LeafTarget_ea7b90(uint32_t(1),arg0);
}
