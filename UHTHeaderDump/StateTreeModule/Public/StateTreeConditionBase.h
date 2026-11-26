#pragma once
#include "CoreMinimal.h"
#include "EStateTreeConditionEvaluationMode.h"
#include "EStateTreeExpressionOperand.h"
#include "StateTreeNodeBase.h"
#include "StateTreeConditionBase.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeConditionBase : public FStateTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeExpressionOperand Operand;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 DeltaIndent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeConditionEvaluationMode EvaluationMode;
    
    STATETREEMODULE_API FStateTreeConditionBase();
};

