#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptSearchOutcomePins.h"
#include "GeometryScriptGroupLayer.h"
#include "GeometryScriptIndexList.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptLibrary_MeshPolygroupFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshPolygroupFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetPolygroupForMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, FGeometryScriptMeshSelection Selection, int32& SetPolygroupIDOut, int32 SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetNumExtendedPolygroupLayers(UDynamicMesh* TargetMesh, int32 NumLayers, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetTrianglesInPolygroup(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, UPARAM(Ref) FGeometryScriptIndexList& TriangleIDsOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTrianglePolygroupID(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 TriangleID, bool& bIsValidTriangle);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetPolyGroupUVCentroid(const UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 GroupId, int32 UVChannel, FVector2D& Centroid, bool& bIsValid);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetPolyGroupUVBoundingBox(const UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 GroupId, int32 UVChannel, FBox2D& UVBounds);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetPolygroupIDsInMesh(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, UPARAM(Ref) FGeometryScriptIndexList& PolygroupIDsOut);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetPolyGroupBoundingBox(const UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 GroupId, FBox& Bounds);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetAllTrianglePolygroupIDs(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, UPARAM(Ref) FGeometryScriptIndexList& PolygroupIDsOut);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* FindExtendedPolygroupLayerByName(const UDynamicMesh* TargetMesh, FName LayerName, FGeometryScriptGroupLayer& GroupLayer, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* EnablePolygroups(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DeleteTrianglesInPolygroup(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 PolygroupID, int32& NumDeleted, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyPolygroupsLayer(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer FromGroupLayer, FGeometryScriptGroupLayer ToGroupLayer, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ConvertUVIslandsToPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 UVLayer, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ConvertComponentsToPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputePolygroupsFromPolygonDetection(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputePolygroupsFromAngleThreshold(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, float CreaseAngle, int32 MinGroupSize, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ClearPolygroups(UDynamicMesh* TargetMesh, FGeometryScriptGroupLayer GroupLayer, int32 ClearValue, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AddNamedPolygroupLayer(UDynamicMesh* TargetMesh, FName LayerName, FGeometryScriptGroupLayer& GroupLayer, bool& bAlreadyExisted, UGeometryScriptDebug* Debug);
    
};

