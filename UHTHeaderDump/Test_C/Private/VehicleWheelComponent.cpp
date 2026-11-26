#include "VehicleWheelComponent.h"

UVehicleWheelComponent::UVehicleWheelComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CanCharacterStepUpOn = ECB_No;
    this->bSteered = false;
    this->SteeringScale = 1.00f;
    this->MaxSteeringAngle = 40.00f;
    this->SteeringInterpSpeed = 10.00f;
    this->bSpinsWithTravel = true;
    this->SpinScale = 1.00f;
    this->bInvertSpin = false;
    this->WheelRadiusOverride = 0.00f;
    this->SuspensionTravelUp = 25.00f;
    this->SuspensionTravelDown = 25.00f;
    this->bSmoothContact = true;
    this->ContactInterpSpeed = 16.00f;
    this->bSweepTyreSphere = true;
    this->TraceChannel = ECC_WorldStatic;
    this->bDrawDebug = false;
    this->bCanFallOff = false;
    this->FallOffChance = 0.35f;
    this->FallOffSettleTime = 10.00f;
}

void UVehicleWheelComponent::RefreshRestPose() {
}

bool UVehicleWheelComponent::IsTornOff() const {
    return false;
}

bool UVehicleWheelComponent::IsGrounded() const {
    return false;
}

float UVehicleWheelComponent::GetWheelRadius() const {
    return 0.0f;
}

float UVehicleWheelComponent::GetSteeringAngle() const {
    return 0.0f;
}

FVector UVehicleWheelComponent::GetRestWorldLocation() const {
    return FVector{};
}

FVector UVehicleWheelComponent::GetRestRelativeLocation() const {
    return FVector{};
}

TEnumAsByte<EPhysicalSurface> UVehicleWheelComponent::GetContactSurface() const {
    return SurfaceType_Default;
}

FVector UVehicleWheelComponent::GetContactPoint() const {
    return FVector{};
}

float UVehicleWheelComponent::GetContactOffset() const {
    return 0.0f;
}

FVector UVehicleWheelComponent::GetContactNormal() const {
    return FVector{};
}

AActor* UVehicleWheelComponent::GetContactActor() const {
    return NULL;
}


