// Reconstructed family; names and complete original ABI declarations are unknown.
#include <stdint.h>
struct CallbackEvent;
struct CallbackOwner;
using CallbackMethod=void (CallbackOwner::*)(const CallbackEvent&);
struct CallbackView {
    uintptr_t vtable,opaque;
    CallbackOwner* owner;
    CallbackMethod method;
};
template<unsigned Key>
__attribute__((noinline)) bool CallbackIdentityEqual(const CallbackView* first,const CallbackView* second) {
    return first->owner==second->owner && first->method==second->method;
}
#define CALLBACK_IDENTITY(Key) template bool CallbackIdentityEqual<Key>(const CallbackView*,const CallbackView*);
#include "callback_identity_instances.inc"
#undef CALLBACK_IDENTITY
