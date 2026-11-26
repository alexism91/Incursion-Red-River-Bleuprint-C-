#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpressionVec4.h"
#include "NiagaraStatelessExpressionVec4Binding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec4Binding : public FNiagaraStatelessExpressionVec4 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName A;
    
    NIAGARA_API FNiagaraStatelessExpressionVec4Binding();
};

