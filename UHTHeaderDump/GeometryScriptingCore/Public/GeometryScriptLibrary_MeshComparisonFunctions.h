#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptIsSameMeshOptions.h"
#include "GeometryScriptMeasureMeshDistanceOptions.h"
#include "GeometryScriptMeshDifferenceInfo.h"
#include "GeometryScriptLibrary_MeshComparisonFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshComparisonFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* MeasureDistancesBetweenMeshes(UDynamicMesh* TargetMesh, UDynamicMesh* OtherMesh, FGeometryScriptMeasureMeshDistanceOptions Options, double& MaxDistance, double& MinDistance, double& AverageDistance, double& RootMeanSqrDeviation, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* IsSameMeshAs(UDynamicMesh* TargetMesh, UDynamicMesh* OtherMesh, FGeometryScriptIsSameMeshOptions Options, bool& bIsSameMesh, FGeometryScriptMeshDifferenceInfo& DifferenceInfo, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* IsIntersectingMesh(UDynamicMesh* TargetMesh, FTransform TargetTransform, UDynamicMesh* OtherMesh, FTransform OtherTransform, bool& bIsIntersecting, UGeometryScriptDebug* Debug);
    
};

