#include "PCGPointData.h"

UPCGPointData::UPCGPointData() {
}

void UPCGPointData::SetPoints(const TArray<FPCGPoint>& InPoints) {
}

bool UPCGPointData::IsEmpty() const {
    return false;
}

TArray<FPCGPoint> UPCGPointData::GetPointsCopy() const {
    return TArray<FPCGPoint>();
}

TArray<FPCGPoint> UPCGPointData::GetPoints() const {
    return TArray<FPCGPoint>();
}

FPCGPoint UPCGPointData::GetPoint(int32 Index) const {
    return FPCGPoint{};
}

int32 UPCGPointData::GetNumPoints() const {
    return 0;
}


