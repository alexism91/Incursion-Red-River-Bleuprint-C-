#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetworkMetricConfig.h"
#include "NetworkMetricsConfig.generated.h"

UCLASS(Blueprintable, Config=Engine)
class UNetworkMetricsConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetworkMetricConfig> Listeners;
    
    UNetworkMetricsConfig();

};

