#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconClient -FallbackName=OnlineBeaconClient
#include "EKronosReservationCompleteResult.h"
#include "KronosReservation.h"
#include "KronosReservationClient.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class KRONOS_API AKronosReservationClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    AKronosReservationClient(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestReservation(const FKronosReservation& Reservation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCancelReservation(const FKronosReservation& Reservation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveReservationResponse(EKronosReservationCompleteResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCancelReservationComplete();
    
};

