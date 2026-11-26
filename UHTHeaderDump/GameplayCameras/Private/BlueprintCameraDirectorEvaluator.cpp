#include "BlueprintCameraDirectorEvaluator.h"
#include "Templates/SubclassOf.h"

UBlueprintCameraDirectorEvaluator::UBlueprintCameraDirectorEvaluator() {
}

bool UBlueprintCameraDirectorEvaluator::RunChildCameraDirector(float DeltaTime, FName ChildSlotName) {
    return false;
}



FBlueprintCameraEvaluationDataRef UBlueprintCameraDirectorEvaluator::GetInitialContextResult() const {
    return FBlueprintCameraEvaluationDataRef{};
}

FBlueprintCameraEvaluationDataRef UBlueprintCameraDirectorEvaluator::GetConditionalContextResult(ECameraEvaluationDataCondition Condition) const {
    return FBlueprintCameraEvaluationDataRef{};
}

AActor* UBlueprintCameraDirectorEvaluator::FindEvaluationContextOwnerActor(TSubclassOf<AActor> ActorClass) const {
    return NULL;
}

void UBlueprintCameraDirectorEvaluator::DeactivatePersistentVisualCameraRig(UCameraRigAsset* CameraRigPrefab) {
}

void UBlueprintCameraDirectorEvaluator::DeactivatePersistentGlobalCameraRig(UCameraRigAsset* CameraRigPrefab) {
}

void UBlueprintCameraDirectorEvaluator::DeactivatePersistentBaseCameraRig(UCameraRigAsset* CameraRigPrefab) {
}



void UBlueprintCameraDirectorEvaluator::ActivatePersistentVisualCameraRig(UCameraRigAsset* CameraRigPrefab) {
}

void UBlueprintCameraDirectorEvaluator::ActivatePersistentGlobalCameraRig(UCameraRigAsset* CameraRigPrefab) {
}

void UBlueprintCameraDirectorEvaluator::ActivatePersistentBaseCameraRig(UCameraRigAsset* CameraRigPrefab) {
}

void UBlueprintCameraDirectorEvaluator::ActivateCameraRigViaProxy(UCameraRigProxyAsset* CameraRigProxy, bool bForceNewInstance) {
}

void UBlueprintCameraDirectorEvaluator::ActivateCameraRig(UCameraRigAsset* CameraRig, bool bForceNewInstance) {
}



