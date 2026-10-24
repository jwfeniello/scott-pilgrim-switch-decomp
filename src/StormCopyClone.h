// Working names and ABI views; complete original declarations remain unknown.
// Clone() through Storm allocation and an out-of-line copy constructor.
#include <stdint.h>
#include <stddef.h>
extern "C" void* StormAllocate(size_t size, size_t align, uint32_t flags, void* arena, const char* file, uint32_t line);
inline void* operator new(size_t, void* place) noexcept { return place; }
template<unsigned Key, unsigned Size, unsigned Flags> struct StormCloneable {
    char storage[Size];
    StormCloneable(const StormCloneable& other);
    StormCloneable* Clone() const;
};
template<unsigned Key, unsigned Size, unsigned Flags> StormCloneable<Key, Size, Flags>* StormCloneable<Key, Size, Flags>::Clone() const {
    return new (StormAllocate(Size, 8, Flags, nullptr, "", 0)) StormCloneable(*this);
}
#define STORM_COPY_CLONE(Key, Size, Flags) template struct StormCloneable<Key, Size, Flags>;
