#include "KronosPartyClient.h"

AKronosPartyClient::AKronosPartyClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AKronosPartyClient::TogglePlayerIsReady() {
}

void AKronosPartyClient::SetPlayerIsReady(bool bIsReady) {
}

void AKronosPartyClient::SetPlayerElo(int32 NewPlayerElo) {
}

void AKronosPartyClient::SetPlayerData(const TArray<int32>& NewPlayerData) {
}

void AKronosPartyClient::ServerSetPlayerIsReady_Implementation(bool bIsReady) {
}
bool AKronosPartyClient::ServerSetPlayerIsReady_Validate(bool bIsReady) {
    return true;
}

void AKronosPartyClient::ServerSetPlayerElo_Implementation(const int32 NewPlayerElo) {
}
bool AKronosPartyClient::ServerSetPlayerElo_Validate(const int32 NewPlayerElo) {
    return true;
}

void AKronosPartyClient::ServerSetPlayerData_Implementation(const TArray<int32>& NewPlayerData) {
}
bool AKronosPartyClient::ServerSetPlayerData_Validate(const TArray<int32>& NewPlayerData) {
    return true;
}

void AKronosPartyClient::ServerSendChatMessage_Implementation(const FString& Msg) {
}

void AKronosPartyClient::SendChatMessage(const FString& Msg) {
}

void AKronosPartyClient::OnPartyUpdated(bool bWasSuccessful) {
}










bool AKronosPartyClient::IsLocalPlayer() const {
    return false;
}

bool AKronosPartyClient::HasInitialReplicationFinished_Implementation() const {
    return false;
}

bool AKronosPartyClient::GetPlayerIsReady() const {
    return false;
}

int32 AKronosPartyClient::GetPlayerElo() const {
    return 0;
}

TArray<int32> AKronosPartyClient::GetPlayerData() const {
    return TArray<int32>();
}

AKronosPartyState* AKronosPartyClient::GetPartyState() const {
    return NULL;
}

AKronosPartyPlayerState* AKronosPartyClient::GetPartyPlayerState() const {
    return NULL;
}

void AKronosPartyClient::ClientReceiveChatMessage_Implementation(const FUniqueNetIdRepl& SenderId, const FString& Msg) {
}

void AKronosPartyClient::ClientFollowPartyToGameSession_Implementation(const FKronosFollowPartyParams& FollowParams) {
}


