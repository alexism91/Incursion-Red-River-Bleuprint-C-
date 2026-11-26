#include "Convoy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "IRRMovementGroup.h"
#include "Net/UnrealNetwork.h"

AConvoy::AConvoy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Route = NULL;
    this->CruiseSpeed = 800.00f;
    this->Acceleration = 400.00f;
    this->Deceleration = 600.00f;
    this->StartLeadDistance = 0.00f;
    this->bStopLeadAtRouteEnd = true;
    this->bAutoStart = false;
    this->bSpawnVehiclesOverFrames = true;
    this->bDespawnVehiclesOnDestroy = true;
    this->bAnchorActorToColumnCenter = true;
    this->bStopWhenLeadDestroyed = true;
    this->ProbeSpacing = 1000.00f;
    this->bDebugConvoyState = false;
    this->bDebugEscortFormation = false;
    this->EscortGroupClass = AIRRMovementGroup::StaticClass();
    this->EscortAnchorOffset = 0.00f;
    this->bHoldForEngagedEscorts = true;
    this->bRegroupAfterCombat = true;
    this->RegroupSlotDistance = 400.00f;
    this->RegroupTimeout = 45.00f;
    this->EscortKeepOutPadding = 60.00f;
    this->EscortKeepOutLeadTime = 1.00f;
    this->bKeepEscortsOutOfColumnGaps = true;
    this->bCapEscortOptimization = true;
    this->EscortMaxOptimizationLevel = EAIOptimizationLevel::Level2;
    this->bHuntObserverOnStrike = true;
    this->ObserverEstimateErrorFraction = 0.15f;
    this->ObserverEstimateMinError = 1000.00f;
    this->ObserverEstimateMaxError = 5000.00f;
    this->bSpawnEscortsOnStart = false;
    this->EscortSpawnHoldTimeout = 20.00f;
    this->bEscortSpawnPending = false;
    this->EscortGroup = NULL;
    this->EscortSpeedCoef = 1.00f;
    this->bEscortEngaged = false;
    this->bEscortRegrouping = false;
    this->bEscortsBrokeOff = false;
    this->EscortSpawnPoint = NULL;
    this->bStopForBlockedPath = true;
    this->bStopForAnyPawn = false;
    this->bStopForEscorts = true;
    this->BlockDetectionDistance = 800.00f;
    this->BlockDetectionRadius = 120.00f;
    this->BlockReactionTime = 0.35f;
    this->BlockApproachReach = 300.00f;
    this->BlockApproachPrediction = 0.60f;
    this->EmergencyDeceleration = 3000.00f;
    this->HardStopDistance = 120.00f;
    this->BlockClearDelay = 1.00f;
    this->BlockCheckInterval = 0.15f;
    this->MaxBlockHoldTime = 0.00f;
    this->bPredictLeadDistance = true;
    this->PredictionCorrectionSpeed = 10.00f;
    this->MaxPredictionTime = 0.50f;
    this->PredictionSnapDistance = 2000.00f;
    this->bDeriveVehiclePositionsOnClients = true;
    this->LeadDistanceAlongSpline = 0.00f;
    this->PredictedLeadDistance = 0.00f;
    this->CurrentSpeed = 0.00f;
    this->bMoving = false;
    this->bReachedEnd = false;
    this->bBlocked = false;
    this->BlockingActor = NULL;
    this->bWipedOutByAirstrike = false;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->PlacedRoute = NULL;
    this->Billboard->SetupAttachment(RootComponent);
}

void AConvoy::StopConvoy() {
}

bool AConvoy::StartConvoy() {
    return false;
}

int32 AConvoy::SpawnEscortsInFormation() {
    return 0;
}

bool AConvoy::SetRoute(AConvoyRoute* NewRoute) {
    return false;
}

void AConvoy::OnRep_LeadDistanceAlongSpline() {
}











bool AConvoy::IsWipedOut() const {
    return false;
}

bool AConvoy::IsMoving() const {
    return false;
}

bool AConvoy::IsBlocked() const {
    return false;
}

bool AConvoy::HasReachedEnd() const {
    return false;
}

float AConvoy::GetRouteProgress() const {
    return 0.0f;
}

AIRRMovementGroup* AConvoy::GetOrCreateEscortGroup() {
    return NULL;
}

AActor* AConvoy::GetLeadVehicle() const {
    return NULL;
}

float AConvoy::GetLeadDistance() const {
    return 0.0f;
}

float AConvoy::GetFormationLength() const {
    return 0.0f;
}

FTransform AConvoy::GetColumnCenterTransform() const {
    return FTransform{};
}

float AConvoy::GetColumnCenterDistance() const {
    return 0.0f;
}

AActor* AConvoy::GetBlockingActor() const {
    return NULL;
}

int32 AConvoy::GetAliveVehicleCount() const {
    return 0;
}

void AConvoy::DespawnVehicles() {
}

void AConvoy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConvoy, Route);
    DOREPLIFETIME(AConvoy, bEscortSpawnPending);
    DOREPLIFETIME(AConvoy, bEscortEngaged);
    DOREPLIFETIME(AConvoy, bEscortRegrouping);
    DOREPLIFETIME(AConvoy, bEscortsBrokeOff);
    DOREPLIFETIME(AConvoy, LeadDistanceAlongSpline);
    DOREPLIFETIME(AConvoy, CurrentSpeed);
    DOREPLIFETIME(AConvoy, Vehicles);
    DOREPLIFETIME(AConvoy, bMoving);
    DOREPLIFETIME(AConvoy, bReachedEnd);
    DOREPLIFETIME(AConvoy, bBlocked);
    DOREPLIFETIME(AConvoy, BlockingActor);
    DOREPLIFETIME(AConvoy, bWipedOutByAirstrike);
}


