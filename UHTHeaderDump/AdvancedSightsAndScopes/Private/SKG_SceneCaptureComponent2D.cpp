#include "SKG_SceneCaptureComponent2D.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESceneCapturePrimitiveRenderMode -FallbackName=ESceneCapturePrimitiveRenderMode

USKG_SceneCaptureComponent2D::USKG_SceneCaptureComponent2D(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives;
    this->CaptureSource = SCS_SceneColorHDRNoAlpha;
    this->bCaptureEveryFrame = false;
    this->bCaptureOnMovement = false;
    this->bAlwaysPersistRenderingState = true;
    this->TurretAdjustmentType = ESKGScopeAdjustment::MRAD;
    this->RenderTargetMaterialVarName = TEXT("RenderTarget");
    this->ScopeComponentTag = TEXT("SKG");
    this->MilliradianAdjustment = 0.01f;
    this->MOAAdjustment = 0.00f;
}

void USKG_SceneCaptureComponent2D::ZoomOut() {
}

void USKG_SceneCaptureComponent2D::ZoomIn() {
}

void USKG_SceneCaptureComponent2D::StopCapture() {
}

void USKG_SceneCaptureComponent2D::StartCapture() {
}

void USKG_SceneCaptureComponent2D::SetReticle(uint8 Index) {
}

void USKG_SceneCaptureComponent2D::SetOwningMesh(UMeshComponent* Mesh) {
}

void USKG_SceneCaptureComponent2D::SetNewZeroWindage() {
}

void USKG_SceneCaptureComponent2D::SetNewZeroElevation() {
}

void USKG_SceneCaptureComponent2D::ReturnToZeroWindage() {
}

void USKG_SceneCaptureComponent2D::ReturnToZeroElevation() {
}

FVector2D USKG_SceneCaptureComponent2D::PointOfImpactUp(uint8 Clicks) {
    return FVector2D{};
}

FVector2D USKG_SceneCaptureComponent2D::PointOfImpactRight(uint8 Clicks) {
    return FVector2D{};
}

FVector2D USKG_SceneCaptureComponent2D::PointOfImpactLeft(uint8 Clicks) {
    return FVector2D{};
}

FVector2D USKG_SceneCaptureComponent2D::PointOfImpactDown(uint8 Clicks) {
    return FVector2D{};
}

FSKGSightZero USKG_SceneCaptureComponent2D::GetSightZero() const {
    return FSKGSightZero{};
}

float USKG_SceneCaptureComponent2D::GetMagnificationSensitivity() const {
    return 0.0f;
}

float USKG_SceneCaptureComponent2D::GetMagnification() const {
    return 0.0f;
}

void USKG_SceneCaptureComponent2D::CycleReticle() {
}


