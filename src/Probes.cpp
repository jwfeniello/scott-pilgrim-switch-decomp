// Independently reconstructed leaf functions. Names are descriptive working labels.
// Addresses in the manifest are original ELF VAs, not Ghidra's +0x100000 VAs.
#include <stddef.h>

struct IntGetter {
    char padding[0x5c];
    int value;
};
extern "C" int get_value_3211f0(const IntGetter* self) {
    return self->value;
}

struct Nested {
    char padding[0x1118];
    void* value;
};
struct Owner {
    char padding[0x40];
    Nested* nested;
};
extern "C" void* get_nested_32a530(const Owner* self) {
    if (self->nested) return self->nested->value;
    return 0;
}

struct SortItem {
    char padding[0x38];
    unsigned long secondary;
    char gap[8];
    int priority;
};
extern "C" bool compare_328180(void*, const SortItem* a, const SortItem* b) {
    if (b->priority < a->priority) return true;
    if (b->priority > a->priority) return false;
    return b->secondary < a->secondary;
}

struct Callable {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void destroy_inline();
    virtual void destroy_heap();
};
struct FunctionStorage {
    char storage[0x20];
    Callable* callable;
};
extern "C" void dispose_328860(FunctionStorage* self) {
    if (reinterpret_cast<Callable*>(self) == self->callable)
        self->callable->destroy_inline();
    else if (self->callable)
        self->callable->destroy_heap();
}

static_assert(offsetof(IntGetter, value) == 0x5c, "getter layout");
static_assert(offsetof(Nested, value) == 0x1118, "nested layout");
static_assert(offsetof(SortItem, secondary) == 0x38, "sort secondary layout");
static_assert(offsetof(SortItem, priority) == 0x48, "sort priority layout");
static_assert(offsetof(FunctionStorage, callable) == 0x20, "callable layout");
