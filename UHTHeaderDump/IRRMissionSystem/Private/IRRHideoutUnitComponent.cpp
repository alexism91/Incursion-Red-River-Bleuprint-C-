#include "IRRHideoutUnitComponent.h"

UIRRHideoutUnitComponent::UIRRHideoutUnitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bTracked = true;
}

bool UIRRHideoutUnitComponent::SubmitRequiredItem(FGameplayTag ItemTag, int32 Count) {
    return false;
}

void UIRRHideoutUnitComponent::SetTracked(bool bNewTracked) {
}


bool UIRRHideoutUnitComponent::IsTracked() const {
    return false;
}

bool UIRRHideoutUnitComponent::HasAllRequiredItems() {
    return false;
}

void UIRRHideoutUnitComponent::HandleUpgradeHideoutUnit_Implementation(int32 NewLevel) {
}

TMap<FGameplayTag, int32> UIRRHideoutUnitComponent::GetRequiredItems() {
    return TMap<FGameplayTag, int32>();
}

FGameplayTag UIRRHideoutUnitComponent::GetHideoutUnitTag() {
    return FGameplayTag{};
}

int32 UIRRHideoutUnitComponent::GetHideoutUnitLevel() {
    return 0;
}

FText UIRRHideoutUnitComponent::GetHideoutUnitDisplayName() const {
    return FText::GetEmpty();
}

void UIRRHideoutUnitComponent::ExecuteUpgradeHideoutUnit_Implementation(int32 NewLevel) {
}

bool UIRRHideoutUnitComponent::EvaluateRequirements(FIRRHideoutUpgradeRequirements Requirements) {
    return false;
}

bool UIRRHideoutUnitComponent::CanUpgradeHideoutUnit_Implementation(int32 NewLevel) {
    return false;
}


