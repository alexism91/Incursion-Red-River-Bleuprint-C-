#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "EKronosMatchmakingCompleteResult.h"
#include "EKronosMatchmakingFailureReason.h"
#include "EKronosMatchmakingState.h"
#include "EKronosQueryComparisonOp.h"
#include "EKronosSessionState.h"
#include "KronosHostParams.h"
#include "KronosLastPartyInfo.h"
#include "KronosMatchmakingParams.h"
#include "KronosNamedSession.h"
#include "KronosOnlineFriend.h"
#include "KronosPendingSessionInvite.h"
#include "KronosQuerySetting.h"
#include "KronosReservation.h"
#include "KronosReservationMember.h"
#include "KronosSearchParams.h"
#include "KronosSearchResult.h"
#include "KronosSessionSetting.h"
#include "KronosSessionSettings.h"
#include "KronosSpecificSessionQuery.h"
#include "KronosStatics.generated.h"

class AKronosPartyClient;
class AKronosPartyHost;
class AKronosPartyPlayerState;
class AKronosPartyState;
class AKronosReservationHost;
class APlayerController;
class APlayerState;
class UObject;

UCLASS(Blueprintable)
class KRONOS_API UKronosStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKronosStatics();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartMatch(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static bool ShowProfileUI(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool ShowPartyInviteUI();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool ShowGameInviteUI();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetHostReservations(const UObject* WorldContextObject, const TArray<FKronosReservation>& Reservations);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetHostReservation(const UObject* WorldContextObject, const FKronosReservation& Reservation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ServerTravelToLevel(const UObject* WorldContextObject, const FString& TravelURL, bool bCleanupReservationBeacons);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SendPartyInviteToFriend(const UObject* WorldContextObject, const FUniqueNetIdRepl& FriendId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SendGameInviteToFriend(const UObject* WorldContextObject, const FUniqueNetIdRepl& FriendId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ReconfigureMaxReservations(const UObject* WorldContextObject, const int32 MaxReservations);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool PlayerHasReservation(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_CompareUniqueNetIdRepl(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FKronosReservation MakeReservationForPrimaryPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FKronosReservation MakeReservationForParty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FKronosReservation MakeReservationForGamePlayers(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKronosSessionSetting MakeKronosSessionSettingInt32(FName Key, int32 Value, bool bAdvertise);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKronosSessionSetting MakeKronosSessionSettingFString(FName Key, const FString& Value, bool bAdvertise);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKronosSessionSetting MakeKronosSessionSettingFloat(FName Key, float Value, bool bAdvertise);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKronosSessionSetting MakeKronosSessionSettingBool(FName Key, bool Value, bool bAdvertise);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKronosQuerySetting MakeKronosQuerySettingInt32(FName Key, int32 Value, EKronosQueryComparisonOp Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKronosQuerySetting MakeKronosQuerySettingFString(FName Key, const FString& Value, EKronosQueryComparisonOp Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKronosQuerySetting MakeKronosQuerySettingFloat(FName Key, float Value, EKronosQueryComparisonOp Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKronosQuerySetting MakeKronosQuerySettingBool(FName Key, bool Value, EKronosQueryComparisonOp Comparison);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 MakeKronosMatchmakingFlags(const bool bNoHost, const bool bSkipReservation, const bool bSkipEloChecks);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void KickPlayerFromParty(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId, bool bBanFromSession);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool KickPlayerFromMatch(const UObject* WorldContextObject, APlayerController* KickedPlayer, bool bBanFromSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUniqueNetIdReplValid(const FUniqueNetIdRepl& UniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTearingDownWorld(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpecificSessionQueryValid(const FKronosSpecificSessionQuery& SpecificSessionQuery);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSessionValid(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSearchResultValid(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSearchParamsValid(const FKronosSearchParams& SearchParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReservationValid(const FKronosReservation& Reservation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsReservationMemberValid(const FKronosReservationMember& ReservationMember);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsReservationHost(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerBannedFromParty(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerBannedFromMatch(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPendingSessionInviteValid(const FKronosPendingSessionInvite& PendingInvite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPendingSessionInviteForParty(const FKronosPendingSessionInvite& PendingInvite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPartyLeaderMatchmaking(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsPartyLeader(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOnlineFriendValid(const FKronosOnlineFriend& Friend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNamedSessionValid(const FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMatchmakingParamsValid(const FKronosMatchmakingParams& MatchmakingParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsMatchmaking(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLoggedIn(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInParty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHostParamsValid(const FKronosHostParams& HostParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsFriend(const UObject* WorldContextObject, const FUniqueNetIdRepl& FriendId, const FString& ListName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEveryClientInParty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAuthenticated(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasLastPartyInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueNetIdRepl GetSessionUniqueId(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSessionType(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable)
    static FKronosSessionSettings GetSessionSettings(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSessionSettingInt32(const FKronosSearchResult& SearchResult, FName Key, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSessionSettingFString(const FKronosSearchResult& SearchResult, FName Key, FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSessionSettingFloat(const FKronosSearchResult& SearchResult, FName Key, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSessionSettingBool(const FKronosSearchResult& SearchResult, FName Key, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionPing(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSessionOwnerUsername(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueNetIdRepl GetSessionOwnerUniqueId(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSessionElo(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueNetIdRepl GetSearchResultUniqueId(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSearchResultType(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKronosSessionSettings GetSearchResultSessionSettings(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSearchResultPlayerCount(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSearchResultPing(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSearchResultOwnerUsername(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueNetIdRepl GetSearchResultOwnerUniqueId(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSearchResultElo(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AKronosReservationHost* GetReservationHost(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueNetIdRepl GetPlayerUniqueId(const APlayerState* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerState* GetPlayerStateFromUniqueId(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FString GetPlayerNickname(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetPlayerControllerFromUniqueId(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AKronosPartyState* GetPartyState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPartySize(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetPartySessionSettings(const UObject* WorldContextObject, FKronosSessionSettings& SessionSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPartySessionSettingInt32(const UObject* WorldContextObject, FName Key, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPartySessionSettingFString(const UObject* WorldContextObject, FName Key, FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPartySessionSettingFloat(const UObject* WorldContextObject, FName Key, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPartySessionSettingBool(const UObject* WorldContextObject, FName Key, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetPartySession(const UObject* WorldContextObject, FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FUniqueNetIdRepl> GetPartyPlayerUniqueIds(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AKronosPartyPlayerState*> GetPartyPlayerStates(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AKronosPartyPlayerState* GetPartyPlayerState(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AKronosPartyHost* GetPartyHost(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetPartyEloAverage(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AKronosPartyClient* GetPartyClient(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumPlayersInSession(const FKronosSearchResult& SearchResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumPlayersInParty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueNetIdRepl GetNamedSessionUniqueId(const FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetNamedSessionType(const FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EKronosSessionState GetNamedSessionState(const FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKronosSessionSettings GetNamedSessionSettings(const FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FUniqueNetIdRepl> GetNamedSessionRegisteredPlayers(const FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNamedSessionPlayerCount(const FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNamedSessionOwnerUsername(const FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FUniqueNetIdRepl GetNamedSessionOwnerUniqueId(const FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMaxNumPlayersInParty(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EKronosMatchmakingState GetMatchmakingState(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FKronosSearchResult> GetMatchmakingSearchResults(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EKronosMatchmakingCompleteResult GetMatchmakingResult(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EKronosMatchmakingFailureReason GetMatchmakingFailureReason(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FUniqueNetIdRepl GetLocalPlayerId(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FKronosLastPartyInfo GetLastPartyInfo(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FKronosReservation> GetHostReservations(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetGameSessionSettings(const UObject* WorldContextObject, FKronosSessionSettings& SessionSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetGameSessionSettingInt32(const UObject* WorldContextObject, FName Key, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetGameSessionSettingFString(const UObject* WorldContextObject, FName Key, FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetGameSessionSettingFloat(const UObject* WorldContextObject, FName Key, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetGameSessionSettingBool(const UObject* WorldContextObject, FName Key, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetGameSession(const UObject* WorldContextObject, FKronosNamedSession& NamedSession);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    int32 GetFriendCount(const UObject* WorldContextObject, bool bInGamePlayersOnly) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FKronosOnlineFriend GetFriend(const UObject* WorldContextObject, const FUniqueNetIdRepl& FriendId, const FString& ListName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCustomSessionSettingInt32(const FKronosSessionSettings& SessionSettings, FName Key, int32& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCustomSessionSettingFString(const FKronosSessionSettings& SessionSettings, FName Key, FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCustomSessionSettingFloat(const FKronosSessionSettings& SessionSettings, FName Key, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCustomSessionSettingBool(const FKronosSessionSettings& SessionSettings, FName Key, bool& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_CompareUniqueNetIdRepl(const FUniqueNetIdRepl& A, const FUniqueNetIdRepl& B);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndMatch(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DestroyReservationBeacons(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FKronosReservation> CopyRegisteredReservations(const UObject* WorldContextObject, bool bCleanupReservations);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_UniqueNetIdReplToString(const FUniqueNetIdRepl& UniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_UniqueNetIdReplToDebugString(const FUniqueNetIdRepl& UniqueID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CompleteReservationById(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CompleteReservation(const UObject* WorldContextObject, const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BanPlayerFromParty(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool BanPlayerFromMatch(const UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    
};

