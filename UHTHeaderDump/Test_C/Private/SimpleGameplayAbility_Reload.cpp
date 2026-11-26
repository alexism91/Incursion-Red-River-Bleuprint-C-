#include "SimpleGameplayAbility_Reload.h"

USimpleGameplayAbility_Reload::USimpleGameplayAbility_Reload() {
    this->StopAbilityMontage = true;
    this->bEmergencyReload = false;
    this->ReloadMontage = NULL;
    this->EquippedWeapon = NULL;
    this->WeaponComponent = NULL;
    this->WeaponData = NULL;
}

void USimpleGameplayAbility_Reload::OnReloadMontageInterrupted(FName NotifyName) {
}

void USimpleGameplayAbility_Reload::OnReloadMontageCompleted(FName NotifyName) {
}

void USimpleGameplayAbility_Reload::OnReloadMontageBlendOut(FName NotifyName) {
}


