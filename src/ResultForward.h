// Working names and ABI views; complete original declarations remain unknown.
// Forwards one argument to a virtual slot returning a non-trivial result.
#include <stdint.h>
struct Result { uint64_t words[4]; };
template<unsigned N> struct Slots : Slots<N - 1> { virtual void Pad(char (*)[N]); };
template<> struct Slots<0> {};
template<unsigned Index> struct Forwarding : Slots<Index> { virtual Result Target(void* argument); };
template<unsigned Key, unsigned Offset> struct Forwarder : Forwarding<Offset / 8> {
    Result Forward(void* argument) { return this->Target(argument); }
};
#define RESULT_FORWARD(Key, Offset) template struct Forwarder<Key, Offset>;
