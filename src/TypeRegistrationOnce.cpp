// Reconstructed family; names and complete original ABI declarations are unknown.
#include <stdint.h>
struct RegisteredTypeView { int32_t index; RegisteredTypeView() noexcept : index(-1) {} };
struct RegistrationCache { uint64_t first,second; RegistrationCache() noexcept : first(0),second(0) {} };
struct RegistrationHash { uint32_t value,reserved; };
template<unsigned Key> struct OnceBinding {
    static void* ResolveContext(void*);
    static void Register(RegisteredTypeView*,const RegistrationHash*,void*,RegistrationCache*);
};
template<unsigned Key>
__attribute__((noinline)) void RegisterTypeOnce(void* context,const RegistrationHash* hash) {
    static bool registered=false;
    if (!registered) {
        registered=true;
        static RegisteredTypeView info;
        void* registry=OnceBinding<Key>::ResolveContext(context);
        static RegistrationCache cache;
        OnceBinding<Key>::Register(&info,hash,registry,&cache);
    }
}
#define TYPE_REGISTRATION_ONCE(Key) template void RegisterTypeOnce<Key>(void*,const RegistrationHash*);
#include "type_registration_once_instances.inc"
#undef TYPE_REGISTRATION_ONCE
