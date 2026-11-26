#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "OnlineBeaconUnitTestClient.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class AOnlineBeaconUnitTestClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    AOnlineBeaconUnitTestClient(const FObjectInitializer& ObjectInitializer);

};

