// SPTG::Projectile (vtable 0x1872ec8, 82 slots): something an actor throws or shoots. It has its own state machine
// at +0x280 and its own attack at +0x2d0. Names are provisional. ComponentSerialize.h has a view of the same class,
// which only serialization uses.
#pragma once
#include "Camera.h"
#include "Archive.h"

namespace SPTG {

struct Projectile : AnimatedAiActor {
    typedef StateMachine<Projectile>::State State;
    void Slot7() override;                                                   // slot 7
    void Slot19() override;                                                  // slot 19
    void AttackLanded(AnimatedAiActor* target) override;                     // slot 39
    void Remove(bool respawn) override;                                      // slot 70
    virtual State WaitingStatePtr();                                         // slot 78
    virtual State FlyingStatePtr();                                          // slot 79
    virtual State BurstStatePtr();                                           // slot 80
    virtual State GoneStatePtr();                                            // slot 81
    int WaitingState(int event);                                             // 0x95b810
    int FlyingState(int event);                                              // 0x95b130
    int BurstState(int event);                                               // 0x95ae60
    int GoneState(int event);                                                // 0x95ae30
    void SendFlightOver(bool onCharacter);                                   // 0x95bde0
    // Starts the projectile's attack, for whoever owns it.
    __attribute__((always_inline)) void StartOwnAttack() {
        StartAttack(&attack, false, attack.kind, attack.shared ? static_cast<BaseCharacter*>(attack.shared->object) : nullptr);
    }
    // Starts the attack again once the delay after a landed one is over.
    __attribute__((always_inline)) void UpdateDelayedAttack() {
        if (attackDelayed) {
            attackTimer += Move_FrameDelta;
            if (attackTimer > attackDelay) {
                StartOwnAttack();
                attackTimer = 0.0f;
                attackDelayed = false;
            }
        }
    }

    void* slot1e8;                   // +0x1e8
    EventSlot characterHitEvent;     // +0x1f0: the flight ended on a character
    EventSlot hitEvent;              // +0x208: it was hit (see Hit)
    EventSlot event220;              // +0x220
    EventSlot otherHitEvent;         // +0x238: the flight ended on something else
    EventSlot event250;              // +0x250
    EventSlot burstEvent;            // +0x268: it started to burst
    StateMachine<Projectile> states; // +0x280
    char padding_2a8[0x8];
    float flightTime;                // +0x2b0: how long it flies
    float bounce;                    // +0x2b4: what a bounce keeps of its vertical speed
    uint8_t bounces;                 // +0x2b8
    uint8_t flag2b9;                 // +0x2b9
    uint8_t burstsOnLanding;         // +0x2ba
    uint8_t burstsOnPlayfieldFlag;   // +0x2bb: bursts while PlayfieldCollision's flag is raised
    uint8_t burstsOnHit;             // +0x2bc: a landed attack starts the burst state
    bool flyAnimationLoops;          // +0x2bd
    uint8_t removedAfterBurst;       // +0x2be: Remove rather than Release when the burst is over
    uint8_t shakesOnLanding;         // +0x2bf
    uint32_t landingShake;           // +0x2c0: which of the camera shaker's patterns
    int32_t value2c4;                // +0x2c4
    int32_t value2c8;                // +0x2c8
    int32_t value2cc;                // +0x2cc
    Attack attack;                   // +0x2d0
    int32_t attackSource;            // +0x328
    uint32_t spawnerId;              // +0x32c: which spawner placed it, or 42
    uint8_t flag330;                 // +0x330
    char padding_331[0x3];
    float attackDelay;               // +0x334: how long after a landed attack it attacks again
    float landingEventSpeed;         // +0x338: landing faster than this sends event220
    uint8_t flag33c;                 // +0x33c
    uint8_t waitsAfterLanding;       // +0x33d
    char padding_33e[0x2];
    int32_t landingAnimation;        // +0x340
    bool respawnsAfterBurst;         // +0x344
    uint8_t burstOver;               // +0x345
    uint8_t bursting;                // +0x346
    uint8_t bounced;                 // +0x347
    float flightLeft;                // +0x348
    float attackTimer;               // +0x34c
    uint8_t attackDelayed;           // +0x350: a landed attack is waiting for attackDelay
    char padding_351[0x3];
    int32_t flyAnimation;            // +0x354: follows animation 189 when that is over
    int32_t waitFor;                 // +0x358: 1 until on screen, 2 until a player is near, 3 until the camera block is active
    onyx::Vector3 launchMotion;      // +0x35c
    float triggerRange;              // +0x368: squared distance for waitFor 2
    char padding_36c[0x6c];
    bool removedForRespawn;          // +0x3d8
};
static_assert(__builtin_offsetof(Projectile, states) == 0x280, "Projectile states");
static_assert(__builtin_offsetof(Projectile, attack) == 0x2d0, "Projectile attack");
static_assert(__builtin_offsetof(Projectile, waitFor) == 0x358, "Projectile waitFor");
static_assert(__builtin_offsetof(Projectile, removedForRespawn) == 0x3d8, "Projectile removedForRespawn");

}  // namespace SPTG
