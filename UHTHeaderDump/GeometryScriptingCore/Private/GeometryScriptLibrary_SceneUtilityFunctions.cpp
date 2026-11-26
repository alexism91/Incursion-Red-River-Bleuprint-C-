#include "GeometryScriptLibrary_SceneUtilityFunctions.h"

UGeometryScriptLibrary_SceneUtilityFunctions::UGeometryScriptLibrary_SceneUtilityFunctions() {
}

void UGeometryScriptLibrary_SceneUtilityFunctions::SetComponentMaterialList(UPrimitiveComponent* Component, const TArray<UMaterialInterface*>& MaterialList, UGeometryScriptDebug* Debug) {
}

void UGeometryScriptLibrary_SceneUtilityFunctions::DetermineMeshOcclusion(const TArray<UDynamicMesh*>& SourceMeshes, const TArray<FTransform>& SourceMeshTransforms, TArray<bool>& OutMeshIsHidden, const TArray<UDynamicMesh*>& TransparentMeshes, const TArray<FTransform>& TransparentMeshTransforms, TArray<bool>& OutTransparentMeshIsHidden, const TArray<UDynamicMesh*>& OccludeMeshes, const TArray<FTransform>& OccludeMeshTransforms, const FGeometryScriptDetermineMeshOcclusionOptions& OcclusionOptions, UGeometryScriptDebug* Debug) {
}

UDynamicMeshPool* UGeometryScriptLibrary_SceneUtilityFunctions::CreateDynamicMeshPool() {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_SceneUtilityFunctions::CopyMeshFromComponent(USceneComponent* Component, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromComponentOptions Options, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject(UObject* FromObject, UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, bool bUseComplexCollision, int32 SphereResolution, UGeometryScriptDebug* Debug) {
    return NULL;
}


