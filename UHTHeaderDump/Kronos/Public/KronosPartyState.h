#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
//CROSS-MODULE INCLUDE V2: -ModuleName=Lobby -ObjectName=LobbyBeaconState -FallbackName=LobbyBeaconState
#include "Templates/SubclassOf.h"
#include "KronosPartyState.generated.h"

class AKronosPartyClient;
class AKronosPartyPlayerActor;
class AKronosPartyPlayerState;

UCLASS(Blueprintable, NoExport, NonTransient)
class KRONOS_API AKronosPartyState : public ALobbyBeaconState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AKronosPartyPlayerActor> PartyPlayerActorClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PartyLeaderMatchmaking, meta=(AllowPrivateAccess=true))
    bool bPartyLeaderMatchmaking;
    
public:
    AKronosPartyState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PartyLeaderMatchmaking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerStateRemoved(AKronosPartyPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnPlayerStateAdded(AKronosPartyPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyLeaderMatchmaking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUniqueNetIdRepl> GetPartyPlayerUniqueIds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AKronosPartyPlayerState*> GetPartyPlayerStates();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosPartyPlayerState* GetPartyPlayerState(const FUniqueNetIdRepl& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyEloAverage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AKronosPartyClient*> GetPartyClients();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosPartyClient* GetPartyClient(const FUniqueNetIdRepl& PlayerId);
    
};

