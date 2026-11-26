#pragma once
#include "CoreMinimal.h"
#include "NetworkMetricsBaseListener.h"
#include "NetworkMetricsCSV.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNetworkMetricsCSV : public UNetworkMetricsBaseListener {
    GENERATED_BODY()
public:
    UNetworkMetricsCSV();

};

