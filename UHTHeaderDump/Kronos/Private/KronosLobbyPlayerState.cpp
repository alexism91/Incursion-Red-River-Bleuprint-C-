#include "KronosLobbyPlayerState.h"
#include "Net/UnrealNetwork.h"

AKronosLobbyPlayerState::AKronosLobbyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bServerIsReady = false;
}

void AKronosLobbyPlayerState::TogglePlayerIsReady() {
}

void AKronosLobbyPlayerState::SetPlayerIsReady(bool bReady) {
}

void AKronosLobbyPlayerState::SetPlayerData(const TArray<int32>& NewPlayerData) {
}

void AKronosLobbyPlayerState::ServerSetPlayerIsReady_Implementation(bool bReady) {
}

void AKronosLobbyPlayerState::ServerSetPlayerData_Implementation(const TArray<int32>& NewPlayerData) {
}

void AKronosLobbyPlayerState::OnRep_PlayerData() {
}

void AKronosLobbyPlayerState::OnRep_IsReady() {
}


bool AKronosLobbyPlayerState::GetPlayerIsReady() const {
    return false;
}

TArray<int32> AKronosLobbyPlayerState::GetPlayerData() const {
    return TArray<int32>();
}

void AKronosLobbyPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKronosLobbyPlayerState, bServerIsReady);
    DOREPLIFETIME(AKronosLobbyPlayerState, ServerPlayerData);
}


