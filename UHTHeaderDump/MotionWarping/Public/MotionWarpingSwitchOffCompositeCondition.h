#pragma once
#include "CoreMinimal.h"
#include "ESwitchOffConditionCompositeOp.h"
#include "ESwitchOffConditionEffect.h"
#include "MotionWarpingSwitchOffCondition.h"
#include "MotionWarpingSwitchOffCompositeCondition.generated.h"

class AActor;
class UMotionWarpingSwitchOffCompositeCondition;

UCLASS(Blueprintable, EditInlineNew)
class UMotionWarpingSwitchOffCompositeCondition : public UMotionWarpingSwitchOffCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMotionWarpingSwitchOffCondition* SwitchOffConditionA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwitchOffConditionCompositeOp LogicOperator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMotionWarpingSwitchOffCondition* SwitchOffConditionB;
    
public:
    UMotionWarpingSwitchOffCompositeCondition();

    UFUNCTION(BlueprintCallable)
    static UMotionWarpingSwitchOffCompositeCondition* CreateSwitchOffCompositeCondition(UPARAM(Ref) AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, UPARAM(Ref) UMotionWarpingSwitchOffCondition*& InSwitchOffConditionA, ESwitchOffConditionCompositeOp InLogicOperator, UPARAM(Ref) UMotionWarpingSwitchOffCondition*& InSwitchOffConditionB, bool bInUseWarpTargetAsTargetLocation, AActor* InTargetActor);
    
};

