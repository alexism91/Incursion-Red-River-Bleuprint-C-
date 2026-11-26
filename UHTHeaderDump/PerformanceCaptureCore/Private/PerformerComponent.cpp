#include "PerformerComponent.h"

UPerformerComponent::UPerformerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEvaluateAnimation = true;
    this->bForceOtherMeshesToFollowControlledMesh = true;
}

void UPerformerComponent::SetLiveLinkSubject(FLiveLinkSubjectName Subject) {
}

void UPerformerComponent::SetForceMeshesFollowLeader(bool bInBool) {
}

void UPerformerComponent::SetEvaluateLiveLinkData(bool bEvaluateLinkLink) {
}

bool UPerformerComponent::SetControlledMesh(USkeletalMeshComponent* SkeletalMesh) {
    return false;
}

FLiveLinkSubjectName UPerformerComponent::GetLiveLinkSubject() const {
    return FLiveLinkSubjectName{};
}

bool UPerformerComponent::GetEvaluateLiveLinkData() const {
    return false;
}


