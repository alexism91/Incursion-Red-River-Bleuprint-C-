#include "Airdrop.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRNavObstacleComponent -FallbackName=IRRNavObstacleComponent
#include "Net/UnrealNetwork.h"

AAirdrop::AAirdrop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->PayloadClass = NULL;
    this->WarningDuration = 8.00f;
    this->ApproachHeight = 30000.00f;
    this->LandingHeight = 800.00f;
    this->AirDuration = 20.00f;
    this->LandingDuration = 3.00f;
    this->FallLinearDamping = 0.00f;
    this->FallAngularDamping = 0.00f;
    this->BounceUpSpeed = 400.00f;
    this->BounceHorizontalKeep = 0.20f;
    this->BounceRestitution = 0.25f;
    this->BounceLinearDamping = 0.80f;
    this->BounceAngularDamping = 2.00f;
    this->SettleSpeed = 80.00f;
    this->SettleHoldTime = 0.25f;
    this->FallHeightCurve = NULL;
    this->MaxDropDriftRadius = 1500.00f;
    this->bAutoStart = false;
    this->bDespawnPayloadOnDestroy = true;
    this->bAnchorActorToPayload = true;
    this->bDebug = false;
    this->bDespawnAfterLifetime = true;
    this->LifeTime = 180.00f;
    this->DespawnMinDistanceToAnyPlayer = 15000.00f;
    this->bDespawnRequireOutOfSight = true;
    this->DespawnSightProbeHalfHeight = 150.00f;
    this->DespawnSightProbeRadius = 150.00f;
    this->DespawnPollInterval = 1.00f;
    this->MaxDespawnWaitTime = 300.00f;
    this->State = EAirdropState::Idle;
    this->StateStartServerTime = 0.00f;
    this->Payload = NULL;
    this->AbortedHeightAboveDrop = -1.00f;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->NavObstacle = CreateDefaultSubobject<UIRRNavObstacleComponent>(TEXT("NavObstacle"));
    this->Billboard->SetupAttachment(RootComponent);
}

bool AAirdrop::StartAirdrop() {
    return false;
}

bool AAirdrop::SetDropLocation(FVector NewDropLocation) {
    return false;
}

void AAirdrop::SetDebugDraw(bool bEnable) {
}

bool AAirdrop::ResetAirdrop() {
    return false;
}

void AAirdrop::OnRep_State() {
}

void AAirdrop::OnFallHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void AAirdrop::OnDespawnSightCheckComplete(const TArray<FVector>& ValidLocations, const TArray<int32>& UnseenCandidates) {
}

void AAirdrop::MarkAirdropLooted() {
}








bool AAirdrop::IsWarning() const {
    return false;
}

bool AAirdrop::IsLooted() const {
    return false;
}

bool AAirdrop::IsLanding() const {
    return false;
}

bool AAirdrop::IsInAir() const {
    return false;
}

bool AAirdrop::IsDespawned() const {
    return false;
}

bool AAirdrop::IsAirdropActive() const {
    return false;
}

bool AAirdrop::IsAborted() const {
    return false;
}

bool AAirdrop::HasLanded() const {
    return false;
}

float AAirdrop::GetStateProgress() const {
    return 0.0f;
}

float AAirdrop::GetStateElapsed() const {
    return 0.0f;
}

FTransform AAirdrop::GetPayloadTransform() const {
    return FTransform{};
}

float AAirdrop::GetFallProgress() const {
    return 0.0f;
}

FVector AAirdrop::GetDropLocation() const {
    return FVector{};
}

EAirdropState AAirdrop::GetAirdropState() const {
    return EAirdropState::Idle;
}

FVector AAirdrop::GetAimLocation() const {
    return FVector{};
}

UPrimitiveComponent* AAirdrop::FindSimulatablePrimitive_Implementation(AActor* Actor) const {
    return NULL;
}

void AAirdrop::DespawnPayload() {
}

void AAirdrop::DespawnAirdrop() {
}

void AAirdrop::AbortAirdrop() {
}

void AAirdrop::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAirdrop, AimLocation);
    DOREPLIFETIME(AAirdrop, DropLocation);
    DOREPLIFETIME(AAirdrop, State);
    DOREPLIFETIME(AAirdrop, StateStartServerTime);
    DOREPLIFETIME(AAirdrop, Payload);
    DOREPLIFETIME(AAirdrop, AbortedHeightAboveDrop);
}


