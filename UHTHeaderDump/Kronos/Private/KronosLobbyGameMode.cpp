#include "KronosLobbyGameMode.h"
#include "KronosLobbyGameState.h"
#include "KronosLobbyHUD.h"
#include "KronosLobbyPawn.h"
#include "KronosLobbyPlayerController.h"
#include "KronosLobbyPlayerState.h"

AKronosLobbyGameMode::AKronosLobbyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AKronosLobbyGameState::StaticClass();
    this->PlayerControllerClass = AKronosLobbyPlayerController::StaticClass();
    this->PlayerStateClass = AKronosLobbyPlayerState::StaticClass();
    this->HUDClass = AKronosLobbyHUD::StaticClass();
    this->DefaultPawnClass = AKronosLobbyPawn::StaticClass();
    this->bUseSeamlessTravel = true;
    this->NumPlayersRequired = 2;
    this->NumPlayersRequiredInEditor = 2;
    this->LobbyCountdownTime = 60;
    this->LobbyFinalCountdownTime = 5;
    this->bCountdownOnlyIfEveryoneReady = false;
    this->LobbyGameState = NULL;
}

void AKronosLobbyGameMode::SetStartMatch() {
}

void AKronosLobbyGameMode::SetLobbyTimer(const int32 InCountdownTime) {
}

void AKronosLobbyGameMode::SetLobbyState(const EKronosLobbyState InLobbyState, const int32 InCountdownTime) {
}

void AKronosLobbyGameMode::SetAllPlayersReady() {
}




int32 AKronosLobbyGameMode::GetNumPlayersRequired() const {
    return 0;
}

int32 AKronosLobbyGameMode::GetLobbyTimer() const {
    return 0;
}

EKronosLobbyState AKronosLobbyGameMode::GetLobbyState() const {
    return EKronosLobbyState::Initializing;
}


