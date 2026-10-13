// Public libc++ templates over provisional allocator, comparator and element ABI views.
#include <stdint.h>
#include <algorithm>
template<class T>struct FieldLess {bool operator()(const T&a,const T&b)const{return a.key<b.key;}};
template<class T>__attribute__((noinline)) void SortFields(T*begin,T*end){std::sort(begin,end,FieldLess<T>());}
template<class T>__attribute__((noinline)) void SortCalled(T*begin,T*end,bool(*compare)(const T&,const T&)){std::sort(begin,end,compare);}
struct SortRecord4int32_t { int32_t key;};
template void SortFields<SortRecord4int32_t>(SortRecord4int32_t*,SortRecord4int32_t*);
template void SortCalled<SortRecord4int32_t>(SortRecord4int32_t*,SortRecord4int32_t*,bool(*)(const SortRecord4int32_t&,const SortRecord4int32_t&));
