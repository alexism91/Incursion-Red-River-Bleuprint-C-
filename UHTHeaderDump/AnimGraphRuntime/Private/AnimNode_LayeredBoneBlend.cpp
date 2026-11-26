#include "AnimNode_LayeredBoneBlend.h"

FAnimNode_LayeredBoneBlend::FAnimNode_LayeredBoneBlend() {
    this->BlendMode = ELayeredBoneBlendMode::BranchFilter;
    this->LODThreshold = 0;
    this->bMeshSpaceRotationBlend = false;
    this->bRootSpaceRotationBlend = false;
    this->bMeshSpaceScaleBlend = false;
    this->CurveBlendOption = ECurveBlendOption::Override;
    this->bBlendRootMotionBasedOnRootBone = false;
}

