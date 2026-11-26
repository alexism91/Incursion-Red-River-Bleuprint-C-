#include "FirstPersonWeaponADS.h"

UFirstPersonWeaponADS::UFirstPersonWeaponADS() {
    this->FLineAimTransition = NULL;
    this->DefaultAimTransitionSound = NULL;
    this->FieldOfViewMaterialParameterCollection = NULL;
    this->FLineFOVTransition = NULL;
    this->AimAlphaMaterialParameterCollection = NULL;
    this->AimAlphaParameterName = TEXT("SightAlpha");
    this->FLineAimAlphaTransition = NULL;
    this->AimTransitionState = EAimTransitionState::In;
    this->AimAlpha = 0.00f;
    this->BaseTransitionTime = 0.00f;
    this->BaseAimMultiplier = 0.00f;
    this->TargetSightComponent = NULL;
    this->OldTargetSightComponent = NULL;
    this->bIsPointSight = false;
    this->FLineCurve = NULL;
}

void UFirstPersonWeaponADS::UpdateMaterialParameters() {
}

void UFirstPersonWeaponADS::UpdateAim() {
}

void UFirstPersonWeaponADS::TriggerPointSight() {
}

void UFirstPersonWeaponADS::TriggerAim(bool bEnabled) {
}

void UFirstPersonWeaponADS::StartTransition(bool bin) {
}

bool UFirstPersonWeaponADS::RetargetSight() {
    return false;
}

void UFirstPersonWeaponADS::OnFirstPersonControllerSettingsChanged(FIRRGameplaySettings NewSettings) {
}

void UFirstPersonWeaponADS::OnAimTransitionUpdate(float NewAimAlpha) {
}

void UFirstPersonWeaponADS::OnAimTransitionStarted() {
}

void UFirstPersonWeaponADS::OnAimTransitionMultiplierUpdated(float NewAimMultiplier) {
}

FGlobalMaterialParameter UFirstPersonWeaponADS::LerpGlobalMaterialParameters(FGlobalMaterialParameter From, FGlobalMaterialParameter To, float Alpha) {
    return FGlobalMaterialParameter{};
}



float UFirstPersonWeaponADS::GetAimAlpha() {
    return 0.0f;
}

void UFirstPersonWeaponADS::ChangeSight() {
}


