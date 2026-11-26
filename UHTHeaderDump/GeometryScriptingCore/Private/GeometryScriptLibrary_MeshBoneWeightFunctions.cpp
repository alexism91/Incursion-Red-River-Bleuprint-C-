#include "GeometryScriptLibrary_MeshBoneWeightFunctions.h"

UGeometryScriptLibrary_MeshBoneWeightFunctions::UGeometryScriptLibrary_MeshBoneWeightFunctions() {
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::TransferBoneWeightsFromMesh(UDynamicMesh* SourceMesh, UDynamicMesh* TargetMesh, FGeometryScriptTransferBoneWeightsOptions Options, FGeometryScriptMeshSelection Selection, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::SetVertexBoneWeights(UDynamicMesh* TargetMesh, int32 VertexID, const TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bIsValidVertexID, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::SetAllVertexBoneWeights(UDynamicMesh* TargetMesh, const TArray<FGeometryScriptBoneWeight>& BoneWeights, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::PruneBoneWeights(UDynamicMesh* TargetMesh, const TArray<FName>& BonesToPrune, FGeometryScriptPruneBoneWeightsOptions Options, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshHasBoneWeights(UDynamicMesh* TargetMesh, bool& bHasBoneWeights, FGeometryScriptBoneWeightProfile Profile) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCreateBoneWeights(UDynamicMesh* TargetMesh, bool& bProfileExisted, bool bReplaceExistingProfile, FGeometryScriptBoneWeightProfile Profile) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::MeshCopyBoneWeights(UDynamicMesh* TargetMesh, bool& bProfileExisted, FGeometryScriptBoneWeightProfile TargetProfile, FGeometryScriptBoneWeightProfile SourceProfile) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetVertexBoneWeights(UDynamicMesh* TargetMesh, int32 VertexID, TArray<FGeometryScriptBoneWeight>& BoneWeights, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetRootBoneName(UDynamicMesh* TargetMesh, FName& BoneName, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetMaxBoneWeightIndex(UDynamicMesh* TargetMesh, bool& bHasBoneWeights, int32& MaxBoneIndex, FGeometryScriptBoneWeightProfile Profile) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetLargestVertexBoneWeight(UDynamicMesh* TargetMesh, int32 VertexID, FGeometryScriptBoneWeight& BoneWeight, bool& bHasValidBoneWeights, FGeometryScriptBoneWeightProfile Profile) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneInfo(UDynamicMesh* TargetMesh, FName BoneName, bool& bIsValidBoneName, FGeometryScriptBoneInfo& BoneInfo, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneIndex(UDynamicMesh* TargetMesh, FName BoneName, bool& bIsValidBoneName, int32& BoneIndex, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetBoneChildren(UDynamicMesh* TargetMesh, FName BoneName, bool bRecursive, bool& bIsValidBoneName, TArray<FGeometryScriptBoneInfo>& ChildrenInfo, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::GetAllBonesInfo(UDynamicMesh* TargetMesh, TArray<FGeometryScriptBoneInfo>& BonesInfo, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::DiscardBonesFromMesh(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromSkeleton(USkeleton* SourceSkeleton, UDynamicMesh* TargetMesh, FGeometryScriptCopyBonesFromMeshOptions Options, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::CopyBonesFromMesh(UDynamicMesh* SourceMesh, UDynamicMesh* TargetMesh, FGeometryScriptCopyBonesFromMeshOptions Options, UGeometryScriptDebug* Debug) {
    return NULL;
}

UDynamicMesh* UGeometryScriptLibrary_MeshBoneWeightFunctions::ComputeSmoothBoneWeights(UDynamicMesh* TargetMesh, USkeleton* Skeleton, FGeometryScriptSmoothBoneWeightsOptions Options, FGeometryScriptBoneWeightProfile Profile, UGeometryScriptDebug* Debug) {
    return NULL;
}

void UGeometryScriptLibrary_MeshBoneWeightFunctions::BlendBoneWeights(const TArray<FGeometryScriptBoneWeight>& BoneWeightsA, const TArray<FGeometryScriptBoneWeight>& BoneWeightsB, float Alpha, TArray<FGeometryScriptBoneWeight>& Result, UGeometryScriptDebug* Debug) {
}


