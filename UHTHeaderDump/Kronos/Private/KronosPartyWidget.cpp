#include "KronosPartyWidget.h"

UKronosPartyWidget::UKronosPartyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bCreateEntryForLocalPlayer = true;
    this->PartyPlayerEntryBox = NULL;
    this->PartySlotEntryBox = NULL;
}

void UKronosPartyWidget::OnPlayerStateRemoved(AKronosPartyPlayerState* PlayerState) {
}

void UKronosPartyWidget::OnPlayerStateAdded(AKronosPartyPlayerState* PlayerState) {
}

void UKronosPartyWidget::OnPlayerLeftParty(const FUniqueNetIdRepl& PlayerId) {
}

void UKronosPartyWidget::OnPlayerJoinedParty(const FText& DisplayName, const FUniqueNetIdRepl& PlayerId) {
}

void UKronosPartyWidget::OnDisconnectedFromParty() {
}

void UKronosPartyWidget::OnConnectedToParty() {
}

void UKronosPartyWidget::OnChatMessageReceived(const FUniqueNetIdRepl& SenderId, const FString& Msg) {
}







