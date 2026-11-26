#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptContainmentOutcomePins.h"
#include "EGeometryScriptMeshSelectionType.h"
#include "EGeometryScriptSearchOutcomePins.h"
#include "GeometryScriptDynamicMeshBVH.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptRayHitResult.h"
#include "GeometryScriptSpatialQueryOptions.h"
#include "GeometryScriptTrianglePoint.h"
#include "GeometryScriptLibrary_MeshSpatial.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshSpatial();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SelectMeshElementsInBoxWithBVH(UDynamicMesh* TargetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FBox QueryBox, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptMeshSelection& Selection, EGeometryScriptMeshSelectionType SelectionType, int32 MinNumTrianglePoints, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void ResetBVH(UPARAM(Ref) FGeometryScriptDynamicMeshBVH& NewResetBVH);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RebuildBVHForMesh(UDynamicMesh* TargetMesh, UPARAM(Ref) FGeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* IsPointInsideMesh(UDynamicMesh* TargetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, bool& bIsInside, EGeometryScriptContainmentOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* IsBVHValidForMesh(UDynamicMesh* TargetMesh, const FGeometryScriptDynamicMeshBVH& TestBVH, bool& bIsValid, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* FindNearestRayIntersectionWithMesh(UDynamicMesh* TargetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FVector RayOrigin, FVector RayDirection, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptRayHitResult& HitResult, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* FindNearestPointOnMesh(UDynamicMesh* TargetMesh, const FGeometryScriptDynamicMeshBVH& QueryBVH, FVector QueryPoint, FGeometryScriptSpatialQueryOptions Options, FGeometryScriptTrianglePoint& NearestResult, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* BuildBVHForMesh(UDynamicMesh* TargetMesh, FGeometryScriptDynamicMeshBVH& OutputBVH, UGeometryScriptDebug* Debug);
    
};

