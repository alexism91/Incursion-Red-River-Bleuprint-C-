#include "BlueprintCameraPose.h"

FBlueprintCameraPose::FBlueprintCameraPose() {
    this->TargetDistance = 0.00f;
    this->FieldOfView = 0.00f;
    this->FocalLength = 0.00f;
    this->OrthographicWidth = 0.00f;
    this->Aperture = 0.00f;
    this->ShutterSpeed = 0.00f;
    this->FocusDistance = 0.00f;
    this->SensorWidth = 0.00f;
    this->SensorHeight = 0.00f;
    this->SensorHorizontalOffset = 0.00f;
    this->SensorVerticalOffset = 0.00f;
    this->ISO = 0.00f;
    this->SqueezeFactor = 0.00f;
    this->Overscan = 0.00f;
    this->DiaphragmBladeCount = 0;
    this->NearClippingPlane = 0.00f;
    this->FarClippingPlane = 0.00f;
    this->PhysicalCameraBlendWeight = 0.00f;
    this->EnablePhysicalCamera = false;
    this->ConstrainAspectRatio = false;
    this->OverrideAspectRatioAxisConstraint = false;
    this->AspectRatioAxisConstraint = AspectRatio_MaintainYFOV;
    this->ProjectionMode = ECameraProjectionMode::Perspective;
}

