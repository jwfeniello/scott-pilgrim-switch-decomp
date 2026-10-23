// Reconstructed Base64 encoder; descriptive allocator and function names.
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

using Temporary = std::basic_string<char, std::char_traits<char>,
                                    SimpleLibraryAllocator<char, 1>>;
using String = std::basic_string<char, std::char_traits<char>,
                                 SimpleLibraryAllocator<char, 2>>;
struct Ref {
  virtual ~Ref();
  virtual void Dispose();
  uint32_t references, padding;
  Ref() : references(0) {}
};
struct Object : Ref {
  String text;
  Object(const Temporary &s) : text(s) {}
};
struct Text {
  Object *value;
};

#include <cstring>
using Output = std::basic_string<char, std::char_traits<char>,
                                 SimpleLibraryAllocator<char, 3>>;

#include <vector>
using Bytes =
    std::vector<unsigned char, SimpleLibraryAllocator<unsigned char, 1>>;
extern "C" const char *Base64Alphabet;
extern "C" void AppendByte(Temporary *, char);
extern "C" Output EncodeBase64(const Bytes *bytes) {
  if (bytes->size() == 0)
    return Output();
  Temporary result;
  result.reserve(256);
  int i = 0;
  unsigned char input[3], encoded[4];
  for (unsigned int n = 0; n < bytes->size(); ++n) {
    input[i++] = (*bytes)[n];
    if (i == 3) {
      encoded[0] = input[0] >> 2;
      encoded[1] = ((input[0] & 3) << 4) | (input[1] >> 4);
      encoded[2] = ((input[1] & 15) << 2) | (input[2] >> 6);
      encoded[3] = input[2] & 63;
      for (i = 0; i < 4; ++i)
        AppendByte(&result, Base64Alphabet[encoded[i]]);
      i = 0;
    }
  }
  if (i) {
    for (int j = i; j < 3; ++j)
      input[j] = 0;
    encoded[0] = input[0] >> 2;
    encoded[1] = ((input[0] & 3) << 4) | (input[1] >> 4);
    encoded[2] = ((input[1] & 15) << 2) | (input[2] >> 6);
    encoded[3] = input[2] & 63;
    for (int j = 0; j < i + 1; ++j)
      AppendByte(&result, Base64Alphabet[encoded[j]]);
    while (i++ < 3)
      AppendByte(&result, '=');
  }
  return Output(result);
}
