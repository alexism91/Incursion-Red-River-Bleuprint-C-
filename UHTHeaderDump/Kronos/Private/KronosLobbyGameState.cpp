#include "KronosLobbyGameState.h"
#include "EKronosGameStateType.h"
#include "Net/UnrealNetwork.h"

AKronosLobbyGameState::AKronosLobbyGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateType = EKronosGameStateType::Lobby;
    this->bRelocatePlayers = true;
    this->LocalPlayerStartTag = TEXT("Local");
    this->LobbyState = EKronosLobbyState::Initializing;
    this->LobbyTimer = 0;
}

void AKronosLobbyGameState::OnRep_LobbyState() {
}

void AKronosLobbyGameState::OnRep_LobbyCountdownTime() {
}

bool AKronosLobbyGameState::IsEveryPlayerReady() const {
    return false;
}

int32 AKronosLobbyGameState::GetNumReadyPlayers() const {
    return 0;
}

int32 AKronosLobbyGameState::GetNumPlayers() const {
    return 0;
}

EKronosLobbyState AKronosLobbyGameState::GetLobbyState() const {
    return EKronosLobbyState::Initializing;
}

int32 AKronosLobbyGameState::GetLobbyCountdownTime() const {
    return 0;
}

APlayerStart* AKronosLobbyGameState::FindPlayerStart(APawn* PlayerPawn) const {
    return NULL;
}

void AKronosLobbyGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKronosLobbyGameState, LobbyState);
    DOREPLIFETIME(AKronosLobbyGameState, LobbyTimer);
}


