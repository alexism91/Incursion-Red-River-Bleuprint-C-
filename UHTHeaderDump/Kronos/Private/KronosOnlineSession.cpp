#include "KronosOnlineSession.h"

UKronosOnlineSession::UKronosOnlineSession() {
    this->UserManager = NULL;
    this->MatchmakingManager = NULL;
    this->PartyManager = NULL;
    this->ReservationManager = NULL;
}

void UKronosOnlineSession::ModifyServerTravelURL_Implementation(FString& URL) {
}

void UKronosOnlineSession::ModifyClientTravelURL_Implementation(FString& URL) {
}










void UKronosOnlineSession::K2_OnCleanupForTravelFailureComplete_Implementation() {
}

void UKronosOnlineSession::K2_OnCleanupForDisconnectComplete_Implementation() {
}

UKronosOnlineSession* UKronosOnlineSession::Get(const UObject* WorldContextObject) {
    return NULL;
}

bool UKronosOnlineSession::CanAcceptSessionInvite_Implementation(const FKronosSearchResult& Session, bool bIsPartyInvite) const {
    return false;
}


