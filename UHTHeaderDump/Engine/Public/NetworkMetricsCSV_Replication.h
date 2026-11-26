#pragma once
#include "CoreMinimal.h"
#include "NetworkMetricsCSV.h"
#include "NetworkMetricsCSV_Replication.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNetworkMetricsCSV_Replication : public UNetworkMetricsCSV {
    GENERATED_BODY()
public:
    UNetworkMetricsCSV_Replication();

};

