#include "GeometryScriptLibrary_PointSetSamplingFunctions.h"

UGeometryScriptLibrary_PointSetSamplingFunctions::UGeometryScriptLibrary_PointSetSamplingFunctions() {
}

void UGeometryScriptLibrary_PointSetSamplingFunctions::UnflattenPoints(const TArray<FVector2D>& PointsIn2D, TArray<FVector>& PointsIn3D, const FGeometryScriptPointFlatteningOptions& Options, double Height) {
}

void UGeometryScriptLibrary_PointSetSamplingFunctions::TransformsToPoints(const TArray<FTransform>& Transforms, TArray<FVector>& Points) {
}

void UGeometryScriptLibrary_PointSetSamplingFunctions::OffsetTransforms(TArray<FTransform>& Transforms, double Offset, FVector Direction, EGeometryScriptCoordinateSpace Space) {
}

FBox UGeometryScriptLibrary_PointSetSamplingFunctions::MakeBoundingBoxFromPoints(const TArray<FVector>& Points, double ExpandBy) {
    return FBox{};
}

void UGeometryScriptLibrary_PointSetSamplingFunctions::KMeansClusterToIDs(const TArray<FVector>& Points, const FGeometryScriptPointClusteringOptions& Options, TArray<int32>& PointClusterIndices) {
}

void UGeometryScriptLibrary_PointSetSamplingFunctions::KMeansClusterToArrays(const TArray<FVector>& Points, const FGeometryScriptPointClusteringOptions& Options, TArray<FGeometryScriptIndexList>& ClusterIDToLists) {
}

void UGeometryScriptLibrary_PointSetSamplingFunctions::GetPointsFromIndexList(const TArray<FVector>& AllPoints, const FGeometryScriptIndexList& Indices, TArray<FVector>& SelectedPoints) {
}

void UGeometryScriptLibrary_PointSetSamplingFunctions::FlattenPoints(const TArray<FVector>& PointsIn3D, TArray<FVector2D>& PointsIn2D, const FGeometryScriptPointFlatteningOptions& Options) {
}

void UGeometryScriptLibrary_PointSetSamplingFunctions::DownsamplePoints(const TArray<FVector>& Points, const FGeometryScriptPointPriorityOptions& Options, FGeometryScriptIndexList& DownsampledIndices, int32 KeepNumPoints, UGeometryScriptDebug* Debug) {
}


