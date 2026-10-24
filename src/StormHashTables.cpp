// Working names and ABI views; key and value types are provisional placeholders.
// libc++ 4 std::unordered_map internals over the Storm STL allocator (SDK, -O3).
// Each explicit instantiation is keyed by its original address and credited only there.
#include <stddef.h>
#include <stdint.h>
#include <typeinfo>
#include <new>
#include <vector>
#include <memory>
#include <string>
template<unsigned Key> struct StormBinding {
    static void* Allocate(size_t, size_t, uint32_t, const char*, const char*, uint32_t);
    static void Free(void*, const char*, uint32_t) noexcept;
};
// Storm STL allocator: allocations are tagged with the element type's name.
template<class T, unsigned Key, uint32_t Flags> struct StormAllocator {
    using value_type = T;
    template<class U> struct rebind { using other = StormAllocator<U, Key, Flags>; };
    StormAllocator() noexcept {}
    template<class U> StormAllocator(const StormAllocator<U, Key, Flags>&) noexcept {}
    T* allocate(size_t count) { return static_cast<T*>(StormBinding<Key>::Allocate(sizeof(T) * count, alignof(T), Flags, typeid(T).name(), "", 0)); }
    void deallocate(T* value, size_t) noexcept { StormBinding<Key>::Free(value, "", 0); }
    template<class U, class... Args> void construct(U* p, Args&&... args) { ::new((void*)p) U(static_cast<Args&&>(args)...); }
    template<class U> void destroy(U* p) { p->~U(); }
};
template<class T, class U, unsigned Key, uint32_t Flags> bool operator==(const StormAllocator<T, Key, Flags>&, const StormAllocator<U, Key, Flags>&) { return true; }
template<class T, class U, unsigned Key, uint32_t Flags> bool operator!=(const StormAllocator<T, Key, Flags>&, const StormAllocator<U, Key, Flags>&) { return false; }
extern "C" void Storm_Delete(void* pointer, void* arena, const char* file, uint32_t line) noexcept;
template<unsigned N> struct Slots : Slots<N - 1> { virtual void Pad(char (*)[N]); };
template<> struct Slots<0> {};
template<unsigned Key, unsigned Slot> struct Deletable : Slots<Slot> { virtual ~Deletable(); };
struct StormDeleter {
    template<class T> void operator()(T* p) const noexcept { void* top = dynamic_cast<void*>(p); p->~T(); Storm_Delete(top, nullptr, "", 0); }
};
template<unsigned Key> struct Owned { virtual ~Owned(); };
template<unsigned Key> struct Record { void* data; };
template<class T> struct StringAllocator {
    using value_type = T;
    template<class U> struct rebind { using other = StringAllocator<U>; };
    StringAllocator() {}
    template<class U> StringAllocator(const StringAllocator<U>&) {}
    T* allocate(size_t n) { return static_cast<T*>(StormBinding<1>::Allocate(n * sizeof(T), alignof(T), 0x41201007, typeid(T).name(), "", 0)); }
    void deallocate(T* p, size_t) { StormBinding<1>::Free(p, "", 0); }
};
template<class T, class U> bool operator==(const StringAllocator<T>&, const StringAllocator<U>&) { return true; }
template<class T, class U> bool operator!=(const StringAllocator<T>&, const StringAllocator<U>&) { return false; }
typedef std::basic_string<char, std::char_traits<char>, StringAllocator<char> > String;
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <deque>
#include <list>
template void std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x385c80u, 0x41204000u> >::rehash(std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x385c80u, 0x41204000u> >::size_type);
template std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x3861f0u, 0x41202000u> >::size_type std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x3861f0u, 0x41202000u> >::erase(const uint16_t&);
template void std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x3876b0u, 0x41204008u> >::rehash(std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x3876b0u, 0x41204008u> >::size_type);
template void std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x3eeb00u, 0x4120a008u> >::rehash(std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x3eeb00u, 0x4120a008u> >::size_type);
template void std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x3ef430u, 0x4120a006u> >::rehash(std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x3ef430u, 0x4120a006u> >::size_type);
template void std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x457980u, 0x41203001u> >::rehash(std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x457980u, 0x41203001u> >::size_type);
template std::unordered_map<uint64_t, uint32_t, std::hash<uint64_t>, std::equal_to<uint64_t>, StormAllocator<std::pair<const uint64_t, uint32_t>, 0x4580a0u, 0x41202000u> >::size_type std::unordered_map<uint64_t, uint32_t, std::hash<uint64_t>, std::equal_to<uint64_t>, StormAllocator<std::pair<const uint64_t, uint32_t>, 0x4580a0u, 0x41202000u> >::erase(const uint64_t&);
template std::unordered_map<uint64_t, uint32_t, std::hash<uint64_t>, std::equal_to<uint64_t>, StormAllocator<std::pair<const uint64_t, uint32_t>, 0x458be0u, 0x41202000u> >::size_type std::unordered_map<uint64_t, uint32_t, std::hash<uint64_t>, std::equal_to<uint64_t>, StormAllocator<std::pair<const uint64_t, uint32_t>, 0x458be0u, 0x41202000u> >::erase(const uint64_t&);
template void std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x4592c0u, 0x41203001u> >::rehash(std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x4592c0u, 0x41203001u> >::size_type);
template std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x459560u, 0x41202000u> >::size_type std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x459560u, 0x41202000u> >::erase(const uint16_t&);
template void std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x5cdea0u, 0x4120a006u> >::rehash(std::unordered_map<uint16_t, uint32_t, std::hash<uint16_t>, std::equal_to<uint16_t>, StormAllocator<std::pair<const uint16_t, uint32_t>, 0x5cdea0u, 0x4120a006u> >::size_type);
