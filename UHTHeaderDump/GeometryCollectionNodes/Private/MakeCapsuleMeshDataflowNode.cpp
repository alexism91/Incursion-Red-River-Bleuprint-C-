#include "MakeCapsuleMeshDataflowNode.h"

FMakeCapsuleMeshDataflowNode::FMakeCapsuleMeshDataflowNode() {
    this->Radius = 0.00f;
    this->SegmentLength = 0.00f;
    this->NumHemisphereArcSteps = 0;
    this->NumCircleSteps = 0;
    this->NumSegmentSteps = 0;
    this->Mesh = NULL;
}

