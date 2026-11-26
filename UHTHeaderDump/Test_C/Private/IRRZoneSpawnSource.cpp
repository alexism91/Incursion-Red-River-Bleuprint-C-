#include "IRRZoneSpawnSource.h"
#include "IRRSpawnGen_Bounds.h"

AIRRZoneSpawnSource::AIRRZoneSpawnSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CandidateGenerator = CreateDefaultSubobject<UIRRSpawnGen_Bounds>(TEXT("BoundsGenerator"));
    this->ExecPoint = NULL;
}


