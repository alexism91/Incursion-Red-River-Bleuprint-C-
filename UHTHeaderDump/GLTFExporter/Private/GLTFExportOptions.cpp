#include "GLTFExportOptions.h"

UGLTFExportOptions::UGLTFExportOptions() {
    this->ExportUniformScale = 0.01f;
    this->bExportPreviewMesh = true;
    this->bSkipNearDefaultValues = true;
    this->bIncludeCopyrightNotice = false;
    this->bExportProxyMaterials = true;
    this->bUseImporterMaterialMapping = true;
    this->bExportUnlitMaterials = true;
    this->bExportClearCoatMaterials = true;
    this->bExportClothMaterials = true;
    this->bExportThinTranslucentMaterials = false;
    this->bExportSpecularGlossinessMaterials = true;
    this->bExportEmissiveStrength = true;
    this->BakeMaterialInputs = EGLTFMaterialBakeMode::UseMeshData;
    this->DefaultMaterialBakeFilter = TF_Trilinear;
    this->DefaultMaterialBakeTiling = TA_Wrap;
    this->DefaultLevelOfDetail = 0;
    this->bExportSourceModel = false;
    this->bExportVertexColors = false;
    this->bExportVertexSkinWeights = true;
    this->bMakeSkinnedMeshesRoot = true;
    this->bUseMeshQuantization = false;
    this->bExportLevelSequences = true;
    this->bExportAnimationSequences = true;
    this->TextureImageFormat = EGLTFTextureImageFormat::PNG;
    this->TextureImageQuality = 0;
    this->bExportTextureTransforms = true;
    this->bExportLightmaps = false;
    this->bAdjustNormalmaps = true;
    this->bExportHiddenInGame = false;
    this->bExportLights = true;
    this->bExportCameras = true;
    this->ExportMaterialVariants = EGLTFMaterialVariantMode::UseMeshData;
}

void UGLTFExportOptions::ResetToDefault() {
}


