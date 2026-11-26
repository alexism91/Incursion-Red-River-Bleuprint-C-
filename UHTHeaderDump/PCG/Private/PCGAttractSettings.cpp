#include "PCGAttractSettings.h"

UPCGAttractSettings::UPCGAttractSettings() {
    this->Mode = EPCGAttractMode::Closest;
    this->Distance = 100.00f;
    this->bRemoveUnattractedPoints = false;
    this->bUseSourceWeight = false;
    this->bUseTargetWeight = false;
    this->Weight = 1.00f;
    this->bOutputAttractIndex = false;
}


