#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=Lobby -ObjectName=LobbyBeaconPlayerState -FallbackName=LobbyBeaconPlayerState
#include "KronosPartyPlayerState.generated.h"

class AKronosPartyClient;
class AKronosPartyPlayerActor;

UCLASS(Blueprintable, NoExport, NonTransient)
class KRONOS_API AKronosPartyPlayerState : public ALobbyBeaconPlayerState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AKronosPartyPlayerActor* PlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerElo, meta=(AllowPrivateAccess=true))
    int32 PlayerElo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsReady, meta=(AllowPrivateAccess=true))
    bool bServerPlayerIsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerData, meta=(AllowPrivateAccess=true))
    TArray<int32> ServerPlayerData;
    
public:
    AKronosPartyPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerElo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerIsReadyChanged(bool bIsReady);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerEloChanged(const int32 NewPlayerElo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerDataChanged(const TArray<int32>& NewPlayerData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerIsReady() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetPlayerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerElo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetPlayerData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosPartyPlayerActor* GetPlayerActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUniqueNetIdRepl GetPartyLeaderId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosPartyClient* GetOwningPartyClient() const;
    
};

