#pragma once
#include "CoreMinimal.h"
#include "NetObjectFilterConfig.h"
#include "AlwaysRelevantNetObjectFilterConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UAlwaysRelevantNetObjectFilterConfig : public UNetObjectFilterConfig {
    GENERATED_BODY()
public:
    UAlwaysRelevantNetObjectFilterConfig();

};

