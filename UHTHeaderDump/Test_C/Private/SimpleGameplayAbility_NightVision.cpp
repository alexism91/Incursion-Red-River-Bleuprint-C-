#include "SimpleGameplayAbility_NightVision.h"

USimpleGameplayAbility_NightVision::USimpleGameplayAbility_NightVision() {
    this->bBufferAbility = true;
    this->LinkedAnimGraph = TEXT("Combat");
    this->GogglesDownEffect = NULL;
    this->GogglesPostProcess = NULL;
    this->GogglesMontage = NULL;
}

void USimpleGameplayAbility_NightVision::OnUnequipNotifyBegin(FName NotifyName) {
}

void USimpleGameplayAbility_NightVision::OnItemRemoved(FMainContainer MainContainer, FContainerItem Item) {
}

void USimpleGameplayAbility_NightVision::OnEquipNotifyBegin(FName NotifyName) {
}


