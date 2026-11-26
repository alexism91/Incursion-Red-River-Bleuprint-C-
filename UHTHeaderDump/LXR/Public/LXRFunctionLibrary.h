#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "DominantColor.h"
#include "EMannequinLimb.h"
#include "LightSourceData.h"
#include "LightSourcePassedData.h"
#include "QueryLXRDebugOptions.h"
#include "TargetLXRData.h"
#include "TraceTaskData.h"
#include "LXRFunctionLibrary.generated.h"

class AActor;
class ULXRSourceComponent;
class ULightComponent;
class UObject;

UCLASS(Blueprintable)
class LXR_API ULXRFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULXRFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor ToggleColorChannels(const FLinearColor& InColor, const FLinearColor& ToggleChannels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor RoundToNearestHalf(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor round(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor RemapColorRangeTo01(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    static void QueryLocationsLXR(const UObject* Querier, TSet<FLightSourcePassedData>& PassedData, FTargetLXRData& IlluminatedTargets, TArray<ULXRSourceComponent*> Lights, const TArray<FVector>& Points, const FQueryLXRDebugOptions& QueryLXRDebugOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLightSourceData MakeLightSourceData(ULightComponent* InComponent, float Multiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName LimbToSocketName(const UObject* WorldContextObject, EMannequinLimb InLimb);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPerceivedActorLit(const AActor* ActorToTest, const float IntensityThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDominantColor GetSecondDominantColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMinOfColorChannels(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMaxOfColorChannels(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLuxFromTask(const UObject* WorldContextObject, const FTraceTaskData& TraceTaskData, const FQueryLXRDebugOptions& QueryLXRDebugOptions, float LXRMultiplier, float MinLuxThreshold);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetLux(const UObject* WorldContextObject, const FTraceTaskData& TraceTaskData, const TSet<FLightSourcePassedData>& PassedData, FTargetLXRData& TargetLXRData, const FQueryLXRDebugOptions& QueryLXRDebugOptions, float LXRMultiplier, float MinLuxThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetLinearColorArrayAverage(const TArray<FLinearColor>& InColors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetInverseChannels(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDominantColor GetDominantColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    static TSet<FVector> GenerateSphereTraceTargets(const FVector& Center, float Radius, int32 Segments);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSet<FVector> GenerateGridTargets(const UObject* WorldContextObject, FVector Center, float Radius, float Density);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSet<FVector> GenerateCylinderTargets(const UObject* WorldContextObject, FVector Center, FVector Direction, int32 CylinderSegments, int32 CylinderRadius, int32 CylinderDistance, int32 DistancePerSegment);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSet<FVector> GenerateConeTraceTargets(const UObject* WorldContextObject, const FVector& Location, const FVector& Direction, int32 ConeAngle, int32 ConeSides, int32 ConeRadius, int32 ConeDistance, int32 DistancePerSegment);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSet<FVector> GenerateCircleTraceTargets(const UObject* WorldContextObject, const FVector& Center, const FVector& Forward, float Radius, int32 Segments);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TSet<FVector> FilterTargetsByTrace(const UObject* WorldContextObject, const FVector& FilterTraceStartLocation, const TSet<FVector>& TraceTargets, TArray<AActor*> ActorsToIgnore, TEnumAsByte<ECollisionChannel> TraceChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal_FDominantColor(const FDominantColor& FirstColor, const FDominantColor& SecondColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor DominantToLinearColor(const FDominantColor& InDominantColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugTargets(const UObject* WorldContextObject, TSet<FVector> Targets, float DebugDrawTime, FLinearColor DebugColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugLXR(const UObject* WorldContextObject, const FTargetLXRData& TargetsLXR, float DebugDrawTime, bool bDebugOnlyPassed, float MaxLux);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ColorRemappedRoundedHalfEqualColor(const FLinearColor& InColorOne, const FLinearColor& InColorTwo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ColorEqual_DominantColor(const FLinearColor& Color, const FDominantColor& DominantColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ColorApproximatelyEqualColor(const FLinearColor& InColorOne, const FLinearColor& InColorTwo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor ClampTo01Range(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckVisibility(const UObject* WorldContextObject, const FTraceTaskData& TraceTaskData, FLightSourcePassedData& PassedData, const FQueryLXRDebugOptions& QueryLXRDebugOptions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckIsLightRelevant(const UObject* WorldContextObject, const FTraceTaskData& TraceTaskData, FLightSourcePassedData& PassedData, const FQueryLXRDebugOptions& QueryLXRDebugOptions);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BP_GetRelevantLights(const UObject* WorldContextObject, const TArray<FVector>& TraceTargets, TSet<ULXRSourceComponent*>& RelevantLights);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BP_GetOctreeLights(const UObject* WorldContextObject, const FBox& Box, TSet<ULXRSourceComponent*>& Lights, bool bDebug);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BP_GetLightsInBox(const UObject* WorldContextObject, const FBox& Box, TSet<ULXRSourceComponent*>& RelevantLights);
    
};

