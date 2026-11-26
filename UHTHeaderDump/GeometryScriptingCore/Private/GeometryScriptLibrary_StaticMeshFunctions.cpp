#include "GeometryScriptLibrary_StaticMeshFunctions.h"

UGeometryScriptLibrary_StaticMeshFunctions::UGeometryScriptLibrary_StaticMeshFunctions() {
}

void UGeometryScriptLibrary_StaticMeshFunctions::GetSectionMaterialListFromStaticMesh(UStaticMesh* FromStaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, TArray<UMaterialInterface*>& MaterialList, TArray<int32>& MaterialIndex, TArray<FName>& MaterialSlotNames, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
}

int32 UGeometryScriptLibrary_StaticMeshFunctions::GetNumStaticMeshLODsOfType(UStaticMesh* StaticMeshAsset, EGeometryScriptLODType LODType) {
    return 0;
}

void UGeometryScriptLibrary_StaticMeshFunctions::GetMaterialListFromStaticMesh(const UStaticMesh* FromStaticMeshAsset, TArray<UMaterialInterface*>& MaterialList, TArray<FName>& MaterialSlotNames, UGeometryScriptDebug* Debug) {
}

void UGeometryScriptLibrary_StaticMeshFunctions::GetMaterialListFromSkeletalMesh(const USkeletalMesh* FromSkeletalMeshAsset, TArray<UMaterialInterface*>& MaterialList, TArray<FName>& MaterialSlotNames, UGeometryScriptDebug* Debug) {
}

void UGeometryScriptLibrary_StaticMeshFunctions::GetLODMaterialListFromSkeletalMesh(USkeletalMesh* FromSkeletalMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, TArray<UMaterialInterface*>& MaterialList, TArray<int32>& MaterialIndex, TArray<FName>& MaterialSlotNames, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
}

UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopySkinWeightProfileToSkeletalMesh(UDynamicMesh* FromDynamicMesh, USkeletalMesh* ToSkeletalMeshAsset, FName TargetProfileName, FName SourceProfileName, FGeometryScriptCopySkinWeightProfileToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMorphTargetToSkeletalMesh(UDynamicMesh* FromMorphTarget, USkeletalMesh* ToSkeletalMeshAsset, FName MorphTargetName, FGeometryScriptCopyMorphTargetToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToStaticMesh(UDynamicMesh* FromDynamicMesh, UStaticMesh* ToStaticMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, bool bUseSectionMaterials, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshToSkeletalMesh(UDynamicMesh* FromDynamicMesh, USkeletalMesh* ToSkeletalMeshAsset, FGeometryScriptCopyMeshToAssetOptions Options, FGeometryScriptMeshWriteLOD TargetLod, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMeshV2(UStaticMesh* FromStaticMeshAsset, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, bool bUseSectionMaterials, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromStaticMesh(UStaticMesh* FromStaticMeshAsset, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_StaticMeshFunctions::CopyMeshFromSkeletalMesh(USkeletalMesh* FromSkeletalMeshAsset, UDynamicMesh* ToDynamicMesh, FGeometryScriptCopyMeshFromAssetOptions AssetOptions, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return NULL;
}

void UGeometryScriptLibrary_StaticMeshFunctions::ConvertMaterialMapToMaterialList(const TMap<FName, UMaterialInterface*>& MaterialMap, TArray<UMaterialInterface*>& MaterialList, TArray<FName>& MaterialSlotNames) {
}

TMap<FName, UMaterialInterface*> UGeometryScriptLibrary_StaticMeshFunctions::ConvertMaterialListToMaterialMap(const TArray<UMaterialInterface*>& MaterialList, const TArray<FName>& MaterialSlotNames) {
    return TMap<FName, UMaterialInterface*>();
}

bool UGeometryScriptLibrary_StaticMeshFunctions::CheckStaticMeshHasAvailableLOD(UStaticMesh* StaticMeshAsset, FGeometryScriptMeshReadLOD RequestedLOD, EGeometryScriptSearchOutcomePins& Outcome, UGeometryScriptDebug* Debug) {
    return false;
}


