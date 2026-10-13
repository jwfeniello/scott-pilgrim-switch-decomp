// Public libc++ templates over provisional allocator and element ABI views.
#include <stddef.h>
#include <stdint.h>
template<unsigned Key> struct LibraryBinding {

    static void* Allocate(size_t,size_t,uint32_t,void*,const char*,uint32_t);
    static void Free(void*,const char*,uint32_t) noexcept;
};
template<class T,unsigned Key> struct GameAllocationContext {static char context;};
template<class T,unsigned Key,uint32_t Flags=0x4120a002> struct LibraryAllocator {
    using value_type=T;
    template<class U> struct rebind {using other=LibraryAllocator<U,Key,Flags>;};
    LibraryAllocator() noexcept {}
    template<class U> LibraryAllocator(const LibraryAllocator<U,Key,Flags>&) noexcept {}
    T* allocate(size_t count) {return static_cast<T*>(LibraryBinding<Key>::Allocate(sizeof(T)*count,alignof(T),Flags,&GameAllocationContext<T,Key>::context,"",0));}
    void deallocate(T* value,size_t) noexcept {LibraryBinding<Key>::Free(value,"",0);}
};
template<class T,class U,unsigned Key,uint32_t Flags> bool operator==(const LibraryAllocator<T,Key,Flags>&,const LibraryAllocator<U,Key,Flags>&) {return true;}
template<class T,class U,unsigned Key,uint32_t Flags> bool operator!=(const LibraryAllocator<T,Key,Flags>&,const LibraryAllocator<U,Key,Flags>&) {return false;}

#include <deque>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
struct alignas(8) GameRecord32 {char unknown[32];};
template class std::deque<GameRecord32,LibraryAllocator<GameRecord32,1>>;
template class std::vector<GameRecord32,LibraryAllocator<GameRecord32,2>>;
template class std::__split_buffer<GameRecord32*,LibraryAllocator<GameRecord32*,3>>;
template class std::unordered_map<uint32_t,GameRecord32,std::hash<uint32_t>,std::equal_to<uint32_t>,LibraryAllocator<std::pair<const uint32_t,GameRecord32>,4>>;
template class std::unordered_map<uint64_t,GameRecord32,std::hash<uint64_t>,std::equal_to<uint64_t>,LibraryAllocator<std::pair<const uint64_t,GameRecord32>,5>>;
template class std::map<uint32_t,GameRecord32,std::less<uint32_t>,LibraryAllocator<std::pair<const uint32_t,GameRecord32>,6>>;
template class std::set<uint64_t,std::less<uint64_t>,LibraryAllocator<uint64_t,7>>;
template class std::unordered_set<uint64_t,std::hash<uint64_t>,std::equal_to<uint64_t>,LibraryAllocator<uint64_t,8>>;
