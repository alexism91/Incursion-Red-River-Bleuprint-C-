#pragma once
#include "CoreMinimal.h"
#include "EStateTreeExpressionOperand.h"
#include "StateTreeNodeBase.h"
#include "StateTreeConsiderationBase.generated.h"

USTRUCT(BlueprintType)
struct FStateTreeConsiderationBase : public FStateTreeNodeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStateTreeExpressionOperand Operand;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 DeltaIndent;
    
    STATETREEMODULE_API FStateTreeConsiderationBase();
};

