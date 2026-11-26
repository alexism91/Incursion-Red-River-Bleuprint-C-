#include "ClusterUnionComponent.h"
#include "Net/UnrealNetwork.h"

UClusterUnionComponent::UClusterUnionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableDamageFromCollision = true;
    this->GravityGroupIndexOverride = -1;
}

void UClusterUnionComponent::SetIsAnchored(bool bIsAnchored) {
}

void UClusterUnionComponent::SetEnableDamageFromCollision(bool bValue) {
}

void UClusterUnionComponent::RemoveComponentFromCluster(UPrimitiveComponent* InComponent) {
}

void UClusterUnionComponent::RemoveComponentBonesFromCluster(UPrimitiveComponent* InComponent, const TArray<int32>& BoneIds) {
}

void UClusterUnionComponent::OnRep_RigidState() {
}

bool UClusterUnionComponent::IsComponentAdded(UPrimitiveComponent* Component) {
    return false;
}

bool UClusterUnionComponent::IsAuthority() const {
    return false;
}

void UClusterUnionComponent::HandleComponentPhysicsStateChangePostAddIntoClusterUnion(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange) {
}

void UClusterUnionComponent::HandleComponentPhysicsStateChange(UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange) {
}

TArray<UPrimitiveComponent*> UClusterUnionComponent::GetPrimitiveComponents() {
    return TArray<UPrimitiveComponent*>();
}

TArray<AActor*> UClusterUnionComponent::GetActors() {
    return TArray<AActor*>();
}

void UClusterUnionComponent::ForceSetChildToParent(UPrimitiveComponent* InComponent, const TArray<int32>& BoneIds, const TArray<FTransform>& ChildToParent) {
}

void UClusterUnionComponent::AddComponentToCluster(UPrimitiveComponent* InComponent, const TArray<int32>& BoneIds, bool bRebuildGeometry) {
}

void UClusterUnionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UClusterUnionComponent, ReplicatedRigidState);
}


