#include "PCGPointNeighborhoodSettings.h"

UPCGPointNeighborhoodSettings::UPCGPointNeighborhoodSettings() {
    this->SearchDistance = 500.00f;
    this->bSetDistanceToAttribute = false;
    this->DistanceAttribute = TEXT("Distance");
    this->bSetAveragePositionToAttribute = false;
    this->AveragePositionAttribute = TEXT("AvgPosition");
    this->SetDensity = EPCGPointNeighborhoodDensityMode::None;
    this->bSetAveragePosition = false;
    this->bSetAverageColor = false;
    this->bWeightedAverage = false;
}


