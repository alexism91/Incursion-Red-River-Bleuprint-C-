#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptLODType.h"
#include "EGeometryScriptOutcomePins.h"
#include "EGeometryScriptSearchOutcomePins.h"
#include "GeometryScriptCopyMeshFromAssetOptions.h"
#include "GeometryScriptCopyMeshToAssetOptions.h"
#include "GeometryScriptCopyMorphTargetToAssetOptions.h"
#include "GeometryScriptCopySkinWeightProfileToAssetOptions.h"
#include "GeometryScriptMeshReadLOD.h"
#include "GeometryScriptMeshWriteLOD.h"
#include "GeometryScriptLibrary_StaticMeshFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;
class UMaterialInterface;
class USkeletalMesh;
class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_StaticMeshFunctions();

    UFUNCTION(BlueprintCallable)
    static void GetSectionMaterialListFromStaticMesh(UStaticMesh* FromStaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, TArray<UMaterialInterface*>& MaterialList, TArray<int32>& MaterialIndex, TArray<FName>& MaterialSlotNames, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumStaticMeshLODsOfType(UStaticMesh* StaticMeshAsset, EGeometryScriptLODType LODType);
    
    UFUNCTION(BlueprintCallable)
    static void GetMaterialListFromStaticMesh(const UStaticMesh* FromStaticMeshAsset, TArray<UMaterialInterface*>& MaterialList, TArray<FName>& MaterialSlotNames, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void GetMaterialListFromSkeletalMesh(const USkeletalMesh* FromSkeletalMeshAsset, TArray<UMaterialInterface*>& MaterialList, TArray<FName>& MaterialSlotNames, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void GetLODMaterialListFromSkeletalMesh(USkeletalMesh* FromSkeletalMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, TArray<UMaterialInterface*>& MaterialList, TArray<int32>& MaterialIndex, TArray<FName>& MaterialSlotNames, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopySkinWeightProfileToSkeletalMesh(UDynamicMesh* FromDynamicMesh, USkeletalMesh* ToSkeletalMeshAsset, FName TargetProfileName, FName SourceProfileName, FGeometryScriptCopySkinWeightProfileToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMorphTargetToSkeletalMesh(UDynamicMesh* FromMorphTarget, USkeletalMesh* ToSkeletalMeshAsset, FName MorphTargetName, FGeometryScriptCopyMorphTargetToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMeshToStaticMesh(UDynamicMesh* FromDynamicMesh, UStaticMesh* ToStaticMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, bool bUseSectionMaterials, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMeshToSkeletalMesh(UDynamicMesh* FromDynamicMesh, USkeletalMesh* ToSkeletalMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMeshFromStaticMeshV2(UStaticMesh* FromStaticMeshAsset, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, bool bUseSectionMaterials, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMeshFromStaticMesh(UStaticMesh* FromStaticMeshAsset, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* CopyMeshFromSkeletalMesh(USkeletalMesh* FromSkeletalMeshAsset, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertMaterialMapToMaterialList(const TMap<FName, UMaterialInterface*>& MaterialMap, TArray<UMaterialInterface*>& MaterialList, TArray<FName>& MaterialSlotNames);
    
    UFUNCTION(BlueprintCallable)
    static TMap<FName, UMaterialInterface*> ConvertMaterialListToMaterialMap(const TArray<UMaterialInterface*>& MaterialList, const TArray<FName>& MaterialSlotNames);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckStaticMeshHasAvailableLOD(UStaticMesh* StaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug);
    
};

