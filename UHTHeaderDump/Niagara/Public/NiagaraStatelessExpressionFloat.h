#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpression.h"
#include "NiagaraStatelessExpressionFloat.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionFloat : public FNiagaraStatelessExpression {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraStatelessExpressionFloat();
};

