// Exact JSON construction and deep-copy functions over reconstructed ABI views.
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
struct JsonView;
struct JsonOwner : Owner {
  JsonOwner(JsonRoot *root) : Owner(root), name(nullptr), cursor(nullptr) {}
  JsonOwner(const JsonView &);
  const char *name;
  Value *cursor;
  JsonOwner(const JsonOwner &other)
      : Owner(other), name(other.name), cursor(other.cursor) {}
  JsonOwner(const Owner &root, const char *n, Value *v)
      : Owner(root), name(n), cursor(v) {}
};
struct Text;
struct JsonView {
  JsonView(const JsonView &other) {
    flags = 0;
    table = JsonViewTable + 2;
    owner = new (EngineAllocate(24, 4, 0, 0x40c00000)) JsonOwner(other);
  }
  JsonView(const Text &);
  JsonView(JsonOwner *p) {
    flags = 0;
    table = JsonViewTable + 2;
    owner = new (EngineAllocate(24, 4, 0, 0x40c00000)) JsonOwner(*p);
  }
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

JsonOwner::JsonOwner(const JsonView &other)
    : Owner(*other.owner), name(other.owner->name),
      cursor(other.owner->cursor) {}
struct StringObject : Ref {
  std::string text;
};
struct Text {
  Text(const char *);
  StringObject *value;
  StringObject *get() const {
    return __atomic_load_n(&value, __ATOMIC_ACQUIRE);
  }
  ~Text() {
    StringObject *p = __atomic_exchange_n(&value, nullptr, __ATOMIC_ACQ_REL);
    if (p && __atomic_sub_fetch(&p->references, 1, __ATOMIC_ACQ_REL) == 0)
      p->Dispose();
  }
  const char *c_str() const { return get()->text.c_str(); }
  bool empty() const { return get()->text.empty(); }
};
extern "C" Text NormalizeJsonText(const char *);
extern "C" void
ParseDocument(Doc *, rapidjson::GenericStringStream<rapidjson::UTF8<>> &);
static __attribute__((always_inline)) inline void
ParseNormalized(Doc *doc, Text normalized) {
  rapidjson::GenericStringStream<rapidjson::UTF8<>> stream(normalized.c_str());
  ParseDocument(doc, stream);
}
static __attribute__((always_inline)) inline void ParseView(JsonView *self,
                                                            const char *text) {
  Doc *doc = self->owner->get()->document;
  ParseNormalized(doc, NormalizeJsonText(text));
  if (self->owner->get()->document->HasParseError())
    self->owner->cursor = nullptr;
  else
    self->owner->cursor = self->owner->get()->document;
}
static __attribute__((always_inline)) inline void
InitializeView(JsonView *self) {
  self->flags = 0;
  self->table = JsonViewTable + 2;
  self->owner = new (EngineAllocate(24, 4, 0, 0x40c00000))
      JsonOwner(new (EngineAllocate(24, 4, 0, 0x40c00000)) JsonRoot);
}
extern "C" void CopyJsonView(JsonView *self, const JsonView &other) {
  self->flags = 0;
  self->table = JsonViewTable + 2;
  self->owner = new (EngineAllocate(24, 4, 0, 0x40c00000)) JsonOwner(other);
}
extern "C" void JsonFromChars(JsonView *self, const char *text) {
  InitializeView(self);
  if (text)
    ParseView(self, text);
}
extern "C" void JsonFromText(JsonView *self, const Text &text) {
  InitializeView(self);
  if (!text.empty()) {
    Doc *doc = self->owner->get()->document;
    ParseNormalized(doc, NormalizeJsonText(text.c_str()));
    if (self->owner->get()->document->HasParseError())
      self->owner->cursor = nullptr;
    else
      self->owner->cursor = self->owner->get()->document;
  }
}

extern "C" void CopyValue(Value *, const Value *, Pool *);
static __attribute__((always_inline)) inline JsonOwner *MakeOwner(Owner root) {
  JsonOwner data(root, nullptr, nullptr);
  return new (EngineAllocate(24, 4, 0, 0x40c00000))
      JsonOwner(data, data.name, data.cursor);
}
extern "C" JsonView DeepCopyJsonView(const JsonView &from) {
  if (!from.owner->cursor) {
    JsonView result(Text("{}"));
    result.owner->cursor = nullptr;
    return result;
  } else {
    JsonOwner *temp =
        MakeOwner(Owner(new (EngineAllocate(24, 4, 0, 0x40c00000)) JsonRoot));
    CopyValue(temp->get()->document, from.owner->cursor,
              &temp->get()->document->GetAllocator());
    temp->cursor = temp->get()->document;
    temp->name = from.owner->name;
    JsonView result(temp);
    temp->~JsonOwner();
    EngineFree(temp);
    return result;
  }
}
