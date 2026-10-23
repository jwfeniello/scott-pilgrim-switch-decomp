// Reconstructed JobAsyncWait / JobUbiservicesCall constructor family.
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

struct HttpStringEntity;
extern "C" void CopyBody(HttpStringEntity *, const Text &);
struct HttpStringEntity : Ref {
  unsigned char *data;
  unsigned capacity, size;
  virtual ~HttpStringEntity();
  virtual void Dispose();
  HttpStringEntity(const Text &t) : data(nullptr), capacity(0), size(0) {
    CopyBody(this, t);
  }
};
struct EntityOwner {
  HttpStringEntity *value;
  HttpStringEntity *get() const {
    return __atomic_load_n(&value, __ATOMIC_ACQUIRE);
  }
  EntityOwner() : value(nullptr) {
    __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
  }
  EntityOwner(HttpStringEntity *p) : value(nullptr) {
    if (p) {
      __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
      __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
    } else
      __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
  }
  EntityOwner(const EntityOwner &o) : value(nullptr) {
    unsigned count = 0;
    HttpStringEntity *p;
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
  ~EntityOwner() {
    HttpStringEntity *p =
        __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
  EntityOwner &operator=(const EntityOwner &o) {
    if (o.get() != get()) {
      unsigned count = 0;
      HttpStringEntity *p;
      for (;;) {
        p = o.get();
        if (p)
          count = __atomic_load_n(&p->references, __ATOMIC_ACQUIRE);
        if (p != o.get())
          continue;
        if (!p || p->TryRef(count, count + 1))
          break;
      }
      HttpStringEntity *old = __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
      if (old && __atomic_sub_fetch(&old->references, 1, __ATOMIC_ACQ_REL) == 0)
        old->Dispose();
    }
    return *this;
  }
};

#include <cstring>
#include <map>
#include <utility>
struct Less {
  bool operator()(const Text &, const Text &) const;
};
using Tree = std::map<Text, Text, Less,
                      SimpleLibraryAllocator<std::pair<const Text, Text>, 1>>;
struct Headers {
  void *reserved;
  Tree tree;
  Text raw;
  Headers() {}
  Headers(const Headers &o) : tree(o.tree), raw(o.raw) {}
  Headers &operator=(Headers &&o) {
    tree = std::move(o.tree);
    raw = o.raw;
    return *this;
  }
};

struct HttpResponse {
  virtual ~HttpResponse();
  Headers headers;
  int status;
  unsigned length;
  EntityOwner body;
  HttpResponse() : status(0), length(0) {}
  HttpResponse(int code, const Headers &h, const Text &t)
      : headers(h), status(code), length(t.get()->text.size()),
        body(new (EngineAllocate(sizeof(HttpStringEntity), 4, 0, 0x40c00000))
                 HttpStringEntity(t)) {}
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

struct ResponseStorage : Ref {
  ResponseStorage() {}
  HttpResponse response;
  virtual ~ResponseStorage();
  virtual void Dispose();
};
struct BaseJob {
  virtual ~BaseJob();
  unsigned char unknown[88];
  BaseJob(void *, void *, void *);
};
struct Stage {
  void *words[5];
};
struct AsyncBase {
  virtual ~AsyncBase();
  void *owner;
  AsyncBase(void *);
};
struct Callback {
  unsigned char bytes[32];
  Callback(void *);
};
struct StageJob : BaseJob {
  Stage stage;
  AsyncBase async;
  Callback callback;
  virtual ~StageJob();
  StageJob(void *a, void *b, void *c, void *d)
      : BaseJob(a, c, d), stage{}, async(nullptr), callback(b) {}
};
struct TypedAsync : AsyncBase {
  SharedOwner<ResponseStorage> value;
  virtual ~TypedAsync();
  TypedAsync()
      : AsyncBase(nullptr),
        value(new (EngineAllocate(sizeof(ResponseStorage), 4, 0, 0x40c00000))
                  ResponseStorage()) {}
};
struct HttpJob : StageJob {
  TypedAsync result;
  void *next;
  unsigned char unknown[40];
  void *pending;
  uint64_t reserved;
  int deadline;
  unsigned tag;
  virtual ~HttpJob();
  HttpJob(void *a, void *b, void *c, void *d)
      : StageJob(a, b, c, d), result(), next(nullptr), pending(nullptr),
        deadline(0x7fffffff), tag(43) {}
};
static_assert(sizeof(ResponseStorage) == 80, "storage");
static_assert(sizeof(StageJob) == 184, "stage");
static_assert(sizeof(HttpJob) == 280, "job");
extern "C" void ConstructHttpJob(HttpJob *self, void *a, void *b, void *c,
                                 void *d) {
  new (self) HttpJob(a, b, c, d);
}
