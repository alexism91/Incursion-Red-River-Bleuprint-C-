#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetworkMetricsBaseListener.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Config=Engine)
class UNetworkMetricsBaseListener : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double IntervalSeconds;
    
public:
    UNetworkMetricsBaseListener();

};

