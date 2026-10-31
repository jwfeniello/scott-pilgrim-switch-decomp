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

// The same load as a step in a chain: the two- and three-argument forms the original has for
// a component's dependencies. Before calls the previous step with the same arguments; After
// calls the next one. Each step reads one dependency by its type hash and assigns it to the
// slot at Offset, which is 0 when the step belongs to a member and not to the component.
template <unsigned Key> struct LoadStep {
  static void Before2(void *, ComponentSlot::Source *);
  static void Before3(void *, void *, ComponentSlot::Source *);
  static void After2(void *, ComponentSlot::Source *);
  static void After3(void *, void *, ComponentSlot::Source *);
};
template <unsigned Key, uint32_t Hash, unsigned Offset>
__attribute__((always_inline)) inline void LoadSlot(void *self,
                                                    ComponentSlot::Source *source) {
  ComponentSlot::PropertyLookup *info =
      ComponentSlot::Binding<Key>::Lookup(source->owner->lookup, Hash);
  if (info->second && info->first) {
    AssignRead<Key>(static_cast<char *>(self) + Offset, source, info);
  }
}
template <unsigned Key, uint32_t Hash, unsigned Offset, int Before, int After,
          unsigned AfterOffset>
void LoadStep2(void *self, ComponentSlot::Source *source) {
  if (Before)
    LoadStep<Key>::Before2(self, source);
  LoadSlot<Key, Hash, Offset>(self, source);
  if (After == 2)
    LoadStep<Key>::After2(static_cast<char *>(self) + AfterOffset, source);
}
template <unsigned Key, uint32_t Hash, unsigned Offset, int Before, int After,
          unsigned AfterOffset>
void LoadStep3(void *self, void *other, ComponentSlot::Source *source) {
  if (Before)
    LoadStep<Key>::Before3(self, other, source);
  LoadSlot<Key, Hash, Offset>(self, source);
  if (After == 2)
    LoadStep<Key>::After2(static_cast<char *>(self) + AfterOffset, source);
  if (After == 3)
    LoadStep<Key>::After3(static_cast<char *>(self) + AfterOffset, other, source);
}
template void LoadStep2<0x8de160u, 0x7552b5e0u, 0x0u, 0, 2, 0x8u>(void *, ComponentSlot::Source *);
template void LoadStep3<0x6a3960u, 0x4eda3d42u, 0x28u, 1, 2, 0x30u>(void *, void *, ComponentSlot::Source *);
template void LoadStep3<0x727e20u, 0x70e7d8b1u, 0x0u, 0, 3, 0x8u>(void *, void *, ComponentSlot::Source *);
template void LoadStep3<0x733390u, 0x5ce15376u, 0x0u, 0, 3, 0x8u>(void *, void *, ComponentSlot::Source *);
template void LoadStep2<0x89a110u, 0x722d9eafu, 0x8u, 1, 0, 0x0u>(void *, ComponentSlot::Source *);
template void LoadStep2<0x8d1780u, 0x2e09d828u, 0x8u, 1, 0, 0x0u>(void *, ComponentSlot::Source *);
template void LoadStep2<0x938ed0u, 0x4984819fu, 0x8u, 1, 0, 0x0u>(void *, ComponentSlot::Source *);
template void LoadStep2<0x93ab60u, 0x4131b8ceu, 0x8u, 1, 0, 0x0u>(void *, ComponentSlot::Source *);
template void LoadStep2<0x9520f0u, 0x6a816514u, 0x8u, 1, 0, 0x0u>(void *, ComponentSlot::Source *);
