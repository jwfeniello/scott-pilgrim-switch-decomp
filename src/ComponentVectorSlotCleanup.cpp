// Working names and touched-field ABI views; original complete declarations
// remain unknown.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template <unsigned Key> struct InheritedVectorElement {
  Handle *handle;
  ~InheritedVectorElement() noexcept;
};
template <unsigned Key> struct InheritedVector {
  size_t capacity, size;
  InheritedVectorElement<Key> *data;
  __attribute__((always_inline)) ~InheritedVector() noexcept {
    if (data && size) {
      data[0].~InheritedVectorElement<Key>();
      for (size_t i = 1; i < size; ++i)
        data[i].~InheritedVectorElement<Key>();
    }
    size = 0;
    void *memory = data;
    if (memory)
      allocator_for(memory)->Free(memory);
  }
};

struct Base {
  virtual ~Base();
  char unknown[72];
};
struct Owner : Base {
  Slot extra;
  void *unknown;
  InheritedVector<0> values;
  virtual ~Owner();
};
Owner::~Owner() {}
static_assert(__builtin_offsetof(Owner, extra) == 80, "extra slot");
static_assert(__builtin_offsetof(Owner, values) == 96, "owned vector");
} // namespace SingleRelease
