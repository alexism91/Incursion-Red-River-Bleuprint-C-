#include "PCGInnerIntersectionSettings.h"

UPCGInnerIntersectionSettings::UPCGInnerIntersectionSettings() {
    this->DensityFunction = EPCGIntersectionDensityFunction::Multiply;
    this->bKeepZeroDensityPoints = false;
}


