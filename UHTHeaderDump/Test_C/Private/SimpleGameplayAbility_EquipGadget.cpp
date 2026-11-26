#include "SimpleGameplayAbility_EquipGadget.h"

USimpleGameplayAbility_EquipGadget::USimpleGameplayAbility_EquipGadget() {
    this->ProvisionalEquipTimeout = 2.00f;
}

void USimpleGameplayAbility_EquipGadget::OnEquipmentSlotChanged(FGameplayTag EquipmentSlot, bool bEquipped) {
}


