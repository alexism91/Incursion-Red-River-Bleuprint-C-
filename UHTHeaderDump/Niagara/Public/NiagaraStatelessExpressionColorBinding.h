#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpressionColor.h"
#include "NiagaraStatelessExpressionColorBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionColorBinding : public FNiagaraStatelessExpressionColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName A;
    
    NIAGARA_API FNiagaraStatelessExpressionColorBinding();
};

