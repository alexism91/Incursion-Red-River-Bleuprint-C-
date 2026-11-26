#include "IRRAIWeaponSelector.h"

UIRRAIWeaponSelector::UIRRAIWeaponSelector(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIRRAIWeaponSelector::SwapToSlot(EIRRWeaponSlot Slot, bool bEnsureChambered) {
    return false;
}

bool UIRRAIWeaponSelector::SwapToBestAvailable(bool bEnsureChambered, bool bKeepCurrentIfArmed) {
    return false;
}

void UIRRAIWeaponSelector::OnWeaponChanged(const FIRRAIWeaponData& WeaponData) {
}

void UIRRAIWeaponSelector::OnInventoryUpdated() {
}

void UIRRAIWeaponSelector::OnAbilityEnded(FGameplayTag AbilityTag, bool bSuccess) {
}

bool UIRRAIWeaponSelector::IsSwapping() const {
    return false;
}

bool UIRRAIWeaponSelector::IsSlotDrawn(EIRRWeaponSlot Slot) const {
    return false;
}

bool UIRRAIWeaponSelector::HasLoadedWeaponAvailable() const {
    return false;
}

bool UIRRAIWeaponSelector::HasAnyCombatWeapon() const {
    return false;
}

FIRRAIWeaponLoadout UIRRAIWeaponSelector::GetWeaponLoadout() const {
    return FIRRAIWeaponLoadout{};
}

FGameplayTag UIRRAIWeaponSelector::GetSlotTag(EIRRWeaponSlot Slot) const {
    return FGameplayTag{};
}

void UIRRAIWeaponSelector::EnsureChambered() {
}

bool UIRRAIWeaponSelector::CanSwapToSlot(EIRRWeaponSlot Slot) const {
    return false;
}


