#include "PCGCreatePointsSettings.h"

UPCGCreatePointsSettings::UPCGCreatePointsSettings() {
    this->PointsToCreate.AddDefaulted(1);
    this->CoordinateSpace = EPCGCoordinateSpace::World;
    this->bCullPointsOutsideVolume = false;
}


