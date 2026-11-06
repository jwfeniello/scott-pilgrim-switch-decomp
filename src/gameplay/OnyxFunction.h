// Onyx::Function<Sig>, the engine's callback holder, as far as gameplay code builds and drops one. RTTI names what it
// holds: Onyx::Details::FunctionInternalHook<Onyx::MemberFunction<T, Sig>> and the like, all with a clone at slot 2.
#pragma once
#include "OnyxComponents.h"

namespace onyx {
namespace Details {

// What a Function holds: a hook its allocator owns.
struct FunctionBase {
    virtual ~FunctionBase() noexcept;
    virtual FunctionBase* Clone() const;                    // slot 2
    virtual bool Equals(const FunctionBase* other) const;   // slot 3
};

// Destroys a hook and gives its memory back to the allocator it came from.
__attribute__((always_inline)) inline void DestroyFunction(FunctionBase* hook) {
    Allocator* allocator = AllocatorFor(hook);
    hook->~FunctionBase();
    allocator->Free(hook);
}

}  // namespace Details

template<class Sig> struct Function {
    Details::FunctionBase* value;
    Function() : value(nullptr) {}
    ~Function() noexcept { if (value) Details::DestroyFunction(value); }
};

}  // namespace onyx
