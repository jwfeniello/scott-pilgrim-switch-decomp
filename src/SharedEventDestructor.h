// Working names and ABI views; complete original declarations remain unknown.
// Event destructors releasing a libc++ shared_ptr member.
#include <stdint.h>
// libc++ (5+) std::__shared_weak_count ABI view: owners at +8, __on_zero_shared in slot 2.
struct SharedControl {
    virtual ~SharedControl();
    virtual void OnZeroShared() noexcept;
    long shared_owners;
    void ReleaseWeak() noexcept;
    void ReleaseShared() noexcept {
        if (__atomic_add_fetch(&shared_owners, -1, __ATOMIC_ACQ_REL) == -1) { OnZeroShared(); ReleaseWeak(); }
    }
};
template<class T> struct SharedPointer {
    T* pointer; SharedControl* control;
    ~SharedPointer() { if (control) control->ReleaseShared(); }
};
struct Shared;
template<unsigned Key, unsigned Offset> struct SharedEvent {
    virtual ~SharedEvent();
    char padding[Offset - 8];
    SharedPointer<Shared> value;
};
template<unsigned Key, unsigned Offset> SharedEvent<Key, Offset>::~SharedEvent() {}
#define SHARED_EVENT(Key, Offset) template struct SharedEvent<Key, Offset>;
