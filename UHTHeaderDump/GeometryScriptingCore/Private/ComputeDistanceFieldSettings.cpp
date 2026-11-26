#include "ComputeDistanceFieldSettings.h"

FComputeDistanceFieldSettings::FComputeDistanceFieldSettings() {
    this->ComputeMode = EDistanceFieldComputeMode::NarrowBand;
    this->NarrowBandWidth = 0.00f;
    this->NarrowBandUnits = EDistanceFieldUnits::NumberOfVoxels;
    this->bRequirePower2 = false;
}

