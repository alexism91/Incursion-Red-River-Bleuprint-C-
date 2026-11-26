#include "PCGOctreeQueries.h"

UPCGOctreeQueries::UPCGOctreeQueries() {
}

TArray<FPCGPoint> UPCGOctreeQueries::GetPointsInsideSphere(const UPCGPointData* InPointData, const FVector& InCenter, const double InRadius) {
    return TArray<FPCGPoint>();
}

TArray<FPCGPoint> UPCGOctreeQueries::GetPointsInsideBounds(const UPCGPointData* InPointData, const FBox& InBounds) {
    return TArray<FPCGPoint>();
}

void UPCGOctreeQueries::GetFarthestPointFromOtherPoint(const UPCGPointData* InPointData, const int32 InPointIndex, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance) {
}

void UPCGOctreeQueries::GetFarthestPoint(const UPCGPointData* InPointData, const FVector& InCenter, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance) {
}

void UPCGOctreeQueries::GetClosestPointFromOtherPoint(const UPCGPointData* InPointData, const int32 InPointIndex, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance) {
}

void UPCGOctreeQueries::GetClosestPoint(const UPCGPointData* InPointData, const FVector& InCenter, const bool bInDiscardCenter, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance) {
}


