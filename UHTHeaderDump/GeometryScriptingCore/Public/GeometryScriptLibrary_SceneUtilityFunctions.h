#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptOutcomePins.h"
#include "GeometryScriptCopyMeshFromComponentOptions.h"
#include "GeometryScriptDetermineMeshOcclusionOptions.h"
#include "GeometryScriptLibrary_SceneUtilityFunctions.generated.h"

class UDynamicMesh;
class UDynamicMeshPool;
class UGeometryScriptDebug;
class UMaterialInterface;
class UObject;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_SceneUtilityFunctions();

    UFUNCTION(BlueprintCallable)
    static void SetComponentMaterialList(UPrimitiveComponent* Component, const TArray<UMaterialInterface*>& MaterialList, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void DetermineMeshOcclusion(const TArray<UDynamicMesh*>& SourceMeshes, const TArray<FTransform>& SourceMeshTransforms, TArray<bool>& OutMeshIsHidden, const TArray<UDynamicMesh*>& TransparentMeshes, const TArray<FTransform>& TransparentMeshTransforms, TArray<bool>& OutTransparentMeshIsHidden, const TArray<UDynamicMesh*>& OccludeMeshes, const TArray<FTransform>& OccludeMeshTransforms, const FGeometryScriptDetermineMeshOcclusionOptions& OcclusionOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMeshPool* CreateDynamicMeshPool();
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMeshFromComponent(USceneComponent* Component, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromComponentOptions Options, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyCollisionMeshesFromObject(UObject* FromObject, UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, FTransform& LocalToWorld, EGeometryScriptOutcomePins& Outcome, bool bUseComplexCollision, int32 SphereResolution, UGeometryScriptDebug* Debug);
    
};

