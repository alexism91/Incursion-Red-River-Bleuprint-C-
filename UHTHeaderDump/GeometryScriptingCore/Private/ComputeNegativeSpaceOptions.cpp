#include "ComputeNegativeSpaceOptions.h"

FComputeNegativeSpaceOptions::FComputeNegativeSpaceOptions() {
    this->SampleMethod = ENegativeSpaceSampleMethod::Uniform;
    this->bRequireSearchSampleCoverage = false;
    this->bOnlyConnectedToHull = false;
    this->MaxVoxelsPerDim = 0;
    this->TargetNumSamples = 0;
    this->MinSampleSpacing = 0.00f;
    this->NegativeSpaceTolerance = 0.00f;
    this->MinRadius = 0.00f;
}

