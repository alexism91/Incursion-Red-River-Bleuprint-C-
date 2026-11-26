#include "IRRNavObstacleComponent.h"

UIRRNavObstacleComponent::UIRRNavObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAttachToOwnersRoot = false;
    this->bEnableNavCarve = true;
    this->bStartCarving = true;
    this->Padding = 30.00f;
}

void UIRRNavObstacleComponent::SetObstacleComponent(UPrimitiveComponent* InObstacleComponent) {
}

void UIRRNavObstacleComponent::SetObstacleActor(AActor* InObstacleActor) {
}

void UIRRNavObstacleComponent::SetCarving(bool bCarve) {
}

bool UIRRNavObstacleComponent::IsCarving() const {
    return false;
}

AActor* UIRRNavObstacleComponent::GetObstacleActor() const {
    return NULL;
}

void UIRRNavObstacleComponent::ForceRefresh() {
}


