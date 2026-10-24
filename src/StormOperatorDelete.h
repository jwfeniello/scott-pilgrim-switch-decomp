// Working names and ABI views; complete original declarations remain unknown.
// Static operator delete of Storm-allocated classes.
#include <stdint.h>
extern "C" void Storm_Free(void* pointer, const char* file, int line) noexcept;
template<unsigned Key> struct StormAllocated { static void operator delete(void* p) { Storm_Free(p, "", 0); } };
#define STORM_OPERATOR_DELETE(Key) template struct StormAllocated<Key>;
