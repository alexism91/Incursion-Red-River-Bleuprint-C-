#include "UniformPointSamplingDataflowNode.h"

FUniformPointSamplingDataflowNode::FUniformPointSamplingDataflowNode() {
    this->TargetMesh = NULL;
    this->SamplingRadius = 0.00f;
    this->MaxNumSamples = 0;
    this->SubSampleDensity = 0.00f;
    this->RandomSeed = 0;
    this->NumSamplePoints = 0;
}

