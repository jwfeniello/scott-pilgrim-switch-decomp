// Reconstructed reference ownership set; original complete class names remain unknown.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key> struct ReleaseSet1 { Slot slot0; ~ReleaseSet1() noexcept {} };
}
#define REFERENCE_SET_1(Key) template SingleRelease::ReleaseSet1<Key>::~ReleaseSet1();
#include "reference_set_1_instances.inc"
#undef REFERENCE_SET_1
