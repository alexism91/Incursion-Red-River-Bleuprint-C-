#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptDynamicMeshBVH.h"
#include "GeometryScriptLayoutUVsOptions.h"
#include "GeometryScriptMeshProjectionSettings.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptPatchBuilderOptions.h"
#include "GeometryScriptRecomputeUVsOptions.h"
#include "GeometryScriptRepackUVsOptions.h"
#include "GeometryScriptUVList.h"
#include "GeometryScriptUVTexelDensityOptions.h"
#include "GeometryScriptUVTriangle.h"
#include "GeometryScriptXAtlasOptions.h"
#include "GeometryScriptLibrary_MeshUVFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshUVFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* TranslateMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FVector2D Translation, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* TransferMeshUVsByProjection(UDynamicMesh* TargetMesh, int32 TargetUVChannel, FGeometryScriptMeshSelection TargetSelection, FTransform TargetTransform, const UDynamicMesh* SourceMesh, FGeometryScriptDynamicMeshBVH SourceMeshOptionalBVH, int32 SourceUVChannel, FGeometryScriptMeshSelection SourceSelection, FTransform SourceTransform, FGeometryScriptMeshProjectionSettings Settings, FVector ProjectionDirection, double ProjectionOffset, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetUVSeamsAlongSelectedEdges(UDynamicMesh* TargetMesh, int32 UVChannel, FGeometryScriptMeshSelection Selection, bool bInsertSeams, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetNumUVSets(UDynamicMesh* TargetMesh, int32 NumUVSets, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshUVsFromPlanarProjection(UDynamicMesh* TargetMesh, int32 UvSetIndex, FTransform PlaneTransform, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshUVsFromCylinderProjection(UDynamicMesh* TargetMesh, int32 UvSetIndex, FTransform CylinderTransform, FGeometryScriptMeshSelection Selection, float SplitAngle, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshUVsFromBoxProjection(UDynamicMesh* TargetMesh, int32 UvSetIndex, FTransform BoxTransform, FGeometryScriptMeshSelection Selection, int32 MinIslandTriCount, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshUVElementPosition(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 ElementID, FVector2D NewUVPosition, bool& bIsValidElementID, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshTriangleUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, FGeometryScriptUVTriangle UVs, bool& bIsValidTriangle, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshTriangleUVElementIDs(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, FIntVector TriangleUVElements, bool& bIsValidTriangle, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ScaleMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FVector2D Scale, FVector2D ScaleOrigin, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RotateMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, float RotationAngle, FVector2D RotationOrigin, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RepackMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptRepackUVsOptions RepackOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RecomputeMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptRecomputeUVsOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* LayoutMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptLayoutUVsOptions LayoutOptions, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IntersectsUVBox2D(FBox2D A, FBox2D B, bool bWrappedToUnitRange);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetMeshUVSizeInfo(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptMeshSelection Selection, double& MeshArea, double& UVArea, FBox& MeshBounds, FBox2D& UVBounds, bool& bIsValidUVSet, bool& bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetMeshUVElementPosition(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 ElementID, FVector2D& UVPosition, bool& bIsValidElementID);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetMeshTriangleUVElementIDs(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, FIntVector& TriangleUVElements, bool& bHaveValidUVs);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetMeshPerVertexUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptUVList& UVList, bool& bIsValidUVSet, bool& bHasVertexIDGaps, bool& bHasSplitUVs, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyUVSet(UDynamicMesh* TargetMesh, int32 FromUVSet, int32 ToUVSet, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMeshUVLayerToMesh(UDynamicMesh* CopyFromMesh, int32 UvSetIndex, UPARAM(Ref) UDynamicMesh*& CopyToUVMesh, UDynamicMesh*& CopyToUVMeshOut, bool& bInvalidTopology, bool& bIsValidUVSet, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMeshToMeshUVLayer(UDynamicMesh* CopyFromUVMesh, int32 ToUVSetIndex, UPARAM(Ref) UDynamicMesh*& CopyToMesh, UDynamicMesh*& CopyToMeshOut, bool& bFoundTopologyErrors, bool& bIsValidUVSet, bool bOnlyUVPositions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeMeshLocalUVParam(UDynamicMesh* TargetMesh, FVector CenterPoint, int32 CenterPointTriangleID, TArray<int32>& VertexIDs, TArray<FVector2D>& VertexUVs, double Radius, bool bUseInterpolatedNormal, FVector TangentYDirection, double UVRotationDeg, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ClearUVChannel(UDynamicMesh* TargetMesh, int32 UVChannel, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AutoGenerateXAtlasMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptXAtlasOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AutoGeneratePatchBuilderMeshUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptPatchBuilderOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyTexelDensityUVScaling(UDynamicMesh* TargetMesh, int32 UvSetIndex, FGeometryScriptUVTexelDensityOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AddUVElementToMesh(UDynamicMesh* TargetMesh, int32 UvSetIndex, FVector2D NewUVPosition, int32& NewUVElementID, bool& bIsValidUVSet, bool bDeferChangeNotifications);
    
};

