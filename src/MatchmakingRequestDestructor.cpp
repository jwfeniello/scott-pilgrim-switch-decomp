// ABI view of the shared Storm matchmaking request destructor.
// Complete matched bodies are listed in config/builds.json.
#include <stdint.h>

namespace MatchmakingRequestAbi {
struct Control {
    virtual ~Control() noexcept;
    virtual void Dispose() noexcept;
    long owners;
};
extern "C" void ReleaseWeak(Control*) noexcept;
struct Shared {
    void* object;
    Control* control;
    ~Shared() {
        Control* old = control;
        if (old && __atomic_fetch_sub(&old->owners, 1, __ATOMIC_ACQ_REL) == 0) {
            old->Dispose();
            ReleaseWeak(old);
        }
    }
};
struct FunctionBase {
    virtual ~FunctionBase() noexcept;
    virtual void Clone();
    virtual void CloneInto();
    virtual void Destroy() noexcept;
    virtual void DestroyAllocated() noexcept;
    virtual void Invoke(void* const&);
};
struct Function {
    alignas(16) char buffer[32];
    FunctionBase* value;
    ~Function() {
        if (static_cast<void*>(value) == buffer) value->Destroy();
        else if (value) value->DestroyAllocated();
    }
};
struct Base {
    virtual ~Base() noexcept;
    char unknown8[16];
    void* context;
    char unknown20[0x1c0];
};
extern "C" {
void DetachTask(void*, void*);
void RemoveCallback(void*, void(*)(), void*);
void CallbackIdentity();
__attribute__((noreturn)) void EmptyFunction();
}
struct Request : Base {
    void* task;
    Shared owner;
    void* callback;
    void* operation;
    Function disposer;
    virtual void KeyMethod();
    ~Request() noexcept override;
};
Request::~Request() noexcept {
    if (task) {
        DetachTask(task, context);
        RemoveCallback(task, CallbackIdentity, this);
        task = nullptr;
    }
    void* old = operation;
    operation = nullptr;
    if (old) {
        void* argument = old;
        if (!disposer.value) EmptyFunction();
        disposer.value->Invoke(argument);
    }
}
static_assert(__builtin_offsetof(Request, task) == 0x1e0, "task offset");
static_assert(__builtin_offsetof(Request, operation) == 0x200, "operation offset");
static_assert(__builtin_offsetof(Request, disposer) == 0x210, "disposer offset");
}
