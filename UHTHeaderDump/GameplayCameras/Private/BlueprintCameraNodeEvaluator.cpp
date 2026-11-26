#include "BlueprintCameraNodeEvaluator.h"
#include "Templates/SubclassOf.h"

UBlueprintCameraNodeEvaluator::UBlueprintCameraNodeEvaluator() {
    this->bIsFirstFrame = false;
    this->EvaluationContextOwner = NULL;
}


void UBlueprintCameraNodeEvaluator::SetDefaultOwningCameraRigParameters(FBlueprintCameraEvaluationDataRef TargetCameraData) const {
}

void UBlueprintCameraNodeEvaluator::SetCurrentCameraPose(const FBlueprintCameraPose& NewCameraPose) {
}

void UBlueprintCameraNodeEvaluator::SetCameraPose(const FBlueprintCameraPose& InCameraPose) {
}


APlayerController* UBlueprintCameraNodeEvaluator::GetPlayerController() const {
    return NULL;
}

FBlueprintCameraPose UBlueprintCameraNodeEvaluator::GetCurrentCameraPose() const {
    return FBlueprintCameraPose{};
}

FBlueprintCameraPose UBlueprintCameraNodeEvaluator::GetCameraPose() const {
    return FBlueprintCameraPose{};
}

AActor* UBlueprintCameraNodeEvaluator::FindEvaluationContextOwnerActor(TSubclassOf<AActor> ActorClass) const {
    return NULL;
}


