#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptAppendMeshOptions.h"
#include "GeometryScriptIndexList.h"
#include "GeometryScriptMergeVertexOptions.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptSimpleMeshBuffers.h"
#include "GeometryScriptTriangleList.h"
#include "GeometryScriptVectorList.h"
#include "GeometryScriptLibrary_MeshBasicEditFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;
class UMaterialInterface;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshBasicEditFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetVertexPosition(UDynamicMesh* TargetMesh, int32 VertexID, FVector NewPosition, bool& bIsValidVertex, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetAllMeshVertexPositions(UDynamicMesh* TargetMesh, FGeometryScriptVectorList PositionList, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* MergeMeshVerticesInSelections(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection SelectionKeep, FGeometryScriptMeshSelection SelectionDiscard, FGeometryScriptMergeVertexOptions Options, int32& NumMerged, double InterpParam, double DistanceThreshold, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* MergeMeshVertexPair(UDynamicMesh* TargetMesh, int32 VertexKeep, int32 VertexDiscard, FGeometryScriptMergeVertexOptions Options, bool& bSuccess, double InterpParam, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DiscardMeshAttributes(UDynamicMesh* TargetMesh, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DeleteVerticesFromMesh(UDynamicMesh* TargetMesh, FGeometryScriptIndexList VertexList, int32& NumDeleted, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DeleteVertexFromMesh(UDynamicMesh* TargetMesh, int32 VertexID, bool& bWasVertexDeleted, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DeleteTrianglesFromMesh(UDynamicMesh* TargetMesh, FGeometryScriptIndexList TriangleList, int32& NumDeleted, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DeleteTriangleFromMesh(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bWasTriangleDeleted, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DeleteSelectedTrianglesFromMesh(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, int32& NumDeleted, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendMeshWithMaterials(UDynamicMesh* TargetMesh, const TArray<UMaterialInterface*>& TargetMeshMaterialList, UDynamicMesh* NewAppendMesh, const TArray<UMaterialInterface*>& AppendMeshMaterialList, TArray<UMaterialInterface*>& ResultMeshMaterialList, FTransform AppendTransform, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, bool bCompactAppendedMaterials, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendMeshTransformedWithMaterials(UDynamicMesh* TargetMesh, const TArray<UMaterialInterface*>& TargetMeshMaterialList, UDynamicMesh* NewAppendMesh, const TArray<UMaterialInterface*>& AppendMeshMaterialList, TArray<UMaterialInterface*>& ResultMeshMaterialList, const TArray<FTransform>& AppendTransforms, FTransform ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, bool bCompactAppendedMaterials, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendMeshTransformed(UDynamicMesh* TargetMesh, UDynamicMesh* NewAppendMesh, const TArray<FTransform>& AppendTransforms, FTransform ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendMeshRepeatedWithMaterials(UDynamicMesh* TargetMesh, const TArray<UMaterialInterface*>& TargetMeshMaterialList, UDynamicMesh* NewAppendMesh, const TArray<UMaterialInterface*>& AppendMeshMaterialList, TArray<UMaterialInterface*>& ResultMeshMaterialList, FTransform AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, bool bCompactAppendedMaterials, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendMeshRepeated(UDynamicMesh* TargetMesh, UDynamicMesh* NewAppendMesh, FTransform AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendMesh(UDynamicMesh* TargetMesh, UDynamicMesh* NewAppendMesh, FTransform AppendTransform, bool bDeferChangeNotifications, FGeometryScriptAppendMeshOptions AppendOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AppendBuffersToMesh(UDynamicMesh* TargetMesh, const FGeometryScriptSimpleMeshBuffers& Buffers, FGeometryScriptIndexList& NewTriangleIndicesList, int32 MaterialID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AddVerticesToMesh(UDynamicMesh* TargetMesh, FGeometryScriptVectorList NewPositionsList, FGeometryScriptIndexList& NewIndicesList, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AddVertexToMesh(UDynamicMesh* TargetMesh, FVector NewPosition, int32& NewVertexIndex, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AddTriangleToMesh(UDynamicMesh* TargetMesh, FIntVector NewTriangle, int32& NewTriangleIndex, int32 NewTriangleGroupID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AddTrianglesToMesh(UDynamicMesh* TargetMesh, FGeometryScriptTriangleList NewTrianglesList, FGeometryScriptIndexList& NewIndicesList, int32 NewTriangleGroupID, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
};

