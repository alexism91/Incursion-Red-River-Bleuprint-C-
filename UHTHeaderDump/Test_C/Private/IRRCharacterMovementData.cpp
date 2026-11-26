#include "IRRCharacterMovementData.h"

FIRRCharacterMovementData::FIRRCharacterMovementData() {
    this->Speed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->LastSprintTime = 0.00f;
    this->MovementState = EIRRMovementState::None;
}

