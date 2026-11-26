#pragma once
#include "CoreMinimal.h"
#include "PatrolPointScript.generated.h"

class UUPSPatrolPointScript;

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FPatrolPointScript {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUPSPatrolPointScript* PatrolPointScript;
    
    FPatrolPointScript();
};

