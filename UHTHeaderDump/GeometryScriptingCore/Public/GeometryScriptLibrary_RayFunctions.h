#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Ray -FallbackName=Ray
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptLibrary_RayFunctions.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_RayFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRay MakeRayFromPoints(FVector A, FVector B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRay MakeRayFromPointDirection(FVector Origin, FVector Direction, bool bDirectionIsNormalized);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRay GetTransformedRay(FRay Ray, FTransform Transform, bool bInvert);
    
    UFUNCTION(BlueprintPure)
    static void GetRayStartEnd(FRay Ray, double StartDistance, double EndDistance, FVector& StartPoint, FVector& EndPoint);
    
    UFUNCTION(BlueprintPure)
    static bool GetRaySphereIntersection(FRay Ray, FVector SphereCenter, double SphereRadius, double& Distance1, double& Distance2);
    
    UFUNCTION(BlueprintPure)
    static double GetRaySegmentClosestPoint(FRay Ray, FVector SegStartPoint, FVector SegEndPoint, double& RayParameter, FVector& RayPoint, FVector& SegPoint);
    
    UFUNCTION(BlueprintPure)
    static double GetRayPointDistance(FRay Ray, FVector Point);
    
    UFUNCTION(BlueprintPure)
    static FVector GetRayPoint(FRay Ray, double Distance);
    
    UFUNCTION(BlueprintPure)
    static bool GetRayPlaneIntersection(FRay Ray, FPlane Plane, double& HitDistance);
    
    UFUNCTION(BlueprintPure)
    static double GetRayParameter(FRay Ray, FVector Point);
    
    UFUNCTION(BlueprintPure)
    static double GetRayLineClosestPoint(FRay Ray, FVector LineOrigin, FVector LineDirection, double& RayParameter, FVector& RayPoint, double& LineParameter, FVector& LinePoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRayClosestPoint(FRay Ray, FVector Point);
    
    UFUNCTION(BlueprintPure)
    static bool GetRayBoxIntersection(FRay Ray, FBox Box, double& HitDistance);
    
};

