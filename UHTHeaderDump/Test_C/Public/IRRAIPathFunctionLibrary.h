#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRAIPathDirectionData.h"
#include "IRRAIPathFunctionLibrary.generated.h"

class UObject;
class UPathFollowingComponent;

UCLASS(Blueprintable)
class TEST_C_API UIRRAIPathFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRAIPathFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetVisiblePolyCentersToLocation(UObject* WorldContext, const FVector& TargetLocation, TArray<FVector>& OutVisibleVerts, float SearchRadius, FVector TargetProjectionExtent, float AlwaysSucceedHitDist);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetVisiblePolyCentersAndVertsToLocation(UObject* WorldContext, const FVector& TargetLocation, TArray<FVector>& OutVisibleVerts, float SearchRadius, FVector TargetProjectionExtent, float AlwaysSucceedHitDist);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetVisibleNavVerticesToLocation(UObject* WorldContext, const FVector& TargetLocation, TArray<FVector>& OutVisibleVerts, float SearchRadius, FVector TargetProjectionExtent, float AlwaysSucceedHitDist);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentPathData(const UPathFollowingComponent* PathComp, FIRRAIPathDirectionData& OutData, TArray<FVector>& OutCorners);
    
    UFUNCTION(BlueprintCallable)
    static bool GetCurrentPathCurrentCornerData(const UPathFollowingComponent* PathComp, FIRRAIPathDirectionData& OutData);
    
};

