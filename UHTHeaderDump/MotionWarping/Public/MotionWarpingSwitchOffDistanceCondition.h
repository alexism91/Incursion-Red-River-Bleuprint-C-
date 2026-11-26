#pragma once
#include "CoreMinimal.h"
#include "ESwitchOffConditionDistanceAxesType.h"
#include "ESwitchOffConditionDistanceOp.h"
#include "ESwitchOffConditionEffect.h"
#include "MotionWarpingSwitchOffCondition.h"
#include "MotionWarpingSwitchOffDistanceCondition.generated.h"

class AActor;
class UMotionWarpingSwitchOffDistanceCondition;

UCLASS(Blueprintable, EditInlineNew)
class UMotionWarpingSwitchOffDistanceCondition : public UMotionWarpingSwitchOffCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwitchOffConditionDistanceOp Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwitchOffConditionDistanceAxesType AxesType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UMotionWarpingSwitchOffDistanceCondition();

    UFUNCTION(BlueprintCallable)
    static UMotionWarpingSwitchOffDistanceCondition* CreateSwitchOffDistanceCondition(UPARAM(Ref) AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, ESwitchOffConditionDistanceOp InOperator, float InDistance, bool InbUseWarpTargetAsTargetLocation, AActor* InTargetActor);
    
};

