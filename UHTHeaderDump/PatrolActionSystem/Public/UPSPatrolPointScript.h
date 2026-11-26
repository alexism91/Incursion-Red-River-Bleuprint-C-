#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UPSPatrolPointScript.generated.h"

class ACharacter;
class AUPSPatrolPoint;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PATROLACTIONSYSTEM_API UUPSPatrolPointScript : public UObject {
    GENERATED_BODY()
public:
    UUPSPatrolPointScript();

    UFUNCTION(BlueprintCallable)
    void StartMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point);
    
    UFUNCTION(BlueprintCallable)
    void ReachPoint(ACharacter* Character, AUPSPatrolPoint* Point);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_StartMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ReachPoint(ACharacter* Character, AUPSPatrolPoint* Point);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_AbortMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point);
    
    UFUNCTION(BlueprintCallable)
    void AbortMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point);
    
};

