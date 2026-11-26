#pragma once
#include "CoreMinimal.h"
#include "IpNetDriver.h"
#include "OnlineBeaconUnitTestNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient, NotPlaceable)
class UOnlineBeaconUnitTestNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UOnlineBeaconUnitTestNetDriver();

};

