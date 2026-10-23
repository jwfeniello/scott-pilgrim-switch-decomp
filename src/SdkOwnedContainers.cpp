// Matching SDK container operations using public libc++ headers.
// Reconstructed JobUbiservicesCall start/wait state transitions.
// Type names are ABI views; per-function vtables and base calls are bound
// separately.
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
  bool TryRef(unsigned &expected, unsigned desired) {
    return __atomic_compare_exchange_n(&references, &expected, desired, false,
                                       __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE);
  }
};
struct Object : Ref {
  String text;
  Object() {}
  Object(const Temporary &s) : text(s) {}
};

struct Text;
extern "C" void ConstructSizedText(Text *, const char *, unsigned);
struct SizedTag {};
extern "C" void ConstructSdkText(Text *, const char *);
struct Text {
  Object *value;

  Text() {
    Object *p = new (EngineAllocate(sizeof(Object), 4, 0, 0x40c00000)) Object();
    value = nullptr;
    if (p) {
      __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
      __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
    } else
      __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
  }
  Text &operator=(const Text &o) {
    if (o.get() != get()) {
      Object *p;
      unsigned count = 0;
      for (;;) {
        p = o.get();
        if (p)
          count = __atomic_load_n(&p->references, __ATOMIC_ACQUIRE);
        if (p != o.get())
          continue;
        if (!p || p->TryRef(count, count + 1))
          break;
      }
      Object *old = __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
      if (old && __atomic_sub_fetch(&old->references, 1, __ATOMIC_ACQ_REL) == 0)
        old->Dispose();
    }
    return *this;
  }

  Text(const Text &o) : value(nullptr) {
    Object *p;
    unsigned count = 0;
    for (;;) {
      p = o.get();
      if (p)
        count = __atomic_load_n(&p->references, __ATOMIC_ACQUIRE);
      if (p != o.get())
        continue;
      if (!p || p->TryRef(count, count + 1))
        break;
    }
    __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
  }
  Text(const char *s) { ConstructSdkText(this, s); }
  Text(SizedTag, const char *p, unsigned n) { ConstructSizedText(this, p, n); }
  Object *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  ~Text() {
    Object *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};

template <class T> struct SharedOwner {
  T *value;
  T *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  SharedOwner() : value(nullptr) {
    __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
  }
  SharedOwner(T *p) : value(nullptr) {
    if (p) {
      __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
      __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
    } else
      __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
  }
  SharedOwner(const SharedOwner &o) : value(nullptr) {
    unsigned count = 0;
    T *p;
    for (;;) {
      p = o.get();
      if (p)
        count = __atomic_load_n(&p->references, __ATOMIC_ACQUIRE);
      if (p != o.get())
        continue;
      if (!p || p->TryRef(count, count + 1))
        break;
    }
    __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
  }
  ~SharedOwner() {
    T *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
  SharedOwner &operator=(const SharedOwner &o) {
    if (o.get() != get()) {
      unsigned count = 0;
      T *p;
      for (;;) {
        p = o.get();
        if (p)
          count = __atomic_load_n(&p->references, __ATOMIC_ACQUIRE);
        if (p != o.get())
          continue;
        if (!p || p->TryRef(count, count + 1))
          break;
      }
      T *old = __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
      if (old && __atomic_sub_fetch(&old->references, 1, __ATOMIC_ACQ_REL) == 0)
        old->Dispose();
    }
    return *this;
  }
};

#include <deque>
#include <list>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
struct PairText {
  Text a, b;
};
struct IdText {
  uint32_t id;
  Text text;
};
extern "C" int CompareText(const Text &, const Text &);
extern "C" size_t HashText(const Text &);
struct ExternalLess {
  bool operator()(const Text &a, const Text &b) const {
    return CompareText(a, b) < 0;
  }
};
struct ExternalHash {
  size_t operator()(const Text &t) const { return HashText(t); }
};
struct ExternalEqual {
  bool operator()(const Text &a, const Text &b) const {
    return CompareText(a, b) == 0;
  }
};

bool operator==(const Text &a, const Text &b) {
  return a.get()->text == b.get()->text;
}
bool operator<(const Text &a, const Text &b) {
  return a.get()->text < b.get()->text;
}
template <class T>
bool operator==(const SharedOwner<T> &a, const SharedOwner<T> &b) {
  return a.get() == b.get();
}
template <class T>
bool operator<(const SharedOwner<T> &a, const SharedOwner<T> &b) {
  return std::less<T *>()(a.get(), b.get());
}
bool operator==(const PairText &a, const PairText &b) {
  return a.a == b.a && a.b == b.b;
}
bool operator<(const PairText &a, const PairText &b) {
  return a.a < b.a || (!(b.a < a.a) && a.b < b.b);
}
bool operator==(const IdText &a, const IdText &b) {
  return a.id == b.id && a.text == b.text;
}
bool operator<(const IdText &a, const IdText &b) {
  return a.id < b.id || (a.id == b.id && a.text < b.text);
}

#include <vector>
// Layout-only view for two vector helpers; the original record name is unknown.
struct Record {
  uint64_t data[1];
  Text text[4];
};
template class SDK_OWNED_CONTAINER;
