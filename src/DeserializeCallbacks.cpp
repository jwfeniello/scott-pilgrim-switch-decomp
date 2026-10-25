// Provisional C++ wire-record and callback-ownership ABI views.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t,void* address) noexcept {return address;}
#include "DeserializeCallbacks.h"
// Keys identify original function extents; full class and callback signatures remain unknown.
// The temporary pointer uses a relaxed store to reproduce the observed scheduling.
// Its original qualifier/type is not established by this isolated byte match.
#define DESERIALIZE_CALLBACKS(Key,Hash) template void DeserializeCallbacks<Key,Hash>(DecodeReader*,void*,DecodeHost*);
#include "deserialize_callbacks_instances.inc"
#undef DESERIALIZE_CALLBACKS
