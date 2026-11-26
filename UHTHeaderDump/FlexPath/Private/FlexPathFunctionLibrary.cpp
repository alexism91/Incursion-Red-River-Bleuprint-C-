#include "FlexPathFunctionLibrary.h"

UFlexPathFunctionLibrary::UFlexPathFunctionLibrary() {
}

void UFlexPathFunctionLibrary::TogglePathSmoothing(UObject* WorldContextObject, const AAIController* Controller, bool bEnable) {
}

TArray<FVector> UFlexPathFunctionLibrary::SmoothNavPath(UObject* WorldContextObject, const TArray<FVector>& PathPoints) {
    return TArray<FVector>();
}

UNavigationPath* UFlexPathFunctionLibrary::SmoothNavigationPath(UObject* WorldContextObject, UNavigationPath* NavigationPath, const FPathSmoothingSettings& SmoothingSettings, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor SmoothedPathColor, float DrawTime) {
    return NULL;
}

void UFlexPathFunctionLibrary::SetFlexPathSettings(UObject* WorldContextObject, const AAIController* Controller, const FPathSmoothingSettings& SmoothingSettings, const FPathFollowingSettings& FollowingSettings) {
}

void UFlexPathFunctionLibrary::SetFlexPathEnabled(UObject* WorldContextObject, const AAIController* Controller, bool bEnable) {
}

bool UFlexPathFunctionLibrary::IsPathSmoothingEnabled(UObject* WorldContextObject, const AAIController* Controller) {
    return false;
}

bool UFlexPathFunctionLibrary::IsFlexPathEnabled(UObject* WorldContextObject, const AAIController* Controller) {
    return false;
}

void UFlexPathFunctionLibrary::DrawNavigationPath(UObject* WorldContextObject, UNavigationPath* NavigationPath, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor PathColor, float DrawTime) {
}


