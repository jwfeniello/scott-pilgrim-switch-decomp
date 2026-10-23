// ABI views for eleven RTTI-associated Storm matchmaking request constructors.
// REQUEST_CONTEXT selects the recovered context layout; see
// docs/REQUEST_STATE_CANDIDATE.md.
#include <stddef.h>
#include <stdint.h>
namespace MatchmakingContextConstructorAbi {
struct Control {
  virtual ~Control() noexcept;
  virtual void Dispose() noexcept;
  long owners;
};
extern "C" void ReleaseWeak(Control *) noexcept;
static inline void Release(Control *c) {
  if (c && __atomic_fetch_sub(&c->owners, 1, __ATOMIC_ACQ_REL) == 0) {
    c->Dispose();
    ReleaseWeak(c);
  }
}
struct Relayer {
  void **table;
};
struct Unique {
  Relayer *value;
  Relayer *release() {
    Relayer *old = value;
    value = nullptr;
    return old;
  }
  Unique(Unique &&other) : value(other.release()) {}
  ~Unique();
};
struct Name {
  const char *data;
  size_t length;
  Name(const Name &other) : data(other.data), length(other.length) {}
};
struct FunctionBase {
  virtual ~FunctionBase();
  virtual void Clone();
  virtual void CloneInto();
  virtual void Destroy();
  virtual void DestroyAllocated();
};
struct Request;
struct Function {
  alignas(16) char buffer[32];
  FunctionBase *value;
  Function(Request *);
  ~Function() {
    if (static_cast<void *>(value) == buffer)
      value->Destroy();
    else if (value)
      value->DestroyAllocated();
  }
};
#if REQUEST_CONTEXT == 1
enum { ContextBytes = 32 };
struct Context {
  void **table;
  void *task;
  uint64_t first;
  bool flag;
};

#elif REQUEST_CONTEXT == 2
enum { ContextBytes = 32 };
struct Context {
  void **table;
  void *task;
  uint64_t first, second;
};

#elif REQUEST_CONTEXT == 3
enum { ContextBytes = 32 };
struct Context {
  void **table;
  void *task;
  uint32_t first, pad;
  uint64_t second;
};

#elif REQUEST_CONTEXT == 4
enum { ContextBytes = 48 };
struct Context {
  void **table;
  void *task;
  uint64_t first;
  void *prev;
  void *next;
  uint64_t count;
};

#elif REQUEST_CONTEXT == 5
enum { ContextBytes = 48 };
struct Context {
  void **table;
  void *task;
  uint32_t first, pad;
  uint64_t second, third;
  uint32_t flags, pad2;
};

#elif REQUEST_CONTEXT == 6
enum { ContextBytes = 72 };
struct Context {
  void **table;
  bool flag;
  char pad[7];
  uint64_t first;
  uint32_t second, pad2;
  uint64_t third, fourth;
  uint32_t fifth, pad3;
  uint64_t sixth, seventh;
};

#elif REQUEST_CONTEXT == 7
enum { ContextBytes = 72 };
struct Context {
  void **table;
  bool flag;
  char pad[7];
  uint64_t first, second, third;
  uint32_t fourth, pad2;
  uint64_t fifth, sixth, seventh;
};

#elif REQUEST_CONTEXT == 8
enum { ContextBytes = 56 };
struct Context {
  void **table;
  void *task;
  uint32_t first, pad;
  uint64_t second, third, fourth, fifth;
};

#elif REQUEST_CONTEXT == 9
enum { ContextBytes = 184 };
struct Context {
  void **table;
  void *task;
  uint32_t first, pad;
  uint64_t second, third, fourth, fifth;
  char name[8];
  char detail[120];
};

#elif REQUEST_CONTEXT == 10
enum { ContextBytes = 96 };
struct Context {
  void **table;
  void *task;
  uint32_t first, pad;
  uint64_t second, third, fourth, fifth, sixth, seventh;
  void *root;
  uint64_t count, flags;
};

#elif REQUEST_CONTEXT == 11
enum { ContextBytes = 136 };
struct Context {
  void **table;
  void *task;
  uint32_t first, pad;
  char detail[80];
  void *prev;
  void *next;
  uint64_t count;
  uint32_t flags, pad2;
};

#else
#error Unknown request context
#endif
struct RawControl {
  void **table;
  long owners, weak;
  Context *object;
};
struct Request {
  void **table;
  char pad8[16];
  void *context;
  char pad20[0x1c0];
  void *task;
  Context *owner;
  Control *control;
  void *handler;
  void *operation;
  Function disposer;
};
extern "C" {
extern void *RequestTable[];
extern void *DisposerTable[];
extern void *ContextTable[];
extern void *ControlTable[];
extern void *HandlerTable[];
void InitBase(Request *, Name, uint32_t, int32_t, Unique);
void FreeRelayer(void *, uint64_t, const char *, uint32_t);
void *AllocateOperation(uint32_t, uint32_t, uint32_t, uint32_t);
void InitOperation(void *, void *);
void InitializeName(void *);
void InitializeDetail(void *);
void *AllocateContext(size_t, uint32_t, uint32_t, uint64_t, const char *,
                      uint32_t);
void *AllocateControl(size_t);
void AttachTask(void *, void *, const Function &);
void AddCallback(void *, void (*)(), void *);
void CallbackIdentity();
}
inline Unique::~Unique() {
  Relayer *old = value;
  value = nullptr;
  if (old) {
    void **table = old->table;
    ptrdiff_t adjustment = reinterpret_cast<ptrdiff_t *>(table)[-2];
    void *allocation = reinterpret_cast<char *>(old) + adjustment;
    reinterpret_cast<void (*)(Relayer *)>(table[0])(old);
    FreeRelayer(allocation, 0, "", 0);
  }
}
inline Function::Function(Request *self) {
  *reinterpret_cast<void ***>(buffer) = HandlerTable + 2;
  *reinterpret_cast<Request **>(buffer + 8) = self;
  value = reinterpret_cast<FunctionBase *>(buffer);
}
static inline void AttachRequest(Request *self) {
  AttachTask(self->task, self->context, Function(self));
}
extern "C" void InitializeRequest(Request *self, const Name &name, uint32_t a,
                                  int32_t b, Unique &relayer, void *handler,
                                  void *task) {
  InitBase(self, name, a, b, static_cast<Unique &&>(relayer));
  self->table = RequestTable + 2;
  self->task = task;
  self->owner = nullptr;
  self->control = nullptr;
  self->handler = handler;
  void *operation = AllocateOperation(0xb0, 4, 0, 0x40c00000);
  InitOperation(operation, nullptr);
  self->operation = operation;
  self->disposer.value =
      reinterpret_cast<FunctionBase *>(self->disposer.buffer);
  *reinterpret_cast<void ***>(self->disposer.buffer) = DisposerTable + 2;
  Context *c = static_cast<Context *>(
      AllocateContext(ContextBytes, 8, 0x4120f000, 0, "", 0));
#if REQUEST_CONTEXT == 1
  c->table = ContextTable + 2;
  c->task = nullptr;
  c->first = 0;
  c->flag = true;

#elif REQUEST_CONTEXT == 2
  c->first = 0;
  c->second = 0;
  c->table = ContextTable + 2;
  c->task = nullptr;

#elif REQUEST_CONTEXT == 3
  c->table = ContextTable + 2;
  c->task = nullptr;
  c->first = 0xffffffff;
  c->second = 0;

#elif REQUEST_CONTEXT == 4
  c->table = ContextTable + 2;
  c->task = nullptr;
  c->first = 0;
  c->prev = &c->prev;
  c->next = &c->prev;
  c->count = 0;

#elif REQUEST_CONTEXT == 5
  c->table = ContextTable + 2;
  c->task = nullptr;
  c->first = 0xffffffff;
  c->second = 0;
  c->third = 0;
  c->flags = 0;

#elif REQUEST_CONTEXT == 6
  c->flag = false;
  c->first = 0;
  c->second = 0xffffffff;
  c->third = 0;
  c->fourth = 0;
  c->fifth = 0xffffffff;
  c->sixth = 0;
  c->seventh = ~uint64_t(0);
  c->table = ContextTable + 2;

#elif REQUEST_CONTEXT == 7
  c->flag = false;
  c->first = 0;
  c->second = 0;
  c->third = 0;
  c->fourth = 0xffffffff;
  c->fifth = 0;
  c->sixth = ~uint64_t(0);
  c->table = ContextTable + 2;
  c->seventh = 0;

#elif REQUEST_CONTEXT == 8
  c->table = ContextTable + 2;
  c->task = nullptr;
  c->first = 0;
  c->second = 0;
  c->third = 0;
  c->fourth = 0;
  c->fifth = 0;

#elif REQUEST_CONTEXT == 9
  c->task = nullptr;
  c->first = 0;
  c->second = 0;
  c->third = 0;
  c->fourth = 0;
  c->fifth = 0;
  c->table = ContextTable + 2;
  InitializeName(c->name);
  InitializeDetail(c->detail);

#elif REQUEST_CONTEXT == 10
  c->task = nullptr;
  c->first = 0xffffffff;
  c->second = 0;
  c->third = 0;
  c->fourth = 0;
  c->fifth = 0;
  c->table = ContextTable + 2;
  c->sixth = 0;
  c->seventh = 0;
  c->count = 0;
  c->flags = 0;
  c->root = &c->count;

#elif REQUEST_CONTEXT == 11
  c->table = ContextTable + 2;
  c->first = 0;
  c->task = nullptr;
  InitializeDetail(c->detail);
  c->prev = &c->prev;
  c->next = &c->prev;
  c->count = 0;
  c->flags = 0;

#else
#error Unknown request context
#endif
  RawControl *control = nullptr;
  if (c) {
    control = static_cast<RawControl *>(AllocateControl(32));
    control->table = ControlTable + 2;
    control->owners = 0;
    control->weak = 0;
    control->object = c;
  }
  self->owner = c;
  Control *oldControl = self->control;
  self->control = reinterpret_cast<Control *>(control);
  Release(oldControl);
  if (self->task) {
    AttachRequest(self);
    AddCallback(self->task, CallbackIdentity, self);
  }
}
static_assert(sizeof(Context) == ContextBytes, "context size");

static_assert(offsetof(Request, task) == 0x1e0, "task offset");
static_assert(offsetof(Request, disposer) == 0x210, "disposer offset");
} // namespace MatchmakingContextConstructorAbi
