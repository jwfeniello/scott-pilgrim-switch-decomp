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
static char *AllocateChars(size_t count) {
  if (!count)
    return nullptr;
  uint32_t *block = static_cast<uint32_t *>(
      EngineAllocate(uint32_t(count + 8), 4, 0, 0x40c00000));
  block[0] = count;
  block[1] = 8;
  char *data = reinterpret_cast<char *>(block + 2);
  for (uint32_t i = 0; size_t(i) < size_t(count); ++i)
    new (data + i) char;
  return data;
}

using Text = std::basic_string<char, std::char_traits<char>,
                               SimpleLibraryAllocator<char, 1>>;
struct Buffer {
  char *begin;
  char *cursor;
  char *end;
  Text text;
};
extern "C" void GrowJsonBuffer(Buffer *self, size_t requested) {
  char *oldEnd = self->end;
  char *oldBegin = self->begin;
  if (oldEnd != oldBegin)
    self->text.insert(self->text.end(), static_cast<const char *>(oldBegin),
                      static_cast<const char *>(self->cursor));
  if ((size_t(oldEnd - oldBegin) < requested) | (!self->cursor)) {
    if (requested <= 1024)
      requested = 1024;
    char *old = self->begin;
    self->begin = nullptr;
    if (old)
      EngineFree(old - reinterpret_cast<uint32_t *>(old)[-1]);
    char *fresh = AllocateChars(requested);
    self->begin = fresh;
    self->end = fresh + requested;
  }
  self->cursor = self->begin;
}
