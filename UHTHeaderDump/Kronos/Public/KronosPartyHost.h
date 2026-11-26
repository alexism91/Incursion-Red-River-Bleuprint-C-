#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Lobby -ObjectName=LobbyBeaconHost -FallbackName=LobbyBeaconHost
#include "KronosPartyHost.generated.h"

class AKronosPartyClient;
class AKronosPartyState;

UCLASS(Blueprintable, NoExport, NonTransient)
class KRONOS_API AKronosPartyHost : public ALobbyBeaconHost {
    GENERATED_BODY()
public:
    AKronosPartyHost(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnClientLeavingParty(AKronosPartyClient* PartyClient);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnClientJoiningParty();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnClientJoinedParty(AKronosPartyClient* PartyClient);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AKronosPartyState* GetPartyState() const;
    
};

