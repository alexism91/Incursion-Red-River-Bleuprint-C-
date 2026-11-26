#include "SightComponent.h"

USightComponent::USightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 1;
    this->FieldOfViewMaterialParameterCollection = NULL;
    this->FieldOfViewParameterName = TEXT("FieldOfView");
    this->MagnificationIndex = 0;
    this->bIsEnabled = false;
    this->FLineCurve = NULL;
}

bool USightComponent::TrySwitchMagnificationLevel(bool bIncrement) {
    return false;
}

bool USightComponent::TryCycleSightMode() {
    return false;
}

void USightComponent::TriggerSight(bool IsEnabled, float TransitionTime) {
}

void USightComponent::SightTransitionUpdate(float TransitionAlpha) {
}

void USightComponent::SetSightMode(FName NewMode) {
}

void USightComponent::SetMagnificationLevel(int32 newIndex) {
}


bool USightComponent::HasScopeMode() {
    return false;
}

void USightComponent::GetTargetFOV(float& CameraFOV, float& HandsFOV, float PlayerCameraFOV) {
}

FSightData USightComponent::GetSightData() {
    return FSightData{};
}

float USightComponent::GetMagnificationLevel() {
    return 0.0f;
}


