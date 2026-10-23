// Complete byte-matched component operations. Field/type names are ABI views.
// Working names and touched-field ABI views; original complete declarations
// remain unknown.
#include "ReferenceReleaseAbi.h"
namespace ComponentSlot {
struct PropertyLookup {
  uint32_t first, second;
};
struct Owner {
  char unknown[0xe0];
  void *lookup;
};
struct Source {
  Owner *owner;
  virtual ~Source();
  virtual SingleRelease::Slot Read(const PropertyLookup *);
};
template <unsigned Key> struct Binding {
  static PropertyLookup *Lookup(void *, uint32_t);
  static void Assign(void *, const SingleRelease::Slot *);
};
} // namespace ComponentSlot

extern "C" void InitializeBase(void *, void *, ComponentSlot::Source *);
template <unsigned Hash>
__attribute__((always_inline)) inline void
AssignRead(void *target, ComponentSlot::Source *source,
           ComponentSlot::PropertyLookup *info) {
  SingleRelease::Slot value = source->Read(info);
  ComponentSlot::Binding<Hash>::Assign(target, &value);
}
template <unsigned Offset, uint32_t Hash>
__attribute__((noinline)) void
InitializeComponentSlot(void *self, void *owner,
                        ComponentSlot::Source *source) {
  InitializeBase(self, owner, source);
  ComponentSlot::PropertyLookup *info =
      ComponentSlot::Binding<Hash>::Lookup(source->owner->lookup, Hash);
  if (info->second && info->first) {
    AssignRead<Hash>(static_cast<char *>(self) + Offset, source, info);
  }
}

template void InitializeComponentSlot<8, 8808326>(void *, void *,
                                                  ComponentSlot::Source *);
template void InitializeComponentSlot<8, 130557421>(void *, void *,
                                                    ComponentSlot::Source *);
template void InitializeComponentSlot<80, 8808326>(void *, void *,
                                                   ComponentSlot::Source *);
template void InitializeComponentSlot<80, 130557421>(void *, void *,
                                                     ComponentSlot::Source *);
template void InitializeComponentSlot<80, 1575998007>(void *, void *,
                                                      ComponentSlot::Source *);
template void InitializeComponentSlot<80, 1959923751>(void *, void *,
                                                      ComponentSlot::Source *);
template void InitializeComponentSlot<80, 1980251866>(void *, void *,
                                                      ComponentSlot::Source *);
template void InitializeComponentSlot<80, 1992834267>(void *, void *,
                                                      ComponentSlot::Source *);
template void InitializeComponentSlot<160, 1609868158>(void *, void *,
                                                       ComponentSlot::Source *);
