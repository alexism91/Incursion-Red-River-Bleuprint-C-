#include "VehicleRoadWheel.h"

FVehicleRoadWheel::FVehicleRoadWheel() {
    this->TrackSide = EVehicleTrackSide::None;
    this->bFollowsGround = false;
    this->RadiusOverride = 0.00f;
    this->bSpins = false;
    this->bInvertSpin = false;
    this->SpinScale = 0.00f;
}

