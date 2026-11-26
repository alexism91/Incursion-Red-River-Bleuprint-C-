#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpression.h"
#include "NiagaraStatelessExpressionVec3.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec3 : public FNiagaraStatelessExpression {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraStatelessExpressionVec3();
};

