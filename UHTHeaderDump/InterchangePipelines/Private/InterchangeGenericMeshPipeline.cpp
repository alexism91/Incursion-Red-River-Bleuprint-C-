#include "InterchangeGenericMeshPipeline.h"

UInterchangeGenericMeshPipeline::UInterchangeGenericMeshPipeline() {
    this->bImportStaticMeshes = true;
    this->bCombineStaticMeshes = false;
    this->bAutoComputeLODScreenSizes = true;
    this->bImportCollision = true;
    this->bCollision = true;
    this->bImportCollisionAccordingToMeshName = true;
    this->bOneConvexHullPerUCX = true;
    this->Collision = EInterchangeMeshCollision::Convex18DOP;
    this->bForceCollisionPrimitiveGeneration = false;
    this->bBuildNanite = true;
    this->bBuildReversedIndexBuffer = false;
    this->bGenerateLightmapUVs = false;
    this->bGenerateDistanceFieldAsIfTwoSided = false;
    this->bSupportFaceRemap = false;
    this->MinLightmapResolution = 64;
    this->SrcLightmapIndex = 0;
    this->DstLightmapIndex = 1;
    this->DistanceFieldResolutionScale = 1.00f;
    this->MaxLumenMeshCards = 12;
    this->bImportSkeletalMeshes = true;
    this->SkeletalMeshImportContentType = EInterchangeSkeletalMeshContentType::All;
    this->LastSkeletalMeshImportContentType = EInterchangeSkeletalMeshContentType::All;
    this->bCombineSkeletalMeshes = true;
    this->bImportMorphTargets = true;
    this->bMergeMorphTargetsWithSameName = true;
    this->bImportVertexAttributes = false;
    this->bUpdateSkeletonReferencePose = false;
    this->bCreatePhysicsAsset = true;
    this->bUseHighPrecisionSkinWeights = false;
    this->ThresholdPosition = 0.00f;
    this->ThresholdTangentNormal = 0.00f;
    this->ThresholdUV = 0.00f;
    this->MorphThresholdPosition = 0.01f;
    this->BoneInfluenceLimit = 0;
    this->bImportGeometryCaches = true;
    this->bFlattenTracks = true;
    this->CompressedPositionPrecision = 0.01f;
    this->CompressedTextureCoordinatesNumberOfBits = 10;
    this->bOverrideTimeRange = false;
    this->FrameStart = 0;
    this->FrameEnd = 1;
    this->MotionVectors = EInterchangeMotionVectorsHandling::NoMotionVectors;
    this->bApplyConstantTopologyOptimizations = false;
    this->bStoreImportedVertexNumbers = false;
    this->bOptimizeIndexBuffers = false;
}

void UInterchangeGenericMeshPipeline::SetCombineSkeletalMeshes(bool InbCombineSkeletalMeshes) {
}

bool UInterchangeGenericMeshPipeline::GetCombineSkeletalMeshes() const {
    return false;
}


