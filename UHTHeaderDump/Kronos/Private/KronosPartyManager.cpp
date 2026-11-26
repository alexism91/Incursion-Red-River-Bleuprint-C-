#include "KronosPartyManager.h"

UKronosPartyManager::UKronosPartyManager() {
    this->PartyBeaconListener = NULL;
    this->PartyBeaconHost = NULL;
    this->PartyBeaconClient = NULL;
}

UKronosPartyManager* UKronosPartyManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


