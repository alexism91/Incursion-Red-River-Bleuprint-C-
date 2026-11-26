#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpressionFloat.h"
#include "NiagaraStatelessExpressionFloatConstant.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionFloatConstant : public FNiagaraStatelessExpressionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float A;
    
    NIAGARA_API FNiagaraStatelessExpressionFloatConstant();
};

