#include "PCGElevationIsolinesSettings.h"

UPCGElevationIsolinesSettings::UPCGElevationIsolinesSettings() {
    this->ElevationStart = 0.00f;
    this->ElevationEnd = 1000.00f;
    this->ElevationIncrement = 100.00f;
    this->Resolution = 100.00f;
    this->bAddTagOnOutputForSameElevation = false;
    this->bProjectSurfaceNormal = false;
    this->bOutputAsSpline = false;
    this->bLinearSpline = false;
}


