#include "SightData.h"

FSightData::FSightData() {
    this->bIsScope = false;
    this->ScopeMaterialParameterCollection = NULL;
    this->ScopeRadiusMargin = 0.00f;
    this->ScopeRadiusTransitionGraph = NULL;
    this->DefaultLevelIndex = 0;
    this->FixedDistance = 0.00f;
    this->HandsFOV = 0.00f;
    this->MinimumDistance = 0.00f;
    this->CameraIndependentFOV = 0.00f;
    this->CameraAffectedFOVPercentage = 0.00f;
    this->HandsZoomIn = 0.00f;
    this->SightingRange = 0.00f;
    this->TransitionMultiplier = 0.00f;
    this->SensitivityMultiplier = 0.00f;
}

