#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldMetricInterface.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Within=WorldMetricsSubsystem)
class UWorldMetricInterface : public UObject {
    GENERATED_BODY()
public:
    UWorldMetricInterface();

};

