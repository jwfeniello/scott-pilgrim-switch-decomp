// Working names and ABI views; complete original declarations remain unknown.
// A polymorphic callable holding one pointer-sized capture; Clone() copies it
// into a new heap object.
#include <stdint.h>
struct FunctionBase { virtual ~FunctionBase(); virtual FunctionBase* Clone() const = 0; };
struct Capture { void* value; };
template<unsigned Key> struct Function8 : FunctionBase {
    Capture capture;
    explicit Function8(const Capture& c) : capture(c) {}
    FunctionBase* Clone() const override;
};
template<unsigned Key> __attribute__((noinline)) FunctionBase* Function8<Key>::Clone() const { return new Function8(capture); }
#define FUNCTION_CLONE8(Key) template struct Function8<Key>;
