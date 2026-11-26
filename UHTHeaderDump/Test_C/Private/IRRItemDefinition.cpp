#include "IRRItemDefinition.h"

UIRRItemDefinition::UIRRItemDefinition() {
    this->ItemClass = NULL;
    this->bDirty = false;
}

TArray<FBaseStatItem> UIRRItemDefinition::GetItemStats(const UObject* WorldContextObject) {
    return TArray<FBaseStatItem>();
}

TArray<USimpleGameplayEffect*> UIRRItemDefinition::GetItemGameplayEffectsByTagContainer(bool& bFound, FGameplayTagContainer TagContainer) {
    return TArray<USimpleGameplayEffect*>();
}

UItemContext* UIRRItemDefinition::GetItemDefaultContext(bool& bFound) {
    return NULL;
}

TArray<UItemContext*> UIRRItemDefinition::GetItemContexts(const UObject* WorldContextObject) {
    return TArray<UItemContext*>();
}

UItemContext* UIRRItemDefinition::GetItemActionContext(bool& bFound) {
    return NULL;
}

bool UIRRItemDefinition::EvaluateVendorConditions(const UObject* WorldContextObject) {
    return false;
}


