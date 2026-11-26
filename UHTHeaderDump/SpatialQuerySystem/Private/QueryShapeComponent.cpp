#include "QueryShapeComponent.h"

UQueryShapeComponent::UQueryShapeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRealTimeSkyCaptures = false;
    this->bVisibleInRayTracing = false;
    this->bReceivesDecals = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->bEnable = true;
    this->ShapeType = EQueryShapeType::Point;
    this->SphereRadius = 50.00f;
    this->CapsuleHalfHeight = 90.00f;
    this->CapsuleRadius = 50.00f;
    this->Owner = NULL;
}

void UQueryShapeComponent::SetEnableQueryShape() {
}

void UQueryShapeComponent::SetDisableQueryShape() {
}


