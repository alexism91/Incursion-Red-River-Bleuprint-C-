#pragma once
#include "CoreMinimal.h"
#include "UPSPathData.h"
#include "UPSPatrolComponentPathData.generated.h"

class UUPSPatrolComponent;

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FUPSPatrolComponentPathData : public FUPSPathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUPSPatrolComponent> PatrolComponent;
    
    FUPSPatrolComponentPathData();
};

