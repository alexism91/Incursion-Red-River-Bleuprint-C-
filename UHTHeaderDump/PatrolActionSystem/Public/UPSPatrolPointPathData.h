#pragma once
#include "CoreMinimal.h"
#include "UPSPathData.h"
#include "UPSPatrolPointPathData.generated.h"

class AUPSPatrolPoint;

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FUPSPatrolPointPathData : public FUPSPathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AUPSPatrolPoint> FirstPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AUPSPatrolPoint> SecondPoint;
    
    FUPSPatrolPointPathData();
};

