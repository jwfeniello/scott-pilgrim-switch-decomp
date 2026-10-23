// Reconstructed URI parser: behavior-tested, not byte-matched.
// Descriptive ABI names; see docs/SDK_URI_PARSER_CANDIDATE.md.
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
  Text(const char *s) { ConstructSdkText(this, s); }
  Object *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  ~Text() {
    Object *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};

#include <stdlib.h>
#include <utility>
using Range = std::pair<size_t, size_t>;
struct Uri {
  void *reserved;
  Text source;
  Range fields[9];
};
extern "C" Text SliceText(const Text *, size_t, size_t);
extern "C" void DetachText(Text *, bool);
extern "C" void InsertText(String *, const char *, const char *, const char *);
static void Append(Text &d, const char *p, size_t n) {
  DetachText(&d, true);
  InsertText(&d.get()->text, d.get()->text.end().base(), p, p + n);
}

#include <algorithm>
#include <cstring>
static size_t Find(const Text *self, const char *needle) {
  size_t length = strlen(needle);
  if (!length)
    return size_t(-1);
  const String &s = self->get()->text;
  for (size_t i = 0; i < s.size(); ++i) {
    if (s[i] == needle[0]) {
      size_t j = 1;
      while (j < length && i + j <= s.size() && s[i + j] == needle[j])
        ++j;
      if (j >= length)
        return i;
    }
  }
  return size_t(-1);
}

static void ErasePrefix(Text *text, size_t n) {
  DetachText(text, true);
  if (size_t(0) <= text->get()->text.size())
    text->get()->text.erase(0, n);
}
static void Truncate(Text *text, size_t n) {
  DetachText(text, true);
  if (n <= text->get()->text.size())
    text->get()->text.erase(n);
}
static size_t ReverseFind(const Text *text, char c) {
  const String &s = text->get()->text;
  return s.rfind("#");
}
extern "C" void ParseUri(Uri *self) {
  for (auto &f : self->fields)
    f = {size_t(-1), size_t(-1)};
  size_t start = 0;
  size_t scheme = Find(&self->source, "://");
  if (scheme != size_t(-1)) {
    self->fields[0] = {0, scheme};
    start = scheme + 3;
  }
  Text rest = SliceText(&self->source, start, size_t(-1));
  size_t at = Find(&rest, "@");
  if (at != size_t(-1)) {
    size_t colon = Find(&rest, ":");
    if (colon < at) {
      self->fields[1] = {start, colon};
      self->fields[2] = {start + colon + 1, at - colon - 1};
    } else
      self->fields[1] = {start, at};
    start += at + 1;
    ErasePrefix(&rest, at + 1);
  }
  size_t slash = Find(&rest, "/");
  if (slash == size_t(-1))
    slash = rest.get()->text.size();
  self->fields[3] = {start, slash};
  size_t colon = Find(&rest, ":");
  if (colon < slash) {
    self->fields[3] = {start, colon};
    self->fields[4].first = colon + start + 1;
    self->fields[4].second = 0;
    while (static_cast<unsigned char>(
               Temporary(rest.get()->text.c_str())[colon + 1]) -
               '0' <=
           9u) {
      ++self->fields[4].second;
      ++colon;
    }
  }
  ++slash;
  ErasePrefix(&rest, slash);
  start += slash;
  size_t frag = ReverseFind(&rest, '#');
  if (frag != size_t(-1)) {
    self->fields[8] = {start + frag + 1, rest.get()->text.size() - frag - 1};
    Truncate(&rest, frag);
  }
  size_t query = Find(&rest, "?");
  if (query != size_t(-1)) {
    self->fields[7] = {start + query + 1, rest.get()->text.size() - query - 1};
    Truncate(&rest, query);
  }
  size_t params = Find(&rest, ";");
  if (params != size_t(-1)) {
    self->fields[6] = {start + params + 1,
                       rest.get()->text.size() - params - 1};
    Truncate(&rest, params);
  }
  self->fields[5] = {start, rest.get()->text.size()};
}
