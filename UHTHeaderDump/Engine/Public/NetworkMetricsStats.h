#pragma once
#include "CoreMinimal.h"
#include "NetworkMetricsBaseListener.h"
#include "NetworkMetricsStats.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNetworkMetricsStats : public UNetworkMetricsBaseListener {
    GENERATED_BODY()
public:
    UNetworkMetricsStats();

};

