#include "KronosStatics.h"

UKronosStatics::UKronosStatics() {
}

void UKronosStatics::StartMatch(const UObject* WorldContextObject) {
}

bool UKronosStatics::ShowProfileUI(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return false;
}

bool UKronosStatics::ShowPartyInviteUI() {
    return false;
}

bool UKronosStatics::ShowGameInviteUI() {
    return false;
}

bool UKronosStatics::SetHostReservations(const UObject* WorldContextObject, const TArray<FKronosReservation>& Reservations) {
    return false;
}

bool UKronosStatics::SetHostReservation(const UObject* WorldContextObject, const FKronosReservation& Reservation) {
    return false;
}

void UKronosStatics::ServerTravelToLevel(const UObject* WorldContextObject, const FString& TravelURL, bool bCleanupReservationBeacons) {
}

bool UKronosStatics::SendPartyInviteToFriend(const UObject* WorldContextObject, const FUniqueNetIdRepl& FriendId) {
    return false;
}

bool UKronosStatics::SendGameInviteToFriend(const UObject* WorldContextObject, const FUniqueNetIdRepl& FriendId) {
    return false;
}

bool UKronosStatics::ReconfigureMaxReservations(const UObject* WorldContextObject, const int32 MaxReservations) {
    return false;
}

bool UKronosStatics::PlayerHasReservation(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return false;
}

bool UKronosStatics::NotEqual_CompareUniqueNetIdRepl(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B) {
    return false;
}

FKronosReservation UKronosStatics::MakeReservationForPrimaryPlayer(const UObject* WorldContextObject) {
    return FKronosReservation{};
}

FKronosReservation UKronosStatics::MakeReservationForParty(const UObject* WorldContextObject) {
    return FKronosReservation{};
}

FKronosReservation UKronosStatics::MakeReservationForGamePlayers(const UObject* WorldContextObject) {
    return FKronosReservation{};
}

FKronosSessionSetting UKronosStatics::MakeKronosSessionSettingInt32(FName Key, int32 Value, bool bAdvertise) {
    return FKronosSessionSetting{};
}

FKronosSessionSetting UKronosStatics::MakeKronosSessionSettingFString(FName Key, const FString& Value, bool bAdvertise) {
    return FKronosSessionSetting{};
}

FKronosSessionSetting UKronosStatics::MakeKronosSessionSettingFloat(FName Key, float Value, bool bAdvertise) {
    return FKronosSessionSetting{};
}

FKronosSessionSetting UKronosStatics::MakeKronosSessionSettingBool(FName Key, bool Value, bool bAdvertise) {
    return FKronosSessionSetting{};
}

FKronosQuerySetting UKronosStatics::MakeKronosQuerySettingInt32(FName Key, int32 Value, EKronosQueryComparisonOp Comparison) {
    return FKronosQuerySetting{};
}

FKronosQuerySetting UKronosStatics::MakeKronosQuerySettingFString(FName Key, const FString& Value, EKronosQueryComparisonOp Comparison) {
    return FKronosQuerySetting{};
}

FKronosQuerySetting UKronosStatics::MakeKronosQuerySettingFloat(FName Key, float Value, EKronosQueryComparisonOp Comparison) {
    return FKronosQuerySetting{};
}

FKronosQuerySetting UKronosStatics::MakeKronosQuerySettingBool(FName Key, bool Value, EKronosQueryComparisonOp Comparison) {
    return FKronosQuerySetting{};
}

int32 UKronosStatics::MakeKronosMatchmakingFlags(const bool bNoHost, const bool bSkipReservation, const bool bSkipEloChecks) {
    return 0;
}

void UKronosStatics::KickPlayerFromParty(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId, bool bBanFromSession) {
}

bool UKronosStatics::KickPlayerFromMatch(const UObject* WorldContextObject, APlayerController* KickedPlayer, bool bBanFromSession) {
    return false;
}

bool UKronosStatics::IsUniqueNetIdReplValid(const FUniqueNetIdRepl& UniqueID) {
    return false;
}

bool UKronosStatics::IsTearingDownWorld(const UObject* WorldContextObject) {
    return false;
}

bool UKronosStatics::IsSpecificSessionQueryValid(const FKronosSpecificSessionQuery& SpecificSessionQuery) {
    return false;
}

bool UKronosStatics::IsSessionValid(const FKronosSearchResult& SearchResult) {
    return false;
}

bool UKronosStatics::IsSearchResultValid(const FKronosSearchResult& SearchResult) {
    return false;
}

bool UKronosStatics::IsSearchParamsValid(const FKronosSearchParams& SearchParams) {
    return false;
}

bool UKronosStatics::IsReservationValid(const FKronosReservation& Reservation) {
    return false;
}

bool UKronosStatics::IsReservationMemberValid(const FKronosReservationMember& ReservationMember) {
    return false;
}

bool UKronosStatics::IsReservationHost(const UObject* WorldContextObject) {
    return false;
}

bool UKronosStatics::IsPlayerBannedFromParty(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return false;
}

bool UKronosStatics::IsPlayerBannedFromMatch(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return false;
}

bool UKronosStatics::IsPendingSessionInviteValid(const FKronosPendingSessionInvite& PendingInvite) {
    return false;
}

bool UKronosStatics::IsPendingSessionInviteForParty(const FKronosPendingSessionInvite& PendingInvite) {
    return false;
}

bool UKronosStatics::IsPartyLeaderMatchmaking(const UObject* WorldContextObject) {
    return false;
}

bool UKronosStatics::IsPartyLeader(const UObject* WorldContextObject) {
    return false;
}

bool UKronosStatics::IsOnlineFriendValid(const FKronosOnlineFriend& Friend) {
    return false;
}

bool UKronosStatics::IsNamedSessionValid(const FKronosNamedSession& NamedSession) {
    return false;
}

bool UKronosStatics::IsMatchmakingParamsValid(const FKronosMatchmakingParams& MatchmakingParams) {
    return false;
}

bool UKronosStatics::IsMatchmaking(const UObject* WorldContextObject) {
    return false;
}

bool UKronosStatics::IsLoggedIn(const UObject* WorldContextObject) {
    return false;
}

bool UKronosStatics::IsInParty(const UObject* WorldContextObject) {
    return false;
}

bool UKronosStatics::IsHostParamsValid(const FKronosHostParams& HostParams) {
    return false;
}

bool UKronosStatics::IsFriend(const UObject* WorldContextObject, const FUniqueNetIdRepl& FriendId, const FString& ListName) {
    return false;
}

bool UKronosStatics::IsEveryClientInParty(const UObject* WorldContextObject) {
    return false;
}

bool UKronosStatics::IsAuthenticated(const UObject* WorldContextObject) {
    return false;
}

bool UKronosStatics::HasLastPartyInfo(const UObject* WorldContextObject) {
    return false;
}

FUniqueNetIdRepl UKronosStatics::GetSessionUniqueId(const FKronosSearchResult& SearchResult) {
    return FUniqueNetIdRepl{};
}

FName UKronosStatics::GetSessionType(const FKronosSearchResult& SearchResult) {
    return NAME_None;
}

FKronosSessionSettings UKronosStatics::GetSessionSettings(const FKronosSearchResult& SearchResult) {
    return FKronosSessionSettings{};
}

bool UKronosStatics::GetSessionSettingInt32(const FKronosSearchResult& SearchResult, FName Key, int32& Value) {
    return false;
}

bool UKronosStatics::GetSessionSettingFString(const FKronosSearchResult& SearchResult, FName Key, FString& Value) {
    return false;
}

bool UKronosStatics::GetSessionSettingFloat(const FKronosSearchResult& SearchResult, FName Key, float& Value) {
    return false;
}

bool UKronosStatics::GetSessionSettingBool(const FKronosSearchResult& SearchResult, FName Key, bool& Value) {
    return false;
}

int32 UKronosStatics::GetSessionPing(const FKronosSearchResult& SearchResult) {
    return 0;
}

FString UKronosStatics::GetSessionOwnerUsername(const FKronosSearchResult& SearchResult) {
    return TEXT("");
}

FUniqueNetIdRepl UKronosStatics::GetSessionOwnerUniqueId(const FKronosSearchResult& SearchResult) {
    return FUniqueNetIdRepl{};
}

int32 UKronosStatics::GetSessionElo(const FKronosSearchResult& SearchResult) {
    return 0;
}

FUniqueNetIdRepl UKronosStatics::GetSearchResultUniqueId(const FKronosSearchResult& SearchResult) {
    return FUniqueNetIdRepl{};
}

FName UKronosStatics::GetSearchResultType(const FKronosSearchResult& SearchResult) {
    return NAME_None;
}

FKronosSessionSettings UKronosStatics::GetSearchResultSessionSettings(const FKronosSearchResult& SearchResult) {
    return FKronosSessionSettings{};
}

int32 UKronosStatics::GetSearchResultPlayerCount(const FKronosSearchResult& SearchResult) {
    return 0;
}

int32 UKronosStatics::GetSearchResultPing(const FKronosSearchResult& SearchResult) {
    return 0;
}

FString UKronosStatics::GetSearchResultOwnerUsername(const FKronosSearchResult& SearchResult) {
    return TEXT("");
}

FUniqueNetIdRepl UKronosStatics::GetSearchResultOwnerUniqueId(const FKronosSearchResult& SearchResult) {
    return FUniqueNetIdRepl{};
}

int32 UKronosStatics::GetSearchResultElo(const FKronosSearchResult& SearchResult) {
    return 0;
}

AKronosReservationHost* UKronosStatics::GetReservationHost(const UObject* WorldContextObject) {
    return NULL;
}

FUniqueNetIdRepl UKronosStatics::GetPlayerUniqueId(const APlayerState* Player) {
    return FUniqueNetIdRepl{};
}

APlayerState* UKronosStatics::GetPlayerStateFromUniqueId(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return NULL;
}

FString UKronosStatics::GetPlayerNickname(const UObject* WorldContextObject) {
    return TEXT("");
}

APlayerController* UKronosStatics::GetPlayerControllerFromUniqueId(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return NULL;
}

AKronosPartyState* UKronosStatics::GetPartyState(const UObject* WorldContextObject) {
    return NULL;
}

int32 UKronosStatics::GetPartySize(const UObject* WorldContextObject) {
    return 0;
}

bool UKronosStatics::GetPartySessionSettings(const UObject* WorldContextObject, FKronosSessionSettings& SessionSettings) {
    return false;
}

bool UKronosStatics::GetPartySessionSettingInt32(const UObject* WorldContextObject, FName Key, int32& Value) {
    return false;
}

bool UKronosStatics::GetPartySessionSettingFString(const UObject* WorldContextObject, FName Key, FString& Value) {
    return false;
}

bool UKronosStatics::GetPartySessionSettingFloat(const UObject* WorldContextObject, FName Key, float& Value) {
    return false;
}

bool UKronosStatics::GetPartySessionSettingBool(const UObject* WorldContextObject, FName Key, bool& Value) {
    return false;
}

bool UKronosStatics::GetPartySession(const UObject* WorldContextObject, FKronosNamedSession& NamedSession) {
    return false;
}

TArray<FUniqueNetIdRepl> UKronosStatics::GetPartyPlayerUniqueIds(const UObject* WorldContextObject) {
    return TArray<FUniqueNetIdRepl>();
}

TArray<AKronosPartyPlayerState*> UKronosStatics::GetPartyPlayerStates(const UObject* WorldContextObject) {
    return TArray<AKronosPartyPlayerState*>();
}

AKronosPartyPlayerState* UKronosStatics::GetPartyPlayerState(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return NULL;
}

AKronosPartyHost* UKronosStatics::GetPartyHost(const UObject* WorldContextObject) {
    return NULL;
}

int32 UKronosStatics::GetPartyEloAverage(const UObject* WorldContextObject) {
    return 0;
}

AKronosPartyClient* UKronosStatics::GetPartyClient(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return NULL;
}

int32 UKronosStatics::GetNumPlayersInSession(const FKronosSearchResult& SearchResult) {
    return 0;
}

int32 UKronosStatics::GetNumPlayersInParty(const UObject* WorldContextObject) {
    return 0;
}

FUniqueNetIdRepl UKronosStatics::GetNamedSessionUniqueId(const FKronosNamedSession& NamedSession) {
    return FUniqueNetIdRepl{};
}

FName UKronosStatics::GetNamedSessionType(const FKronosNamedSession& NamedSession) {
    return NAME_None;
}

EKronosSessionState UKronosStatics::GetNamedSessionState(const FKronosNamedSession& NamedSession) {
    return EKronosSessionState::NoSession;
}

FKronosSessionSettings UKronosStatics::GetNamedSessionSettings(const FKronosNamedSession& NamedSession) {
    return FKronosSessionSettings{};
}

TArray<FUniqueNetIdRepl> UKronosStatics::GetNamedSessionRegisteredPlayers(const FKronosNamedSession& NamedSession) {
    return TArray<FUniqueNetIdRepl>();
}

int32 UKronosStatics::GetNamedSessionPlayerCount(const FKronosNamedSession& NamedSession) {
    return 0;
}

FString UKronosStatics::GetNamedSessionOwnerUsername(const FKronosNamedSession& NamedSession) {
    return TEXT("");
}

FUniqueNetIdRepl UKronosStatics::GetNamedSessionOwnerUniqueId(const FKronosNamedSession& NamedSession) {
    return FUniqueNetIdRepl{};
}

int32 UKronosStatics::GetMaxNumPlayersInParty(const UObject* WorldContextObject) {
    return 0;
}

EKronosMatchmakingState UKronosStatics::GetMatchmakingState(const UObject* WorldContextObject) {
    return EKronosMatchmakingState::NotStarted;
}

TArray<FKronosSearchResult> UKronosStatics::GetMatchmakingSearchResults(const UObject* WorldContextObject) {
    return TArray<FKronosSearchResult>();
}

EKronosMatchmakingCompleteResult UKronosStatics::GetMatchmakingResult(const UObject* WorldContextObject) {
    return EKronosMatchmakingCompleteResult::Failure;
}

EKronosMatchmakingFailureReason UKronosStatics::GetMatchmakingFailureReason(const UObject* WorldContextObject) {
    return EKronosMatchmakingFailureReason::Unknown;
}

FUniqueNetIdRepl UKronosStatics::GetLocalPlayerId(const UObject* WorldContextObject) {
    return FUniqueNetIdRepl{};
}

FKronosLastPartyInfo UKronosStatics::GetLastPartyInfo(const UObject* WorldContextObject) {
    return FKronosLastPartyInfo{};
}

TArray<FKronosReservation> UKronosStatics::GetHostReservations(const UObject* WorldContextObject) {
    return TArray<FKronosReservation>();
}

bool UKronosStatics::GetGameSessionSettings(const UObject* WorldContextObject, FKronosSessionSettings& SessionSettings) {
    return false;
}

bool UKronosStatics::GetGameSessionSettingInt32(const UObject* WorldContextObject, FName Key, int32& Value) {
    return false;
}

bool UKronosStatics::GetGameSessionSettingFString(const UObject* WorldContextObject, FName Key, FString& Value) {
    return false;
}

bool UKronosStatics::GetGameSessionSettingFloat(const UObject* WorldContextObject, FName Key, float& Value) {
    return false;
}

bool UKronosStatics::GetGameSessionSettingBool(const UObject* WorldContextObject, FName Key, bool& Value) {
    return false;
}

bool UKronosStatics::GetGameSession(const UObject* WorldContextObject, FKronosNamedSession& NamedSession) {
    return false;
}

int32 UKronosStatics::GetFriendCount(const UObject* WorldContextObject, bool bInGamePlayersOnly) const {
    return 0;
}

FKronosOnlineFriend UKronosStatics::GetFriend(const UObject* WorldContextObject, const FUniqueNetIdRepl& FriendId, const FString& ListName) {
    return FKronosOnlineFriend{};
}

bool UKronosStatics::GetCustomSessionSettingInt32(const FKronosSessionSettings& SessionSettings, FName Key, int32& Value) {
    return false;
}

bool UKronosStatics::GetCustomSessionSettingFString(const FKronosSessionSettings& SessionSettings, FName Key, FString& Value) {
    return false;
}

bool UKronosStatics::GetCustomSessionSettingFloat(const FKronosSessionSettings& SessionSettings, FName Key, float& Value) {
    return false;
}

bool UKronosStatics::GetCustomSessionSettingBool(const FKronosSessionSettings& SessionSettings, FName Key, bool& Value) {
    return false;
}

bool UKronosStatics::EqualEqual_CompareUniqueNetIdRepl(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B) {
    return false;
}

void UKronosStatics::EndMatch(const UObject* WorldContextObject) {
}

void UKronosStatics::DestroyReservationBeacons(const UObject* WorldContextObject) {
}

TArray<FKronosReservation> UKronosStatics::CopyRegisteredReservations(const UObject* WorldContextObject, bool bCleanupReservations) {
    return TArray<FKronosReservation>();
}

FString UKronosStatics::Conv_UniqueNetIdReplToString(const FUniqueNetIdRepl& UniqueID) {
    return TEXT("");
}

FString UKronosStatics::Conv_UniqueNetIdReplToDebugString(const FUniqueNetIdRepl& UniqueID) {
    return TEXT("");
}

bool UKronosStatics::CompleteReservationById(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return false;
}

bool UKronosStatics::CompleteReservation(const UObject* WorldContextObject, const APlayerController* PlayerController) {
    return false;
}

bool UKronosStatics::BanPlayerFromParty(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return false;
}

bool UKronosStatics::BanPlayerFromMatch(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId) {
    return false;
}


