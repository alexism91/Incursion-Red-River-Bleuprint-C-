#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptDegenerateTriangleOptions.h"
#include "GeometryScriptFillHolesOptions.h"
#include "GeometryScriptRemoveHiddenTrianglesOptions.h"
#include "GeometryScriptRemoveSmallComponentOptions.h"
#include "GeometryScriptResolveTJunctionOptions.h"
#include "GeometryScriptSnapBoundariesOptions.h"
#include "GeometryScriptWeldEdgesOptions.h"
#include "GeometryScriptLibrary_MeshRepairFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshRepairFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* WeldMeshEdges(UDynamicMesh* TargetMesh, FGeometryScriptWeldEdgesOptions WeldOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SplitMeshBowties(UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SnapMeshOpenBoundaries(UDynamicMesh* TargetMesh, FGeometryScriptSnapBoundariesOptions SnapOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ResolveMeshTJunctions(UDynamicMesh* TargetMesh, FGeometryScriptResolveTJunctionOptions ResolveOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RepairMeshDegenerateGeometry(UDynamicMesh* TargetMesh, FGeometryScriptDegenerateTriangleOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RemoveUnusedVertices(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RemoveSmallComponents(UDynamicMesh* TargetMesh, FGeometryScriptRemoveSmallComponentOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RemoveHiddenTriangles(UDynamicMesh* TargetMesh, FGeometryScriptRemoveHiddenTrianglesOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* FillAllMeshHoles(UDynamicMesh* TargetMesh, FGeometryScriptFillHolesOptions FillOptions, int32& NumFilledHoles, int32& NumFailedHoleFills, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CompactMesh(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
};

