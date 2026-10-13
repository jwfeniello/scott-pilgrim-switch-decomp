// Working labels and ABI views; original method/type declarations are unknown.
// Only the fields touched by this function family are represented here.
#include <stdint.h>

struct RegisteredTypeView {
    int32_t index;
    RegisteredTypeView() noexcept : index(-1) {}
};
struct RegistrationCache {
    uint64_t first, second;
    RegistrationCache() noexcept : first(0), second(0) {}
};
struct RegistrationHash {
    uint32_t value;
    uint32_t reserved;
    RegistrationHash(uint32_t hash) : value(hash) {}
};
template<unsigned Key> struct RegistrationBinding {
    static void EnsureParent();
    static void* ResolveContext(void*);
    static void Register(RegisteredTypeView*, const RegistrationHash*, void*, RegistrationCache*);
};

template<unsigned Key, uint32_t Hash>
__attribute__((noinline)) RegisteredTypeView* RegisterLazyTypeOmit(void* context) {
    static RegisteredTypeView info;
    if (info.index == -1) {
        RegistrationBinding<Key>::EnsureParent();
        RegistrationHash type_hash(Hash);
        void* registry = RegistrationBinding<Key>::ResolveContext(context);
        static RegistrationCache cache;
        RegistrationBinding<Key>::Register(&info, &type_hash, registry, &cache);
    }
    return &info;
}


#define LAZY_TYPE_REGISTRATION_OMIT(Key, Hash) template RegisteredTypeView* RegisterLazyTypeOmit<Key,Hash>(void*);
#include "lazy_type_registration_omit_instances.inc"
#undef LAZY_TYPE_REGISTRATION_OMIT
