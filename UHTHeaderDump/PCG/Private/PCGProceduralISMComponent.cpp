#include "PCGProceduralISMComponent.h"

UPCGProceduralISMComponent::UPCGProceduralISMComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bIsEditorOnly = true;
    this->bEnableAutoLODGeneration = false;
    this->bAffectDynamicIndirectLighting = false;
    this->bAffectDistanceFieldLighting = false;
    this->bEnableVertexColorMeshPainting = false;
    this->NumInstances = 0;
    this->NumCustomDataFloats = 0;
    this->InstanceMinDrawDistance = 0;
    this->InstanceStartCullDistance = 0;
    this->InstanceEndCullDistance = 0;
}

void UPCGProceduralISMComponent::SetNumInstances(int32 InNumInstances) {
}

void UPCGProceduralISMComponent::SetNumCustomDataFloats(int32 InNumCustomDataFloats) {
}

void UPCGProceduralISMComponent::SetMinDrawDistance(int32 InMinDrawDistance) {
}

void UPCGProceduralISMComponent::SetLocalBounds(const FBox& InWorldBounds) {
}

void UPCGProceduralISMComponent::SetCullDistances(int32 InStartCullDistance, int32 InEndCullDistance) {
}

void UPCGProceduralISMComponent::SetBounds(const FBox& InWorldBounds) {
}

int32 UPCGProceduralISMComponent::GetNumInstances() const {
    return 0;
}

int32 UPCGProceduralISMComponent::GetNumCustomDataFloats() const {
    return 0;
}

void UPCGProceduralISMComponent::GetMinDrawDistance(int32& OutMinDrawDistance) const {
}

void UPCGProceduralISMComponent::GetCullDistances(int32& OutStartCullDistance, int32& OutEndCullDistance) const {
}

void UPCGProceduralISMComponent::GetBounds(FBox& OutWorldBounds) {
}

void UPCGProceduralISMComponent::ClearInstances() {
}


