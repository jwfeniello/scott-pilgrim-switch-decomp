// Working names and ABI views; complete original declarations remain unknown.
// noexcept operator delete of net property classes.
#include <stdint.h>
extern "C" void Storm_Free(void* pointer, const char* file, int line);
template<unsigned Key, unsigned Header> struct NetPropertyAllocated {
    static void operator delete(void* p) noexcept { Storm_Free(static_cast<char*>(p) - Header, "", 0); }
};
#define NET_PROPERTY_DELETE(Key, Header) template struct NetPropertyAllocated<Key, Header>;
