#include "LXRFluxLightDetectorComponent.h"

ULXRFluxLightDetectorComponent::ULXRFluxLightDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCaptureIndirect = true;
    this->bCaptureDirect = true;
    this->bUseLuminanceThreshold = false;
    this->LuminanceThreshold = 0.20f;
    this->SmoothMethod = TargetValueOverTime;
    this->TargetValueSmoothSpeed = 50.00f;
    this->HistoryCount = 10;
    this->RequiredStableFrames = 3;
    this->DeltaThreshold = 0.10f;
    this->bWhitelistAllStaticMeshActors = false;
    this->CaptureMeshScale = 1.00f;
    this->TopCaptureWeight = 1.00f;
    this->BotCaptureWeight = 1.00f;
    this->CaptureRate = 1;
    this->AutoExposureBias = 8.00f;
    this->RenderTextureSize = 32;
    this->TopRT = NULL;
    this->BotRT = NULL;
    this->Luminance = 0.00f;
    this->TopLuminance = 0.00f;
    this->BotLuminance = 0.00f;
    this->TopSceneCaptureComponent = NULL;
    this->BotSceneCaptureComponent = NULL;
    this->ChildActorComponent = NULL;
    this->IndirectMeshComponent = NULL;
    this->IndirectMatInst = NULL;
}

void ULXRFluxLightDetectorComponent::RemoveRenderOnlyActors(TArray<AActor*> InActors) {
}

void ULXRFluxLightDetectorComponent::RemoveRenderOnlyActor(AActor* InActor) {
}

UTextureRenderTarget2D* ULXRFluxLightDetectorComponent::GetTopTarget() const {
    return NULL;
}

USceneCaptureComponent2D* ULXRFluxLightDetectorComponent::GetTopSceneCapture() const {
    return NULL;
}

UTextureRenderTarget2D* ULXRFluxLightDetectorComponent::GetBotTarget() const {
    return NULL;
}

USceneCaptureComponent2D* ULXRFluxLightDetectorComponent::GetBotSceneCapture() const {
    return NULL;
}

void ULXRFluxLightDetectorComponent::AddRenderOnlyActors(TArray<AActor*> InActors) {
}

void ULXRFluxLightDetectorComponent::AddRenderOnlyActor(AActor* InActor) {
}


