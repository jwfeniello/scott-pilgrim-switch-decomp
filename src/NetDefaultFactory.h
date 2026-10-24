// Working names and ABI views; complete original declarations remain unknown.
// Storm factory copying a default product with placement new(file, line).
#include <stdint.h>
#include <stddef.h>
extern "C" void* StormAllocate(size_t size, size_t align, uint32_t flags, void* arena, const char* file, uint32_t line);
extern "C" void Storm_Free(void* pointer, const char* file, uint32_t line);
inline void* operator new(size_t size, const char* file, uint32_t line) { return StormAllocate(size, 8, 0x41202000u, nullptr, file, line); }
inline void operator delete(void* p, const char* file, uint32_t line) { Storm_Free(p, file, line); }
template<unsigned Key, unsigned Size> struct NetObject {
    char storage[Size];
    NetObject(const NetObject& other);
    static const NetObject& Default();
};
template<unsigned Key, unsigned Size> struct CopyFactory {
    virtual NetObject<Key, Size>* Create(const NetObject<Key, Size>& source, const char* file, uint32_t line);
};
template<unsigned Key, unsigned Size> NetObject<Key, Size>* CopyFactory<Key, Size>::Create(const NetObject<Key, Size>& source, const char* file, uint32_t line) {
    return new (file, line) NetObject<Key, Size>(source);
}
template<unsigned Key, unsigned Size> struct DefaultFactory {
    virtual NetObject<Key, Size>* Create(const char* file, uint32_t line);
};
template<unsigned Key, unsigned Size> NetObject<Key, Size>* DefaultFactory<Key, Size>::Create(const char* file, uint32_t line) {
    return new (file, line) NetObject<Key, Size>(NetObject<Key, Size>::Default());
}
#define NET_DEFAULT_FACTORY(Key, Size) template struct DefaultFactory<Key, Size>;
