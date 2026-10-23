// Recovered ABI view, not a complete original class declaration.
// Migration and migration-report constructors: complete byte-verified bodies.
#include <stddef.h>
#include <stdint.h>
namespace MatchmakingConstructorAbi {
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
struct Context {
  void **table;
  void *task;
  uint64_t first, second;
  uint32_t invalid, pad;
  uint64_t third;
  uint32_t flags, pad2;
  void *prev;
  void *next;
  uint64_t fourth;
};
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
  Context *c =
      static_cast<Context *>(AllocateContext(0x50, 8, 0x4120f000, 0, "", 0));
  c->table = ContextTable + 2;
  c->task = nullptr;
  c->first = 0;
  c->second = 0;
  c->invalid = 0xffffffff;
  c->third = 0;
  c->flags = 0;
  c->prev = &c->prev;
  c->next = &c->prev;
  c->fourth = 0;
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
static_assert(sizeof(Context) == 80, "context size");

static_assert(offsetof(Request, task) == 0x1e0, "task offset");
static_assert(offsetof(Request, owner) == 0x1e8, "owner offset");
static_assert(offsetof(Request, disposer) == 0x210, "disposer offset");
} // namespace MatchmakingConstructorAbi
