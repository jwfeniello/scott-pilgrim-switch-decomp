// Working names and touched-field ABI views; original complete declarations remain unknown.
template<unsigned Key> struct AddressBinding { static const char table; };
template<unsigned Key> __attribute__((noinline)) const void* TypeAddress() { return &AddressBinding<Key>::table; }
#define TYPE_ADDRESS(Key) template const void* TypeAddress<Key>();
#include "type_address_instances.inc"
#undef TYPE_ADDRESS
