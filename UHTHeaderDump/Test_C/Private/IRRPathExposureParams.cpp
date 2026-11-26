#include "IRRPathExposureParams.h"

FIRRPathExposureParams::FIRRPathExposureParams() {
    this->SampleSpacing = 0.00f;
    this->MaxHostileDistance = 0.00f;
    this->MaxSamples = 0;
    this->NominalSpeed = 0.00f;
    this->TraceChannel = ECC_WorldStatic;
}

