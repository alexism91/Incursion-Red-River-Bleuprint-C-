#include "ChaosClothComponent.h"

UChaosClothComponent::UChaosClothComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlendWeight = 1.00f;
    this->ClothGeometryScale = 1.00f;
    this->bUseAttachedParentAsPoseComponent = true;
    this->bWaitForParallelTask = false;
    this->bEnableSimulation = true;
    this->bSuspendSimulation = false;
    this->bBindToLeaderComponent = false;
    this->bTeleport = false;
    this->bReset = true;
    this->bCollideWithEnvironment = false;
    this->TeleportDistanceThreshold = 300.00f;
    this->TeleportRotationThreshold = 0.00f;
}

void UChaosClothComponent::SuspendSimulation() {
}

void UChaosClothComponent::SetTeleportRotationThreshold(float Threshold) {
}

void UChaosClothComponent::SetTeleportDistanceThreshold(float Threshold) {
}

void UChaosClothComponent::SetSimulateInEditor(const bool bNewSimulateState) {
}

void UChaosClothComponent::SetEnableSimulation(bool bEnable) {
}

void UChaosClothComponent::SetCollideWithEnvironment(bool bCollide) {
}

void UChaosClothComponent::SetClothAsset(UChaosClothAsset* InClothAsset) {
}

void UChaosClothComponent::SetAsset(UChaosClothAssetBase* InAsset) {
}

void UChaosClothComponent::ResumeSimulation() {
}

void UChaosClothComponent::ResetTeleportMode() {
}

void UChaosClothComponent::ResetConfigProperties() {
}

void UChaosClothComponent::ResetCollisionSources() {
}

void UChaosClothComponent::RemoveCollisionSources(const USkinnedMeshComponent* SourceComponent) {
}

void UChaosClothComponent::RemoveCollisionSource(const USkinnedMeshComponent* SourceComponent, const UPhysicsAsset* SourcePhysicsAsset) {
}

void UChaosClothComponent::RecreateClothSimulationProxy() {
}

bool UChaosClothComponent::IsSimulationSuspended() const {
    return false;
}

bool UChaosClothComponent::IsSimulationEnabled() const {
    return false;
}

float UChaosClothComponent::GetTeleportRotationThreshold() const {
    return 0.0f;
}

float UChaosClothComponent::GetTeleportDistanceThreshold() const {
    return 0.0f;
}

bool UChaosClothComponent::GetCollideWithEnvironment() const {
    return false;
}

UChaosClothAssetInteractor* UChaosClothComponent::GetClothOutfitInteractor(int32 ModelIndex, const FName ClothSimulationModelName) {
    return NULL;
}

UChaosClothAsset* UChaosClothComponent::GetClothAsset() const {
    return NULL;
}

UChaosClothAssetBase* UChaosClothComponent::GetAsset() const {
    return NULL;
}

void UChaosClothComponent::ForceNextUpdateTeleportAndReset() {
}

void UChaosClothComponent::ForceNextUpdateTeleport() {
}

void UChaosClothComponent::AddCollisionSource(USkinnedMeshComponent* SourceComponent, const UPhysicsAsset* SourcePhysicsAsset, bool bUseSphylsOnly) {
}


