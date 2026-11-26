#include "GeometryScriptLibrary_MeshComparisonFunctions.h"

UGeometryScriptLibrary_MeshComparisonFunctions::UGeometryScriptLibrary_MeshComparisonFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::MeasureDistancesBetweenMeshes(UDynamicMesh* TargetMesh, UDynamicMesh* OtherMesh, FGeometryScriptMeasureMeshDistanceOptions Options, double& MaxDistance, double& MinDistance, double& AverageDistance, double& RootMeanSqrDeviation, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs(UDynamicMesh* TargetMesh, UDynamicMesh* OtherMesh, FGeometryScriptIsSameMeshOptions Options, bool& bIsSameMesh, FGeometryScriptMeshDifferenceInfo& DifferenceInfo, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh(UDynamicMesh* TargetMesh, FTransform TargetTransform, UDynamicMesh* OtherMesh, FTransform OtherTransform, bool& bIsIntersecting, UGeometryScriptDebug* Debug) {
    return NULL;
}


