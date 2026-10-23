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
extern Entry **Table_191f570;
extern uint64_t TableGuard_191f570;
extern Entry *Buckets_191f570[100];
extern Entry Entry_191f388;
extern uint64_t Guard_191f380;
void *Factory_702e20();
extern Entry Entry_191f3a8;
extern uint64_t Guard_191f3a0;
void *Factory_703260();
extern Entry Entry_191f3c8;
extern uint64_t Guard_191f3c0;
void *Factory_7034e0();
extern Entry Entry_191f3e8;
extern uint64_t Guard_191f3e0;
void *Factory_703620();
extern Entry Entry_191f408;
extern uint64_t Guard_191f400;
void *Factory_703700();
extern Entry Entry_191f428;
extern uint64_t Guard_191f420;
void *Factory_7037d0();
extern Entry Entry_191f448;
extern uint64_t Guard_191f440;
void *Factory_703a50();
extern Entry Entry_191f468;
extern uint64_t Guard_191f460;
void *Factory_703e10();
extern Entry Entry_191f488;
extern uint64_t Guard_191f480;
void *Factory_703e50();
extern Entry Entry_191f4a8;
extern uint64_t Guard_191f4a0;
void *Factory_704040();
extern Entry Entry_191f4c8;
extern uint64_t Guard_191f4c0;
void *Factory_7042c0();
extern Entry Entry_191f4e8;
extern uint64_t Guard_191f4e0;
void *Factory_7043d0();
extern Entry Entry_191f508;
extern uint64_t Guard_191f500;
void *Factory_7045d0();
extern Entry Entry_191f528;
extern uint64_t Guard_191f520;
void *Factory_704640();
extern Entry Entry_191f548;
extern uint64_t Guard_191f540;
void *Factory_7046b0();
extern Entry Entry_191f898;
extern uint64_t Guard_191f890;
void *Factory_704a80();
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
                     Guard_191f380, Entry_191f388, 0x52e27cf1, Factory_702e20);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f3a0, Entry_191f3a8, 0x1dd19857, Factory_703260);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f3c0, Entry_191f3c8, 0x2db0386e, Factory_7034e0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f3e0, Entry_191f3e8, 0x278daa6d, Factory_703620);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f400, Entry_191f408, 0x39fff568, Factory_703700);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f420, Entry_191f428, 0x6222f3cb, Factory_7037d0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f440, Entry_191f448, 0x1310b97c, Factory_703a50);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f460, Entry_191f468, 0x7cd51934, Factory_703e10);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f480, Entry_191f488, 0x74d21027, Factory_703e50);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f4a0, Entry_191f4a8, 0x74c833de, Factory_704040);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f4c0, Entry_191f4c8, 0x706b5fa3, Factory_7042c0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f4e0, Entry_191f4e8, 0x2ad50364, Factory_7043d0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f500, Entry_191f508, 0x3348217b, Factory_7045d0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f520, Entry_191f528, 0x54f0da57, Factory_704640);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191f540, Entry_191f548, 0x56a7c412, Factory_7046b0);
  register_component(Table_191f570, TableGuard_191f570, Buckets_191f570,
                     Guard_191f890, Entry_191f898, 0x5de4b640, Factory_704a80);
}
