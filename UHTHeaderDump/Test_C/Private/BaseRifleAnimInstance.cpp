#include "BaseRifleAnimInstance.h"

UBaseRifleAnimInstance::UBaseRifleAnimInstance() {
    this->bDriveAimServo = true;
    this->ServoMinHandIKWeight = 0.50f;
}

void UBaseRifleAnimInstance::SetAimServoTarget(const FVector& WorldLocation) {
}

bool UBaseRifleAnimInstance::IsAimServoActive() const {
    return false;
}

void UBaseRifleAnimInstance::HandleEquipmentUpdated() {
}

void UBaseRifleAnimInstance::ClearAimServoTarget() {
}


