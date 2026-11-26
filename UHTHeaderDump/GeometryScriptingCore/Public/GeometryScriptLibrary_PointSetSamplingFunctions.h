#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptCoordinateSpace.h"
#include "GeometryScriptIndexList.h"
#include "GeometryScriptPointClusteringOptions.h"
#include "GeometryScriptPointFlatteningOptions.h"
#include "GeometryScriptPointPriorityOptions.h"
#include "GeometryScriptLibrary_PointSetSamplingFunctions.generated.h"

class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_PointSetSamplingFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_PointSetSamplingFunctions();

    UFUNCTION(BlueprintCallable)
    static void UnflattenPoints(const TArray<FVector2D>& PointsIn2D, TArray<FVector>& PointsIn3D, const FGeometryScriptPointFlatteningOptions& Options, double Height);
    
    UFUNCTION(BlueprintCallable)
    static void TransformsToPoints(const TArray<FTransform>& Transforms, TArray<FVector>& Points);
    
    UFUNCTION(BlueprintCallable)
    static void OffsetTransforms(UPARAM(Ref) TArray<FTransform>& Transforms, double Offset, FVector Direction, EGeometryScriptCoordinateSpace Space);
    
    UFUNCTION(BlueprintCallable)
    static FBox MakeBoundingBoxFromPoints(const TArray<FVector>& Points, double ExpandBy);
    
    UFUNCTION(BlueprintCallable)
    static void KMeansClusterToIDs(const TArray<FVector>& Points, const FGeometryScriptPointClusteringOptions& Options, TArray<int32>& PointClusterIndices);
    
    UFUNCTION(BlueprintCallable)
    static void KMeansClusterToArrays(const TArray<FVector>& Points, const FGeometryScriptPointClusteringOptions& Options, TArray<FGeometryScriptIndexList>& ClusterIDToLists);
    
    UFUNCTION(BlueprintCallable)
    static void GetPointsFromIndexList(const TArray<FVector>& AllPoints, const FGeometryScriptIndexList& Indices, TArray<FVector>& SelectedPoints);
    
    UFUNCTION(BlueprintCallable)
    static void FlattenPoints(const TArray<FVector>& PointsIn3D, TArray<FVector2D>& PointsIn2D, const FGeometryScriptPointFlatteningOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    static void DownsamplePoints(const TArray<FVector>& Points, const FGeometryScriptPointPriorityOptions& Options, FGeometryScriptIndexList& DownsampledIndices, int32 KeepNumPoints, UGeometryScriptDebug* Debug);
    
};

