#include "LootCondition.h"

ULootCondition::ULootCondition() {
    this->bEnabled = true;
    this->DebugName = TEXT("UnnamedCondition");
}

bool ULootCondition::ValidateItem_Implementation(UIRRItemDefinition* ItemDefinition, const FIRRVendorDefaultItem& VendorItem, const FGameplayTagContainer& AlreadyAddedItems) {
    return false;
}

FString ULootCondition::GetConditionDescription_Implementation() const {
    return TEXT("");
}


