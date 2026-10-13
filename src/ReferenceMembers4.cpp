// Field offsets describe touched ownership slots, not recovered complete classes.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key,unsigned Offset> struct ReleaseBase { char unknown[Offset-8]; virtual ~ReleaseBase(); };
template<unsigned Key,unsigned Offset0,unsigned Offset1,unsigned Offset2,unsigned Offset3> struct ReleaseMembers4 : ReleaseBase<Key,Offset3> {
    Slot slot3;
    char gap2[Offset2-Offset3-8];
    Slot slot2;
    char gap1[Offset1-Offset2-8];
    Slot slot1;
    char gap0[Offset0-Offset1-8];
    Slot slot0;
    ~ReleaseMembers4() noexcept {}
};
}
#define REFERENCE_MEMBERS_4(Key,Offset0,Offset1,Offset2,Offset3) template SingleRelease::ReleaseMembers4<Key,Offset0,Offset1,Offset2,Offset3>::~ReleaseMembers4();
#include "reference_members_4_instances.inc"
#undef REFERENCE_MEMBERS_4
