#include "KronosSearchParams.h"

FKronosSearchParams::FKronosSearchParams() {
    this->MaxSearchAttempts = 0;
    this->MaxSearchResults = 0;
    this->MinSlotsRequired = 0;
    this->Elo = 0;
    this->EloRange = 0;
    this->bIsLanQuery = false;
    this->bSearchPresence = false;
    this->bSearchLobbies = false;
    this->bSkipEloChecks = false;
}

