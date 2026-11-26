#include "PCGOuterIntersectionSettings.h"

UPCGOuterIntersectionSettings::UPCGOuterIntersectionSettings() {
    this->DensityFunction = EPCGIntersectionDensityFunction::Multiply;
    this->bIgnorePinsWithNoInput = false;
    this->bKeepZeroDensityPoints = false;
}


