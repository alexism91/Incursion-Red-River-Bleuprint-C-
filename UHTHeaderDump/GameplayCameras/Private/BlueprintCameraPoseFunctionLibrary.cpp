#include "BlueprintCameraPoseFunctionLibrary.h"

UBlueprintCameraPoseFunctionLibrary::UBlueprintCameraPoseFunctionLibrary() {
}

FBlueprintCameraPose UBlueprintCameraPoseFunctionLibrary::SetTransform(const FBlueprintCameraPose& CameraPose, const FTransform& Transform) {
    return FBlueprintCameraPose{};
}

FBlueprintCameraPose UBlueprintCameraPoseFunctionLibrary::SetTargetDistance(const FBlueprintCameraPose& CameraPose, double TargetDistance) {
    return FBlueprintCameraPose{};
}

FBlueprintCameraPose UBlueprintCameraPoseFunctionLibrary::SetRotation(const FBlueprintCameraPose& CameraPose, const FRotator& Rotation) {
    return FBlueprintCameraPose{};
}

FBlueprintCameraPose UBlueprintCameraPoseFunctionLibrary::SetLocation(const FBlueprintCameraPose& CameraPose, const FVector& Location) {
    return FBlueprintCameraPose{};
}

FBlueprintCameraPose UBlueprintCameraPoseFunctionLibrary::SetFocalLength(const FBlueprintCameraPose& CameraPose, float FocalLength) {
    return FBlueprintCameraPose{};
}

FBlueprintCameraPose UBlueprintCameraPoseFunctionLibrary::SetFieldOfView(const FBlueprintCameraPose& CameraPose, float FieldOfView) {
    return FBlueprintCameraPose{};
}

FBlueprintCameraPose UBlueprintCameraPoseFunctionLibrary::MakeCameraPoseFromCineCameraComponent(const UCineCameraComponent* CameraComponent) {
    return FBlueprintCameraPose{};
}

FBlueprintCameraPose UBlueprintCameraPoseFunctionLibrary::MakeCameraPoseFromCameraComponent(const UCameraComponent* CameraComponent) {
    return FBlueprintCameraPose{};
}

FTransform UBlueprintCameraPoseFunctionLibrary::GetTransform(const FBlueprintCameraPose& CameraPose) {
    return FTransform{};
}

double UBlueprintCameraPoseFunctionLibrary::GetTargetDistance(const FBlueprintCameraPose& CameraPose) {
    return 0.0;
}

FVector UBlueprintCameraPoseFunctionLibrary::GetTargetAtDistance(const FBlueprintCameraPose& CameraPose, double TargetDistance) {
    return FVector{};
}

FVector UBlueprintCameraPoseFunctionLibrary::GetTarget(const FBlueprintCameraPose& CameraPose) {
    return FVector{};
}

double UBlueprintCameraPoseFunctionLibrary::GetSensorAspectRatio(const FBlueprintCameraPose& CameraPose) {
    return 0.0;
}

FRotator UBlueprintCameraPoseFunctionLibrary::GetRotation(const FBlueprintCameraPose& CameraPose) {
    return FRotator{};
}

FVector UBlueprintCameraPoseFunctionLibrary::GetLocation(const FBlueprintCameraPose& CameraPose) {
    return FVector{};
}

double UBlueprintCameraPoseFunctionLibrary::GetFocalLength(const FBlueprintCameraPose& CameraPose) {
    return 0.0;
}

double UBlueprintCameraPoseFunctionLibrary::GetFieldOfView(const FBlueprintCameraPose& CameraPose) {
    return 0.0;
}

double UBlueprintCameraPoseFunctionLibrary::GetEffectiveFieldOfView(const FBlueprintCameraPose& CameraPose) {
    return 0.0;
}

FRay UBlueprintCameraPoseFunctionLibrary::GetAimRay(const FBlueprintCameraPose& CameraPose) {
    return FRay{};
}

FVector UBlueprintCameraPoseFunctionLibrary::GetAimDir(const FBlueprintCameraPose& CameraPose) {
    return FVector{};
}


