#include "InstancedSkinnedMeshComponent.h"

UInstancedSkinnedMeshComponent::UInstancedSkinnedMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NumCustomDataFloats = 0;
    this->AnimationMinScreenSize = 0.00f;
    this->InstanceMinDrawDistance = 0;
    this->InstanceStartCullDistance = 0;
    this->InstanceEndCullDistance = 0;
    this->bInheritPerInstanceData = false;
    this->bIsInstanceDataGPUOnly = false;
    this->NumInstancesGPUOnly = 0;
}

void UInstancedSkinnedMeshComponent::SetNumCustomDataFloats(int32 InNumCustomDataFloats) {
}

bool UInstancedSkinnedMeshComponent::SetCustomDataValue(FPrimitiveInstanceId InstanceId, int32 CustomDataIndex, float CustomDataValue) {
    return false;
}

void UInstancedSkinnedMeshComponent::RemoveInstances(const TArray<FPrimitiveInstanceId>& InstancesToRemove) {
}

bool UInstancedSkinnedMeshComponent::RemoveInstance(FPrimitiveInstanceId InstanceId) {
    return false;
}

void UInstancedSkinnedMeshComponent::OptimizeInstanceData(bool bShouldRetainIdMap) {
}

bool UInstancedSkinnedMeshComponent::GetInstanceTransform(FPrimitiveInstanceId InstanceId, FTransform& OutInstanceTransform, bool bWorldSpace) const {
    return false;
}

void UInstancedSkinnedMeshComponent::ClearInstances() {
}

TArray<FPrimitiveInstanceId> UInstancedSkinnedMeshComponent::AddInstances(const TArray<FTransform>& Transforms, const TArray<int32>& BankIndices, bool bShouldReturnIds, bool bWorldSpace) {
    return TArray<FPrimitiveInstanceId>();
}

FPrimitiveInstanceId UInstancedSkinnedMeshComponent::AddInstance(const FTransform& InstanceTransform, int32 BankIndex, bool bWorldSpace) {
    return FPrimitiveInstanceId{};
}

int32 UInstancedSkinnedMeshComponent::AddAnimBankItem(const FAnimBankItem& BankItem) {
    return 0;
}


