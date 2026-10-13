// Working names and touched-field ABI views; original complete declarations remain unknown.
#include <stdint.h>
template<unsigned Key> struct SharedCountBinding { static char table[]; static char tag[] __attribute__((visibility("hidden"))); static void DestroyBase(void*,const char*,uint32_t); };
struct SharedCount {
    virtual ~SharedCount();
    virtual void DestroyObject();
    uint64_t references;
};
extern "C" void ReleaseSharedWeak(SharedCount*);
template<unsigned Key,unsigned Offset> struct SharedCountView { void* table; char unknown[Offset-8]; SharedCount* count; };
template<unsigned Key,unsigned Offset> __attribute__((noinline)) void DestroySharedCount(SharedCountView<Key,Offset>* self) {
    SharedCount* count=self->count;
    self->table=SharedCountBinding<Key>::table+16;
    if(count && __atomic_fetch_sub(&count->references,1,__ATOMIC_ACQ_REL)==0) {
        count->DestroyObject();
        ReleaseSharedWeak(count);
    }
    SharedCountBinding<Key>::DestroyBase(self,SharedCountBinding<Key>::tag,0);
}
#define SHARED_COUNT(Key,Offset) template void DestroySharedCount<Key,Offset>(SharedCountView<Key,Offset>*);
#include "shared_count_destructor_instances.inc"
#undef SHARED_COUNT
