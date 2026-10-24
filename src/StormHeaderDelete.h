// Working names and ABI views; complete original declarations remain unknown.
// operator delete for objects with an 8-byte header before them.
#include <stdint.h>
extern "C" void Storm_Free(void* pointer, const char* file, int line) noexcept;
template<unsigned Key> struct StormHeaderAllocated {
    static void operator delete(void* p) { Storm_Free(static_cast<char*>(p) - 8, "", 0); }
};
#define STORM_HEADER_DELETE(Key) template struct StormHeaderAllocated<Key>;
