#include "KronosLobbyPlayerWidget.h"

UKronosLobbyPlayerWidget::UKronosLobbyPlayerWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->OwningPlayerState = NULL;
}

void UKronosLobbyPlayerWidget::OnPlayerNameChanged(const FString& PlayerName) {
}

void UKronosLobbyPlayerWidget::OnPlayerIsReadyChanged(bool bIsReady) {
}

void UKronosLobbyPlayerWidget::OnPlayerDisconnecting() {
}





void UKronosLobbyPlayerWidget::InitPlayerWidget(AKronosLobbyPlayerState* InOwningPlayerState) {
}

AKronosLobbyPlayerState* UKronosLobbyPlayerWidget::GetOwningLobbyPlayerState() const {
    return NULL;
}

AKronosLobbyPawn* UKronosLobbyPlayerWidget::GetOwningLobbyPawn() const {
    return NULL;
}


