#include "VehicleCrowdObstacleComponent.h"

UVehicleCrowdObstacleComponent::UVehicleCrowdObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableCrowdObstacle = true;
    this->Padding = 20.00f;
    this->MaxCircleRadius = 100.00f;
    this->CircleSpacing = 1.50f;
    this->MaxCircles = 8;
    this->MinHalfHeight = 150.00f;
    this->MaxReportedSpeed = 3000.00f;
    this->bStayActiveWhileCarved = false;
    this->NavObstacle = NULL;
}

void UVehicleCrowdObstacleComponent::RebuildCircles() {
}

bool UVehicleCrowdObstacleComponent::IsObstacleActive() const {
    return false;
}


