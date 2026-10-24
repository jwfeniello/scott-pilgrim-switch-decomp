// Working names and ABI views; element types and allocator owners are provisional.
// libc++ 4 std::vector internals over the Storm STL allocator (SDK, -O3).
// Each explicit instantiation is keyed by its original address and credited only there.
#include <stddef.h>
#include <stdint.h>
#include <typeinfo>
#include <new>
#include <vector>
#include <memory>
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
template void std::vector<std::unique_ptr<Owned<0x262e60u> >, StormAllocator<std::unique_ptr<Owned<0x262e60u> >, 0x262e60u, 0x41203006u> >::reserve(std::size_t);
template void std::vector<std::unique_ptr<Owned<0x2b6ba0u> >, StormAllocator<std::unique_ptr<Owned<0x2b6ba0u> >, 0x2b6ba0u, 0x41203006u> >::__push_back_slow_path<std::unique_ptr<Owned<0x2b6ba0u> > >(std::unique_ptr<Owned<0x2b6ba0u> >&&);
template void std::vector<uint32_t, StormAllocator<uint32_t, 0x306fc0u, 0x41214000u> >::__push_back_slow_path<uint32_t >(uint32_t&&);
template void std::vector<uint32_t, StormAllocator<uint32_t, 0x30a990u, 0x41202000u> >::__push_back_slow_path<uint32_t >(uint32_t&&);
template void std::vector<Record<0x30daf0u>*, StormAllocator<Record<0x30daf0u>*, 0x30daf0u, 0x4120200au> >::__append(std::size_t);
template void std::vector<uint32_t, StormAllocator<uint32_t, 0x3838a0u, 0x41204004u> >::__push_back_slow_path<uint32_t >(uint32_t&&);
template void std::vector<uint32_t, StormAllocator<uint32_t, 0x384a90u, 0x41202002u> >::__push_back_slow_path<uint32_t >(uint32_t&&);
template void std::vector<Record<0x384bf0u>*, StormAllocator<Record<0x384bf0u>*, 0x384bf0u, 0x41206001u> >::__append(std::size_t);
template void std::vector<uint32_t, StormAllocator<uint32_t, 0x387fd0u, 0x41202002u> >::__append(std::size_t, const uint32_t&);
template void std::vector<uint32_t, StormAllocator<uint32_t, 0x388630u, 0x41203000u> >::__append(std::size_t, const uint32_t&);
template void std::vector<uint32_t, StormAllocator<uint32_t, 0x3e1460u, 0x41202008u> >::__push_back_slow_path<uint32_t >(uint32_t&&);
template void std::vector<std::unique_ptr<Owned<0x3e4670u> >, StormAllocator<std::unique_ptr<Owned<0x3e4670u> >, 0x3e4670u, 0x41204005u> >::__push_back_slow_path<std::unique_ptr<Owned<0x3e4670u> > >(std::unique_ptr<Owned<0x3e4670u> >&&);
template void std::vector<uint32_t, StormAllocator<uint32_t, 0x3e5a40u, 0x41202000u> >::__append(std::size_t, const uint32_t&);
template void std::vector<Record<0x3ec530u>*, StormAllocator<Record<0x3ec530u>*, 0x3ec530u, 0x4120200au> >::__append(std::size_t);
template void std::vector<std::unique_ptr<Deletable<0x42e800u, 2u>, StormDeleter>, StormAllocator<std::unique_ptr<Deletable<0x42e800u, 2u>, StormDeleter>, 0x42e800u, 0x4120300du> >::reserve(std::size_t);
template void std::vector<uint16_t, StormAllocator<uint16_t, 0x455a10u, 0x41207008u> >::__push_back_slow_path<uint16_t >(uint16_t&&);
template void std::vector<uint32_t, StormAllocator<uint32_t, 0x459d90u, 0x41203000u> >::__push_back_slow_path<uint32_t >(uint32_t&&);
template void std::vector<Record<0x45ae80u>*, StormAllocator<Record<0x45ae80u>*, 0x45ae80u, 0x41203001u> >::__append(std::size_t);
template void std::vector<std::unique_ptr<Deletable<0x45d630u, 2u>, StormDeleter>, StormAllocator<std::unique_ptr<Deletable<0x45d630u, 2u>, StormDeleter>, 0x45d630u, 0x4120300du> >::__push_back_slow_path<std::unique_ptr<Deletable<0x45d630u, 2u>, StormDeleter> >(std::unique_ptr<Deletable<0x45d630u, 2u>, StormDeleter>&&);
template void std::vector<std::unique_ptr<Deletable<0x45d810u, 2u>, StormDeleter>, StormAllocator<std::unique_ptr<Deletable<0x45d810u, 2u>, StormDeleter>, 0x45d810u, 0x4120300du> >::__push_back_slow_path<std::unique_ptr<Deletable<0x45d810u, 2u>, StormDeleter> >(std::unique_ptr<Deletable<0x45d810u, 2u>, StormDeleter>&&);
template void std::vector<std::unique_ptr<Deletable<0x45d9f0u, 2u>, StormDeleter>, StormAllocator<std::unique_ptr<Deletable<0x45d9f0u, 2u>, StormDeleter>, 0x45d9f0u, 0x4120300du> >::__push_back_slow_path<std::unique_ptr<Deletable<0x45d9f0u, 2u>, StormDeleter> >(std::unique_ptr<Deletable<0x45d9f0u, 2u>, StormDeleter>&&);
template void std::vector<std::unique_ptr<Deletable<0x45dbd0u, 2u>, StormDeleter>, StormAllocator<std::unique_ptr<Deletable<0x45dbd0u, 2u>, StormDeleter>, 0x45dbd0u, 0x4120300du> >::__push_back_slow_path<std::unique_ptr<Deletable<0x45dbd0u, 2u>, StormDeleter> >(std::unique_ptr<Deletable<0x45dbd0u, 2u>, StormDeleter>&&);
template void std::vector<uint32_t, StormAllocator<uint32_t, 0x492e40u, 0x4120f000u> >::__push_back_slow_path<uint32_t >(uint32_t&&);
template void std::vector<std::unique_ptr<Owned<0x493520u> >, StormAllocator<std::unique_ptr<Owned<0x493520u> >, 0x493520u, 0x4120f000u> >::__push_back_slow_path<std::unique_ptr<Owned<0x493520u> > >(std::unique_ptr<Owned<0x493520u> >&&);
template void std::vector<std::unique_ptr<Owned<0x4936e0u> >, StormAllocator<std::unique_ptr<Owned<0x4936e0u> >, 0x4936e0u, 0x4120f000u> >::__push_back_slow_path<std::unique_ptr<Owned<0x4936e0u> > >(std::unique_ptr<Owned<0x4936e0u> >&&);
template void std::vector<std::unique_ptr<Owned<0x4938a0u> >, StormAllocator<std::unique_ptr<Owned<0x4938a0u> >, 0x4938a0u, 0x4120f000u> >::__push_back_slow_path<std::unique_ptr<Owned<0x4938a0u> > >(std::unique_ptr<Owned<0x4938a0u> >&&);
template void std::vector<std::unique_ptr<Owned<0x493a60u> >, StormAllocator<std::unique_ptr<Owned<0x493a60u> >, 0x493a60u, 0x4120f000u> >::__push_back_slow_path<std::unique_ptr<Owned<0x493a60u> > >(std::unique_ptr<Owned<0x493a60u> >&&);
template void std::vector<std::unique_ptr<Owned<0x4c0350u> >, StormAllocator<std::unique_ptr<Owned<0x4c0350u> >, 0x4c0350u, 0x4120f000u> >::__push_back_slow_path<std::unique_ptr<Owned<0x4c0350u> > >(std::unique_ptr<Owned<0x4c0350u> >&&);
template void std::vector<std::unique_ptr<Owned<0x552a10u> >, StormAllocator<std::unique_ptr<Owned<0x552a10u> >, 0x552a10u, 0x41200000u> >::reserve(std::size_t);
template void std::vector<std::unique_ptr<Owned<0x55ea00u> >, StormAllocator<std::unique_ptr<Owned<0x55ea00u> >, 0x55ea00u, 0x41200000u> >::__push_back_slow_path<std::unique_ptr<Owned<0x55ea00u> > >(std::unique_ptr<Owned<0x55ea00u> >&&);
template void std::vector<uint8_t, StormAllocator<uint8_t, 0x561050u, 0x41201003u> >::__push_back_slow_path<uint8_t >(uint8_t&&);
template void std::vector<uint8_t, StormAllocator<uint8_t, 0x57fc50u, 0x4120200au> >::__append(std::size_t);
template void std::vector<uint8_t, StormAllocator<uint8_t, 0x5910e0u, 0x41202000u> >::__append(std::size_t);
template void std::vector<Record<0x5ccde0u>*, StormAllocator<Record<0x5ccde0u>*, 0x5ccde0u, 0x4120a006u> >::__append(std::size_t);
