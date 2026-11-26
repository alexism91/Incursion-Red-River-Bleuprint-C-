#include "NonUniformPointSamplingDataflowNode.h"

FNonUniformPointSamplingDataflowNode::FNonUniformPointSamplingDataflowNode() {
    this->TargetMesh = NULL;
    this->SamplingRadius = 0.00f;
    this->MaxNumSamples = 0;
    this->SubSampleDensity = 0.00f;
    this->RandomSeed = 0;
    this->MaxSamplingRadius = 0.00f;
    this->SizeDistribution = ENonUniformSamplingDistributionMode::ENonUniformSamplingDistributionMode_Uniform;
    this->SizeDistributionPower = 0.00f;
    this->NumSamplePoints = 0;
}

