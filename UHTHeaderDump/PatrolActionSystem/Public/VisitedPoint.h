#pragma once
#include "CoreMinimal.h"
#include "VisitedPoint.generated.h"

class AUPSPatrolPoint;

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FVisitedPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AUPSPatrolPoint> FirstPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AUPSPatrolPoint> SecondPoint;
    
    FVisitedPoint();
};

