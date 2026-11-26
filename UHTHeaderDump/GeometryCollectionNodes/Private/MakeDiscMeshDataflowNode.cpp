#include "MakeDiscMeshDataflowNode.h"

FMakeDiscMeshDataflowNode::FMakeDiscMeshDataflowNode() {
    this->Radius = 0.00f;
    this->AngleSamples = 0;
    this->RadialSamples = 0;
    this->StartAngle = 0.00f;
    this->EndAngle = 0.00f;
    this->Mesh = NULL;
}

