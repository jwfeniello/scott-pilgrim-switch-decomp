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

struct Endpoint {
  uint32_t address;
  uint16_t port, padding;
};
struct Error {
  uint32_t domain, code;
  const wchar_t *name;
  int message;
  uint8_t flags;
  uint32_t owner;
  void *context;
  uint32_t kind;
};
struct alignas(8) Format {
  uint32_t type, variant;
};
struct __attribute__((packed)) Dimensions {
  uint64_t pair;
};
struct TexelStorage {
  const void **vtable;
  uint32_t mode;
  Dimensions size;
};
struct UplayManager {
  const void **vtable;
  uint64_t a, b, c, d;
  float scale;
};
static_assert(sizeof(Error) == 48, "error record ABI");
extern "C" {
extern Entry **Table_191bf78;
extern uint64_t TableGuard_191bf78;
extern Entry *Buckets_191bf78[100];
extern Entry Entry_191c2a0;
extern uint64_t Guard_191c298;
void *Factory_6736f0();
extern Entry Entry_191c2c0;
extern uint64_t Guard_191c2b8;
void *Factory_673730();
extern Entry Entry_191c2e0;
extern uint64_t Guard_191c2d8;
void *Factory_6737a0();
extern Entry Entry_191c300;
extern uint64_t Guard_191c2f8;
void *Factory_6737e0();
extern Entry Entry_191c320;
extern uint64_t Guard_191c318;
void *Factory_673840();
extern Entry Entry_191c340;
extern uint64_t Guard_191c338;
void *Factory_6738a0();
extern Entry Entry_191c360;
extern uint64_t Guard_191c358;
void *Factory_673930();
extern Entry Entry_191c380;
extern uint64_t Guard_191c378;
void *Factory_674190();
extern Entry Entry_191c3a0;
extern uint64_t Guard_191c398;
void *Factory_6741f0();
extern Entry Entry_191c3c0;
extern uint64_t Guard_191c3b8;
void *Factory_6742f0();
extern Entry Entry_191c3e0;
extern uint64_t Guard_191c3d8;
void *Factory_6748f0();
extern Entry Entry_191c400;
extern uint64_t Guard_191c3f8;
void *Factory_674e70();
extern Entry Entry_191c420;
extern uint64_t Guard_191c418;
void *Factory_675110();
extern Entry Entry_191c780;
extern uint64_t Guard_191c778;
void *Factory_675190();
extern Entry Entry_191c7a0;
extern uint64_t Guard_191c798;
void *Factory_675220();
extern Entry Entry_191c7c8;
extern uint64_t Guard_191c7c0;
void *Factory_675290();
extern Entry Entry_191c7e8;
extern uint64_t Guard_191c7e0;
void *Factory_675310();
extern Entry Entry_191c810;
extern uint64_t Guard_191c808;
void *Factory_675360();
extern Entry Entry_191c830;
extern uint64_t Guard_191c828;
void *Factory_6753c0();
extern Entry Entry_191c868;
extern uint64_t Guard_191c860;
void *Factory_675410();
extern Entry Entry_191c888;
extern uint64_t Guard_191c880;
void *Factory_675490();
extern Entry Entry_191c8a8;
extern uint64_t Guard_191c8a0;
void *Factory_675510();
extern Entry Entry_191c8c8;
extern uint64_t Guard_191c8c0;
void *Factory_675580();
extern Entry Entry_191c8e8;
extern uint64_t Guard_191c8e0;
void *Factory_6755f0();
extern Entry Entry_191c908;
extern uint64_t Guard_191c900;
void *Factory_675640();
extern Entry Entry_191c928;
extern uint64_t Guard_191c920;
void *Factory_6759b0();
extern Entry Entry_191c948;
extern uint64_t Guard_191c940;
void *Factory_675a00();
extern Entry Entry_191c968;
extern uint64_t Guard_191c960;
void *Factory_675a50();
uint32_t MakeIpv4(uint8_t, uint8_t, uint8_t, uint8_t);
extern uint64_t InvalidA, Zero, InvalidB, NetworkSize;
extern Format ExtraZero;
extern uint32_t Loopback, Broadcast, AnyAddress;
extern Endpoint EmptyEndpoint, InvalidEndpoint;
void DestroyError(void *);
extern Error Error_191b6c8;
extern const wchar_t Name_1394478[];
extern Error Error_191b6f8;
extern const wchar_t Name_1395148[];
extern Error Error_191b728;
extern const wchar_t Name_1396168[];
extern Error Error_191b758;
extern const wchar_t Name_1396cac[];
extern Error Error_191b788;
extern const wchar_t Name_139437c[];
extern Error Error_191b7b8;
extern const wchar_t Name_1395178[];
extern Error Error_191b7e8;
extern const wchar_t Name_1394cd8[];
extern Error Error_191b818;
extern const wchar_t Name_13963fc[];
extern Error Error_191b848;
extern const wchar_t Name_1395cd8[];
extern Error Error_191b878;
extern const wchar_t Name_1395d4c[];
extern Error Error_191b8a8;
extern const wchar_t Name_13943c4[];
extern Error Error_191b8d8;
extern const wchar_t Name_1396190[];
extern Error Error_191b908;
extern const wchar_t Name_1396a0c[];
extern Error Error_191b938;
extern const wchar_t Name_13966a8[];
extern Error Error_191b968;
extern const wchar_t Name_1394e34[];
extern Error Error_191b998;
extern const wchar_t Name_1395968[];
extern Error Error_191b9c8;
extern const wchar_t Name_1394eac[];
extern Error Error_191b9f8;
extern const wchar_t Name_1395494[];
extern Error Error_191ba28;
extern const wchar_t Name_1394660[];
extern Error Error_191ba58;
extern const wchar_t Name_1395fc0[];
extern Error Error_191ba88;
extern const wchar_t Name_1394844[];
extern Error Error_191bab8;
extern const wchar_t Name_139419c[];
extern Error Error_191bae8;
extern const wchar_t Name_1395bc8[];
extern Error Error_191bb18;
extern const wchar_t Name_13959b8[];
extern Error Error_191bb48;
extern const wchar_t Name_1394504[];
extern Error Error_191bb78;
extern const wchar_t Name_139455c[];
extern Error Error_191bba8;
extern const wchar_t Name_1396a70[];
extern Error Error_191bbd8;
extern const wchar_t Name_1393cdc[];
extern Error Error_191bc08;
extern const wchar_t Name_1395dac[];
extern Error Error_191bc38;
extern const wchar_t Name_1394598[];
extern Error Error_191bc68;
extern const wchar_t Name_1396aa8[];
extern Error Error_191bc98;
extern const wchar_t Name_1395ff8[];
extern Error Error_191bcc8;
extern const wchar_t Name_1394b40[];
extern Error Error_191bcf8;
extern const wchar_t Name_1396ce4[];
extern Error Error_191bd28;
extern const wchar_t Name_1394874[];
extern Error Error_191bd58;
extern const wchar_t Name_13949a4[];
extern Error Error_191bd88;
extern const wchar_t Name_1396afc[];
extern Error Error_191bdb8;
extern const wchar_t Name_1394ee8[];
extern Error Error_191bde8;
extern const wchar_t Name_139569c[];
extern Error Error_191be18;
extern const wchar_t Name_1393d18[];
extern Error Error_191be48;
extern const wchar_t Name_1394408[];
extern Error Error_191be78;
extern const wchar_t Name_13941d8[];
extern Error Error_191bea8;
extern const wchar_t Name_1393f08[];
extern Error Error_191bed8;
extern const wchar_t Name_1394b9c[];
extern Error Error_191bf08;
extern const wchar_t Name_1393d60[];
extern Error Error_191bf38;
extern const wchar_t Name_139670c[];
extern uint32_t Color_191c438;
extern uint32_t Color_191c43c;
extern uint32_t Color_191c440;
extern uint32_t Color_191c444;
extern uint32_t Color_191c448;
extern uint32_t Color_191c44c;
extern uint32_t Color_191c450;
extern uint32_t Color_191c454;
extern Format Format_191c458;
extern Format Format_191c460;
extern Format Format_191c468;
extern Format Format_191c470;
extern Format Format_191c478;
extern Format Format_191c480;
extern Format Format_191c488;
extern Format Format_191c490;
extern Format Format_191c498;
extern Format Format_191c4a0;
extern Format Format_191c4a8;
extern Format Format_191c4b0;
extern Format Format_191c4b8;
extern Format Format_191c4c0;
extern Format Format_191c4c8;
extern Format Format_191c4d0;
extern Format Format_191c4d8;
extern Format Format_191c4e0;
extern Format Format_191c4e8;
extern Format Format_191c4f0;
extern Format Format_191c4f8;
extern Format Format_191c500;
extern Format Format_191c508;
extern Format Format_191c510;
extern Format Format_191c518;
extern Format Format_191c520;
extern Format Format_191c528;
extern Format Format_191c530;
extern Format Format_191c538;
extern Format Format_191c540;
extern Format Format_191c548;
extern Format Format_191c550;
extern Format Format_191c558;
extern Format Format_191c560;
extern Format Format_191c568;
extern Format Format_191c570;
extern Format Format_191c578;
extern Format Format_191c580;
extern Format Format_191c588;
extern Format Format_191c590;
extern Format Format_191c598;
extern Format Format_191c5a0;
extern Format Format_191c5a8;
extern Format Format_191c5b0;
extern Format Format_191c5b8;
extern Format Format_191c5c0;
extern Format Format_191c5c8;
extern Format Format_191c5d0;
extern Format Format_191c5d8;
extern Format Format_191c5e0;
extern Format Format_191c5e8;
extern Format Format_191c5f0;
extern Format Format_191c5f8;
extern Format Format_191c600;
extern Format Format_191c608;
extern Format Format_191c610;
extern Format Format_191c618;
extern Format Format_191c620;
extern Format Format_191c628;
extern Format Format_191c630;
extern Format Format_191c638;
extern Format Format_191c640;
extern Format Format_191c648;
extern Format Format_191c650;
extern Format Format_191c658;
extern Format Format_191c660;
extern Format Format_191c668;
extern Format Format_191c670;
extern Format Format_191c678;
extern Format Format_191c680;
extern Format Format_191c688;
extern Format Format_191c690;
extern Format Format_191c698;
extern Format Format_191c6a0;
extern Format Format_191c6a8;
extern Format Format_191c6b0;
extern Format Format_191c6b8;
extern Format Format_191c6c0;
extern Format Format_191c6c8;
extern Format Format_191c6d0;
extern Format Format_191c6d8;
extern Format Format_191c6e0;
extern Format Format_191c6e8;
extern Format Format_191c6f0;
extern Format Format_191c6f8;
extern Format Format_191c700;
extern Format Format_191c708;
extern Format Format_191c710;
extern Format Format_191c718;
extern Format Format_191c720;
extern Format Format_191c728;
extern Format Format_191c730;
extern Format Format_191c738;
extern Format Format_191c740;
extern Format Format_191c748;
extern Format Format_191c750;
extern Format Format_191c758;
extern Format Format_191c760;
extern Format Format_191c768;
extern Format Format_191c770;
extern uint64_t InvalidIdentifier;
extern uint32_t DefaultBits;
extern TexelStorage LinearStorage;
extern const void *LinearVtable[];
extern Vector Pending;
void DestroyPending(void *);
extern UplayManager Uplay;
extern const void *UplayVtable[];
void DestroyUplay(void *);
}
static __attribute__((always_inline)) inline void
InitializeError(Error &e, uint32_t domain, uint32_t code, const wchar_t *name,
                int message) {
  e.flags = 0;
  e.owner = 0;
  e.context = nullptr;
  e.kind = 0;
  e.domain = domain;
  e.code = code;
  e.name = name;
  e.message = message;
}
extern "C" void InitializeNetworkAndGraphics() {
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
  InvalidA = ~uint64_t(0);
  Zero = 0;
  InvalidB = ~uint64_t(0);
  Loopback = MakeIpv4(127, 0, 0, 1);
  Broadcast = MakeIpv4(255, 255, 255, 255);
  AnyAddress = MakeIpv4(0, 0, 0, 0);
  EmptyEndpoint.port = 0;
  EmptyEndpoint.address = 0;
  InvalidEndpoint.port = 0xffff;
  InvalidEndpoint.address = ~uint32_t(0);
  NetworkSize = 56;
  ExtraZero = {0, 0};
  InitializeError(Error_191b6c8, 0, 0, Name_1394478, -1);
  AtExit(DestroyError, &Error_191b6c8, &DsoHandle);
  InitializeError(Error_191b6f8, 0, 1000, Name_1395148, -1);
  AtExit(DestroyError, &Error_191b6f8, &DsoHandle);
  InitializeError(Error_191b728, 0, 1001, Name_1396168, -1);
  AtExit(DestroyError, &Error_191b728, &DsoHandle);
  InitializeError(Error_191b758, 0, 1002, Name_1396cac, -1);
  AtExit(DestroyError, &Error_191b758, &DsoHandle);
  InitializeError(Error_191b788, 0, 1003, Name_139437c, 1236);
  AtExit(DestroyError, &Error_191b788, &DsoHandle);
  InitializeError(Error_191b7b8, 0, 1999, Name_1395178, -1);
  AtExit(DestroyError, &Error_191b7b8, &DsoHandle);
  InitializeError(Error_191b7e8, 1, 2000, Name_1394cd8, 1236);
  AtExit(DestroyError, &Error_191b7e8, &DsoHandle);
  InitializeError(Error_191b818, 1, 2001, Name_13963fc, 1236);
  AtExit(DestroyError, &Error_191b818, &DsoHandle);
  InitializeError(Error_191b848, 1, 2002, Name_1395cd8, 1270);
  AtExit(DestroyError, &Error_191b848, &DsoHandle);
  InitializeError(Error_191b878, 1, 2003, Name_1395d4c, 1271);
  AtExit(DestroyError, &Error_191b878, &DsoHandle);
  InitializeError(Error_191b8a8, 1, 2004, Name_13943c4, 1272);
  AtExit(DestroyError, &Error_191b8a8, &DsoHandle);
  InitializeError(Error_191b8d8, 1, 2005, Name_1396190, 1273);
  AtExit(DestroyError, &Error_191b8d8, &DsoHandle);
  InitializeError(Error_191b908, 1, 2006, Name_1396a0c, 1236);
  AtExit(DestroyError, &Error_191b908, &DsoHandle);
  InitializeError(Error_191b938, 1, 2999, Name_13966a8, -1);
  AtExit(DestroyError, &Error_191b938, &DsoHandle);
  InitializeError(Error_191b968, 2, 3000, Name_1394e34, 1201);
  AtExit(DestroyError, &Error_191b968, &DsoHandle);
  InitializeError(Error_191b998, 2, 3001, Name_1395968, 1268);
  AtExit(DestroyError, &Error_191b998, &DsoHandle);
  InitializeError(Error_191b9c8, 2, 3002, Name_1394eac, 1214);
  AtExit(DestroyError, &Error_191b9c8, &DsoHandle);
  InitializeError(Error_191b9f8, 2, 3003, Name_1395494, 1212);
  AtExit(DestroyError, &Error_191b9f8, &DsoHandle);
  InitializeError(Error_191ba28, 2, 3004, Name_1394660, 1202);
  AtExit(DestroyError, &Error_191ba28, &DsoHandle);
  InitializeError(Error_191ba58, 2, 3010, Name_1395fc0, 1204);
  AtExit(DestroyError, &Error_191ba58, &DsoHandle);
  InitializeError(Error_191ba88, 2, 3011, Name_1394844, 1268);
  AtExit(DestroyError, &Error_191ba88, &DsoHandle);
  InitializeError(Error_191bab8, 2, 3012, Name_139419c, -1);
  AtExit(DestroyError, &Error_191bab8, &DsoHandle);
  InitializeError(Error_191bae8, 2, 3013, Name_1395bc8, -1);
  AtExit(DestroyError, &Error_191bae8, &DsoHandle);
  InitializeError(Error_191bb18, 2, 3014, Name_13959b8, -1);
  AtExit(DestroyError, &Error_191bb18, &DsoHandle);
  InitializeError(Error_191bb48, 2, 3015, Name_1394504, 1205);
  AtExit(DestroyError, &Error_191bb48, &DsoHandle);
  InitializeError(Error_191bb78, 2, 3016, Name_139455c, 1265);
  AtExit(DestroyError, &Error_191bb78, &DsoHandle);
  InitializeError(Error_191bba8, 2, 3020, Name_1396a70, 1275);
  AtExit(DestroyError, &Error_191bba8, &DsoHandle);
  InitializeError(Error_191bbd8, 2, 3030, Name_1393cdc, -1);
  AtExit(DestroyError, &Error_191bbd8, &DsoHandle);
  InitializeError(Error_191bc08, 2, 3031, Name_1395dac, -1);
  AtExit(DestroyError, &Error_191bc08, &DsoHandle);
  InitializeError(Error_191bc38, 2, 3032, Name_1394598, 1261);
  AtExit(DestroyError, &Error_191bc38, &DsoHandle);
  InitializeError(Error_191bc68, 2, 3033, Name_1396aa8, 1200);
  AtExit(DestroyError, &Error_191bc68, &DsoHandle);
  InitializeError(Error_191bc98, 2, 3034, Name_1395ff8, 1262);
  AtExit(DestroyError, &Error_191bc98, &DsoHandle);
  InitializeError(Error_191bcc8, 2, 3035, Name_1394b40, 1269);
  AtExit(DestroyError, &Error_191bcc8, &DsoHandle);
  InitializeError(Error_191bcf8, 2, 3999, Name_1396ce4, -1);
  AtExit(DestroyError, &Error_191bcf8, &DsoHandle);
  InitializeError(Error_191bd28, 3, 4000, Name_1394874, 1277);
  AtExit(DestroyError, &Error_191bd28, &DsoHandle);
  InitializeError(Error_191bd58, 3, 4999, Name_13949a4, -1);
  AtExit(DestroyError, &Error_191bd58, &DsoHandle);
  InitializeError(Error_191bd88, 4, 5999, Name_1396afc, -1);
  AtExit(DestroyError, &Error_191bd88, &DsoHandle);
  InitializeError(Error_191bdb8, 5, 6000, Name_1394ee8, 1000);
  AtExit(DestroyError, &Error_191bdb8, &DsoHandle);
  InitializeError(Error_191bde8, 5, 6002, Name_139569c, 1075);
  AtExit(DestroyError, &Error_191bde8, &DsoHandle);
  InitializeError(Error_191be18, 5, 6999, Name_1393d18, -1);
  AtExit(DestroyError, &Error_191be18, &DsoHandle);
  InitializeError(Error_191be48, 6, 7000, Name_1394408, 1207);
  AtExit(DestroyError, &Error_191be48, &DsoHandle);
  InitializeError(Error_191be78, 6, 7001, Name_13941d8, 1049);
  AtExit(DestroyError, &Error_191be78, &DsoHandle);
  InitializeError(Error_191bea8, 6, 7002, Name_1393f08, 1016);
  AtExit(DestroyError, &Error_191bea8, &DsoHandle);
  InitializeError(Error_191bed8, 6, 7003, Name_1394b9c, 1237);
  AtExit(DestroyError, &Error_191bed8, &DsoHandle);
  InitializeError(Error_191bf08, 6, 7999, Name_1393d60, -1);
  AtExit(DestroyError, &Error_191bf08, &DsoHandle);
  InitializeError(Error_191bf38, 7, 8999, Name_139670c, -1);
  AtExit(DestroyError, &Error_191bf38, &DsoHandle);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c298, Entry_191c2a0, 0x7c825ed, Factory_6736f0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c2b8, Entry_191c2c0, 0x7552b5e0, Factory_673730);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c2d8, Entry_191c2e0, 0x23f6fb0, Factory_6737a0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c2f8, Entry_191c300, 0x3bde8464, Factory_6737e0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c318, Entry_191c320, 0x79e20175, Factory_673840);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c338, Entry_191c340, 0x253aac60, Factory_6738a0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c358, Entry_191c360, 0x5aa7768b, Factory_673930);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c378, Entry_191c380, 0x7c42e381, Factory_674190);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c398, Entry_191c3a0, 0x48700e27, Factory_6741f0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c3b8, Entry_191c3c0, 0x721e8574, Factory_6742f0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c3d8, Entry_191c3e0, 0x78bdb701, Factory_6748f0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c3f8, Entry_191c400, 0x52e12e08, Factory_674e70);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c418, Entry_191c420, 0x22fe74a, Factory_675110);
  Color_191c438 = 4294967295u;
  Color_191c43c = 4278190080u;
  Color_191c440 = 4278190335u;
  Color_191c444 = 4278255360u;
  Color_191c448 = 4294901760u;
  Color_191c44c = 4278255615u;
  Color_191c450 = 4294902015u;
  Color_191c454 = 4278223103u;
  Format_191c458 = {0, 0};
  Format_191c460 = {0, 1};
  Format_191c468 = {0, 2};
  Format_191c470 = {0, 3};
  Format_191c478 = {0, 4};
  Format_191c480 = {0, 5};
  Format_191c488 = {0, 6};
  Format_191c490 = {0, 7};
  Format_191c498 = {1, 0};
  Format_191c4a0 = {1, 1};
  Format_191c4a8 = {1, 2};
  Format_191c4b0 = {1, 3};
  Format_191c4b8 = {1, 4};
  Format_191c4c0 = {1, 5};
  Format_191c4c8 = {1, 6};
  Format_191c4d0 = {1, 7};
  Format_191c4d8 = {2, 0};
  Format_191c4e0 = {2, 1};
  Format_191c4e8 = {2, 2};
  Format_191c4f0 = {2, 3};
  Format_191c4f8 = {2, 4};
  Format_191c500 = {2, 5};
  Format_191c508 = {2, 6};
  Format_191c510 = {2, 7};
  Format_191c518 = {3, 0};
  Format_191c520 = {3, 1};
  Format_191c528 = {3, 2};
  Format_191c530 = {3, 3};
  Format_191c538 = {3, 4};
  Format_191c540 = {3, 5};
  Format_191c548 = {3, 6};
  Format_191c550 = {3, 7};
  Format_191c558 = {4, 0};
  Format_191c560 = {4, 1};
  Format_191c568 = {4, 2};
  Format_191c570 = {4, 3};
  Format_191c578 = {4, 4};
  Format_191c580 = {4, 5};
  Format_191c588 = {4, 6};
  Format_191c590 = {4, 7};
  Format_191c598 = {5, 0};
  Format_191c5a0 = {5, 1};
  Format_191c5a8 = {5, 2};
  Format_191c5b0 = {5, 3};
  Format_191c5b8 = {5, 4};
  Format_191c5c0 = {5, 5};
  Format_191c5c8 = {5, 6};
  Format_191c5d0 = {5, 7};
  Format_191c5d8 = {6, 0};
  Format_191c5e0 = {6, 1};
  Format_191c5e8 = {6, 2};
  Format_191c5f0 = {6, 3};
  Format_191c5f8 = {6, 4};
  Format_191c600 = {6, 5};
  Format_191c608 = {6, 6};
  Format_191c610 = {6, 7};
  Format_191c618 = {7, 0};
  Format_191c620 = {7, 1};
  Format_191c628 = {7, 2};
  Format_191c630 = {7, 3};
  Format_191c638 = {7, 4};
  Format_191c640 = {7, 5};
  Format_191c648 = {7, 6};
  Format_191c650 = {7, 7};
  Format_191c658 = {8, 0};
  Format_191c660 = {8, 1};
  Format_191c668 = {8, 2};
  Format_191c670 = {8, 3};
  Format_191c678 = {8, 4};
  Format_191c680 = {8, 5};
  Format_191c688 = {9, 0};
  Format_191c690 = {9, 1};
  Format_191c698 = {9, 2};
  Format_191c6a0 = {9, 3};
  Format_191c6a8 = {9, 4};
  Format_191c6b0 = {9, 5};
  Format_191c6b8 = {9, 6};
  Format_191c6c0 = {9, 7};
  Format_191c6c8 = {10, 0};
  Format_191c6d0 = {10, 1};
  Format_191c6d8 = {10, 2};
  Format_191c6e0 = {10, 3};
  Format_191c6e8 = {10, 4};
  Format_191c6f0 = {10, 5};
  Format_191c6f8 = {10, 6};
  Format_191c700 = {10, 7};
  Format_191c708 = {11, 0};
  Format_191c710 = {11, 1};
  Format_191c718 = {11, 2};
  Format_191c720 = {11, 3};
  Format_191c728 = {11, 4};
  Format_191c730 = {11, 5};
  Format_191c738 = {11, 6};
  Format_191c740 = {11, 7};
  Format_191c748 = {12, 0};
  Format_191c750 = {12, 1};
  Format_191c758 = {12, 2};
  Format_191c760 = {12, 3};
  Format_191c768 = {12, 4};
  Format_191c770 = {12, 5};
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c778, Entry_191c780, 0xb359c9, Factory_675190);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c798, Entry_191c7a0, 0x5db46d02, Factory_675220);
  InvalidIdentifier = ~uint64_t(0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c7c0, Entry_191c7c8, 0x72be5c77, Factory_675290);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c7e0, Entry_191c7e8, 0x1979000, Factory_675310);
  DefaultBits = 32;
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c808, Entry_191c810, 0x7fa62591, Factory_675360);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c828, Entry_191c830, 0x24097ed9, Factory_6753c0);
  LinearStorage.mode = 1;
  LinearStorage.size.pair = 0x400000004ULL;
  LinearStorage.vtable = LinearVtable;
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c860, Entry_191c868, 0x1979002, Factory_675410);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c880, Entry_191c888, 0x1979004, Factory_675490);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c8a0, Entry_191c8a8, 0x1979003, Factory_675510);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c8c0, Entry_191c8c8, 0x159bd3a9, Factory_675580);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c8e0, Entry_191c8e8, 0xcda7088, Factory_6755f0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c900, Entry_191c908, 0x5bf5efa8, Factory_675640);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c920, Entry_191c928, 0xe3dd910, Factory_6759b0);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c940, Entry_191c948, 0x2243e5c1, Factory_675a00);
  register_component(Table_191bf78, TableGuard_191bf78, Buckets_191bf78,
                     Guard_191c960, Entry_191c968, 0x53173032, Factory_675a50);
  Pending.begin = nullptr;
  Pending.end = nullptr;
  Pending.capacity = nullptr;
  AtExit(DestroyPending, &Pending, &DsoHandle);
  __builtin_memset(&Uplay.a, 0, 32);
  Uplay.scale = 1.f;
  Uplay.vtable = UplayVtable;
  AtExit(DestroyUplay, &Uplay, &DsoHandle);
}
