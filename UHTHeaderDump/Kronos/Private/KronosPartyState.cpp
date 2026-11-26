#include "KronosPartyState.h"
#include "KronosPartyPlayerState.h"
#include "Net/UnrealNetwork.h"

AKronosPartyState::AKronosPartyState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LobbyBeaconPlayerStateClass = AKronosPartyPlayerState::StaticClass();
    this->PartyPlayerActorClass = NULL;
    this->bPartyLeaderMatchmaking = false;
}

void AKronosPartyState::OnRep_PartyLeaderMatchmaking() {
}



bool AKronosPartyState::IsPartyLeaderMatchmaking() const {
    return false;
}

TArray<FUniqueNetIdRepl> AKronosPartyState::GetPartyPlayerUniqueIds() {
    return TArray<FUniqueNetIdRepl>();
}

TArray<AKronosPartyPlayerState*> AKronosPartyState::GetPartyPlayerStates() {
    return TArray<AKronosPartyPlayerState*>();
}

AKronosPartyPlayerState* AKronosPartyState::GetPartyPlayerState(const FUniqueNetIdRepl& PlayerId) {
    return NULL;
}

int32 AKronosPartyState::GetPartyEloAverage() const {
    return 0;
}

TArray<AKronosPartyClient*> AKronosPartyState::GetPartyClients() {
    return TArray<AKronosPartyClient*>();
}

AKronosPartyClient* AKronosPartyState::GetPartyClient(const FUniqueNetIdRepl& PlayerId) {
    return NULL;
}

void AKronosPartyState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKronosPartyState, bPartyLeaderMatchmaking);
}


