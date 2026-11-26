#include "ShapeComponent.h"

UShapeComponent::UShapeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = true;
    this->bHiddenInGame = true;
    this->bCastDynamicShadow = false;
    this->bExcludeFromLightAttachmentGroup = true;
    this->bHasCustomNavigableGeometry = EHasCustomNavigableGeometry::Yes;
    this->ShapeBodySetup = NULL;
    this->bDrawOnlyIfSelected = false;
    this->bShouldCollideWhenPlacing = false;
    this->bDynamicObstacle = false;
    this->bUseSystemDefaultObstacleAreaClass = true;
    this->AreaClassOverride = NULL;
    this->LineThickness = 0.00f;
}

void UShapeComponent::SetLineThickness(float Thickness) {
}


