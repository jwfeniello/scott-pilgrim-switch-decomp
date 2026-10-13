// Working names and touched-field ABI views; original complete declarations remain unknown.
// Static delegate ABI view. The original delegate's full declaration is unknown.
#include <stdint.h>
struct StaticEvent;
template<unsigned Key> struct StaticFunctionBinding {static void Function(const StaticEvent&);};
struct StaticFunctionHost {void Invoke(const StaticEvent&);};
using StaticFunctionMember=void(StaticFunctionHost::*)(const StaticEvent&);
template<unsigned Key> struct StaticFunctionDelegate {
    StaticFunctionHost* host;StaticFunctionMember member;
    StaticFunctionDelegate() noexcept {member=&StaticFunctionHost::Invoke;host=reinterpret_cast<StaticFunctionHost*>(&StaticFunctionBinding<Key>::Function);}
};
template<unsigned Key> __attribute__((noinline)) void InvokeStaticFunction(const StaticEvent& event) {
    static StaticFunctionDelegate<Key> value;
    (value.host->*value.member)(event);
}
#define STATIC_FUNCTION(Key) template void InvokeStaticFunction<Key>(const StaticEvent&);
#include "static_function_callback_instances.inc"
#undef STATIC_FUNCTION
