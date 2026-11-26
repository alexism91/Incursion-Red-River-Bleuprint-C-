#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptCalculateNormalsOptions.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptSplitNormalsOptions.h"
#include "GeometryScriptTangentsOptions.h"
#include "GeometryScriptTriangle.h"
#include "GeometryScriptVectorList.h"
#include "GeometryScriptLibrary_MeshNormalsFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshNormalsFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* UpdateVertexNormal(UDynamicMesh* TargetMesh, int32 VertexID, bool bUpdateNormal, FVector NewNormal, bool bUpdateTangents, FVector NewTangentX, FVector NewTangentY, bool& bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetSplitNormalsAlongSelectedEdges(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, bool bSplit, bool bRecalculateNormals, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetPerVertexNormals(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetPerFaceNormals(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshTriangleNormals(UDynamicMesh* TargetMesh, int32 TriangleID, FGeometryScriptTriangle Normals, bool& bIsValidTriangle, bool bDeferChangeNotifications);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshPerVertexTangents(UDynamicMesh* TargetMesh, FGeometryScriptVectorList TangentXList, FGeometryScriptVectorList TangentYList, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetMeshPerVertexNormals(UDynamicMesh* TargetMesh, FGeometryScriptVectorList VertexNormalList, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RecomputeNormalsForMeshSelection(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* RecomputeNormals(UDynamicMesh* TargetMesh, FGeometryScriptCalculateNormalsOptions CalculateOptions, bool bDeferChangeNotifications, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetMeshPerVertexTangents(UDynamicMesh* TargetMesh, FGeometryScriptVectorList& TangentXList, FGeometryScriptVectorList& TangentYList, bool& bIsValidTangentSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetMeshPerVertexNormals(UDynamicMesh* TargetMesh, FGeometryScriptVectorList& NormalList, bool& bIsValidNormalSet, bool& bHasVertexIDGaps, bool bAverageSplitVertexValues);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetMeshHasTangents(UDynamicMesh* TargetMesh, bool& bHasTangents, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* FlipTriangleSelectionNormals(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, bool bFlipTriangleOrientation, bool bFlipNormalDirection, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* FlipNormals(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DiscardTangents(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeTangents(UDynamicMesh* TargetMesh, FGeometryScriptTangentsOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeSplitNormals(UDynamicMesh* TargetMesh, FGeometryScriptSplitNormalsOptions SplitOptions, FGeometryScriptCalculateNormalsOptions CalculateOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* AutoRepairNormals(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
};

