#include "VehicleChassisComponent.h"

UVehicleChassisComponent::UVehicleChassisComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WreckRiderTags.AddDefaulted(1);
    this->WheelbaseOverride = 0.00f;
    this->MaxSteeringAngle = 40.00f;
    this->MinSpeedForSteering = 20.00f;
}

void UVehicleChassisComponent::SetDriveState(float NewLinearSpeed, float NewSteeringAngle) {
}

TArray<UVehicleWheelComponent*> UVehicleChassisComponent::GetWheels() const {
    return TArray<UVehicleWheelComponent*>();
}

float UVehicleChassisComponent::GetWheelbase() const {
    return 0.0f;
}

float UVehicleChassisComponent::GetSteeringAngle() const {
    return 0.0f;
}


