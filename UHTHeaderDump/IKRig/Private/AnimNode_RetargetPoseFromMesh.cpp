#include "AnimNode_RetargetPoseFromMesh.h"

FAnimNode_RetargetPoseFromMesh::FAnimNode_RetargetPoseFromMesh() {
    this->RetargetFrom = ERetargetSourceMode::ParentSkeletalMeshComponent;
    this->IKRetargeterAsset = NULL;
    this->LODThreshold = 0;
    this->LODThresholdForIK = 0;
    this->bSuppressWarnings = false;
    this->bUseAttachedParent = false;
}

