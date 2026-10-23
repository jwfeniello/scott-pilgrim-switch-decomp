// Exact shared-document initializer at 0x45180.
// Independent ABI views for this matching unit; original declarations are
// unknown.
#include <cstddef>
#include <cstdlib>
#include <cstring>
#include <new>
extern "C" void EngineFree(void *);
extern "C" void *EngineAllocate(size_t, unsigned, unsigned, unsigned);
struct Chunk {
  size_t capacity, size;
  Chunk *next;
};
struct Pool {
  static const bool kNeedFree = false;
  Chunk *head;
  size_t capacity;
  void *user;
  unsigned reserved;
  Pool() : head(0), capacity(2048), user(0) {}
  ~Pool() {
    while (head) {
      if (head == user) {
        head->size = 0;
        break;
      }
      Chunk *next = head->next;
      EngineFree(head);
      head = next;
    }
  }
  void *Malloc(size_t size) {
    if (!size)
      return 0;
    size = (size + 7) & ~size_t(7);
    if (!head || head->size + size > head->capacity) {
      size_t cap = capacity > size ? capacity : size;
      if (!(cap + sizeof(Chunk)))
        return 0;
      Chunk *chunk = static_cast<Chunk *>(
          EngineAllocate(cap + sizeof(Chunk), 4, 0, 0x40c00000));
      if (!chunk)
        return 0;
      chunk->capacity = cap;
      chunk->size = 0;
      chunk->next = head;
      head = chunk;
    }
    void *result = reinterpret_cast<char *>(head + 1) + head->size;
    head->size += size;
    return result;
  }
  void *Realloc(void *, size_t, size_t);
  static void Free(void *);
};
#define RAPIDJSON_48BITPOINTER_OPTIMIZATION 0
#define RAPIDJSON_ASSERT(x) ((void)0)
#include <rapidjson/document.h>
using Doc = rapidjson::GenericDocument<rapidjson::UTF8<>, Pool, Pool>;

#include "UbisoftStringStream.h"
using Value = rapidjson::GenericValue<rapidjson::UTF8<>, Pool>;
struct Ref {
  virtual ~Ref();
  virtual void Dispose();
  unsigned references, padding;
  Ref() : references(0) {}
  bool TryRef(uint32_t &expected, uint32_t desired) {
    return __atomic_compare_exchange_n(&references, &expected, desired, false,
                                       __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE);
  }
};
struct JsonRoot : Ref {
  Doc *document;
  JsonRoot()
      : document(new (EngineAllocate(sizeof(Doc), 4, 0, 0x40c00000)) Doc) {}
};

extern "C" {
extern void *JsonViewTable[];
extern void *JsonWriterTable[];
}
struct Owner {
  JsonRoot *value;
  JsonRoot *get() const { return __atomic_load_n(&value, __ATOMIC_ACQUIRE); }
  Owner(JsonRoot *p) : value(nullptr) {
    if (p) {
      __atomic_fetch_add(&p->references, 1, __ATOMIC_ACQ_REL);
      __atomic_exchange_n(&value, p, __ATOMIC_ACQ_REL);
    } else {
      __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    }
  }
  Owner(const Owner &other) : value(nullptr) {
    uint32_t count = 0;
    JsonRoot *p;
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
  ~Owner() {
    JsonRoot *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
};
struct JsonOwner : Owner {
  const char *name;
  Value *cursor;
  JsonOwner(const JsonOwner &other)
      : Owner(other), name(other.name), cursor(other.cursor) {}
  JsonOwner(const Owner &root, const char *n, Value *v)
      : Owner(root), name(n), cursor(v) {}
};
struct JsonView {
  void **table;
  uint32_t flags, padding;
  JsonOwner *owner;
  JsonView(const JsonOwner &value) : table(JsonViewTable + 2), flags(0) {
    owner = new (EngineAllocate(24, 4, 0, 0x40c00000))
        JsonOwner(value, value.name, value.cursor);
  }
  ~JsonView() {
    JsonOwner *p = owner;
    owner = nullptr;
    table = JsonViewTable + 2;
    if (p) {
      p->~JsonOwner();
      EngineFree(p);
    }
  }
};
struct JsonDocument {
  void **table;
  JsonView view;
  Value *parent;
  char *allocatedName;
  char inlineName[16];
};
static_assert(sizeof(JsonDocument) == 64, "document view ABI");
static_assert(offsetof(JsonDocument, view) == 8, "JSON view ABI");
static_assert(sizeof(JsonOwner) == 24, "owner ABI");
static_assert(sizeof(Doc) == 104, "RapidJSON document ABI");
extern "C" void InitializeSdkJsonDocument(JsonDocument *self) {
  {
    Owner root(new (EngineAllocate(24, 4, 0, 0x40c00000)) JsonRoot);
    JsonOwner data(root, nullptr, nullptr);
    new (&self->view) JsonView(data);
  }
  self->parent = nullptr;
  self->allocatedName = nullptr;
}
