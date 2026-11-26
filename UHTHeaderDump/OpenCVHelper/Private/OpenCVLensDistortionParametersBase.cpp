#include "OpenCVLensDistortionParametersBase.h"

FOpenCVLensDistortionParametersBase::FOpenCVLensDistortionParametersBase() {
    this->K1 = 0.00f;
    this->K2 = 0.00f;
    this->P1 = 0.00f;
    this->P2 = 0.00f;
    this->K3 = 0.00f;
    this->K4 = 0.00f;
    this->K5 = 0.00f;
    this->K6 = 0.00f;
    this->bUseFisheyeModel = false;
}

