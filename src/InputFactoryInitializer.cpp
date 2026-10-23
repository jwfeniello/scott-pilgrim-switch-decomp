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

struct Slot {
  void *first;
  unsigned char unknown8[24];
  void *second;
  unsigned char unknown40[8];
  void *third;
  uint32_t state;
  uint8_t enabled;
  unsigned char unknown61[62];
  uint8_t valid;
  unsigned char padding[4];
};
struct InputDefaults {
  Slot slots[10];
  uint64_t unknown;
  void *tail;
};
static_assert(sizeof(Slot) == 128, "slot ABI");
static __attribute__((always_inline)) inline void InitializeSlot(Slot &s) {
  s.first = nullptr;
  s.second = nullptr;
  s.third = nullptr;
  s.state = 0;
  s.valid = 0;
  s.enabled = 0;
}
extern "C" {
extern Entry **Table_191bf78;
extern uint64_t TableGuard_191bf78;
extern Entry *Buckets_191bf78[100];
extern Entry Entry_191ffd0;
extern uint64_t Guard_191ffc8;
void *Factory_734840();
extern Entry Entry_191fff0;
extern uint64_t Guard_191ffe8;
void *Factory_734ae0();
extern Entry Entry_1920520;
extern uint64_t Guard_1920518;
void *Factory_734f00();
extern Entry Entry_1920540;
extern uint64_t Guard_1920538;
void *Factory_734f50();
extern Entry Entry_1920560;
extern uint64_t Guard_1920558;
void *Factory_735030();
extern Entry Entry_1920580;
extern uint64_t Guard_1920578;
void *Factory_735100();
extern Entry Entry_19205a0;
extern uint64_t Guard_1920598;
void *Factory_7351e0();
extern Entry Entry_19205c0;
extern uint64_t Guard_19205b8;
void *Factory_735250();
extern InputDefaults Defaults;
void DestroyDefaults(void *);
}
extern "C" void InitializeInputFactoryGroup() {
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
                     Guard_191ffc8, Entry_191ffd0, 0x2af39aac, Factory_734840);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191ffe8, Entry_191fff0, 0x7b3c50c4, Factory_734ae0);
  for (unsigned i = 0; i < 10; ++i)
    InitializeSlot(Defaults.slots[i]);
  Defaults.tail = nullptr;
  AtExit(DestroyDefaults, &Defaults, &DsoHandle);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_1920518, Entry_1920520, 0x44081ce, Factory_734f00);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_1920538, Entry_1920540, 0x79a8a297, Factory_734f50);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_1920558, Entry_1920560, 0x16a8a297, Factory_735030);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_1920578, Entry_1920580, 0x17a8a297, Factory_735100);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_1920598, Entry_19205a0, 0x10091979, Factory_7351e0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_19205b8, Entry_19205c0, 0x69a8a297, Factory_735250);
}
