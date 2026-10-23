// Assign an identifier once using the original unsynchronized startup guard.
#include <stdint.h>
extern "C" {
extern uint64_t TypeIdGuard;
extern uint32_t TypeIdCounter;
extern uint32_t TypeId;
void InitializeTypeId() {
  if (!(TypeIdGuard & 1)) {
    TypeId = TypeIdCounter++;
    TypeIdGuard = 1;
  }
}
}
