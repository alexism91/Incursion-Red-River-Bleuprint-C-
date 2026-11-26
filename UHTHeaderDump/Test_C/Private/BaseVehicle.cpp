#include "BaseVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRSignificanceSystem -ObjectName=IRRSignificanceComponent -FallbackName=IRRSignificanceComponent
#include "Net/UnrealNetwork.h"
#include "VehicleCrowdObstacleComponent.h"
#include "VehicleNavObstacleComponent.h"

ABaseVehicle::ABaseVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->MaxHealth = 750.00f;
    this->bAcceptEngineDamage = true;
    this->WreckLifespan = 0.00f;
    this->StaleDestructionTolerance = 1.00f;
    this->NavObstacle = CreateDefaultSubobject<UVehicleNavObstacleComponent>(TEXT("NavObstacle"));
    this->CrowdObstacle = CreateDefaultSubobject<UVehicleCrowdObstacleComponent>(TEXT("CrowdObstacle"));
    this->Significance = CreateDefaultSubobject<UIRRSignificanceComponent>(TEXT("Significance"));
    this->ChassisUpdateIntervals.AddDefaulted(4);
    this->WreckEffectsMaxLevel = 1;
    this->WreckEffectsFrozenMaxLevel = 4;
    this->WreckEffectsFrozenCount = 2;
    this->WreckEffectsWarmupTime = 4.00f;
    this->bWreckSimulatesPhysics = false;
    this->WreckMassKg = 0.00f;
    this->WreckFreezeTime = 10.00f;
    this->bSmoothSyncWreckOnly = true;
    this->bSpawnWreckEffects = false;
    this->WreckEffect = NULL;
    this->WreckGroundFireChance = 0.50f;
    this->WreckEffectSound = NULL;
    this->WreckEffectCountMin = 2;
    this->WreckEffectCountMax = 5;
    this->WreckEffectAnchorTag = TEXT("WreckFire");
    this->WreckEffectSink = 20.00f;
    this->WreckEffectSpacing = 150.00f;
    this->WreckEffectEdgeMargin = 50.00f;
    this->WreckEffectFootprintMargin = 1.00f;
    this->WreckEffectSupportRadius = 40.00f;
    this->WreckEffectSupportMaxStep = 30.00f;
    this->WreckEffectScaleParameter = TEXT("Scale");
    this->WreckFireScorchDecal = NULL;
    this->WreckFireScorchRadius = 120.00f;
    this->bWreckFireLight = true;
    this->WreckFireLightIntensity = 1500.00f;
    this->WreckFireLightRadius = 1500.00f;
    this->WreckFireLightHeight = 80.00f;
    this->WreckFireLightFlicker = 0.35f;
    this->bExplodeOnDestroyed = false;
    this->ExplosionLiftSpeed = 600.00f;
    this->ExplosionSpinSpeed = 60.00f;
    this->ExplosionOffCentre = 0.50f;
    this->ExplosionDamage = 150.00f;
    this->ExplosionDamageInnerRadius = 300.00f;
    this->ExplosionDamageOuterRadius = 1000.00f;
    this->ExplosionMinDamageFraction = 0.10f;
    this->ExplosionDamageFalloffExponent = 2.00f;
    this->ExplosionDamageType = NULL;
    this->ExplosionDamageObjectTypes.AddDefaulted(1);
    this->bExplosionRequiresLineOfSight = true;
    this->ExplosionLineOfSightChannel = ECC_GameTraceChannel6;
    this->AudioData = NULL;
    this->bAutoStartAudio = true;
    this->AudioUpdateInterval = 0.05f;
    this->bDeriveThrottle = true;
    this->MaxPlausibleSpeed = 150.00f;
    this->Health = 0.00f;
    this->bDestroyed = false;
    this->WreckSeed = 0;
    this->DestroyedServerTime = 0.00f;
    this->bDestructionWitnessed = false;
    this->WreckFireLight = NULL;
    this->AudioEmitterComponent = NULL;
    this->AudioChassis = NULL;
}

void ABaseVehicle::StopVehicleAudio() {
}

void ABaseVehicle::StartVehicleAudio() {
}

void ABaseVehicle::SetThrottle(float NewThrottle) {
}

void ABaseVehicle::OnVehicleSignificanceChanged(int32 NewLevel, bool bIsHidden) {
}

void ABaseVehicle::OnRep_Destroyed() {
}



bool ABaseVehicle::IsVehicleAudioRunning() const {
    return false;
}

UPrimitiveComponent* ABaseVehicle::GetWreckBody_Implementation() const {
    return NULL;
}

float ABaseVehicle::GetThrottle() const {
    return 0.0f;
}

float ABaseVehicle::GetSpeedKph() const {
    return 0.0f;
}

float ABaseVehicle::GetRpm() const {
    return 0.0f;
}

float ABaseVehicle::GetHealthFraction() const {
    return 0.0f;
}

void ABaseVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABaseVehicle, Health);
    DOREPLIFETIME(ABaseVehicle, bDestroyed);
    DOREPLIFETIME(ABaseVehicle, DestructionEvent);
    DOREPLIFETIME(ABaseVehicle, WreckSeed);
    DOREPLIFETIME(ABaseVehicle, DestroyedServerTime);
}


