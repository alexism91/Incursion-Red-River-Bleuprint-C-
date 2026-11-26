#include "UPSPatrolComponent.h"

UUPSPatrolComponent::UUPSPatrolComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitialMovementPatrolPoint = NULL;
    this->PatrolMovementDirection = EPatrolMovementType::Clockwise;
    this->bDisableVisualization = false;
    this->MaxDistanceToInitialPatrolPoint = 1500.00f;
    this->CurrentPatrolPoint = NULL;
}

void UUPSPatrolComponent::UpdateMovementPatrolPoint(AUPSPatrolPoint* PatrolPoint) {
}

void UUPSPatrolComponent::SetPatrolMovementType(EPatrolMovementType MovementType) {
}

void UUPSPatrolComponent::InitializeInitialPatrolPoint() {
}

AUPSPatrolPoint* UUPSPatrolComponent::GetCurrentPatrolPoint() const {
    return NULL;
}


