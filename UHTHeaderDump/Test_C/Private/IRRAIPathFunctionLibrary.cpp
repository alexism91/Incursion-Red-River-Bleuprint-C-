#include "IRRAIPathFunctionLibrary.h"

UIRRAIPathFunctionLibrary::UIRRAIPathFunctionLibrary() {
}

bool UIRRAIPathFunctionLibrary::GetVisiblePolyCentersToLocation(UObject* WorldContext, const FVector& TargetLocation, TArray<FVector>& OutVisibleVerts, float SearchRadius, FVector TargetProjectionExtent, float AlwaysSucceedHitDist) {
    return false;
}

bool UIRRAIPathFunctionLibrary::GetVisiblePolyCentersAndVertsToLocation(UObject* WorldContext, const FVector& TargetLocation, TArray<FVector>& OutVisibleVerts, float SearchRadius, FVector TargetProjectionExtent, float AlwaysSucceedHitDist) {
    return false;
}

bool UIRRAIPathFunctionLibrary::GetVisibleNavVerticesToLocation(UObject* WorldContext, const FVector& TargetLocation, TArray<FVector>& OutVisibleVerts, float SearchRadius, FVector TargetProjectionExtent, float AlwaysSucceedHitDist) {
    return false;
}

bool UIRRAIPathFunctionLibrary::GetCurrentPathData(const UPathFollowingComponent* PathComp, FIRRAIPathDirectionData& OutData, TArray<FVector>& OutCorners) {
    return false;
}

bool UIRRAIPathFunctionLibrary::GetCurrentPathCurrentCornerData(const UPathFollowingComponent* PathComp, FIRRAIPathDirectionData& OutData) {
    return false;
}


