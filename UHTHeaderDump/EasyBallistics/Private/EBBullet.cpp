#include "EBBullet.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AEBBullet::AEBBullet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerSafe = false;
    this->Definition = NULL;
    this->DebugEnabled = false;
    this->DebugTrailTime = 1.00f;
    this->DebugTrailWidth = 0.00f;
    this->DebugPooling = false;
    this->AtmosphereType = EEBAtmosphereType::AT_Constant;
    this->SeaLevelAirDensity = 1.21f;
    this->SeaLevelSpeedOfSound = 34300.00f;
    this->AirDensityCurve = NULL;
    this->SpeedOfSoundVariesWithAltitude = false;
    this->SpeedOfSoundCurve = NULL;
    this->WorldScale = 1.00f;
    this->SeaLevelAirPressure = 1012.50f;
    this->SeaLevelAirTemperature = 20.00f;
    this->TemperatureLapseRate = 0.01f;
    this->TropopauseAltitude = 11000.00f;
    this->SpecificGasConstant = 287.06f;
    this->SphericalAltitude = false;
    this->SeaLevelRadius = 637100032.00f;
    this->OverrideGravity = false;
    this->SafeLaunch = true;
    this->SafeLaunchIgnoreAttachParent = true;
    this->SafeLaunchIgnoreAllAttached = true;
    this->SafeDelay = 1.00f;
    this->Shotgun = false;
    this->ShotCount = 10;
    this->ShotSpread = 0.01f;
    this->ShotVelocitySpread = 0.01f;
    this->MuzzleVelocityMin = 100000.00f;
    this->MuzzleVelocityMax = 100000.00f;
    this->Spread = 0.00f;
    this->Mass = 0.00f;
    this->Diameter = 0.56f;
    this->FormFactor = 1.00f;
    this->MachDragCurve = NULL;
    this->GrazingAngleExponent = 2.00f;
    this->MinPenetration = 10.00f;
    this->MaxPenetration = 20.00f;
    this->PenetrationNormalization = 0.50f;
    this->PenetrationNormalizationGrazing = 0.00f;
    this->PenetrationEntryAngleSpread = 0.10f;
    this->PenetrationExitAngleSpread = 0.10f;
    this->RicochetProbability = 0.10f;
    this->RicochetProbabilityGrazing = 1.00f;
    this->RicochetRestitution = 0.10f;
    this->RicochetFriction = 0.00f;
    this->RicochetSpread = 0.10f;
    this->SpeedControlsRicochetProbability = false;
    this->AddImpulse = true;
    this->ImpulseMultiplier = 1.00f;
    this->DefaultPenTraceType = EPenTraceType::PT_BackTrace;
    this->MaterialResponseMap = NULL;
    this->MaterialDensityControlsPenetrationDepth = true;
    this->MaterialRestitutionControlsRicochet = true;
    this->AllowComponentCollisions = false;
    this->TraceChannel = ECC_WorldStatic;
    this->TraceComplex = false;
    this->CollisionMargin = 1.00f;
    this->DespawnVelocity = 100.00f;
    this->DoFirstStepImmediately = true;
    this->RandomFirstStepDelta = true;
    this->FixedStep = false;
    this->FixedStepSeconds = 0.10f;
    this->MaxTracesPerStep = 8;
    this->Retrace = true;
    this->RetraceOnAnotherChannel = false;
    this->RetraceChannel = ECC_WorldStatic;
    this->RotateActor = true;
    this->RotateRandomRoll = true;
    this->EnablePooling = true;
    this->MaxPoolSize = 50;
}

void AEBBullet::VelocityChangeBroadcast_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity) {
}

FVector AEBBullet::UpdateVelocity_Implementation(UWorld* World, FVector Location, FVector PreviousVelocity, float DeltaTime) const {
    return FVector{};
}

void AEBBullet::SpawnWithExactVelocity(TSubclassOf<AEBBullet> BulletClass, AActor* BulletOwner, APawn* BulletInstigator, FVector BulletLocation, FVector BulletVelocity, UDataAsset* BulletDefinition, TArray<AEBBullet*>& OutBullets) {
}

void AEBBullet::Spawn(TSubclassOf<AEBBullet> BulletClass, AActor* BulletOwner, APawn* BulletInstigator, FVector BulletLocation, FVector BulletVelocity, UDataAsset* BulletDefinition) {
}

void AEBBullet::ReactivationBroadcast_Implementation(FVector_NetQuantize NewLocation, FVector NewVelocity, AActor* BulletOwner, APawn* BulletInstigator) {
}


void AEBBullet::OnTrace_Implementation(FVector StartLocation, FVector EndLocation) {
}

void AEBBullet::OnImpact_Implementation(bool Ricochet, bool PassedThrough, FVector Location, FVector IncomingVelocity, FVector Normal, FVector ExitLocation, FVector ExitVelocity, FVector Impulse, float PenetrationDepth, AActor* Actor, USceneComponent* Component, FName BoneName, UPhysicalMaterial* PhysMaterial, FHitResult HitResult) {
}

void AEBBullet::OnDeactivated_Implementation() {
}

FVector AEBBullet::GetWind_Implementation(UWorld* World, FVector Location) const {
    return FVector{};
}

float AEBBullet::GetSpeedOfSound_Implementation(UWorld* World, FVector Location) const {
    return 0.0f;
}

float AEBBullet::GetAirDensity_Implementation(UWorld* World, FVector Location) const {
    return 0.0f;
}

void AEBBullet::DeactivationBroadcast_Implementation() {
}

void AEBBullet::Deactivate() {
}

bool AEBBullet::CollisionFilter_Implementation(FHitResult HitResult) const {
    return false;
}

void AEBBullet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEBBullet, Velocity);
    DOREPLIFETIME(AEBBullet, RandomStream);
}


