#include "KronosMatchmakingParams.h"

FKronosMatchmakingParams::FKronosMatchmakingParams() {
    this->MaxSearchAttempts = 0;
    this->MaxSearchResults = 0;
    this->MinSlotsRequired = 0;
    this->Elo = 0;
    this->EloRange = 0;
    this->EloSearchAttempts = 0;
    this->EloSearchStep = 0;
    this->EloRangeBeforeHosting = 0;
    this->bIsLanQuery = false;
    this->bSearchPresence = false;
    this->bSearchLobbies = false;
}

