#include "IRRAIFoliageTracker.h"
#include "Templates/SubclassOf.h"

UIRRAIFoliageTracker::UIRRAIFoliageTracker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InFrontDotThreshold = 0.10f;
    this->InsideBushDistance = 75.00f;
    this->bDebug = false;
    this->Radius = 2500.00f;
    this->NavSys = NULL;
    this->NavTrackerComponent = NULL;
    this->CachedPawn = NULL;
}

bool UIRRAIFoliageTracker::IsInsideFoliageArea(const FVector& InProjectionExtent, const TSubclassOf<UNavigationQueryFilter>& Filter) const {
    return false;
}

bool UIRRAIFoliageTracker::IsInsideBush() const {
    return false;
}

bool UIRRAIFoliageTracker::GetLocationsWithinRadiusAroundOwner(const float InRadius, TArray<FVector>& OutLocations) const {
    return false;
}

TArray<FIRRAIFoliageData> UIRRAIFoliageTracker::GetAllFoliageData() const {
    return TArray<FIRRAIFoliageData>();
}

float UIRRAIFoliageTracker::ClosestBushDistanceSqr() const {
    return 0.0f;
}


