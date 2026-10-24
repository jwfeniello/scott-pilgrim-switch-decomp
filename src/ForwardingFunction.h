// Working names and ABI views; complete original declarations remain unknown.
// libc++ std::function slot functions for a functor that holds captured
// pointers followed by another std::function<void()>.
#include <functional>
template<unsigned Key, unsigned Captured> struct Forwarder {
    void* captured[Captured / 16];
    std::function<void()> inner;
    void operator()() const;
};
#define FORWARDING_FUNCTION(Key, Captured) template class std::__function::__func<Forwarder<Key, Captured>, std::allocator<Forwarder<Key, Captured>>, void()>;
