// ABI view of Storm event cleanup. The 40-byte base payload is not decoded.
// Shared ownership uses libc++'s count-minus-one convention.
#include <stddef.h>
#include <stdint.h>
struct SharedControl {
  virtual ~SharedControl();
  virtual void OnZeroShared();
  int64_t owners, weak;
  void ReleaseWeak();
};
template <class T> struct SharedOwner {
  T *pointer;
  SharedControl *owner;
  ~SharedOwner() {
    SharedControl *c = owner;
    if (c && __atomic_fetch_sub(&c->owners, 1, __ATOMIC_ACQ_REL) == 0) {
      c->OnZeroShared();
      c->ReleaseWeak();
    }
  }
};
struct Event {
  virtual ~Event();
  unsigned char base[40];
  SharedOwner<void> payload;
};
Event::~Event() {}
static_assert(offsetof(Event, payload) == 48, "event shared payload offset");
static_assert(sizeof(Event) == 64, "event layout");
