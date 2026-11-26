#include "QueryActionComponent.h"

UQueryActionComponent::UQueryActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRealTimeSkyCaptures = false;
    this->bVisibleInRayTracing = false;
    this->bReceivesDecals = false;
    this->CanCharacterStepUpOn = ECB_No;
    this->bEnable = true;
    this->ActionShapeType = ERequestType::Sphere;
    this->SphereRadius = 1000.00f;
    this->SectorRadius = 1000.00f;
    this->SectorAngle = 90.00f;
}

void UQueryActionComponent::SetEnableQueryAction() {
}

void UQueryActionComponent::SetDisableQueryAction() {
}


