#include "GameplayCameraSystemComponent.h"

UGameplayCameraSystemComponent::UGameplayCameraSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoActivateForPlayer = EAutoReceiveInput::Disabled;
    this->bSetPlayerControllerRotation = false;
}

void UGameplayCameraSystemComponent::StopCameraModifierRig(FCameraRigInstanceID InstanceId, bool bImmediately) {
}

FCameraRigInstanceID UGameplayCameraSystemComponent::StartVisualCameraModifierRig(const UCameraRigAsset* CameraRig, int32 OrderKey) {
    return FCameraRigInstanceID{};
}

FCameraRigInstanceID UGameplayCameraSystemComponent::StartGlobalCameraModifierRig(const UCameraRigAsset* CameraRig, int32 OrderKey) {
    return FCameraRigInstanceID{};
}

bool UGameplayCameraSystemComponent::IsCameraSystemActiveForPlayController(APlayerController* PlayerController) const {
    return false;
}

void UGameplayCameraSystemComponent::DeactivateCameraSystem(AActor* NextViewTarget) {
}

void UGameplayCameraSystemComponent::ActivateCameraSystemForPlayerIndex(int32 PlayerIndex) {
}

void UGameplayCameraSystemComponent::ActivateCameraSystemForPlayerController(APlayerController* PlayerController) {
}


