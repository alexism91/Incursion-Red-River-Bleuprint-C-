#include "SimpleGameplayAbility_EquipSlot.h"

USimpleGameplayAbility_EquipSlot::USimpleGameplayAbility_EquipSlot() {
    this->bToggleBackWhenHeld = false;
}

FGameplayTag USimpleGameplayAbility_EquipSlot::ResolveTargetSlot() const {
    return FGameplayTag{};
}


