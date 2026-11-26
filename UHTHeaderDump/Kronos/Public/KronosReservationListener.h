#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconHost -FallbackName=OnlineBeaconHost
#include "KronosReservationListener.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class KRONOS_API AKronosReservationListener : public AOnlineBeaconHost {
    GENERATED_BODY()
public:
    AKronosReservationListener(const FObjectInitializer& ObjectInitializer);

};

