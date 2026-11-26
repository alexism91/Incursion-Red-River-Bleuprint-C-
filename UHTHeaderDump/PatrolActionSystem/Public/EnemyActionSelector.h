#pragma once
#include "CoreMinimal.h"
#include "EnemyActionSelector.generated.h"

class UUPSEnemyAction;

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FEnemyActionSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInstancedEnemyActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUPSEnemyAction* InstancedEnemyAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUPSEnemyAction* DAEnemyAction;
    
    FEnemyActionSelector();
};

