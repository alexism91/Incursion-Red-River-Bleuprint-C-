#include "GameplayCamerasPlayerCameraManager.h"

AGameplayCamerasPlayerCameraManager::AGameplayCamerasPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->ViewRotationMode = EGameplayCamerasViewRotationMode::None;
    this->bOverrideViewRotationMode = false;
    this->OriginalCameraManager = NULL;
}

void AGameplayCamerasPlayerCameraManager::StopCameraModifierRig(FCameraRigInstanceID InstanceId, bool bImmediately) {
}

void AGameplayCamerasPlayerCameraManager::StealPlayerController(APlayerController* PlayerController) {
}

FCameraRigInstanceID AGameplayCamerasPlayerCameraManager::StartVisualCameraModifierRig(const UCameraRigAsset* CameraRig, int32 OrderKey) {
    return FCameraRigInstanceID{};
}

FCameraRigInstanceID AGameplayCamerasPlayerCameraManager::StartGlobalCameraModifierRig(const UCameraRigAsset* CameraRig, int32 OrderKey) {
    return FCameraRigInstanceID{};
}

void AGameplayCamerasPlayerCameraManager::ReleasePlayerController() {
}


