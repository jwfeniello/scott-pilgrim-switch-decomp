// Working names and ABI views; complete original declarations remain unknown.
template<unsigned Key> struct DeleteBinding { static void Destroy(void*) noexcept; static void Free(void*) noexcept; };
template<unsigned Key> __attribute__((noinline)) void DestroyAllocated(void* self) {
    DeleteBinding<Key>::Destroy(self);
    DeleteBinding<Key>::Free(self);
}
#define DELETING_WRAPPER(Key) template void DestroyAllocated<Key>(void*);
#include "deleting_wrapper_instances.inc"
#undef DELETING_WRAPPER
