#include "IRRSpawnSourceBase.h"

AIRRSpawnSourceBase::AIRRSpawnSourceBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CandidateGenerator = NULL;
    this->NavPreCacheRadius = 0.00f;
}

void AIRRSpawnSourceBase::GenerateCandidates(TArray<FTransform>& OutCandidates) const {
}


