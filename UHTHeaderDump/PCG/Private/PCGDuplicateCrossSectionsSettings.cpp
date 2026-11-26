#include "PCGDuplicateCrossSectionsSettings.h"

UPCGDuplicateCrossSectionsSettings::UPCGDuplicateCrossSectionsSettings() {
    this->bExtrudeVectorAsAttribute = false;
    this->bOutputSplineIndexAttribute = true;
    this->SplineIndexAttributeName = TEXT("SplineIndex");
}


