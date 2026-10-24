// Working names and ABI views; complete original declarations remain unknown.
// Returns a result, or the pending one while the network state is 3.
#include <stdint.h>
struct NetResult { uint64_t value; NetResult(uint64_t v) : value(v) {} NetResult(const NetResult&); ~NetResult(); };
struct NetState { char header[8]; uint32_t state; };
template<unsigned Key> struct ObjectManagerNetwork {
    char header[0x48]; NetState* network;
    NetResult Pending();
    NetResult Check();
};
template<unsigned Key> NetResult ObjectManagerNetwork<Key>::Check() {
    if (network->state == 3) return Pending();
    return NetResult(1);
}
#define NETWORK_STATE_RESULT(Key) template struct ObjectManagerNetwork<Key>;
