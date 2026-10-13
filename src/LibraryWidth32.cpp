#include <stdint.h>
#include <stddef.h>
#include <deque>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <set>
template<unsigned Key> struct SimpleLibraryBinding {static void* Allocate(uint32_t,uint32_t,uint32_t,uint32_t) noexcept;static void Free(void*) noexcept;};
template<class T,unsigned Key> struct SimpleLibraryAllocator {
    using value_type=T;
    template<class U> struct rebind {using other=SimpleLibraryAllocator<U,Key>;};
    SimpleLibraryAllocator() noexcept {}
    template<class U> SimpleLibraryAllocator(const SimpleLibraryAllocator<U,Key>&) noexcept {}
    T* allocate(size_t count) {return static_cast<T*>(SimpleLibraryBinding<Key>::Allocate(uint32_t(count*sizeof(T)),4,0,0x40c00000));}
    void deallocate(T* ptr,size_t) noexcept {SimpleLibraryBinding<Key>::Free(ptr);}
};
template<class T,class U,unsigned Key> bool operator==(const SimpleLibraryAllocator<T,Key>&,const SimpleLibraryAllocator<U,Key>&) {return true;}
template<class T,class U,unsigned Key> bool operator!=(const SimpleLibraryAllocator<T,Key>&,const SimpleLibraryAllocator<U,Key>&) {return false;}
struct alignas(8) LibraryRecord32 {char unknown[32];};
template class std::deque<LibraryRecord32,SimpleLibraryAllocator<LibraryRecord32,1>>;
template class std::vector<LibraryRecord32,SimpleLibraryAllocator<LibraryRecord32,2>>;
template class std::__split_buffer<LibraryRecord32*,SimpleLibraryAllocator<LibraryRecord32*,3>>;
