#include <stdint.h>
#include <algorithm>
#include <functional>
extern "C" void PrimitiveSortUp(int32_t* begin,int32_t* end){std::sort(begin,end,std::less<int32_t>());}
extern "C" void PrimitiveSortDown(int32_t* begin,int32_t* end){std::sort(begin,end,std::greater<int32_t>());}
extern "C" void PrimitiveSortCalled(int32_t* begin,int32_t* end,bool(*compare)(const int32_t&,const int32_t&)){std::sort(begin,end,compare);}
