#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptLibrary_BoxFunctions.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_BoxFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TestPointInsideBox(FBox Box, FVector Point, bool bConsiderOnBoxAsInside);
    
    UFUNCTION(BlueprintPure)
    static bool TestBoxSphereIntersection(FBox Box, FVector SphereCenter, double SphereRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TestBoxBoxIntersection(FBox Box1, FBox Box2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox MakeBoxFromCenterSize(FVector Center, FVector Dimensions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox MakeBoxFromCenterExtents(FVector Center, FVector Extents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox GetTransformedBox(FBox Box, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox GetExpandedBox(FBox Box, FVector ExpandBy);
    
    UFUNCTION(BlueprintPure)
    static void GetBoxVolumeArea(FBox Box, double& Volume, double& SurfaceArea);
    
    UFUNCTION(BlueprintPure)
    static double GetBoxPointDistance(FBox Box, FVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetBoxFaceCenter(FBox Box, int32 FaceIndex, FVector& FaceNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetBoxCorner(FBox Box, int32 CornerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBoxCenterSize(FBox Box, FVector& Center, FVector& Dimensions);
    
    UFUNCTION(BlueprintPure)
    static double GetBoxBoxDistance(FBox Box1, FBox Box2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector FindClosestPointOnBox(FBox Box, FVector Point, bool& bIsInside);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox FindBoxBoxIntersection(FBox Box1, FBox Box2, bool& bIsIntersecting);
    
};

