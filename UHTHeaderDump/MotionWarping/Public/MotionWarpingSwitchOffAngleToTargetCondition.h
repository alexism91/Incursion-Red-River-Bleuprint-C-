#pragma once
#include "CoreMinimal.h"
#include "ESwitchOffConditionAngleOp.h"
#include "ESwitchOffConditionEffect.h"
#include "MotionWarpingSwitchOffCondition.h"
#include "MotionWarpingSwitchOffAngleToTargetCondition.generated.h"

class AActor;
class UMotionWarpingSwitchOffAngleToTargetCondition;

UCLASS(Blueprintable, EditInlineNew)
class UMotionWarpingSwitchOffAngleToTargetCondition : public UMotionWarpingSwitchOffCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwitchOffConditionAngleOp Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreZAxis;
    
public:
    UMotionWarpingSwitchOffAngleToTargetCondition();

    UFUNCTION(BlueprintCallable)
    static UMotionWarpingSwitchOffAngleToTargetCondition* CreateSwitchOffAngleToTargetCondition(UPARAM(Ref) AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, ESwitchOffConditionAngleOp InOperator, float InAngle, bool bInIgnoreZAxis, bool bInUseWarpTargetAsTargetLocation, AActor* InTargetActor);
    
};

