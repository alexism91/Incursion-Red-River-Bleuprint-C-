#include "VehicleNavObstacleComponent.h"

UVehicleNavObstacleComponent::UVehicleNavObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RefreshInterval = 0.25f;
    this->RefreshDistance = 50.00f;
    this->RefreshAngle = 5.00f;
    this->SettleSpeed = 20.00f;
    this->SettleTime = 1.00f;
    this->ReleaseDelay = 0.50f;
    this->bCarveWhileMoving = false;
}

void UVehicleNavObstacleComponent::SetForceCarve(bool bForce) {
}

bool UVehicleNavObstacleComponent::IsSettled() const {
    return false;
}

bool UVehicleNavObstacleComponent::IsForceCarving() const {
    return false;
}


