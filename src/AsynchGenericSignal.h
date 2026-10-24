// Working names and ABI views; complete original declarations remain unknown.
// Signals an asynchronous callback with value 4.
#include <stdint.h>
template<unsigned Key> struct AsynchGeneric {
    static void (*callback)(uint32_t, uint32_t*);
    static uint32_t Signal();
};
template<unsigned Key> uint32_t AsynchGeneric<Key>::Signal() { uint32_t value = 4; callback(0, &value); return 0; }
#define ASYNCH_GENERIC_SIGNAL(Key) template struct AsynchGeneric<Key>;
