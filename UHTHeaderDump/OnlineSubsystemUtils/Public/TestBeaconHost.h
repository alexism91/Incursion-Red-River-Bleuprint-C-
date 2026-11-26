#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "TestBeaconHost.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport, NonTransient)
class ATestBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    ATestBeaconHost(const FObjectInitializer& ObjectInitializer);

};

