#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "OnlineBeaconUnitTestNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient, NotPlaceable)
class UOnlineBeaconUnitTestNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UOnlineBeaconUnitTestNetConnection();

};

