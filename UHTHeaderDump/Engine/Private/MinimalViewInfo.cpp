#include "MinimalViewInfo.h"

FMinimalViewInfo::FMinimalViewInfo() {
    this->FOV = 0.00f;
    this->DesiredFOV = 0.00f;
    this->FirstPersonFOV = 0.00f;
    this->FirstPersonScale = 0.00f;
    this->OrthoWidth = 0.00f;
    this->bAutoCalculateOrthoPlanes = false;
    this->AutoPlaneShift = 0.00f;
    this->bUpdateOrthoPlanes = false;
    this->bUseCameraHeightAsViewTarget = false;
    this->OrthoNearClipPlane = 0.00f;
    this->OrthoFarClipPlane = 0.00f;
    this->PerspectiveNearClipPlane = 0.00f;
    this->AspectRatio = 0.00f;
    this->bConstrainAspectRatio = false;
    this->bUseFirstPersonParameters = false;
    this->bUseFieldOfViewForLOD = false;
    this->ProjectionMode = ECameraProjectionMode::Perspective;
    this->PostProcessBlendWeight = 0.00f;
    this->OverscanResolutionFraction = 0.00f;
    this->CropFraction = 0.00f;
}

