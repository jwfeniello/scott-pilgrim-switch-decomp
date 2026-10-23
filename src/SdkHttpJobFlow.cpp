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

#include <pthread.h>
struct Result {
  int code;
  Text message;
  void *context;
  int flags;
};
struct MutexHolder {
  void *vtable;
  pthread_mutex_t mutex;
};
struct AsyncState : Ref {
  void *unknown16;
  int state;
  char unknown28[12];
  Result result;
  char unknown72[64];
  bool completed;
  char unknown137[7];
  MutexHolder *mutex;
};
struct AsyncHolder {
  virtual ~AsyncHolder();
  SharedOwner<AsyncState> state;
};
struct AsyncHttp : AsyncHolder {
  SharedOwner<ResponseStorage> value;
};
#include <functional>
#include <memory>
struct Request {
  virtual ~Request();
  virtual void Slot2();
  virtual void Slot3();
  virtual Request *Clone() const;
};
struct CallPolicy {
  int first;
  unsigned second;
};
// The callback signature and policy field meanings remain provisional.
// These routines copy the callback; they do not invoke it.
struct Options {
  std::function<void()> callback;
  CallPolicy policy;
};
struct JobRuntime;
using Action = void (JobRuntime::*)();
struct Stage {
  Action first, second;
  const char *label;
  Stage &operator=(const Stage &o) {
    first = o.first;
    second = o.second;
    label = o.label;
    return *this;
  }
};
struct JobRuntime {
  virtual ~JobRuntime();
  virtual void Slot2();
  virtual void Slot3();
  virtual void LogError(const Text &, const Result &);
  virtual const AsyncHolder &GetAsync();
  unsigned references;
  int state;
  long delay;
  Stage current;
  char unknown64[32];
  Stage resume;
  char unknown136[48];
  AsyncHttp response;
  std::unique_ptr<Request> request;
  std::function<void()> callback;
  CallPolicy policy;
  void WaitAsyncRest();
};
extern "C" void DeliverResult(AsyncState *, const Result &);
extern "C" void HandleHttpFailure(JobRuntime *, const HttpResponse &,
                                  const Text &);
extern "C" void FinalizeAsync(AsyncState *, const AsyncHttp &);
static bool Failed(const AsyncHttp &r) {
  return unsigned(r.state.get()->state - 3) < 2;
}
extern "C" void WaitHttp(JobRuntime *self) {
  if (Failed(self->response) || self->response.state.get()->state == 2) {
    if (Failed(self->response)) {
      {
        Text label(self->resume.label);
        self->LogError(label, self->response.state.get()->result);
      }
      AsyncState *source = self->response.state.get();
      AsyncState *target = self->GetAsync().state.get();
      pthread_mutex_t *mutex = &target->mutex->mutex;
      pthread_mutex_lock(mutex);
      if (target->state != 4 && !target->completed)
        DeliverResult(target, source->result);
      pthread_mutex_unlock(mutex);
      self->state = 4;
    } else if (unsigned(self->response.value.get()->response.status - 200) <
               100) {
      self->current = self->resume;
    } else {
      ResponseStorage *r = self->response.value.get();
      HandleHttpFailure(self, r->response, Text(self->resume.label));
    }
    FinalizeAsync(self->GetAsync().state.get(), self->response);
  } else {
    self->state = 1;
    self->delay = 10;
  }
}
static_assert(__builtin_offsetof(JobRuntime, response) == 184, "response");
static_assert(__builtin_offsetof(AsyncState, result) == 40, "result");

extern "C" void BindAsync(const AsyncHolder &, const AsyncHttp &);
extern "C" void StartHttp(JobRuntime *self, const AsyncHttp &input,
                          Action action, const char *label,
                          const Request &request, const Options &options) {
  self->callback = options.callback;
  self->policy = options.policy;
  self->request.reset(request.Clone());
  if (Failed(input)) {
    {
      Text message(label);
      self->LogError(message, input.state.get()->result);
    }
    AsyncState *source = input.state.get();
    AsyncState *target = self->GetAsync().state.get();
    pthread_mutex_t *mutex = &target->mutex->mutex;
    pthread_mutex_lock(mutex);
    if (target->state != 4 && !target->completed)
      DeliverResult(target, source->result);
    pthread_mutex_unlock(mutex);
    self->state = 4;
  } else if (input.state.get()->state == 2) {
    if (unsigned(input.value.get()->response.status - 200) < 100) {
      self->current = Stage{action, nullptr, label};
    } else {
      ResponseStorage *r = input.value.get();
      HandleHttpFailure(self, r->response, Text(label));
    }
  } else {
    BindAsync(self->GetAsync(), input);
    self->response = input;
    self->resume = Stage{action, nullptr, label};
    self->current = Stage{&JobRuntime::WaitAsyncRest, nullptr,
                          "JobUbiservicesCall::waitAsyncRest"};
  }
}
