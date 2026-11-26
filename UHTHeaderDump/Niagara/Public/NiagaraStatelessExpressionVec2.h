#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpression.h"
#include "NiagaraStatelessExpressionVec2.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec2 : public FNiagaraStatelessExpression {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraStatelessExpressionVec2();
};

