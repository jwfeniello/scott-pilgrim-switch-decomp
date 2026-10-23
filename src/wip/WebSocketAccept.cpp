// Unmatched WebSocket accept-value reconstruction; bounded behavior tests
// do not award exact-match credit. Types are reconstructed ABI views.
#include <stddef.h>
#include <stdint.h>
template <unsigned Key> struct SimpleLibraryBinding {
  static __attribute__((malloc)) void *Allocate(uint32_t, uint32_t, uint32_t,
                                                uint32_t) noexcept;
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
  Object() {}
  Object(const Temporary &s) : text(s) {}
};

#include <vector>
struct Text {
  Object *value;
  Object *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  __attribute__((always_inline)) Text(const Temporary &s) {
    Object *p =
        new (EngineAllocate(sizeof(Object), 4, 0, 0x40c00000)) Object(s);
    value = nullptr;
    __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
    __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
  }
  ~Text() {
    Object *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};
using Bytes =
    std::vector<unsigned char, SimpleLibraryAllocator<unsigned char, 1>>;
extern "C" Text AppendText(const Text &, const char *);
extern "C" Temporary EncodeBase64(const Bytes &);
struct Sha;
extern "C" void ShaUpdate(Sha *, const void *, size_t);
extern "C" void ShaFinish(Sha *);
struct Sha {
  uint64_t count[2];
  unsigned char buffer[64];
  uint32_t state[5];
  Sha() {
    count[0] = count[1] = 0;
    state[0] = 0x67452301;
    state[1] = 0xefcdab89;
    state[2] = 0x98badcfe;
    state[3] = 0x10325476;
    state[4] = 0xc3d2e1f0;
  }
  void Digest(unsigned char *out) {
    uint32_t a = state[0], b = state[1], c = state[2], d = state[3],
             e = state[4];
    ShaFinish(this);
    {
      uint32_t v = state[0];
      out[0] = v >> 24;
      out[1] = v >> 16;
      out[2] = v >> 8;
      out[3] = v;
    }
    {
      uint32_t v = state[1];
      out[4] = v >> 24;
      out[5] = v >> 16;
      out[6] = v >> 8;
      out[7] = v;
      state[0] = a;
      state[1] = b;
    }
    {
      uint32_t v = state[2];
      out[8] = v >> 24;
      out[9] = v >> 16;
      out[10] = v >> 8;
      out[11] = v;
    }
    {
      uint32_t v = state[3];
      out[12] = v >> 24;
      out[13] = v >> 16;
      out[14] = v >> 8;
      out[15] = v;
      state[2] = c;
      state[3] = d;
    }
    {
      uint32_t v = state[4];
      out[16] = v >> 24;
      out[17] = v >> 16;
      out[18] = v >> 8;
      out[19] = v;
      state[4] = e;
    }
  }
};
extern "C" Text MakeWebSocketAccept(const Text &key) {
  Text input = AppendText(key, "258EAFA5-E914-47DA-95CA-C5AB0DC85B11");
  Bytes digest(20);
  Sha sha;
  ShaUpdate(&sha, input.get()->text.data(), input.get()->text.size());
  sha.Digest(digest.data());
  return Text(EncodeBase64(digest));
}
