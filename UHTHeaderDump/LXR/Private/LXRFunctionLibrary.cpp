#include "LXRFunctionLibrary.h"

ULXRFunctionLibrary::ULXRFunctionLibrary() {
}

FLinearColor ULXRFunctionLibrary::ToggleColorChannels(const FLinearColor& InColor, const FLinearColor& ToggleChannels) {
    return FLinearColor{};
}

FLinearColor ULXRFunctionLibrary::RoundToNearestHalf(const FLinearColor& InColor) {
    return FLinearColor{};
}

FLinearColor ULXRFunctionLibrary::round(const FLinearColor& InColor) {
    return FLinearColor{};
}

FLinearColor ULXRFunctionLibrary::RemapColorRangeTo01(const FLinearColor& InColor) {
    return FLinearColor{};
}

void ULXRFunctionLibrary::QueryLocationsLXR(const UObject* Querier, TSet<FLightSourcePassedData>& PassedData, FTargetLXRData& IlluminatedTargets, TArray<ULXRSourceComponent*> Lights, const TArray<FVector>& Points, const FQueryLXRDebugOptions& QueryLXRDebugOptions) {
}

FLightSourceData ULXRFunctionLibrary::MakeLightSourceData(ULightComponent* InComponent, float Multiplier) {
    return FLightSourceData{};
}

FName ULXRFunctionLibrary::LimbToSocketName(const UObject* WorldContextObject, EMannequinLimb InLimb) {
    return NAME_None;
}

bool ULXRFunctionLibrary::IsPerceivedActorLit(const AActor* ActorToTest, const float IntensityThreshold) {
    return false;
}

FDominantColor ULXRFunctionLibrary::GetSecondDominantColor(const FLinearColor& InColor) {
    return FDominantColor{};
}

float ULXRFunctionLibrary::GetMinOfColorChannels(const FLinearColor& InColor) {
    return 0.0f;
}

float ULXRFunctionLibrary::GetMaxOfColorChannels(const FLinearColor& InColor) {
    return 0.0f;
}

bool ULXRFunctionLibrary::GetLuxFromTask(const UObject* WorldContextObject, const FTraceTaskData& TraceTaskData, const FQueryLXRDebugOptions& QueryLXRDebugOptions, float LXRMultiplier, float MinLuxThreshold) {
    return false;
}

bool ULXRFunctionLibrary::GetLux(const UObject* WorldContextObject, const FTraceTaskData& TraceTaskData, const TSet<FLightSourcePassedData>& PassedData, FTargetLXRData& TargetLXRData, const FQueryLXRDebugOptions& QueryLXRDebugOptions, float LXRMultiplier, float MinLuxThreshold) {
    return false;
}

FLinearColor ULXRFunctionLibrary::GetLinearColorArrayAverage(const TArray<FLinearColor>& InColors) {
    return FLinearColor{};
}

FLinearColor ULXRFunctionLibrary::GetInverseChannels(const FLinearColor& InColor) {
    return FLinearColor{};
}

FDominantColor ULXRFunctionLibrary::GetDominantColor(const FLinearColor& InColor) {
    return FDominantColor{};
}

TSet<FVector> ULXRFunctionLibrary::GenerateSphereTraceTargets(const FVector& Center, float Radius, int32 Segments) {
    return TSet<FVector>();
}

TSet<FVector> ULXRFunctionLibrary::GenerateGridTargets(const UObject* WorldContextObject, FVector Center, float Radius, float Density) {
    return TSet<FVector>();
}

TSet<FVector> ULXRFunctionLibrary::GenerateCylinderTargets(const UObject* WorldContextObject, FVector Center, FVector Direction, int32 CylinderSegments, int32 CylinderRadius, int32 CylinderDistance, int32 DistancePerSegment) {
    return TSet<FVector>();
}

TSet<FVector> ULXRFunctionLibrary::GenerateConeTraceTargets(const UObject* WorldContextObject, const FVector& Location, const FVector& Direction, int32 ConeAngle, int32 ConeSides, int32 ConeRadius, int32 ConeDistance, int32 DistancePerSegment) {
    return TSet<FVector>();
}

TSet<FVector> ULXRFunctionLibrary::GenerateCircleTraceTargets(const UObject* WorldContextObject, const FVector& Center, const FVector& Forward, float Radius, int32 Segments) {
    return TSet<FVector>();
}

TSet<FVector> ULXRFunctionLibrary::FilterTargetsByTrace(const UObject* WorldContextObject, const FVector& FilterTraceStartLocation, const TSet<FVector>& TraceTargets, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ECollisionChannel> TraceChannel) {
    return TSet<FVector>();
}

bool ULXRFunctionLibrary::Equal_FDominantColor(const FDominantColor& FirstColor, const FDominantColor& SecondColor) {
    return false;
}

FLinearColor ULXRFunctionLibrary::DominantToLinearColor(const FDominantColor& InDominantColor) {
    return FLinearColor{};
}

void ULXRFunctionLibrary::DebugTargets(const UObject* WorldContextObject, TSet<FVector> Targets, float DebugDrawTime, FLinearColor DebugColor) {
}

void ULXRFunctionLibrary::DebugLXR(const UObject* WorldContextObject, const FTargetLXRData& TargetsLXR, float DebugDrawTime, bool bDebugOnlyPassed, float MaxLux) {
}

bool ULXRFunctionLibrary::ColorRemappedRoundedHalfEqualColor(const FLinearColor& InColorOne, const FLinearColor& InColorTwo) {
    return false;
}

bool ULXRFunctionLibrary::ColorEqual_DominantColor(const FLinearColor& Color, const FDominantColor& DominantColor) {
    return false;
}

bool ULXRFunctionLibrary::ColorApproximatelyEqualColor(const FLinearColor& InColorOne, const FLinearColor& InColorTwo) {
    return false;
}

FLinearColor ULXRFunctionLibrary::ClampTo01Range(const FLinearColor& InColor) {
    return FLinearColor{};
}

bool ULXRFunctionLibrary::CheckVisibility(const UObject* WorldContextObject, const FTraceTaskData& TraceTaskData, FLightSourcePassedData& PassedData, const FQueryLXRDebugOptions& QueryLXRDebugOptions) {
    return false;
}

bool ULXRFunctionLibrary::CheckIsLightRelevant(const UObject* WorldContextObject, const FTraceTaskData& TraceTaskData, FLightSourcePassedData& PassedData, const FQueryLXRDebugOptions& QueryLXRDebugOptions) {
    return false;
}

void ULXRFunctionLibrary::BP_GetRelevantLights(const UObject* WorldContextObject, const TArray<FVector>& TraceTargets, TSet<ULXRSourceComponent*>& RelevantLights) {
}

void ULXRFunctionLibrary::BP_GetOctreeLights(const UObject* WorldContextObject, const FBox& Box, TSet<ULXRSourceComponent*>& Lights, bool bDebug) {
}

void ULXRFunctionLibrary::BP_GetLightsInBox(const UObject* WorldContextObject, const FBox& Box, TSet<ULXRSourceComponent*>& RelevantLights) {
}


