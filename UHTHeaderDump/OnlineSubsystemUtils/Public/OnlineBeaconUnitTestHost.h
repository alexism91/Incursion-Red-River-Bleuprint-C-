#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHost.h"
#include "OnlineBeaconUnitTestHost.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class AOnlineBeaconUnitTestHost : public AOnlineBeaconHost {
    GENERATED_BODY()
public:
    AOnlineBeaconUnitTestHost(const FObjectInitializer& ObjectInitializer);

};

