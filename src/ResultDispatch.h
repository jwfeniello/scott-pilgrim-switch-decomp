// Working names and ABI views; complete original declarations remain unknown.
// Double dispatch returning a non-trivial result from a handler slot.
#include <stdint.h>
struct Result { uint64_t words[4]; };
template<unsigned N> struct Slots : Slots<N - 1> { virtual void Pad(char (*)[N]); };
template<> struct Slots<0> {};
template<unsigned Index> struct Handler : Slots<Index> { virtual Result Handle(void* event); };
template<unsigned Key, unsigned Offset> struct Dispatchable {
    Result Dispatch(Handler<Offset / 8>* handler) { return handler->Handle(this); }
};
#define RESULT_DISPATCH(Key, Offset) template struct Dispatchable<Key, Offset>;
