#include "FirstPersonStamina.h"

UFirstPersonStamina::UFirstPersonStamina() {
    this->RecoverPerSecond = 1.00f;
    this->Rtpc_Value = NULL;
    this->StaminaAttribute = NULL;
    this->GameplayAbilityComponent = NULL;
}

bool UFirstPersonStamina::TryConsumeStamina(float Amount) {
    return false;
}

void UFirstPersonStamina::RemoveStaminaInfluence(FIRRStaminaInfluence Influence) {
}

float UFirstPersonStamina::GetCurrentStamina() {
    return 0.0f;
}

void UFirstPersonStamina::AddStaminaInfluence(FIRRStaminaInfluence Influence) {
}


