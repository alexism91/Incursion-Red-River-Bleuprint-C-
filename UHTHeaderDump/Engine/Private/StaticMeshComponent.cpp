#include "StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

UStaticMeshComponent::UStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bBoundsChangeTriggersStreamingDataRebuild = true;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->ForcedLodModel = 0;
    this->MinLOD = 0;
    this->SubDivisionStepSize = 32;
    this->StaticMesh = NULL;
    this->WorldPositionOffsetDisableDistance = 0;
    this->bForceNaniteForMasked = false;
    this->bDisallowNanite = false;
    this->bForceDisableNanite = false;
    this->bEvaluateWorldPositionOffset = true;
    this->bWorldPositionOffsetWritesVelocity = true;
    this->bEvaluateWorldPositionOffsetInRayTracing = false;
    this->bOverrideWireframeColor = false;
    this->bOverrideMinLOD = false;
    this->bOverrideNavigationExport = false;
    this->bForceNavigationObstacle = true;
    this->bDisallowMeshPaintPerInstance = false;
    this->bIgnoreInstanceForTextureStreaming = false;
    this->bOverrideLightMapRes = false;
    this->bCastDistanceFieldIndirectShadow = false;
    this->bOverrideDistanceFieldSelfShadowBias = false;
    this->bUseSubDivisions = true;
    this->bUseDefaultCollision = false;
    this->bSortTriangles = false;
    this->bReverseCulling = false;
    this->bEnableVertexColorMeshPainting = true;
    this->bEnableTextureColorMeshPainting = true;
    this->bOverrideMeshPaintTextureCoordinateIndex = false;
    this->bOverrideMeshPaintTextureResolution = false;
    this->OverriddenMeshPaintTextureCoordinateIndex = 0;
    this->OverriddenMeshPaintTextureResolution = 0;
    this->OverriddenLightMapRes = 64;
    this->MeshPaintTextureCooked = NULL;
    this->MeshPaintTextureOverride = NULL;
    this->MaterialCacheTexture = NULL;
    this->DistanceFieldIndirectShadowMinVisibility = 0.10f;
    this->DistanceFieldSelfShadowBias = 0.00f;
    this->StreamingDistanceMultiplier = 1.00f;
    this->NanitePixelProgrammableDistance = 0.00f;
}

void UStaticMeshComponent::UpdateInitialEvaluateWorldPositionOffset() {
}

void UStaticMeshComponent::SetWorldPositionOffsetDisableDistance(int32 NewValue) {
}

bool UStaticMeshComponent::SetStaticMesh(UStaticMesh* NewMesh) {
    return false;
}

void UStaticMeshComponent::SetReverseCulling(bool ReverseCulling) {
}

void UStaticMeshComponent::SetForcedLodModel(int32 NewForcedLodModel) {
}

void UStaticMeshComponent::SetForceDisableNanite(bool bInForceDisableNanite) {
}

void UStaticMeshComponent::SetEvaluateWorldPositionOffsetInRayTracing(bool NewValue) {
}

void UStaticMeshComponent::SetEvaluateWorldPositionOffset(bool NewValue) {
}

void UStaticMeshComponent::SetDistanceFieldSelfShadowBias(float NewValue) {
}

void UStaticMeshComponent::OnRep_StaticMesh(UStaticMesh* OldStaticMesh) {
}

void UStaticMeshComponent::GetLocalBounds(FVector& Min, FVector& Max) const {
}

bool UStaticMeshComponent::GetInitialEvaluateWorldPositionOffset() {
    return false;
}

void UStaticMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UStaticMeshComponent, StaticMesh);
}


