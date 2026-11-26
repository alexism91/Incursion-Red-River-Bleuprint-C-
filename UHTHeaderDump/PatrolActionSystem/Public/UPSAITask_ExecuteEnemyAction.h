#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
#include "EEnemyActionFinishResult.h"
#include "OnActionFinishedDelegate.h"
#include "UPSAITask_ExecuteEnemyAction.generated.h"

class ACharacter;
class UUPSAITask_ExecuteEnemyAction;
class UUPSEnemyAction;

UCLASS(Blueprintable)
class PATROLACTIONSYSTEM_API UUPSAITask_ExecuteEnemyAction : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionFinished OnEnemyActionFinishedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUPSEnemyAction* EnemyAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Character;
    
public:
    UUPSAITask_ExecuteEnemyAction();

private:
    UFUNCTION(BlueprintCallable)
    void OnActionFinished(EEnemyActionFinishResult Result);
    
public:
    UFUNCTION(BlueprintCallable)
    static UUPSAITask_ExecuteEnemyAction* ExecuteEnemyAction(UUPSEnemyAction* EnemyActionToActivate, ACharacter* NewCharacter);
    
    UFUNCTION(BlueprintCallable)
    void AbortAction();
    
};

