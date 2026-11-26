#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "TestBeaconClient.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport, NonTransient)
class ATestBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    ATestBeaconClient(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPong();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientPing();
    
};

