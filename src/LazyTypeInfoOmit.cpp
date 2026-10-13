// Lazy eight-digit hexadecimal type hashes. Original method names are unknown.
// Normal C++ static-local constructors produce the two Itanium guard sequences.
#include <stdint.h>

struct TypeIndex {
    int32_t index;
    TypeIndex() noexcept : index(-1) {}
};
struct EmptyTypeInfo {
    uint64_t first, second;
    EmptyTypeInfo() noexcept : first(0), second(0) {}
};
template<unsigned Key> struct TypeInfoBinding {
    // Only the nine bytes written by snprintf are represented in this ABI view.
    // This does not establish the original declaration's full storage size.
    static char name[9];
    static const char text[] __attribute__((visibility("hidden")));
};
extern "C" int snprintf(char*, __SIZE_TYPE__, const char*, ...);

template<unsigned Key, unsigned Length, uint32_t Hash>
__attribute__((noinline)) void* GetLazyTypeInfoOmit() {
    static TypeIndex id;
    if (id.index == -1) {
        if (!TypeInfoBinding<Key>::name[0])
            snprintf(TypeInfoBinding<Key>::name, Length,
                     TypeInfoBinding<Key>::text, Hash);
        return TypeInfoBinding<Key>::name;
    }
    static EmptyTypeInfo empty;
    return &empty;
}

// Each row contains only an identifier, string length and hash extracted from
// original immediate operands. There are no copied instruction bytes.

#define LAZY_TYPE_INFO_OMIT(Key, Hash) template void* GetLazyTypeInfoOmit<Key,9,Hash>();
#include "lazy_type_info_omit_instances.inc"
#undef LAZY_TYPE_INFO_OMIT
