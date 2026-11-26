#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreOnline -ObjectName=JoinabilitySettings -FallbackName=JoinabilitySettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconClient -FallbackName=OnlineBeaconClient
#include "ELobbyBeaconJoinState.h"
#include "LobbyBeaconClient.generated.h"

class ALobbyBeaconPlayerState;
class ALobbyBeaconState;

UCLASS(Blueprintable, MinimalAPI, NoExport, NonTransient)
class ALobbyBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ALobbyBeaconState* LobbyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ALobbyBeaconPlayerState* PlayerState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobbyBeaconJoinState LobbyJoinServerState;
    
public:
    ALobbyBeaconClient(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPartyOwner(const FUniqueNetIdRepl& InUniqueId, const FUniqueNetIdRepl& InPartyOwnerId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerNotifyJoiningServer();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLoginPlayer(const FString& InSessionId, const FUniqueNetIdRepl& InUniqueId, const FString& UrlString);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerKickPlayer(const FUniqueNetIdRepl& PlayerToKick, const FText& reason);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDisconnectFromLobby();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCheat(const FString& Msg);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientWasKicked(const FText& KickReason);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetInviteFlags(const FJoinabilitySettings& Settings);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerLeft(const FUniqueNetIdRepl& InUniqueId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPlayerJoined(const FText& NewPlayerName, const FUniqueNetIdRepl& InUniqueId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLoginComplete(const FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientJoinGame();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAckJoiningServer();
    
};

