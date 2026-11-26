#include "FilterPointSetWithMeshDataflowNode.h"

FFilterPointSetWithMeshDataflowNode::FFilterPointSetWithMeshDataflowNode() {
    this->TargetMesh = NULL;
    this->bKeepInside = false;
    this->WindingThreshold = 0.00f;
}

