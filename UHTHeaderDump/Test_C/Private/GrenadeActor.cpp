#include "GrenadeActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "IRRGrenadePredictionComponent.h"
#include "Net/UnrealNetwork.h"

AGrenadeActor::AGrenadeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
    this->GrenadeItem = NULL;
    this->bHideGrenadeMeshOnDetonate = true;
    this->bStopGrenadePhysicsOnDetonate = true;
    this->bSettleAfterDetonate = true;
    this->SpinStrength = 2.00f;
    this->DelayedDestroyTime = 5.00f;
    this->bDrawDebug = false;
    this->MassKg = 0.40f;
    this->ReferenceMassKg = 0.40f;
    this->ProjectileRadius = 5.00f;
    this->BaseBounciness = 0.40f;
    this->BaseFriction = 0.35f;
    this->RestSpeedThreshold = 25.00f;
    this->ThrowSpeedMassInfluence = 0.50f;
    this->GravityMassInfluence = 0.20f;
    this->GrenadeExplosionEvent = NULL;
    this->GrenadeBounceEvent = NULL;
    this->GrenadeBounceImpactThreshold = 600.00f;
    this->GrenadeBounceImpactRtpc = NULL;
    this->GrenadeBounceAudioCooldown = 0.10f;
    this->GrenadeBounceNoiseTag = TEXT("GrenadeBounce");
    this->GrenadeExplosionNoiseTag = TEXT("Explosion");
    this->CollisionComp = (USphereComponent*)RootComponent;
    this->GrenadeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrenadeMesh"));
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->GrenadeAkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("GrenadeAkComponent"));
    this->GrenadePredictionComponent = CreateDefaultSubobject<UIRRGrenadePredictionComponent>(TEXT("GrenadePredictionComponent"));
    this->GrenadeAkComponent->SetupAttachment(RootComponent);
    this->GrenadeMesh->SetupAttachment(RootComponent);
}

void AGrenadeActor::Throw_Implementation(const FVector& ThrowDir, float ThrowSpeed, const FVector& HandWorldPos) {
}

void AGrenadeActor::OnProjectileStop(const FHitResult& ImpactResult) {
}

void AGrenadeActor::OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity) {
}

FIRRGrenadePredictionConfig AGrenadeActor::MakePredictionConfig() const {
    return FIRRGrenadePredictionConfig{};
}


float AGrenadeActor::GetWeightedThrowSpeed(float ThrowSpeed) const {
    return 0.0f;
}

UIRRGrenadePredictionComponent* AGrenadeActor::GetPredictionComponent() const {
    return NULL;
}

float AGrenadeActor::GetPostExplodeLifetime() const {
    return 0.0f;
}

float AGrenadeActor::GetMassScale() const {
    return 0.0f;
}

float AGrenadeActor::GetItemExplosionRadiusCm() const {
    return 0.0f;
}

float AGrenadeActor::GetItemExplosionDelay() const {
    return 0.0f;
}

float AGrenadeActor::GetItemEffectTime() const {
    return 0.0f;
}

float AGrenadeActor::GetFlightRestSpeed() const {
    return 0.0f;
}

float AGrenadeActor::GetFlightGravityScale() const {
    return 0.0f;
}

float AGrenadeActor::GetFlightFriction() const {
    return 0.0f;
}

float AGrenadeActor::GetFlightBounciness() const {
    return 0.0f;
}

void AGrenadeActor::Explode_MC_Implementation() {
}

void AGrenadeActor::Explode() {
}

void AGrenadeActor::DelayedDestroy() {
}

void AGrenadeActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrenadeActor, GrenadeItem);
}


