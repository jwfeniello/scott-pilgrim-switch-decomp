// Working names and ABI views; complete original declarations remain unknown.
// Destroys a held polymorphic object and frees its most-derived storage.
#include <stdint.h>
extern "C" void Storm_Delete(void* pointer, void* arena, const char* file, uint32_t line);
template<unsigned Key> struct Deletable { virtual ~Deletable(); };
template<unsigned Key> struct Holder {
    char padding[0x18];
    Deletable<Key>* object;
    void Release();
};
template<unsigned Key> void Holder<Key>::Release() {
    if (Deletable<Key>* p = object) {
        void* top = dynamic_cast<void*>(p);
        p->~Deletable();
        Storm_Delete(top, nullptr, "", 0);
    }
}
#define STORM_DELETE_HOLDER(Key) template struct Holder<Key>;
