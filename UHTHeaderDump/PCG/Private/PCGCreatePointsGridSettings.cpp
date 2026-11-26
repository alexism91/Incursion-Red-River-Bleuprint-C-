#include "PCGCreatePointsGridSettings.h"

UPCGCreatePointsGridSettings::UPCGCreatePointsGridSettings() {
    this->PointSteepness = 0.50f;
    this->CoordinateSpace = EPCGCoordinateSpace::World;
    this->bSetPointsBounds = true;
    this->bCullPointsOutsideVolume = false;
    this->PointPosition = EPCGPointPosition::CellCenter;
}


