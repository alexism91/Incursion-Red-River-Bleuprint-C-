#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpressionFloat.h"
#include "NiagaraStatelessExpressionFloatBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionFloatBinding : public FNiagaraStatelessExpressionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName A;
    
    NIAGARA_API FNiagaraStatelessExpressionFloatBinding();
};

