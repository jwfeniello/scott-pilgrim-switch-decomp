// Reconstructed reference ownership set; original complete class names remain unknown.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key> struct ReleaseSet4 { Slot slot0; Slot slot1; Slot slot2; Slot slot3; ~ReleaseSet4() noexcept {} };
}
#define REFERENCE_SET_4(Key) template SingleRelease::ReleaseSet4<Key>::~ReleaseSet4();
#include "reference_set_4_instances.inc"
#undef REFERENCE_SET_4
