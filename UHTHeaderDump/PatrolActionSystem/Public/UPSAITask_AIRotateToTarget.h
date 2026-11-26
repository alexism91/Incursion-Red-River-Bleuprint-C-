#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
#include "OnRotationTaskFinishedDelegate.h"
#include "UPSAITask_AIRotateToTarget.generated.h"

class AAIController;
class AActor;
class ACharacter;
class UUPSAITask_AIRotateToTarget;

UCLASS(Blueprintable)
class PATROLACTIONSYSTEM_API UUPSAITask_AIRotateToTarget : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRotationTaskFinished OnRotationTaskFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* AIC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
public:
    UUPSAITask_AIRotateToTarget();

    UFUNCTION(BlueprintCallable)
    static UUPSAITask_AIRotateToTarget* RotateAIToTargetRotation(AAIController* AIController, FRotator TargetRotation, bool bUseCustomRotationSpeed, float CustomRotationSpeed, float ErrorTolerance);
    
    UFUNCTION(BlueprintCallable)
    static UUPSAITask_AIRotateToTarget* RotateAIToTargetActor(AAIController* AIController, AActor* RotationTarget, bool bUseCustomRotationSpeed, float CustomRotationSpeed, float ErrorTolerance);
    
};

