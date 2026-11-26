#include "GeometryScriptNonUniformPointSamplingOptions.h"

FGeometryScriptNonUniformPointSamplingOptions::FGeometryScriptNonUniformPointSamplingOptions() {
    this->MaxSamplingRadius = 0.00f;
    this->SizeDistribution = EGeometryScriptSamplingDistributionMode::Uniform;
    this->SizeDistributionPower = 0.00f;
    this->WeightMode = EGeometryScriptSamplingWeightMode::WeightToRadius;
    this->bInvertWeights = false;
}

