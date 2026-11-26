#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EPathFollowingResult -FallbackName=EPathFollowingResult
#include "UPSMoveParams.h"
#include "UPSPointActionMovementHandler.h"
#include "UPSMovementHandlerDefault.generated.h"

class AAIController;
class ACharacter;
class UGameplayTask;
class UUPSAITask_AIRotateToTarget;
class UUPSMoveToEnemyPointAction;

UCLASS(Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSMovementHandlerDefault : public AUPSPointActionMovementHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUPSMoveParams MoveParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateOnPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask* ActiveGameplayTask;
    
public:
    AUPSMovementHandlerDefault(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterRotatedToPoint(AAIController* AIC, UUPSAITask_AIRotateToTarget* FinishedTask);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterReachPoint(ACharacter* Character, UUPSMoveToEnemyPointAction* MoveTask, TEnumAsByte<EPathFollowingResult::Type> Result);
    
};

