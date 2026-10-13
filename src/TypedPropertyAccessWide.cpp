// Working names and touched-field ABI views; original complete declarations remain unknown.
// Touched-field and indirect-return ABI views; complete original declarations are unknown.
#include <stdint.h>
struct PropertyInfo { int32_t index; char unknown[12]; uint32_t descriptor; PropertyInfo() noexcept : index(-1) {} };
struct PropertyResult { uintptr_t first,second,third; };
struct PropertyOwner {
    void* nested;
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4();
    virtual PropertyResult Resolve(const uint32_t*);
};
template<unsigned Key> struct PropertyBinding {
    static void Register(void*);
    static void Convert(void*,const uint32_t*);
};
template<unsigned Key> __attribute__((always_inline)) const uint32_t* PropertyDescriptor() {
    static PropertyInfo info;
    if(info.index==-1) PropertyBinding<Key>::Register(nullptr);
    return &info.descriptor;
}
template<unsigned Key> __attribute__((noinline)) PropertyResult AccessTypedProperty(PropertyOwner* self) {
    if(self->nested) PropertyBinding<Key>::Convert(self->nested,PropertyDescriptor<Key>());
    return self->Resolve(PropertyDescriptor<Key>());
}
#define TYPED_PROPERTY_ACCESS_WIDE(Key) template PropertyResult AccessTypedProperty<Key>(PropertyOwner*);
#include "typed_property_access_wide_instances.inc"
#undef TYPED_PROPERTY_ACCESS_WIDE
