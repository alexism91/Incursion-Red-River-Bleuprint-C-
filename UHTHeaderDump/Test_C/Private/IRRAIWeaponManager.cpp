#include "IRRAIWeaponManager.h"

UIRRAIWeaponManager::UIRRAIWeaponManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIRRAIWeaponManager::OnEquipmentChanged(UEquippableComponent* NewEquippable) {
}

void UIRRAIWeaponManager::OnBotStopFiringWeapon() {
}

void UIRRAIWeaponManager::OnBotShotWeapon() {
}

bool UIRRAIWeaponManager::IsReloading() const {
    return false;
}

bool UIRRAIWeaponManager::HasAmmoToShoot() const {
    return false;
}

bool UIRRAIWeaponManager::HasAmmoOverRatio(float MagRatio, int32 MinBulletCount) const {
    return false;
}

UWeaponComponent* UIRRAIWeaponManager::GetWeapon() const {
    return NULL;
}

FIRRAIWeaponData UIRRAIWeaponManager::GetCurrentWeaponData() const {
    return FIRRAIWeaponData{};
}

FIRRAIWeaponAmmoData UIRRAIWeaponManager::GetCurrentAmmoData() const {
    return FIRRAIWeaponAmmoData{};
}

float UIRRAIWeaponManager::GetAmmoRatio() const {
    return 0.0f;
}


