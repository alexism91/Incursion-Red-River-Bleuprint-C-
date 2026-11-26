#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIRequestID -FallbackName=AIRequestID
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AITask -FallbackName=AITask
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EPathFollowingResult -FallbackName=EPathFollowingResult
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OnMovetoEnemyPointActionFinishedDelegate.h"
#include "UPSMoveParams.h"
#include "UPSMoveToEnemyPointAction.generated.h"

class ACharacter;
class UUPSMoveToEnemyPointAction;

UCLASS(Blueprintable)
class PATROLACTIONSYSTEM_API UUPSMoveToEnemyPointAction : public UAITask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovetoEnemyPointActionFinished OnMoveToEnemyPointActionFinishedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* MoveChracter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUPSMoveParams MoveParams;
    
public:
    UUPSMoveToEnemyPointAction();

    UFUNCTION(BlueprintCallable)
    static UUPSMoveToEnemyPointAction* UPSMoveToLocation(ACharacter* Character, FVector Location, FUPSMoveParams& NewMoveParams);
    
    UFUNCTION(BlueprintCallable)
    void StopMovement(bool bEndTask);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);
    
};

