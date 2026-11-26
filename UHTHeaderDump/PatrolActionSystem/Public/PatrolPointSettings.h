#pragma once
#include "CoreMinimal.h"
#include "EEnemyActionsExecutionType.h"
#include "EnemyActionSelector.h"
#include "PatrolPointScript.h"
#include "PatrolPointSettings.generated.h"

class UUPSEnemyActionsPreset;
class UUPSPatrolPointSolver;

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FPatrolPointSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatrolPointScript> PatrolPointScripts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyActionSelector> PatrolPointActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEnemyActionsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUPSEnemyActionsPreset* EnemyActionsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyActionsExecutionType EnemyActionsExecutionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateOnPointAfterReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReachRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUPSPatrolPointSolver* NextPatrolPointSolver;
    
    FPatrolPointSettings();
};

