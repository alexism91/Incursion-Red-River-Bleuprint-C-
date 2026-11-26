#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "OnlineBeaconUnitTestHostObject.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class AOnlineBeaconUnitTestHostObject : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    AOnlineBeaconUnitTestHostObject(const FObjectInitializer& ObjectInitializer);

};

