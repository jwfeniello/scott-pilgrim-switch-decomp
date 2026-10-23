// Public libc++8 wide-string templates with reconstructed allocator bindings.
// Reconstructed SDK text-buffer flush/growth helper; descriptive names are
// provisional; allocator declarations preserve the matching library ABI.
#include <stddef.h>
#include <stdint.h>
template <unsigned Key> struct SimpleLibraryBinding {
  static void *Allocate(uint32_t, uint32_t, uint32_t, uint32_t) noexcept;
  static void Free(void *) noexcept;
};
template <class T, unsigned Key> struct SimpleLibraryAllocator {
  using value_type = T;
  template <class U> struct rebind {
    using other = SimpleLibraryAllocator<U, Key>;
  };
  SimpleLibraryAllocator() noexcept {}
  template <class U>
  SimpleLibraryAllocator(const SimpleLibraryAllocator<U, Key> &) noexcept {}
  T *allocate(size_t count) {
    return static_cast<T *>(SimpleLibraryBinding<Key>::Allocate(
        uint32_t(count * sizeof(T)), 4, 0, 0x40c00000));
  }
  void deallocate(T *ptr, size_t) noexcept {
    SimpleLibraryBinding<Key>::Free(ptr);
  }
};
template <class T, class U, unsigned Key>
bool operator==(const SimpleLibraryAllocator<T, Key> &,
                const SimpleLibraryAllocator<U, Key> &) {
  return true;
}
template <class T, class U, unsigned Key>
bool operator!=(const SimpleLibraryAllocator<T, Key> &,
                const SimpleLibraryAllocator<U, Key> &) {
  return false;
}

#include <string>

#include <new>
extern "C" void *EngineAllocate(size_t, unsigned, unsigned, unsigned);
extern "C" void EngineFree(void *);

template class std::basic_string<wchar_t, std::char_traits<wchar_t>,
                                 SimpleLibraryAllocator<wchar_t, 1>>;
