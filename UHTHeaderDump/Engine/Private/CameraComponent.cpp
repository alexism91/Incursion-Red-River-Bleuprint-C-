#include "CameraComponent.h"

UCameraComponent::UCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->FieldOfView = 90.00f;
    this->FirstPersonFieldOfView = 90.00f;
    this->FirstPersonScale = 1.00f;
    this->OrthoWidth = 1536.00f;
    this->bAutoCalculateOrthoPlanes = true;
    this->AutoPlaneShift = 0.00f;
    this->OrthoNearClipPlane = -768.00f;
    this->OrthoFarClipPlane = 2097152.00f;
    this->bUpdateOrthoPlanes = true;
    this->bUseCameraHeightAsViewTarget = true;
    this->AspectRatio = 1.78f;
    this->AspectRatioAxisConstraint = AspectRatio_MaintainXFOV;
    this->bConstrainAspectRatio = false;
    this->bOverrideAspectRatioAxisConstraint = false;
    this->bUseFieldOfViewForLOD = true;
    this->Overscan = 0.00f;
    this->bScaleResolutionWithOverscan = false;
    this->bCropOverscan = false;
    this->bLockToHmd = true;
    this->bUsePawnControlRotation = false;
    this->bEnableFirstPersonFieldOfView = false;
    this->bEnableFirstPersonScale = false;
    this->ProjectionMode = ECameraProjectionMode::Perspective;
    this->PostProcessBlendWeight = 1.00f;
}

void UCameraComponent::SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD) {
}

void UCameraComponent::SetUseCameraHeightAsViewTarget(bool bInUseCameraHeightAsViewTarget) {
}

void UCameraComponent::SetUpdateOrthoPlanes(bool bInUpdateOrthoPlanes) {
}

void UCameraComponent::SetScaleResolutionWithOverscan(bool bInScaleResolutionWithOverscan) {
}

void UCameraComponent::SetProjectionMode(TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode) {
}

void UCameraComponent::SetPostProcessBlendWeight(float InPostProcessBlendWeight) {
}

void UCameraComponent::SetOverscan(float InOverscan) {
}

void UCameraComponent::SetOrthoWidth(float InOrthoWidth) {
}

void UCameraComponent::SetOrthoNearClipPlane(float InOrthoNearClipPlane) {
}

void UCameraComponent::SetOrthoFarClipPlane(float InOrthoFarClipPlane) {
}

void UCameraComponent::SetFirstPersonScale(float InFirstPersonScale) {
}

void UCameraComponent::SetFirstPersonFieldOfView(float InFirstPersonFieldOfView) {
}

void UCameraComponent::SetFieldOfView(float InFieldOfView) {
}

void UCameraComponent::SetEnableFirstPersonScale(bool bInEnableFirstPersonScale) {
}

void UCameraComponent::SetEnableFirstPersonFieldOfView(bool bInEnableFirstPersonFieldOfView) {
}

void UCameraComponent::SetCropOverscan(bool bInCropOverscan) {
}

void UCameraComponent::SetConstraintAspectRatio(bool bInConstrainAspectRatio) {
}

void UCameraComponent::SetAutoPlaneShift(float InAutoPlaneShift) {
}

void UCameraComponent::SetAutoCalculateOrthoPlanes(bool bAutoCalculate) {
}

void UCameraComponent::SetAsymmetricOverscan(const FVector4f& InAsymmetricOverscan) {
}

void UCameraComponent::SetAspectRatioAxisConstraint(TEnumAsByte<EAspectRatioAxisConstraint> InAspectRatioAxisConstraint) {
}

void UCameraComponent::SetAspectRatio(float InAspectRatio) {
}

void UCameraComponent::RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject) {
}

void UCameraComponent::OnCameraMeshHiddenChanged() {
}

void UCameraComponent::GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) {
}

void UCameraComponent::AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight) {
}


