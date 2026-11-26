#include "UPSGroupMovementManager.h"

UUPSGroupMovementManager::UUPSGroupMovementManager() {
}

TArray<AUPSMovementGroup*> UUPSGroupMovementManager::GetMovementGroups() {
    return TArray<AUPSMovementGroup*>();
}

ACharacter* UUPSGroupMovementManager::GetMovementGroupLeaderFromMember(const ACharacter* GroupMember) const {
    return NULL;
}

AUPSMovementGroup* UUPSGroupMovementManager::GetMovementGroup(const ACharacter* MovementGroupLeaderCharacter) const {
    return NULL;
}

UUPSGroupMovementManager* UUPSGroupMovementManager::GetGroupMovementManager() {
    return NULL;
}


