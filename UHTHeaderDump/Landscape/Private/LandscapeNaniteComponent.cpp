#include "LandscapeNaniteComponent.h"

ULandscapeNaniteComponent::ULandscapeNaniteComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bVisibleInRayTracing = false;
    this->bEvaluateWorldPositionOffset = false;
    this->bEnabled = true;
}


