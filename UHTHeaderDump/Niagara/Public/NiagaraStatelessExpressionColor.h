#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpression.h"
#include "NiagaraStatelessExpressionColor.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionColor : public FNiagaraStatelessExpression {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraStatelessExpressionColor();
};

