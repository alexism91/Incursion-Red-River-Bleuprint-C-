#include "IRRResourceComponent.h"

UIRRResourceComponent::UIRRResourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRespectMaxCapFromType = true;
    this->bAutoSaveOnChange = true;
    this->CachedOwner = NULL;
}

bool UIRRResourceComponent::SpendBatch(const TMap<FGameplayTag, int32>& Costs) {
    return false;
}

bool UIRRResourceComponent::SpendAmount(FGameplayTag ResourceTag, int32 AmountToSpend) {
    return false;
}

void UIRRResourceComponent::SetMaxAmount(FGameplayTag ResourceTag, int32 NewMaxAmount) {
}

bool UIRRResourceComponent::SaveToSlot() {
    return false;
}

void UIRRResourceComponent::ResetAmounts() {
}

bool UIRRResourceComponent::LoadFromSlot(bool bBroadcastChanges) {
    return false;
}

bool UIRRResourceComponent::HasEnoughBatch(const TMap<FGameplayTag, int32>& Costs) const {
    return false;
}

bool UIRRResourceComponent::HasEnough(FGameplayTag ResourceTag, int32 Required) const {
    return false;
}

int32 UIRRResourceComponent::GetMaxAmount(FGameplayTag ResourceTag) const {
    return 0;
}

int32 UIRRResourceComponent::GetAmount(FGameplayTag ResourceTag) const {
    return 0;
}

void UIRRResourceComponent::GetAll(TArray<FIRRResourceSnapshot>& Out) const {
}

void UIRRResourceComponent::AddAmount(FGameplayTag ResourceTag, int32 Delta, bool bClampToMaxCap) {
}


