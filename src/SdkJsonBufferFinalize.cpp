// Exact buffer finalization. Distinct allocator views select the matching
// string conversion; their names and distinction are provisional, not recovered
// symbols. Reconstructed SDK text-buffer flush/growth helper; descriptive names
// are provisional; allocator declarations preserve the matching library ABI.
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
using Text = std::basic_string<char, std::char_traits<char>,
                               SimpleLibraryAllocator<char, 1>>;
struct Buffer {
  char *begin;
  char *cursor;
  char *end;
  Text text;
};

using Output = std::basic_string<char, std::char_traits<char>,
                                 SimpleLibraryAllocator<char, 2>>;
extern "C" Output FinishJsonBuffer(Buffer *self) {
  if (self->begin) {
    self->text.insert(self->text.end(), static_cast<const char *>(self->begin),
                      static_cast<const char *>(self->cursor));
    char *old = self->begin;
    self->begin = nullptr;
    if (old)
      EngineFree(old - reinterpret_cast<uint32_t *>(old)[-1]);
  } else
    self->begin = nullptr;
  return Output(self->text);
}
