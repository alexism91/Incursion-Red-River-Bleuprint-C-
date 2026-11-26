#include "LPSPCharacterAnimInstance.h"

ULPSPCharacterAnimInstance::ULPSPCharacterAnimInstance() {
    this->bAiming = false;
    this->bFalling = false;
    this->bRunning = false;
}

bool ULPSPCharacterAnimInstance::IsRunning() const {
    return false;
}


