// Public libc++ 4 container instantiations over a reconstructed four-argument SDK allocator view.
// Record and key types are layout views; original element type names remain unknown.
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
struct alignas(8) SimpleRecord48 {char unknown[48];};
template class std::deque<SimpleRecord48,SimpleLibraryAllocator<SimpleRecord48,1>>;
template class std::vector<uint64_t,SimpleLibraryAllocator<uint64_t,2>>;
template class std::unordered_map<uint32_t,uint64_t,std::hash<uint32_t>,std::equal_to<uint32_t>,SimpleLibraryAllocator<std::pair<const uint32_t,uint64_t>,3>>;
template class std::__hash_table<uint32_t,std::hash<uint32_t>,std::equal_to<uint32_t>,SimpleLibraryAllocator<uint32_t,4>>;
template class std::set<uint32_t,std::less<uint32_t>,SimpleLibraryAllocator<uint32_t,5>>;
