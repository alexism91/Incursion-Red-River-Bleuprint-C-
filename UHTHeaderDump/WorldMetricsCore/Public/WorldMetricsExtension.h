#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WorldMetricsExtension.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Within=WorldMetricsSubsystem)
class UWorldMetricsExtension : public UObject {
    GENERATED_BODY()
public:
    UWorldMetricsExtension();

};

