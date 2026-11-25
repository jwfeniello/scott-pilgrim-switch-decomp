// Onyx::AsyncBroker's destructor. Member and helper names are provisional.
#include <stdint.h>

namespace Onyx {

struct AsyncWork;
void DestroyAsyncWork(AsyncWork* work);   // 0xc58580: null does nothing; otherwise it goes back to its allocator

// An owning pointer to the broker's work, released through 0xc58580. Reset is noexcept: the destructor's two calls
// each have a landing pad of their own that only terminates, so the first call's exception never reaches the member's
// cleanup.
struct AsyncWorkPtr {
    AsyncWork* work;
    ~AsyncWorkPtr() { DestroyAsyncWork(work); }
    void Reset() noexcept {
        AsyncWork* old = work;
        work = nullptr;
        DestroyAsyncWork(old);
    }
};

// Onyx::AsyncBroker (vtable 0x18bd108).
struct AsyncBroker {
    virtual ~AsyncBroker();
    char padding_8[0x8];
    AsyncWorkPtr work;                 // +0x10
};

// Slot 0 (0xc54c20; the deleting destructor 0xc54c60 inlines it): lets the work go, then the member's own release
// runs on the now null pointer.
AsyncBroker::~AsyncBroker() {
    work.Reset();
}

}  // namespace Onyx
