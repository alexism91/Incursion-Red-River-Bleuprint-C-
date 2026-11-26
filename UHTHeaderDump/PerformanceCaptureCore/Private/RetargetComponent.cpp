#include "RetargetComponent.h"

URetargetComponent::URetargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceOtherMeshesToFollowControlledMesh = true;
    this->RetargetAsset = NULL;
}

void URetargetComponent::SetSourcePerformerMesh(USkeletalMeshComponent* InPerformerMesh) {
}

void URetargetComponent::SetRetargetAsset(UIKRetargeter* InRetargetAsset) {
}

void URetargetComponent::SetForceMeshesFollowLeader(bool bInBool) {
}

void URetargetComponent::SetCustomRetargetProfile(FRetargetProfile InProfile) {
}

void URetargetComponent::SetControlledMesh(USkeletalMeshComponent* InControlledMesh) {
}

FRetargetProfile URetargetComponent::GetCustomRetargetProfile() {
    return FRetargetProfile{};
}


