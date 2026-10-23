// Reconstructed complete startup routine; address bindings are in
// config/builds.json.
#include <stddef.h>
#include <stdint.h>
using Factory = void *(*)();
struct Entry {
  uint32_t id, padding;
  Factory create;
  Entry *next;
};
struct Vector {
  void *begin;
  void *end;
  void *capacity;
};
extern "C" {
extern Vector Flags;
extern const uint32_t FlagDefaults[23];
extern unsigned char DsoHandle;
__attribute__((malloc)) void *Allocate(size_t);
int AtExit(void (*)(void *), void *, void *);
void DestroyFlags(void *);
int __cxa_guard_acquire(uint64_t *);
void __cxa_guard_release(uint64_t *);
}
static __attribute__((always_inline)) inline void
register_component(Entry **&registry, uint64_t &table_guard, Entry **buckets,
                   uint64_t &guard, Entry &entry, uint32_t id, Factory create) {
  Entry **table = registry;
  if (!table) {
    if (__builtin_expect(
            !(__atomic_load_n(reinterpret_cast<uint8_t *>(&table_guard),
                              __ATOMIC_ACQUIRE) &
              1),
            0)) {
      if (__cxa_guard_acquire(&table_guard)) {
        __builtin_memset(buckets, 0, 800);
        __cxa_guard_release(&table_guard);
      }
    }
    table = buckets;
    registry = table;
  }
  if (__builtin_expect(!(__atomic_load_n(reinterpret_cast<uint8_t *>(&guard),
                                         __ATOMIC_ACQUIRE) &
                         1),
                       0)) {
    if (__cxa_guard_acquire(&guard)) {
      entry.id = id;
      entry.create = create;
      entry.next = nullptr;
      __cxa_guard_release(&guard);
    }
  }
  uint32_t bucket = entry.id % 100;
  entry.next = table[bucket];
  table[bucket] = &entry;
}

extern "C" {
extern Entry **Table_191bf78;
extern uint64_t TableGuard_191bf78;
extern Entry *Buckets_191bf78[100];
extern Entry Entry_19349d8;
extern uint64_t Guard_19349d0;
void *Factory_bf0590();
extern Entry Entry_19349f8;
extern uint64_t Guard_19349f0;
void *Factory_bf05f0();
extern Entry Entry_1934a18;
extern uint64_t Guard_1934a10;
void *Factory_bf0640();
extern Entry Entry_1934a38;
extern uint64_t Guard_1934a30;
void *Factory_bf0690();
extern Entry Entry_1934a58;
extern uint64_t Guard_1934a50;
void *Factory_bf06e0();
}
extern "C" void InitializeFactoryGroup() {
  Flags.begin = nullptr;
  Flags.end = nullptr;
  Flags.capacity = nullptr;
  void *values = Allocate(sizeof(FlagDefaults));
  Flags.begin = values;
  Flags.end = values;
  Flags.capacity = static_cast<char *>(values) + sizeof(FlagDefaults);
  __builtin_memcpy(values, FlagDefaults, sizeof(FlagDefaults));
  Flags.end = static_cast<char *>(values) + sizeof(FlagDefaults);
  AtExit(DestroyFlags, &Flags, &DsoHandle);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_19349d0, Entry_19349d8, 0x2fdff7ca, Factory_bf0590);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_19349f0, Entry_19349f8, 0x70f55782, Factory_bf05f0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_1934a10, Entry_1934a18, 0x71f55782, Factory_bf0640);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_1934a30, Entry_1934a38, 0x34583699, Factory_bf0690);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_1934a50, Entry_1934a58, 0x6667204e, Factory_bf06e0);
}
