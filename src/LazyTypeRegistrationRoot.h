// Working names and ABI views; complete original declarations remain unknown.
// Lazy type registration without a registry context (root types).
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

// Root-level registration: no registry context is resolved.
template<unsigned Key, uint32_t Hash>
__attribute__((noinline)) RegisteredTypeView* RegisterLazyType() {
    static RegisteredTypeView info;
    if (info.index == -1) {
        RegistrationBinding<Key>::EnsureParent();
        RegistrationHash type_hash(Hash);
        static RegistrationCache cache;
        RegistrationBinding<Key>::Register(&info, &type_hash, nullptr, &cache);
    }
    return &info;
}

#define LAZY_TYPE_REGISTRATION_ROOT(Key, Hash) template RegisteredTypeView* RegisterLazyType<Key, Hash>();
