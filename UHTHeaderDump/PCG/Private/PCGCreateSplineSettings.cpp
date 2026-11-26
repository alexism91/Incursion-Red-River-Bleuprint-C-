#include "PCGCreateSplineSettings.h"

UPCGCreateSplineSettings::UPCGCreateSplineSettings() {
    this->Mode = EPCGCreateSplineMode::CreateDataOnly;
    this->bClosedLoop = false;
    this->bLinear = false;
    this->bApplyCustomTangents = false;
}


