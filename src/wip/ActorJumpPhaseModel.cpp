// Behavioral model of the phase decisions in original 0x8e8ab0.
// Not a byte-matching implementation or a complete action/player update.
// Numeric state identities are observed; their original enum names are unknown.
#include <stdint.h>

struct JumpInputs {
    uint32_t state;
    uint32_t active;
    uint32_t ready;       // Result of actor virtual slot at +0xd8.
    uint32_t grounded;    // Provisional interpretation of virtual slot +0x1a0.
    float verticalMotion; // Actor field +0x1ac; velocity interpretation inferred.
};

struct JumpDecision {
    int32_t nextState; // -1 means no state change.
    uint32_t transitionFlag;
    uint32_t resetMotion;
    uint32_t requestCompletion; // Still subject to the action's completion gate.
};

extern "C" void EvaluateJumpPhase(const JumpInputs* input, JumpDecision* output) {
    *output = {-1, 0, 0, 0};
    if (!input->active)
        return;

    switch (input->state) {
    case 2: case 0x35: case 0x45:
        if (input->ready) {
            output->nextState = 3;
            output->transitionFlag = 1;
        }
        break;
    case 3: case 0x36: case 0x46:
        // Original ARM64 leaves the state unchanged for NaN as well as >= 0.
        if (input->verticalMotion < 0.0f)
            output->nextState = 4;
        break;
    case 4: case 0x37: case 0x47:
        if (input->ready) {
            output->nextState = input->grounded ? 6 : 5;
            output->transitionFlag = input->grounded ? 0 : 1;
            output->resetMotion = input->grounded != 0;
        }
        break;
    case 5: case 0x38: case 0x48:
        if (input->grounded) {
            output->nextState = 6;
            output->resetMotion = 1;
        }
        break;
    case 6: case 0x39: case 0x49:
        output->requestCompletion = input->ready != 0;
        break;
    default:
        break;
    }
}
