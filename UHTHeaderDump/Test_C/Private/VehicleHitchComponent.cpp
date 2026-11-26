#include "VehicleHitchComponent.h"
#include "Net/UnrealNetwork.h"

UVehicleHitchComponent::UVehicleHitchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TrailerClass = NULL;
    this->bSpawnTrailerOnBeginPlay = true;
    this->bDestroySpawnedTrailerWithTractor = true;
    this->MaxTowChainLength = 3;
    this->bReleaseWreckedTrailer = true;
    this->bReleaseTrailerWhenTractorWrecked = true;
    this->MaxPlausibleSpeed = 4000.00f;
    this->bDebug = false;
    this->Trailer = NULL;
    this->CoupledTrailer = NULL;
}

AVehicleTrailer* UVehicleHitchComponent::SpawnTrailer() {
    return NULL;
}

void UVehicleHitchComponent::ResetArticulation() {
}

void UVehicleHitchComponent::ReleaseTrailer() {
}

void UVehicleHitchComponent::OnRep_Trailer() {
}

bool UVehicleHitchComponent::HasTrailer() const {
    return false;
}

AVehicleTrailer* UVehicleHitchComponent::GetTrailer() const {
    return NULL;
}

float UVehicleHitchComponent::GetArticulationAngle() const {
    return 0.0f;
}

bool UVehicleHitchComponent::AttachTrailer(AVehicleTrailer* NewTrailer) {
    return false;
}

void UVehicleHitchComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UVehicleHitchComponent, Trailer);
}


