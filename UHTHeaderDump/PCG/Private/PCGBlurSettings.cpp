#include "PCGBlurSettings.h"

UPCGBlurSettings::UPCGBlurSettings() {
    this->NumIterations = 1;
    this->SearchDistance = 1000.00f;
    this->BlurMode = EPCGBlurElementMode::Constant;
    this->bUseCustomStandardDeviation = false;
    this->CustomStandardDeviation = 1.00f;
}


