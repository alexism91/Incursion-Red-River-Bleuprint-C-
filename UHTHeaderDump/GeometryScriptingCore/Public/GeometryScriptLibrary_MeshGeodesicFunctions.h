#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptIndexList.h"
#include "GeometryScriptPolyPath.h"
#include "GeometryScriptLibrary_MeshGeodesicFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshGeodesicFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshGeodesicFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetShortestVertexPath(UDynamicMesh* TargetMesh, int32 StartVertexID, int32 EndVertexID, FGeometryScriptIndexList& VertexIDList, bool& bFoundErrors, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetShortestSurfacePath(UDynamicMesh* TargetMesh, int32 StartTriangleID, FVector StartBaryCoords, int32 EndTriangleID, FVector EndBaryCoords, FGeometryScriptPolyPath& ShortestPath, bool& bFoundErrors, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CreateSurfacePath(UDynamicMesh* TargetMesh, FVector Direction, int32 StartTriangleID, FVector StartBaryCoords, float MaxPathLength, FGeometryScriptPolyPath& SurfacePath, bool& bFoundErrors, UGeometryScriptDebug* Debug);
    
};

