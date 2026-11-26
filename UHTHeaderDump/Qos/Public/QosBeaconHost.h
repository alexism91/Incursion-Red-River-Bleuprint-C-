#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconHostObject -FallbackName=OnlineBeaconHostObject
#include "QosBeaconHost.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport, NonTransient)
class AQosBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    AQosBeaconHost(const FObjectInitializer& ObjectInitializer);

};

