#include "LPSPViewmodelAnimInstance.h"

ULPSPViewmodelAnimInstance::ULPSPViewmodelAnimInstance() {
    this->LagMovementInterpSpeed = 10.00f;
    this->Movement = 0.00f;
    this->TurnRate = 0.00f;
    this->PitchAcceleration = 0.00f;
    this->AimFieldOfViewMultiplier = 1.00f;
    this->bCrouching = false;
    this->WeaponHolsterState = Available;
}

float ULPSPViewmodelAnimInstance::GetAimPlayRate() const {
    return 0.0f;
}

TArray<float> ULPSPViewmodelAnimInstance::GetAimBlendTime() const {
    return TArray<float>();
}


