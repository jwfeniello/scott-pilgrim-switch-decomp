// The out-of-line Vector::Resize instances (see Vector.h). Both serve 4-byte
// elements; which element type each belongs to is not known.
#include "Vector.h"

namespace onyx {

template void Vector<int32_t>::Resize(uint64_t count);    // 0x70c0a0
template void Vector<uint32_t>::Resize(uint64_t count);   // 0x6994f0

}  // namespace onyx
