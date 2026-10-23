// Unmatched reconstruction of original 0x181f30 (3320 bytes).
// Only paths outside diagnostic logging have bounded behavioral comparisons.
// ABI field names/types remain provisional; see
// docs/SERVICE_RESPONSE_CANDIDATE.md.
#include <sstream>
#include <stddef.h>
#include <stdint.h>
#include <string>
namespace ServiceResponseAbi {
struct RefObject {
  virtual ~RefObject();
  virtual void Dispose();
  uint32_t references, padding;
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
      if (__atomic_compare_exchange_n(&p->references, &count, count + 1, false,
                                      __ATOMIC_ACQ_REL, __ATOMIC_ACQUIRE))
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
struct FunctionBase {
  virtual ~FunctionBase();
  virtual FunctionBase *Clone();
  virtual void CloneInto(void *);
  virtual void Destroy();
  virtual void DestroyAllocated();
};
struct Function {
  alignas(16) char buffer[32];
  FunctionBase *value;
  Function(const Function &other) {
    FunctionBase *p = other.value;
    if (!p)
      value = nullptr;
    else if (static_cast<const void *>(p) == other.buffer) {
      value = reinterpret_cast<FunctionBase *>(buffer);
      p->CloneInto(buffer);
    } else
      value = p->Clone();
  }
  ~Function() {
    if (static_cast<void *>(value) == buffer)
      value->Destroy();
    else if (value)
      value->DestroyAllocated();
  }
};
struct Response {
  int32_t sdkError, pad;
  Text error;
  int32_t category;
  bool complete;
  char pad15[3];
  uint32_t serviceError, pad1c;
  Text serviceName, serviceMessage;
  uint32_t unknown30;
  bool hasUpdate;
  char pad35[3];
  uint32_t update;
  char unknown3c[12];
  Text extra1, extra2, extra3, extra4;
};
static_assert(sizeof(Response) == 104, "response ABI view");
struct ClassificationNode {
  ClassificationNode *left;
  ClassificationNode *right;
  ClassificationNode *parent;
  uint32_t color;
  int32_t key, value;
};
struct Classification {
  char pad0[8];
  int32_t fallback;
  char padc[12];
  ClassificationNode *root;
};
struct StatusUpdate {
  char unknown[48];
  bool changed;
  char pad31[3];
  uint32_t value;
};
struct Context {
  char unknown[32];
  StatusUpdate *status;
  Classification *classification;
};
struct HeaderNode {
  HeaderNode *left;
  HeaderNode *right;
  HeaderNode *parent;
  uint64_t color;
  Text key, value;
};
struct HttpResponse {
  char unknown[24];
  HeaderNode *headers;
  uint64_t padding;
  Text defaultHeader;
  uint32_t status;
};
struct JsonValue {
  uint64_t first, second;
  uint32_t third;
  uint16_t fourth, flags;
};
struct JsonRoot : RefObject {
  JsonValue *value;
};
struct JsonOwner : AtomicOwner<JsonRoot> {
  uint64_t unknown;
  JsonValue *cursor;
};
struct JsonDocument {
  void **table;
  void **viewTable;
  uint64_t unknown10;
  JsonOwner *owner;
  uint64_t unknown20;
  void *scratch;
  bool flag;
  char unknown31[15];
};
extern "C" {
extern void *JsonWriterTable[];
extern void *JsonViewTable[];
void *Allocate(uint32_t, uint32_t, uint32_t, uint32_t);
void Free(void *);
void InitializeDocument(JsonDocument *);
void SetJsonValue(JsonDocument *, const JsonValue &);
int CompareText(const Text &, const Text &);
void LogPlain(Classification *, uint32_t, int32_t, const Text &);
void LogJson(Classification *, uint32_t, int32_t, void *, const Text &);
Response ParseResponse(void *, HttpResponse *, uint32_t, uint32_t, Function);
}
struct Writer {
  void **table;
  JsonDocument *document;
  Writer() {
    table = JsonWriterTable + 2;
    JsonDocument *d =
        static_cast<JsonDocument *>(Allocate(64, 4, 0, 0x40c00000));
    InitializeDocument(d);
    d->flag = false;
    JsonValue *v = d->owner->get()->value;
    v->first = 0;
    v->second = 0;
    v->third = 0;
    v->fourth = 0;
    v->flags = 3;
    d->owner->cursor = d->owner->get()->value;
    document = d;
  }

  Writer operator[](const char *);
  void SetText(const Text &);
  ~Writer() {
    table = JsonWriterTable + 2;
    JsonDocument *d = document;
    document = nullptr;
    if (d) {
      void *scratch = d->scratch;
      d->scratch = nullptr;
      if (scratch)
        Free(static_cast<char *>(scratch) -
             reinterpret_cast<uint32_t *>(scratch)[-1]);
      JsonOwner *owner = d->owner;
      d->owner = nullptr;
      d->viewTable = JsonViewTable + 2;
      if (owner) {
        owner->~JsonOwner();
        Free(owner);
      }
      Free(d);
    }
  }
};
static inline void PutUnsigned(Writer field, uint32_t value) {
  JsonValue v = {uint64_t(value), 0, 0, 0,
                 uint16_t(int32_t(value) < 0 ? 0x1d6 : 0x1f6)};
  SetJsonValue(field.document, v);
}
static inline void PutSigned(Writer field, int32_t value) {
  JsonValue v = {uint64_t(int64_t(value)), 0, 0, 0,
                 uint16_t(value < 0 ? 0xb6 : 0x1f6)};
  SetJsonValue(field.document, v);
}
struct Completion {
  int32_t code, pad;
  Text error;
  uint64_t unknown;
  int32_t invalid, pad1c;
  Completion(const Response &r)
      : code(r.sdkError), error(r.error), unknown(0), invalid(-1) {}
};
struct Pending {
  char pad0[24];
  uint32_t state;
  char pad1c[108];
  bool stopped;
  char pad89[7];
  void *mutexOwner;
};
struct Handle {
  void *unknown;
  Pending *pending;
};
extern "C" {
void Lock(void *);
void Unlock(void *);
void Complete(Pending *, const Completion &);
}
struct Request {
  virtual void Slot0();
  virtual void Slot1();
  virtual void Slot2();
  virtual void Slot3();
  virtual void Slot4();
  virtual Handle *GetHandle();
  virtual void Slot6();
  virtual void Slot7();
  virtual void Slot8();
  virtual void Slot9();
  virtual void Deliver(void *, const Response &);
  uint32_t unknown8, state;
  char pad10[112];
  const char *name;
  char pad88[16];
  Context *context;
  char pada0[48];
  void *parser;
  char padd8[8];
  Function callback;
  uint32_t first, second;
  Context *GetContext() { return __atomic_load_n(&context, __ATOMIC_ACQUIRE); }
};
static_assert(offsetof(Request, callback) == 0xe0, "callback");
static_assert(offsetof(Request, first) == 0x110, "first");
static inline int32_t Classify(Classification *c, int32_t key) {
  ClassificationNode *end = reinterpret_cast<ClassificationNode *>(&c->root);
  ClassificationNode *candidate = end;
  ClassificationNode *n = c->root;
  while (n) {
    if (key <= n->key)
      candidate = n;
    n = n->key < key ? n->right : n->left;
  }
  if (candidate != end && candidate->key <= key)
    return candidate->value;
  return c->fallback;
}
static inline const Text &FindHeader(HttpResponse *response, const Text &key) {
  HeaderNode *end = reinterpret_cast<HeaderNode *>(&response->headers);
  HeaderNode *candidate = end;
  HeaderNode *n = response->headers;
  while (n) {
    int cmp = CompareText(n->key, key);
    if (cmp >= 0)
      candidate = n;
    n = cmp < 0 ? n->right : n->left;
  }
  if (candidate != end && CompareText(key, candidate->key) >= 0)
    return candidate->value;
  return response->defaultHeader;
}
extern "C" void ProcessServiceResponse(Request *self, HttpResponse *incoming,
                                       void *result) {
  Response response = ParseResponse(self->parser, incoming, self->first,
                                    self->second, self->callback);
  if (response.hasUpdate) {
    uint32_t value = response.update;
    StatusUpdate *s = self->GetContext()->status;
    s->value = value;
    s->changed = true;
  }
  int32_t category = response.category;
  int kind = Classify(self->GetContext()->classification, category);
  if (uint32_t(kind - 2) < 4) {
    Writer json;
    PutUnsigned(json["requestStatusCode"], incoming->status);
    PutSigned(json["sdkErrorCode"], response.sdkError);
    PutUnsigned(json["serviceErrorCode"], response.serviceError);
    json["transactionId"].SetText(
        FindHeader(incoming, Text("Ubi-TransactionId")));
    std::stringstream stream;
    if (self->name)
      stream << self->name;
    stream << " received service error: " << response.serviceError << "\n";
    stream << Text(response.serviceMessage).c_str() << ": "
           << Text(response.serviceName).c_str() << "\n"
           << "sdkErrorCode: " << response.sdkError;
    Context *context = self->GetContext();
    Text message(stream.str().c_str());
    JsonValue *value = json.document->owner->cursor;
    if (value && uint32_t(value->flags - 3) <= 1 && int32_t(value->first) >= 1)
      LogJson(context->classification, 5, response.category,
              &json.document->viewTable, message);
    else
      LogPlain(context->classification, 5, response.category, message);
  }
  self->Deliver(result, response);
  if (response.complete) {
    {
      Handle *handle = self->GetHandle();
      Completion completion(response);
      Pending *p = __atomic_load_n(&handle->pending, __ATOMIC_ACQUIRE);
      void *mutex = static_cast<char *>(p->mutexOwner) + 8;
      Lock(mutex);
      if (p->state != 4 && !p->stopped)
        Complete(p, completion);
      Unlock(mutex);
    }
    self->state = 4;
  }
}
} // namespace ServiceResponseAbi
