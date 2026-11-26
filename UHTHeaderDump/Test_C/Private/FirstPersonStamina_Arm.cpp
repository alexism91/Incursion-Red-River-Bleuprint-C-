#include "FirstPersonStamina_Arm.h"

UFirstPersonStamina_Arm::UFirstPersonStamina_Arm() {
    this->ArmStaminaCurve_Location = NULL;
    this->ArmStaminaCurve_Rotation = NULL;
    this->ArmSwaySpeedMapping = NULL;
    this->ArmSwayMultiplierMapping = NULL;
    this->ArmSwayTransitionSpeed = 4.00f;
}

void UFirstPersonStamina_Arm::RemoveArmStaminaEffect(FName EffectIdentifier) {
}

void UFirstPersonStamina_Arm::GetArmSwayVectors(FVector& LocationVector, FRotator& RotationVector) {
}

void UFirstPersonStamina_Arm::AddArmStaminaEffect(FIRRArmStaminaEffect StaminaEffect) {
}


