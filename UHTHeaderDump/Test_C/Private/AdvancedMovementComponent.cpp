#include "AdvancedMovementComponent.h"
#include "Net/UnrealNetwork.h"

UAdvancedMovementComponent::UAdvancedMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetMoveSpeedCoef = 1.00f;
    this->LocalTargetMoveSpeedCoef = 1.00f;
    this->RuntimeSpeedLimit = 1000.00f;
    this->LocalRuntimeSpeedLimit = 1000.00f;
    this->MinimumMoveSpeed = 50.00f;
    this->MaxAimSpeed = 175.00f;
    this->MaxAimSneakSpeed = 100.00f;
    this->MaxSprintSpeed = 680.00f;
    this->MaxTacSprintSpeed = 900.00f;
    this->MaxSprintSpeedCrouched = 140.00f;
    this->MaxSneakSpeed = 125.00f;
    this->MaxSneakSpeedCrouched = 75.00f;
    this->MaxProneSpeed = 50.00f;
    this->MaxCheatSpeed = 2000.00f;
    this->SprintMultiplier = 1.00f;
    this->AccelerationMultiplier = 1.00f;
    this->bDoSimulationOptimization = true;
    this->bFullySimulatingProxyMovement = false;
    this->bClientCanEverCheckEncroachmentOnNetUpdate = false;
    this->bAllowFullProxySimulation = true;
    this->FullSimulationDistance = 5000.00f;
    this->FullSimulationUnrenderedDistance = 2000.00f;
    this->MaxFramesBetweenAnimFloorUpdates = 8;
    this->bUpdatesFloorWhenNotInFullSimulation = true;
    this->bUpdatesFloorWhenNotInFullSimulationOnlyOnNetUpdate = false;
}

void UAdvancedMovementComponent::SetTargetWalkSpeedCoef(float InTargetSpeedCoef) {
}

void UAdvancedMovementComponent::SetTacSprinting(bool TacSprint) {
}

void UAdvancedMovementComponent::SetSprintMultiplier_Implementation(float NewSprintMultiplier) {
}

void UAdvancedMovementComponent::SetSprinting(bool Sprint) {
}

void UAdvancedMovementComponent::SetSpeedLimit(float InMaxWalkSpeed) {
}

void UAdvancedMovementComponent::SetSneaking(bool Sneak) {
}

void UAdvancedMovementComponent::SetProning(bool Prone) {
}

void UAdvancedMovementComponent::SetAccelerationMultiplier_Implementation(float NewAccelerationMultiplier) {
}

void UAdvancedMovementComponent::ReplicateWalkSpeedCoef_Server_Implementation(float InTargetSpeedCoef, float InMaxSpeed) {
}

void UAdvancedMovementComponent::ReplicateWalkSpeedCoef(float InTargetSpeedCoef, float InMaxSpeed) {
}

void UAdvancedMovementComponent::OnOwnedGameplayTagsUpdated(FGameplayTagContainer Tags) {
}

void UAdvancedMovementComponent::HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

float UAdvancedMovementComponent::GetTargetWalkSpeedCoef() const {
    return 0.0f;
}

float UAdvancedMovementComponent::GetSpeedLimit() const {
    return 0.0f;
}

EIRRMovementStance UAdvancedMovementComponent::GetMovementStance() const {
    return EIRRMovementStance::Proning;
}

float UAdvancedMovementComponent::GetDirectionalSpeedScale() const {
    return 0.0f;
}

FIRRCharacterMovementData UAdvancedMovementComponent::GetCurrentMovementData() const {
    return FIRRCharacterMovementData{};
}

double UAdvancedMovementComponent::CalcFootstepSoundRange() const {
    return 0.0;
}

void UAdvancedMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UAdvancedMovementComponent, TargetMoveSpeedCoef);
    DOREPLIFETIME(UAdvancedMovementComponent, RuntimeSpeedLimit);
    DOREPLIFETIME(UAdvancedMovementComponent, SprintMultiplier);
    DOREPLIFETIME(UAdvancedMovementComponent, AccelerationMultiplier);
}


