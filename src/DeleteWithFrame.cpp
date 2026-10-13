// Working names and touched-field ABI views; original complete declarations remain unknown.
template<unsigned Key> struct FramedDeleteBinding { static void Destroy(void*) noexcept; static void Free(void*) noexcept; };
template<unsigned Key> __attribute__((noinline)) void DestroyWithFrame(void* self) {
    FramedDeleteBinding<Key>::Destroy(self);
    FramedDeleteBinding<Key>::Free(self);
}
#define DELETE_WITH_FRAME(Key) template void DestroyWithFrame<Key>(void*);
#include "delete_with_frame_instances.inc"
#undef DELETE_WITH_FRAME
