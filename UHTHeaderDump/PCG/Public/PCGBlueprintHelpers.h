#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PCGContext.h"
#include "PCGLandscapeLayerWeight.h"
#include "PCGPoint.h"
#include "PCGBlueprintHelpers.generated.h"

class AActor;
class UObject;
class UPCGComponent;
class UPCGData;
class UPCGSettings;
class UPCGSpatialData;

UCLASS(Blueprintable, MinimalAPI)
class UPCGBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGBlueprintHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetSeedFromPosition(UPARAM(Ref) FPCGPoint& InPoint);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocalCenter(UPARAM(Ref) FPCGPoint& InPoint, const FVector& InLocalCenter);
    
    UFUNCTION(BlueprintCallable)
    static void SetExtents(UPARAM(Ref) FPCGPoint& InPoint, const FVector& InExtents);
    
    UFUNCTION(BlueprintCallable)
    static void RefreshPCGRuntimeComponent(UPCGComponent* InComponent, const bool bFlushCache);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetTransformedBounds(const FPCGPoint& InPoint);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetTaskId(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetTargetActor(UPARAM(Ref) FPCGContext& Context, UPCGSpatialData* SpatialData);
    
    UFUNCTION(BlueprintCallable)
    static UPCGSettings* GetSettings(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FRandomStream GetRandomStreamFromTwoPoints(const FPCGPoint& InPointA, const FPCGPoint& InPointB, const UPCGSettings* OptionalSettings, const UPCGComponent* OptionalComponent);
    
    UFUNCTION(BlueprintCallable)
    static FRandomStream GetRandomStreamFromPoint(const FPCGPoint& InPoint, const UPCGSettings* OptionalSettings, const UPCGComponent* OptionalComponent);
    
    UFUNCTION(BlueprintCallable)
    static UPCGComponent* GetOriginalComponent(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetLocalCenter(const FPCGPoint& InPoint);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FPCGLandscapeLayerWeight> GetInterpolatedPCGLandscapeLayerWeights(UObject* WorldContextObject, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static UPCGData* GetInputData(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetExtents(const FPCGPoint& InPoint);
    
    UFUNCTION(BlueprintCallable)
    static UPCGComponent* GetComponent(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetActorLocalBoundsPCG(AActor* InActor, bool bIgnorePCGCreatedComponents);
    
    UFUNCTION(BlueprintCallable)
    static UPCGData* GetActorData(UPARAM(Ref) FPCGContext& Context);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetActorBoundsPCG(AActor* InActor, bool bIgnorePCGCreatedComponents);
    
    UFUNCTION(BlueprintCallable)
    static bool FlushPCGCache();
    
    UFUNCTION(BlueprintCallable)
    static UPCGData* DuplicateData(const UPCGData* InData, UPARAM(Ref) FPCGContext& Context, bool bInitializeMetadata);
    
    UFUNCTION(BlueprintCallable)
    static UPCGData* CreatePCGDataFromActor(AActor* InActor, bool bParseActor);
    
    UFUNCTION(BlueprintCallable)
    static int32 ComputeSeedFromPosition(const FVector& InPosition);
    
};

