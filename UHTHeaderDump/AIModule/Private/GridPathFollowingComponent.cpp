#include "GridPathFollowingComponent.h"

UGridPathFollowingComponent::UGridPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->GridManager = NULL;
}


