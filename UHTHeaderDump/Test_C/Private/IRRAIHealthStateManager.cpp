#include "IRRAIHealthStateManager.h"

UIRRAIHealthStateManager::UIRRAIHealthStateManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UIRRAIHealthStateManager::WasDamagedByHostileWithin(float Window) const {
    return false;
}

void UIRRAIHealthStateManager::OnReceiveDamage(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak) {
}

float UIRRAIHealthStateManager::GetTimeSinceHostileDamage() const {
    return 0.0f;
}

FIRRDamageData UIRRAIHealthStateManager::GetLastHostileDamageData() const {
    return FIRRDamageData{};
}


