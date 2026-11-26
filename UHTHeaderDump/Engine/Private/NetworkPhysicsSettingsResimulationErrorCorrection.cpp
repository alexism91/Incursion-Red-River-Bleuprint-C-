#include "NetworkPhysicsSettingsResimulationErrorCorrection.h"

FNetworkPhysicsSettingsResimulationErrorCorrection::FNetworkPhysicsSettingsResimulationErrorCorrection() {
    this->bOverrideResimErrorInterpolationSettings = false;
    this->ResimErrorCorrectionDuration = 0.00f;
    this->ResimErrorMaximumDistanceBeforeSnapping = 0.00f;
    this->ResimErrorMaximumDesyncTimeBeforeSnapping = 0.00f;
    this->ResimErrorDirectionalDecayMultiplier = 0.00f;
}

