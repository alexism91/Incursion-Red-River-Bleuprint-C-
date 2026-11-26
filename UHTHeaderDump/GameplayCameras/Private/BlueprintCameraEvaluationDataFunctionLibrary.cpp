#include "BlueprintCameraEvaluationDataFunctionLibrary.h"

UBlueprintCameraEvaluationDataFunctionLibrary::UBlueprintCameraEvaluationDataFunctionLibrary() {
}

void UBlueprintCameraEvaluationDataFunctionLibrary::SetDefaultCameraRigParameters(const FBlueprintCameraEvaluationDataRef& CameraData, const UCameraRigAsset* CameraRig) {
}

void UBlueprintCameraEvaluationDataFunctionLibrary::SetCameraPose(const FBlueprintCameraEvaluationDataRef& CameraData, const FBlueprintCameraPose& CameraPose) {
}

FBlueprintCameraEvaluationDataRef UBlueprintCameraEvaluationDataFunctionLibrary::MakeCameraEvaluationData() {
    return FBlueprintCameraEvaluationDataRef{};
}

FBlueprintCameraPose UBlueprintCameraEvaluationDataFunctionLibrary::GetCameraPose(const FBlueprintCameraEvaluationDataRef& CameraData) {
    return FBlueprintCameraPose{};
}

void UBlueprintCameraEvaluationDataFunctionLibrary::BlendCameraEvaluationData(const FBlueprintCameraEvaluationDataRef& FromCameraData, const FBlueprintCameraEvaluationDataRef& ToCameraData, float Factor) {
}


