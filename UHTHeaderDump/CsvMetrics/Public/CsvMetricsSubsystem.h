#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Templates/SubclassOf.h"
#include "CsvMetricsSubsystem.generated.h"

class UWorldMetricInterface;

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Engine)
class UCsvMetricsSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UWorldMetricInterface>> MetricClasses;
    
    UCsvMetricsSubsystem();

};

