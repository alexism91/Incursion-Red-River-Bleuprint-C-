#include "KronosLobbyWidget.h"

UKronosLobbyWidget::UKronosLobbyWidget() : UUserWidget(FObjectInitializer::Get()) {
}

void UKronosLobbyWidget::OnPlayerLeftLobby(AKronosLobbyPlayerState* PlayerState) {
}

void UKronosLobbyWidget::OnPlayerJoinedLobby(AKronosLobbyPlayerState* PlayerState) {
}

void UKronosLobbyWidget::OnPlayerIsReadyChanged(bool bIsReady) {
}

void UKronosLobbyWidget::OnLobbyUpdated(const EKronosLobbyState LobbyState, const int32 LobbyCountdownTime) {
}








bool UKronosLobbyWidget::GetPlayerHasAuthority() const {
    return false;
}

AKronosLobbyPlayerState* UKronosLobbyWidget::GetLocalPlayerState() const {
    return NULL;
}

AKronosLobbyGameState* UKronosLobbyWidget::GetLobbyGameState() const {
    return NULL;
}


