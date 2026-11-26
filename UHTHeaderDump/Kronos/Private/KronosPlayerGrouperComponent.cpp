#include "KronosPlayerGrouperComponent.h"
#include "Net/UnrealNetwork.h"

UKronosPlayerGrouperComponent::UKronosPlayerGrouperComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoAssignGroupsToPlayers = true;
    this->bUseSingleGroupIfReservationsUnavailable = true;
    this->bLogGroups = true;
    this->bWarnIfReservationsUnavailable = false;
}

bool UKronosPlayerGrouperComponent::SwapPlayerGroups(const FUniqueNetIdRepl& PlayerA, const FUniqueNetIdRepl& PlayerB) {
    return false;
}

int32 UKronosPlayerGrouperComponent::RemovePlayerFromGroup(const FUniqueNetIdRepl& PlayerId) {
    return 0;
}

void UKronosPlayerGrouperComponent::OnRep_PlayerGroupMappings(const TArray<FKronosPlayerGroupMapping>& OldPlayerGroupMappings) {
}

int32 UKronosPlayerGrouperComponent::GetLocalPlayerGroupIndex() const {
    return 0;
}

int32 UKronosPlayerGrouperComponent::GetGroupIndexOfPlayer(const FUniqueNetIdRepl& PlayerId) const {
    return 0;
}

int32 UKronosPlayerGrouperComponent::GetGroupIndexAssignment_Implementation(const FUniqueNetIdRepl& PlayerId) {
    return 0;
}

TArray<FUniqueNetIdRepl> UKronosPlayerGrouperComponent::GetAllPlayersInGroup(int32 GroupIndex) const {
    return TArray<FUniqueNetIdRepl>();
}

void UKronosPlayerGrouperComponent::DumpPlayerGroups() const {
}

int32 UKronosPlayerGrouperComponent::CreateUniqueGroupIndex() {
    return 0;
}

bool UKronosPlayerGrouperComponent::ChangePlayerGroup(const FUniqueNetIdRepl& PlayerId, int32 NewGroupIndex) {
    return false;
}

int32 UKronosPlayerGrouperComponent::AssignGroupToPlayer(const FUniqueNetIdRepl& PlayerId) {
    return 0;
}

void UKronosPlayerGrouperComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UKronosPlayerGrouperComponent, PlayerGroupMappings);
}


