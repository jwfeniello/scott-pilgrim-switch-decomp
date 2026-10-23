# HTTP job construction and state transitions

The matching sources recover 45 complete functions / 28,172 bytes:

| Source | Functions | Bytes | Operation |
| --- | ---: | ---: | --- |
| `SdkHttpJobConstructors.cpp` | 19 | 8,360 | Construct a job and its retained HTTP response storage |
| `SdkHttpJobFlow.cpp`: `StartHttp` | 13 | 13,260 | Copy options, clone the request, and select a continuation |
| `SdkHttpJobFlow.cpp`: `WaitHttp` | 13 | 6,552 | Poll response state and dispatch completion or failure |

Original RTTI identifies the constructor family as
`ubiservices::JobUbiservicesCall<T>` / `JobAsyncWait<T>` and its response storage
as `AsyncResult<HttpResponse>::InternalResult`. The reconstruction uses local
ABI views; the complete original declarations and all template arguments have
not been recovered.

The response storage contains an intrusive reference-count base followed by
the previously recovered 64-byte HTTP response. Its explicit empty constructor
matters: value-initializing an aggregate would add writes to fields the original
does not initialize. Each job retains this storage and initializes its observed
policy words to `INT_MAX` and 43. Their semantic names remain provisional.

`StartHttp` copies a callback and an eight-byte policy, clones a request through
its virtual interface, and inspects the input asynchronous result. States 3 and
4 take the failure path. State 2 accepts HTTP status 200 through 299 and selects
the supplied continuation; other statuses call the service-response handler.
An unfinished result is retained and wired to the original
`JobUbiservicesCall::waitAsyncRest` stage label.

`WaitHttp` performs the same completed-result checks. While work remains pending,
it writes state 1 and delay 10; the delay's time unit is not established here.
Failure delivery uses the destination result's mutex and checks its cancellation
and completion fields before delivery. The completed path also finalizes the
asynchronous relationship.

Stage records contain two real C++ member-function pointers and a label. Copying
those members individually reproduces the observed stage assignment. The
callback is modeled with the matching libc++ `std::function` copy/destruction ABI;
these routines never invoke it, so its actual argument signature is still unknown.

All functions are compiled with public Clang 8.0.1 and libc++ 4 headers and compared
against their complete original FDE ranges, including checked call, GOT and literal
bindings. Deliberately changing the constructor tag, success range, or polling
delay is rejected. These are isolated function matches, not a complete linked or
running networking subsystem. The large service-response handler remains unmatched.
