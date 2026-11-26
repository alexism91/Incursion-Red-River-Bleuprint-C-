#include "IRRAISenseVisionData.h"

FIRRAISenseVisionData::FIRRAISenseVisionData() {
    this->VisionDistanceCoef = 0.00f;
    this->VisionSpeedCoef = 0.00f;
    this->FlareMultiplier = 0.00f;
    this->bVisibleLightActive = false;
    this->IlluminationLevel = 0.00f;
}

