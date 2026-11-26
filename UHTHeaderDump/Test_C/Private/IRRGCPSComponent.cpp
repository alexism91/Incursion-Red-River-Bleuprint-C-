#include "IRRGCPSComponent.h"

UIRRGCPSComponent::UIRRGCPSComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SliderInterpSpeedUp = 10.00f;
    this->SliderInterpSpeedDown = 5.00f;
    this->ThumbStickInterpSpeedUp = 10.00f;
    this->ThumbStickInterpSpeedDown = 5.00f;
    this->bIsPowerOn = false;
    this->SliderValue = 0.00f;
    this->bThumbStickDown = false;
    this->ScreenTraceLength = 1000.00f;
    this->ScreenTraceChannel = TraceTypeQuery5;
    this->ScreenScale = 1.39f;
    this->GimbalEdgeSearchSteps = 5;
    this->bFindNearbyResources = false;
    this->ObjectiveFinderInterval = 0.25f;
    this->AkEmitter = NULL;
    this->LoadedResourceClass = NULL;
    this->LoadedDistanceRtpc = NULL;
    this->LoadedFoundTargetEvent = NULL;
    this->LoadedLostTargetEvent = NULL;
}

FVector2D UIRRGCPSComponent::WorldToScreenCursor(const UWidgetComponent* Screen, FVector WorldLocation, float InScreenScale) {
    return FVector2D{};
}

bool UIRRGCPSComponent::TraceScreenCursor(const USceneComponent* Pointer, const UWidgetComponent* Screen, const UPrimitiveComponent* ScreenCollision, FVector2D& OutCursor) const {
    return false;
}

void UIRRGCPSComponent::SwitchPower(bool bPowerOn) {
}

void UIRRGCPSComponent::SetThumbStickValue(FVector2D NewValue) {
}

void UIRRGCPSComponent::SetThumbStickDown(bool NewValue) {
}

void UIRRGCPSComponent::SetSliderValue(float NewValue) {
}

void UIRRGCPSComponent::HandleControllerSettingsChanged(FIRRGameplaySettings NewSettings) {
}

FVector2D UIRRGCPSComponent::GetThumbStickValue() const {
    return FVector2D{};
}

bool UIRRGCPSComponent::GetThumbStickDown() const {
    return false;
}

float UIRRGCPSComponent::GetSliderValue() const {
    return 0.0f;
}

FVector2D UIRRGCPSComponent::GetScreenCursorBounds(const UWidgetComponent* Screen) const {
    return FVector2D{};
}

float UIRRGCPSComponent::GetCursorOvershoot(FVector2D CursorLocation, FVector2D Bounds) {
    return 0.0f;
}

FVector2D UIRRGCPSComponent::GetCursorBounds(FVector2D DrawSize, FVector2D EdgeMargin, float InScreenScale) {
    return FVector2D{};
}

FVector2D UIRRGCPSComponent::ClampCursorToBounds(FVector2D CursorLocation, FVector2D Bounds) {
    return FVector2D{};
}

void UIRRGCPSComponent::AimGimbal(USceneComponent* YawGimbal, USceneComponent* PitchGimbal, const USceneComponent* Pointer, const UWidgetComponent* Screen, const UPrimitiveComponent* ScreenCollision, float YawDelta, float PitchDelta) const {
}


