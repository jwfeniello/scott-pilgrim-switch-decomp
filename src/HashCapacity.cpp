// Working names and touched-field ABI views; original complete declarations remain unknown.
#include <stdint.h>
using Size=__SIZE_TYPE__;
struct HashCapacityView { void* buckets; Size bucket_count; void* first; Size count; float max_load; };
template<unsigned Key> struct HashCapacityBinding { static Size NextPrime(Size); static void Rehash(HashCapacityView*,Size); };
static __attribute__((always_inline)) bool IsPower2(Size n) { return n>2 && !(n&(n-1)); }
static __attribute__((always_inline)) Size NextPower2(Size n) { return n<2?n:Size(1)<<(64-__builtin_clzll(n-1)); }
template<unsigned Key> __attribute__((noinline)) void SetHashCapacity(HashCapacityView* self,Size n) {
    if(n==1)n=2;
    else if(n&(n-1)) n=HashCapacityBinding<Key>::NextPrime(n);
    Size bc=self->bucket_count;
    if(n>bc)HashCapacityBinding<Key>::Rehash(self,n);
    else if(n<bc) {
        Size need=IsPower2(bc)?NextPower2(Size(__builtin_ceilf(float(self->count)/self->max_load))):HashCapacityBinding<Key>::NextPrime(Size(__builtin_ceilf(float(self->count)/self->max_load)));
        n=n<need?need:n;
        if(n<bc)HashCapacityBinding<Key>::Rehash(self,n);
    }
}
#define HASH_CAPACITY(Key) template void SetHashCapacity<Key>(HashCapacityView*,Size);
#include "hash_capacity_instances.inc"
#undef HASH_CAPACITY
