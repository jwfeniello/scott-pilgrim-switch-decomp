// A component's handler for its active state changing, the member a delegate
// calls once the component has registered it: deactivated, it sends
// Onyx::Component::Base's event at +0x8 (type 0x255c0afe); activated, the one
// at +0x20 (type 0x44174b43). Ten classes have their own copy (Key labels
// each); their delegates' invoke thunks are the matched InvokeCallback
// instances. Names are provisional.
#include "OnyxSerialize.h"

namespace Onyx { namespace Component {

template<unsigned Key> struct ActivationHandler : Base {
    void OnActiveChanged(const bool* active);
};
template<unsigned Key> void ActivationHandler<Key>::OnActiveChanged(const bool* active) {
    if (!*active) onyx::SendEvent<0x255c0afeu>(event8.callback, event8.target);
    else onyx::SendEvent<0x44174b43u>(event20.callback, event20.target);
}

template struct ActivationHandler<0x7b67d0u>;
template struct ActivationHandler<0x88c490u>;
template struct ActivationHandler<0x898290u>;
template struct ActivationHandler<0x938bc0u>;
template struct ActivationHandler<0x93a850u>;
template struct ActivationHandler<0x951de0u>;
template struct ActivationHandler<0x9caf30u>;
template struct ActivationHandler<0xa71f60u>;
template struct ActivationHandler<0xa736b0u>;

// One class sends events of its own instead (+0x70, type 0x4c54e789, when
// deactivated; +0x58, type 0x42d70a97, when activated).
struct OwnActivationHandler : Base {
    char padding_3c[0x1c];
    SPTG::EventSlot event58;     // +0x58
    SPTG::EventSlot event70;     // +0x70
    void OnActiveChanged(const bool* active);   // 0x935ad0
};
void OwnActivationHandler::OnActiveChanged(const bool* active) {
    if (!*active) onyx::SendEvent<0x4c54e789u>(event70.callback, event70.target);
    else onyx::SendEvent<0x42d70a97u>(event58.callback, event58.target);
}

} }  // namespace Onyx::Component
