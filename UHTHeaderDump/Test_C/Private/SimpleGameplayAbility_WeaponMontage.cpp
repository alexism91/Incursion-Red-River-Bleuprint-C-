#include "SimpleGameplayAbility_WeaponMontage.h"

USimpleGameplayAbility_WeaponMontage::USimpleGameplayAbility_WeaponMontage() {
    this->StopAbilityMontage = true;
    this->WeaponMontage = NULL;
}

void USimpleGameplayAbility_WeaponMontage::OnWeaponMontageInterrupted(FName NotifyName) {
}

void USimpleGameplayAbility_WeaponMontage::OnWeaponMontageBlendOut(FName NotifyName) {
}


