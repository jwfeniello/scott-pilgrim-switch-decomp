// Touched-field ABI view of SPTG HUD object-pool cleanup.
// The complete original pool and element declarations are not recovered.
// The volatile loop access retains the observed reload of pool storage after
// each virtual destructor; it does not establish the original qualifier.
#include "ReferenceReleaseAbi.h"
namespace HudPoolAbi {
using namespace SingleRelease;
template <unsigned Size> struct Element {
  virtual ~Element();
  char unknown[Size - 8];
};
template <unsigned Size> struct Storage {
  Element<Size> *begin, *end;
  __attribute__((always_inline)) ~Storage() {
    Element<Size> *memory = begin;
    if (memory) {
      size_t count = (reinterpret_cast<uintptr_t>(end) -
                      reinterpret_cast<uintptr_t>(memory)) /
                     sizeof(Element<Size>);
      if (count) {
        memory[0].~Element<Size>();
        for (size_t i = 1; i < count; ++i)
          (*static_cast<Element<Size> *volatile *>(&begin))[i].~Element<Size>();
        memory = begin;
      }
      if (memory)
        allocator_for(memory)->Free(memory);
    }
    begin = nullptr;
    end = nullptr;
  }
};
template <unsigned Size> struct Pool {
  __attribute__((always_inline)) virtual ~Pool() {}
  uint64_t unknown[2];
  Storage<Size> storage;
};
template struct Pool<72>;
} // namespace HudPoolAbi
