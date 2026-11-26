#include "RepairComponent.h"

URepairComponent::URepairComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RepairSettings = NULL;
    this->RepairRules = NULL;
}

void URepairComponent::SetRepairRules(URepairRules* NewRules) {
}

URepairSettings* URepairComponent::GetRepairSettings() {
    return NULL;
}

URepairRules* URepairComponent::GetRepairRulesByTag(FGameplayTag ItemTag) {
    return NULL;
}

void URepairComponent::ExecuteMaterialRepair_Implementation(FContainerItem ToRepairItem, float NewDurability, float NewMaxDurability, const TMap<FGuid, int32>& SelectedItems) {
}

void URepairComponent::ExecuteCashRepair_Implementation(FContainerItem ToRepairItem, float NewDurability, float NewMaxDurability, int32 RepairCost) {
}


