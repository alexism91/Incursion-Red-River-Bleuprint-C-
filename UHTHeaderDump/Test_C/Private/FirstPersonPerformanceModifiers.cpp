#include "FirstPersonPerformanceModifiers.h"

UFirstPersonPerformanceModifiers::UFirstPersonPerformanceModifiers() {
    this->bOnlyLocally = false;
    this->bTickEnabled = false;
    this->DefaultCrouchTransition = 0.25f;
    this->CrouchInfluence = 1.00f;
    this->DefaultAimTransition = 0.25f;
    this->AimInfluence = 1.00f;
    this->SprintMultiplierInfluence = 0.50f;
    this->AccelerationMultiplierInfluence = 0.50f;
    this->PlayerWeightRtpc = NULL;
    this->DefaultWeaponTypeSwitch = NULL;
    this->CrouchMultiplier = 1.00f;
    this->AimMultiplier = 1.00f;
    this->SprintMultiplier = 1.00f;
    this->AccelerationMultiplier = 1.00f;
}

void UFirstPersonPerformanceModifiers::OnInventoryUpdated() {
}


