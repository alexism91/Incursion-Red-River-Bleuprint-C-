#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineSession -FallbackName=OnlineSession
#include "EKronosMatchmakingCompleteResult.h"
#include "KronosPendingSessionInvite.h"
#include "KronosSearchResult.h"
#include "OnUpdateKronosMatchCompleteDelegate.h"
#include "OnUpdateKronosPartyCompleteDelegate.h"
#include "KronosOnlineSession.generated.h"

class UKronosMatchmakingManager;
class UKronosOnlineSession;
class UKronosPartyManager;
class UKronosReservationManager;
class UKronosUserManager;
class UObject;

UCLASS(Blueprintable)
class KRONOS_API UKronosOnlineSession : public UOnlineSession {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKronosUserManager* UserManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKronosMatchmakingManager* MatchmakingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKronosPartyManager* PartyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKronosReservationManager* ReservationManager;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateKronosMatchComplete OnUpdatedMatchCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateKronosPartyComplete OnUpdatePartyCompleteEvent;
    
public:
    UKronosOnlineSession();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyServerTravelURL(FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyClientTravelURL(FString& URL);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSessionInviteRemoved(const FKronosPendingSessionInvite& PendingInvite);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSessionInviteReceived(const FKronosPendingSessionInvite& PendingInvite);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPartySessionInviteAccepted(const FKronosSearchResult& Session);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnGameSessionInviteAccepted(const FKronosSearchResult& Session);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnGameDefaultMapLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFollowPartyToSessionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFollowPartyToSessionFailure();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFollowPartyToSessionComplete(const FName SessionName, const EKronosMatchmakingCompleteResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEnterGame(bool bIsInitialLogin);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_OnCleanupForTravelFailureComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void K2_OnCleanupForDisconnectComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKronosOnlineSession* Get(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAcceptSessionInvite(const FKronosSearchResult& Session, bool bIsPartyInvite) const;
    
};

