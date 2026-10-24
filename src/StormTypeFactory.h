// Working names and ABI views; complete original declarations remain unknown.
// storm::DynamicTypeFactory<T>::Create: Storm allocation and a value-initialized product.
#include <stdint.h>
#include <stddef.h>
extern "C" void* StormAllocate(size_t size, size_t align, uint32_t flags, void* arena, const char* file, uint32_t line);
inline void* operator new(size_t, void* place) noexcept { return place; }
template<unsigned Key> struct ProductType { __attribute__((visibility("hidden"))) static void* current; };
template<unsigned Key> struct ProductData {
    int32_t id;
    void* type;
    void* extra;
    ProductData() : ProductData(ProductType<Key>::current) {}
    explicit ProductData(void* t) : id(-1), type(t), extra(nullptr) {}
};
template<unsigned Key> struct Product : ProductData<Key> { virtual ~Product(); };
struct FactoryBase { virtual ~FactoryBase(); virtual void* Create(const char* file, uint32_t line) = 0; };
template<unsigned Key> struct DynamicTypeFactory : FactoryBase { void* Create(const char* file, uint32_t line) override; };
template<unsigned Key> void* DynamicTypeFactory<Key>::Create(const char* file, uint32_t line) {
    return new (StormAllocate(sizeof(Product<Key>), 8, 0x41202003u, nullptr, file, line)) Product<Key>();
}
#define STORM_TYPE_FACTORY(Key) template struct DynamicTypeFactory<Key>;
