#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpressionVec2.h"
#include "NiagaraStatelessExpressionVec2Binding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec2Binding : public FNiagaraStatelessExpressionVec2 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName A;
    
    NIAGARA_API FNiagaraStatelessExpressionVec2Binding();
};

