#include "CapturePerformer.h"

ACapturePerformer::ACapturePerformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bForceAllMeshesToFollowLeader = true;
    this->bEvaluateAnimation = true;
}

void ACapturePerformer::SetMocapMesh(USkeletalMesh* MocapMesh) {
}

void ACapturePerformer::SetLiveLinkSubject(FLiveLinkSubjectName Subject) {
}

void ACapturePerformer::SetEvaluateLiveLinkData(bool bEvaluateLinkLink) {
}

FLiveLinkSubjectName ACapturePerformer::GetLiveLinkSubject() const {
    return FLiveLinkSubjectName{};
}

bool ACapturePerformer::GetEvaluateLiveLinkData() {
    return false;
}


