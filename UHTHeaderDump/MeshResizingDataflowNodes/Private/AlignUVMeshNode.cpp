#include "AlignUVMeshNode.h"

FAlignUVMeshNode::FAlignUVMeshNode() {
    this->ResizingMesh = NULL;
    this->BaseMesh = NULL;
    this->UVChannelIndex = 0;
    this->BaseUVChannelIndex = 0;
    this->bScale = false;
}

