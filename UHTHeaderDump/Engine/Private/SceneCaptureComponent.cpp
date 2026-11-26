#include "SceneCaptureComponent.h"

USceneCaptureComponent::USceneCaptureComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PrimitiveRenderMode = ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture;
    this->CaptureSource = SCS_SceneColorHDR;
    this->bCaptureEveryFrame = true;
    this->bCaptureOnMovement = true;
    this->bCaptureGpuNextRender = false;
    this->bDumpGpuNextRender = false;
    this->bExcludeFromSceneTextureExtents = false;
    this->bAlwaysPersistRenderingState = false;
    this->LODDistanceFactor = 1.00f;
    this->MaxViewDistanceOverride = -1.00f;
    this->CaptureSortPriority = 0;
    this->bUseRayTracingIfEnabled = false;
    this->CollectionTransform = NULL;
}

void USceneCaptureComponent::ShowOnlyComponent(UPrimitiveComponent* InComponent) {
}

void USceneCaptureComponent::ShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors) {
}

void USceneCaptureComponent::SetShowFlagSettings(const TArray<FEngineShowFlagsSetting>& InShowFlagSettings) {
}

void USceneCaptureComponent::SetCaptureSortPriority(int32 NewCaptureSortPriority) {
}

void USceneCaptureComponent::RemoveShowOnlyComponent(UPrimitiveComponent* InComponent) {
}

void USceneCaptureComponent::RemoveShowOnlyActorComponents(AActor* InActor, const bool bIncludeFromChildActors) {
}

void USceneCaptureComponent::HideComponent(UPrimitiveComponent* InComponent) {
}

void USceneCaptureComponent::HideActorComponents(AActor* InActor, const bool bIncludeFromChildActors) {
}

TArray<FEngineShowFlagsSetting> USceneCaptureComponent::GetShowFlagSettings() const {
    return TArray<FEngineShowFlagsSetting>();
}

void USceneCaptureComponent::ClearShowOnlyComponents() {
}

void USceneCaptureComponent::ClearHiddenComponents() {
}


