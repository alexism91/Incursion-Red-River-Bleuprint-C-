#include "PCGCustomHLSLSettings.h"

UPCGCustomHLSLSettings::UPCGCustomHLSLSettings() {
    this->bExecuteOnGPU = true;
    this->KernelType = EPCGKernelType::PointProcessor;
    this->PointCount = 256;
    this->DispatchThreadCount = EPCGDispatchThreadCount::FromFirstOutputPin;
    this->ThreadCountMultiplier = 1;
    this->FixedThreadCount = 1;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bMuteUnwrittenPinDataErrors = false;
}


