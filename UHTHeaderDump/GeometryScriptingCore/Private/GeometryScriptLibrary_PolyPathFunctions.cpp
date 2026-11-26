#include "GeometryScriptLibrary_PolyPathFunctions.h"

UGeometryScriptLibrary_PolyPathFunctions::UGeometryScriptLibrary_PolyPathFunctions() {
}

bool UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms(const USplineComponent* Spline, TArray<FTransform>& Frames, TArray<double>& FrameTimes, FGeometryScriptSplineSamplingOptions SamplingOptions, FTransform RelativeTransform, bool bIncludeScale) {
    return false;
}

FVector UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathVertex(FGeometryScriptPolyPath PolyPath, int32 Index, bool& bIsValidIndex) {
    return FVector{};
}

FVector UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathTangent(FGeometryScriptPolyPath PolyPath, int32 Index, bool& bIsValidIndex) {
    return FVector{};
}

int32 UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathNumVertices(FGeometryScriptPolyPath PolyPath) {
    return 0;
}

int32 UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathLastIndex(FGeometryScriptPolyPath PolyPath) {
    return 0;
}

double UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathArcLength(FGeometryScriptPolyPath PolyPath) {
    return 0.0;
}

int32 UGeometryScriptLibrary_PolyPathFunctions::GetNearestVertexIndex(FGeometryScriptPolyPath PolyPath, FVector Point) {
    return 0;
}

FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::FlattenTo2DOnAxis(FGeometryScriptPolyPath PolyPath, EGeometryScriptAxis DropAxis) {
    return FGeometryScriptPolyPath{};
}

FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath3D(FTransform Transform, float Radius, int32 NumPoints) {
    return FGeometryScriptPolyPath{};
}

FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath2D(FVector2D Center, float Radius, int32 NumPoints) {
    return FGeometryScriptPolyPath{};
}

FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath3D(FTransform Transform, float Radius, int32 NumPoints, float StartAngle, float EndAngle) {
    return FGeometryScriptPolyPath{};
}

FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath2D(FVector2D Center, float Radius, int32 NumPoints, float StartAngle, float EndAngle) {
    return FGeometryScriptPolyPath{};
}

void UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath(const USplineComponent* Spline, FGeometryScriptPolyPath& PolyPath, FGeometryScriptSplineSamplingOptions SamplingOptions) {
}

void UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath, TArray<FVector2D>& VertexArray) {
}

void UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArray(FGeometryScriptPolyPath PolyPath, TArray<FVector>& VertexArray) {
}

void UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayToPolyPath(const TArray<FVector>& VertexArray, FGeometryScriptPolyPath& PolyPath) {
}

void UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayOfVector2DToPolyPath(const TArray<FVector2D>& VertexArray, FGeometryScriptPolyPath& PolyPath) {
}

TArray<FVector2D> UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArrayOfVector2D(FGeometryScriptPolyPath PolyPath) {
    return TArray<FVector2D>();
}

TArray<FVector> UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArray(FGeometryScriptPolyPath PolyPath) {
    return TArray<FVector>();
}

FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayToGeometryScriptPolyPath(const TArray<FVector>& PathVertices) {
    return FGeometryScriptPolyPath{};
}

FGeometryScriptPolyPath UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayOfVector2DToGeometryScriptPolyPath(const TArray<FVector2D>& PathVertices) {
    return FGeometryScriptPolyPath{};
}


