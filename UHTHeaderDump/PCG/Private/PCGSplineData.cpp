#include "PCGSplineData.h"

UPCGSplineData::UPCGSplineData() {
}

void UPCGSplineData::K2_Initialize(const TArray<FSplinePoint>& InSplinePoints, bool bInClosedLoop, const FTransform& InTransform, TArray<int64> InOptionalEntryKeys) {
}

void UPCGSplineData::Initialize(const USplineComponent* InSpline) {
}

TArray<FSplinePoint> UPCGSplineData::GetSplinePoints() const {
    return TArray<FSplinePoint>();
}

TArray<int64> UPCGSplineData::GetMetadataEntryKeysForSplinePoints() const {
    return TArray<int64>();
}


