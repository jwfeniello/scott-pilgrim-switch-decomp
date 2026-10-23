// Unmatched reconstruction of 0x1535e0 (1152 original bytes).
// Bounded behavior checks do not award exact-match credit. ABI views are
// provisional.
#include "../UbisoftStringStream.h"
#include <sstream>
#include <stddef.h>
#include <stdint.h>
#include <string>
namespace ServiceResponseAbi {
struct RefObject {
  virtual ~RefObject();
  virtual void Dispose();
  uint32_t references, padding;
  bool TryRef(uint32_t &expected, uint32_t desired) {
    return __atomic_compare_exchange_n(&references, &expected, desired, false,
                                       __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE);
  }
};
template <class T> struct AtomicOwner {
  T *value;
  AtomicOwner() : value(nullptr) {}
  T *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  AtomicOwner(const AtomicOwner &other) : value(nullptr) {
    uint32_t count = 0;
    T *p;
    for (;;) {
      p = other.get();
      if (p)
        count = __atomic_load_n(&p->references, __ATOMIC_ACQUIRE);
      if (p != other.get())
        continue;
      if (!p)
        break;
      if (p->TryRef(count, count + 1))
        break;
    }
    __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
  }
  ~AtomicOwner() {
    T *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};
struct StringObject : RefObject {
  std::string text;
};
struct Text : AtomicOwner<StringObject> {
  Text(const char *);
  Text(const Text &other) : AtomicOwner<StringObject>(other) {}
  const char *c_str() const { return get()->text.c_str(); }
};

struct Node {
  Node *child[2];
  Node *parent;
  uint32_t color;
  int key, value;
};
struct Gate {
  char unknown[12];
  bool enabled;
};
struct Config {
  char unknown0[8];
  int fallback;
  char unknown12[12];
  Node *root;
  char unknown32[304];
  Gate *gate;
  const int &threshold(int key) const {
    Node *node = root;
    const Node *sentinel = reinterpret_cast<const Node *>(&root);
    const Node *found = sentinel;
    while (node) {
      if (key <= node->key)
        found = node;
      node = node->child[node->key < key];
    }
    if (found == sentinel || key < found->key)
      return fallback;
    return found->value;
  }
};
struct Context {
  char unknown[40];
  Config *config;
};
struct Request {
  char unknown[152];
  Context *context;
  Context *get() const { return __atomic_load_n(&context, __ATOMIC_ACQUIRE); }
};
struct Value {
  int32_t count;
  char unknown[18];
  uint16_t flags;
};
struct JsonOwner : AtomicOwner<RefObject> {
  const char *name;
  Value *cursor;
};
extern "C" void *JsonViewTable[];
extern "C" void Free(void *);
struct JsonView {
  uint64_t flags;
  JsonOwner *owner;
  JsonView(const Text &);
  virtual ~JsonView() {
    JsonOwner *p = owner;
    owner = nullptr;
    if (p) {
      p->~JsonOwner();
      Free(p);
    }
  }
};
extern "C" void LogPlain(Config *, uint32_t, int, const Text &);
extern "C" void LogJson(Config *, uint32_t, int, JsonView *, const Text &);
static int Severity(unsigned n) {
  static const int levels[] = {2, 3, 4, 5, 6, 3};
  return n < 6 ? levels[int(n)] : 1;
}
extern "C" void LogConfigured(Request *self, unsigned level, int category,
                              const Text &message) {
  Config *config = self->get()->config;
  int severity = Severity(level);
  const int &threshold = config->threshold(category);
  if (!(threshold > 1 && threshold <= severity) &&
      __atomic_load_n(&self->get()->config->gate, __ATOMIC_ACQUIRE)->enabled)
    return;
  ubiservices::BasicStringStream<char> stream;
  stream << Text(message).c_str();
  Context *context = self->get();
  Text rendered(stream.str().c_str());
  Text empty("{}");
  JsonView view(empty);
  severity = Severity(level);
  config = context->config;
  Value *value = view.owner->cursor;
  if (value && unsigned(value->flags - 3) <= 1 && value->count >= 1)
    LogJson(config, severity, category, &view, rendered);
  else
    LogPlain(config, severity, category, rendered);
}
} // namespace ServiceResponseAbi
