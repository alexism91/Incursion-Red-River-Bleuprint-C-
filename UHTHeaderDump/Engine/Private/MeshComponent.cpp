#include "MeshComponent.h"

UMeshComponent::UMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->bUseAsOccluder = true;
    this->CastShadow = true;
    this->OverlayMaterial = NULL;
    this->OverlayMaterialMaxDrawDistance = 0.00f;
    this->bEnableMaterialParameterCaching = false;
}

void UMeshComponent::SetVectorParameterValueOnMaterials(const FName ParameterName, const FVector ParameterValue) {
}

void UMeshComponent::SetScalarParameterValueOnMaterials(const FName ParameterName, const float ParameterValue) {
}

void UMeshComponent::SetOverlayMaterialMaxDrawDistance(float InMaxDrawDistance) {
}

void UMeshComponent::SetOverlayMaterial(UMaterialInterface* NewOverlayMaterial) {
}

void UMeshComponent::SetColorParameterValueOnMaterials(const FName ParameterName, const FLinearColor ParameterValue) {
}

void UMeshComponent::PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32 CinematicTextureGroups) {
}

bool UMeshComponent::PrestreamMeshLODs(float Seconds) {
    return false;
}

float UMeshComponent::GetOverlayMaterialMaxDrawDistance() const {
    return 0.0f;
}

UMaterialInterface* UMeshComponent::GetOverlayMaterial() const {
    return NULL;
}

TArray<UMaterialInterface*> UMeshComponent::GetMaterials() const {
    return TArray<UMaterialInterface*>();
}


