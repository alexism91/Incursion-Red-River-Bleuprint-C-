#include "IRRAIAimComponent.h"

UIRRAIAimComponent::UIRRAIAimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bWeaponsFree = false;
    this->MaxAimTime = 5.00f;
    this->AimTarget = NULL;
    this->WeaponManager = NULL;
    this->WeaponSelector = NULL;
}

void UIRRAIAimComponent::StartAimingService() {
}

bool UIRRAIAimComponent::StartAiming() {
    return false;
}

void UIRRAIAimComponent::SetWeaponsFree(bool bValue) {
}

void UIRRAIAimComponent::OnShotFired(const FIRRAIWeaponData& NewWeaponData) {
}

void UIRRAIAimComponent::OnAimTargetKilled(UIRRAITarget* Target, const FIRRDamageData& DamageData) {
}

bool UIRRAIAimComponent::IsWeaponsFree() const {
    return false;
}

bool UIRRAIAimComponent::IsSimpleAimActive() const {
    return false;
}

EIRRAIShootStatus UIRRAIAimComponent::GetShootStatus() const {
    return EIRRAIShootStatus::None;
}

EIRRAIAimStatus UIRRAIAimComponent::GetAimStatus() const {
    return EIRRAIAimStatus::None;
}

void UIRRAIAimComponent::AbortAiming() {
}


