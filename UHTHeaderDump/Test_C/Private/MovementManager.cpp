#include "MovementManager.h"
#include "Net/UnrealNetwork.h"

UMovementManager::UMovementManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->MovementSettings = NULL;
    this->MovementStance = EMovementStance::Stand;
    this->MovementGait = EMovementGait::Walk;
    this->MovementComponent = NULL;
    this->OwnerCharacter = NULL;
}

void UMovementManager::ServerUpdate_Implementation(float NewMovementSpeed, EMovementStance NewMovementStance, EMovementGait NewMovementGait) {
}

void UMovementManager::OnOwnedGameplayTagsUpdated(FGameplayTagContainer Tags) {
}

void UMovementManager::LocalUpdate() {
}

TArray<FMovementGaitItem> UMovementManager::GetStanceSettings(EMovementStance Stance) {
    return TArray<FMovementGaitItem>();
}

float UMovementManager::GetMovementSpeed(EMovementStance Stance, EMovementGait Gait) {
    return 0.0f;
}

void UMovementManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UMovementManager, MovementStance);
    DOREPLIFETIME(UMovementManager, MovementGait);
}


