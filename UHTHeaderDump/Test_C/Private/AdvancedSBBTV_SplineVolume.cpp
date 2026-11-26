#include "AdvancedSBBTV_SplineVolume.h"

AAdvancedSBBTV_SplineVolume::AAdvancedSBBTV_SplineVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SampleStepCm = 200.00f;
}

void AAdvancedSBBTV_SplineVolume::RebuildCachedPolygon() {
}

bool AAdvancedSBBTV_SplineVolume::IsPointInsideVolume(const FVector& Point) const {
    return false;
}


