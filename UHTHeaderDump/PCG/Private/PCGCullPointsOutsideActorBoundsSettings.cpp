#include "PCGCullPointsOutsideActorBoundsSettings.h"

UPCGCullPointsOutsideActorBoundsSettings::UPCGCullPointsOutsideActorBoundsSettings() {
    this->BoundsExpansion = 0.00f;
    this->Mode = EPCGCullPointsMode::Ordered;
}


