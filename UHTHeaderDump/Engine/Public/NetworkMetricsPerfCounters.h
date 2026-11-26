#pragma once
#include "CoreMinimal.h"
#include "NetworkMetricsBaseListener.h"
#include "NetworkMetricsPerfCounters.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNetworkMetricsPerfCounters : public UNetworkMetricsBaseListener {
    GENERATED_BODY()
public:
    UNetworkMetricsPerfCounters();

};

