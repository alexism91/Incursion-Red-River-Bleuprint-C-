#include "GeometryScriptCopyMeshToAssetOptions.h"

FGeometryScriptCopyMeshToAssetOptions::FGeometryScriptCopyMeshToAssetOptions() {
    this->bEnableRecomputeNormals = false;
    this->bEnableRecomputeTangents = false;
    this->bEnableRemoveDegenerates = false;
    this->BoneHierarchyMismatchHandling = EGeometryScriptBoneHierarchyMismatchHandling::DoNothing;
    this->bRemapBoneIndicesToMatchAsset = false;
    this->bUseOriginalVertexOrder = false;
    this->bUseBuildScale = false;
    this->bReplaceMaterials = false;
    this->GenerateLightmapUVs = EGeometryScriptGenerateLightmapUVOptions::MatchTargetLODSetting;
    this->bApplyNaniteSettings = false;
    this->bEmitTransaction = false;
    this->bDeferMeshPostEditChange = false;
}

