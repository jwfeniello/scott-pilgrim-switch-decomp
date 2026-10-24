// Working names and ABI views; complete original declarations remain unknown.
// An event that owns one polymorphic object at a per-type offset and deletes it
// on destruction; storage is released through Storm_Free.
#include <stdint.h>
extern "C" void Storm_Free(void* pointer, const char* tag, int line) noexcept;
struct Owned { virtual ~Owned(); };
struct EventBase {
    virtual ~EventBase() {}
    static void operator delete(void* p) { Storm_Free(p, "", 0); }
};
template<unsigned Key, unsigned Offset> struct OwningEvent : EventBase {
    char padding[Offset - 8];
    Owned* owned;
    ~OwningEvent() override;
};
template<unsigned Key, unsigned Offset> OwningEvent<Key, Offset>::~OwningEvent() { Owned* p = owned; owned = nullptr; if (p) delete p; }
#define OWNING_EVENT(Key, Offset) template struct OwningEvent<Key, Offset>;
