#include "KronosSessionSettings.h"

FKronosSessionSettings::FKronosSessionSettings() {
    this->MaxNumPlayers = 0;
    this->Elo = 0;
    this->bShouldAdvertise = false;
    this->bHidden = false;
    this->bAllowJoinInProgress = false;
    this->bIsLanMatch = false;
    this->bUsesPresence = false;
    this->bAllowInvites = false;
    this->bAllowJoinViaPresence = false;
    this->bUseLobbiesIfAvailable = false;
    this->bUseVoiceChatIfAvailable = false;
}

