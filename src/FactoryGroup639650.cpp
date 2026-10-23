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
extern Entry **Table_191fc38;
extern uint64_t TableGuard_191fc38;
extern Entry *Buckets_191fc38[100];
extern Entry Entry_191fb30;
extern uint64_t Guard_191fb28;
void *Factory_722ba0();
extern Entry Entry_191fb50;
extern uint64_t Guard_191fb48;
void *Factory_722be0();
extern Entry Entry_191fb70;
extern uint64_t Guard_191fb68;
void *Factory_722e70();
extern Entry Entry_191fb90;
extern uint64_t Guard_191fb88;
void *Factory_722ec0();
extern Entry Entry_191fbb0;
extern uint64_t Guard_191fba8;
void *Factory_722f10();
extern Entry Entry_191fbd0;
extern uint64_t Guard_191fbc8;
void *Factory_722f70();
extern Entry Entry_191fbf0;
extern uint64_t Guard_191fbe8;
void *Factory_722fd0();
extern Entry Entry_191fc10;
extern uint64_t Guard_191fc08;
void *Factory_723260();
extern Entry Entry_191ff60;
extern uint64_t Guard_191ff58;
void *Factory_723360();
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
                     Guard_191fb28, Entry_191fb30, 0xdd3ec15, Factory_722ba0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191fb48, Entry_191fb50, 0x753ebddb, Factory_722be0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191fb68, Entry_191fb70, 0xf4dac4e, Factory_722e70);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191fb88, Entry_191fb90, 0xcc8e924, Factory_722ec0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191fba8, Entry_191fbb0, 0x70e7d8b1, Factory_722f10);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191fbc8, Entry_191fbd0, 0x6166120c, Factory_722f70);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191fbe8, Entry_191fbf0, 0x2d71f7eb, Factory_722fd0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191fc08, Entry_191fc10, 0x4d331e42, Factory_723260);
  register_component(Table_191fc38, TableGuard_191fc38, Buckets_191fc38,
                     Guard_191ff58, Entry_191ff60, 0xe5d6d3f, Factory_723360);
}
