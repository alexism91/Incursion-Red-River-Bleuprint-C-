#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PCGPoint.h"
#include "PCGOctreeQueries.generated.h"

class UPCGPointData;

UCLASS(Blueprintable, MinimalAPI)
class UPCGOctreeQueries : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGOctreeQueries();

private:
    UFUNCTION(BlueprintCallable)
    static TArray<FPCGPoint> GetPointsInsideSphere(const UPCGPointData* InPointData, const FVector& InCenter, const double InRadius);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPCGPoint> GetPointsInsideBounds(const UPCGPointData* InPointData, const FBox& InBounds);
    
    UFUNCTION(BlueprintCallable)
    static void GetFarthestPointFromOtherPoint(const UPCGPointData* InPointData, const int32 InPointIndex, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance);
    
    UFUNCTION(BlueprintCallable)
    static void GetFarthestPoint(const UPCGPointData* InPointData, const FVector& InCenter, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance);
    
    UFUNCTION(BlueprintCallable)
    static void GetClosestPointFromOtherPoint(const UPCGPointData* InPointData, const int32 InPointIndex, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance);
    
    UFUNCTION(BlueprintCallable)
    static void GetClosestPoint(const UPCGPointData* InPointData, const FVector& InCenter, const bool bInDiscardCenter, bool& bOutFound, FPCGPoint& OutPoint, const double InSearchDistance);
    
};

