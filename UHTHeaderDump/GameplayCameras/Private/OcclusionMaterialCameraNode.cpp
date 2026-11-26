#include "OcclusionMaterialCameraNode.h"

UOcclusionMaterialCameraNode::UOcclusionMaterialCameraNode() {
    this->OcclusionTransparencyMaterial = NULL;
    this->OcclusionChannel = ECC_Camera;
    this->OcclusionTargetPosition = ECameraNodeOriginPosition::Pawn;
    this->OcclusionTargetOffsetSpace = ECameraNodeSpace::World;
}


