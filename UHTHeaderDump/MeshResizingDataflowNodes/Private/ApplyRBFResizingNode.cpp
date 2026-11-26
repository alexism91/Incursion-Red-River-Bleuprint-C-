#include "ApplyRBFResizingNode.h"

FApplyRBFResizingNode::FApplyRBFResizingNode() {
    this->MeshToResize = NULL;
    this->TargetSkeletalMesh = NULL;
    this->TargetSkeletalMeshLODIndex = 0;
    this->TargetMesh = NULL;
    this->ResizedMesh = NULL;
    this->bInterpolateNormals = false;
}

