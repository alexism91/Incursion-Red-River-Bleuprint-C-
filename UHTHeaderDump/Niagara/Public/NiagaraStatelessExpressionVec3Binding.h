#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatelessExpressionVec3.h"
#include "NiagaraStatelessExpressionVec3Binding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraStatelessExpressionVec3Binding : public FNiagaraStatelessExpressionVec3 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName A;
    
    NIAGARA_API FNiagaraStatelessExpressionVec3Binding();
};

