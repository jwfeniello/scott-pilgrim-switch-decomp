// Working names and ABI views; complete original declarations remain unknown.
// SDK type registry: check a lazily registered type, create the libc++ hash map with the Storm allocator, insert the type hash.
#include <stdint.h>
#include <stddef.h>
#include <unordered_map>
#include <new>
extern "C" void* AllocateContext(uint32_t size, uint32_t alignment, uint32_t flags, void* owner, const char* file, int line);
extern "C" void Storm_Free(void* pointer, const char* file, int line) noexcept;
extern "C" void Storm_Delete(void* pointer, void* owner, const char* file, int line) noexcept;
namespace TypeRegistry {
// Storm allocator for the registry's hash map nodes and buckets.
template<class T> struct StormAllocator {
    typedef T value_type;
    StormAllocator() noexcept {}
    template<class U> StormAllocator(const StormAllocator<U>&) noexcept {}
    T* allocate(size_t n);
    void deallocate(T* p, size_t) noexcept { Storm_Free(p, "", 0); }
    template<class U> bool operator==(const StormAllocator<U>&) const noexcept { return true; }
    template<class U> bool operator!=(const StormAllocator<U>&) const noexcept { return false; }
};
typedef std::unordered_map<uint32_t, uint32_t, std::hash<uint32_t>, std::equal_to<uint32_t>, StormAllocator<std::pair<const uint32_t, uint32_t> > > TypeMap;
struct TypeKey { uint32_t hash; };
// Status returned through memory: code 1 means success.
struct Result {
    int32_t code, detail;
    Result() : code(1), detail(0) {}
    Result(const Result& o) : code(o.code), detail(o.detail) {}
    Result& operator=(const Result& o) { code = o.code; detail = o.detail; return *this; }
};
template<unsigned HashOffset> struct TypeInfo {
    int32_t index; char padding[HashOffset - 4]; uint32_t hash;
    TypeInfo() noexcept : index(-1) {}
};
template<unsigned Key, unsigned HashOffset> TypeInfo<HashOffset>& Info() { static TypeInfo<HashOffset> info; return info; }
template<unsigned Key> struct Binding {
    static void Register(void* context);
    static void Mismatch(void* context, const TypeKey* key);
};
template<unsigned Key, unsigned HashOffset, uint32_t Value> struct Registry {
    virtual void Slot0(); virtual void Slot1();
    virtual bool Accepts(const uint32_t* hash);
    TypeMap* types;
    Result Fallback(const TypeKey* key);
    Result Add(const TypeKey* key);
};
template<unsigned Key, unsigned HashOffset, uint32_t Value> Result Registry<Key, HashOffset, Value>::Add(const TypeKey* key) {
    Result result;
    TypeInfo<HashOffset>& info = Info<Key, HashOffset>();
    if (info.index == -1) Binding<Key>::Register(nullptr);
    if (info.hash != key->hash) Binding<Key>::Mismatch(nullptr, key);
    if (!Accepts(&info.hash)) {
        Binding<Key>::Mismatch(nullptr, key);
        result = Fallback(key);
    }
    if (!types) {
        TypeMap* fresh = new (AllocateContext(sizeof(TypeMap), 8, 0x41202001, nullptr, "", 0)) TypeMap();
        TypeMap* old = types;
        types = fresh;
        if (old) { old->~TypeMap(); Storm_Delete(old, nullptr, "", 0); }
    }
    if (types->find(info.hash) == types->end()) (*types)[info.hash] = Value;
    return result;
}
}
#define TYPE_REGISTRY_MAP(Key, HashOffset, Value) template struct TypeRegistry::Registry<Key, HashOffset, Value>;
