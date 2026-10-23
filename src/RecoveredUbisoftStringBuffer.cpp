// Instantiate the SDK allocator-backed string buffer through public libc++
// templates.
#include "UbisoftStringStream.h"
template class std::basic_stringbuf<char, std::char_traits<char>,
                                    ubiservices::ContainerAllocator<char>>;
