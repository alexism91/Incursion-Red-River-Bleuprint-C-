#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptIndexList.h"
#include "GeometryScriptMeshPointSamplingOptions.h"
#include "GeometryScriptNonUniformPointSamplingOptions.h"
#include "GeometryScriptRenderCaptureCamera.h"
#include "GeometryScriptRenderCaptureCamerasForBoxOptions.h"
#include "GeometryScriptScalarList.h"
#include "GeometryScriptLibrary_MeshSamplingFunctions.generated.h"

class AActor;
class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshSamplingFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeVertexWeightedPointSampling(UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, FGeometryScriptScalarList VertexWeights, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeUniformRandomPointSampling(const UDynamicMesh* TargetMesh, int32 NumSamples, TArray<FTransform>& Samples, FGeometryScriptIndexList& TriangleIDs, int32 RandomSeed, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeRenderCapturePointSampling(TArray<FTransform>& Samples, const TArray<AActor*>& Actors, const TArray<FGeometryScriptRenderCaptureCamera>& Cameras, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void ComputeRenderCaptureCamerasForBox(TArray<FGeometryScriptRenderCaptureCamera>& Cameras, FBox Box, const FGeometryScriptRenderCaptureCamerasForBoxOptions& Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputePointSampling(UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, TArray<FTransform>& Samples, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ComputeNonUniformPointSampling(UDynamicMesh* TargetMesh, FGeometryScriptMeshPointSamplingOptions Options, FGeometryScriptNonUniformPointSamplingOptions NonUniformOptions, TArray<FTransform>& Samples, TArray<double>& SampleRadii, FGeometryScriptIndexList& TriangleIDs, UGeometryScriptDebug* Debug);
    
};

