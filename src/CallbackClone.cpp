// Working names and ABI views; complete original declarations remain unknown.
#include <stdint.h>
inline void* operator new(__SIZE_TYPE__,void* place) noexcept { return place; }
struct Event;
struct Host;
using Member=void (Host::*)(const Event&);
struct CloneBase { virtual ~CloneBase(); };
struct ClonePair { uintptr_t invoke; Host* owner; ClonePair() : invoke(0) {} };
template<unsigned Key> struct CloneRecord : CloneBase {
    ClonePair pair; Member member;
    CloneRecord(const CloneRecord& other) { member=other.member; pair=other.pair; }
    ~CloneRecord() override;
};
template<unsigned Key> struct CloneBinding {
    static unsigned char* pool;
    static void* Allocate(void*,uint32_t);
};
template<unsigned Key> __attribute__((noinline)) CloneRecord<Key>* CloneCallback(const CloneRecord<Key>* source) {
    return new(CloneBinding<Key>::Allocate(CloneBinding<Key>::pool+0x50,sizeof(CloneRecord<Key>))) CloneRecord<Key>(*source);
}
#define CALLBACK_CLONE(Key) template CloneRecord<Key>* CloneCallback<Key>(const CloneRecord<Key>*);
#include "callback_clone_instances.inc"
#undef CALLBACK_CLONE
