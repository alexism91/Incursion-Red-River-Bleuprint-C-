#include "WeaponDataAsset.h"

UWeaponDataAsset::UWeaponDataAsset() {
    this->ParentDataSet = NULL;
    this->FireMontageRate = 1.00f;
    this->FireMontageAlpha = 1.00f;
    this->AimReloadInfluence = 0.25f;
    this->MinAimDistance = 10.00f;
    this->RecoilSettings = NULL;
    this->WeaponSetRateOfFire = 1.00f;
    this->WeaponSetTailPitch = 0.00f;
    this->WeaponSetTailVolume = 1.00f;
}

FSwitchFireModeMontageSet UWeaponDataAsset::GetSwitchFireModeMontageSet(FGameplayTag FromFireModeTag, bool& bFound) {
    return FSwitchFireModeMontageSet{};
}

FCharacterMontageSet UWeaponDataAsset::GetStandardCheckMagMontageSet(FGameplayTag Mag) {
    return FCharacterMontageSet{};
}

FNoMagMontageSet UWeaponDataAsset::GetNoMagMontageSet() {
    return FNoMagMontageSet{};
}

FReloadManualMontageSet UWeaponDataAsset::GetManualReloadMontageSet(FGameplayTag Mag, FGameplayTag ReloadTag, bool& bFound) {
    return FReloadManualMontageSet{};
}

FMailFunctionAnimSet UWeaponDataAsset::GetMalfunctionMontageSet() {
    return FMailFunctionAnimSet{};
}

FReloadMagMontageSet UWeaponDataAsset::GetMagReloadMontageSet(FGameplayTag Mag, FGameplayTag ReloadTag) {
    return FReloadMagMontageSet{};
}

FMagMontageSet UWeaponDataAsset::GetMagMontageSet(FGameplayTag Mag) {
    return FMagMontageSet{};
}

FCharacterMontageSet UWeaponDataAsset::GetEmptyInspectMontageSet() {
    return FCharacterMontageSet{};
}

FCharacterMontageSet UWeaponDataAsset::GetChamberOpenCheckMagMontageSet(FGameplayTag Mag) {
    return FCharacterMontageSet{};
}

FCharacterMontageSet UWeaponDataAsset::GetChamberMontageSet(bool bManual) {
    return FCharacterMontageSet{};
}


