#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpression.h"
#include "NiagaraStatelessExpressionVec4.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec4 : public FNiagaraStatelessExpression {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraStatelessExpressionVec4();
};

