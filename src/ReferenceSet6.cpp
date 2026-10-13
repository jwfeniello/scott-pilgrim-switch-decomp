// Reconstructed reference ownership set; original complete class names remain unknown.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key> struct ReleaseSet6 { Slot slot0; Slot slot1; Slot slot2; Slot slot3; Slot slot4; Slot slot5; ~ReleaseSet6() noexcept {} };
}
#define REFERENCE_SET_6(Key) template SingleRelease::ReleaseSet6<Key>::~ReleaseSet6();
#include "reference_set_6_instances.inc"
#undef REFERENCE_SET_6
