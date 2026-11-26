#include "VehicleTrailer.h"

AVehicleTrailer::AVehicleTrailer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChassisUpdateIntervals.AddDefaulted(4);
    this->ExplosionDamageObjectTypes.AddDefaulted(1);
    this->MaxArticulationAngle = 75.00f;
    this->bPitchToTerrain = true;
    this->MaxPitch = 15.00f;
    this->PitchInterpSpeed = 4.00f;
    this->GroundTraceChannel = ECC_WorldStatic;
    this->GroundTraceHeight = 300.00f;
    this->GroundTraceDepth = 1000.00f;
    this->TowingHitch = NULL;
}



bool AVehicleTrailer::IsTowed() const {
    return false;
}

AActor* AVehicleTrailer::GetTowingVehicle() const {
    return NULL;
}

UVehicleHitchComponent* AVehicleTrailer::GetTowingHitch() const {
    return NULL;
}

float AVehicleTrailer::GetDrawbarLength() const {
    return 0.0f;
}

FVector AVehicleTrailer::GetCouplingWorldLocation() const {
    return FVector{};
}

FVector AVehicleTrailer::GetAxleWorldLocation() const {
    return FVector{};
}


