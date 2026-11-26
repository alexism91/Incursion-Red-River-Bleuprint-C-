#include "FootPlacementPelvisSettings.h"

FFootPlacementPelvisSettings::FFootPlacementPelvisSettings() {
    this->MaxOffset = 0.00f;
    this->LinearStiffness = 0.00f;
    this->LinearDamping = 0.00f;
    this->HorizontalRebalancingWeight = 0.00f;
    this->MaxOffsetHorizontal = 0.00f;
    this->HeelLiftRatio = 0.00f;
    this->PelvisHeightMode = EPelvisHeightMode::AllLegs;
    this->ActorMovementCompensationMode = EActorMovementCompensationMode::ComponentSpace;
    this->bEnableInterpolation = false;
    this->bDisablePelvisOffsetInAir = false;
}

