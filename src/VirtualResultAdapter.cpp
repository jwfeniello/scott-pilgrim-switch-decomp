// Working names and touched-field ABI views; original complete declarations remain unknown.
#include <stdint.h>
struct AdapterResult { uintptr_t first,second,third; };
struct ResultHost { virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual AdapterResult Read(void*); };
template<unsigned Key> __attribute__((noinline)) AdapterResult AdaptVirtualResult(void* value,ResultHost* self) { return self->Read(value); }
#define VIRTUAL_RESULT_ADAPTER(Key) template AdapterResult AdaptVirtualResult<Key>(void*,ResultHost*);
#include "virtual_result_adapter_instances.inc"
#undef VIRTUAL_RESULT_ADAPTER
