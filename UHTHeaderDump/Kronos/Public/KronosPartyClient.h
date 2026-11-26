#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=Lobby -ObjectName=LobbyBeaconClient -FallbackName=LobbyBeaconClient
#include "KronosFollowPartyParams.h"
#include "KronosPartyClient.generated.h"

class AKronosPartyPlayerState;
class AKronosPartyState;

UCLASS(Blueprintable, NoExport, NonTransient)
class KRONOS_API AKronosPartyClient : public ALobbyBeaconClient {
    GENERATED_BODY()
public:
    AKronosPartyClient(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TogglePlayerIsReady();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerIsReady(bool bIsReady);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerElo(int32 NewPlayerElo);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerData(const TArray<int32>& NewPlayerData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerIsReady(bool bIsReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerElo(const int32 NewPlayerElo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerData(const TArray<int32>& NewPlayerData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSendChatMessage(const FString& Msg);
    
    UFUNCTION(BlueprintCallable)
    void SendChatMessage(const FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPartyUpdated(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ServerInitPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPartyPlayerLeft(const FUniqueNetIdRepl& UniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPartyPlayerJoined(const FText& DisplayName, const FUniqueNetIdRepl& UniqueID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPartyLoginComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConnectionFailure();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConnectingToParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleJoiningGameAck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClientWasKicked(const FText& KickReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ClientInitPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasInitialReplicationFinished() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerIsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerElo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetPlayerData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosPartyState* GetPartyState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosPartyPlayerState* GetPartyPlayerState() const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveChatMessage(const FUniqueNetIdRepl& SenderId, const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFollowPartyToGameSession(const FKronosFollowPartyParams& FollowParams);
    
};

