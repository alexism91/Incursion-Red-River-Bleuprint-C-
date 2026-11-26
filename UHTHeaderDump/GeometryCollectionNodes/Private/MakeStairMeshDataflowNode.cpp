#include "MakeStairMeshDataflowNode.h"

FMakeStairMeshDataflowNode::FMakeStairMeshDataflowNode() {
    this->StairType = EDataflowStairTypeEnum::Linear;
    this->NumSteps = 0;
    this->StepWidth = 0.00f;
    this->StepHeight = 0.00f;
    this->StepDepth = 0.00f;
    this->CurveAngle = 0.00f;
    this->InnerRadius = 0.00f;
    this->Mesh = NULL;
}

