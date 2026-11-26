#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WorldMetricsCore -ObjectName=WorldMetricInterface -FallbackName=WorldMetricInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=WorldMetricsCore -ObjectName=WorldMetricsActorTrackerSubscriber -FallbackName=WorldMetricsActorTrackerSubscriber
#include "CsvActorCountMetric.generated.h"

UCLASS(Blueprintable)
class UCsvActorCountMetric : public UWorldMetricInterface, public IWorldMetricsActorTrackerSubscriber {
    GENERATED_BODY()
public:
    UCsvActorCountMetric();


    // Fix for true pure virtual functions not being implemented
};

