#include "KronosPartyPlayerState.h"
#include "Net/UnrealNetwork.h"

AKronosPartyPlayerState::AKronosPartyPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerActor = NULL;
    this->PlayerElo = 0;
    this->bServerPlayerIsReady = false;
}

void AKronosPartyPlayerState::OnRep_PlayerElo() {
}

void AKronosPartyPlayerState::OnRep_PlayerData() {
}

void AKronosPartyPlayerState::OnRep_IsReady() {
}




bool AKronosPartyPlayerState::IsPartyLeader() const {
    return false;
}

bool AKronosPartyPlayerState::IsLocalPlayer() const {
    return false;
}

FText AKronosPartyPlayerState::GetPlayerName() const {
    return FText::GetEmpty();
}

bool AKronosPartyPlayerState::GetPlayerIsReady() const {
    return false;
}

FUniqueNetIdRepl AKronosPartyPlayerState::GetPlayerId() const {
    return FUniqueNetIdRepl{};
}

int32 AKronosPartyPlayerState::GetPlayerElo() const {
    return 0;
}

TArray<int32> AKronosPartyPlayerState::GetPlayerData() const {
    return TArray<int32>();
}

AKronosPartyPlayerActor* AKronosPartyPlayerState::GetPlayerActor() const {
    return NULL;
}

FUniqueNetIdRepl AKronosPartyPlayerState::GetPartyLeaderId() const {
    return FUniqueNetIdRepl{};
}

AKronosPartyClient* AKronosPartyPlayerState::GetOwningPartyClient() const {
    return NULL;
}

void AKronosPartyPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKronosPartyPlayerState, PlayerElo);
    DOREPLIFETIME(AKronosPartyPlayerState, bServerPlayerIsReady);
    DOREPLIFETIME(AKronosPartyPlayerState, ServerPlayerData);
}


