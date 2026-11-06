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
template struct Pool<80>;   // SPTG::TSmallPool<HudStatusMONEYINFO>
// The same pool with its storage further in (Onyx::Localization::Preset and PresetType).
template <unsigned Size, unsigned StorageOffset> struct PoolAt {
  __attribute__((always_inline)) virtual ~PoolAt() {}
  char unknown[StorageOffset - 8];
  Storage<Size> storage;
};
template struct PoolAt<40, 0x28>;
template struct PoolAt<24, 0x20>;
} // namespace HudPoolAbi
