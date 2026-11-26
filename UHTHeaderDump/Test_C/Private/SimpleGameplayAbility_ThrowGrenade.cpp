#include "SimpleGameplayAbility_ThrowGrenade.h"

USimpleGameplayAbility_ThrowGrenade::USimpleGameplayAbility_ThrowGrenade() {
    this->LinkedAnimGraph = TEXT("Combat");
    this->AimSection = TEXT("Aim");
    this->ThrowSection = TEXT("ThrowUnderArm");
    this->UnAimSection = TEXT("UnAim");
    this->ThrowNotifyName = TEXT("Throw");
    this->ThrowSpeed = 1500.00f;
    this->MinAimTime = 0.00f;
    this->bReturnToPreviousSlot = true;
    this->StageMontage = NULL;
}

void USimpleGameplayAbility_ThrowGrenade::OnThrowNotify(FName NotifyName) {
}

void USimpleGameplayAbility_ThrowGrenade::OnThrowInterrupted(FName NotifyName) {
}

void USimpleGameplayAbility_ThrowGrenade::OnThrowCompleted(FName NotifyName) {
}

void USimpleGameplayAbility_ThrowGrenade::OnAimInterrupted(FName NotifyName) {
}

bool USimpleGameplayAbility_ThrowGrenade::HasReleasedGrenade() const {
    return false;
}

UGrenadeComponent* USimpleGameplayAbility_ThrowGrenade::FindHeldGrenade() const {
    return NULL;
}


