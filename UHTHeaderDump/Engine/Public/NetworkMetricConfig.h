#pragma once
#include "CoreMinimal.h"
#include "ENetworkMetricEnableMode.h"
#include "NetworkMetricConfig.generated.h"

class UNetworkMetricsBaseListener;

USTRUCT(BlueprintType)
struct FNetworkMetricConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MetricName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNetworkMetricsBaseListener> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENetworkMetricEnableMode EnableMode;
    
    ENGINE_API FNetworkMetricConfig();
};

