// Working names and ABI views; complete original declarations remain unknown.
// libc++ 4 unordered_map<unsigned, T>::erase(key) with nodes freed through Storm_Free (SDK, -O3).
#include <stdint.h>
#include <stddef.h>
#include <unordered_map>
extern "C" void Storm_Free(void* pointer, const char* file, int line) noexcept;
namespace StormMap {
// Storm allocator: nodes are returned through Storm_Free.
template<class T> struct StormAllocator {
    typedef T value_type;
    StormAllocator() noexcept {}
    template<class U> StormAllocator(const StormAllocator<U>&) noexcept {}
    T* allocate(size_t n);
    void deallocate(T* p, size_t) noexcept { Storm_Free(p, "", 0); }
    template<class U> bool operator==(const StormAllocator<U>&) const noexcept { return true; }
    template<class U> bool operator!=(const StormAllocator<U>&) const noexcept { return false; }
};
template<unsigned Key> struct Value { void* data; };
template<unsigned Key> struct Map {
    typedef std::unordered_map<unsigned, Value<Key>, std::hash<unsigned>, std::equal_to<unsigned>, StormAllocator<std::pair<const unsigned, Value<Key> > > > Type;
};
}
#define STORM_MAP_ERASE_KEY(Key) template StormMap::Map<Key>::Type::size_type StormMap::Map<Key>::Type::erase(const unsigned&);
