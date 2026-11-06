// SPTG::PersistentDataAgency: the save system's agent. It walks the save slots and shows the save message boxes
// from a state machine whose states aren't virtual; the getters at slots 13-21 return them. Names are provisional.
#include "BaseCharacter.h"
#include "Level.h"

namespace SPTG {

// A name hashed to an id (0xbfbce0), kept in an 8-byte name object of which only the hash is set here.
uint32_t HashName(const char* name);
struct NameId { uint32_t hash; uint32_t unused; };
// The menus as the agency sees them: shows a movie by name (0x778670).
struct MenuDirector { void ShowMovie(const NameId* name, int layer, int flags); };
// What the agency reads the save slots from: a vector at +0x1818 (count +0x18, ids +0x20).
struct SaveSlotList { char padding_0[0x18]; uint64_t count; uint32_t* ids; };
struct SaveDevice { char padding_0[0x1818]; SaveSlotList* slots; };
extern bool PersistentData_RetryLoad;   // 0x18797b8, flipped each time the retry state starts

struct PersistentDataAgency : onyx::Component {
    typedef StateMachine<PersistentDataAgency>::State State;
    virtual void S3(); virtual void S4(); virtual void S5(); virtual void S6(); virtual void S7(); virtual void S8();
    virtual void S9(); virtual void S10(); virtual void S11(); virtual void S12();
    virtual State IdlePtr();            // slot 13
    virtual State LoadSlotPtr();        // slot 14
    virtual State NextSlotPtr();        // slot 15
    virtual State S16Ptr();             // slot 16
    virtual State RetryPtr();           // slot 17
    virtual State InvalidOwnerPtr();    // slot 18
    virtual State S19Ptr();             // slot 19
    virtual State CorruptedPtr();       // slot 20
    virtual State DonePtr();            // slot 21
    int NextSlot(int event);            // 0x9b6440
    int Retry(int event);               // 0x9ac6a0
    int InvalidOwner(int event);        // 0x9ac600
    int Corrupted(int event);           // 0x9abfc0
    int Done(int event);                // 0x9abf40
    void Finish();                      // 0x9a83b0
    void Reload();                      // 0x9a9e70

    char padding_8[0x78];
    Singleton<MenuDirector> menus;      // +0x80
    char padding_88[0x30];
    StateMachine<PersistentDataAgency> states;   // +0xb8
    char padding_e0[0x8];
    uint32_t slotId;                    // +0xe8
    uint32_t slotIndex;                 // +0xec
    SaveDevice* device;                 // +0xf0
    char padding_f8[0x6];
    bool noMoreSlots;                   // +0xfe
};
void RetrySlot(SaveDevice* device, uint32_t slot);   // 0x9ac760

// Shows a message box movie and goes back to idle.
__attribute__((always_inline)) inline int ShowAndIdle(PersistentDataAgency* self, int event, const char* movie) {
    if (static_cast<unsigned>(event - kStateEnter) < 3) return kStateHandled;
    if (event != kStateUpdate) return kStateUnhandled;
    NameId name;
    name.hash = HashName(movie);
    self->menus.Get()->ShowMovie(&name, 32, 0);
    self->states.Transition(self->IdlePtr());
    return kStateParentTookOver;
}

// Slot 20's state (0x9abfc0): the corrupted-data message box.
int PersistentDataAgency::Corrupted(int event) { return ShowAndIdle(this, event, "DataCorruptedMessageBoxMovieXBox"); }
// Slot 18's state (0x9ac600): the invalid-owner message box.
int PersistentDataAgency::InvalidOwner(int event) { return ShowAndIdle(this, event, "XBoxInvalidOwnerMessageBoxMovie"); }

// Slot 21's state (0x9abf40): finishes and goes back to idle.
int PersistentDataAgency::Done(int event) {
    if (static_cast<unsigned>(event - kStateEnter) < 3) return kStateHandled;
    if (event != kStateUpdate) return kStateUnhandled;
    Finish();
    states.Transition(IdlePtr());
    return kStateParentTookOver;
}

// Slot 17's state (0x9ac6a0): each entry flips the retry flag; the update retries the current slot when it is
// set, reloads otherwise, and goes back to idle.
int PersistentDataAgency::Retry(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (PersistentData_RetryLoad) {
            RetrySlot(device, slotId);
            states.Transition(IdlePtr());
        } else {
            Reload();
            states.Transition(IdlePtr());
        }
        result = kStateParentTookOver;
        break;
    default:
        result = kStateUnhandled;
        break;
    case kStateEnter:
        PersistentData_RetryLoad = !PersistentData_RetryLoad;
    case kStateExit:
        states.AssertOwner(this);
        break;
    case kStateEvent3:
        break;
    }
    return result;
}

// Slot 15's state (0x9b6440): steps to the next save slot; past the last one it raises +0xfe and finishes.
int PersistentDataAgency::NextSlot(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        SaveSlotList* slots = device->slots;
        uint32_t index = slotIndex;
        if (slots->count <= index) {
            noMoreSlots = true;
            states.Transition(DonePtr());
        } else {
            slotId = slots->ids[index];
            states.Transition(LoadSlotPtr());
        }
        result = kStateParentTookOver;
        break;
    }
    default:
        result = kStateUnhandled;
        break;
    case kStateEnter:
        ++slotIndex;
    case kStateExit:
        states.AssertOwner(this);
        break;
    case kStateEvent3:
        break;
    }
    return result;
}

// The getters of the states above.
PersistentDataAgency::State PersistentDataAgency::NextSlotPtr() { return &PersistentDataAgency::NextSlot; }         // 0x9abed0
PersistentDataAgency::State PersistentDataAgency::RetryPtr() { return &PersistentDataAgency::Retry; }               // 0x9abef0
PersistentDataAgency::State PersistentDataAgency::InvalidOwnerPtr() { return &PersistentDataAgency::InvalidOwner; } // 0x9abf00
PersistentDataAgency::State PersistentDataAgency::CorruptedPtr() { return &PersistentDataAgency::Corrupted; }       // 0x9abf20
PersistentDataAgency::State PersistentDataAgency::DonePtr() { return &PersistentDataAgency::Done; }                 // 0x9abf30

}  // namespace SPTG
