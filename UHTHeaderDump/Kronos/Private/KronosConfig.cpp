#include "KronosConfig.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=IRRPartyHost -FallbackName=IRRPartyHost
#include "KronosMatchmakingManager.h"
#include "KronosMatchmakingPolicy.h"
#include "KronosMatchmakingSearchPass.h"
#include "KronosPartyListener.h"
#include "KronosPartyManager.h"
#include "KronosPartyPlayerState.h"
#include "KronosPartyState.h"
#include "KronosReservationListener.h"
#include "KronosReservationManager.h"
#include "KronosUserManager.h"

UKronosConfig::UKronosConfig() {
    this->UserManagerClass = UKronosUserManager::StaticClass();
    this->MatchmakingManagerClass = UKronosMatchmakingManager::StaticClass();
    this->PartyManagerClass = UKronosPartyManager::StaticClass();
    this->ReservationManagerClass = UKronosReservationManager::StaticClass();
    this->MatchmakingPolicyClass = UKronosMatchmakingPolicy::StaticClass();
    this->MatchmakingSearchPassClass = UKronosMatchmakingSearchPass::StaticClass();
    this->PartyListenerClass = AKronosPartyListener::StaticClass();
    this->PartyHostClass = AIRRPartyHost::StaticClass();
    this->PartyStateClass = AKronosPartyState::StaticClass();
    this->PartyPlayerStateClass = AKronosPartyPlayerState::StaticClass();
    this->ReservationListenerClass = AKronosReservationListener::StaticClass();
    this->bAuthenticateUserAutomatically = true;
    this->MinTimePerAuthTask = 0.33f;
    this->EnterGameDelayAfterAuth = 0.00f;
    this->bAuthenticationIsPassthrough = false;
    this->bFindFriendSessionSupported = true;
    this->bFindSessionByIdSupported = false;
    this->RestartMatchmakingPassDelay = 2.00f;
    this->RestartSearchPassDelay = 1.00f;
    this->SearchTimeout = 20.00f;
    this->bCanAcceptSessionInviteFromOnlineMatches = false;
    this->ClientFollowPartyToSessionDelay = 2.00f;
    this->ClientFollowPartyAttempts = 5;
    this->ClientReconnectPartyDelay = 5.00f;
    this->ClientReconnectPartyAttempts = 10;
    this->ServerTravelToSessionDelay = 1.00f;
    this->ClientTravelToSessionDelay = 1.00f;
    this->ReservationTimeout = 60.00f;
    this->bForceUseReservationsAlways = false;
    this->bShowCustomPlacementCategory = true;
    this->bPerformPluginValidatation = true;
}

bool UKronosConfig::IsUsingSteamSockets() {
    return false;
}

bool UKronosConfig::IsUsingSteam() {
    return false;
}

bool UKronosConfig::IsUsingNull() {
    return false;
}

bool UKronosConfig::IsUsingEOS() {
    return false;
}

UKronosConfig* UKronosConfig::Get() {
    return NULL;
}


