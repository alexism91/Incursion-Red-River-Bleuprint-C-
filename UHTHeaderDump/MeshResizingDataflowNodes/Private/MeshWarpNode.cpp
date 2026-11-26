#include "MeshWarpNode.h"

FMeshWarpNode::FMeshWarpNode() {
    this->MeshToResize = NULL;
    this->SourceMesh = NULL;
    this->TargetMesh = NULL;
    this->BlendedTargetMesh = NULL;
    this->ResizedMesh = NULL;
    this->Alpha = 0.00f;
    this->WarpMethod = EMeshResizingWarpMethod::WrapDeform;
    this->NumInterpolationPoints = 0;
    this->bInterpolateNormals = false;
}

