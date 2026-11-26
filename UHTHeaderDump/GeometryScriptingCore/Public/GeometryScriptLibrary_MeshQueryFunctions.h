#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptIndexList.h"
#include "GeometryScriptTriangle.h"
#include "GeometryScriptTriangleList.h"
#include "GeometryScriptVectorList.h"
#include "GeometryScriptLibrary_MeshQueryFunctions.generated.h"

class UDynamicMesh;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshQueryFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidVertexID(UDynamicMesh* TargetMesh, int32 VertexID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidTriangleID(UDynamicMesh* TargetMesh, int32 TriangleID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetVertexPosition(UDynamicMesh* TargetMesh, int32 VertexID, bool& bIsValidVertex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetVertexCount(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetVertexConnectedVertices(UDynamicMesh* TargetMesh, int32 VertexID, TArray<int32>& Vertices);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetVertexConnectedTriangles(UDynamicMesh* TargetMesh, int32 VertexID, TArray<int32>& Triangles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox2D GetUVSetBoundingBox(UDynamicMesh* TargetMesh, int32 UvSetIndex, bool& bIsValidUVSet, bool& bUVSetIsEmpty);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetTriangleVertexColors(UDynamicMesh* TargetMesh, int32 TriangleID, FLinearColor& Color1, FLinearColor& Color2, FLinearColor& Color3, bool& bTriHasValidVertexColors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTriangleUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, FVector2D& UV1, FVector2D& UV2, FVector2D& UV3, bool& bHaveValidUVs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTrianglePositions(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bIsValidTriangle, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetTriangleNormalTangents(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bTriHasValidElements, FGeometryScriptTriangle& Normals, FGeometryScriptTriangle& Tangents, FGeometryScriptTriangle& BiTangents);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetTriangleNormals(UDynamicMesh* TargetMesh, int32 TriangleID, FVector& Normal1, FVector& Normal2, FVector& Normal3, bool& bTriHasValidNormals);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector GetTriangleIndices(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bIsValidTriangle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetTriangleFaceNormal(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bIsValidTriangle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumVertexIDs(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumUVSets(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumUVIslands(UDynamicMesh* TargetMesh, int32 UVChannel, bool& bIsValidUVChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumTriangleIDs(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumOpenBorderLoops(UDynamicMesh* TargetMesh, bool& bAmbiguousTopologyFound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumOpenBorderEdges(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumExtendedPolygroupLayers(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumConnectedComponents(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable)
    static void GetMeshVolumeAreaCenter(UDynamicMesh* TargetMesh, float& SurfaceArea, float& Volume, FVector& CenterOfMass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMeshVolumeArea(UDynamicMesh* TargetMesh, float& SurfaceArea, float& Volume);
    
    UFUNCTION(BlueprintCallable)
    static double GetMeshUVArea(UDynamicMesh* TargetMesh, int32 UVChannel, bool& bIsValidUVChannel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMeshInfoString(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMeshHasAttributeSet(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FBox GetMeshBoundingBox(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsDenseMesh(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetIsClosedMesh(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetInterpolatedTriangleVertexColor(UDynamicMesh* TargetMesh, int32 TriangleID, FVector BarycentricCoords, FLinearColor DefaultColor, bool& bTriHasValidVertexColors, FLinearColor& InterpolatedColor);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetInterpolatedTriangleUV(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, FVector BarycentricCoords, bool& bTriHasValidUVs, FVector2D& InterpolatedUV);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetInterpolatedTrianglePosition(UDynamicMesh* TargetMesh, int32 TriangleID, FVector BarycentricCoords, bool& bIsValidTriangle, FVector& InterpolatedPosition);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetInterpolatedTriangleNormalTangents(UDynamicMesh* TargetMesh, int32 TriangleID, FVector BarycentricCoords, bool& bTriHasValidElements, FVector& InterpolatedNormal, FVector& InterpolatedTangent, FVector& InterpolatedBiTangent);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetInterpolatedTriangleNormal(UDynamicMesh* TargetMesh, int32 TriangleID, FVector BarycentricCoords, bool& bTriHasValidNormals, FVector& InterpolatedNormal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHasVertexIDGaps(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHasVertexColors(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHasTriangleNormals(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHasTriangleIDGaps(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHasPolygroups(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHasMaterialIDs(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetAllVertexPositionsAtEdges(UDynamicMesh* TargetMesh, const FGeometryScriptIndexList& EdgeIDs, FGeometryScriptVectorList& Start, FGeometryScriptVectorList& End);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetAllVertexPositions(UDynamicMesh* TargetMesh, FGeometryScriptVectorList& PositionList, bool bSkipGaps, bool& bHasVertexIDGaps);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetAllVertexIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList& VertexIDList, bool& bHasVertexIDGaps);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetAllUVSeamEdges(UDynamicMesh* TargetMesh, int32 UvSetIndex, bool& bHaveValidUVs, FGeometryScriptIndexList& ElementIDs);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetAllTriangleIndices(UDynamicMesh* TargetMesh, FGeometryScriptTriangleList& TriangleList, bool bSkipGaps, bool& bHasTriangleIDGaps);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetAllTriangleIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList& TriangleIDList, bool& bHasTriangleIDGaps);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* GetAllSplitUVsAtVertex(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 VertexID, TArray<int32>& ElementIDs, TArray<FVector2D>& ElementUVs, bool& bHaveValidUVs);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeTriangleBarycentricCoords(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bIsValidTriangle, FVector Point, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3, FVector& BarycentricCoords);
    
};

