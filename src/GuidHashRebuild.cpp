// Prefix view for the original Storm GUID key: byte count followed by bytes.
// Only bucket rebuilding is credited; the complete key declaration is unknown.
// Public libc++ templates over provisional allocator and element ABI views.
#include <stddef.h>
#include <stdint.h>
template <unsigned Key> struct LibraryBinding {

  static void *Allocate(size_t, size_t, uint32_t, void *, const char *,
                        uint32_t);
  static void Free(void *, const char *, uint32_t) noexcept;
};
template <class T, unsigned Key> struct GameAllocationContext {
  static char context;
};
template <class T, unsigned Key, uint32_t Flags = GUID_ALLOCATION_FLAGS>
struct LibraryAllocator {
  using value_type = T;
  template <class U> struct rebind {
    using other = LibraryAllocator<U, Key, Flags>;
  };
  LibraryAllocator() noexcept {}
  template <class U>
  LibraryAllocator(const LibraryAllocator<U, Key, Flags> &) noexcept {}
  T *allocate(size_t count) {
    return static_cast<T *>(LibraryBinding<Key>::Allocate(
        sizeof(T) * count, alignof(T), Flags,
        &GameAllocationContext<T, Key>::context, "", 0));
  }
  void deallocate(T *value, size_t) noexcept {
    LibraryBinding<Key>::Free(value, "", 0);
  }
};
template <class T, class U, unsigned Key, uint32_t Flags>
bool operator==(const LibraryAllocator<T, Key, Flags> &,
                const LibraryAllocator<U, Key, Flags> &) {
  return true;
}
template <class T, class U, unsigned Key, uint32_t Flags>
bool operator!=(const LibraryAllocator<T, Key, Flags> &,
                const LibraryAllocator<U, Key, Flags> &) {
  return false;
}

#include <cstring>
#include <unordered_map>
#include <unordered_set>
struct ShortString {
  uint8_t size;
  char data[255];
};
struct Hash {
  size_t operator()(const ShortString &) const;
};
struct Equal {
  bool operator()(const ShortString &a, const ShortString &b) const {
    return a.size == b.size && memcmp(a.data, b.data, a.size) == 0;
  }
};
template class std::unordered_set<ShortString, Hash, Equal,
                                  LibraryAllocator<ShortString, 2>>;
