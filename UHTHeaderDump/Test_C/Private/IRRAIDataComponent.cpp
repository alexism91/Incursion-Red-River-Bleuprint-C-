#include "IRRAIDataComponent.h"

UIRRAIDataComponent::UIRRAIDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Weapon = NULL;
}

void UIRRAIDataComponent::OnShotFired() {
}

void UIRRAIDataComponent::OnEquipableChanged(UEquippableComponent* EquippableComponent) {
}

float UIRRAIDataComponent::GetVisionSpeedCoef() const {
    return 0.0f;
}

float UIRRAIDataComponent::GetVisionDistanceCoef() const {
    return 0.0f;
}

float UIRRAIDataComponent::GetCurrentFlareMultiplier() const {
    return 0.0f;
}


