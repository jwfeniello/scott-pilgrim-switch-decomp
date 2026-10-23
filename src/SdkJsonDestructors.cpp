// Json class identity is supported by original RTTI; owner fields are
// reconstructed ABI views.
#include <stddef.h>
#include <stdint.h>
extern "C" void Free(void *);
namespace ubiservices {
struct RefObject {
  virtual ~RefObject();
  virtual void Dispose();
  uint32_t references, padding;
};
struct Owner {
  RefObject *value;
  ~Owner() {
    RefObject *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};
struct JsonOwner : Owner {
  const char *name;
  void *cursor;
};
struct Json {
  virtual ~Json();
  uint64_t flags;
  JsonOwner *owner;
};
Json::~Json() {
  JsonOwner *p = owner;
  owner = nullptr;
  if (p) {
    p->~JsonOwner();
    Free(p);
  }
}
static_assert(sizeof(Json) == 24, "JSON view ABI");
static_assert(sizeof(JsonOwner) == 24, "JSON owner ABI");
} // namespace ubiservices
