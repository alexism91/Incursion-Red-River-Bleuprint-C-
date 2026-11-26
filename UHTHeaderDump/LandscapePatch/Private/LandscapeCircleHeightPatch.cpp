#include "LandscapeCircleHeightPatch.h"

ULandscapeCircleHeightPatch::ULandscapeCircleHeightPatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Radius = 500.00f;
    this->Falloff = 500.00f;
    this->bEditVisibility = false;
    this->bExclusiveRadius = false;
}


