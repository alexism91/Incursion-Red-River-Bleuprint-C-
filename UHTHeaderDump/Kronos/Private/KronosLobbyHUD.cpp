#include "KronosLobbyHUD.h"

AKronosLobbyHUD::AKronosLobbyHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
}

void AKronosLobbyHUD::OnPlayerLeftLobby(AKronosLobbyPlayerState* PlayerState) {
}

void AKronosLobbyHUD::OnPlayerJoinedLobby(AKronosLobbyPlayerState* PlayerState) {
}




bool AKronosLobbyHUD::HasInitialReplicationFinished_Implementation() const {
    return false;
}


