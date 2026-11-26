#include "GeometryScriptLibrary_MeshQueryFunctions.h"

UGeometryScriptLibrary_MeshQueryFunctions::UGeometryScriptLibrary_MeshQueryFunctions() {
}

bool UGeometryScriptLibrary_MeshQueryFunctions::IsValidVertexID(UDynamicMesh* TargetMesh, int32 VertexID) {
    return false;
}

bool UGeometryScriptLibrary_MeshQueryFunctions::IsValidTriangleID(UDynamicMesh* TargetMesh, int32 TriangleID) {
    return false;
}

FVector UGeometryScriptLibrary_MeshQueryFunctions::GetVertexPosition(UDynamicMesh* TargetMesh, int32 VertexID, bool& bIsValidVertex) {
    return FVector{};
}

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetVertexCount(UDynamicMesh* TargetMesh) {
    return 0;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedVertices(UDynamicMesh* TargetMesh, int32 VertexID, TArray<int32>& Vertices) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetVertexConnectedTriangles(UDynamicMesh* TargetMesh, int32 VertexID, TArray<int32>& Triangles) {
    return NULL;
}

FBox2D UGeometryScriptLibrary_MeshQueryFunctions::GetUVSetBoundingBox(UDynamicMesh* TargetMesh, int32 UvSetIndex, bool& bIsValidUVSet, bool& bUVSetIsEmpty) {
    return FBox2D{};
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleVertexColors(UDynamicMesh* TargetMesh, int32 TriangleID, FLinearColor& Color1, FLinearColor& Color2, FLinearColor& Color3, bool& bTriHasValidVertexColors) {
    return NULL;
}

void UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleUVs(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, FVector2D& UV1, FVector2D& UV2, FVector2D& UV3, bool& bHaveValidUVs) {
}

void UGeometryScriptLibrary_MeshQueryFunctions::GetTrianglePositions(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bIsValidTriangle, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3) {
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormalTangents(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bTriHasValidElements, FGeometryScriptTriangle& Normals, FGeometryScriptTriangle& Tangents, FGeometryScriptTriangle& BiTangents) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleNormals(UDynamicMesh* TargetMesh, int32 TriangleID, FVector& Normal1, FVector& Normal2, FVector& Normal3, bool& bTriHasValidNormals) {
    return NULL;
}

FIntVector UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleIndices(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bIsValidTriangle) {
    return FIntVector{};
}

FVector UGeometryScriptLibrary_MeshQueryFunctions::GetTriangleFaceNormal(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bIsValidTriangle) {
    return FVector{};
}

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumVertexIDs(UDynamicMesh* TargetMesh) {
    return 0;
}

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVSets(UDynamicMesh* TargetMesh) {
    return 0;
}

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumUVIslands(UDynamicMesh* TargetMesh, int32 UVChannel, bool& bIsValidUVChannel) {
    return 0;
}

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumTriangleIDs(UDynamicMesh* TargetMesh) {
    return 0;
}

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderLoops(UDynamicMesh* TargetMesh, bool& bAmbiguousTopologyFound) {
    return 0;
}

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumOpenBorderEdges(UDynamicMesh* TargetMesh) {
    return 0;
}

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumExtendedPolygroupLayers(UDynamicMesh* TargetMesh) {
    return 0;
}

int32 UGeometryScriptLibrary_MeshQueryFunctions::GetNumConnectedComponents(UDynamicMesh* TargetMesh) {
    return 0;
}

void UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeAreaCenter(UDynamicMesh* TargetMesh, float& SurfaceArea, float& Volume, FVector& CenterOfMass) {
}

void UGeometryScriptLibrary_MeshQueryFunctions::GetMeshVolumeArea(UDynamicMesh* TargetMesh, float& SurfaceArea, float& Volume) {
}

double UGeometryScriptLibrary_MeshQueryFunctions::GetMeshUVArea(UDynamicMesh* TargetMesh, int32 UVChannel, bool& bIsValidUVChannel) {
    return 0.0;
}

FString UGeometryScriptLibrary_MeshQueryFunctions::GetMeshInfoString(UDynamicMesh* TargetMesh) {
    return TEXT("");
}

bool UGeometryScriptLibrary_MeshQueryFunctions::GetMeshHasAttributeSet(UDynamicMesh* TargetMesh) {
    return false;
}

FBox UGeometryScriptLibrary_MeshQueryFunctions::GetMeshBoundingBox(UDynamicMesh* TargetMesh) {
    return FBox{};
}

bool UGeometryScriptLibrary_MeshQueryFunctions::GetIsDenseMesh(UDynamicMesh* TargetMesh) {
    return false;
}

bool UGeometryScriptLibrary_MeshQueryFunctions::GetIsClosedMesh(UDynamicMesh* TargetMesh) {
    return false;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleVertexColor(UDynamicMesh* TargetMesh, int32 TriangleID, FVector BarycentricCoords, FLinearColor DefaultColor, bool& bTriHasValidVertexColors, FLinearColor& InterpolatedColor) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleUV(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, FVector BarycentricCoords, bool& bTriHasValidUVs, FVector2D& InterpolatedUV) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTrianglePosition(UDynamicMesh* TargetMesh, int32 TriangleID, FVector BarycentricCoords, bool& bIsValidTriangle, FVector& InterpolatedPosition) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormalTangents(UDynamicMesh* TargetMesh, int32 TriangleID, FVector BarycentricCoords, bool& bTriHasValidElements, FVector& InterpolatedNormal, FVector& InterpolatedTangent, FVector& InterpolatedBiTangent) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetInterpolatedTriangleNormal(UDynamicMesh* TargetMesh, int32 TriangleID, FVector BarycentricCoords, bool& bTriHasValidNormals, FVector& InterpolatedNormal) {
    return NULL;
}

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexIDGaps(UDynamicMesh* TargetMesh) {
    return false;
}

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasVertexColors(UDynamicMesh* TargetMesh) {
    return false;
}

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleNormals(UDynamicMesh* TargetMesh) {
    return false;
}

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasTriangleIDGaps(UDynamicMesh* TargetMesh) {
    return false;
}

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasPolygroups(UDynamicMesh* TargetMesh) {
    return false;
}

bool UGeometryScriptLibrary_MeshQueryFunctions::GetHasMaterialIDs(UDynamicMesh* TargetMesh) {
    return false;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositionsAtEdges(UDynamicMesh* TargetMesh, const FGeometryScriptIndexList& EdgeIDs, FGeometryScriptVectorList& Start, FGeometryScriptVectorList& End) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexPositions(UDynamicMesh* TargetMesh, FGeometryScriptVectorList& PositionList, bool bSkipGaps, bool& bHasVertexIDGaps) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllVertexIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList& VertexIDList, bool& bHasVertexIDGaps) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllUVSeamEdges(UDynamicMesh* TargetMesh, int32 UvSetIndex, bool& bHaveValidUVs, FGeometryScriptIndexList& ElementIDs) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIndices(UDynamicMesh* TargetMesh, FGeometryScriptTriangleList& TriangleList, bool bSkipGaps, bool& bHasTriangleIDGaps) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllTriangleIDs(UDynamicMesh* TargetMesh, FGeometryScriptIndexList& TriangleIDList, bool& bHasTriangleIDGaps) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::GetAllSplitUVsAtVertex(UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 VertexID, TArray<int32>& ElementIDs, TArray<FVector2D>& ElementUVs, bool& bHaveValidUVs) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshQueryFunctions::ComputeTriangleBarycentricCoords(UDynamicMesh* TargetMesh, int32 TriangleID, bool& bIsValidTriangle, FVector Point, FVector& Vertex1, FVector& Vertex2, FVector& Vertex3, FVector& BarycentricCoords) {
    return NULL;
}


