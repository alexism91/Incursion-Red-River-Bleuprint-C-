#include "WaterBodyComponent.h"

UWaterBodyComponent::UWaterBodyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetWaveMaskDepth = 2048.00f;
    this->MaxWaveHeightOffset = 0.00f;
    this->WaterMaterial = NULL;
    this->WaterHLODMaterial = NULL;
    this->WaterStaticMeshMaterial = NULL;
    this->UnderwaterPostProcessMaterial = NULL;
    this->WaterInfoMaterial = NULL;
    this->ShapeDilation = 4096.00f;
    this->CollisionHeightOffset = 0.00f;
    this->bAffectsLandscape = true;
    this->WaterBodyIndex = -1;
    this->WaterMeshOverride = NULL;
    this->bAlwaysGenerateWaterMeshTiles = false;
    this->OverlapMaterialPriority = 0;
    this->WaterSplineMetadata = NULL;
    this->WaterMID = NULL;
    this->WaterStaticMeshMID = NULL;
    this->UnderwaterPostProcessMID = NULL;
    this->WaterInfoMID = NULL;
    this->WaterNavAreaClass = NULL;
    this->FixedWaterDepth = 512.00f;
    this->bUseBakedSimForQueriesAndPhysics = true;
}

void UWaterBodyComponent::SetWaterZoneOverride(const TSoftObjectPtr<AWaterZone>& InWaterZoneOverride) {
}

void UWaterBodyComponent::SetWaterVelocityAtSplineInputKey(float InKey, float InVelocity) {
}

void UWaterBodyComponent::SetWaterStaticMeshMaterial(UMaterialInterface* InMaterial) {
}

void UWaterBodyComponent::SetWaterMaterial(UMaterialInterface* InMaterial) {
}

void UWaterBodyComponent::SetWaterInfoMaterial(UMaterialInterface* InMaterial) {
}

void UWaterBodyComponent::SetWaterAndUnderWaterPostProcessMaterial(UMaterialInterface* InWaterMaterial, UMaterialInterface* InUnderWaterPostProcessMaterial) {
}

void UWaterBodyComponent::SetUnderwaterPostProcessMaterial(UMaterialInterface* InMaterial) {
}

void UWaterBodyComponent::SetAudioIntensityAtSplineInputKey(float InKey, float InAudioIntensity) {
}

void UWaterBodyComponent::OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged, bool bUserTriggeredChanged) {
}

UWaterWavesBase* UWaterBodyComponent::GetWaterWaves() const {
    return NULL;
}

FVector UWaterBodyComponent::GetWaterVelocityVectorAtSplineInputKey(float InKey) const {
    return FVector{};
}

float UWaterBodyComponent::GetWaterVelocityAtSplineInputKey(float InKey) const {
    return 0.0f;
}

void UWaterBodyComponent::GetWaterSurfaceInfoAtLocation(const FVector& InLocation, FVector& OutWaterSurfaceLocation, FVector& OutWaterSurfaceNormal, FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth) const {
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterStaticMeshMaterialInstance() {
    return NULL;
}

UWaterSplineComponent* UWaterBodyComponent::GetWaterSpline() const {
    return NULL;
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterMaterialInstance() {
    return NULL;
}

UMaterialInterface* UWaterBodyComponent::GetWaterMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterLODMaterialInstance() {
    return NULL;
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetWaterInfoMaterialInstance() {
    return NULL;
}

AWaterBody* UWaterBodyComponent::GetWaterBodyActor() const {
    return NULL;
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetUnderwaterPostProcessMaterialInstance() {
    return NULL;
}

TArray<UPrimitiveComponent*> UWaterBodyComponent::GetStandardRenderableComponents() const {
    return TArray<UPrimitiveComponent*>();
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToOceanTransitionMaterialInstance() {
    return NULL;
}

UMaterialInterface* UWaterBodyComponent::GetRiverToOceanTransitionMaterial() const {
    return NULL;
}

UMaterialInstanceDynamic* UWaterBodyComponent::GetRiverToLakeTransitionMaterialInstance() {
    return NULL;
}

UMaterialInterface* UWaterBodyComponent::GetRiverToLakeTransitionMaterial() const {
    return NULL;
}

float UWaterBodyComponent::GetMaxWaveHeight() const {
    return 0.0f;
}

TArray<AWaterBodyIsland*> UWaterBodyComponent::GetIslands() const {
    return TArray<AWaterBodyIsland*>();
}

TArray<AWaterBodyExclusionVolume*> UWaterBodyComponent::GetExclusionVolumes() const {
    return TArray<AWaterBodyExclusionVolume*>();
}

TArray<UPrimitiveComponent*> UWaterBodyComponent::GetCollisionComponents(bool bInOnlyEnabledComponents) const {
    return TArray<UPrimitiveComponent*>();
}

float UWaterBodyComponent::GetAudioIntensityAtSplineInputKey(float InKey) const {
    return 0.0f;
}


