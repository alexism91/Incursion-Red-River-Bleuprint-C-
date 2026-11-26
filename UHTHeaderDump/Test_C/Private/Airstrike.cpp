#include "Airstrike.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DamageType -FallbackName=DamageType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraComponent -FallbackName=NiagaraComponent
#include "Net/UnrealNetwork.h"

AAirstrike::AAirstrike(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MissileMesh"));
    this->MissileMesh = (UStaticMeshComponent*)RootComponent;
    this->TrailEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("TrailEffect"));
    this->AudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
    this->ImpactAreaAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("ImpactAreaAudioComponent"));
    this->ExplosionEffect = NULL;
    this->ExplosionEffectScale = 1.00f;
    this->IncomingEvent = NULL;
    this->IncomingTimeToImpactRtpc = NULL;
    this->IncomingProgressRtpc = NULL;
    this->FlybyEvent = NULL;
    this->FlybyLeadTime = 1.00f;
    this->ExplosionEvent = NULL;
    this->ExplosionCameraShake = NULL;
    this->ShakeInnerRadius = 1500.00f;
    this->ShakeOuterRadius = 12000.00f;
    this->ShakeFalloff = 1.00f;
    this->ApproachHeight = 40000.00f;
    this->DiveAngle = 0.00f;
    this->ApproachBearing = 0.00f;
    this->bRandomizeApproachBearing = true;
    this->Speed = 20000.00f;
    this->CallInDelay = 0.00f;
    this->LaunchDelay = 1.50f;
    this->bTrackTarget = true;
    this->bDetonateOnGeometry = true;
    this->FlightCollisionChannel = ECC_Visibility;
    this->MaxFlightTime = 30.00f;
    this->PostDetonationLifetime = 8.00f;
    this->StaleImpactTolerance = 1.00f;
    this->Damage = 400.00f;
    this->DamageInnerRadius = 400.00f;
    this->DamageOuterRadius = 2500.00f;
    this->MinDamageFraction = 0.15f;
    this->DamageFalloffCurve = NULL;
    this->DamageFalloffExponent = 2.00f;
    this->LethalRadius = 800.00f;
    this->DamageType = UDamageType::StaticClass();
    this->OrdnanceItem = NULL;
    this->BlastObjectTypes.AddDefaulted(1);
    this->bRequireLineOfSight = true;
    this->BlastLineOfSightChannel = ECC_GameTraceChannel6;
    this->BlastBoneName = TEXT("spine_03");
    this->ExplosionImpulseStrength = 60000.00f;
    this->ImpulseRadius = 0.00f;
    this->bImpulseVelocityChange = false;
    this->ImpulseFalloff = RIF_Linear;
    this->ImpulseObjectTypes.AddDefaulted(4);
    this->AINoiseTag = TEXT("Explosion");
    this->bWarnAI = true;
    this->AIDangerRadiusPadding = 300.00f;
    this->bDebug = false;
    this->TargetActor = NULL;
    this->LaunchServerTime = 0.00f;
    this->CallInTime = 0.00f;
    this->WarningTime = 0.00f;
    this->AudioComponent->SetupAttachment(RootComponent);
    this->ImpactAreaAudioComponent->SetupAttachment(RootComponent);
    this->TrailEffect->SetupAttachment(RootComponent);
}

void AAirstrike::OnRep_Impact() {
}




void AAirstrike::InitializeStrike(AActor* InTargetActor, FVector InAimPoint, FVector InTargetOffset, float ExtraLaunchDelay) {
}

bool AAirstrike::HasDetonated() const {
    return false;
}

float AAirstrike::GetTimeToImpact() const {
    return 0.0f;
}

FVector AAirstrike::GetLaunchLocation() const {
    return FVector{};
}

FVector AAirstrike::GetAimPoint() const {
    return FVector{};
}

void AAirstrike::Detonate() {
}

void AAirstrike::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAirstrike, AimPoint);
    DOREPLIFETIME(AAirstrike, TargetActor);
    DOREPLIFETIME(AAirstrike, TargetOffset);
    DOREPLIFETIME(AAirstrike, ApproachOffset);
    DOREPLIFETIME(AAirstrike, LaunchLocation);
    DOREPLIFETIME(AAirstrike, LaunchServerTime);
    DOREPLIFETIME(AAirstrike, CallInTime);
    DOREPLIFETIME(AAirstrike, WarningTime);
    DOREPLIFETIME(AAirstrike, Impact);
}


