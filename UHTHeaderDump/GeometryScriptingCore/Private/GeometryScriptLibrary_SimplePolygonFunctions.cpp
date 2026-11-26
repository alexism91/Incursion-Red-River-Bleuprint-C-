#include "GeometryScriptLibrary_SimplePolygonFunctions.h"

UGeometryScriptLibrary_SimplePolygonFunctions::UGeometryScriptLibrary_SimplePolygonFunctions() {
}

void UGeometryScriptLibrary_SimplePolygonFunctions::SetPolygonVertex(FGeometryScriptSimplePolygon& Polygon, int32 VertexIndex, FVector2D Position, bool& bPolygonIsEmpty) {
}

int32 UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonVertexCount(FGeometryScriptSimplePolygon Polygon) {
    return 0;
}

FVector2D UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonVertex(FGeometryScriptSimplePolygon Polygon, int32 VertexIndex, bool& bPolygonIsEmpty) {
    return FVector2D{};
}

FVector2D UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonTangent(FGeometryScriptSimplePolygon Polygon, int32 VertexIndex, bool& bPolygonIsEmpty) {
    return FVector2D{};
}

FBox2D UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonBounds(FGeometryScriptSimplePolygon Polygon) {
    return FBox2D{};
}

double UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonArea(FGeometryScriptSimplePolygon Polygon) {
    return 0.0;
}

double UGeometryScriptLibrary_SimplePolygonFunctions::GetPolygonArcLength(FGeometryScriptSimplePolygon Polygon) {
    return 0.0;
}

void UGeometryScriptLibrary_SimplePolygonFunctions::ConvertSplineToPolygon(const USplineComponent* Spline, FGeometryScriptSimplePolygon& Polygon, FGeometryScriptSplineSamplingOptions SamplingOptions, EGeometryScriptAxis DropAxis) {
}

TArray<FVector2D> UGeometryScriptLibrary_SimplePolygonFunctions::Conv_GeometryScriptSimplePolygonToArrayOfVector2D(FGeometryScriptSimplePolygon Polygon) {
    return TArray<FVector2D>();
}

TArray<FVector> UGeometryScriptLibrary_SimplePolygonFunctions::Conv_GeometryScriptSimplePolygonToArray(FGeometryScriptSimplePolygon Polygon) {
    return TArray<FVector>();
}

FGeometryScriptSimplePolygon UGeometryScriptLibrary_SimplePolygonFunctions::Conv_ArrayToGeometryScriptSimplePolygon(const TArray<FVector>& PathVertices) {
    return FGeometryScriptSimplePolygon{};
}

FGeometryScriptSimplePolygon UGeometryScriptLibrary_SimplePolygonFunctions::Conv_ArrayOfVector2DToGeometryScriptSimplePolygon(const TArray<FVector2D>& PathVertices) {
    return FGeometryScriptSimplePolygon{};
}

int32 UGeometryScriptLibrary_SimplePolygonFunctions::AddPolygonVertex(FGeometryScriptSimplePolygon& Polygon, FVector2D Position) {
    return 0;
}


