#include "PCGAttributeRemapSettings.h"

UPCGAttributeRemapSettings::UPCGAttributeRemapSettings() {
    this->InRangeMin = 0.00f;
    this->InRangeMax = 1.00f;
    this->OutRangeMin = 0.00f;
    this->OutRangeMax = 1.00f;
    this->bClampToUnitRange = false;
    this->bIgnoreValuesOutsideInputRange = false;
    this->bAllowInverseRange = false;
}


