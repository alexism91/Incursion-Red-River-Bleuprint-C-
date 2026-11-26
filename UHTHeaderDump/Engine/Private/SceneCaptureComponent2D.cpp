#include "SceneCaptureComponent2D.h"

USceneCaptureComponent2D::USceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->ProjectionType = ECameraProjectionMode::Perspective;
    this->FOVAngle = 90.00f;
    this->FirstPersonFieldOfView = 90.00f;
    this->FirstPersonScale = 1.00f;
    this->OrthoWidth = 1536.00f;
    this->bAutoCalculateOrthoPlanes = true;
    this->AutoPlaneShift = 0.00f;
    this->bUpdateOrthoPlanes = false;
    this->bUseCameraHeightAsViewTarget = false;
    this->Overscan = 0.00f;
    this->TextureTarget = NULL;
    this->CompositeMode = SCCM_Overwrite;
    this->PostProcessBlendWeight = 1.00f;
    this->bOverride_CustomNearClippingPlane = false;
    this->CustomNearClippingPlane = 0.00f;
    this->bUseCustomProjectionMatrix = false;
    this->bUseFauxOrthoViewPos = false;
    this->bEnableOrthographicTiling = false;
    this->NumXTiles = 4;
    this->NumYTiles = 4;
    this->bEnableClipPlane = false;
    this->bRenderInMainRenderer = false;
    this->UnlitViewmode = ESceneCaptureUnlitViewmode::Capture;
    this->bCameraCutThisFrame = false;
    this->bEnableFirstPersonFieldOfView = false;
    this->bEnableFirstPersonScale = false;
    this->bConsiderUnrenderedOpaquePixelAsFullyTranslucent = false;
    this->bMainViewFamily = false;
    this->bMainViewResolution = false;
    this->bMainViewCamera = false;
    this->bInheritMainViewCameraPostProcessSettings = false;
    this->bIgnoreScreenPercentage = false;
}

void USceneCaptureComponent2D::RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject) {
}

void USceneCaptureComponent2D::CaptureScene() {
}

void USceneCaptureComponent2D::AddOrUpdateBlendable(TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight) {
}


