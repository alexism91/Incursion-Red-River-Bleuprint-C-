#include "FieldOfViewNetObjectPrioritizerConfig.h"

UFieldOfViewNetObjectPrioritizerConfig::UFieldOfViewNetObjectPrioritizerConfig() {
    this->InnerSphereRadius = 3000.00f;
    this->InnerSpherePriority = 1.00f;
    this->OuterSphereRadius = 10000.00f;
    this->OuterSpherePriority = 0.20f;
    this->ConeFieldOfViewDegrees = 45.00f;
    this->InnerConeLength = 3000.00f;
    this->ConeLength = 20000.00f;
    this->MinConePriority = 0.20f;
    this->MaxConePriority = 1.00f;
    this->LineOfSightWidth = 200.00f;
    this->LineOfSightPriority = 1.00f;
    this->OutsidePriority = 0.10f;
}


