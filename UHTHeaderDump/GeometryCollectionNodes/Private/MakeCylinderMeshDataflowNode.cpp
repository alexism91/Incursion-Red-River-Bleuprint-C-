#include "MakeCylinderMeshDataflowNode.h"

FMakeCylinderMeshDataflowNode::FMakeCylinderMeshDataflowNode() {
    this->Radius1 = 0.00f;
    this->Radius2 = 0.00f;
    this->Height = 0.00f;
    this->LengthSamples = 0;
    this->AngleSamples = 0;
    this->Mesh = NULL;
}

