#include "IRRHideoutUnitManager.h"

UIRRHideoutUnitManager::UIRRHideoutUnitManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActiveHideoutUnit = NULL;
    this->MissionComponent = NULL;
    this->InitHideoutUnitsDelay = 1.00f;
}

void UIRRHideoutUnitManager::UpdateCachedHideoutRequirements() {
}

void UIRRHideoutUnitManager::UnregisterHideoutUnit(UIRRHideoutUnitComponent* HideoutUnit) {
}

void UIRRHideoutUnitManager::SetActiveHideoutUnit(UIRRHideoutUnitComponent* HideoutUnit) {
}

void UIRRHideoutUnitManager::RequestSave() {
}

void UIRRHideoutUnitManager::RegisterHideoutUnit(UIRRHideoutUnitComponent* HideoutUnit) {
}

void UIRRHideoutUnitManager::OnUpgradeLevelChanged_Implementation(UIRRHideoutUnitComponent* HideoutUnit, int32 NewLevel) {
}


void UIRRHideoutUnitManager::InitHideoutUnits() {
}

FText UIRRHideoutUnitManager::GetHideoutUnitDisplayNameByTag(FGameplayTag GameplayTag) const {
    return FText::GetEmpty();
}

UIRRHideoutUnitComponent* UIRRHideoutUnitManager::GetHideoutUnitByTag(FGameplayTag GameplayTag) const {
    return NULL;
}


