#pragma once
#include "CoreMinimal.h"
#include "WorldMetricCollection.generated.h"

class UWorldMetricInterface;
class UWorldMetricsSubsystem;

USTRUCT(BlueprintType)
struct FWorldMetricCollection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorldMetricInterface*> Metrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorldMetricsSubsystem> Subsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
public:
    WORLDMETRICSCORE_API FWorldMetricCollection();
};

