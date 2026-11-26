#pragma once
#include "CoreMinimal.h"
#include "WorldMetricsExtension.h"
#include "WorldMetricsActorTracker.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UWorldMetricsActorTracker : public UWorldMetricsExtension {
    GENERATED_BODY()
public:
    UWorldMetricsActorTracker();

};

