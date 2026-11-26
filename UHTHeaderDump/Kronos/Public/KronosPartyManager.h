#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnConnectedToKronosPartyDelegate.h"
#include "OnDisconnectedFromKronosPartyDelegate.h"
#include "OnKickedFromKronosPartyDelegate.h"
#include "OnKronosFollowPartyFailureDelegate.h"
#include "OnKronosFollowPartyStartedDelegate.h"
#include "OnKronosPartyChatMessageReceivedDelegate.h"
#include "OnKronosPartyLeaderMatchmakingDelegate.h"
#include "OnKronosPartyPlayerStateChangedDelegate.h"
#include "OnPlayerJoinedKronosPartyDelegate.h"
#include "OnPlayerLeftKronosPartyDelegate.h"
#include "KronosPartyManager.generated.h"

class AKronosPartyClient;
class AKronosPartyHost;
class AKronosPartyListener;
class UKronosPartyManager;

UCLASS(Blueprintable)
class KRONOS_API UKronosPartyManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosPartyListener* PartyBeaconListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosPartyHost* PartyBeaconHost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosPartyClient* PartyBeaconClient;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConnectedToKronosParty OnConnectedToPartyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisconnectedFromKronosParty OnDisconnectedFromPartyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKickedFromKronosParty OnKickedFromPartyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerJoinedKronosParty OnPlayerJoinedPartyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLeftKronosParty OnPlayerLeftPartyEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosPartyPlayerStateChanged OnPlayerStateAddedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosPartyPlayerStateChanged OnPlayerStateRemovedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosPartyChatMessageReceived OnChatMessageReceivedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosPartyLeaderMatchmaking OnPartyLeaderMatchmakingEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosFollowPartyStarted OnFollowingPartyToSessionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosFollowPartyFailure OnFollowPartyFailureEvent;
    
public:
    UKronosPartyManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKronosPartyManager* Get(const UObject* WorldContextObject);
    
};

