#include "IRRCrowdObstacleComponent.h"

UIRRCrowdObstacleComponent::UIRRCrowdObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ObstacleRadius = 45.00f;
    this->ObstacleHalfHeight = 90.00f;
    this->bActivateOnBeginPlay = false;
    this->AvoidanceGroup = -2147483648;
    this->bAutoFitToMesh = true;
    this->AutoFitPadding = 8.00f;
    this->MaxAutoCircles = 5;
    this->bIsFittedCircle = false;
}

void UIRRCrowdObstacleComponent::SetObstaclesActive(AActor* Owner, bool bActive) {
}

void UIRRCrowdObstacleComponent::SetObstacleActive(bool bActive) {
}

bool UIRRCrowdObstacleComponent::IsObstacleActive() const {
    return false;
}


