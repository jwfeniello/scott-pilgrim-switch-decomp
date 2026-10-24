// libc++ 4 std::deque instantiations for 32- and 40-byte trivially copyable
// elements, as compiled into the SDK (-O3). The element types are placeholders
// with the original sizes; their real identities are not recovered.
#include <stdint.h>
#include <deque>
template<unsigned Size> struct Element { char data[Size]; };
template class std::deque<Element<32> >;
template class std::deque<Element<40> >;
