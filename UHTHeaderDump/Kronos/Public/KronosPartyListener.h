#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconHost -FallbackName=OnlineBeaconHost
#include "KronosPartyListener.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class KRONOS_API AKronosPartyListener : public AOnlineBeaconHost {
    GENERATED_BODY()
public:
    AKronosPartyListener(const FObjectInitializer& ObjectInitializer);

};

