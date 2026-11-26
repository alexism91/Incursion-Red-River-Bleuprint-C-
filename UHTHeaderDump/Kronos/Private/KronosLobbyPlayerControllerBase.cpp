#include "KronosLobbyPlayerControllerBase.h"

AKronosLobbyPlayerControllerBase::AKronosLobbyPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

void AKronosLobbyPlayerControllerBase::ServerSendChatMessage_Implementation(const FString& Msg) {
}

void AKronosLobbyPlayerControllerBase::SendChatMessage(const FString& Msg) {
}



void AKronosLobbyPlayerControllerBase::ClientReceiveChatMessage_Implementation(const FString& SenderName, const FString& Msg) {
}


