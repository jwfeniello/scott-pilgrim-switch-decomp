// Working names and touched-field ABI views; original complete declarations remain unknown.
#include <stdint.h>
struct TypeIdentityView { void* unknown; const void* type; };
template<unsigned Key> struct IdentityBinding { static const char type; };
template<unsigned Key> __attribute__((noinline)) void* FindTypedPayload(char* self,const TypeIdentityView* identity) {
    return identity->type==&IdentityBinding<Key>::type ? self+8 : nullptr;
}
#define TYPE_PAYLOAD(Key) template void* FindTypedPayload<Key>(char*,const TypeIdentityView*);
#include "type_payload_instances.inc"
#undef TYPE_PAYLOAD
