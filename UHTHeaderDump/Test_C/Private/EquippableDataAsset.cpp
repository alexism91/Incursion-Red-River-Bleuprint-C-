#include "EquippableDataAsset.h"

UEquippableDataAsset::UEquippableDataAsset() {
    this->ViewmodelSettings = NULL;
    this->WeaponTypeSwitch = NULL;
    this->AimStaminaDrainMultiplier = 1.00f;
}

FGameplayTag UEquippableDataAsset::GetOverlayPoseTag() {
    return FGameplayTag{};
}

FName UEquippableDataAsset::GetLinkedAnimGraph() {
    return NAME_None;
}

FCharacterMontageSet UEquippableDataAsset::GetInspectMontageSet() {
    return FCharacterMontageSet{};
}

UAnimSequence* UEquippableDataAsset::GetIdleAnimation() {
    return NULL;
}

FName UEquippableDataAsset::GetEquippedSocketName() {
    return NAME_None;
}

FEquipMontageSet UEquippableDataAsset::GetEquipMontageSet(FGameplayTag Slot) {
    return FEquipMontageSet{};
}


