#include "IRRRangefinderReading.h"

FIRRRangefinderReading::FIRRRangefinderReading() {
    this->RangeMeters = 0.00f;
    this->HorizontalMeters = 0.00f;
    this->InclinationDegrees = 0.00f;
    this->bHasReturn = false;
    this->bScanning = false;
}

