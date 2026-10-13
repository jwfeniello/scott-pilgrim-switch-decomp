// Field offsets describe touched ownership slots, not recovered complete classes.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key,unsigned Offset> struct ReleaseBase { char unknown[Offset-8]; virtual ~ReleaseBase(); };
template<unsigned Key,unsigned Offset0,unsigned Offset1,unsigned Offset2> struct ReleaseMembers3 : ReleaseBase<Key,Offset2> {
    Slot slot2;
    char gap1[Offset1-Offset2-8];
    Slot slot1;
    char gap0[Offset0-Offset1-8];
    Slot slot0;
    ~ReleaseMembers3() noexcept {}
};
}
#define REFERENCE_MEMBERS_3(Key,Offset0,Offset1,Offset2) template SingleRelease::ReleaseMembers3<Key,Offset0,Offset1,Offset2>::~ReleaseMembers3();
#include "reference_members_3_instances.inc"
#undef REFERENCE_MEMBERS_3
