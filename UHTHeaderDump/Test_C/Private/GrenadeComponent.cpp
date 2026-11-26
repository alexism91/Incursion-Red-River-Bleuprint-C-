#include "GrenadeComponent.h"

UGrenadeComponent::UGrenadeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrenadeClass = NULL;
    this->ThrowSocketName = TEXT("ik_hand_gun");
}

void UGrenadeComponent::ThrowGrenade_Server_Implementation(FTransform SpawnTransform, FVector ThrowDirection, float ThrowSpeed, FVector HandWorldPos) {
}

void UGrenadeComponent::ThrowGrenade_Networked_Implementation(FGameplayTag ActionTag, float ThrowSpeed) {
}

void UGrenadeComponent::SetAimedThrowTarget(const FVector& TargetLocation, bool bFavorHighArc, float LobPitch) {
}

void UGrenadeComponent::PredictGrenadeTrajectory(const FVector& StartLocation, const FVector& ThrowDirection, float ThrowSpeed, TArray<FVector>& OutPathPositions, FVector& FinalLocation, int32 MaxBounces) const {
}


bool UGrenadeComponent::HasAimedThrowTarget() const {
    return false;
}

UGrenadeDataAsset* UGrenadeComponent::GetGrenadeDataAsset() {
    return NULL;
}

void UGrenadeComponent::ClearAimedThrowTarget() {
}


