#include "VehicleAnimInstance.h"

UVehicleAnimInstance::UVehicleAnimInstance() {
    this->WheelSpeed = 0.00f;
    this->WheelAngle = 0.00f;
    this->WheelSpeedOffset = 0.00f;
    this->DoorAngle = 0.00f;
    this->bDriveFromOwningActor = true;
    this->WheelRadius = 55.00f;
    this->Wheelbase = 400.00f;
    this->MaxSteeringAngle = 35.00f;
    this->bInvertWheelSpin = false;
    this->bInvertSteering = false;
    this->SteeringInterpSpeed = 8.00f;
    this->MinSpeedForSteering = 20.00f;
    this->MaxPlausibleSpeed = 4000.00f;
    this->bDebug = false;
    this->LinearSpeed = 0.00f;
    this->YawRate = 0.00f;
}

float UVehicleAnimInstance::WheelSpinRateForSpeed(float InLinearSpeed, float InWheelRadius) {
    return 0.0f;
}

float UVehicleAnimInstance::SteeringAngleForYawRate(float YawRateDegrees, float InLinearSpeed, float InWheelbase, float InMaxSteeringAngle, float InMinSpeedForSteering) {
    return 0.0f;
}

void UVehicleAnimInstance::SetVehicleSpeed(float NewLinearSpeed) {
}

void UVehicleAnimInstance::SetSteeringAngle(float NewSteeringAngle) {
}

float UVehicleAnimInstance::GetLinearSpeed() const {
    return 0.0f;
}


