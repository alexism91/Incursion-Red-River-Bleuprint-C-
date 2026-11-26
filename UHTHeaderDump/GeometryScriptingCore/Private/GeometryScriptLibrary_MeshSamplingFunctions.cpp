#include "GeometryScriptLibrary_MeshSamplingFunctions.h"

UGeometryScriptLibrary_MeshSamplingFunctions::UGeometryScriptLibrary_MeshSamplingFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeVertexWeightedPointSampling(UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, FGeometryScriptScalarList VertexWeights, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeUniformRandomPointSampling(const UDynamicMesh* TargetMesh, int32 NumSamples, TArray<FTransform>& Samples, FGeometryScriptIndexList& TriangleIDs, int32 RandomSeed, UGeometryScriptDebug* Debug) {
    return NULL;
}

void UGeometryScriptLibrary_MeshSamplingFunctions::ComputeRenderCapturePointSampling(TArray<FTransform>& Samples, const TArray<AActor*>& Actors, const TArray<FGeometryScriptRenderCaptureCamera>& Cameras, UGeometryScriptDebug* Debug) {
}

void UGeometryScriptLibrary_MeshSamplingFunctions::ComputeRenderCaptureCamerasForBox(TArray<FGeometryScriptRenderCaptureCamera>& Cameras, FBox Box, const FGeometryScriptRenderCaptureCamerasForBoxOptions& Options, UGeometryScriptDebug* Debug) {
}

UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::ComputePointSampling(UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, TArray<FTransform>& Samples, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshSamplingFunctions::ComputeNonUniformPointSampling(UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug* Debug) {
    return NULL;
}


