#include "VehicleChassisBase.h"

UVehicleChassisBase::UVehicleChassisBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bMeasureOwnerMotion = true;
    this->bStandDownWhenDestroyed = true;
    this->WreckRiderTags.AddDefaulted(1);
    this->MaxPlausibleSpeed = 4000.00f;
    this->RideHeight = 0.00f;
    this->PitchScale = 1.00f;
    this->RollScale = 1.00f;
    this->MaxPitch = 20.00f;
    this->MaxRoll = 20.00f;
    this->BodyInterpSpeed = 7.00f;
    this->bTraceComplex = true;
    this->bReportContactSurface = false;
    this->bUpdateOnlyWhenRendered = true;
    this->RenderedGracePeriod = 0.50f;
    this->bDebug = false;
}

void UVehicleChassisBase::SnapToGround() {
}

void UVehicleChassisBase::SettleWheelsOntoWreck(UPrimitiveComponent* Body, int32 Seed) {
}

void UVehicleChassisBase::SetSupportPoint(const FVector& ActorSpaceLocation) {
}

void UVehicleChassisBase::SetDistanceDetail(bool bFrozen, float UpdateInterval) {
}

void UVehicleChassisBase::RemoveIgnoredActor(AActor* Actor) {
}

void UVehicleChassisBase::RefreshWheels() {
}

bool UVehicleChassisBase::HasSupportPoint() const {
    return false;
}

float UVehicleChassisBase::GetYawRate() const {
    return 0.0f;
}

float UVehicleChassisBase::GetLinearSpeed() const {
    return 0.0f;
}

int32 UVehicleChassisBase::GetGroundedWheelCount() const {
    return 0;
}

void UVehicleChassisBase::CollapseOntoWreckBody(USceneComponent* Body) {
}

void UVehicleChassisBase::ClearSupportPoint() {
}

void UVehicleChassisBase::AddIgnoredActor(AActor* Actor) {
}


