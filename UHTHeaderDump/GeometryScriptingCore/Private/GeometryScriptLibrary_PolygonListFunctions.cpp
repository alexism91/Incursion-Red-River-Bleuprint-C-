#include "GeometryScriptLibrary_PolygonListFunctions.h"

UGeometryScriptLibrary_PolygonListFunctions::UGeometryScriptLibrary_PolygonListFunctions() {
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsUnion(FGeometryScriptGeneralPolygonList PolygonList, bool bCopyInputOnFailure) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsOffsets(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double FirstOffset, double SecondOffset, bool& bOperationSuccess, bool bCopyInputOnFailure) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsOffset(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsMorphologyOpen(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsMorphologyClose(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptPolygonOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsIntersection(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToIntersect) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsExclusiveOr(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToExclusiveOr) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::PolygonsDifference(FGeometryScriptGeneralPolygonList PolygonList, FGeometryScriptGeneralPolygonList PolygonsToSubtract) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptSimplePolygon UGeometryScriptLibrary_PolygonListFunctions::GetSimplePolygon(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32 PolygonIndex, int32 HoleIndex) {
    return FGeometryScriptSimplePolygon{};
}

void UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertices(FGeometryScriptGeneralPolygonList PolygonList, TArray<FVector2D>& OutVertices, bool& bValidIndices, int32 PolygonIndex, int32 HoleIndex) {
}

int32 UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertexCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndices, int32 PolygonIndex, int32 HoleIndex) {
    return 0;
}

FVector2D UGeometryScriptLibrary_PolygonListFunctions::GetPolygonVertex(FGeometryScriptGeneralPolygonList PolygonList, bool& bIsValidVertex, int32 VertexIndex, int32 PolygonIndex, int32 HoleIndex) {
    return FVector2D{};
}

FBox2D UGeometryScriptLibrary_PolygonListFunctions::GetPolygonListBounds(FGeometryScriptGeneralPolygonList PolygonList) {
    return FBox2D{};
}

double UGeometryScriptLibrary_PolygonListFunctions::GetPolygonListArea(FGeometryScriptGeneralPolygonList PolygonList) {
    return 0.0;
}

int32 UGeometryScriptLibrary_PolygonListFunctions::GetPolygonHoleCount(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32 PolygonIndex) {
    return 0;
}

int32 UGeometryScriptLibrary_PolygonListFunctions::GetPolygonCount(FGeometryScriptGeneralPolygonList PolygonList) {
    return 0;
}

FBox2D UGeometryScriptLibrary_PolygonListFunctions::GetPolygonBounds(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32 PolygonIndex) {
    return FBox2D{};
}

double UGeometryScriptLibrary_PolygonListFunctions::GetPolygonArea(FGeometryScriptGeneralPolygonList PolygonList, bool& bValidIndex, int32 PolygonIndex) {
    return 0.0;
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonsFromPathOffset(TArray<FVector2D> Path, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonsFromOpenPolyPathsOffset(TArray<FGeometryScriptPolyPath> PolyPaths, FGeometryScriptOpenPathOffsetOptions OffsetOptions, double Offset, bool& bOperationSuccess, bool bCopyInputOnFailure) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonListFromSinglePolygon(FGeometryScriptSimplePolygon OuterPolygon, const TArray<FGeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations) {
    return FGeometryScriptGeneralPolygonList{};
}

FGeometryScriptGeneralPolygonList UGeometryScriptLibrary_PolygonListFunctions::CreatePolygonListFromSimplePolygons(const TArray<FGeometryScriptSimplePolygon>& OuterPolygons) {
    return FGeometryScriptGeneralPolygonList{};
}

void UGeometryScriptLibrary_PolygonListFunctions::AppendPolygonList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptGeneralPolygonList PolygonsToAppend) {
}

int32 UGeometryScriptLibrary_PolygonListFunctions::AddPolygonToList(FGeometryScriptGeneralPolygonList& PolygonList, FGeometryScriptSimplePolygon OuterPolygon, const TArray<FGeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations) {
    return 0;
}


