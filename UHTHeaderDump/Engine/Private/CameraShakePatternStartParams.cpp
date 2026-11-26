#include "CameraShakePatternStartParams.h"

FCameraShakePatternStartParams::FCameraShakePatternStartParams() {
    this->bIsRestarting = false;
    this->bOverrideDuration = false;
    this->DurationOverride = 0.00f;
}

