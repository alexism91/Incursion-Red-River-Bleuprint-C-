#include "IRRPlayerMovementComponent.h"

UIRRPlayerMovementComponent::UIRRPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseDirectionalCurves = true;
    this->NormalDirectionalScaleCurve = NULL;
    this->SprintDirectionalScaleCurve = NULL;
    this->SprintStartSpeedCurve = NULL;
    this->bUseSprintStartSpeedCurve = true;
    this->bUseSprintStartImpulse = true;
    this->SprintStartCurveDuration = 0.20f;
    this->SprintStartImpulseStrength = 75.00f;
    this->SprintStartImpulseMinForwardDot = 0.75f;
    this->SprintStartMaxAllowedCurrentSpeed = 400.00f;
}


