#include "VehicleTrackedChassisComponent.h"

UVehicleTrackedChassisComponent::UVehicleTrackedChassisComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WreckRiderTags.AddDefaulted(1);
    this->RoadWheelRadius = 30.00f;
    this->TrackGaugeOverride = 0.00f;
    this->TrackThickness = 5.00f;
    this->SuspensionTravelUp = 20.00f;
    this->SuspensionTravelDown = 20.00f;
    this->bSmoothContact = true;
    this->ContactInterpSpeed = 7.00f;
    this->bSweepWheelSphere = true;
    this->TraceChannel = ECC_WorldStatic;
    this->TrackScrollParameter = TEXT("TrackScroll");
    this->TrackTextureLength = 100.00f;
    this->LeftTrackMaterialSlot = -1;
    this->RightTrackMaterialSlot = -1;
    this->bInvertTrackScroll = false;
    this->Mesh = NULL;
    this->LeftTrackMaterial = NULL;
    this->RightTrackMaterial = NULL;
}

void UVehicleTrackedChassisComponent::SetTrackSpeeds(float LeftSpeed, float RightSpeed) {
}

float UVehicleTrackedChassisComponent::GetTrackGauge() const {
    return 0.0f;
}

float UVehicleTrackedChassisComponent::GetRightTrackSpeed() const {
    return 0.0f;
}

float UVehicleTrackedChassisComponent::GetLeftTrackSpeed() const {
    return 0.0f;
}


