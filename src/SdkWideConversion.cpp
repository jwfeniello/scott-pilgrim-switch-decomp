// Reconstructed SDK wide/byte conversions. Preserve limited original encoding
// and partial-output failure behavior; these are not validating Unicode codecs.
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

using Temporary = std::basic_string<char, std::char_traits<char>,
                                    SimpleLibraryAllocator<char, 1>>;
using Wide = std::basic_string<wchar_t, std::char_traits<wchar_t>,
                               SimpleLibraryAllocator<wchar_t, 1>>;
extern "C" void ReserveBytes(Temporary &, size_t);
extern "C" void AppendByte(Temporary &, char);
static bool Encode(unsigned c, Temporary &out) {
  if (c < 128)
    AppendByte(out, char(c));
  else if (c < 2048) {
    AppendByte(out, char((c >> 6) | 0xc0));
    AppendByte(out, char((c & 63) | 0x80));
  } else if (c < 65536) {
    AppendByte(out, char((c >> 12) | 0xe0));
    AppendByte(out, char(((c >> 6) & 63) | 0x80));
    AppendByte(out, char((c & 63) | 0x80));
  } else
    return false;
  return true;
}
extern "C" bool EncodeSdkWide(const Wide &input, Temporary &output) {
  size_t size = input.size();
  output.clear();
  if (!size)
    return true;
  ReserveBytes(output, input.size());
  bool success = true;
  for (auto it = input.begin(); it != input.end() && success; ++it)
    success = Encode(unsigned(*it), output);
  return success;
}

static bool Decode(Temporary::const_iterator &it, Wide &out) {
  unsigned c = static_cast<unsigned char>(*it);
  if (c < 128)
    out.push_back(wchar_t(c));
  else if (c >= 194 && c < 224) {
    unsigned next = static_cast<unsigned char>(*++it);
    out.push_back(wchar_t((c << 6) + next - 0x3080));
  } else if ((c & 0xf0) == 0xe0) {
    unsigned second = static_cast<unsigned char>(*++it);
    unsigned third = static_cast<unsigned char>(*++it);
    out.push_back(wchar_t((c << 12) + (second << 6) + third - 0xe2080));
  } else
    return false;
  return true;
}
extern "C" bool DecodeSdkWide(const Temporary &input, Wide &output) {
  output.clear();
  output.reserve(input.size());
  bool success = true;
  for (auto it = input.begin(); it != input.end() && success; ++it)
    success = Decode(it, output);
  return success;
}
